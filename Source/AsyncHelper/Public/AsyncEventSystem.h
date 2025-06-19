#pragma once

#include "CoreMinimal.h"
#include "AsyncTaskManager.h"
#include "AsyncEventSystem.generated.h"

/**
 * Event-driven async task system for complex workflows
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncEventDelegate, FString, EventName, FString, EventData);

USTRUCT(BlueprintType)
struct ASYNCHELPER_API FAsyncEvent
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Event")
	FString EventName;

	UPROPERTY(BlueprintReadWrite, Category = "Event")
	FString EventData;

	UPROPERTY(BlueprintReadWrite, Category = "Event")
	float Timestamp;

	UPROPERTY(BlueprintReadWrite, Category = "Event")
	int32 Priority;

	FAsyncEvent()
		: Timestamp(0.0f)
		, Priority(0)
	{}
};

/**
 * Advanced event-driven async system
 * Allows tasks to wait for events, trigger events, and create complex workflows
 */
UCLASS(BlueprintType)
class ASYNCHELPER_API UAsyncEventSystem : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Wait for a specific event to be triggered
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Events")
	FAsyncTaskHandle WaitForEvent(const FString& EventName, float TimeoutSeconds = 0.0f, const FString& TaskName = TEXT("WaitForEvent"));

	/**
	 * Trigger an event (will complete all tasks waiting for this event)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Events")
	void TriggerEvent(const FString& EventName, const FString& EventData = TEXT(""));

	/**
	 * Wait for multiple events (all must trigger)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Events")
	FAsyncTaskHandle WaitForAllEvents(const TArray<FString>& EventNames, float TimeoutSeconds = 0.0f, const FString& TaskName = TEXT("WaitForAllEvents"));

	/**
	 * Wait for any of multiple events (first one to trigger completes the task)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Events")
	FAsyncTaskHandle WaitForAnyEvent(const TArray<FString>& EventNames, float TimeoutSeconds = 0.0f, const FString& TaskName = TEXT("WaitForAnyEvent"));

	/**
	 * Schedule an event to be triggered after a delay
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Events")
	FAsyncTaskHandle ScheduleEvent(const FString& EventName, float DelaySeconds, const FString& EventData = TEXT(""), const FString& TaskName = TEXT("ScheduleEvent"));

	/**
	 * Create a conditional event (triggers only if condition is met)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Events")
	void CreateConditionalEvent(const FString& EventName, const FString& ConditionExpression);

	/**
	 * Get list of all pending events
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Events")
	TArray<FString> GetPendingEvents() const;

	/**
	 * Cancel all tasks waiting for a specific event
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Events")
	int32 CancelEventWaiters(const FString& EventName);

	/**
	 * Event triggered when any async event occurs
	 */
	UPROPERTY(BlueprintAssignable, Category = "Async Helper|Events")
	FAsyncEventDelegate OnAsyncEvent;

protected:
	/** Map of event names to waiting tasks */
	TMap<FString, TArray<FAsyncTaskHandle>> EventWaiters;

	/** Event history for debugging */
	TArray<FAsyncEvent> EventHistory;

	/** Maximum events to keep in history */
	UPROPERTY(EditAnywhere, Category = "Settings")
	int32 MaxEventHistory = 100;

	/** Thread safety */
	mutable FCriticalSection EventCriticalSection;
};
