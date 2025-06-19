#include "AsyncTraceBlueprintLibrary.h"
#include "AsyncHelperSubsystem.h"
#include "AsyncHelper.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"

FAsyncTaskHandle UAsyncTraceBlueprintLibrary::AsyncLineTraceByChannelDelegate(
	const UObject* WorldContext,
	FVector Start,
	FVector End,
	TEnumAsByte<ECollisionChannel> TraceChannel,
	const FAsyncTraceHitDelegate& OnHit,
	const FAsyncTraceMissDelegate& OnMiss,
	bool bTraceComplex,
	const TArray<AActor*>& ActorsToIgnore,
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
	const FString& TaskName)
{
	UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext);
	if (!Subsystem)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncHelper subsystem not available"));
		return FAsyncTaskHandle();
	}

	// For now, execute the trace immediately and call the appropriate delegate
	// In a full implementation, you would want to create a proper async wrapper
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		if (OnMiss.IsBound())
		{
			OnMiss.ExecuteIfBound();
		}
		return FAsyncTaskHandle();
	}

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = bTraceComplex;
	QueryParams.bReturnPhysicalMaterial = true;
	QueryParams.AddIgnoredActors(ActorsToIgnore);

	bool bHit = World->LineTraceSingleByChannel(HitResult, Start, End, TraceChannel, QueryParams);

	// Draw debug if requested
	if (DrawDebugType != EDrawDebugTrace::None)
	{
		const float DebugLifeTime = DrawDebugType == EDrawDebugTrace::Persistent ? -1.0f : 5.0f;
		const FColor DebugColor = bHit ? FColor::Red : FColor::Green;
		DrawDebugLine(World, Start, End, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);

		if (bHit)
		{
			DrawDebugPoint(World, HitResult.Location, 10.0f, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
		}
	}

	// Execute appropriate delegate
	if (bHit && OnHit.IsBound())
	{
		OnHit.ExecuteIfBound(HitResult);
	}
	else if (!bHit && OnMiss.IsBound())
	{
		OnMiss.ExecuteIfBound();
	}

	// Return a dummy handle for now
	return FAsyncTaskHandle();
}

FAsyncTaskHandle UAsyncTraceBlueprintLibrary::AsyncLineTraceByObjectTypeDelegate(
	const UObject* WorldContext,
	FVector Start,
	FVector End,
	const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes,
	const FAsyncTraceHitDelegate& OnHit,
	const FAsyncTraceMissDelegate& OnMiss,
	bool bTraceComplex,
	const TArray<AActor*>& ActorsToIgnore,
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
	const FString& TaskName)
{
	UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext);
	if (!Subsystem)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncHelper subsystem not available"));
		return FAsyncTaskHandle();
	}

	// Execute the trace immediately for now
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		if (OnMiss.IsBound())
		{
			OnMiss.ExecuteIfBound();
		}
		return FAsyncTaskHandle();
	}

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = bTraceComplex;
	QueryParams.bReturnPhysicalMaterial = true;
	QueryParams.AddIgnoredActors(ActorsToIgnore);

	FCollisionObjectQueryParams ObjectQueryParams;
	for (const auto& ObjectType : ObjectTypes)
	{
		ObjectQueryParams.AddObjectTypesToQuery(UEngineTypes::ConvertToCollisionChannel(ObjectType));
	}

	bool bHit = World->LineTraceSingleByObjectType(HitResult, Start, End, ObjectQueryParams, QueryParams);

	// Draw debug if requested
	if (DrawDebugType != EDrawDebugTrace::None)
	{
		const float DebugLifeTime = DrawDebugType == EDrawDebugTrace::Persistent ? -1.0f : 5.0f;
		const FColor DebugColor = bHit ? FColor::Red : FColor::Green;
		DrawDebugLine(World, Start, End, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);

		if (bHit)
		{
			DrawDebugPoint(World, HitResult.Location, 10.0f, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
		}
	}

	// Execute appropriate delegate
	if (bHit && OnHit.IsBound())
	{
		OnHit.ExecuteIfBound(HitResult);
	}
	else if (!bHit && OnMiss.IsBound())
	{
		OnMiss.ExecuteIfBound();
	}

	return FAsyncTaskHandle();
}

FAsyncTaskHandle UAsyncTraceBlueprintLibrary::AsyncMultiLineTraceByChannelDelegate(
	const UObject* WorldContext,
	FVector Start,
	FVector End,
	TEnumAsByte<ECollisionChannel> TraceChannel,
	const FAsyncMultiTraceHitDelegate& OnHit,
	const FAsyncMultiTraceMissDelegate& OnMiss,
	bool bTraceComplex,
	const TArray<AActor*>& ActorsToIgnore,
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
	const FString& TaskName)
{
	UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext);
	if (!Subsystem)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncHelper subsystem not available"));
		return FAsyncTaskHandle();
	}

	// Execute the trace immediately for now
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		if (OnMiss.IsBound())
		{
			OnMiss.ExecuteIfBound();
		}
		return FAsyncTaskHandle();
	}

	TArray<FHitResult> HitResults;
	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = bTraceComplex;
	QueryParams.bReturnPhysicalMaterial = true;
	QueryParams.AddIgnoredActors(ActorsToIgnore);

	bool bHit = World->LineTraceMultiByChannel(HitResults, Start, End, TraceChannel, QueryParams);

	// Draw debug if requested
	if (DrawDebugType != EDrawDebugTrace::None)
	{
		const float DebugLifeTime = DrawDebugType == EDrawDebugTrace::Persistent ? -1.0f : 5.0f;
		const FColor DebugColor = bHit ? FColor::Red : FColor::Green;
		DrawDebugLine(World, Start, End, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);

		for (const FHitResult& Hit : HitResults)
		{
			DrawDebugPoint(World, Hit.Location, 8.0f, DebugColor, DrawDebugType == EDrawDebugTrace::Persistent, DebugLifeTime);
		}
	}

	// Execute appropriate delegate
	if (bHit && HitResults.Num() > 0 && OnHit.IsBound())
	{
		OnHit.ExecuteIfBound(HitResults);
	}
	else if ((!bHit || HitResults.Num() == 0) && OnMiss.IsBound())
	{
		OnMiss.ExecuteIfBound();
	}

	return FAsyncTaskHandle();
}

FAsyncTaskHandle UAsyncTraceBlueprintLibrary::AsyncSphereTraceByChannelDelegate(
	const UObject* WorldContext,
	FVector Start,
	FVector End,
	float Radius,
	TEnumAsByte<ECollisionChannel> TraceChannel,
	const FAsyncTraceHitDelegate& OnHit,
	const FAsyncTraceMissDelegate& OnMiss,
	bool bTraceComplex,
	const TArray<AActor*>& ActorsToIgnore,
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
	const FString& TaskName)
{
	UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext);
	if (!Subsystem)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncHelper subsystem not available"));
		return FAsyncTaskHandle();
	}

	// Execute the trace immediately for now
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull);
	if (!World)
	{
		if (OnMiss.IsBound())
		{
			OnMiss.ExecuteIfBound();
		}
		return FAsyncTaskHandle();
	}

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = bTraceComplex;
	QueryParams.bReturnPhysicalMaterial = true;
	QueryParams.AddIgnoredActors(ActorsToIgnore);

	FCollisionShape SphereShape = FCollisionShape::MakeSphere(Radius);
	bool bHit = World->SweepSingleByChannel(HitResult, Start, End, FQuat::Identity, TraceChannel, SphereShape, QueryParams);

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

	// Execute appropriate delegate
	if (bHit && OnHit.IsBound())
	{
		OnHit.ExecuteIfBound(HitResult);
	}
	else if (!bHit && OnMiss.IsBound())
	{
		OnMiss.ExecuteIfBound();
	}

	return FAsyncTaskHandle();
}

bool UAsyncTraceBlueprintLibrary::WasActorHit(const FHitResult& HitResult, AActor* Actor)
{
	return HitResult.bBlockingHit && HitResult.GetActor() == Actor;
}

AActor* UAsyncTraceBlueprintLibrary::GetHitActor(const FHitResult& HitResult)
{
	return HitResult.bBlockingHit ? HitResult.GetActor() : nullptr;
}

UPrimitiveComponent* UAsyncTraceBlueprintLibrary::GetHitComponent(const FHitResult& HitResult)
{
	return HitResult.bBlockingHit ? HitResult.GetComponent() : nullptr;
}

FVector UAsyncTraceBlueprintLibrary::GetHitLocation(const FHitResult& HitResult)
{
	return HitResult.bBlockingHit ? HitResult.Location : FVector::ZeroVector;
}

FVector UAsyncTraceBlueprintLibrary::GetHitNormal(const FHitResult& HitResult)
{
	return HitResult.bBlockingHit ? HitResult.Normal : FVector::ZeroVector;
}

float UAsyncTraceBlueprintLibrary::GetHitDistance(const FHitResult& HitResult)
{
	return HitResult.bBlockingHit ? HitResult.Distance : 0.0f;
}

UAsyncHelperSubsystem* UAsyncTraceBlueprintLibrary::GetAsyncHelperSubsystem(const UObject* WorldContext)
{
	if (!WorldContext)
	{
		return nullptr;
	}

	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (UGameInstance* GameInstance = World->GetGameInstance())
		{
			return GameInstance->GetSubsystem<UAsyncHelperSubsystem>();
		}
	}

	return nullptr;
}