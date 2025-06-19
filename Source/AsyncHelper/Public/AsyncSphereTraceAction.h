#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "CollisionQueryParams.h"
#include "AsyncTaskManager.h"
#include "AsyncSphereTraceAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncSphereTraceCompleted, const FHitResult&, HitResult);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncSphereTraceFailed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncSphereTraceCancelled);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncMultiSphereTraceCompleted, const TArray<FHitResult>&, HitResults);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncMultiSphereTraceFailed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncMultiSphereTraceCancelled);

/**
 * Blueprint Async Action for executing sphere traces asynchronously
 * Provides non-blocking sphere trace operations with hit result callbacks
 */
UCLASS(BlueprintType, meta = (ExposedAsyncProxy = AsyncTask))
class ASYNCHELPER_API UAsyncSphereTraceAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UAsyncSphereTraceAction();

	/**
	 * Execute an async sphere trace by channel
	 * @param WorldContext - World context for the operation
	 * @param Start - Start location of the trace
	 * @param End - End location of the trace
	 * @param Radius - Radius of the sphere
	 * @param TraceChannel - Collision channel to trace against
	 * @param bTraceComplex - Whether to trace against complex collision
	 * @param ActorsToIgnore - Array of actors to ignore during trace
	 * @param DrawDebugType - Debug drawing type
	 * @param TaskName - Optional name for debugging
	 * @return The async action instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Sphere Trace", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContext"))
	static UAsyncSphereTraceAction* AsyncSphereTraceByChannel(
		const UObject* WorldContext,
		FVector Start,
		FVector End,
		float Radius,
		TEnumAsByte<ECollisionChannel> TraceChannel,
		bool bTraceComplex,
		const TArray<AActor*>& ActorsToIgnore,
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
		const FString& TaskName
	);

	/**
	 * Execute an async sphere trace by object type
	 * @param WorldContext - World context for the operation
	 * @param Start - Start location of the trace
	 * @param End - End location of the trace
	 * @param Radius - Radius of the sphere
	 * @param ObjectTypes - Object types to trace against
	 * @param bTraceComplex - Whether to trace against complex collision
	 * @param ActorsToIgnore - Array of actors to ignore during trace
	 * @param DrawDebugType - Debug drawing type
	 * @param TaskName - Optional name for debugging
	 * @return The async action instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Sphere Trace", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContext"))
	static UAsyncSphereTraceAction* AsyncSphereTraceByObjectType(
		const UObject* WorldContext,
		FVector Start,
		FVector End,
		float Radius,
		const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes,
		bool bTraceComplex,
		const TArray<AActor*>& ActorsToIgnore,
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType,
		const FString& TaskName
	);

	/**
	 * Execute an async multi sphere trace by channel
	 * @param WorldContext - World context for the operation
	 * @param Start - Start location of the trace
	 * @param End - End location of the trace
	 * @param Radius - Radius of the sphere
	 * @param TraceChannel - Collision channel to trace against
	 * @param bTraceComplex - Whether to trace against complex collision
	 * @param ActorsToIgnore - Array of actors to ignore during trace
	 * @param DrawDebugType - Debug drawing type
	 * @param TaskName - Optional name for debugging
	 * @return The async action instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Sphere Trace", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContext"))
	static UAsyncSphereTraceAction* AsyncMultiSphereTraceByChannel(
		const UObject* WorldContext,
		FVector Start,
		FVector End,
		float Radius,
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

	// Single sphere trace events
	UPROPERTY(BlueprintAssignable)
	FAsyncSphereTraceCompleted OnHit;

	UPROPERTY(BlueprintAssignable)
	FAsyncSphereTraceFailed OnMiss;

	UPROPERTY(BlueprintAssignable)
	FAsyncSphereTraceCancelled OnCancelled;

	// Multi sphere trace events
	UPROPERTY(BlueprintAssignable)
	FAsyncMultiSphereTraceCompleted OnMultiHit;

	UPROPERTY(BlueprintAssignable)
	FAsyncMultiSphereTraceFailed OnMultiMiss;

	UPROPERTY(BlueprintAssignable)
	FAsyncMultiSphereTraceCancelled OnMultiCancelled;

protected:
	enum class EAsyncSphereTraceType : uint8
	{
		SphereTraceByChannel,
		SphereTraceByObjectType,
		MultiSphereTraceByChannel
	};

	// Parameters
	FVector Start;
	FVector End;
	float Radius;
	TEnumAsByte<ECollisionChannel> TraceChannel;
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	bool bTraceComplex;
	TArray<AActor*> ActorsToIgnore;
	TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
	FString TaskName;
	EAsyncSphereTraceType TraceType;

	// Task tracking
	FAsyncTaskHandle TaskHandle;
	TWeakObjectPtr<const UObject> WorldContextObject;

	// Internal callbacks
	UFUNCTION()
	void HandleTraceCompleted();

	// Helper functions
	class UAsyncHelperSubsystem* GetAsyncHelperSubsystem() const;
	void ExecuteSphereTrace();
	void ExecuteMultiSphereTrace();
	FCollisionQueryParams CreateQueryParams() const;
	FCollisionObjectQueryParams CreateObjectQueryParams() const;
};
