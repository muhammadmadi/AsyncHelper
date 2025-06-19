#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "CollisionQueryParams.h"
#include "AsyncTaskManager.h"
#include "AsyncLineTraceAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncLineTraceCompleted, const FHitResult&, HitResult);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncLineTraceFailed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncLineTraceCancelled);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncMultiLineTraceCompleted, const TArray<FHitResult>&, HitResults);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncMultiLineTraceFailed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncMultiLineTraceCancelled);

/**
 * Blueprint Async Action for executing line traces asynchronously
 * Provides non-blocking line trace operations with hit result callbacks
 */
UCLASS(BlueprintType, meta = (ExposedAsyncProxy = AsyncTask))
class ASYNCHELPER_API UAsyncLineTraceAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UAsyncLineTraceAction();

	/**
	 * Execute an async line trace by channel
	 * @param WorldContext - World context for the operation
	 * @param Start - Start location of the trace
	 * @param End - End location of the trace
	 * @param TraceChannel - Collision channel to trace against
	 * @param bTraceComplex - Whether to trace against complex collision
	 * @param ActorsToIgnore - Array of actors to ignore during trace
	 * @param DrawDebugType - Debug drawing type
	 * @param TaskName - Optional name for debugging
	 * @return The async action instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Line Trace", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContext"))
	static UAsyncLineTraceAction* AsyncLineTraceByChannel(
		const UObject* WorldContext,
		FVector Start,
		FVector End,
		TEnumAsByte<ECollisionChannel> TraceChannel,
		bool bTraceComplex,
		const TArray<AActor*>& ActorsToIgnore,
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
		const FString& TaskName
	);

	/**
	 * Execute an async line trace by object type
	 * @param WorldContext - World context for the operation
	 * @param Start - Start location of the trace
	 * @param End - End location of the trace
	 * @param ObjectTypes - Object types to trace against
	 * @param bTraceComplex - Whether to trace against complex collision
	 * @param ActorsToIgnore - Array of actors to ignore during trace
	 * @param DrawDebugType - Debug drawing type
	 * @param TaskName - Optional name for debugging
	 * @return The async action instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Line Trace", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContext"))
	static UAsyncLineTraceAction* AsyncLineTraceByObjectType(
		const UObject* WorldContext,
		FVector Start,
		FVector End,
		const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes,
		bool bTraceComplex,
		const TArray<AActor*>& ActorsToIgnore,
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
		const FString& TaskName
	);

	/**
	 * Execute an async multi line trace by channel
	 * @param WorldContext - World context for the operation
	 * @param Start - Start location of the trace
	 * @param End - End location of the trace
	 * @param TraceChannel - Collision channel to trace against
	 * @param bTraceComplex - Whether to trace against complex collision
	 * @param ActorsToIgnore - Array of actors to ignore during trace
	 * @param DrawDebugType - Debug drawing type
	 * @param TaskName - Optional name for debugging
	 * @return The async action instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Line Trace", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContext"))
	static UAsyncLineTraceAction* AsyncMultiLineTraceByChannel(
		const UObject* WorldContext,
		FVector Start,
		FVector End,
		TEnumAsByte<ECollisionChannel> TraceChannel,
		bool bTraceComplex,
		const TArray<AActor*>& ActorsToIgnore,
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
		const FString& TaskName
	);

	// UBlueprintAsyncActionBase interface
	virtual void Activate() override;
	
	/**
	 * Cancel the async operation
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	void Cancel();

	// Single line trace events
	UPROPERTY(BlueprintAssignable)
	FAsyncLineTraceCompleted OnHit;

	UPROPERTY(BlueprintAssignable)
	FAsyncLineTraceFailed OnMiss;

	UPROPERTY(BlueprintAssignable)
	FAsyncLineTraceCancelled OnCancelled;

	// Multi line trace events
	UPROPERTY(BlueprintAssignable)
	FAsyncMultiLineTraceCompleted OnMultiHit;

	UPROPERTY(BlueprintAssignable)
	FAsyncMultiLineTraceFailed OnMultiMiss;

	UPROPERTY(BlueprintAssignable)
	FAsyncMultiLineTraceCancelled OnMultiCancelled;

protected:
	enum class EAsyncTraceType : uint8
	{
		LineTraceByChannel,
		LineTraceByObjectType,
		MultiLineTraceByChannel
	};

	// Parameters
	FVector Start;
	FVector End;
	TEnumAsByte<ECollisionChannel> TraceChannel;
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	bool bTraceComplex;
	TArray<AActor*> ActorsToIgnore;
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
	FString TaskName;
	EAsyncTraceType TraceType;

	// Task tracking
	FAsyncTaskHandle TaskHandle;
	TWeakObjectPtr<const UObject> WorldContextObject;

	// Internal callbacks
	void HandleTraceCompleted(const FHitResult& HitResult, const TArray<FHitResult>& HitResults, bool bHit);

	// Helper functions
	class UAsyncHelperSubsystem* GetAsyncHelperSubsystem() const;
	FCollisionQueryParams CreateQueryParams() const;
	FCollisionObjectQueryParams CreateObjectQueryParams() const;
};
