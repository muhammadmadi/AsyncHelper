#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskManager.h"
#include "AsyncDelayAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncDelayCompleted);

/**
 * Blueprint Async Action for executing delayed callbacks
 * Provides proper Blueprint async node integration following UE5.6 best practices
 */
UCLASS(BlueprintType, meta = (ExposedAsyncProxy = AsyncTask))
class ASYNCHELPER_API UAsyncDelayAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UAsyncDelayAction();

	/**
	 * Execute an async delay with Blueprint integration
	 * @param WorldContext - World context for the operation
	 * @param DelaySeconds - How long to wait before executing
	 * @param TaskName - Optional name for debugging
	 * @return The async action instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContext"))
	static UAsyncDelayAction* AsyncDelay(const UObject* WorldContext, float DelaySeconds, const FString& TaskName = TEXT("AsyncDelay"));

	/**
	 * Execute an async delay with cancellation token support
	 * @param WorldContext - World context for the operation
	 * @param DelaySeconds - How long to wait before executing
	 * @param CancellationToken - Token for cancellation support
	 * @param TaskName - Optional name for debugging
	 * @return The async action instance
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContext"))
	static UAsyncDelayAction* AsyncDelayWithCancellation(const UObject* WorldContext, float DelaySeconds, const FAsyncTaskHandle& CancellationToken, const FString& TaskName = TEXT("AsyncDelayWithCancellation"));

	// UBlueprintAsyncActionBase interface
	virtual void Activate() override;

	/**
	 * Cancel the async operation
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper")
	void Cancel();

	UPROPERTY(BlueprintAssignable)
	FAsyncDelayCompleted OnCompleted;

	UPROPERTY(BlueprintAssignable)
	FAsyncDelayCompleted OnCancelled;

protected:
	// Parameters
	float DelaySeconds;
	FString TaskName;
	FAsyncTaskHandle CancellationToken;
	bool bUseCancellationToken;

	// Task tracking
	FAsyncTaskHandle TaskHandle;
	TWeakObjectPtr<const UObject> WorldContextObject;

	// Internal callback
	UFUNCTION()
	void HandleTaskCompleted();

	// Helper to get subsystem
	class UAsyncHelperSubsystem* GetAsyncHelperSubsystem() const;
};
