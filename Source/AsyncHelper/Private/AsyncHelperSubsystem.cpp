#include "AsyncHelperSubsystem.h"
#include "AsyncHelper.h"
#include "Engine/World.h"
#include "TimerManager.h"

void UAsyncHelperSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Create the async task manager
	AsyncTaskManager = NewObject<UAsyncTaskManager>(this);

	// Initialize performance tracking
	TotalTasksCreated = 0;
	TotalTasksCompleted = 0;
	TotalTasksCancelled = 0;
	TotalExecutionTime = 0.0;

	// Set up periodic cleanup timer (every 30 seconds)
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(CleanupTimerHandle, this, &UAsyncHelperSubsystem::PerformPeriodicCleanup, 30.0f, true);
	}

	UE_LOG(LogAsyncHelper, Log, TEXT("AsyncHelper Subsystem initialized"));
}

void UAsyncHelperSubsystem::Deinitialize()
{
	// Cancel all running tasks
	if (AsyncTaskManager)
	{
		AsyncTaskManager->CancelAllAsyncTasks();
	}

	// Clear cleanup timer
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(CleanupTimerHandle);
	}

	UE_LOG(LogAsyncHelper, Log, TEXT("AsyncHelper Subsystem deinitialized"));

	Super::Deinitialize();
}

FAsyncTaskHandle UAsyncHelperSubsystem::ExecuteAsyncDelay(float DelaySeconds, const FAsyncTaskDelegate& Callback, const FString& TaskName)
{
	if (!AsyncTaskManager)
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncTaskManager is null"));
		return FAsyncTaskHandle();
	}

	TotalTasksCreated++;
	return AsyncTaskManager->ExecuteAsyncDelay(DelaySeconds, Callback, TaskName);
}

FAsyncTaskHandle UAsyncHelperSubsystem::ExecuteAsyncDelayWithResult(float DelaySeconds, const FAsyncTaskDelegateWithResult& Callback, const FString& TaskName)
{
	if (!AsyncTaskManager)
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncTaskManager is null"));
		return FAsyncTaskHandle();
	}

	TotalTasksCreated++;
	return AsyncTaskManager->ExecuteAsyncDelayWithResult(DelaySeconds, Callback, TaskName);
}

bool UAsyncHelperSubsystem::CancelAsyncTask(const FAsyncTaskHandle& TaskHandle)
{
	if (!AsyncTaskManager)
	{
		return false;
	}

	bool bResult = AsyncTaskManager->CancelAsyncTask(TaskHandle);
	if (bResult)
	{
		TotalTasksCancelled++;
	}
	return bResult;
}

bool UAsyncHelperSubsystem::IsAsyncTaskRunning(const FAsyncTaskHandle& TaskHandle)
{
	if (!AsyncTaskManager)
	{
		return false;
	}

	return AsyncTaskManager->IsAsyncTaskRunning(TaskHandle);
}

FAsyncTaskInfo UAsyncHelperSubsystem::GetAsyncTaskInfo(const FAsyncTaskHandle& TaskHandle)
{
	if (!AsyncTaskManager)
	{
		return FAsyncTaskInfo();
	}

	FAsyncTaskInfo Info = AsyncTaskManager->GetAsyncTaskInfo(TaskHandle);
	
	// Update performance stats if task is completed
	if (Info.bIsCompleted || Info.bWasCancelled)
	{
		UpdatePerformanceStats(Info);
	}

	return Info;
}

void UAsyncHelperSubsystem::CancelAllAsyncTasks()
{
	if (!AsyncTaskManager)
	{
		return;
	}

	const int32 RunningCount = AsyncTaskManager->GetRunningTaskCount();
	AsyncTaskManager->CancelAllAsyncTasks();
	TotalTasksCancelled += RunningCount;
}

int32 UAsyncHelperSubsystem::GetRunningTaskCount() const
{
	if (!AsyncTaskManager)
	{
		return 0;
	}

	return AsyncTaskManager->GetRunningTaskCount();
}

TArray<FAsyncTaskHandle> UAsyncHelperSubsystem::ExecuteParallelTasks(int32 TaskCount, const FAsyncTaskDelegate& ParallelTaskDelegate, const FString& TaskName)
{
	TArray<FAsyncTaskHandle> Handles;
	
	if (!AsyncTaskManager || TaskCount <= 0)
	{
		return Handles;
	}

	Handles.Reserve(TaskCount);

	for (int32 i = 0; i < TaskCount; i++)
	{
		FString IndexedTaskName = FString::Printf(TEXT("%s_%d"), *TaskName, i);
		FAsyncTaskHandle Handle = AsyncTaskManager->ExecuteAsyncDelay(0.0f, ParallelTaskDelegate, IndexedTaskName);
		Handles.Add(Handle);
		TotalTasksCreated++;
	}

	UE_LOG(LogAsyncHelper, Log, TEXT("Started %d parallel tasks with base name '%s'"), TaskCount, *TaskName);
	return Handles;
}

FAsyncTaskHandle UAsyncHelperSubsystem::ExecuteTaskChain(const TArray<FAsyncTaskDelegate>& TaskChain, float DelayBetweenTasks, const FString& TaskName)
{
	if (!AsyncTaskManager || TaskChain.Num() == 0)
	{
		return FAsyncTaskHandle();
	}

	// For now, execute the first task in the chain
	// In a full implementation, you would want to create a proper chain execution system
	UE_LOG(LogAsyncHelper, Log, TEXT("Starting task chain '%s' with %d tasks"), *TaskName, TaskChain.Num());

	TotalTasksCreated++;
	return AsyncTaskManager->ExecuteAsyncDelay(0.0f, TaskChain[0], TaskName);
}

FString UAsyncHelperSubsystem::GetPerformanceStats() const
{
	const int32 CurrentRunning = GetRunningTaskCount();
	const double AvgExecutionTime = TotalTasksCompleted > 0 ? TotalExecutionTime / TotalTasksCompleted : 0.0;

	return FString::Printf(TEXT("Async Helper Performance Stats:\n")
		TEXT("Total Tasks Created: %d\n")
		TEXT("Total Tasks Completed: %d\n")
		TEXT("Total Tasks Cancelled: %d\n")
		TEXT("Currently Running: %d\n")
		TEXT("Average Execution Time: %.3f seconds\n")
		TEXT("Total Execution Time: %.3f seconds"),
		TotalTasksCreated,
		TotalTasksCompleted,
		TotalTasksCancelled,
		CurrentRunning,
		AvgExecutionTime,
		TotalExecutionTime);
}

void UAsyncHelperSubsystem::PerformPeriodicCleanup()
{
	if (AsyncTaskManager)
	{
		// This would call a cleanup method on the task manager
		// For now, just log the current state
		const int32 RunningCount = AsyncTaskManager->GetRunningTaskCount();
		UE_LOG(LogAsyncHelper, VeryVerbose, TEXT("Periodic cleanup - %d tasks currently running"), RunningCount);
	}
}

void UAsyncHelperSubsystem::UpdatePerformanceStats(const FAsyncTaskInfo& TaskInfo) const
{
	if (TaskInfo.bIsCompleted)
	{
		TotalTasksCompleted++;
		TotalExecutionTime += TaskInfo.Duration;
	}
}

FAsyncTaskHandle UAsyncHelperSubsystem::ExecuteAsyncTaskChain(const TArray<int32>& TaskChain, const FAsyncTaskChainDelegate& ChainDelegate, float DelayBetweenTasks, bool bStopOnFailure, const FString& TaskName)
{
	if (!AsyncTaskManager)
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncTaskManager is null"));
		return FAsyncTaskHandle();
	}

	TotalTasksCreated++;
	return AsyncTaskManager->ExecuteAsyncTaskChain(TaskChain, ChainDelegate, DelayBetweenTasks, bStopOnFailure, TaskName);
}

FAsyncTaskHandle UAsyncHelperSubsystem::ExecuteAsyncDelayWithTimeout(float DelaySeconds, float TimeoutSeconds, const FAsyncTaskDelegate& Callback, const FAsyncTimeoutDelegate& TimeoutCallback, const FString& TaskName)
{
	if (!AsyncTaskManager)
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncTaskManager is null"));
		return FAsyncTaskHandle();
	}

	TotalTasksCreated++;
	return AsyncTaskManager->ExecuteAsyncDelayWithTimeout(DelaySeconds, TimeoutSeconds, Callback, TimeoutCallback, TaskName);
}

FAsyncTaskHandle UAsyncHelperSubsystem::ExecuteAsyncBatch(int32 TaskCount, const FAsyncTaskChainDelegate& BatchDelegate, float TimeoutSeconds, const FString& TaskName)
{
	if (!AsyncTaskManager)
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncTaskManager is null"));
		return FAsyncTaskHandle();
	}

	TotalTasksCreated++;
	return AsyncTaskManager->ExecuteAsyncBatch(TaskCount, BatchDelegate, TimeoutSeconds, TaskName);
}
