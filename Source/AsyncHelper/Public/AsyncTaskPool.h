#pragma once

#include "CoreMinimal.h"
#include "AsyncTaskManager.h"
#include "AsyncTaskPool.generated.h"

/**
 * High-performance task pool for reducing memory allocations
 * Reuses task data objects to minimize garbage collection
 */
UCLASS(BlueprintType)
class ASYNCHELPER_API UAsyncTaskPool : public UObject
{
	GENERATED_BODY()

public:
	UAsyncTaskPool();

	/**
	 * Get a pooled task data object (creates new if pool is empty)
	 */
	TSharedPtr<FAsyncTaskData> GetPooledTask();

	/**
	 * Return a task data object to the pool for reuse
	 */
	void ReturnTaskToPool(TSharedPtr<FAsyncTaskData> TaskData);

	/**
	 * Get current pool statistics
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Pool")
	FString GetPoolStats() const;

	/**
	 * Clear the entire pool (useful for memory cleanup)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Pool")
	void ClearPool();

	/**
	 * Set maximum pool size (prevents unlimited growth)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Pool")
	void SetMaxPoolSize(int32 MaxSize);

protected:
	/** Pool of reusable task data objects */
	TQueue<TSharedPtr<FAsyncTaskData>> TaskPool;

	/** Maximum number of objects to keep in pool */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pool Settings")
	int32 MaxPoolSize = 50;

	/** Statistics tracking */
	UPROPERTY(BlueprintReadOnly, Category = "Pool Stats")
	int32 TotalCreated = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Pool Stats")
	int32 TotalReused = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Pool Stats")
	int32 CurrentPoolSize = 0;

private:
	/** Thread safety for pool operations */
	mutable FCriticalSection PoolCriticalSection;

	/** Reset task data for reuse */
	void ResetTaskData(TSharedPtr<FAsyncTaskData> TaskData);
};
