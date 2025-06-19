#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskManager.h"
#include "AsyncTaskPriority.h"
#include "AsyncAdvancedNodes.generated.h"

/**
 * Advanced async node: Wait for condition to become true
 */
UCLASS(BlueprintType, meta = (ExposedAsyncProxy = AsyncTask))
class ASYNCHELPER_API UAsyncWaitForConditionAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncConditionDelegate);

	UPROPERTY(BlueprintAssignable)
	FAsyncConditionDelegate OnConditionMet;

	UPROPERTY(BlueprintAssignable)
	FAsyncConditionDelegate OnTimeout;

	UPROPERTY(BlueprintAssignable)
	FAsyncConditionDelegate OnCancelled;

	/**
	 * Wait for a condition to become true (checked every frame)
	 * @param WorldContextObject - World context
	 * @param ConditionObject - Object to check condition on
	 * @param ConditionFunction - Function name to call for condition check
	 * @param TimeoutSeconds - Maximum time to wait (0 = no timeout)
	 * @param CheckInterval - How often to check condition (seconds)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Advanced", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
	static UAsyncWaitForConditionAction* WaitForCondition(
		UObject* WorldContextObject,
		UObject* ConditionObject,
		const FString& ConditionFunction,
		float TimeoutSeconds = 0.0f,
		float CheckInterval = 0.1f
	);

	virtual void Activate() override;

protected:
	UPROPERTY()
	TWeakObjectPtr<UObject> WorldContextObject;

	UPROPERTY()
	TWeakObjectPtr<UObject> ConditionObject;

	FString ConditionFunction;
	float TimeoutSeconds;
	float CheckInterval;
	FTimerHandle CheckTimerHandle;
	FTimerHandle TimeoutTimerHandle;

	void CheckCondition();
	void HandleTimeout();
};

/**
 * Advanced async node: Retry operation with backoff
 */
UCLASS(BlueprintType, meta = (ExposedAsyncProxy = AsyncTask))
class ASYNCHELPER_API UAsyncRetryAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncRetryDelegate, int32, AttemptNumber);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncRetryCompleteDelegate, bool, bSucceeded, int32, TotalAttempts);

	UPROPERTY(BlueprintAssignable)
	FAsyncRetryDelegate OnAttempt;

	UPROPERTY(BlueprintAssignable)
	FAsyncRetryCompleteDelegate OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FAsyncRetryDelegate OnFailed;

	UPROPERTY(BlueprintAssignable)
	FAsyncRetryDelegate OnCancelled;

	/**
	 * Retry an operation with exponential backoff
	 * @param WorldContextObject - World context
	 * @param MaxAttempts - Maximum number of retry attempts
	 * @param InitialDelay - Initial delay between attempts
	 * @param BackoffMultiplier - Multiplier for delay on each retry
	 * @param MaxDelay - Maximum delay between attempts
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Advanced", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
	static UAsyncRetryAction* RetryWithBackoff(
		UObject* WorldContextObject,
		int32 MaxAttempts = 3,
		float InitialDelay = 1.0f,
		float BackoffMultiplier = 2.0f,
		float MaxDelay = 30.0f
	);

	/**
	 * Call this from Blueprint to indicate attempt succeeded
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Advanced")
	void MarkAttemptSucceeded();

	/**
	 * Call this from Blueprint to indicate attempt failed
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Advanced")
	void MarkAttemptFailed();

	virtual void Activate() override;

protected:
	UPROPERTY()
	TWeakObjectPtr<UObject> WorldContextObject;

	int32 MaxAttempts;
	float InitialDelay;
	float BackoffMultiplier;
	float MaxDelay;
	
	int32 CurrentAttempt;
	bool bWaitingForResult;
	FTimerHandle RetryTimerHandle;

	void ExecuteAttempt();
	void ScheduleNextAttempt();
	float CalculateDelay() const;
};

/**
 * Advanced async node: Parallel execution with results
 */
UCLASS(BlueprintType, meta = (ExposedAsyncProxy = AsyncTask))
class ASYNCHELPER_API UAsyncParallelAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncParallelProgressDelegate, int32, CompletedTasks, int32, TotalTasks);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncParallelCompleteDelegate, const TArray<FString>&, Results);

	UPROPERTY(BlueprintAssignable)
	FAsyncParallelProgressDelegate OnProgress;

	UPROPERTY(BlueprintAssignable)
	FAsyncParallelCompleteDelegate OnAllCompleted;

	UPROPERTY(BlueprintAssignable)
	FAsyncParallelCompleteDelegate OnCancelled;

	/**
	 * Execute multiple operations in parallel and collect results
	 * @param WorldContextObject - World context
	 * @param TaskCount - Number of parallel tasks
	 * @param TimeoutSeconds - Maximum time to wait for all tasks
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Advanced", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
	static UAsyncParallelAction* ExecuteParallelWithResults(
		UObject* WorldContextObject,
		int32 TaskCount,
		float TimeoutSeconds = 0.0f
	);

	/**
	 * Call this to provide result for a specific task index
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Advanced")
	void SetTaskResult(int32 TaskIndex, const FString& Result);

	virtual void Activate() override;

protected:
	UPROPERTY()
	TWeakObjectPtr<UObject> WorldContextObject;

	int32 TaskCount;
	float TimeoutSeconds;
	
	TArray<FString> Results;
	TArray<bool> TaskCompleted;
	int32 CompletedCount;
	FTimerHandle TimeoutTimerHandle;

	void CheckCompletion();
	void HandleTimeout();
};
