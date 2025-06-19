#include "AsyncSphereTraceAction.h"
#include "AsyncHelperSubsystem.h"
#include "AsyncHelper.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"

UAsyncSphereTraceAction::UAsyncSphereTraceAction()
	: Start(FVector::ZeroVector)
	, End(FVector::ZeroVector)
	, Radius(0.0f)
	, TraceChannel(ECC_Visibility)
	, bTraceComplex(false)
	, DrawDebugType(EDrawDebugTrace::None)
	, TraceType(EAsyncSphereTraceType::SphereTraceByChannel)
{
}

UAsyncSphereTraceAction* UAsyncSphereTraceAction::AsyncSphereTraceByChannel(
	const UObject* WorldContext,
	FVector Start,
	FVector End,
	float Radius,
	TEnumAsByte<ECollisionChannel> TraceChannel,
	bool bTraceComplex,
	const TArray<AActor*>& ActorsToIgnore,
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
	const FString& TaskName)
{
	UAsyncSphereTraceAction* Action = NewObject<UAsyncSphereTraceAction>();
	Action->Start = Start;
	Action->End = End;
	Action->Radius = Radius;
	Action->TraceChannel = TraceChannel;
	Action->bTraceComplex = bTraceComplex;
	Action->ActorsToIgnore = ActorsToIgnore;
	Action->DrawDebugType = DrawDebugType;
	Action->TaskName = TaskName;
	Action->TraceType = EAsyncSphereTraceType::SphereTraceByChannel;
	Action->WorldContextObject = WorldContext;
	Action->RegisterWithGameInstance(WorldContext);
	return Action;
}

UAsyncSphereTraceAction* UAsyncSphereTraceAction::AsyncSphereTraceByObjectType(
	const UObject* WorldContext,
	FVector Start,
	FVector End,
	float Radius,
	const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes,
	bool bTraceComplex,
	const TArray<AActor*>& ActorsToIgnore,
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
	const FString& TaskName)
{
	UAsyncSphereTraceAction* Action = NewObject<UAsyncSphereTraceAction>();
	Action->Start = Start;
	Action->End = End;
	Action->Radius = Radius;
	Action->ObjectTypes = ObjectTypes;
	Action->bTraceComplex = bTraceComplex;
	Action->ActorsToIgnore = ActorsToIgnore;
	Action->DrawDebugType = DrawDebugType;
	Action->TaskName = TaskName;
	Action->TraceType = EAsyncSphereTraceType::SphereTraceByObjectType;
	Action->WorldContextObject = WorldContext;
	Action->RegisterWithGameInstance(WorldContext);
	return Action;
}

UAsyncSphereTraceAction* UAsyncSphereTraceAction::AsyncMultiSphereTraceByChannel(
	const UObject* WorldContext,
	FVector Start,
	FVector End,
	float Radius,
	TEnumAsByte<ECollisionChannel> TraceChannel,
	bool bTraceComplex,
	const TArray<AActor*>& ActorsToIgnore,
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
	const FString& TaskName)
{
	UAsyncSphereTraceAction* Action = NewObject<UAsyncSphereTraceAction>();
	Action->Start = Start;
	Action->End = End;
	Action->Radius = Radius;
	Action->TraceChannel = TraceChannel;
	Action->bTraceComplex = bTraceComplex;
	Action->ActorsToIgnore = ActorsToIgnore;
	Action->DrawDebugType = DrawDebugType;
	Action->TaskName = TaskName;
	Action->TraceType = EAsyncSphereTraceType::MultiSphereTraceByChannel;
	Action->WorldContextObject = WorldContext;
	Action->RegisterWithGameInstance(WorldContext);
	return Action;
}

void UAsyncSphereTraceAction::Activate()
{
	Super::Activate();

	UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem();
	if (!Subsystem)
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncSphereTraceAction: AsyncHelper subsystem not available"));
		OnCancelled.Broadcast();
		OnMultiCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	// Create delegate for completion
	FAsyncTaskDelegate CompletionDelegate;
	CompletionDelegate.BindUFunction(this, FName("HandleTraceCompleted"));

	// Execute the async trace
	TaskHandle = Subsystem->ExecuteAsyncDelay(0.0f, CompletionDelegate, TaskName);

	if (!TaskHandle.IsValid())
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncSphereTraceAction: Failed to create async task"));
		OnCancelled.Broadcast();
		OnMultiCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UE_LOG(LogAsyncHelper, Log, TEXT("AsyncSphereTraceAction: Started trace '%s'"), *TaskName);
}

void UAsyncSphereTraceAction::Cancel()
{
	if (TaskHandle.IsValid())
	{
		if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem())
		{
			Subsystem->CancelAsyncTask(TaskHandle);
		}
	}

	OnCancelled.Broadcast();
	OnMultiCancelled.Broadcast();
	SetReadyToDestroy();
}

void UAsyncSphereTraceAction::HandleTraceCompleted()
{
	// Check if we were cancelled during execution
	if (!IsValidLowLevel() || HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
	{
		return;
	}

	// Execute the appropriate trace type
	switch (TraceType)
	{
	case EAsyncSphereTraceType::SphereTraceByChannel:
	case EAsyncSphereTraceType::SphereTraceByObjectType:
		ExecuteSphereTrace();
		break;
	case EAsyncSphereTraceType::MultiSphereTraceByChannel:
		ExecuteMultiSphereTrace();
		break;
	}

	SetReadyToDestroy();
}

void UAsyncSphereTraceAction::ExecuteSphereTrace()
{
	if (!WorldContextObject.IsValid())
	{
		OnMiss.Broadcast();
		return;
	}

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject.Get(), EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		OnMiss.Broadcast();
		return;
	}

	FHitResult HitResult;
	bool bHit = false;

	FCollisionShape SphereShape = FCollisionShape::MakeSphere(Radius);

	if (TraceType == EAsyncSphereTraceType::SphereTraceByChannel)
	{
		FCollisionQueryParams QueryParams = CreateQueryParams();
		bHit = World->SweepSingleByChannel(HitResult, Start, End, FQuat::Identity, TraceChannel, SphereShape, QueryParams);
	}
	else if (TraceType == EAsyncSphereTraceType::SphereTraceByObjectType)
	{
		FCollisionObjectQueryParams ObjectQueryParams = CreateObjectQueryParams();
		FCollisionQueryParams QueryParams = CreateQueryParams();
		bHit = World->SweepSingleByObjectType(HitResult, Start, End, FQuat::Identity, ObjectQueryParams, SphereShape, QueryParams);
	}

	// Draw debug if requested
	if (DrawDebugType != EDrawDebugTrace::None)
	{
		const float DebugLifeTime = DrawDebugType == EDrawDebugTrace::Persistent ? -1.0f : 5.0f;
		const FColor DebugColor = bHit ? FColor::Red : FColor::Green;
		DrawDebugLine(World, Start, End, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
		DrawDebugSphere(World, Start, Radius, 12, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
		DrawDebugSphere(World, End, Radius, 12, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
		
		if (bHit)
		{
			DrawDebugSphere(World, HitResult.Location, Radius, 12, FColor::Orange, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
		}
	}

	// Broadcast result
	if (bHit)
	{
		OnHit.Broadcast(HitResult);
	}
	else
	{
		OnMiss.Broadcast();
	}
}

void UAsyncSphereTraceAction::ExecuteMultiSphereTrace()
{
	if (!WorldContextObject.IsValid())
	{
		OnMultiMiss.Broadcast();
		return;
	}

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject.Get(), EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		OnMultiMiss.Broadcast();
		return;
	}

	TArray<FHitResult> HitResults;
	bool bHit = false;

	FCollisionShape SphereShape = FCollisionShape::MakeSphere(Radius);
	FCollisionQueryParams QueryParams = CreateQueryParams();
	bHit = World->SweepMultiByChannel(HitResults, Start, End, FQuat::Identity, TraceChannel, SphereShape, QueryParams);

	// Draw debug if requested
	if (DrawDebugType != EDrawDebugTrace::None)
	{
		const float DebugLifeTime = DrawDebugType == EDrawDebugTrace::Persistent ? -1.0f : 5.0f;
		const FColor DebugColor = bHit ? FColor::Red : FColor::Green;
		DrawDebugLine(World, Start, End, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
		DrawDebugSphere(World, Start, Radius, 12, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
		DrawDebugSphere(World, End, Radius, 12, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);

		for (const FHitResult& Hit : HitResults)
		{
			DrawDebugSphere(World, Hit.Location, Radius, 12, FColor::Orange, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
		}
	}

	// Broadcast result
	if (bHit && HitResults.Num() > 0)
	{
		OnMultiHit.Broadcast(HitResults);
	}
	else
	{
		OnMultiMiss.Broadcast();
	}
}

FCollisionQueryParams UAsyncSphereTraceAction::CreateQueryParams() const
{
	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = bTraceComplex;
	QueryParams.bReturnPhysicalMaterial = true;
	QueryParams.AddIgnoredActors(ActorsToIgnore);
	return QueryParams;
}

FCollisionObjectQueryParams UAsyncSphereTraceAction::CreateObjectQueryParams() const
{
	FCollisionObjectQueryParams ObjectQueryParams;
	for (const auto& ObjectType : ObjectTypes)
	{
		ObjectQueryParams.AddObjectTypesToQuery(UEngineTypes::ConvertToCollisionChannel(ObjectType));
	}
	return ObjectQueryParams;
}

UAsyncHelperSubsystem* UAsyncSphereTraceAction::GetAsyncHelperSubsystem() const
{
	if (!WorldContextObject.IsValid())
	{
		return nullptr;
	}

	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject.Get(), EGetWorldErrorMode::LogAndReturnNull))
	{
		if (UGameInstance* GameInstance = World->GetGameInstance())
		{
			return GameInstance->GetSubsystem<UAsyncHelperSubsystem>();
		}
	}

	return nullptr;
}
