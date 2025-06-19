#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "AsyncHelperSettings.generated.h"

/**
 * Settings for the AsyncHelper plugin
 * Configurable through Project Settings > Plugins > Async Helper
 */
UCLASS(Config = Game, DefaultConfig, meta = (DisplayName = "Async Helper"))
class ASYNCHELPER_API UAsyncHelperSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UAsyncHelperSettings();

	// UDeveloperSettings interface
	virtual FName GetCategoryName() const override;
	virtual FText GetSectionText() const override;

#if WITH_EDITOR
	virtual FText GetSectionDescription() const override;
#endif

	/**
	 * Maximum number of concurrent async tasks allowed
	 * Higher values allow more parallelism but use more memory
	 */
	UPROPERTY(Config, EditAnywhere, Category = "Performance", meta = (ClampMin = "1", ClampMax = "1000"))
	int32 MaxConcurrentTasks = 100;

	/**
	 * How often to clean up completed tasks (in seconds)
	 * Lower values use more CPU but free memory faster
	 */
	UPROPERTY(Config, EditAnywhere, Category = "Performance", meta = (ClampMin = "1.0", ClampMax = "300.0"))
	float CleanupInterval = 30.0f;

	/**
	 * How long to keep completed task info for status checking (in seconds)
	 */
	UPROPERTY(Config, EditAnywhere, Category = "Performance", meta = (ClampMin = "1.0", ClampMax = "60.0"))
	float TaskInfoRetentionTime = 5.0f;

	/**
	 * Enable detailed logging for async operations
	 * Useful for debugging but may impact performance
	 */
	UPROPERTY(Config, EditAnywhere, Category = "Debugging")
	bool bEnableDetailedLogging = false;

	/**
	 * Enable performance statistics tracking
	 * Adds small overhead but provides useful metrics
	 */
	UPROPERTY(Config, EditAnywhere, Category = "Debugging")
	bool bEnablePerformanceStats = true;

	/**
	 * Warn when tasks take longer than this threshold (in seconds)
	 * Set to 0 to disable warnings
	 */
	UPROPERTY(Config, EditAnywhere, Category = "Debugging", meta = (ClampMin = "0.0", ClampMax = "60.0"))
	float LongRunningTaskWarningThreshold = 10.0f;

	/**
	 * Use background thread priority for async operations
	 * When enabled, tasks run at lower priority to avoid impacting game performance
	 */
	UPROPERTY(Config, EditAnywhere, Category = "Advanced")
	bool bUseBackgroundThreadPriority = true;

	/**
	 * Enable automatic task cancellation when the world is destroyed
	 */
	UPROPERTY(Config, EditAnywhere, Category = "Advanced")
	bool bAutoCleanupOnWorldDestroy = true;
};
