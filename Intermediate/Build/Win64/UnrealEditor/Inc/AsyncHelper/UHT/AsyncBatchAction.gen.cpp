// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncBatchAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncBatchAction() {}

// ********** Begin Cross Module References ********************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncBatchAction();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncBatchAction_NoRegister();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCancelled__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCompleted__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_AsyncHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAsyncBatchProgress ***************************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncBatchProgress_Parms
	{
		int32 TaskIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncBatchAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::NewProp_TaskIndex = { "TaskIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AsyncHelper_eventAsyncBatchProgress_Parms, TaskIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::NewProp_TaskIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncBatchProgress__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncBatchProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncBatchProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncBatchProgress_DelegateWrapper(const FMulticastScriptDelegate& AsyncBatchProgress, int32 TaskIndex)
{
	struct _Script_AsyncHelper_eventAsyncBatchProgress_Parms
	{
		int32 TaskIndex;
	};
	_Script_AsyncHelper_eventAsyncBatchProgress_Parms Parms;
	Parms.TaskIndex=TaskIndex;
	AsyncBatchProgress.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncBatchProgress *****************************************************

// ********** Begin Delegate FAsyncBatchActionCompleted ********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncBatchAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncBatchActionCompleted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncBatchActionCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncBatchActionCompleted)
{
	AsyncBatchActionCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncBatchActionCompleted **********************************************

// ********** Begin Delegate FAsyncBatchActionCancelled ********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCancelled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncBatchAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCancelled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncBatchActionCancelled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCancelled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCancelled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCancelled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCancelled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncBatchActionCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncBatchActionCancelled)
{
	AsyncBatchActionCancelled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncBatchActionCancelled **********************************************

// ********** Begin Class UAsyncBatchAction Function Cancel ****************************************
struct Z_Construct_UFunction_UAsyncBatchAction_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel the async operation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncBatchAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel the async operation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncBatchAction_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncBatchAction, nullptr, "Cancel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBatchAction_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncBatchAction_Cancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncBatchAction_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncBatchAction_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncBatchAction::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// ********** End Class UAsyncBatchAction Function Cancel ******************************************

// ********** Begin Class UAsyncBatchAction Function ExecuteAsyncBatch *****************************
struct Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics
{
	struct AsyncBatchAction_eventExecuteAsyncBatch_Parms
	{
		const UObject* WorldContext;
		int32 TaskCount;
		float TimeoutSeconds;
		FString TaskName;
		UAsyncBatchAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute multiple async tasks in parallel\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param TaskCount - Number of parallel tasks to execute\n\x09 * @param TimeoutSeconds - Maximum time to wait for all tasks (0 = no timeout)\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return The async action instance\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncBatch" },
		{ "CPP_Default_TimeoutSeconds", "0.000000" },
		{ "ModuleRelativePath", "Public/AsyncBatchAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute multiple async tasks in parallel\n@param WorldContext - World context for the operation\n@param TaskCount - Number of parallel tasks to execute\n@param TimeoutSeconds - Maximum time to wait for all tasks (0 = no timeout)\n@param TaskName - Optional name for debugging\n@return The async action instance" },
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutSeconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBatchAction_eventExecuteAsyncBatch_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::NewProp_TaskCount = { "TaskCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBatchAction_eventExecuteAsyncBatch_Parms, TaskCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::NewProp_TimeoutSeconds = { "TimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBatchAction_eventExecuteAsyncBatch_Parms, TimeoutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBatchAction_eventExecuteAsyncBatch_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBatchAction_eventExecuteAsyncBatch_Parms, ReturnValue), Z_Construct_UClass_UAsyncBatchAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::NewProp_TaskCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::NewProp_TimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncBatchAction, nullptr, "ExecuteAsyncBatch", Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::AsyncBatchAction_eventExecuteAsyncBatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::AsyncBatchAction_eventExecuteAsyncBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncBatchAction::execExecuteAsyncBatch)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FIntProperty,Z_Param_TaskCount);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeoutSeconds);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncBatchAction**)Z_Param__Result=UAsyncBatchAction::ExecuteAsyncBatch(Z_Param_WorldContext,Z_Param_TaskCount,Z_Param_TimeoutSeconds,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncBatchAction Function ExecuteAsyncBatch *******************************

// ********** Begin Class UAsyncBatchAction Function HandleTaskCompleted ***************************
struct Z_Construct_UFunction_UAsyncBatchAction_HandleTaskCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncBatchAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncBatchAction_HandleTaskCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncBatchAction, nullptr, "HandleTaskCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBatchAction_HandleTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncBatchAction_HandleTaskCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncBatchAction_HandleTaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncBatchAction_HandleTaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncBatchAction::execHandleTaskCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTaskCompleted();
	P_NATIVE_END;
}
// ********** End Class UAsyncBatchAction Function HandleTaskCompleted *****************************

// ********** Begin Class UAsyncBatchAction Function HandleTaskProgress ****************************
struct Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics
{
	struct AsyncBatchAction_eventHandleTaskProgress_Parms
	{
		int32 TaskIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal callbacks\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncBatchAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::NewProp_TaskIndex = { "TaskIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncBatchAction_eventHandleTaskProgress_Parms, TaskIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::NewProp_TaskIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncBatchAction, nullptr, "HandleTaskProgress", Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::AsyncBatchAction_eventHandleTaskProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::AsyncBatchAction_eventHandleTaskProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncBatchAction::execHandleTaskProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TaskIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTaskProgress(Z_Param_TaskIndex);
	P_NATIVE_END;
}
// ********** End Class UAsyncBatchAction Function HandleTaskProgress ******************************

// ********** Begin Class UAsyncBatchAction ********************************************************
void UAsyncBatchAction::StaticRegisterNativesUAsyncBatchAction()
{
	UClass* Class = UAsyncBatchAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Cancel", &UAsyncBatchAction::execCancel },
		{ "ExecuteAsyncBatch", &UAsyncBatchAction::execExecuteAsyncBatch },
		{ "HandleTaskCompleted", &UAsyncBatchAction::execHandleTaskCompleted },
		{ "HandleTaskProgress", &UAsyncBatchAction::execHandleTaskProgress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncBatchAction;
UClass* UAsyncBatchAction::GetPrivateStaticClass()
{
	using TClass = UAsyncBatchAction;
	if (!Z_Registration_Info_UClass_UAsyncBatchAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncBatchAction"),
			Z_Registration_Info_UClass_UAsyncBatchAction.InnerSingleton,
			StaticRegisterNativesUAsyncBatchAction,
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
	return Z_Registration_Info_UClass_UAsyncBatchAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncBatchAction_NoRegister()
{
	return UAsyncBatchAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncBatchAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint Async Action for executing batch operations\n * Provides parallel task execution with completion tracking\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AsyncBatchAction.h" },
		{ "ModuleRelativePath", "Public/AsyncBatchAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Async Action for executing batch operations\nProvides parallel task execution with completion tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskExecuted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncBatchAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncBatchAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncBatchAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskExecuted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncBatchAction_Cancel, "Cancel" }, // 2573830871
		{ &Z_Construct_UFunction_UAsyncBatchAction_ExecuteAsyncBatch, "ExecuteAsyncBatch" }, // 2903074687
		{ &Z_Construct_UFunction_UAsyncBatchAction_HandleTaskCompleted, "HandleTaskCompleted" }, // 4106565862
		{ &Z_Construct_UFunction_UAsyncBatchAction_HandleTaskProgress, "HandleTaskProgress" }, // 1342407701
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncBatchAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncBatchAction_Statics::NewProp_OnTaskExecuted = { "OnTaskExecuted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncBatchAction, OnTaskExecuted), Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskExecuted_MetaData), NewProp_OnTaskExecuted_MetaData) }; // 3610488804
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncBatchAction_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncBatchAction, OnCompleted), Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 1575842812
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncBatchAction_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncBatchAction, OnCancelled), Z_Construct_UDelegateFunction_AsyncHelper_AsyncBatchActionCancelled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 3107063328
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncBatchAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncBatchAction_Statics::NewProp_OnTaskExecuted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncBatchAction_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncBatchAction_Statics::NewProp_OnCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncBatchAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncBatchAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncBatchAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncBatchAction_Statics::ClassParams = {
	&UAsyncBatchAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncBatchAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncBatchAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncBatchAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncBatchAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncBatchAction()
{
	if (!Z_Registration_Info_UClass_UAsyncBatchAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncBatchAction.OuterSingleton, Z_Construct_UClass_UAsyncBatchAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncBatchAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncBatchAction);
UAsyncBatchAction::~UAsyncBatchAction() {}
// ********** End Class UAsyncBatchAction **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h__Script_AsyncHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncBatchAction, UAsyncBatchAction::StaticClass, TEXT("UAsyncBatchAction"), &Z_Registration_Info_UClass_UAsyncBatchAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncBatchAction), 2533886895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h__Script_AsyncHelper_2419938110(TEXT("/Script/AsyncHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h__Script_AsyncHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h__Script_AsyncHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
