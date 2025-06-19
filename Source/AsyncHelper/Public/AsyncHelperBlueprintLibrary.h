#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AsyncTaskManager.h"
#include "AsyncHelperBlueprintLibrary.generated.h"

/**
 * Blueprint Function Library for Async Helper
 * Provides easy access to async functionality from Blueprints
 */
UCLASS()
class ASYNCHELPER_API UAsyncHelperBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Execute a simple async delay
	 * @param WorldContext - World context for the operation
	 * @param DelaySeconds - How long to wait before executing the callback
	 * @param Callback - Function to execute after delay
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskHandle ExecuteAsyncDelay(const UObject* WorldContext, float DelaySeconds, const FAsyncTaskDelegate& Callback, const FString& TaskName = TEXT("AsyncDelay"));

	/**
	 * Execute an async task with result callback
	 * @param WorldContext - World context for the operation
	 * @param DelaySeconds - How long to wait before executing
	 * @param Callback - Function to execute with success result
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskHandle ExecuteAsyncDelayWithResult(const UObject* WorldContext, float DelaySeconds, const FAsyncTaskDelegateWithResult& Callback, const FString& TaskName = TEXT("AsyncDelayWithResult"));

	/**
	 * Cancel a running async task
	 * @param WorldContext - World context for the operation
	 * @param TaskHandle - Handle of the task to cancel
	 * @return True if task was successfully cancelled
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static bool CancelAsyncTask(const UObject* WorldContext, const FAsyncTaskHandle& TaskHandle);

	/**
	 * Check if an async task is still running
	 * @param WorldContext - World context for the operation
	 * @param TaskHandle - Handle of the task to check
	 * @return True if task is still running
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static bool IsAsyncTaskRunning(const UObject* WorldContext, const FAsyncTaskHandle& TaskHandle);

	/**
	 * Get information about an async task
	 * @param WorldContext - World context for the operation
	 * @param TaskHandle - Handle of the task
	 * @return Task information structure
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskInfo GetAsyncTaskInfo(const UObject* WorldContext, const FAsyncTaskHandle& TaskHandle);

	/**
	 * Cancel all running async tasks
	 * @param WorldContext - World context for the operation
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static void CancelAllAsyncTasks(const UObject* WorldContext);

	/**
	 * Get the number of currently running async tasks
	 * @param WorldContext - World context for the operation
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static int32 GetRunningTaskCount(const UObject* WorldContext);

	/**
	 * Execute multiple tasks in parallel
	 * @param WorldContext - World context for the operation
	 * @param TaskCount - Number of parallel tasks to execute
	 * @param ParallelTaskDelegate - Function to execute for each task
	 * @param TaskName - Optional name for debugging
	 * @return Array of handles for the created tasks
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static TArray<FAsyncTaskHandle> ExecuteParallelTasks(const UObject* WorldContext, int32 TaskCount, const FAsyncTaskDelegate& ParallelTaskDelegate, const FString& TaskName = TEXT("ParallelTask"));

	/**
	 * Execute a chain of async tasks in sequence
	 * @param WorldContext - World context for the operation
	 * @param TaskChain - Array of delegates to execute in sequence
	 * @param DelayBetweenTasks - Delay between each task in the chain
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the chain
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskHandle ExecuteTaskChain(const UObject* WorldContext, const TArray<FAsyncTaskDelegate>& TaskChain, float DelayBetweenTasks = 0.0f, const FString& TaskName = TEXT("TaskChain"));

	/**
	 * Get performance statistics for async operations
	 * @param WorldContext - World context for the operation
	 * @return String containing performance information
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static FString GetPerformanceStats(const UObject* WorldContext);

	/**
	 * Execute a simple delay without callback (useful for Blueprint sequences)
	 * @param WorldContext - World context for the operation
	 * @param DelaySeconds - How long to wait
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskHandle ExecuteSimpleDelay(const UObject* WorldContext, float DelaySeconds, const FString& TaskName = TEXT("SimpleDelay"));

	/**
	 * Check if the AsyncHelper subsystem is available
	 * @param WorldContext - World context for the operation
	 * @return True if the subsystem is available
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static bool IsAsyncHelperAvailable(const UObject* WorldContext);

	/**
	 * Execute a chain of async tasks in sequence with flexible control
	 * @param WorldContext - World context for the operation
	 * @param TaskChain - Array of task indices to execute in sequence
	 * @param ChainDelegate - Function to execute for each task (receives task index)
	 * @param DelayBetweenTasks - Delay between each task in the chain
	 * @param bStopOnFailure - Whether to stop the chain if any task fails
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the chain (cancelling this will cancel all remaining tasks)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskHandle ExecuteAsyncTaskChain(const UObject* WorldContext, const TArray<int32>& TaskChain, const FAsyncTaskChainDelegate& ChainDelegate, float DelayBetweenTasks = 0.0f, bool bStopOnFailure = true, const FString& TaskName = TEXT("TaskChain"));

	/**
	 * Execute an async task with timeout support
	 * @param WorldContext - World context for the operation
	 * @param DelaySeconds - How long to wait before executing the callback
	 * @param TimeoutSeconds - Maximum time to wait before timing out (0 = no timeout)
	 * @param Callback - Function to execute after delay
	 * @param TimeoutCallback - Function to execute if timeout occurs
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskHandle ExecuteAsyncDelayWithTimeout(const UObject* WorldContext, float DelaySeconds, float TimeoutSeconds, const FAsyncTaskDelegate& Callback, const FAsyncTimeoutDelegate& TimeoutCallback, const FString& TaskName = TEXT("AsyncDelayWithTimeout"));

	/**
	 * Execute multiple async tasks and wait for all to complete
	 * @param WorldContext - World context for the operation
	 * @param TaskCount - Number of tasks to execute
	 * @param BatchDelegate - Function to execute for each task
	 * @param TimeoutSeconds - Maximum time to wait for all tasks (0 = no timeout)
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the batch operation
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskHandle ExecuteAsyncBatch(const UObject* WorldContext, int32 TaskCount, const FAsyncTaskChainDelegate& BatchDelegate, float TimeoutSeconds = 0.0f, const FString& TaskName = TEXT("AsyncBatch"));

protected:
	/**
	 * Helper function to get the AsyncHelper subsystem
	 * @param WorldContext - World context for the operation
	 * @return Pointer to the subsystem, or nullptr if not available
	 */
	static class UAsyncHelperSubsystem* GetAsyncHelperSubsystem(const UObject* WorldContext);
};
