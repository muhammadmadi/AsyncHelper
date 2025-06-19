#include "AsyncTaskChainAction.h"
#include "AsyncHelperSubsystem.h"
#include "AsyncHelper.h"
#include "Engine/World.h"

UAsyncTaskChainAction::UAsyncTaskChainAction()
	: DelayBetweenTasks(0.0f)
	, bStopOnFailure(true)
{
}

UAsyncTaskChainAction* UAsyncTaskChainAction::AsyncTaskChain(const UObject* WorldContext, const TArray<int32>& TaskIndices, float DelayBetweenTasks, bool bStopOnFailure, const FString& TaskName)
{
	UAsyncTaskChainAction* Action = NewObject<UAsyncTaskChainAction>();
	Action->TaskIndices = TaskIndices;
	Action->DelayBetweenTasks = DelayBetweenTasks;
	Action->bStopOnFailure = bStopOnFailure;
	Action->TaskName = TaskName;
	Action->WorldContextObject = WorldContext;
	Action->RegisterWithGameInstance(WorldContext);
	return Action;
}

void UAsyncTaskChainAction::Activate()
{
	Super::Activate();

	if (TaskIndices.Num() == 0)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncTaskChainAction: TaskIndices cannot be empty"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem();
	if (!Subsystem)
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncTaskChainAction: AsyncHelper subsystem not available"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	// Create delegate for task progress
	FAsyncTaskChainDelegate ProgressDelegate;
	ProgressDelegate.BindUFunction(this, FName("HandleTaskProgress"));

	// Execute the async task chain
	TaskHandle = Subsystem->GetAsyncTaskManager()->ExecuteAsyncTaskChain(TaskIndices, ProgressDelegate, DelayBetweenTasks, bStopOnFailure, TaskName);

	if (!TaskHandle.IsValid())
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncTaskChainAction: Failed to create async task chain"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UE_LOG(LogAsyncHelper, Log, TEXT("AsyncTaskChainAction: Started task chain '%s' with %d tasks"), *TaskName, TaskIndices.Num());
}

void UAsyncTaskChainAction::Cancel()
{
	if (TaskHandle.IsValid())
	{
		if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem())
		{
			Subsystem->CancelAsyncTask(TaskHandle);
		}
	}

	OnCancelled.Broadcast();
	SetReadyToDestroy();
}

void UAsyncTaskChainAction::HandleTaskProgress(int32 TaskIndex)
{
	// Check if we were cancelled during execution
	if (!IsValidLowLevel() || HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
	{
		return;
	}

	OnTaskExecuted.Broadcast(TaskIndex);

	// Check if this was the last task
	if (TaskIndex == TaskIndices.Last())
	{
		HandleTaskCompleted();
	}
}

void UAsyncTaskChainAction::HandleTaskCompleted()
{
	// Check if we were cancelled during execution
	if (!IsValidLowLevel() || HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
	{
		return;
	}

	OnCompleted.Broadcast();
	SetReadyToDestroy();
}

UAsyncHelperSubsystem* UAsyncTaskChainAction::GetAsyncHelperSubsystem() const
{
	if (!WorldContextObject.IsValid())
	{
		return nullptr;
	}

	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject.Get(), EGetWorldErrorMode::LogAndReturnNull))
	{
		if (UGameInstance* GameInstance = World->GetGameInstance())
		{
			return GameInstance->GetSubsystem<UAsyncHelperSubsystem>();
		}
	}

	return nullptr;
}
