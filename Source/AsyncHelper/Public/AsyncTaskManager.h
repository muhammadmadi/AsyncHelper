#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "Tasks/Task.h"
#include "Async/ParallelFor.h"
#include "Containers/Queue.h"
#include "HAL/ThreadSafeBool.h"
#include "AsyncTaskManager.generated.h"

DECLARE_DYNAMIC_DELEGATE(FAsyncTaskDelegate);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAsyncTaskDelegateWithResult, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTaskCompleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskCompletedWithResult, bool, bSuccess);

// New delegates for enhanced functionality
DECLARE_DYNAMIC_DELEGATE_OneParam(FAsyncTaskChainDelegate, int32, TaskIndex);
DECLARE_DYNAMIC_DELEGATE_OneParam(FAsyncTimeoutDelegate, bool, bTimedOut);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskChainCompleted, bool, bAllSucceeded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncTaskWithTimeoutCompleted, bool, bTimedOut);

/**
 * Handle for managing async tasks
 * Provides cancellation and status checking capabilities
 */
USTRUCT(BlueprintType)
struct ASYNCHELPER_API FAsyncTaskHandle
{
	GENERATED_BODY()

public:
	FAsyncTaskHandle() : TaskId(INDEX_NONE), bIsValid(false) {}
	FAsyncTaskHandle(int32 InTaskId) : TaskId(InTaskId), bIsValid(true) {}

	UPROPERTY(BlueprintReadOnly, Category = "Async Task")
	int32 TaskId;

	UPROPERTY(BlueprintReadOnly, Category = "Async Task")
	bool bIsValid;

	bool IsValid() const { return bIsValid && TaskId != INDEX_NONE; }
	void Invalidate() { bIsValid = false; TaskId = INDEX_NONE; }

	bool operator==(const FAsyncTaskHandle& Other) const
	{
		return TaskId == Other.TaskId && bIsValid == Other.bIsValid;
	}
};

/**
 * Information about an async task
 */
USTRUCT(BlueprintType)
struct ASYNCHELPER_API FAsyncTaskInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Async Task")
	FAsyncTaskHandle Handle;

	UPROPERTY(BlueprintReadOnly, Category = "Async Task")
	FString TaskName;

	UPROPERTY(BlueprintReadOnly, Category = "Async Task")
	bool bIsCompleted;

	UPROPERTY(BlueprintReadOnly, Category = "Async Task")
	bool bWasCancelled;

	UPROPERTY(BlueprintReadOnly, Category = "Async Task")
	float StartTime;

	UPROPERTY(BlueprintReadOnly, Category = "Async Task")
	float Duration;

	FAsyncTaskInfo()
		: bIsCompleted(false)
		, bWasCancelled(false)
		, StartTime(0.0f)
		, Duration(0.0f)
	{}
};

/**
 * Core async task manager class
 * Handles creation, execution, and management of async tasks using UE5 task system
 */
UCLASS(BlueprintType)
class ASYNCHELPER_API UAsyncTaskManager : public UObject
{
	GENERATED_BODY()

public:
	UAsyncTaskManager();

	/**
	 * Execute a simple async delay
	 * @param DelaySeconds - How long to wait before executing the callback
	 * @param Callback - Function to execute after delay
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	FAsyncTaskHandle ExecuteAsyncDelay(float DelaySeconds, const FAsyncTaskDelegate& Callback, const FString& TaskName = TEXT("AsyncDelay"));

	/**
	 * Execute an async task with result callback
	 * @param DelaySeconds - How long to wait before executing
	 * @param Callback - Function to execute with success result
	 * @param TaskName - Optional name for debugging
	 * @return Handle to the created task
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	FAsyncTaskHandle ExecuteAsyncDelayWithResult(float DelaySeconds, const FAsyncTaskDelegateWithResult& Callback, const FString& TaskName = TEXT("AsyncDelayWithResult"));

	/**
	 * Cancel a running async task
	 * @param TaskHandle - Handle of the task to cancel
	 * @return True if task was successfully cancelled
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	bool CancelAsyncTask(const FAsyncTaskHandle& TaskHandle);

	/**
	 * Check if an async task is still running
	 * @param TaskHandle - Handle of the task to check
	 * @return True if task is still running
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	bool IsAsyncTaskRunning(const FAsyncTaskHandle& TaskHandle);

	/**
	 * Get information about an async task
	 * @param TaskHandle - Handle of the task
	 * @return Task information structure
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	FAsyncTaskInfo GetAsyncTaskInfo(const FAsyncTaskHandle& TaskHandle);

	/**
	 * Cancel all running async tasks
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	void CancelAllAsyncTasks();

	/**
	 * Get the number of currently running async tasks
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	int32 GetRunningTaskCount() const;

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
	// Enhanced task types
	enum class EAsyncTaskType : uint8
	{
		SimpleDelay,
		DelayWithResult,
		DelayWithTimeout,
		TaskChain,
		BatchOperation
	};

	// Internal task tracking structure
	struct FAsyncTaskData
	{
		UE::Tasks::TTask<void> Task;
		FAsyncTaskInfo Info;
		FThreadSafeBool bShouldCancel;
		EAsyncTaskType TaskType;

		// Callback delegates
		FAsyncTaskDelegate SimpleCallback;
		FAsyncTaskDelegateWithResult ResultCallback;
		FAsyncTaskChainDelegate ChainCallback;
		FAsyncTimeoutDelegate TimeoutCallback;

		// Task chain data
		TArray<int32> TaskChain;
		int32 CurrentChainIndex;
		float DelayBetweenTasks;
		bool bStopOnFailure;

		// Timeout data
		float TimeoutSeconds;
		double TaskStartTime;

		// Batch data
		int32 BatchSize;
		int32 CompletedBatchTasks;

		// Flags
		bool bHasResultCallback;
		bool bHasTimeout;
		bool bIsChainTask;
		bool bIsBatchTask;

		FAsyncTaskData()
			: bShouldCancel(false)
			, TaskType(EAsyncTaskType::SimpleDelay)
			, CurrentChainIndex(0)
			, DelayBetweenTasks(0.0f)
			, bStopOnFailure(true)
			, TimeoutSeconds(0.0f)
			, TaskStartTime(0.0)
			, BatchSize(0)
			, CompletedBatchTasks(0)
			, bHasResultCallback(false)
			, bHasTimeout(false)
			, bIsChainTask(false)
			, bIsBatchTask(false)
		{}
	};

	// Map of active tasks
	TMap<int32, TSharedPtr<FAsyncTaskData>> ActiveTasks;

	// Thread-safe counter for task IDs
	FThreadSafeCounter TaskIdCounter;

	// Critical section for thread safety
	mutable FCriticalSection TaskMapCriticalSection;

	// Internal helper functions
	int32 GenerateTaskId();
	void CleanupCompletedTasks();
	void ExecuteDelayedTask(TSharedPtr<FAsyncTaskData> TaskData, float DelaySeconds);
	void ExecuteTaskChain(TSharedPtr<FAsyncTaskData> TaskData);
	void ExecuteNextChainTask(TSharedPtr<FAsyncTaskData> TaskData);
	void ExecuteBatchTask(TSharedPtr<FAsyncTaskData> TaskData);
	void ExecuteTaskWithTimeout(TSharedPtr<FAsyncTaskData> TaskData, float DelaySeconds);
	bool CheckTaskTimeout(TSharedPtr<FAsyncTaskData> TaskData);
};
