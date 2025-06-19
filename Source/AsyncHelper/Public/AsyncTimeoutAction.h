#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskManager.h"
#include "AsyncTimeoutAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTimeoutActionCompleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTimeoutActionTimedOut);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncTimeoutActionCancelled);

/**
 * Blueprint Async Action for executing tasks with timeout support
 * Prevents hanging operations by enforcing maximum execution time
 */
UCLASS(BlueprintType, meta = (ExposedAsyncProxy = AsyncTask))
class ASYNCHELPER_API UAsyncTimeoutAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UAsyncTimeoutAction();

	/**
	 * Execute an async delay with timeout support
	 * @param WorldContext - World context for the operation
	 * @param DelaySeconds - How long to wait before executing
	 * @param TimeoutSeconds - Maximum time to wait before timing out
	 * @param TaskName - Optional name for debugging
	 * @return The async action instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContext"))
	static UAsyncTimeoutAction* AsyncDelayWithTimeout(const UObject* WorldContext, float DelaySeconds, float TimeoutSeconds, const FString& TaskName = TEXT("AsyncDelayWithTimeout"));

	// UBlueprintAsyncActionBase interface
	virtual void Activate() override;
	
	/**
	 * Cancel the async operation
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	void Cancel();

	UPROPERTY(BlueprintAssignable)
	FAsyncTimeoutActionCompleted OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FAsyncTimeoutActionTimedOut OnTimedOut;

	UPROPERTY(BlueprintAssignable)
	FAsyncTimeoutActionCancelled OnCancelled;

protected:
	// Parameters
	float DelaySeconds;
	float TimeoutSeconds;
	FString TaskName;

	// Task tracking
	FAsyncTaskHandle TaskHandle;
	TWeakObjectPtr<const UObject> WorldContextObject;

	// Internal callbacks
	UFUNCTION()
	void HandleTaskCompleted();

	UFUNCTION()
	void HandleTaskTimeout(bool bTimedOut);

	// Helper to get subsystem
	class UAsyncHelperSubsystem* GetAsyncHelperSubsystem() const;
};
