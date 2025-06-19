#include "AsyncTaskManager.h"
#include "AsyncHelper.h"
#include "Engine/World.h"
#include "TimerManager.h"

UAsyncTaskManager::UAsyncTaskManager()
{
	// Initialize task ID counter
	TaskIdCounter.Set(1);
}

FAsyncTaskHandle UAsyncTaskManager::ExecuteAsyncDelay(float DelaySeconds, const FAsyncTaskDelegate& Callback, const FString& TaskName)
{
	if (DelaySeconds < 0.0f)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("ExecuteAsyncDelay: DelaySeconds cannot be negative"));
		return FAsyncTaskHandle();
	}

	const int32 TaskId = GenerateTaskId();
	const FAsyncTaskHandle Handle(TaskId);

	// Create task data
	TSharedPtr<FAsyncTaskData> TaskData = MakeShared<FAsyncTaskData>();
	TaskData->Info.Handle = Handle;
	TaskData->Info.TaskName = TaskName;
	TaskData->Info.StartTime = FPlatformTime::Seconds();
	TaskData->TaskStartTime = FPlatformTime::Seconds();
	TaskData->SimpleCallback = Callback;
	TaskData->TaskType = EAsyncTaskType::SimpleDelay;
	TaskData->bHasResultCallback = false;

	// Add to active tasks map
	{
		FScopeLock Lock(&TaskMapCriticalSection);
		ActiveTasks.Add(TaskId, TaskData);
	}

	// Launch the async task
	ExecuteDelayedTask(TaskData, DelaySeconds);

	UE_LOG(LogAsyncHelper, Log, TEXT("Started async delay task '%s' with ID %d for %.2f seconds"), *TaskName, TaskId, DelaySeconds);
	return Handle;
}

FAsyncTaskHandle UAsyncTaskManager::ExecuteAsyncDelayWithResult(float DelaySeconds, const FAsyncTaskDelegateWithResult& Callback, const FString& TaskName)
{
	if (DelaySeconds < 0.0f)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("ExecuteAsyncDelayWithResult: DelaySeconds cannot be negative"));
		return FAsyncTaskHandle();
	}

	const int32 TaskId = GenerateTaskId();
	const FAsyncTaskHandle Handle(TaskId);

	// Create task data
	TSharedPtr<FAsyncTaskData> TaskData = MakeShared<FAsyncTaskData>();
	TaskData->Info.Handle = Handle;
	TaskData->Info.TaskName = TaskName;
	TaskData->Info.StartTime = FPlatformTime::Seconds();
	TaskData->TaskStartTime = FPlatformTime::Seconds();
	TaskData->ResultCallback = Callback;
	TaskData->TaskType = EAsyncTaskType::DelayWithResult;
	TaskData->bHasResultCallback = true;

	// Add to active tasks map
	{
		FScopeLock Lock(&TaskMapCriticalSection);
		ActiveTasks.Add(TaskId, TaskData);
	}

	// Launch the async task
	ExecuteDelayedTask(TaskData, DelaySeconds);

	UE_LOG(LogAsyncHelper, Log, TEXT("Started async delay task with result '%s' with ID %d for %.2f seconds"), *TaskName, TaskId, DelaySeconds);
	return Handle;
}

bool UAsyncTaskManager::CancelAsyncTask(const FAsyncTaskHandle& TaskHandle)
{
	if (!TaskHandle.IsValid())
	{
		return false;
	}

	FScopeLock Lock(&TaskMapCriticalSection);
	if (TSharedPtr<FAsyncTaskData>* TaskDataPtr = ActiveTasks.Find(TaskHandle.TaskId))
	{
		TSharedPtr<FAsyncTaskData> TaskData = *TaskDataPtr;
		TaskData->bShouldCancel.AtomicSet(true);
		TaskData->Info.bWasCancelled = true;

		UE_LOG(LogAsyncHelper, Log, TEXT("Cancelled async task '%s' with ID %d"), *TaskData->Info.TaskName, TaskHandle.TaskId);
		return true;
	}

	return false;
}

bool UAsyncTaskManager::IsAsyncTaskRunning(const FAsyncTaskHandle& TaskHandle)
{
	if (!TaskHandle.IsValid())
	{
		return false;
	}

	FScopeLock Lock(&TaskMapCriticalSection);
	if (TSharedPtr<FAsyncTaskData>* TaskDataPtr = ActiveTasks.Find(TaskHandle.TaskId))
	{
		TSharedPtr<FAsyncTaskData> TaskData = *TaskDataPtr;
		return !TaskData->Info.bIsCompleted && !TaskData->Info.bWasCancelled;
	}

	return false;
}

FAsyncTaskInfo UAsyncTaskManager::GetAsyncTaskInfo(const FAsyncTaskHandle& TaskHandle)
{
	FAsyncTaskInfo DefaultInfo;

	if (!TaskHandle.IsValid())
	{
		return DefaultInfo;
	}

	FScopeLock Lock(&TaskMapCriticalSection);
	if (TSharedPtr<FAsyncTaskData>* TaskDataPtr = ActiveTasks.Find(TaskHandle.TaskId))
	{
		TSharedPtr<FAsyncTaskData> TaskData = *TaskDataPtr;
		FAsyncTaskInfo Info = TaskData->Info;

		// Update duration if task is still running
		if (!Info.bIsCompleted)
		{
			Info.Duration = FPlatformTime::Seconds() - Info.StartTime;
		}

		return Info;
	}

	return DefaultInfo;
}

void UAsyncTaskManager::CancelAllAsyncTasks()
{
	FScopeLock Lock(&TaskMapCriticalSection);

	int32 CancelledCount = 0;
	for (auto& TaskPair : ActiveTasks)
	{
		TSharedPtr<FAsyncTaskData> TaskData = TaskPair.Value;
		if (!TaskData->Info.bIsCompleted && !TaskData->Info.bWasCancelled)
		{
			TaskData->bShouldCancel.AtomicSet(true);
			TaskData->Info.bWasCancelled = true;
			CancelledCount++;
		}
	}

	UE_LOG(LogAsyncHelper, Log, TEXT("Cancelled %d async tasks"), CancelledCount);
}

int32 UAsyncTaskManager::GetRunningTaskCount() const
{
	FScopeLock Lock(&TaskMapCriticalSection);

	int32 RunningCount = 0;
	for (const auto& TaskPair : ActiveTasks)
	{
		const TSharedPtr<FAsyncTaskData> TaskData = TaskPair.Value;
		if (!TaskData->Info.bIsCompleted && !TaskData->Info.bWasCancelled)
		{
			RunningCount++;
		}
	}

	return RunningCount;
}

int32 UAsyncTaskManager::GenerateTaskId()
{
	return TaskIdCounter.Increment();
}

void UAsyncTaskManager::CleanupCompletedTasks()
{
	FScopeLock Lock(&TaskMapCriticalSection);

	// Remove completed tasks to prevent memory leaks
	for (auto It = ActiveTasks.CreateIterator(); It; ++It)
	{
		const TSharedPtr<FAsyncTaskData> TaskData = It.Value();
		if (TaskData->Info.bIsCompleted || TaskData->Info.bWasCancelled)
		{
			// Keep tasks for a short while for status checking, then remove
			const float TimeSinceCompletion = FPlatformTime::Seconds() - (TaskData->Info.StartTime + TaskData->Info.Duration);
			if (TimeSinceCompletion > 5.0f) // Keep for 5 seconds after completion
			{
				It.RemoveCurrent();
			}
		}
	}
}

void UAsyncTaskManager::ExecuteDelayedTask(TSharedPtr<FAsyncTaskData> TaskData, float DelaySeconds)
{
	// Launch async task using UE5 task system
	TaskData->Task = UE::Tasks::Launch(TEXT("AsyncHelperDelayTask"), [this, TaskData, DelaySeconds]()
	{
		// Wait for the specified delay
		const double StartTime = FPlatformTime::Seconds();
		const double EndTime = StartTime + DelaySeconds;

		while (FPlatformTime::Seconds() < EndTime)
		{
			// Check for cancellation
			if (TaskData->bShouldCancel)
			{
				TaskData->Info.bWasCancelled = true;
				TaskData->Info.Duration = FPlatformTime::Seconds() - TaskData->Info.StartTime;
				return;
			}

			// Small sleep to prevent busy waiting
			FPlatformProcess::Sleep(0.01f);
		}

		// Task completed successfully
		TaskData->Info.bIsCompleted = true;
		TaskData->Info.Duration = FPlatformTime::Seconds() - TaskData->Info.StartTime;

		// Execute callback on game thread
		if (!TaskData->bShouldCancel)
		{
			AsyncTask(ENamedThreads::GameThread, [TaskData]()
			{
				if (TaskData->bHasResultCallback && TaskData->ResultCallback.IsBound())
				{
					TaskData->ResultCallback.ExecuteIfBound(true);
				}
				else if (!TaskData->bHasResultCallback && TaskData->SimpleCallback.IsBound())
				{
					TaskData->SimpleCallback.ExecuteIfBound();
				}
			});
		}
	});
}

FAsyncTaskHandle UAsyncTaskManager::ExecuteAsyncTaskChain(const TArray<int32>& TaskChain, const FAsyncTaskChainDelegate& ChainDelegate, float DelayBetweenTasks, bool bStopOnFailure, const FString& TaskName)
{
	if (TaskChain.Num() == 0)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("ExecuteAsyncTaskChain: TaskChain cannot be empty"));
		return FAsyncTaskHandle();
	}

	const int32 TaskId = GenerateTaskId();
	const FAsyncTaskHandle Handle(TaskId);

	// Create task data
	TSharedPtr<FAsyncTaskData> TaskData = MakeShared<FAsyncTaskData>();
	TaskData->Info.Handle = Handle;
	TaskData->Info.TaskName = TaskName;
	TaskData->Info.StartTime = FPlatformTime::Seconds();
	TaskData->TaskStartTime = FPlatformTime::Seconds();
	TaskData->ChainCallback = ChainDelegate;
	TaskData->TaskType = EAsyncTaskType::TaskChain;
	TaskData->TaskChain = TaskChain;
	TaskData->CurrentChainIndex = 0;
	TaskData->DelayBetweenTasks = DelayBetweenTasks;
	TaskData->bStopOnFailure = bStopOnFailure;
	TaskData->bIsChainTask = true;

	// Add to active tasks map
	{
		FScopeLock Lock(&TaskMapCriticalSection);
		ActiveTasks.Add(TaskId, TaskData);
	}

	// Start the chain
	ExecuteTaskChain(TaskData);

	UE_LOG(LogAsyncHelper, Log, TEXT("Started async task chain '%s' with %d tasks"), *TaskName, TaskChain.Num());
	return Handle;
}

FAsyncTaskHandle UAsyncTaskManager::ExecuteAsyncDelayWithTimeout(float DelaySeconds, float TimeoutSeconds, const FAsyncTaskDelegate& Callback, const FAsyncTimeoutDelegate& TimeoutCallback, const FString& TaskName)
{
	if (DelaySeconds < 0.0f)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("ExecuteAsyncDelayWithTimeout: DelaySeconds cannot be negative"));
		return FAsyncTaskHandle();
	}

	if (TimeoutSeconds <= 0.0f)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("ExecuteAsyncDelayWithTimeout: TimeoutSeconds must be positive"));
		return FAsyncTaskHandle();
	}

	const int32 TaskId = GenerateTaskId();
	const FAsyncTaskHandle Handle(TaskId);

	// Create task data
	TSharedPtr<FAsyncTaskData> TaskData = MakeShared<FAsyncTaskData>();
	TaskData->Info.Handle = Handle;
	TaskData->Info.TaskName = TaskName;
	TaskData->Info.StartTime = FPlatformTime::Seconds();
	TaskData->TaskStartTime = FPlatformTime::Seconds();
	TaskData->SimpleCallback = Callback;
	TaskData->TimeoutCallback = TimeoutCallback;
	TaskData->TaskType = EAsyncTaskType::DelayWithTimeout;
	TaskData->TimeoutSeconds = TimeoutSeconds;
	TaskData->bHasTimeout = true;

	// Add to active tasks map
	{
		FScopeLock Lock(&TaskMapCriticalSection);
		ActiveTasks.Add(TaskId, TaskData);
	}

	// Launch the async task with timeout
	ExecuteTaskWithTimeout(TaskData, DelaySeconds);

	UE_LOG(LogAsyncHelper, Log, TEXT("Started async delay with timeout '%s' for %.2f seconds (timeout: %.2f)"), *TaskName, DelaySeconds, TimeoutSeconds);
	return Handle;
}
FAsyncTaskHandle UAsyncTaskManager::ExecuteAsyncBatch(int32 TaskCount, const FAsyncTaskChainDelegate& BatchDelegate, float TimeoutSeconds, const FString& TaskName)
{
	if (TaskCount <= 0)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("ExecuteAsyncBatch: TaskCount must be positive"));
		return FAsyncTaskHandle();
	}

	const int32 TaskId = GenerateTaskId();
	const FAsyncTaskHandle Handle(TaskId);

	// Create task data
	TSharedPtr<FAsyncTaskData> TaskData = MakeShared<FAsyncTaskData>();
	TaskData->Info.Handle = Handle;
	TaskData->Info.TaskName = TaskName;
	TaskData->Info.StartTime = FPlatformTime::Seconds();
	TaskData->TaskStartTime = FPlatformTime::Seconds();
	TaskData->ChainCallback = BatchDelegate;
	TaskData->TaskType = EAsyncTaskType::BatchOperation;
	TaskData->BatchSize = TaskCount;
	TaskData->CompletedBatchTasks = 0;
	TaskData->TimeoutSeconds = TimeoutSeconds;
	TaskData->bHasTimeout = TimeoutSeconds > 0.0f;
	TaskData->bIsBatchTask = true;

	// Add to active tasks map
	{
		FScopeLock Lock(&TaskMapCriticalSection);
		ActiveTasks.Add(TaskId, TaskData);
	}

	// Start the batch
	ExecuteBatchTask(TaskData);

	UE_LOG(LogAsyncHelper, Log, TEXT("Started async batch '%s' with %d tasks"), *TaskName, TaskCount);
	return Handle;
}

void UAsyncTaskManager::ExecuteTaskChain(TSharedPtr<FAsyncTaskData> TaskData)
{
	if (!TaskData || TaskData->bShouldCancel)
	{
		return;
	}

	// Execute the first task in the chain
	ExecuteNextChainTask(TaskData);
}

void UAsyncTaskManager::ExecuteNextChainTask(TSharedPtr<FAsyncTaskData> TaskData)
{
	if (!TaskData || TaskData->bShouldCancel || TaskData->CurrentChainIndex >= TaskData->TaskChain.Num())
	{
		// Chain completed
		TaskData->Info.bIsCompleted = true;
		TaskData->Info.Duration = FPlatformTime::Seconds() - TaskData->Info.StartTime;
		return;
	}

	const int32 CurrentTaskIndex = TaskData->TaskChain[TaskData->CurrentChainIndex];

	// Launch async task for this chain step
	TaskData->Task = UE::Tasks::Launch(TEXT("AsyncHelperChainTask"), [this, TaskData, CurrentTaskIndex]()
	{
		// Check for cancellation
		if (TaskData->bShouldCancel)
		{
			TaskData->Info.bWasCancelled = true;
			TaskData->Info.Duration = FPlatformTime::Seconds() - TaskData->Info.StartTime;
			return;
		}

		// Execute the chain callback on game thread
		AsyncTask(ENamedThreads::GameThread, [this, TaskData, CurrentTaskIndex]()
		{
			if (!TaskData->bShouldCancel && TaskData->ChainCallback.IsBound())
			{
				TaskData->ChainCallback.ExecuteIfBound(CurrentTaskIndex);
			}

			// Move to next task in chain after delay
			if (!TaskData->bShouldCancel)
			{
				TaskData->CurrentChainIndex++;

				if (TaskData->DelayBetweenTasks > 0.0f)
				{
					// Delay before next task
					FTimerHandle TimerHandle;
					if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(this))
					{
						World->GetTimerManager().SetTimer(TimerHandle, [this, TaskData]()
						{
							ExecuteNextChainTask(TaskData);
						}, TaskData->DelayBetweenTasks, false);
					}
				}
				else
				{
					// Execute next task immediately
					ExecuteNextChainTask(TaskData);
				}
			}
		});
	});
}
void UAsyncTaskManager::ExecuteBatchTask(TSharedPtr<FAsyncTaskData> TaskData)
{
	if (!TaskData || TaskData->bShouldCancel)
	{
		return;
	}

	// Launch all batch tasks in parallel
	for (int32 i = 0; i < TaskData->BatchSize; i++)
	{
		UE::Tasks::Launch(TEXT("AsyncHelperBatchTask"), [this, TaskData, i]()
		{
			// Check for cancellation
			if (TaskData->bShouldCancel)
			{
				return;
			}

			// Execute the batch callback on game thread
			AsyncTask(ENamedThreads::GameThread, [this, TaskData, i]()
			{
				if (!TaskData->bShouldCancel && TaskData->ChainCallback.IsBound())
				{
					TaskData->ChainCallback.ExecuteIfBound(i);
				}

				// Increment completed tasks counter
				TaskData->CompletedBatchTasks++;

				// Check if all tasks completed
				if (TaskData->CompletedBatchTasks >= TaskData->BatchSize)
				{
					TaskData->Info.bIsCompleted = true;
					TaskData->Info.Duration = FPlatformTime::Seconds() - TaskData->Info.StartTime;
				}
			});
		});
	}
}

void UAsyncTaskManager::ExecuteTaskWithTimeout(TSharedPtr<FAsyncTaskData> TaskData, float DelaySeconds)
{
	// Launch async task with timeout monitoring
	TaskData->Task = UE::Tasks::Launch(TEXT("AsyncHelperTimeoutTask"), [this, TaskData, DelaySeconds]()
	{
		// Wait for the specified delay
		const double StartTime = FPlatformTime::Seconds();
		const double EndTime = StartTime + DelaySeconds;

		while (FPlatformTime::Seconds() < EndTime)
		{
			// Check for cancellation
			if (TaskData->bShouldCancel)
			{
				TaskData->Info.bWasCancelled = true;
				TaskData->Info.Duration = FPlatformTime::Seconds() - TaskData->Info.StartTime;
				return;
			}

			// Check for timeout
			if (CheckTaskTimeout(TaskData))
			{
				// Execute timeout callback on game thread
				AsyncTask(ENamedThreads::GameThread, [TaskData]()
				{
					if (TaskData->TimeoutCallback.IsBound())
					{
						TaskData->TimeoutCallback.ExecuteIfBound(true); // true = timed out
					}
				});
				return;
			}

			// Small sleep to prevent busy waiting
			FPlatformProcess::Sleep(0.01f);
		}

		// Task completed successfully (no timeout)
		TaskData->Info.bIsCompleted = true;
		TaskData->Info.Duration = FPlatformTime::Seconds() - TaskData->Info.StartTime;

		// Execute callback on game thread
		if (!TaskData->bShouldCancel)
		{
			AsyncTask(ENamedThreads::GameThread, [TaskData]()
			{
				if (TaskData->SimpleCallback.IsBound())
				{
					TaskData->SimpleCallback.ExecuteIfBound();
				}
				if (TaskData->TimeoutCallback.IsBound())
				{
					TaskData->TimeoutCallback.ExecuteIfBound(false); // false = completed normally
				}
			});
		}
	});
}

bool UAsyncTaskManager::CheckTaskTimeout(TSharedPtr<FAsyncTaskData> TaskData)
{
	if (!TaskData->bHasTimeout || TaskData->TimeoutSeconds <= 0.0f)
	{
		return false;
	}

	const double CurrentTime = FPlatformTime::Seconds();
	const double ElapsedTime = CurrentTime - TaskData->TaskStartTime;

	return ElapsedTime >= TaskData->TimeoutSeconds;
}