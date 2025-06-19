#include "AsyncDelayAction.h"
#include "AsyncHelperSubsystem.h"
#include "AsyncHelper.h"
#include "Engine/World.h"

UAsyncDelayAction::UAsyncDelayAction()
	: DelaySeconds(0.0f)
	, bUseCancellationToken(false)
{
}

UAsyncDelayAction* UAsyncDelayAction::AsyncDelay(const UObject* WorldContext, float DelaySeconds, const FString& TaskName)
{
	UAsyncDelayAction* Action = NewObject<UAsyncDelayAction>();
	Action->DelaySeconds = DelaySeconds;
	Action->TaskName = TaskName;
	Action->WorldContextObject = WorldContext;
	Action->bUseCancellationToken = false;
	Action->RegisterWithGameInstance(WorldContext);
	return Action;
}

UAsyncDelayAction* UAsyncDelayAction::AsyncDelayWithCancellation(const UObject* WorldContext, float DelaySeconds, const FAsyncTaskHandle& CancellationToken, const FString& TaskName)
{
	UAsyncDelayAction* Action = NewObject<UAsyncDelayAction>();
	Action->DelaySeconds = DelaySeconds;
	Action->TaskName = TaskName;
	Action->WorldContextObject = WorldContext;
	Action->CancellationToken = CancellationToken;
	Action->bUseCancellationToken = true;
	Action->RegisterWithGameInstance(WorldContext);
	return Action;
}

void UAsyncDelayAction::Activate()
{
	Super::Activate();

	if (DelaySeconds < 0.0f)
	{
		UE_LOG(LogAsyncHelper, Warning, TEXT("AsyncDelayAction: DelaySeconds cannot be negative"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem();
	if (!Subsystem)
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncDelayAction: AsyncHelper subsystem not available"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	// Check if we should use cancellation token
	if (bUseCancellationToken && CancellationToken.IsValid())
	{
		// Check if the cancellation token is already cancelled
		if (!Subsystem->IsAsyncTaskRunning(CancellationToken))
		{
			UE_LOG(LogAsyncHelper, Log, TEXT("AsyncDelayAction: Cancellation token already cancelled"));
			OnCancelled.Broadcast();
			SetReadyToDestroy();
			return;
		}
	}

	// Create delegate for completion
	FAsyncTaskDelegate CompletionDelegate;
	CompletionDelegate.BindUFunction(this, FName("HandleTaskCompleted"));

	// Execute the async delay
	TaskHandle = Subsystem->ExecuteAsyncDelay(DelaySeconds, CompletionDelegate, TaskName);

	if (!TaskHandle.IsValid())
	{
		UE_LOG(LogAsyncHelper, Error, TEXT("AsyncDelayAction: Failed to create async task"));
		OnCancelled.Broadcast();
		SetReadyToDestroy();
		return;
	}

	UE_LOG(LogAsyncHelper, Log, TEXT("AsyncDelayAction: Started async delay '%s' for %.2f seconds"), *TaskName, DelaySeconds);
}

void UAsyncDelayAction::Cancel()
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

void UAsyncDelayAction::HandleTaskCompleted()
{
	// Check if we were cancelled during execution
	if (!IsValidLowLevel() || HasAnyFlags(RF_BeginDestroyed | RF_FinishDestroyed))
	{
		return;
	}

	// Check cancellation token if we're using one
	if (bUseCancellationToken && CancellationToken.IsValid())
	{
		if (UAsyncHelperSubsystem* Subsystem = GetAsyncHelperSubsystem())
		{
			if (!Subsystem->IsAsyncTaskRunning(CancellationToken))
			{
				OnCancelled.Broadcast();
				SetReadyToDestroy();
				return;
			}
		}
	}

	OnCompleted.Broadcast();
	SetReadyToDestroy();
}

UAsyncHelperSubsystem* UAsyncDelayAction::GetAsyncHelperSubsystem() const
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
