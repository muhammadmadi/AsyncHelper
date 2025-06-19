#include "AsyncBatchAction.h"
#include "AsyncHelperSubsystem.h"
#include "AsyncHelper.h"
#include "Engine/World.h"

UAsyncBatchAction::UAsyncBatchAction()
	: TaskCount(0)
	, TimeoutSeconds(0.0f)
{
}

UAsyncBatchAction* UAsyncBatchAction::ExecuteAsyncBatch(const UObject* WorldContext, int32 TaskCount, float TimeoutSeconds, const FString& TaskName)
{
	UAsyncBatchAction* Action = NewObject<UAsyncBatchAction>();
	Action->TaskCount = TaskCount;
	Action->TimeoutSeconds = TimeoutSeconds;
	Action->TaskName = TaskName;
	Action->WorldContextObject = WorldContext;
	Action->RegisterWithGameInstance(WorldContext);
	return Action;
}

void UAsyncBatchAction::Activate()
{
	Super::Activate();

	if (TaskCount <= 0)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncBatchAction: TaskCount must be positive"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem();
	if (!Subsystem)
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncBatchAction: AsyncHelper subsystem not available"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	// Create delegate for task progress
	FAsyncTaskChainDelegate ProgressDelegate;
	ProgressDelegate.BindUFunction(this, FName("HandleTaskProgress"));

	// Execute the async batch
	TaskHandle = Subsystem->GetAsyncTaskManager()->ExecuteAsyncBatch(TaskCount, ProgressDelegate, TimeoutSeconds, TaskName);

	if (!TaskHandle.IsValid())
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncBatchAction: Failed to create async batch"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UE_LOG(LogAsyncHelper, Log, TEXT("AsyncBatchAction: Started batch '%s' with %d tasks"), *TaskName, TaskCount);
}

void UAsyncBatchAction::Cancel()
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

void UAsyncBatchAction::HandleTaskProgress(int32 TaskIndex)
{
	// Check if we were cancelled during execution
	if (!IsValidLowLevel() || HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
	{
		return;
	}

	OnTaskExecuted.Broadcast(TaskIndex);

	// Check if this was the last task
	if (TaskIndex >= TaskCount - 1)
	{
		HandleTaskCompleted();
	}
}

void UAsyncBatchAction::HandleTaskCompleted()
{
	// Check if we were cancelled during execution
	if (!IsValidLowLevel() || HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
	{
		return;
	}

	OnCompleted.Broadcast();
	SetReadyToDestroy();
}

UAsyncHelperSubsystem* UAsyncBatchAction::GetAsyncHelperSubsystem() const
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
