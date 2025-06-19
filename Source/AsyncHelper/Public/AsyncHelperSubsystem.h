#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AsyncTaskManager.h"
#include "AsyncHelperSubsystem.generated.h"

/**
 * Game Instance Subsystem for managing async operations
 * Provides centralized access to async task management functionality
 */
UCLASS(BlueprintType)
class ASYNCHELPER_API UAsyncHelperSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	// USubsystem interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	/**
	 * Get the async task manager instance
	 * @return Reference to the task manager
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	UAsyncTaskManager* GetAsyncTaskManager() const { return AsyncTaskManager; }

	/**
	 * Execute a simple async delay - convenience function
	 * @param DelaySeconds - How long to wait before executing the callback
	 * @param Callback - Function to execute after delay
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	FAsyncTaskHandle ExecuteAsyncDelay(float DelaySeconds, const FAsyncTaskDelegate& Callback, const FString& TaskName = TEXT("AsyncDelay"));

	/**
	 * Execute an async task with result callback - convenience function
	 * @param DelaySeconds - How long to wait before executing
	 * @param Callback - Function to execute with success result
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	FAsyncTaskHandle ExecuteAsyncDelayWithResult(float DelaySeconds, const FAsyncTaskDelegateWithResult& Callback, const FString& TaskName = TEXT("AsyncDelayWithResult"));

	/**
	 * Cancel a running async task - convenience function
	 * @param TaskHandle - Handle of the task to cancel
	 * @return True if task was successfully cancelled
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	bool CancelAsyncTask(const FAsyncTaskHandle& TaskHandle);

	/**
	 * Check if an async task is still running - convenience function
	 * @param TaskHandle - Handle of the task to check
	 * @return True if task is still running
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	bool IsAsyncTaskRunning(const FAsyncTaskHandle& TaskHandle);

	/**
	 * Get information about an async task - convenience function
	 * @param TaskHandle - Handle of the task
	 * @return Task information structure
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	FAsyncTaskInfo GetAsyncTaskInfo(const FAsyncTaskHandle& TaskHandle);

	/**
	 * Cancel all running async tasks - convenience function
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	void CancelAllAsyncTasks();

	/**
	 * Get the number of currently running async tasks - convenience function
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	int32 GetRunningTaskCount() const;

	/**
	 * Execute multiple tasks in parallel
	 * @param TaskCount - Number of parallel tasks to execute
	 * @param ParallelTaskDelegate - Function to execute for each task (receives task index)
	 * @param TaskName - Optional name for debugging
	 * @return Array of handles for the created tasks
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	TArray<FAsyncTaskHandle> ExecuteParallelTasks(int32 TaskCount, const FAsyncTaskDelegate& ParallelTaskDelegate, const FString& TaskName = TEXT("ParallelTask"));

	/**
	 * Execute a chain of async tasks in sequence
	 * @param TaskChain - Array of delegates to execute in sequence
	 * @param DelayBetweenTasks - Delay between each task in the chain
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the chain (cancelling this will cancel all remaining tasks)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	FAsyncTaskHandle ExecuteTaskChain(const TArray<FAsyncTaskDelegate>& TaskChain, float DelayBetweenTasks = 0.0f, const FString& TaskName = TEXT("TaskChain"));

	/**
	 * Get performance statistics for async operations
	 * @return String containing performance information
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	FString GetPerformanceStats() const;

	/**
	 * Execute a chain of async tasks in sequence with flexible control
	 * @param TaskChain - Array of task indices to execute in sequence
	 * @param ChainDelegate - Function to execute for each task (receives task index)
	 * @param DelayBetweenTasks - Delay between each task in the chain
	 * @param bStopOnFailure - Whether to stop the chain if any task fails
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the chain (cancelling this will cancel all remaining tasks)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	FAsyncTaskHandle ExecuteAsyncTaskChain(const TArray<int32>& TaskChain, const FAsyncTaskChainDelegate& ChainDelegate, float DelayBetweenTasks = 0.0f, bool bStopOnFailure = true, const FString& TaskName = TEXT("TaskChain"));

	/**
	 * Execute an async task with timeout support
	 * @param DelaySeconds - How long to wait before executing the callback
	 * @param TimeoutSeconds - Maximum time to wait before timing out (0 = no timeout)
	 * @param Callback - Function to execute after delay
	 * @param TimeoutCallback - Function to execute if timeout occurs
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	FAsyncTaskHandle ExecuteAsyncDelayWithTimeout(float DelaySeconds, float TimeoutSeconds, const FAsyncTaskDelegate& Callback, const FAsyncTimeoutDelegate& TimeoutCallback, const FString& TaskName = TEXT("AsyncDelayWithTimeout"));

	/**
	 * Execute multiple async tasks and wait for all to complete
	 * @param TaskCount - Number of tasks to execute
	 * @param BatchDelegate - Function to execute for each task
	 * @param TimeoutSeconds - Maximum time to wait for all tasks (0 = no timeout)
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the batch operation
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	FAsyncTaskHandle ExecuteAsyncBatch(int32 TaskCount, const FAsyncTaskChainDelegate& BatchDelegate, float TimeoutSeconds = 0.0f, const FString& TaskName = TEXT("AsyncBatch"));

protected:
	// The main async task manager
	UPROPERTY()
	UAsyncTaskManager* AsyncTaskManager;

	// Timer for periodic cleanup
	FTimerHandle CleanupTimerHandle;

	// Performance tracking
	mutable int32 TotalTasksCreated;
	mutable int32 TotalTasksCompleted;
	mutable int32 TotalTasksCancelled;
	mutable double TotalExecutionTime;

	// Periodic cleanup function
	void PerformPeriodicCleanup();

	// Update performance stats
	void UpdatePerformanceStats(const FAsyncTaskInfo& TaskInfo) const;
};
