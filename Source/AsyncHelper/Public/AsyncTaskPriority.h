#pragma once

#include "CoreMinimal.h"
#include "AsyncTaskPriority.generated.h"

/**
 * Priority levels for async tasks
 * Higher priority tasks execute before lower priority ones
 */
UENUM(BlueprintType)
enum class EAsyncTaskPriority : uint8
{
	/** Background tasks - lowest priority, won't impact gameplay */
	Background UMETA(DisplayName = "Background"),
	
	/** Low priority - non-critical operations */
	Low UMETA(DisplayName = "Low"),
	
	/** Normal priority - default for most operations */
	Normal UMETA(DisplayName = "Normal"),
	
	/** High priority - important gameplay operations */
	High UMETA(DisplayName = "High"),
	
	/** Critical priority - essential operations that must complete quickly */
	Critical UMETA(DisplayName = "Critical")
};

/**
 * Task priority utilities
 */
UCLASS(BlueprintType)
class ASYNCHELPER_API UAsyncTaskPriorityUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Get the numeric value of a priority level (higher = more important)
	 */
	UFUNCTION(BlueprintPure, Category = "Async Helper|Priority")
	static int32 GetPriorityValue(EAsyncTaskPriority Priority);

	/**
	 * Compare two priorities (returns true if A has higher priority than B)
	 */
	UFUNCTION(BlueprintPure, Category = "Async Helper|Priority")
	static bool IsHigherPriority(EAsyncTaskPriority A, EAsyncTaskPriority B);

	/**
	 * Get recommended priority for common task types
	 */
	UFUNCTION(BlueprintPure, Category = "Async Helper|Priority")
	static EAsyncTaskPriority GetRecommendedPriority(const FString& TaskType);
};
