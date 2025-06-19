#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskManager.h"
#include "AsyncBatchAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncBatchProgress, int32, TaskIndex);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncBatchActionCompleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncBatchActionCancelled);

/**
 * Blueprint Async Action for executing batch operations
 * Provides parallel task execution with completion tracking
 */
UCLASS(BlueprintType, meta = (ExposedAsyncProxy = AsyncTask))
class ASYNCHELPER_API UAsyncBatchAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UAsyncBatchAction();

	/**
	 * Execute multiple async tasks in parallel
	 * @param WorldContext - World context for the operation
	 * @param TaskCount - Number of parallel tasks to execute
	 * @param TimeoutSeconds - Maximum time to wait for all tasks (0 = no timeout)
	 * @param TaskName - Optional name for debugging
	 * @return The async action instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContext"))
	static UAsyncBatchAction* ExecuteAsyncBatch(const UObject* WorldContext, int32 TaskCount, float TimeoutSeconds = 0.0f, const FString& TaskName = TEXT("AsyncBatch"));

	// UBlueprintAsyncActionBase interface
	virtual void Activate() override;
	
	/**
	 * Cancel the async operation
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	void Cancel();

	UPROPERTY(BlueprintAssignable)
	FAsyncBatchProgress OnTaskExecuted;

	UPROPERTY(BlueprintAssignable)
	FAsyncBatchActionCompleted OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FAsyncBatchActionCancelled OnCancelled;

protected:
	// Parameters
	int32 TaskCount;
	float TimeoutSeconds;
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
