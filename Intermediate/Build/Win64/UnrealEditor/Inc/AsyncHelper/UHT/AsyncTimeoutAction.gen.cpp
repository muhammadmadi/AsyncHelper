// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncTimeoutAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncTimeoutAction() {}

// ********** Begin Cross Module References ********************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTimeoutAction();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTimeoutAction_NoRegister();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCancelled__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCompleted__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionTimedOut__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_AsyncHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAsyncTimeoutActionCompleted ******************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTimeoutAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTimeoutActionCompleted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTimeoutActionCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncTimeoutActionCompleted)
{
	AsyncTimeoutActionCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncTimeoutActionCompleted ********************************************

// ********** Begin Delegate FAsyncTimeoutActionTimedOut *******************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionTimedOut__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTimeoutAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionTimedOut__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTimeoutActionTimedOut__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionTimedOut__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionTimedOut__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionTimedOut__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionTimedOut__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTimeoutActionTimedOut_DelegateWrapper(const FMulticastScriptDelegate& AsyncTimeoutActionTimedOut)
{
	AsyncTimeoutActionTimedOut.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncTimeoutActionTimedOut *********************************************

// ********** Begin Delegate FAsyncTimeoutActionCancelled ******************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCancelled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTimeoutAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCancelled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTimeoutActionCancelled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCancelled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCancelled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCancelled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCancelled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTimeoutActionCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncTimeoutActionCancelled)
{
	AsyncTimeoutActionCancelled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncTimeoutActionCancelled ********************************************

// ********** Begin Class UAsyncTimeoutAction Function AsyncDelayWithTimeout ***********************
struct Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics
{
	struct AsyncTimeoutAction_eventAsyncDelayWithTimeout_Parms
	{
		const UObject* WorldContext;
		float DelaySeconds;
		float TimeoutSeconds;
		FString TaskName;
		UAsyncTimeoutAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async delay with timeout support\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param DelaySeconds - How long to wait before executing\n\x09 * @param TimeoutSeconds - Maximum time to wait before timing out\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return The async action instance\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncDelayWithTimeout" },
		{ "ModuleRelativePath", "Public/AsyncTimeoutAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async delay with timeout support\n@param WorldContext - World context for the operation\n@param DelaySeconds - How long to wait before executing\n@param TimeoutSeconds - Maximum time to wait before timing out\n@param TaskName - Optional name for debugging\n@return The async action instance" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeoutSeconds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTimeoutAction_eventAsyncDelayWithTimeout_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTimeoutAction_eventAsyncDelayWithTimeout_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::NewProp_TimeoutSeconds = { "TimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTimeoutAction_eventAsyncDelayWithTimeout_Parms, TimeoutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTimeoutAction_eventAsyncDelayWithTimeout_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTimeoutAction_eventAsyncDelayWithTimeout_Parms, ReturnValue), Z_Construct_UClass_UAsyncTimeoutAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::NewProp_TimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTimeoutAction, nullptr, "AsyncDelayWithTimeout", Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::AsyncTimeoutAction_eventAsyncDelayWithTimeout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::AsyncTimeoutAction_eventAsyncDelayWithTimeout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTimeoutAction::execAsyncDelayWithTimeout)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeoutSeconds);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncTimeoutAction**)Z_Param__Result=UAsyncTimeoutAction::AsyncDelayWithTimeout(Z_Param_WorldContext,Z_Param_DelaySeconds,Z_Param_TimeoutSeconds,Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTimeoutAction Function AsyncDelayWithTimeout *************************

// ********** Begin Class UAsyncTimeoutAction Function Cancel **************************************
struct Z_Construct_UFunction_UAsyncTimeoutAction_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel the async operation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTimeoutAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel the async operation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTimeoutAction_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTimeoutAction, nullptr, "Cancel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTimeoutAction_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTimeoutAction_Cancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncTimeoutAction_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTimeoutAction_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTimeoutAction::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// ********** End Class UAsyncTimeoutAction Function Cancel ****************************************

// ********** Begin Class UAsyncTimeoutAction Function HandleTaskCompleted *************************
struct Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal callbacks\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTimeoutAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTimeoutAction, nullptr, "HandleTaskCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTimeoutAction::execHandleTaskCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTaskCompleted();
	P_NATIVE_END;
}
// ********** End Class UAsyncTimeoutAction Function HandleTaskCompleted ***************************

// ********** Begin Class UAsyncTimeoutAction Function HandleTaskTimeout ***************************
struct Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics
{
	struct AsyncTimeoutAction_eventHandleTaskTimeout_Parms
	{
		bool bTimedOut;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTimeoutAction.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTimedOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimedOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::NewProp_bTimedOut_SetBit(void* Obj)
{
	((AsyncTimeoutAction_eventHandleTaskTimeout_Parms*)Obj)->bTimedOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::NewProp_bTimedOut = { "bTimedOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTimeoutAction_eventHandleTaskTimeout_Parms), &Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::NewProp_bTimedOut_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::NewProp_bTimedOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTimeoutAction, nullptr, "HandleTaskTimeout", Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::AsyncTimeoutAction_eventHandleTaskTimeout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::AsyncTimeoutAction_eventHandleTaskTimeout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTimeoutAction::execHandleTaskTimeout)
{
	P_GET_UBOOL(Z_Param_bTimedOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTaskTimeout(Z_Param_bTimedOut);
	P_NATIVE_END;
}
// ********** End Class UAsyncTimeoutAction Function HandleTaskTimeout *****************************

// ********** Begin Class UAsyncTimeoutAction ******************************************************
void UAsyncTimeoutAction::StaticRegisterNativesUAsyncTimeoutAction()
{
	UClass* Class = UAsyncTimeoutAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncDelayWithTimeout", &UAsyncTimeoutAction::execAsyncDelayWithTimeout },
		{ "Cancel", &UAsyncTimeoutAction::execCancel },
		{ "HandleTaskCompleted", &UAsyncTimeoutAction::execHandleTaskCompleted },
		{ "HandleTaskTimeout", &UAsyncTimeoutAction::execHandleTaskTimeout },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncTimeoutAction;
UClass* UAsyncTimeoutAction::GetPrivateStaticClass()
{
	using TClass = UAsyncTimeoutAction;
	if (!Z_Registration_Info_UClass_UAsyncTimeoutAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncTimeoutAction"),
			Z_Registration_Info_UClass_UAsyncTimeoutAction.InnerSingleton,
			StaticRegisterNativesUAsyncTimeoutAction,
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
	return Z_Registration_Info_UClass_UAsyncTimeoutAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncTimeoutAction_NoRegister()
{
	return UAsyncTimeoutAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncTimeoutAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint Async Action for executing tasks with timeout support\n * Prevents hanging operations by enforcing maximum execution time\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AsyncTimeoutAction.h" },
		{ "ModuleRelativePath", "Public/AsyncTimeoutAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Async Action for executing tasks with timeout support\nPrevents hanging operations by enforcing maximum execution time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTimeoutAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimedOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTimeoutAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncTimeoutAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimedOut;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTimeoutAction_AsyncDelayWithTimeout, "AsyncDelayWithTimeout" }, // 2301497317
		{ &Z_Construct_UFunction_UAsyncTimeoutAction_Cancel, "Cancel" }, // 1079257756
		{ &Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskCompleted, "HandleTaskCompleted" }, // 2656354867
		{ &Z_Construct_UFunction_UAsyncTimeoutAction_HandleTaskTimeout, "HandleTaskTimeout" }, // 1192754649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTimeoutAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTimeoutAction_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTimeoutAction, OnCompleted), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 218250087
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTimeoutAction_Statics::NewProp_OnTimedOut = { "OnTimedOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTimeoutAction, OnTimedOut), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionTimedOut__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimedOut_MetaData), NewProp_OnTimedOut_MetaData) }; // 2803664979
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTimeoutAction_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncTimeoutAction, OnCancelled), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutActionCancelled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 3114548980
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncTimeoutAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTimeoutAction_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTimeoutAction_Statics::NewProp_OnTimedOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTimeoutAction_Statics::NewProp_OnCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTimeoutAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncTimeoutAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTimeoutAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTimeoutAction_Statics::ClassParams = {
	&UAsyncTimeoutAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncTimeoutAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTimeoutAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTimeoutAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncTimeoutAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncTimeoutAction()
{
	if (!Z_Registration_Info_UClass_UAsyncTimeoutAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTimeoutAction.OuterSingleton, Z_Construct_UClass_UAsyncTimeoutAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncTimeoutAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTimeoutAction);
UAsyncTimeoutAction::~UAsyncTimeoutAction() {}
// ********** End Class UAsyncTimeoutAction ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h__Script_AsyncHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncTimeoutAction, UAsyncTimeoutAction::StaticClass, TEXT("UAsyncTimeoutAction"), &Z_Registration_Info_UClass_UAsyncTimeoutAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTimeoutAction), 1343211435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h__Script_AsyncHelper_1814811977(TEXT("/Script/AsyncHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h__Script_AsyncHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h__Script_AsyncHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
