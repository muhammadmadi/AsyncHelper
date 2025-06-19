// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncHelperSubsystem.h"
#include "AsyncTaskManager.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncHelperSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperSubsystem();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperSubsystem_NoRegister();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTaskManager_NoRegister();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature();
ASYNCHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncTaskHandle();
ASYNCHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncTaskInfo();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_AsyncHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncHelperSubsystem Function CancelAllAsyncTasks ***********************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAllAsyncTasks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel all running async tasks - convenience function\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel all running async tasks - convenience function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAllAsyncTasks_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "CancelAllAsyncTasks", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAllAsyncTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAllAsyncTasks_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAllAsyncTasks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAllAsyncTasks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execCancelAllAsyncTasks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAllAsyncTasks();
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function CancelAllAsyncTasks *************************

// ********** Begin Class UAsyncHelperSubsystem Function CancelAsyncTask ***************************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics
{
	struct AsyncHelperSubsystem_eventCancelAsyncTask_Parms
	{
		FAsyncTaskHandle TaskHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel a running async task - convenience function\n\x09 * @param TaskHandle - Handle of the task to cancel\n\x09 * @return True if task was successfully cancelled\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel a running async task - convenience function\n@param TaskHandle - Handle of the task to cancel\n@return True if task was successfully cancelled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventCancelAsyncTask_Parms, TaskHandle), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskHandle_MetaData), NewProp_TaskHandle_MetaData) }; // 3541892958
void Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AsyncHelperSubsystem_eventCancelAsyncTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncHelperSubsystem_eventCancelAsyncTask_Parms), &Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::NewProp_TaskHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "CancelAsyncTask", Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::AsyncHelperSubsystem_eventCancelAsyncTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::AsyncHelperSubsystem_eventCancelAsyncTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execCancelAsyncTask)
{
	P_GET_STRUCT_REF(FAsyncTaskHandle,Z_Param_Out_TaskHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CancelAsyncTask(Z_Param_Out_TaskHandle);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function CancelAsyncTask *****************************

// ********** Begin Class UAsyncHelperSubsystem Function ExecuteAsyncBatch *************************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics
{
	struct AsyncHelperSubsystem_eventExecuteAsyncBatch_Parms
	{
		int32 TaskCount;
		FScriptDelegate BatchDelegate;
		float TimeoutSeconds;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute multiple async tasks and wait for all to complete\n\x09 * @param TaskCount - Number of tasks to execute\n\x09 * @param BatchDelegate - Function to execute for each task\n\x09 * @param TimeoutSeconds - Maximum time to wait for all tasks (0 = no timeout)\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the batch operation\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncBatch" },
		{ "CPP_Default_TimeoutSeconds", "0.000000" },
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute multiple async tasks and wait for all to complete\n@param TaskCount - Number of tasks to execute\n@param BatchDelegate - Function to execute for each task\n@param TimeoutSeconds - Maximum time to wait for all tasks (0 = no timeout)\n@param TaskName - Optional name for debugging\n@return Handle to the batch operation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatchDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskCount;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_BatchDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutSeconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::NewProp_TaskCount = { "TaskCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncBatch_Parms, TaskCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::NewProp_BatchDelegate = { "BatchDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncBatch_Parms, BatchDelegate), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatchDelegate_MetaData), NewProp_BatchDelegate_MetaData) }; // 1146528334
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::NewProp_TimeoutSeconds = { "TimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncBatch_Parms, TimeoutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncBatch_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncBatch_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::NewProp_TaskCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::NewProp_BatchDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::NewProp_TimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "ExecuteAsyncBatch", Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::AsyncHelperSubsystem_eventExecuteAsyncBatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::AsyncHelperSubsystem_eventExecuteAsyncBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execExecuteAsyncBatch)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TaskCount);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_BatchDelegate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeoutSeconds);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=P_THIS->ExecuteAsyncBatch(Z_Param_TaskCount,FAsyncTaskChainDelegate(Z_Param_Out_BatchDelegate),Z_Param_TimeoutSeconds,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function ExecuteAsyncBatch ***************************

// ********** Begin Class UAsyncHelperSubsystem Function ExecuteAsyncDelay *************************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics
{
	struct AsyncHelperSubsystem_eventExecuteAsyncDelay_Parms
	{
		float DelaySeconds;
		FScriptDelegate Callback;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute a simple async delay - convenience function\n\x09 * @param DelaySeconds - How long to wait before executing the callback\n\x09 * @param Callback - Function to execute after delay\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncDelay" },
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute a simple async delay - convenience function\n@param DelaySeconds - How long to wait before executing the callback\n@param Callback - Function to execute after delay\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelaySeconds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelay_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelay_Parms, Callback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1774040023
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelay_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelay_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "ExecuteAsyncDelay", Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::AsyncHelperSubsystem_eventExecuteAsyncDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::AsyncHelperSubsystem_eventExecuteAsyncDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execExecuteAsyncDelay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=P_THIS->ExecuteAsyncDelay(Z_Param_DelaySeconds,FAsyncTaskDelegate(Z_Param_Out_Callback),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function ExecuteAsyncDelay ***************************

// ********** Begin Class UAsyncHelperSubsystem Function ExecuteAsyncDelayWithResult ***************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics
{
	struct AsyncHelperSubsystem_eventExecuteAsyncDelayWithResult_Parms
	{
		float DelaySeconds;
		FScriptDelegate Callback;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async task with result callback - convenience function\n\x09 * @param DelaySeconds - How long to wait before executing\n\x09 * @param Callback - Function to execute with success result\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncDelayWithResult" },
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async task with result callback - convenience function\n@param DelaySeconds - How long to wait before executing\n@param Callback - Function to execute with success result\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelaySeconds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelayWithResult_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelayWithResult_Parms, Callback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1479815987
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelayWithResult_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelayWithResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "ExecuteAsyncDelayWithResult", Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::AsyncHelperSubsystem_eventExecuteAsyncDelayWithResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::AsyncHelperSubsystem_eventExecuteAsyncDelayWithResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execExecuteAsyncDelayWithResult)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=P_THIS->ExecuteAsyncDelayWithResult(Z_Param_DelaySeconds,FAsyncTaskDelegateWithResult(Z_Param_Out_Callback),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function ExecuteAsyncDelayWithResult *****************

// ********** Begin Class UAsyncHelperSubsystem Function ExecuteAsyncDelayWithTimeout **************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics
{
	struct AsyncHelperSubsystem_eventExecuteAsyncDelayWithTimeout_Parms
	{
		float DelaySeconds;
		float TimeoutSeconds;
		FScriptDelegate Callback;
		FScriptDelegate TimeoutCallback;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async task with timeout support\n\x09 * @param DelaySeconds - How long to wait before executing the callback\n\x09 * @param TimeoutSeconds - Maximum time to wait before timing out (0 = no timeout)\n\x09 * @param Callback - Function to execute after delay\n\x09 * @param TimeoutCallback - Function to execute if timeout occurs\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncDelayWithTimeout" },
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async task with timeout support\n@param DelaySeconds - How long to wait before executing the callback\n@param TimeoutSeconds - Maximum time to wait before timing out (0 = no timeout)\n@param Callback - Function to execute after delay\n@param TimeoutCallback - Function to execute if timeout occurs\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeoutCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelaySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutSeconds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TimeoutCallback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelayWithTimeout_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutSeconds = { "TimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelayWithTimeout_Parms, TimeoutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelayWithTimeout_Parms, Callback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1774040023
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutCallback = { "TimeoutCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelayWithTimeout_Parms, TimeoutCallback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeoutCallback_MetaData), NewProp_TimeoutCallback_MetaData) }; // 1802616842
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelayWithTimeout_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncDelayWithTimeout_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "ExecuteAsyncDelayWithTimeout", Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::AsyncHelperSubsystem_eventExecuteAsyncDelayWithTimeout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::AsyncHelperSubsystem_eventExecuteAsyncDelayWithTimeout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execExecuteAsyncDelayWithTimeout)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeoutSeconds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_TimeoutCallback);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=P_THIS->ExecuteAsyncDelayWithTimeout(Z_Param_DelaySeconds,Z_Param_TimeoutSeconds,FAsyncTaskDelegate(Z_Param_Out_Callback),FAsyncTimeoutDelegate(Z_Param_Out_TimeoutCallback),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function ExecuteAsyncDelayWithTimeout ****************

// ********** Begin Class UAsyncHelperSubsystem Function ExecuteAsyncTaskChain *********************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics
{
	struct AsyncHelperSubsystem_eventExecuteAsyncTaskChain_Parms
	{
		TArray<int32> TaskChain;
		FScriptDelegate ChainDelegate;
		float DelayBetweenTasks;
		bool bStopOnFailure;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute a chain of async tasks in sequence with flexible control\n\x09 * @param TaskChain - Array of task indices to execute in sequence\n\x09 * @param ChainDelegate - Function to execute for each task (receives task index)\n\x09 * @param DelayBetweenTasks - Delay between each task in the chain\n\x09 * @param bStopOnFailure - Whether to stop the chain if any task fails\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the chain (cancelling this will cancel all remaining tasks)\n\x09 */" },
#endif
		{ "CPP_Default_bStopOnFailure", "true" },
		{ "CPP_Default_DelayBetweenTasks", "0.000000" },
		{ "CPP_Default_TaskName", "TaskChain" },
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute a chain of async tasks in sequence with flexible control\n@param TaskChain - Array of task indices to execute in sequence\n@param ChainDelegate - Function to execute for each task (receives task index)\n@param DelayBetweenTasks - Delay between each task in the chain\n@param bStopOnFailure - Whether to stop the chain if any task fails\n@param TaskName - Optional name for debugging\n@return Handle to the chain (cancelling this will cancel all remaining tasks)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskChain_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskChain;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ChainDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayBetweenTasks;
	static void NewProp_bStopOnFailure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnFailure;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain_Inner = { "TaskChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain = { "TaskChain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncTaskChain_Parms, TaskChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskChain_MetaData), NewProp_TaskChain_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_ChainDelegate = { "ChainDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncTaskChain_Parms, ChainDelegate), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainDelegate_MetaData), NewProp_ChainDelegate_MetaData) }; // 1146528334
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_DelayBetweenTasks = { "DelayBetweenTasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncTaskChain_Parms, DelayBetweenTasks), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure_SetBit(void* Obj)
{
	((AsyncHelperSubsystem_eventExecuteAsyncTaskChain_Parms*)Obj)->bStopOnFailure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure = { "bStopOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncHelperSubsystem_eventExecuteAsyncTaskChain_Parms), &Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncTaskChain_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteAsyncTaskChain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_ChainDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_DelayBetweenTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "ExecuteAsyncTaskChain", Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::AsyncHelperSubsystem_eventExecuteAsyncTaskChain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::AsyncHelperSubsystem_eventExecuteAsyncTaskChain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execExecuteAsyncTaskChain)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_TaskChain);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ChainDelegate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayBetweenTasks);
	P_GET_UBOOL(Z_Param_bStopOnFailure);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=P_THIS->ExecuteAsyncTaskChain(Z_Param_Out_TaskChain,FAsyncTaskChainDelegate(Z_Param_Out_ChainDelegate),Z_Param_DelayBetweenTasks,Z_Param_bStopOnFailure,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function ExecuteAsyncTaskChain ***********************

// ********** Begin Class UAsyncHelperSubsystem Function ExecuteParallelTasks **********************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics
{
	struct AsyncHelperSubsystem_eventExecuteParallelTasks_Parms
	{
		int32 TaskCount;
		FScriptDelegate ParallelTaskDelegate;
		FString TaskName;
		TArray<FAsyncTaskHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute multiple tasks in parallel\n\x09 * @param TaskCount - Number of parallel tasks to execute\n\x09 * @param ParallelTaskDelegate - Function to execute for each task (receives task index)\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Array of handles for the created tasks\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "ParallelTask" },
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute multiple tasks in parallel\n@param TaskCount - Number of parallel tasks to execute\n@param ParallelTaskDelegate - Function to execute for each task (receives task index)\n@param TaskName - Optional name for debugging\n@return Array of handles for the created tasks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParallelTaskDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskCount;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ParallelTaskDelegate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::NewProp_TaskCount = { "TaskCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteParallelTasks_Parms, TaskCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::NewProp_ParallelTaskDelegate = { "ParallelTaskDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteParallelTasks_Parms, ParallelTaskDelegate), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParallelTaskDelegate_MetaData), NewProp_ParallelTaskDelegate_MetaData) }; // 1774040023
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteParallelTasks_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteParallelTasks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::NewProp_TaskCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::NewProp_ParallelTaskDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "ExecuteParallelTasks", Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::AsyncHelperSubsystem_eventExecuteParallelTasks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::AsyncHelperSubsystem_eventExecuteParallelTasks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execExecuteParallelTasks)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TaskCount);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ParallelTaskDelegate);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAsyncTaskHandle>*)Z_Param__Result=P_THIS->ExecuteParallelTasks(Z_Param_TaskCount,FAsyncTaskDelegate(Z_Param_Out_ParallelTaskDelegate),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function ExecuteParallelTasks ************************

// ********** Begin Class UAsyncHelperSubsystem Function ExecuteTaskChain **************************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics
{
	struct AsyncHelperSubsystem_eventExecuteTaskChain_Parms
	{
		TArray<FScriptDelegate> TaskChain;
		float DelayBetweenTasks;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute a chain of async tasks in sequence\n\x09 * @param TaskChain - Array of delegates to execute in sequence\n\x09 * @param DelayBetweenTasks - Delay between each task in the chain\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the chain (cancelling this will cancel all remaining tasks)\n\x09 */" },
#endif
		{ "CPP_Default_DelayBetweenTasks", "0.000000" },
		{ "CPP_Default_TaskName", "TaskChain" },
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute a chain of async tasks in sequence\n@param TaskChain - Array of delegates to execute in sequence\n@param DelayBetweenTasks - Delay between each task in the chain\n@param TaskName - Optional name for debugging\n@return Handle to the chain (cancelling this will cancel all remaining tasks)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskChain_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TaskChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskChain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayBetweenTasks;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::NewProp_TaskChain_Inner = { "TaskChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1774040023
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::NewProp_TaskChain = { "TaskChain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteTaskChain_Parms, TaskChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskChain_MetaData), NewProp_TaskChain_MetaData) }; // 1774040023
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::NewProp_DelayBetweenTasks = { "DelayBetweenTasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteTaskChain_Parms, DelayBetweenTasks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteTaskChain_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventExecuteTaskChain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::NewProp_TaskChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::NewProp_TaskChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::NewProp_DelayBetweenTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "ExecuteTaskChain", Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::AsyncHelperSubsystem_eventExecuteTaskChain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::AsyncHelperSubsystem_eventExecuteTaskChain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execExecuteTaskChain)
{
	P_GET_TARRAY_REF(FAsyncTaskDelegate,Z_Param_Out_TaskChain);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayBetweenTasks);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=P_THIS->ExecuteTaskChain(Z_Param_Out_TaskChain,Z_Param_DelayBetweenTasks,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function ExecuteTaskChain ****************************

// ********** Begin Class UAsyncHelperSubsystem Function GetAsyncTaskInfo **************************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics
{
	struct AsyncHelperSubsystem_eventGetAsyncTaskInfo_Parms
	{
		FAsyncTaskHandle TaskHandle;
		FAsyncTaskInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get information about an async task - convenience function\n\x09 * @param TaskHandle - Handle of the task\n\x09 * @return Task information structure\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get information about an async task - convenience function\n@param TaskHandle - Handle of the task\n@return Task information structure" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventGetAsyncTaskInfo_Parms, TaskHandle), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskHandle_MetaData), NewProp_TaskHandle_MetaData) }; // 3541892958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventGetAsyncTaskInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskInfo, METADATA_PARAMS(0, nullptr) }; // 3835502652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::NewProp_TaskHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "GetAsyncTaskInfo", Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::AsyncHelperSubsystem_eventGetAsyncTaskInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::AsyncHelperSubsystem_eventGetAsyncTaskInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execGetAsyncTaskInfo)
{
	P_GET_STRUCT_REF(FAsyncTaskHandle,Z_Param_Out_TaskHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskInfo*)Z_Param__Result=P_THIS->GetAsyncTaskInfo(Z_Param_Out_TaskHandle);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function GetAsyncTaskInfo ****************************

// ********** Begin Class UAsyncHelperSubsystem Function GetAsyncTaskManager ***********************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics
{
	struct AsyncHelperSubsystem_eventGetAsyncTaskManager_Parms
	{
		UAsyncTaskManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the async task manager instance\n\x09 * @return Reference to the task manager\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the async task manager instance\n@return Reference to the task manager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventGetAsyncTaskManager_Parms, ReturnValue), Z_Construct_UClass_UAsyncTaskManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "GetAsyncTaskManager", Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::AsyncHelperSubsystem_eventGetAsyncTaskManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::AsyncHelperSubsystem_eventGetAsyncTaskManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execGetAsyncTaskManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncTaskManager**)Z_Param__Result=P_THIS->GetAsyncTaskManager();
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function GetAsyncTaskManager *************************

// ********** Begin Class UAsyncHelperSubsystem Function GetPerformanceStats ***********************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics
{
	struct AsyncHelperSubsystem_eventGetPerformanceStats_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get performance statistics for async operations\n\x09 * @return String containing performance information\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get performance statistics for async operations\n@return String containing performance information" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventGetPerformanceStats_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "GetPerformanceStats", Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::AsyncHelperSubsystem_eventGetPerformanceStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::AsyncHelperSubsystem_eventGetPerformanceStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execGetPerformanceStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetPerformanceStats();
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function GetPerformanceStats *************************

// ********** Begin Class UAsyncHelperSubsystem Function GetRunningTaskCount ***********************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics
{
	struct AsyncHelperSubsystem_eventGetRunningTaskCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the number of currently running async tasks - convenience function\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of currently running async tasks - convenience function" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventGetRunningTaskCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "GetRunningTaskCount", Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::AsyncHelperSubsystem_eventGetRunningTaskCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::AsyncHelperSubsystem_eventGetRunningTaskCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execGetRunningTaskCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRunningTaskCount();
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function GetRunningTaskCount *************************

// ********** Begin Class UAsyncHelperSubsystem Function IsAsyncTaskRunning ************************
struct Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics
{
	struct AsyncHelperSubsystem_eventIsAsyncTaskRunning_Parms
	{
		FAsyncTaskHandle TaskHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if an async task is still running - convenience function\n\x09 * @param TaskHandle - Handle of the task to check\n\x09 * @return True if task is still running\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if an async task is still running - convenience function\n@param TaskHandle - Handle of the task to check\n@return True if task is still running" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperSubsystem_eventIsAsyncTaskRunning_Parms, TaskHandle), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskHandle_MetaData), NewProp_TaskHandle_MetaData) }; // 3541892958
void Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AsyncHelperSubsystem_eventIsAsyncTaskRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncHelperSubsystem_eventIsAsyncTaskRunning_Parms), &Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::NewProp_TaskHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperSubsystem, nullptr, "IsAsyncTaskRunning", Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::AsyncHelperSubsystem_eventIsAsyncTaskRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::AsyncHelperSubsystem_eventIsAsyncTaskRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperSubsystem::execIsAsyncTaskRunning)
{
	P_GET_STRUCT_REF(FAsyncTaskHandle,Z_Param_Out_TaskHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAsyncTaskRunning(Z_Param_Out_TaskHandle);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperSubsystem Function IsAsyncTaskRunning **************************

// ********** Begin Class UAsyncHelperSubsystem ****************************************************
void UAsyncHelperSubsystem::StaticRegisterNativesUAsyncHelperSubsystem()
{
	UClass* Class = UAsyncHelperSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelAllAsyncTasks", &UAsyncHelperSubsystem::execCancelAllAsyncTasks },
		{ "CancelAsyncTask", &UAsyncHelperSubsystem::execCancelAsyncTask },
		{ "ExecuteAsyncBatch", &UAsyncHelperSubsystem::execExecuteAsyncBatch },
		{ "ExecuteAsyncDelay", &UAsyncHelperSubsystem::execExecuteAsyncDelay },
		{ "ExecuteAsyncDelayWithResult", &UAsyncHelperSubsystem::execExecuteAsyncDelayWithResult },
		{ "ExecuteAsyncDelayWithTimeout", &UAsyncHelperSubsystem::execExecuteAsyncDelayWithTimeout },
		{ "ExecuteAsyncTaskChain", &UAsyncHelperSubsystem::execExecuteAsyncTaskChain },
		{ "ExecuteParallelTasks", &UAsyncHelperSubsystem::execExecuteParallelTasks },
		{ "ExecuteTaskChain", &UAsyncHelperSubsystem::execExecuteTaskChain },
		{ "GetAsyncTaskInfo", &UAsyncHelperSubsystem::execGetAsyncTaskInfo },
		{ "GetAsyncTaskManager", &UAsyncHelperSubsystem::execGetAsyncTaskManager },
		{ "GetPerformanceStats", &UAsyncHelperSubsystem::execGetPerformanceStats },
		{ "GetRunningTaskCount", &UAsyncHelperSubsystem::execGetRunningTaskCount },
		{ "IsAsyncTaskRunning", &UAsyncHelperSubsystem::execIsAsyncTaskRunning },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncHelperSubsystem;
UClass* UAsyncHelperSubsystem::GetPrivateStaticClass()
{
	using TClass = UAsyncHelperSubsystem;
	if (!Z_Registration_Info_UClass_UAsyncHelperSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncHelperSubsystem"),
			Z_Registration_Info_UClass_UAsyncHelperSubsystem.InnerSingleton,
			StaticRegisterNativesUAsyncHelperSubsystem,
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
	return Z_Registration_Info_UClass_UAsyncHelperSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncHelperSubsystem_NoRegister()
{
	return UAsyncHelperSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncHelperSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Game Instance Subsystem for managing async operations\n * Provides centralized access to async task management functionality\n */" },
#endif
		{ "IncludePath", "AsyncHelperSubsystem.h" },
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Instance Subsystem for managing async operations\nProvides centralized access to async task management functionality" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncTaskManager_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The main async task manager\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The main async task manager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AsyncTaskManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAllAsyncTasks, "CancelAllAsyncTasks" }, // 2931216521
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_CancelAsyncTask, "CancelAsyncTask" }, // 708208285
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncBatch, "ExecuteAsyncBatch" }, // 3702023739
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelay, "ExecuteAsyncDelay" }, // 468577464
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithResult, "ExecuteAsyncDelayWithResult" }, // 4192064299
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncDelayWithTimeout, "ExecuteAsyncDelayWithTimeout" }, // 4077859266
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteAsyncTaskChain, "ExecuteAsyncTaskChain" }, // 1176433599
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteParallelTasks, "ExecuteParallelTasks" }, // 2106405193
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_ExecuteTaskChain, "ExecuteTaskChain" }, // 4076972547
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskInfo, "GetAsyncTaskInfo" }, // 644271992
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_GetAsyncTaskManager, "GetAsyncTaskManager" }, // 3210436272
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_GetPerformanceStats, "GetPerformanceStats" }, // 3418289551
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_GetRunningTaskCount, "GetRunningTaskCount" }, // 337361740
		{ &Z_Construct_UFunction_UAsyncHelperSubsystem_IsAsyncTaskRunning, "IsAsyncTaskRunning" }, // 165258768
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncHelperSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncHelperSubsystem_Statics::NewProp_AsyncTaskManager = { "AsyncTaskManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncHelperSubsystem, AsyncTaskManager), Z_Construct_UClass_UAsyncTaskManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncTaskManager_MetaData), NewProp_AsyncTaskManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncHelperSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncHelperSubsystem_Statics::NewProp_AsyncTaskManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncHelperSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncHelperSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncHelperSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncHelperSubsystem_Statics::ClassParams = {
	&UAsyncHelperSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncHelperSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncHelperSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncHelperSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncHelperSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncHelperSubsystem()
{
	if (!Z_Registration_Info_UClass_UAsyncHelperSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncHelperSubsystem.OuterSingleton, Z_Construct_UClass_UAsyncHelperSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncHelperSubsystem.OuterSingleton;
}
UAsyncHelperSubsystem::UAsyncHelperSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncHelperSubsystem);
UAsyncHelperSubsystem::~UAsyncHelperSubsystem() {}
// ********** End Class UAsyncHelperSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h__Script_AsyncHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncHelperSubsystem, UAsyncHelperSubsystem::StaticClass, TEXT("UAsyncHelperSubsystem"), &Z_Registration_Info_UClass_UAsyncHelperSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncHelperSubsystem), 3307483409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h__Script_AsyncHelper_3501887022(TEXT("/Script/AsyncHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h__Script_AsyncHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h__Script_AsyncHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
