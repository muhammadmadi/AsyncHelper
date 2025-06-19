// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncDelayAction.h"
#include "AsyncTaskManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncDelayAction() {}

// ********** Begin Cross Module References ********************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncDelayAction();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncDelayAction_NoRegister();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncDelayCompleted__DelegateSignature();
ASYNCHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncTaskHandle();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_AsyncHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAsyncDelayCompleted **************************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncDelayCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncDelayAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncDelayCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncDelayCompleted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncDelayCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncDelayCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncDelayCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncDelayCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncDelayCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncDelayCompleted)
{
	AsyncDelayCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncDelayCompleted ****************************************************

// ********** Begin Class UAsyncDelayAction Function AsyncDelay ************************************
struct Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics
{
	struct AsyncDelayAction_eventAsyncDelay_Parms
	{
		const UObject* WorldContext;
		float DelaySeconds;
		FString TaskName;
		UAsyncDelayAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async delay with Blueprint integration\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param DelaySeconds - How long to wait before executing\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return The async action instance\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncDelay" },
		{ "ModuleRelativePath", "Public/AsyncDelayAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async delay with Blueprint integration\n@param WorldContext - World context for the operation\n@param DelaySeconds - How long to wait before executing\n@param TaskName - Optional name for debugging\n@return The async action instance" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDelayAction_eventAsyncDelay_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDelayAction_eventAsyncDelay_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDelayAction_eventAsyncDelay_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDelayAction_eventAsyncDelay_Parms, ReturnValue), Z_Construct_UClass_UAsyncDelayAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncDelayAction, nullptr, "AsyncDelay", Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::AsyncDelayAction_eventAsyncDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::AsyncDelayAction_eventAsyncDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncDelayAction::execAsyncDelay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncDelayAction**)Z_Param__Result=UAsyncDelayAction::AsyncDelay(Z_Param_WorldContext,Z_Param_DelaySeconds,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncDelayAction Function AsyncDelay **************************************

// ********** Begin Class UAsyncDelayAction Function AsyncDelayWithCancellation ********************
struct Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics
{
	struct AsyncDelayAction_eventAsyncDelayWithCancellation_Parms
	{
		const UObject* WorldContext;
		float DelaySeconds;
		FAsyncTaskHandle CancellationToken;
		FString TaskName;
		UAsyncDelayAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async delay with cancellation token support\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param DelaySeconds - How long to wait before executing\n\x09 * @param CancellationToken - Token for cancellation support\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return The async action instance\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncDelayWithCancellation" },
		{ "ModuleRelativePath", "Public/AsyncDelayAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async delay with cancellation token support\n@param WorldContext - World context for the operation\n@param DelaySeconds - How long to wait before executing\n@param CancellationToken - Token for cancellation support\n@param TaskName - Optional name for debugging\n@return The async action instance" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancellationToken_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelaySeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancellationToken;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDelayAction_eventAsyncDelayWithCancellation_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDelayAction_eventAsyncDelayWithCancellation_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::NewProp_CancellationToken = { "CancellationToken", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDelayAction_eventAsyncDelayWithCancellation_Parms, CancellationToken), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancellationToken_MetaData), NewProp_CancellationToken_MetaData) }; // 3541892958
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDelayAction_eventAsyncDelayWithCancellation_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDelayAction_eventAsyncDelayWithCancellation_Parms, ReturnValue), Z_Construct_UClass_UAsyncDelayAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::NewProp_CancellationToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncDelayAction, nullptr, "AsyncDelayWithCancellation", Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::AsyncDelayAction_eventAsyncDelayWithCancellation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::AsyncDelayAction_eventAsyncDelayWithCancellation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncDelayAction::execAsyncDelayWithCancellation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_STRUCT_REF(FAsyncTaskHandle,Z_Param_Out_CancellationToken);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncDelayAction**)Z_Param__Result=UAsyncDelayAction::AsyncDelayWithCancellation(Z_Param_WorldContext,Z_Param_DelaySeconds,Z_Param_Out_CancellationToken,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncDelayAction Function AsyncDelayWithCancellation **********************

// ********** Begin Class UAsyncDelayAction Function Cancel ****************************************
struct Z_Construct_UFunction_UAsyncDelayAction_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel the async operation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDelayAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel the async operation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncDelayAction_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncDelayAction, nullptr, "Cancel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDelayAction_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncDelayAction_Cancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncDelayAction_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncDelayAction_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncDelayAction::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// ********** End Class UAsyncDelayAction Function Cancel ******************************************

// ********** Begin Class UAsyncDelayAction Function HandleTaskCompleted ***************************
struct Z_Construct_UFunction_UAsyncDelayAction_HandleTaskCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal callback\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDelayAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal callback" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncDelayAction_HandleTaskCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncDelayAction, nullptr, "HandleTaskCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDelayAction_HandleTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncDelayAction_HandleTaskCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncDelayAction_HandleTaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncDelayAction_HandleTaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncDelayAction::execHandleTaskCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTaskCompleted();
	P_NATIVE_END;
}
// ********** End Class UAsyncDelayAction Function HandleTaskCompleted *****************************

// ********** Begin Class UAsyncDelayAction ********************************************************
void UAsyncDelayAction::StaticRegisterNativesUAsyncDelayAction()
{
	UClass* Class = UAsyncDelayAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncDelay", &UAsyncDelayAction::execAsyncDelay },
		{ "AsyncDelayWithCancellation", &UAsyncDelayAction::execAsyncDelayWithCancellation },
		{ "Cancel", &UAsyncDelayAction::execCancel },
		{ "HandleTaskCompleted", &UAsyncDelayAction::execHandleTaskCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncDelayAction;
UClass* UAsyncDelayAction::GetPrivateStaticClass()
{
	using TClass = UAsyncDelayAction;
	if (!Z_Registration_Info_UClass_UAsyncDelayAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncDelayAction"),
			Z_Registration_Info_UClass_UAsyncDelayAction.InnerSingleton,
			StaticRegisterNativesUAsyncDelayAction,
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
	return Z_Registration_Info_UClass_UAsyncDelayAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncDelayAction_NoRegister()
{
	return UAsyncDelayAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncDelayAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint Async Action for executing delayed callbacks\n * Provides proper Blueprint async node integration following UE5.6 best practices\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AsyncDelayAction.h" },
		{ "ModuleRelativePath", "Public/AsyncDelayAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Async Action for executing delayed callbacks\nProvides proper Blueprint async node integration following UE5.6 best practices" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDelayAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDelayAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncDelayAction_AsyncDelay, "AsyncDelay" }, // 967613799
		{ &Z_Construct_UFunction_UAsyncDelayAction_AsyncDelayWithCancellation, "AsyncDelayWithCancellation" }, // 1064905302
		{ &Z_Construct_UFunction_UAsyncDelayAction_Cancel, "Cancel" }, // 2026673094
		{ &Z_Construct_UFunction_UAsyncDelayAction_HandleTaskCompleted, "HandleTaskCompleted" }, // 62102582
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncDelayAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDelayAction_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDelayAction, OnCompleted), Z_Construct_UDelegateFunction_AsyncHelper_AsyncDelayCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 2864677372
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDelayAction_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDelayAction, OnCancelled), Z_Construct_UDelegateFunction_AsyncHelper_AsyncDelayCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 2864677372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncDelayAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDelayAction_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDelayAction_Statics::NewProp_OnCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDelayAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncDelayAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDelayAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncDelayAction_Statics::ClassParams = {
	&UAsyncDelayAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncDelayAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDelayAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDelayAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncDelayAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncDelayAction()
{
	if (!Z_Registration_Info_UClass_UAsyncDelayAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncDelayAction.OuterSingleton, Z_Construct_UClass_UAsyncDelayAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncDelayAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncDelayAction);
UAsyncDelayAction::~UAsyncDelayAction() {}
// ********** End Class UAsyncDelayAction **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h__Script_AsyncHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncDelayAction, UAsyncDelayAction::StaticClass, TEXT("UAsyncDelayAction"), &Z_Registration_Info_UClass_UAsyncDelayAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncDelayAction), 4145594590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h__Script_AsyncHelper_2616947932(TEXT("/Script/AsyncHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h__Script_AsyncHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h__Script_AsyncHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
