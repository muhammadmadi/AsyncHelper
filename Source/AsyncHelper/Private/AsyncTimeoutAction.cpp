#include "AsyncTimeoutAction.h"
#include "AsyncHelperSubsystem.h"
#include "AsyncHelper.h"
#include "Engine/World.h"

UAsyncTimeoutAction::UAsyncTimeoutAction()
	: DelaySeconds(0.0f)
	, TimeoutSeconds(0.0f)
{
}

UAsyncTimeoutAction* UAsyncTimeoutAction::AsyncDelayWithTimeout(const UObject* WorldContext, float DelaySeconds, float TimeoutSeconds, const FString& TaskName)
{
	UAsyncTimeoutAction* Action = NewObject<UAsyncTimeoutAction>();
	Action->DelaySeconds = DelaySeconds;
	Action->TimeoutSeconds = TimeoutSeconds;
	Action->TaskName = TaskName;
	Action->WorldContextObject = WorldContext;
	Action->RegisterWithGameInstance(WorldContext);
	return Action;
}

void UAsyncTimeoutAction::Activate()
{
	Super::Activate();

	if (DelaySeconds < 0.0f)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncTimeoutAction: DelaySeconds cannot be negative"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	if (TimeoutSeconds <= 0.0f)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncTimeoutAction: TimeoutSeconds must be positive"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem();
	if (!Subsystem)
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncTimeoutAction: AsyncHelper subsystem not available"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	// Create delegates for completion and timeout
	FAsyncTaskDelegate CompletionDelegate;
	CompletionDelegate.BindUFunction(this, FName("HandleTaskCompleted"));

	FAsyncTimeoutDelegate TimeoutDelegate;
	TimeoutDelegate.BindUFunction(this, FName("HandleTaskTimeout"));

	// Execute the async task with timeout
	TaskHandle = Subsystem->GetAsyncTaskManager()->ExecuteAsyncDelayWithTimeout(DelaySeconds, TimeoutSeconds, CompletionDelegate, TimeoutDelegate, TaskName);

	if (!TaskHandle.IsValid())
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncTimeoutAction: Failed to create async task with timeout"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UE_LOG(LogAsyncHelper, Log, TEXT("AsyncTimeoutAction: Started task '%s' with %.2f second delay and %.2f second timeout"), *TaskName, DelaySeconds, TimeoutSeconds);
}

void UAsyncTimeoutAction::Cancel()
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

void UAsyncTimeoutAction::HandleTaskCompleted()
{
	// Check if we were cancelled during execution
	if (!IsValidLowLevel() || HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
	{
		return;
	}

	OnCompleted.Broadcast();
	SetReadyToDestroy();
}

void UAsyncTimeoutAction::HandleTaskTimeout(bool bTimedOut)
{
	// Check if we were cancelled during execution
	if (!IsValidLowLevel() || HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
	{
		return;
	}

	if (bTimedOut)
	{
		OnTimedOut.Broadcast();
	}
	else
	{
		OnCompleted.Broadcast();
	}

	SetReadyToDestroy();
}

UAsyncHelperSubsystem* UAsyncTimeoutAction::GetAsyncHelperSubsystem() const
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
