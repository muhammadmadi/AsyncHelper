#include "AsyncHelperBlueprintLibrary.h"
#include "AsyncHelperSubsystem.h"
#include "AsyncHelper.h"
#include "Engine/World.h"

FAsyncTaskHandle UAsyncHelperBlueprintLibrary::ExecuteAsyncDelay(const UObject* WorldContext, float DelaySeconds, const FAsyncTaskDelegate& Callback, const FString& TaskName)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->ExecuteAsyncDelay(DelaySeconds, Callback, TaskName);
	}

	UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncHelper subsystem not available"));
	return FAsyncTaskHandle();
}

FAsyncTaskHandle UAsyncHelperBlueprintLibrary::ExecuteAsyncDelayWithResult(const UObject* WorldContext, float DelaySeconds, const FAsyncTaskDelegateWithResult& Callback, const FString& TaskName)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->ExecuteAsyncDelayWithResult(DelaySeconds, Callback, TaskName);
	}

	UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncHelper subsystem not available"));
	return FAsyncTaskHandle();
}

bool UAsyncHelperBlueprintLibrary::CancelAsyncTask(const UObject* WorldContext, const FAsyncTaskHandle& TaskHandle)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->CancelAsyncTask(TaskHandle);
	}

	return false;
}

bool UAsyncHelperBlueprintLibrary::IsAsyncTaskRunning(const UObject* WorldContext, const FAsyncTaskHandle& TaskHandle)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->IsAsyncTaskRunning(TaskHandle);
	}

	return false;
}

FAsyncTaskInfo UAsyncHelperBlueprintLibrary::GetAsyncTaskInfo(const UObject* WorldContext, const FAsyncTaskHandle& TaskHandle)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->GetAsyncTaskInfo(TaskHandle);
	}

	return FAsyncTaskInfo();
}

void UAsyncHelperBlueprintLibrary::CancelAllAsyncTasks(const UObject* WorldContext)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		Subsystem->CancelAllAsyncTasks();
	}
}

int32 UAsyncHelperBlueprintLibrary::GetRunningTaskCount(const UObject* WorldContext)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->GetRunningTaskCount();
	}

	return 0;
}

TArray<FAsyncTaskHandle> UAsyncHelperBlueprintLibrary::ExecuteParallelTasks(const UObject* WorldContext, int32 TaskCount, const FAsyncTaskDelegate& ParallelTaskDelegate, const FString& TaskName)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->ExecuteParallelTasks(TaskCount, ParallelTaskDelegate, TaskName);
	}

	return TArray<FAsyncTaskHandle>();
}

FAsyncTaskHandle UAsyncHelperBlueprintLibrary::ExecuteTaskChain(const UObject* WorldContext, const TArray<FAsyncTaskDelegate>& TaskChain, float DelayBetweenTasks, const FString& TaskName)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->ExecuteTaskChain(TaskChain, DelayBetweenTasks, TaskName);
	}

	return FAsyncTaskHandle();
}

FString UAsyncHelperBlueprintLibrary::GetPerformanceStats(const UObject* WorldContext)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->GetPerformanceStats();
	}

	return TEXT("AsyncHelper subsystem not available");
}

FAsyncTaskHandle UAsyncHelperBlueprintLibrary::ExecuteSimpleDelay(const UObject* WorldContext, float DelaySeconds, const FString& TaskName)
{
	// Create an empty delegate for simple delay
	FAsyncTaskDelegate EmptyDelegate;
	return ExecuteAsyncDelay(WorldContext, DelaySeconds, EmptyDelegate, TaskName);
}

bool UAsyncHelperBlueprintLibrary::IsAsyncHelperAvailable(const UObject* WorldContext)
{
	return GetAsyncHelperSubsystem(WorldContext) != nullptr;
}

FAsyncTaskHandle UAsyncHelperBlueprintLibrary::ExecuteAsyncDelaySimple(const UObject* WorldContext, float DelaySeconds, const FString& TaskName)
{
	// Create an empty delegate for simple delay
	FAsyncTaskDelegate EmptyDelegate;
	return ExecuteAsyncDelay(WorldContext, DelaySeconds, EmptyDelegate, TaskName);
}

UAsyncHelperSubsystem* UAsyncHelperBlueprintLibrary::GetAsyncHelperSubsystem(const UObject* WorldContext)
{
	if (!WorldContext)
	{
		return nullptr;
	}

	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContext, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (UGameInstance* GameInstance = World->GetGameInstance())
		{
			return GameInstance->GetSubsystem<UAsyncHelperSubsystem>();
		}
	}

	return nullptr;
}

FAsyncTaskHandle UAsyncHelperBlueprintLibrary::ExecuteAsyncTaskChain(const UObject* WorldContext, const TArray<int32>& TaskChain, const FAsyncTaskChainDelegate& ChainDelegate, float DelayBetweenTasks, bool bStopOnFailure, const FString& TaskName)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->ExecuteAsyncTaskChain(TaskChain, ChainDelegate, DelayBetweenTasks, bStopOnFailure, TaskName);
	}

	UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncHelper subsystem not available"));
	return FAsyncTaskHandle();
}

FAsyncTaskHandle UAsyncHelperBlueprintLibrary::ExecuteAsyncDelayWithTimeout(const UObject* WorldContext, float DelaySeconds, float TimeoutSeconds, const FAsyncTaskDelegate& Callback, const FAsyncTimeoutDelegate& TimeoutCallback, const FString& TaskName)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->ExecuteAsyncDelayWithTimeout(DelaySeconds, TimeoutSeconds, Callback, TimeoutCallback, TaskName);
	}

	UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncHelper subsystem not available"));
	return FAsyncTaskHandle();
}

FAsyncTaskHandle UAsyncHelperBlueprintLibrary::ExecuteAsyncBatch(const UObject* WorldContext, int32 TaskCount, const FAsyncTaskChainDelegate& BatchDelegate, float TimeoutSeconds, const FString& TaskName)
{
	if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem(WorldContext))
	{
		return Subsystem->ExecuteAsyncBatch(TaskCount, BatchDelegate, TimeoutSeconds, TaskName);
	}

	UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncHelper subsystem not available"));
	return FAsyncTaskHandle();
}
