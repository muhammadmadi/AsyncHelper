// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncTaskChainAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncTaskChainAction() {}

// ********** Begin Cross Module References ********************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTaskChainAction();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTaskChainAction_NoRegister();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCancelled__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCompleted__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_AsyncHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAsyncTaskChainProgress ***********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncTaskChainProgress_Parms
	{
		int32 TaskIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskChainAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::NewProp_TaskIndex = { "TaskIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AsyncHelper_eventAsyncTaskChainProgress_Parms, TaskIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::NewProp_TaskIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTaskChainProgress__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskChainProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskChainProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTaskChainProgress_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskChainProgress, int32 TaskIndex)
{
	struct _Script_AsyncHelper_eventAsyncTaskChainProgress_Parms
	{
		int32 TaskIndex;
	};
	_Script_AsyncHelper_eventAsyncTaskChainProgress_Parms Parms;
	Parms.TaskIndex=TaskIndex;
	AsyncTaskChainProgress.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncTaskChainProgress *************************************************

// ********** Begin Delegate FAsyncTaskChainActionCompleted ****************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskChainAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTaskChainActionCompleted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTaskChainActionCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskChainActionCompleted)
{
	AsyncTaskChainActionCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncTaskChainActionCompleted ******************************************

// ********** Begin Delegate FAsyncTaskChainActionCancelled ****************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCancelled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskChainAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCancelled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTaskChainActionCancelled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCancelled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCancelled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCancelled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCancelled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTaskChainActionCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskChainActionCancelled)
{
	AsyncTaskChainActionCancelled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncTaskChainActionCancelled ******************************************

// ********** Begin Class UAsyncTaskChainAction Function AsyncTaskChain ****************************
struct Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics
{
	struct AsyncTaskChainAction_eventAsyncTaskChain_Parms
	{
		const UObject* WorldContext;
		TArray<int32> TaskIndices;
		float DelayBetweenTasks;
		bool bStopOnFailure;
		FString TaskName;
		UAsyncTaskChainAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute a chain of async tasks in sequence\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param TaskIndices - Array of task indices to execute in sequence\n\x09 * @param DelayBetweenTasks - Delay between each task in the chain\n\x09 * @param bStopOnFailure - Whether to stop the chain if any task fails\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return The async action instance\n\x09 */" },
#endif
		{ "CPP_Default_bStopOnFailure", "true" },
		{ "CPP_Default_DelayBetweenTasks", "0.000000" },
		{ "CPP_Default_TaskName", "AsyncTaskChain" },
		{ "ModuleRelativePath", "Public/AsyncTaskChainAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute a chain of async tasks in sequence\n@param WorldContext - World context for the operation\n@param TaskIndices - Array of task indices to execute in sequence\n@param DelayBetweenTasks - Delay between each task in the chain\n@param bStopOnFailure - Whether to stop the chain if any task fails\n@param TaskName - Optional name for debugging\n@return The async action instance" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskIndices;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayBetweenTasks;
	static void NewProp_bStopOnFailure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnFailure;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskChainAction_eventAsyncTaskChain_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_TaskIndices_Inner = { "TaskIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_TaskIndices = { "TaskIndices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskChainAction_eventAsyncTaskChain_Parms, TaskIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskIndices_MetaData), NewProp_TaskIndices_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_DelayBetweenTasks = { "DelayBetweenTasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskChainAction_eventAsyncTaskChain_Parms, DelayBetweenTasks), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_bStopOnFailure_SetBit(void* Obj)
{
	((AsyncTaskChainAction_eventAsyncTaskChain_Parms*)Obj)->bStopOnFailure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_bStopOnFailure = { "bStopOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTaskChainAction_eventAsyncTaskChain_Parms), &Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_bStopOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskChainAction_eventAsyncTaskChain_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskChainAction_eventAsyncTaskChain_Parms, ReturnValue), Z_Construct_UClass_UAsyncTaskChainAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_TaskIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_TaskIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_DelayBetweenTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_bStopOnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskChainAction, nullptr, "AsyncTaskChain", Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::AsyncTaskChainAction_eventAsyncTaskChain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::AsyncTaskChainAction_eventAsyncTaskChain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskChainAction::execAsyncTaskChain)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_TARRAY_REF(int32,Z_Param_Out_TaskIndices);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayBetweenTasks);
	P_GET_UBOOL(Z_Param_bStopOnFailure);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncTaskChainAction**)Z_Param__Result=UAsyncTaskChainAction::AsyncTaskChain(Z_Param_WorldContext,Z_Param_Out_TaskIndices,Z_Param_DelayBetweenTasks,Z_Param_bStopOnFailure,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTaskChainAction Function AsyncTaskChain ******************************

// ********** Begin Class UAsyncTaskChainAction Function Cancel ************************************
struct Z_Construct_UFunction_UAsyncTaskChainAction_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel the async operation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTaskChainAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel the async operation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskChainAction_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskChainAction, nullptr, "Cancel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskChainAction_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskChainAction_Cancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncTaskChainAction_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskChainAction_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskChainAction::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// ********** End Class UAsyncTaskChainAction Function Cancel **************************************

// ********** Begin Class UAsyncTaskChainAction Function HandleTaskCompleted ***********************
struct Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskChainAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskChainAction, nullptr, "HandleTaskCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskChainAction::execHandleTaskCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTaskCompleted();
	P_NATIVE_END;
}
// ********** End Class UAsyncTaskChainAction Function HandleTaskCompleted *************************

// ********** Begin Class UAsyncTaskChainAction Function HandleTaskProgress ************************
struct Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics
{
	struct AsyncTaskChainAction_eventHandleTaskProgress_Parms
	{
		int32 TaskIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal callbacks\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTaskChainAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::NewProp_TaskIndex = { "TaskIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskChainAction_eventHandleTaskProgress_Parms, TaskIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::NewProp_TaskIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskChainAction, nullptr, "HandleTaskProgress", Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::AsyncTaskChainAction_eventHandleTaskProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::AsyncTaskChainAction_eventHandleTaskProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskChainAction::execHandleTaskProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TaskIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTaskProgress(Z_Param_TaskIndex);
	P_NATIVE_END;
}
// ********** End Class UAsyncTaskChainAction Function HandleTaskProgress **************************

// ********** Begin Class UAsyncTaskChainAction ****************************************************
void UAsyncTaskChainAction::StaticRegisterNativesUAsyncTaskChainAction()
{
	UClass* Class = UAsyncTaskChainAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncTaskChain", &UAsyncTaskChainAction::execAsyncTaskChain },
		{ "Cancel", &UAsyncTaskChainAction::execCancel },
		{ "HandleTaskCompleted", &UAsyncTaskChainAction::execHandleTaskCompleted },
		{ "HandleTaskProgress", &UAsyncTaskChainAction::execHandleTaskProgress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncTaskChainAction;
UClass* UAsyncTaskChainAction::GetPrivateStaticClass()
{
	using TClass = UAsyncTaskChainAction;
	if (!Z_Registration_Info_UClass_UAsyncTaskChainAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncTaskChainAction"),
			Z_Registration_Info_UClass_UAsyncTaskChainAction.InnerSingleton,
			StaticRegisterNativesUAsyncTaskChainAction,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAsyncTaskChainAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncTaskChainAction_NoRegister()
{
	return UAsyncTaskChainAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncTaskChainAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint Async Action for executing task chains\n * Provides sequential task execution with flexible control\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AsyncTaskChainAction.h" },
		{ "ModuleRelativePath", "Public/AsyncTaskChainAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Async Action for executing task chains\nProvides sequential task execution with flexible control" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskExecuted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskChainAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskChainAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskChainAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskExecuted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTaskChainAction_AsyncTaskChain, "AsyncTaskChain" }, // 2183333184
		{ &Z_Construct_UFunction_UAsyncTaskChainAction_Cancel, "Cancel" }, // 2586430298
		{ &Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskCompleted, "HandleTaskCompleted" }, // 2393420500
		{ &Z_Construct_UFunction_UAsyncTaskChainAction_HandleTaskProgress, "HandleTaskProgress" }, // 1435270734
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTaskChainAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskChainAction_Statics::NewProp_OnTaskExecuted = { "OnTaskExecuted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskChainAction, OnTaskExecuted), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskExecuted_MetaData), NewProp_OnTaskExecuted_MetaData) }; // 533928332
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskChainAction_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskChainAction, OnCompleted), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 3883548834
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTaskChainAction_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTaskChainAction, OnCancelled), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainActionCancelled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 3635579225
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncTaskChainAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskChainAction_Statics::NewProp_OnTaskExecuted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskChainAction_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTaskChainAction_Statics::NewProp_OnCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskChainAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncTaskChainAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskChainAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTaskChainAction_Statics::ClassParams = {
	&UAsyncTaskChainAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncTaskChainAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskChainAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskChainAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncTaskChainAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncTaskChainAction()
{
	if (!Z_Registration_Info_UClass_UAsyncTaskChainAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTaskChainAction.OuterSingleton, Z_Construct_UClass_UAsyncTaskChainAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncTaskChainAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTaskChainAction);
UAsyncTaskChainAction::~UAsyncTaskChainAction() {}
// ********** End Class UAsyncTaskChainAction ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h__Script_AsyncHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncTaskChainAction, UAsyncTaskChainAction::StaticClass, TEXT("UAsyncTaskChainAction"), &Z_Registration_Info_UClass_UAsyncTaskChainAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTaskChainAction), 199390338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h__Script_AsyncHelper_1483153077(TEXT("/Script/AsyncHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h__Script_AsyncHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h__Script_AsyncHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
