// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncHelperBlueprintLibrary.h"
#include "AsyncTaskManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncHelperBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperBlueprintLibrary();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperBlueprintLibrary_NoRegister();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature();
ASYNCHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncTaskHandle();
ASYNCHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncTaskInfo();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AsyncHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function CancelAllAsyncTasks ****************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics
{
	struct AsyncHelperBlueprintLibrary_eventCancelAllAsyncTasks_Parms
	{
		const UObject* WorldContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel all running async tasks\n\x09 * @param WorldContext - World context for the operation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel all running async tasks\n@param WorldContext - World context for the operation" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventCancelAllAsyncTasks_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::NewProp_WorldContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "CancelAllAsyncTasks", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::AsyncHelperBlueprintLibrary_eventCancelAllAsyncTasks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::AsyncHelperBlueprintLibrary_eventCancelAllAsyncTasks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execCancelAllAsyncTasks)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAsyncHelperBlueprintLibrary::CancelAllAsyncTasks(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function CancelAllAsyncTasks ******************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function CancelAsyncTask ********************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics
{
	struct AsyncHelperBlueprintLibrary_eventCancelAsyncTask_Parms
	{
		const UObject* WorldContext;
		FAsyncTaskHandle TaskHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel a running async task\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param TaskHandle - Handle of the task to cancel\n\x09 * @return True if task was successfully cancelled\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel a running async task\n@param WorldContext - World context for the operation\n@param TaskHandle - Handle of the task to cancel\n@return True if task was successfully cancelled" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventCancelAsyncTask_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventCancelAsyncTask_Parms, TaskHandle), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskHandle_MetaData), NewProp_TaskHandle_MetaData) }; // 3541892958
void Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AsyncHelperBlueprintLibrary_eventCancelAsyncTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncHelperBlueprintLibrary_eventCancelAsyncTask_Parms), &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::NewProp_TaskHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "CancelAsyncTask", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::AsyncHelperBlueprintLibrary_eventCancelAsyncTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::AsyncHelperBlueprintLibrary_eventCancelAsyncTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execCancelAsyncTask)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT_REF(FAsyncTaskHandle,Z_Param_Out_TaskHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAsyncHelperBlueprintLibrary::CancelAsyncTask(Z_Param_WorldContext,Z_Param_Out_TaskHandle);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function CancelAsyncTask **********************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function ExecuteAsyncBatch ******************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics
{
	struct AsyncHelperBlueprintLibrary_eventExecuteAsyncBatch_Parms
	{
		const UObject* WorldContext;
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
		{ "Comment", "/**\n\x09 * Execute multiple async tasks and wait for all to complete\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param TaskCount - Number of tasks to execute\n\x09 * @param BatchDelegate - Function to execute for each task\n\x09 * @param TimeoutSeconds - Maximum time to wait for all tasks (0 = no timeout)\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the batch operation\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncBatch" },
		{ "CPP_Default_TimeoutSeconds", "0.000000" },
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute multiple async tasks and wait for all to complete\n@param WorldContext - World context for the operation\n@param TaskCount - Number of tasks to execute\n@param BatchDelegate - Function to execute for each task\n@param TimeoutSeconds - Maximum time to wait for all tasks (0 = no timeout)\n@param TaskName - Optional name for debugging\n@return Handle to the batch operation" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BatchDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskCount;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_BatchDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutSeconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncBatch_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_TaskCount = { "TaskCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncBatch_Parms, TaskCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_BatchDelegate = { "BatchDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncBatch_Parms, BatchDelegate), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatchDelegate_MetaData), NewProp_BatchDelegate_MetaData) }; // 1146528334
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_TimeoutSeconds = { "TimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncBatch_Parms, TimeoutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncBatch_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncBatch_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_TaskCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_BatchDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_TimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "ExecuteAsyncBatch", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::AsyncHelperBlueprintLibrary_eventExecuteAsyncBatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::AsyncHelperBlueprintLibrary_eventExecuteAsyncBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execExecuteAsyncBatch)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FIntProperty,Z_Param_TaskCount);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_BatchDelegate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeoutSeconds);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=UAsyncHelperBlueprintLibrary::ExecuteAsyncBatch(Z_Param_WorldContext,Z_Param_TaskCount,FAsyncTaskChainDelegate(Z_Param_Out_BatchDelegate),Z_Param_TimeoutSeconds,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function ExecuteAsyncBatch ********************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function ExecuteAsyncDelay ******************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics
{
	struct AsyncHelperBlueprintLibrary_eventExecuteAsyncDelay_Parms
	{
		const UObject* WorldContext;
		float DelaySeconds;
		FScriptDelegate Callback;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute a simple async delay\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param DelaySeconds - How long to wait before executing the callback\n\x09 * @param Callback - Function to execute after delay\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncDelay" },
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute a simple async delay\n@param WorldContext - World context for the operation\n@param DelaySeconds - How long to wait before executing the callback\n@param Callback - Function to execute after delay\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelaySeconds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelay_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelay_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelay_Parms, Callback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1774040023
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelay_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelay_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "ExecuteAsyncDelay", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::AsyncHelperBlueprintLibrary_eventExecuteAsyncDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::AsyncHelperBlueprintLibrary_eventExecuteAsyncDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execExecuteAsyncDelay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=UAsyncHelperBlueprintLibrary::ExecuteAsyncDelay(Z_Param_WorldContext,Z_Param_DelaySeconds,FAsyncTaskDelegate(Z_Param_Out_Callback),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function ExecuteAsyncDelay ********************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function ExecuteAsyncDelayWithResult ********
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics
{
	struct AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithResult_Parms
	{
		const UObject* WorldContext;
		float DelaySeconds;
		FScriptDelegate Callback;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async task with result callback\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param DelaySeconds - How long to wait before executing\n\x09 * @param Callback - Function to execute with success result\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncDelayWithResult" },
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async task with result callback\n@param WorldContext - World context for the operation\n@param DelaySeconds - How long to wait before executing\n@param Callback - Function to execute with success result\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelaySeconds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithResult_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithResult_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithResult_Parms, Callback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1479815987
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithResult_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "ExecuteAsyncDelayWithResult", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execExecuteAsyncDelayWithResult)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=UAsyncHelperBlueprintLibrary::ExecuteAsyncDelayWithResult(Z_Param_WorldContext,Z_Param_DelaySeconds,FAsyncTaskDelegateWithResult(Z_Param_Out_Callback),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function ExecuteAsyncDelayWithResult **********

// ********** Begin Class UAsyncHelperBlueprintLibrary Function ExecuteAsyncDelayWithTimeout *******
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics
{
	struct AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithTimeout_Parms
	{
		const UObject* WorldContext;
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
		{ "Comment", "/**\n\x09 * Execute an async task with timeout support\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param DelaySeconds - How long to wait before executing the callback\n\x09 * @param TimeoutSeconds - Maximum time to wait before timing out (0 = no timeout)\n\x09 * @param Callback - Function to execute after delay\n\x09 * @param TimeoutCallback - Function to execute if timeout occurs\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncDelayWithTimeout" },
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async task with timeout support\n@param WorldContext - World context for the operation\n@param DelaySeconds - How long to wait before executing the callback\n@param TimeoutSeconds - Maximum time to wait before timing out (0 = no timeout)\n@param Callback - Function to execute after delay\n@param TimeoutCallback - Function to execute if timeout occurs\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelaySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutSeconds;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TimeoutCallback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithTimeout_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithTimeout_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutSeconds = { "TimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithTimeout_Parms, TimeoutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithTimeout_Parms, Callback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1774040023
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutCallback = { "TimeoutCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithTimeout_Parms, TimeoutCallback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeoutCallback_MetaData), NewProp_TimeoutCallback_MetaData) }; // 1802616842
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithTimeout_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithTimeout_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "ExecuteAsyncDelayWithTimeout", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithTimeout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::AsyncHelperBlueprintLibrary_eventExecuteAsyncDelayWithTimeout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execExecuteAsyncDelayWithTimeout)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeoutSeconds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_TimeoutCallback);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=UAsyncHelperBlueprintLibrary::ExecuteAsyncDelayWithTimeout(Z_Param_WorldContext,Z_Param_DelaySeconds,Z_Param_TimeoutSeconds,FAsyncTaskDelegate(Z_Param_Out_Callback),FAsyncTimeoutDelegate(Z_Param_Out_TimeoutCallback),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function ExecuteAsyncDelayWithTimeout *********

// ********** Begin Class UAsyncHelperBlueprintLibrary Function ExecuteAsyncTaskChain **************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics
{
	struct AsyncHelperBlueprintLibrary_eventExecuteAsyncTaskChain_Parms
	{
		const UObject* WorldContext;
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
		{ "Comment", "/**\n\x09 * Execute a chain of async tasks in sequence with flexible control\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param TaskChain - Array of task indices to execute in sequence\n\x09 * @param ChainDelegate - Function to execute for each task (receives task index)\n\x09 * @param DelayBetweenTasks - Delay between each task in the chain\n\x09 * @param bStopOnFailure - Whether to stop the chain if any task fails\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the chain (cancelling this will cancel all remaining tasks)\n\x09 */" },
#endif
		{ "CPP_Default_bStopOnFailure", "true" },
		{ "CPP_Default_DelayBetweenTasks", "0.000000" },
		{ "CPP_Default_TaskName", "TaskChain" },
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute a chain of async tasks in sequence with flexible control\n@param WorldContext - World context for the operation\n@param TaskChain - Array of task indices to execute in sequence\n@param ChainDelegate - Function to execute for each task (receives task index)\n@param DelayBetweenTasks - Delay between each task in the chain\n@param bStopOnFailure - Whether to stop the chain if any task fails\n@param TaskName - Optional name for debugging\n@return Handle to the chain (cancelling this will cancel all remaining tasks)" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncTaskChain_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain_Inner = { "TaskChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain = { "TaskChain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncTaskChain_Parms, TaskChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskChain_MetaData), NewProp_TaskChain_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_ChainDelegate = { "ChainDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncTaskChain_Parms, ChainDelegate), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainDelegate_MetaData), NewProp_ChainDelegate_MetaData) }; // 1146528334
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_DelayBetweenTasks = { "DelayBetweenTasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncTaskChain_Parms, DelayBetweenTasks), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure_SetBit(void* Obj)
{
	((AsyncHelperBlueprintLibrary_eventExecuteAsyncTaskChain_Parms*)Obj)->bStopOnFailure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure = { "bStopOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncHelperBlueprintLibrary_eventExecuteAsyncTaskChain_Parms), &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncTaskChain_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteAsyncTaskChain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_ChainDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_DelayBetweenTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "ExecuteAsyncTaskChain", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::AsyncHelperBlueprintLibrary_eventExecuteAsyncTaskChain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::AsyncHelperBlueprintLibrary_eventExecuteAsyncTaskChain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execExecuteAsyncTaskChain)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_TARRAY_REF(int32,Z_Param_Out_TaskChain);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ChainDelegate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayBetweenTasks);
	P_GET_UBOOL(Z_Param_bStopOnFailure);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=UAsyncHelperBlueprintLibrary::ExecuteAsyncTaskChain(Z_Param_WorldContext,Z_Param_Out_TaskChain,FAsyncTaskChainDelegate(Z_Param_Out_ChainDelegate),Z_Param_DelayBetweenTasks,Z_Param_bStopOnFailure,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function ExecuteAsyncTaskChain ****************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function ExecuteParallelTasks ***************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics
{
	struct AsyncHelperBlueprintLibrary_eventExecuteParallelTasks_Parms
	{
		const UObject* WorldContext;
		int32 TaskCount;
		FScriptDelegate ParallelTaskDelegate;
		FString TaskName;
		TArray<FAsyncTaskHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute multiple tasks in parallel\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param TaskCount - Number of parallel tasks to execute\n\x09 * @param ParallelTaskDelegate - Function to execute for each task\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Array of handles for the created tasks\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "ParallelTask" },
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute multiple tasks in parallel\n@param WorldContext - World context for the operation\n@param TaskCount - Number of parallel tasks to execute\n@param ParallelTaskDelegate - Function to execute for each task\n@param TaskName - Optional name for debugging\n@return Array of handles for the created tasks" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParallelTaskDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskCount;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ParallelTaskDelegate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteParallelTasks_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_TaskCount = { "TaskCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteParallelTasks_Parms, TaskCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_ParallelTaskDelegate = { "ParallelTaskDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteParallelTasks_Parms, ParallelTaskDelegate), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParallelTaskDelegate_MetaData), NewProp_ParallelTaskDelegate_MetaData) }; // 1774040023
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteParallelTasks_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteParallelTasks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_TaskCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_ParallelTaskDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "ExecuteParallelTasks", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::AsyncHelperBlueprintLibrary_eventExecuteParallelTasks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::AsyncHelperBlueprintLibrary_eventExecuteParallelTasks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execExecuteParallelTasks)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FIntProperty,Z_Param_TaskCount);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ParallelTaskDelegate);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAsyncTaskHandle>*)Z_Param__Result=UAsyncHelperBlueprintLibrary::ExecuteParallelTasks(Z_Param_WorldContext,Z_Param_TaskCount,FAsyncTaskDelegate(Z_Param_Out_ParallelTaskDelegate),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function ExecuteParallelTasks *****************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function ExecuteSimpleDelay *****************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics
{
	struct AsyncHelperBlueprintLibrary_eventExecuteSimpleDelay_Parms
	{
		const UObject* WorldContext;
		float DelaySeconds;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute a simple delay without callback (useful for Blueprint sequences)\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param DelaySeconds - How long to wait\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "SimpleDelay" },
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute a simple delay without callback (useful for Blueprint sequences)\n@param WorldContext - World context for the operation\n@param DelaySeconds - How long to wait\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelaySeconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteSimpleDelay_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteSimpleDelay_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteSimpleDelay_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteSimpleDelay_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "ExecuteSimpleDelay", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::AsyncHelperBlueprintLibrary_eventExecuteSimpleDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::AsyncHelperBlueprintLibrary_eventExecuteSimpleDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execExecuteSimpleDelay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=UAsyncHelperBlueprintLibrary::ExecuteSimpleDelay(Z_Param_WorldContext,Z_Param_DelaySeconds,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function ExecuteSimpleDelay *******************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function ExecuteTaskChain *******************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics
{
	struct AsyncHelperBlueprintLibrary_eventExecuteTaskChain_Parms
	{
		const UObject* WorldContext;
		TArray<FScriptDelegate> TaskChain;
		float DelayBetweenTasks;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute a chain of async tasks in sequence\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param TaskChain - Array of delegates to execute in sequence\n\x09 * @param DelayBetweenTasks - Delay between each task in the chain\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the chain\n\x09 */" },
#endif
		{ "CPP_Default_DelayBetweenTasks", "0.000000" },
		{ "CPP_Default_TaskName", "TaskChain" },
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute a chain of async tasks in sequence\n@param WorldContext - World context for the operation\n@param TaskChain - Array of delegates to execute in sequence\n@param DelayBetweenTasks - Delay between each task in the chain\n@param TaskName - Optional name for debugging\n@return Handle to the chain" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskChain_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TaskChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskChain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayBetweenTasks;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteTaskChain_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_TaskChain_Inner = { "TaskChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1774040023
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_TaskChain = { "TaskChain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteTaskChain_Parms, TaskChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskChain_MetaData), NewProp_TaskChain_MetaData) }; // 1774040023
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_DelayBetweenTasks = { "DelayBetweenTasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteTaskChain_Parms, DelayBetweenTasks), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteTaskChain_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventExecuteTaskChain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_TaskChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_TaskChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_DelayBetweenTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "ExecuteTaskChain", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::AsyncHelperBlueprintLibrary_eventExecuteTaskChain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::AsyncHelperBlueprintLibrary_eventExecuteTaskChain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execExecuteTaskChain)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_TARRAY_REF(FAsyncTaskDelegate,Z_Param_Out_TaskChain);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelayBetweenTasks);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=UAsyncHelperBlueprintLibrary::ExecuteTaskChain(Z_Param_WorldContext,Z_Param_Out_TaskChain,Z_Param_DelayBetweenTasks,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function ExecuteTaskChain *********************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function GetAsyncTaskInfo *******************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics
{
	struct AsyncHelperBlueprintLibrary_eventGetAsyncTaskInfo_Parms
	{
		const UObject* WorldContext;
		FAsyncTaskHandle TaskHandle;
		FAsyncTaskInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get information about an async task\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param TaskHandle - Handle of the task\n\x09 * @return Task information structure\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get information about an async task\n@param WorldContext - World context for the operation\n@param TaskHandle - Handle of the task\n@return Task information structure" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventGetAsyncTaskInfo_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventGetAsyncTaskInfo_Parms, TaskHandle), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskHandle_MetaData), NewProp_TaskHandle_MetaData) }; // 3541892958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventGetAsyncTaskInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskInfo, METADATA_PARAMS(0, nullptr) }; // 3835502652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::NewProp_TaskHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "GetAsyncTaskInfo", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::AsyncHelperBlueprintLibrary_eventGetAsyncTaskInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::AsyncHelperBlueprintLibrary_eventGetAsyncTaskInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execGetAsyncTaskInfo)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT_REF(FAsyncTaskHandle,Z_Param_Out_TaskHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskInfo*)Z_Param__Result=UAsyncHelperBlueprintLibrary::GetAsyncTaskInfo(Z_Param_WorldContext,Z_Param_Out_TaskHandle);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function GetAsyncTaskInfo *********************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function GetPerformanceStats ****************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics
{
	struct AsyncHelperBlueprintLibrary_eventGetPerformanceStats_Parms
	{
		const UObject* WorldContext;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get performance statistics for async operations\n\x09 * @param WorldContext - World context for the operation\n\x09 * @return String containing performance information\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get performance statistics for async operations\n@param WorldContext - World context for the operation\n@return String containing performance information" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventGetPerformanceStats_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventGetPerformanceStats_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "GetPerformanceStats", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::AsyncHelperBlueprintLibrary_eventGetPerformanceStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::AsyncHelperBlueprintLibrary_eventGetPerformanceStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execGetPerformanceStats)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAsyncHelperBlueprintLibrary::GetPerformanceStats(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function GetPerformanceStats ******************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function GetRunningTaskCount ****************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics
{
	struct AsyncHelperBlueprintLibrary_eventGetRunningTaskCount_Parms
	{
		const UObject* WorldContext;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the number of currently running async tasks\n\x09 * @param WorldContext - World context for the operation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of currently running async tasks\n@param WorldContext - World context for the operation" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventGetRunningTaskCount_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventGetRunningTaskCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "GetRunningTaskCount", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::AsyncHelperBlueprintLibrary_eventGetRunningTaskCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::AsyncHelperBlueprintLibrary_eventGetRunningTaskCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execGetRunningTaskCount)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UAsyncHelperBlueprintLibrary::GetRunningTaskCount(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function GetRunningTaskCount ******************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function IsAsyncHelperAvailable *************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics
{
	struct AsyncHelperBlueprintLibrary_eventIsAsyncHelperAvailable_Parms
	{
		const UObject* WorldContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the AsyncHelper subsystem is available\n\x09 * @param WorldContext - World context for the operation\n\x09 * @return True if the subsystem is available\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the AsyncHelper subsystem is available\n@param WorldContext - World context for the operation\n@return True if the subsystem is available" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventIsAsyncHelperAvailable_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
void Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AsyncHelperBlueprintLibrary_eventIsAsyncHelperAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncHelperBlueprintLibrary_eventIsAsyncHelperAvailable_Parms), &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "IsAsyncHelperAvailable", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::AsyncHelperBlueprintLibrary_eventIsAsyncHelperAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::AsyncHelperBlueprintLibrary_eventIsAsyncHelperAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execIsAsyncHelperAvailable)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAsyncHelperBlueprintLibrary::IsAsyncHelperAvailable(Z_Param_WorldContext);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function IsAsyncHelperAvailable ***************

// ********** Begin Class UAsyncHelperBlueprintLibrary Function IsAsyncTaskRunning *****************
struct Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics
{
	struct AsyncHelperBlueprintLibrary_eventIsAsyncTaskRunning_Parms
	{
		const UObject* WorldContext;
		FAsyncTaskHandle TaskHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if an async task is still running\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param TaskHandle - Handle of the task to check\n\x09 * @return True if task is still running\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if an async task is still running\n@param WorldContext - World context for the operation\n@param TaskHandle - Handle of the task to check\n@return True if task is still running" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventIsAsyncTaskRunning_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncHelperBlueprintLibrary_eventIsAsyncTaskRunning_Parms, TaskHandle), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskHandle_MetaData), NewProp_TaskHandle_MetaData) }; // 3541892958
void Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AsyncHelperBlueprintLibrary_eventIsAsyncTaskRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncHelperBlueprintLibrary_eventIsAsyncTaskRunning_Parms), &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::NewProp_TaskHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncHelperBlueprintLibrary, nullptr, "IsAsyncTaskRunning", Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::AsyncHelperBlueprintLibrary_eventIsAsyncTaskRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::AsyncHelperBlueprintLibrary_eventIsAsyncTaskRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncHelperBlueprintLibrary::execIsAsyncTaskRunning)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT_REF(FAsyncTaskHandle,Z_Param_Out_TaskHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAsyncHelperBlueprintLibrary::IsAsyncTaskRunning(Z_Param_WorldContext,Z_Param_Out_TaskHandle);
	P_NATIVE_END;
}
// ********** End Class UAsyncHelperBlueprintLibrary Function IsAsyncTaskRunning *******************

// ********** Begin Class UAsyncHelperBlueprintLibrary *********************************************
void UAsyncHelperBlueprintLibrary::StaticRegisterNativesUAsyncHelperBlueprintLibrary()
{
	UClass* Class = UAsyncHelperBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelAllAsyncTasks", &UAsyncHelperBlueprintLibrary::execCancelAllAsyncTasks },
		{ "CancelAsyncTask", &UAsyncHelperBlueprintLibrary::execCancelAsyncTask },
		{ "ExecuteAsyncBatch", &UAsyncHelperBlueprintLibrary::execExecuteAsyncBatch },
		{ "ExecuteAsyncDelay", &UAsyncHelperBlueprintLibrary::execExecuteAsyncDelay },
		{ "ExecuteAsyncDelayWithResult", &UAsyncHelperBlueprintLibrary::execExecuteAsyncDelayWithResult },
		{ "ExecuteAsyncDelayWithTimeout", &UAsyncHelperBlueprintLibrary::execExecuteAsyncDelayWithTimeout },
		{ "ExecuteAsyncTaskChain", &UAsyncHelperBlueprintLibrary::execExecuteAsyncTaskChain },
		{ "ExecuteParallelTasks", &UAsyncHelperBlueprintLibrary::execExecuteParallelTasks },
		{ "ExecuteSimpleDelay", &UAsyncHelperBlueprintLibrary::execExecuteSimpleDelay },
		{ "ExecuteTaskChain", &UAsyncHelperBlueprintLibrary::execExecuteTaskChain },
		{ "GetAsyncTaskInfo", &UAsyncHelperBlueprintLibrary::execGetAsyncTaskInfo },
		{ "GetPerformanceStats", &UAsyncHelperBlueprintLibrary::execGetPerformanceStats },
		{ "GetRunningTaskCount", &UAsyncHelperBlueprintLibrary::execGetRunningTaskCount },
		{ "IsAsyncHelperAvailable", &UAsyncHelperBlueprintLibrary::execIsAsyncHelperAvailable },
		{ "IsAsyncTaskRunning", &UAsyncHelperBlueprintLibrary::execIsAsyncTaskRunning },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncHelperBlueprintLibrary;
UClass* UAsyncHelperBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UAsyncHelperBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UAsyncHelperBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncHelperBlueprintLibrary"),
			Z_Registration_Info_UClass_UAsyncHelperBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUAsyncHelperBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UAsyncHelperBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncHelperBlueprintLibrary_NoRegister()
{
	return UAsyncHelperBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncHelperBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint Function Library for Async Helper\n * Provides easy access to async functionality from Blueprints\n */" },
#endif
		{ "IncludePath", "AsyncHelperBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AsyncHelperBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Function Library for Async Helper\nProvides easy access to async functionality from Blueprints" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAllAsyncTasks, "CancelAllAsyncTasks" }, // 1365124702
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_CancelAsyncTask, "CancelAsyncTask" }, // 3720688962
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncBatch, "ExecuteAsyncBatch" }, // 450173291
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelay, "ExecuteAsyncDelay" }, // 917641929
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithResult, "ExecuteAsyncDelayWithResult" }, // 642298976
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncDelayWithTimeout, "ExecuteAsyncDelayWithTimeout" }, // 3162298877
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteAsyncTaskChain, "ExecuteAsyncTaskChain" }, // 2297166832
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteParallelTasks, "ExecuteParallelTasks" }, // 2149819046
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteSimpleDelay, "ExecuteSimpleDelay" }, // 2614051205
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_ExecuteTaskChain, "ExecuteTaskChain" }, // 1723321186
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetAsyncTaskInfo, "GetAsyncTaskInfo" }, // 1448500217
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetPerformanceStats, "GetPerformanceStats" }, // 3187684440
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_GetRunningTaskCount, "GetRunningTaskCount" }, // 131891795
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncHelperAvailable, "IsAsyncHelperAvailable" }, // 138917089
		{ &Z_Construct_UFunction_UAsyncHelperBlueprintLibrary_IsAsyncTaskRunning, "IsAsyncTaskRunning" }, // 4171101445
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncHelperBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAsyncHelperBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncHelperBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncHelperBlueprintLibrary_Statics::ClassParams = {
	&UAsyncHelperBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncHelperBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncHelperBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncHelperBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UAsyncHelperBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncHelperBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAsyncHelperBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncHelperBlueprintLibrary.OuterSingleton;
}
UAsyncHelperBlueprintLibrary::UAsyncHelperBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncHelperBlueprintLibrary);
UAsyncHelperBlueprintLibrary::~UAsyncHelperBlueprintLibrary() {}
// ********** End Class UAsyncHelperBlueprintLibrary ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h__Script_AsyncHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncHelperBlueprintLibrary, UAsyncHelperBlueprintLibrary::StaticClass, TEXT("UAsyncHelperBlueprintLibrary"), &Z_Registration_Info_UClass_UAsyncHelperBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncHelperBlueprintLibrary), 1650850791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h__Script_AsyncHelper_950050437(TEXT("/Script/AsyncHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h__Script_AsyncHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h__Script_AsyncHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
