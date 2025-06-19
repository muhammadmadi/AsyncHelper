#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskManager.h"
#include "AsyncTaskChainAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskChainProgress, int32, TaskIndex);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskChainActionCompleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskChainActionCancelled);

/**
 * Blueprint Async Action for executing task chains
 * Provides sequential task execution with flexible control
 */
UCLASS(BlueprintType, meta = (ExposedAsyncProxy = AsyncTask))
class ASYNCHELPER_API UAsyncTaskChainAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UAsyncTaskChainAction();

	/**
	 * Execute a chain of async tasks in sequence
	 * @param WorldContext - World context for the operation
	 * @param TaskIndices - Array of task indices to execute in sequence
	 * @param DelayBetweenTasks - Delay between each task in the chain
	 * @param bStopOnFailure - Whether to stop the chain if any task fails
	 * @param TaskName - Optional name for debugging
	 * @return The async action instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContext"))
	static UAsyncTaskChainAction* AsyncTaskChain(const UObject* WorldContext, const TArray<int32>& TaskIndices, float DelayBetweenTasks = 0.0f, bool bStopOnFailure = true, const FString& TaskName = TEXT("AsyncTaskChain"));

	// UBlueprintAsyncActionBase interface
	virtual void Activate() override;
	
	/**
	 * Cancel the async operation
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	void Cancel();

	UPROPERTY(BlueprintAssignable)
	FAsyncTaskChainProgress OnTaskExecuted;

	UPROPERTY(BlueprintAssignable)
	FAsyncTaskChainActionCompleted OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FAsyncTaskChainActionCancelled OnCancelled;

protected:
	// Parameters
	TArray<int32> TaskIndices;
	float DelayBetweenTasks;
	bool bStopOnFailure;
	FString TaskName;

	// Task tracking
	FAsyncTaskHandle TaskHandle;
	TWeakObjectPtr<const UObject> WorldContextObject;

	// Internal callbacks
	UFUNCTION()
	void HandleTaskProgress(int32 TaskIndex);

	UFUNCTION()
	void HandleTaskCompleted();

	// Helper to get subsystem
	class UAsyncHelperSubsystem* GetAsyncHelperSubsystem() const;
};
