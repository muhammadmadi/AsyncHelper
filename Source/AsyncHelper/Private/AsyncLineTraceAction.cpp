#include "AsyncLineTraceAction.h"
#include "AsyncHelperSubsystem.h"
#include "AsyncHelper.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"

UAsyncLineTraceAction::UAsyncLineTraceAction()
	: Start(FVector::ZeroVector)
	, End(FVector::ZeroVector)
	, TraceChannel(ECC_Visibility)
	, bTraceComplex(false)
	, DrawDebugType(EDrawDebugTrace::None)
	, TraceType(EAsyncTraceType::LineTraceByChannel)
{
}

UAsyncLineTraceAction* UAsyncLineTraceAction::AsyncLineTraceByChannel(
	const UObject* WorldContext,
	FVector Start,
	FVector End,
	TEnumAsByte<ECollisionChannel> TraceChannel,
	bool bTraceComplex,
	const TArray<AActor*>& ActorsToIgnore,
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
	const FString& TaskName)
{
	UAsyncLineTraceAction* Action = NewObject<UAsyncLineTraceAction>();
	Action->Start = Start;
	Action->End = End;
	Action->TraceChannel = TraceChannel;
	Action->bTraceComplex = bTraceComplex;
	Action->ActorsToIgnore = ActorsToIgnore;
	Action->DrawDebugType = DrawDebugType;
	Action->TaskName = TaskName;
	Action->TraceType = EAsyncTraceType::LineTraceByChannel;
	Action->WorldContextObject = WorldContext;
	Action->RegisterWithGameInstance(WorldContext);
	return Action;
}

UAsyncLineTraceAction* UAsyncLineTraceAction::AsyncLineTraceByObjectType(
	const UObject* WorldContext,
	FVector Start,
	FVector End,
	const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes,
	bool bTraceComplex,
	const TArray<AActor*>& ActorsToIgnore,
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
	const FString& TaskName)
{
	UAsyncLineTraceAction* Action = NewObject<UAsyncLineTraceAction>();
	Action->Start = Start;
	Action->End = End;
	Action->ObjectTypes = ObjectTypes;
	Action->bTraceComplex = bTraceComplex;
	Action->ActorsToIgnore = ActorsToIgnore;
	Action->DrawDebugType = DrawDebugType;
	Action->TaskName = TaskName;
	Action->TraceType = EAsyncTraceType::LineTraceByObjectType;
	Action->WorldContextObject = WorldContext;
	Action->RegisterWithGameInstance(WorldContext);
	return Action;
}

UAsyncLineTraceAction* UAsyncLineTraceAction::AsyncMultiLineTraceByChannel(
	const UObject* WorldContext,
	FVector Start,
	FVector End,
	TEnumAsByte<ECollisionChannel> TraceChannel,
	bool bTraceComplex,
	const TArray<AActor*>& ActorsToIgnore,
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
	const FString& TaskName)
{
	UAsyncLineTraceAction* Action = NewObject<UAsyncLineTraceAction>();
	Action->Start = Start;
	Action->End = End;
	Action->TraceChannel = TraceChannel;
	Action->bTraceComplex = bTraceComplex;
	Action->ActorsToIgnore = ActorsToIgnore;
	Action->DrawDebugType = DrawDebugType;
	Action->TaskName = TaskName;
	Action->TraceType = EAsyncTraceType::MultiLineTraceByChannel;
	Action->WorldContextObject = WorldContext;
	Action->RegisterWithGameInstance(WorldContext);
	return Action;
}

void UAsyncLineTraceAction::Activate()
{
	Super::Activate();

	UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem();
	if (!Subsystem)
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncLineTraceAction: AsyncHelper subsystem not available"));
		OnCancelled.Broadcast();
		OnMultiCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	// Execute the trace asynchronously on a background thread
	UE::Tasks::Launch(TEXT("AsyncLineTrace"), [this]()
	{
		// Perform the trace on background thread
		FHitResult HitResult;
		TArray<FHitResult> HitResults;
		bool bHit = false;

		// Get world reference (safe to access from background thread for read-only operations)
		if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject.Get(), EGetWorldErrorMode::LogAndReturnNull))
		{
			// Execute the appropriate trace type
			switch (TraceType)
			{
			case EAsyncTraceType::LineTraceByChannel:
				{
					FCollisionQueryParams QueryParams = CreateQueryParams();
					bHit = World->LineTraceSingleByChannel(HitResult, Start, End, TraceChannel, QueryParams);
				}
				break;
			case EAsyncTraceType::LineTraceByObjectType:
				{
					FCollisionObjectQueryParams ObjectQueryParams = CreateObjectQueryParams();
					FCollisionQueryParams QueryParams = CreateQueryParams();
					bHit = World->LineTraceSingleByObjectType(HitResult, Start, End, ObjectQueryParams, QueryParams);
				}
				break;
			case EAsyncTraceType::MultiLineTraceByChannel:
				{
					FCollisionQueryParams QueryParams = CreateQueryParams();
					bHit = World->LineTraceMultiByChannel(HitResults, Start, End, TraceChannel, QueryParams);
				}
				break;
			}
		}

		// Return to game thread for callback and debug drawing
		AsyncTask(ENamedThreads::GameThread, [this, HitResult, HitResults, bHit]()
		{
			HandleTraceCompleted(HitResult, HitResults, bHit);
		});
	});

	UE_LOG(LogAsyncHelper, Log, TEXT("AsyncLineTraceAction: Started async trace '%s'"), *TaskName);
}

void UAsyncLineTraceAction::Cancel()
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

void UAsyncLineTraceAction::HandleTraceCompleted(const FHitResult& HitResult, const TArray<FHitResult>& HitResults, bool bHit)
{
	// Check if we were cancelled during execution
	if (!IsValidLowLevel() || HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
	{
		return;
	}

	// Draw debug if requested (must be done on game thread)
	if (DrawDebugType != EDrawDebugTrace::None)
	{
		if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject.Get(), EGetWorldErrorMode::LogAndReturnNull))
		{
			const float DebugLifeTime = DrawDebugType == EDrawDebugTrace::Persistent ? -1.0f : 5.0f;
			const FColor DebugColor = bHit ? FColor::Red : FColor::Green;
			DrawDebugLine(World, Start, End, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);

			// Draw hit points
			if (TraceType == EAsyncTraceType::MultiLineTraceByChannel)
			{
				for (const FHitResult& Hit : HitResults)
				{
					DrawDebugPoint(World, Hit.Location, 8.0f, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
				}
			}
			else if (bHit)
			{
				DrawDebugPoint(World, HitResult.Location, 10.0f, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
			}
		}
	}

	// Broadcast appropriate results
	switch (TraceType)
	{
	case EAsyncTraceType::LineTraceByChannel:
	case EAsyncTraceType::LineTraceByObjectType:
		if (bHit)
		{
			OnHit.Broadcast(HitResult);
		}
		else
		{
			OnMiss.Broadcast();
		}
		break;
	case EAsyncTraceType::MultiLineTraceByChannel:
		if (bHit && HitResults.Num() > 0)
		{
			OnMultiHit.Broadcast(HitResults);
		}
		else
		{
			OnMultiMiss.Broadcast();
		}
		break;
	}

	SetReadyToDestroy();
}



FCollisionQueryParams UAsyncLineTraceAction::CreateQueryParams() const
{
	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = bTraceComplex;
	QueryParams.bReturnPhysicalMaterial = true;
	QueryParams.AddIgnoredActors(ActorsToIgnore);
	return QueryParams;
}

FCollisionObjectQueryParams UAsyncLineTraceAction::CreateObjectQueryParams() const
{
	FCollisionObjectQueryParams ObjectQueryParams;
	for (const auto& ObjectType : ObjectTypes)
	{
		ObjectQueryParams.AddObjectTypesToQuery(UEngineTypes::ConvertToCollisionChannel(ObjectType));
	}
	return ObjectQueryParams;
}

UAsyncHelperSubsystem* UAsyncLineTraceAction::GetAsyncHelperSubsystem() const
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
