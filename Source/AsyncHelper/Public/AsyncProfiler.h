#pragma once

#include "CoreMinimal.h"
#include "Stats/Stats.h"
#include "AsyncProfiler.generated.h"

// Declare stat groups for Unreal's profiler
DECLARE_STATS_GROUP(TEXT("AsyncHelper"), STATGROUP_AsyncHelper, STATCAT_Advanced);

// Individual stats
DECLARE_CYCLE_STAT(TEXT("Async Task Creation"), STAT_AsyncTaskCreation, STATGROUP_AsyncHelper);
DECLARE_CYCLE_STAT(TEXT("Async Task Execution"), STAT_AsyncTaskExecution, STATGROUP_AsyncHelper);
DECLARE_CYCLE_STAT(TEXT("Task Cleanup"), STAT_TaskCleanup, STATGROUP_AsyncHelper);
DECLARE_CYCLE_STAT(TEXT("Line Trace Async"), STAT_LineTraceAsync, STATGROUP_AsyncHelper);

DECLARE_DWORD_COUNTER_STAT(TEXT("Active Tasks"), STAT_ActiveTasks, STATGROUP_AsyncHelper);
DECLARE_DWORD_COUNTER_STAT(TEXT("Completed Tasks"), STAT_CompletedTasks, STATGROUP_AsyncHelper);
DECLARE_DWORD_COUNTER_STAT(TEXT("Cancelled Tasks"), STAT_CancelledTasks, STATGROUP_AsyncHelper);

DECLARE_MEMORY_STAT(TEXT("Task Memory Usage"), STAT_TaskMemoryUsage, STATGROUP_AsyncHelper);

/**
 * Performance profiler integration for AsyncHelper
 * Provides detailed metrics for Unreal's built-in profiler
 */
UCLASS(BlueprintType)
class ASYNCHELPER_API UAsyncProfiler : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Start profiling a specific operation
	 */
	static void BeginProfileScope(const FString& ScopeName);

	/**
	 * End profiling scope
	 */
	static void EndProfileScope(const FString& ScopeName);

	/**
	 * Record task creation metrics
	 */
	static void RecordTaskCreated(const FString& TaskType, float DelaySeconds);

	/**
	 * Record task completion metrics
	 */
	static void RecordTaskCompleted(const FString& TaskType, float ExecutionTime, bool bWasCancelled);

	/**
	 * Update memory usage statistics
	 */
	static void UpdateMemoryStats(int32 ActiveTaskCount, int32 PooledTaskCount);

	/**
	 * Get comprehensive performance report
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Profiler")
	static FString GetPerformanceReport();

	/**
	 * Reset all performance counters
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Profiler")
	static void ResetPerformanceCounters();

	/**
	 * Enable/disable detailed profiling (may impact performance)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Profiler")
	static void SetDetailedProfilingEnabled(bool bEnabled);

	/**
	 * Get current profiling status
	 */
	UFUNCTION(BlueprintPure, Category = "Async Helper|Profiler")
	static bool IsProfilingEnabled();

protected:
	/** Profiling data storage */
	struct FProfileData
	{
		double TotalTime = 0.0;
		int32 CallCount = 0;
		double MinTime = DBL_MAX;
		double MaxTime = 0.0;
		double LastTime = 0.0;
	};

	/** Map of operation names to profiling data */
	static TMap<FString, FProfileData> ProfileDataMap;

	/** Thread safety for profiling data */
	static FCriticalSection ProfileCriticalSection;

	/** Whether detailed profiling is enabled */
	static bool bDetailedProfilingEnabled;

	/** Performance counters */
	static int32 TotalTasksCreated;
	static int32 TotalTasksCompleted;
	static int32 TotalTasksCancelled;
	static double TotalExecutionTime;
};

/**
 * RAII helper for automatic profiling scope management
 */
class ASYNCHELPER_API FAsyncProfileScope
{
public:
	explicit FAsyncProfileScope(const FString& ScopeName);
	~FAsyncProfileScope();

private:
	FString ScopeName;
	double StartTime;
};

// Macro for easy profiling
#define ASYNC_PROFILE_SCOPE(ScopeName) FAsyncProfileScope ProfileScope(ScopeName);
