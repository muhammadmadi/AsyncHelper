#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "AsyncTaskManager.h"
#include "AsyncDebugTools.generated.h"

/**
 * Advanced debugging and profiling tools for async operations
 */
UCLASS(BlueprintType)
class ASYNCHELPER_API UAsyncDebugTools : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Draw debug visualization of all active tasks in the viewport
	 * Shows task names, durations, and status
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Debug", CallInEditor = true, meta = (WorldContext = "WorldContext"))
	static void DrawActiveTasksDebug(const UObject* WorldContext, bool bPersistent = false);

	/**
	 * Get detailed breakdown of task performance by type
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Debug", meta = (WorldContext = "WorldContext"))
	static TMap<FString, int32> GetTaskCountByType(const UObject* WorldContext);

	/**
	 * Get list of all active task names for debugging
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Debug", meta = (WorldContext = "WorldContext"))
	static TArray<FString> GetActiveTaskNames(const UObject* WorldContext);

	/**
	 * Get the longest running task information
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Debug", meta = (WorldContext = "WorldContext"))
	static FAsyncTaskInfo GetLongestRunningTask(const UObject* WorldContext);

	/**
	 * Log detailed performance report to console
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Debug", meta = (WorldContext = "WorldContext"))
	static void LogPerformanceReport(const UObject* WorldContext);

	/**
	 * Check for potential memory leaks (tasks that should have completed)
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Debug", meta = (WorldContext = "WorldContext"))
	static TArray<FString> DetectPotentialLeaks(const UObject* WorldContext, float MaxExpectedDuration = 60.0f);

	/**
	 * Get memory usage statistics for the async system
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Debug", meta = (WorldContext = "WorldContext"))
	static FString GetMemoryUsageStats(const UObject* WorldContext);

	/**
	 * Enable/disable real-time task monitoring overlay
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Debug", meta = (WorldContext = "WorldContext"))
	static void SetTaskMonitoringOverlay(const UObject* WorldContext, bool bEnabled);

	/**
	 * Export task performance data to CSV file for analysis
	 */
	UFUNCTION(BlueprintCallable, Category = "Async Helper|Debug", meta = (WorldContext = "WorldContext"))
	static bool ExportPerformanceDataToCSV(const UObject* WorldContext, const FString& FilePath);

protected:
	/** Helper to get debug color based on task status */
	static FColor GetTaskStatusColor(const FAsyncTaskInfo& TaskInfo);

	/** Helper to format task duration for display */
	static FString FormatDuration(float Duration);
};
