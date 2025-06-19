#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "CollisionQueryParams.h"
#include "AsyncTaskManager.h"
#include "AsyncTraceBlueprintLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FAsyncTraceHitDelegate, const FHitResult&, HitResult);
DECLARE_DYNAMIC_DELEGATE(FAsyncTraceMissDelegate);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAsyncMultiTraceHitDelegate, const TArray<FHitResult>&, HitResults);
DECLARE_DYNAMIC_DELEGATE(FAsyncMultiTraceMissDelegate);

/**
 * Blueprint Function Library for Async Trace operations
 * Provides easy access to async tracing functionality from Blueprints
 */
UCLASS()
class ASYNCHELPER_API UAsyncTraceBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Execute an async line trace by channel with delegates
	 * @param WorldContext - World context for the operation
	 * @param Start - Start location of the trace
	 * @param End - End location of the trace
	 * @param TraceChannel - Collision channel to trace against
	 * @param OnHit - Delegate called when trace hits something
	 * @param OnMiss - Delegate called when trace misses
	 * @param bTraceComplex - Whether to trace against complex collision
	 * @param ActorsToIgnore - Array of actors to ignore during trace
	 * @param DrawDebugType - Debug drawing type
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Trace Library", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskHandle AsyncLineTraceByChannelDelegate(
		const UObject* WorldContext,
		FVector Start,
		FVector End,
		TEnumAsByte<ECollisionChannel> TraceChannel,
		const FAsyncTraceHitDelegate& OnHit,
		const FAsyncTraceMissDelegate& OnMiss,
		bool bTraceComplex,
		const TArray<AActor*>& ActorsToIgnore,
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
		const FString& TaskName
	);

	/**
	 * Execute an async line trace by object type with delegates
	 * @param WorldContext - World context for the operation
	 * @param Start - Start location of the trace
	 * @param End - End location of the trace
	 * @param ObjectTypes - Object types to trace against
	 * @param OnHit - Delegate called when trace hits something
	 * @param OnMiss - Delegate called when trace misses
	 * @param bTraceComplex - Whether to trace against complex collision
	 * @param ActorsToIgnore - Array of actors to ignore during trace
	 * @param DrawDebugType - Debug drawing type
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Trace Library", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskHandle AsyncLineTraceByObjectTypeDelegate(
		const UObject* WorldContext,
		FVector Start,
		FVector End,
		const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes,
		const FAsyncTraceHitDelegate& OnHit,
		const FAsyncTraceMissDelegate& OnMiss,
		bool bTraceComplex,
		const TArray<AActor*>& ActorsToIgnore,
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
		const FString& TaskName
	);

	/**
	 * Execute an async multi line trace by channel with delegates
	 * @param WorldContext - World context for the operation
	 * @param Start - Start location of the trace
	 * @param End - End location of the trace
	 * @param TraceChannel - Collision channel to trace against
	 * @param OnHit - Delegate called when trace hits something
	 * @param OnMiss - Delegate called when trace misses
	 * @param bTraceComplex - Whether to trace against complex collision
	 * @param ActorsToIgnore - Array of actors to ignore during trace
	 * @param DrawDebugType - Debug drawing type
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Trace Library", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskHandle AsyncMultiLineTraceByChannelDelegate(
		const UObject* WorldContext,
		FVector Start,
		FVector End,
		TEnumAsByte<ECollisionChannel> TraceChannel,
		const FAsyncMultiTraceHitDelegate& OnHit,
		const FAsyncMultiTraceMissDelegate& OnMiss,
		bool bTraceComplex,
		const TArray<AActor*>& ActorsToIgnore,
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
		const FString& TaskName
	);

	/**
	 * Execute an async sphere trace by channel with delegates
	 * @param WorldContext - World context for the operation
	 * @param Start - Start location of the trace
	 * @param End - End location of the trace
	 * @param Radius - Radius of the sphere
	 * @param TraceChannel - Collision channel to trace against
	 * @param OnHit - Delegate called when trace hits something
	 * @param OnMiss - Delegate called when trace misses
	 * @param bTraceComplex - Whether to trace against complex collision
	 * @param ActorsToIgnore - Array of actors to ignore during trace
	 * @param DrawDebugType - Debug drawing type
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Trace Library", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskHandle AsyncSphereTraceByChannelDelegate(
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
		const FString& TaskName
	);

	/**
	 * Check if an actor was hit in the trace result
	 * @param HitResult - The hit result to check
	 * @param Actor - The actor to check for
	 * @return True if the actor was hit
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Trace Library", BlueprintPure)
	static bool WasActorHit(const FHitResult& HitResult, AActor* Actor);

	/**
	 * Get the hit actor from a hit result
	 * @param HitResult - The hit result
	 * @return The hit actor, or nullptr if none
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Trace Library", BlueprintPure)
	static AActor* GetHitActor(const FHitResult& HitResult);

	/**
	 * Get the hit component from a hit result
	 * @param HitResult - The hit result
	 * @return The hit component, or nullptr if none
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Trace Library", BlueprintPure)
	static UPrimitiveComponent* GetHitComponent(const FHitResult& HitResult);

	/**
	 * Get the hit location from a hit result
	 * @param HitResult - The hit result
	 * @return The hit location
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Trace Library", BlueprintPure)
	static FVector GetHitLocation(const FHitResult& HitResult);

	/**
	 * Get the hit normal from a hit result
	 * @param HitResult - The hit result
	 * @return The hit normal
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Trace Library", BlueprintPure)
	static FVector GetHitNormal(const FHitResult& HitResult);

	/**
	 * Get the hit distance from a hit result
	 * @param HitResult - The hit result
	 * @return The hit distance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Trace Library", BlueprintPure)
	static float GetHitDistance(const FHitResult& HitResult);

protected:
	/**
	 * Helper function to get the AsyncHelper subsystem
	 * @param WorldContext - World context for the operation
	 * @return Pointer to the subsystem, or nullptr if not available
	 */
	static class UAsyncHelperSubsystem* GetAsyncHelperSubsystem(const UObject* WorldContext);
};
