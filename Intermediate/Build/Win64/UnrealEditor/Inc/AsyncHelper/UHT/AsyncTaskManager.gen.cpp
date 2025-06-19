// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncTaskManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncTaskManager() {}

// ********** Begin Cross Module References ********************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTaskManager();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTaskManager_NoRegister();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompleted__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature();
ASYNCHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncTaskHandle();
ASYNCHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncTaskInfo();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AsyncHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAsyncTaskDelegate ****************************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTaskDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTaskDelegate_DelegateWrapper(const FScriptDelegate& AsyncTaskDelegate)
{
	AsyncTaskDelegate.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncTaskDelegate ******************************************************

// ********** Begin Delegate FAsyncTaskDelegateWithResult ******************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncTaskDelegateWithResult_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_AsyncHelper_eventAsyncTaskDelegateWithResult_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AsyncHelper_eventAsyncTaskDelegateWithResult_Parms), &Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTaskDelegateWithResult__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskDelegateWithResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskDelegateWithResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTaskDelegateWithResult_DelegateWrapper(const FScriptDelegate& AsyncTaskDelegateWithResult, bool bSuccess)
{
	struct _Script_AsyncHelper_eventAsyncTaskDelegateWithResult_Parms
	{
		bool bSuccess;
	};
	_Script_AsyncHelper_eventAsyncTaskDelegateWithResult_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	AsyncTaskDelegateWithResult.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncTaskDelegateWithResult ********************************************

// ********** Begin Delegate FAsyncTaskCompleted ***************************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTaskCompleted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskCompleted)
{
	AsyncTaskCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncTaskCompleted *****************************************************

// ********** Begin Delegate FAsyncTaskCompletedWithResult *****************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncTaskCompletedWithResult_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_AsyncHelper_eventAsyncTaskCompletedWithResult_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AsyncHelper_eventAsyncTaskCompletedWithResult_Parms), &Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTaskCompletedWithResult__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskCompletedWithResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskCompletedWithResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskCompletedWithResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTaskCompletedWithResult_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskCompletedWithResult, bool bSuccess)
{
	struct _Script_AsyncHelper_eventAsyncTaskCompletedWithResult_Parms
	{
		bool bSuccess;
	};
	_Script_AsyncHelper_eventAsyncTaskCompletedWithResult_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	AsyncTaskCompletedWithResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncTaskCompletedWithResult *******************************************

// ********** Begin Delegate FAsyncTaskChainDelegate ***********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncTaskChainDelegate_Parms
	{
		int32 TaskIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// New delegates for enhanced functionality\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New delegates for enhanced functionality" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::NewProp_TaskIndex = { "TaskIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AsyncHelper_eventAsyncTaskChainDelegate_Parms, TaskIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::NewProp_TaskIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTaskChainDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskChainDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskChainDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTaskChainDelegate_DelegateWrapper(const FScriptDelegate& AsyncTaskChainDelegate, int32 TaskIndex)
{
	struct _Script_AsyncHelper_eventAsyncTaskChainDelegate_Parms
	{
		int32 TaskIndex;
	};
	_Script_AsyncHelper_eventAsyncTaskChainDelegate_Parms Parms;
	Parms.TaskIndex=TaskIndex;
	AsyncTaskChainDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncTaskChainDelegate *************************************************

// ********** Begin Delegate FAsyncTimeoutDelegate *************************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncTimeoutDelegate_Parms
	{
		bool bTimedOut;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTimedOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimedOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::NewProp_bTimedOut_SetBit(void* Obj)
{
	((_Script_AsyncHelper_eventAsyncTimeoutDelegate_Parms*)Obj)->bTimedOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::NewProp_bTimedOut = { "bTimedOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AsyncHelper_eventAsyncTimeoutDelegate_Parms), &Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::NewProp_bTimedOut_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::NewProp_bTimedOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTimeoutDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTimeoutDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTimeoutDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTimeoutDelegate_DelegateWrapper(const FScriptDelegate& AsyncTimeoutDelegate, bool bTimedOut)
{
	struct _Script_AsyncHelper_eventAsyncTimeoutDelegate_Parms
	{
		bool bTimedOut;
	};
	_Script_AsyncHelper_eventAsyncTimeoutDelegate_Parms Parms;
	Parms.bTimedOut=bTimedOut ? true : false;
	AsyncTimeoutDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncTimeoutDelegate ***************************************************

// ********** Begin Delegate FAsyncTaskChainCompleted **********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncTaskChainCompleted_Parms
	{
		bool bAllSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::NewProp_bAllSucceeded_SetBit(void* Obj)
{
	((_Script_AsyncHelper_eventAsyncTaskChainCompleted_Parms*)Obj)->bAllSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::NewProp_bAllSucceeded = { "bAllSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AsyncHelper_eventAsyncTaskChainCompleted_Parms), &Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::NewProp_bAllSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::NewProp_bAllSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTaskChainCompleted__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskChainCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskChainCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTaskChainCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskChainCompleted, bool bAllSucceeded)
{
	struct _Script_AsyncHelper_eventAsyncTaskChainCompleted_Parms
	{
		bool bAllSucceeded;
	};
	_Script_AsyncHelper_eventAsyncTaskChainCompleted_Parms Parms;
	Parms.bAllSucceeded=bAllSucceeded ? true : false;
	AsyncTaskChainCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncTaskChainCompleted ************************************************

// ********** Begin Delegate FAsyncTaskWithTimeoutCompleted ****************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncTaskWithTimeoutCompleted_Parms
	{
		bool bTimedOut;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bTimedOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimedOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::NewProp_bTimedOut_SetBit(void* Obj)
{
	((_Script_AsyncHelper_eventAsyncTaskWithTimeoutCompleted_Parms*)Obj)->bTimedOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::NewProp_bTimedOut = { "bTimedOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AsyncHelper_eventAsyncTaskWithTimeoutCompleted_Parms), &Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::NewProp_bTimedOut_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::NewProp_bTimedOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTaskWithTimeoutCompleted__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskWithTimeoutCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTaskWithTimeoutCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskWithTimeoutCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTaskWithTimeoutCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskWithTimeoutCompleted, bool bTimedOut)
{
	struct _Script_AsyncHelper_eventAsyncTaskWithTimeoutCompleted_Parms
	{
		bool bTimedOut;
	};
	_Script_AsyncHelper_eventAsyncTaskWithTimeoutCompleted_Parms Parms;
	Parms.bTimedOut=bTimedOut ? true : false;
	AsyncTaskWithTimeoutCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncTaskWithTimeoutCompleted ******************************************

// ********** Begin ScriptStruct FAsyncTaskHandle **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAsyncTaskHandle;
class UScriptStruct* FAsyncTaskHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAsyncTaskHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAsyncTaskHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAsyncTaskHandle, (UObject*)Z_Construct_UPackage__Script_AsyncHelper(), TEXT("AsyncTaskHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FAsyncTaskHandle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Handle for managing async tasks\n * Provides cancellation and status checking capabilities\n */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle for managing async tasks\nProvides cancellation and status checking capabilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskId_MetaData[] = {
		{ "Category", "Async Task" },
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Async Task" },
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskId;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAsyncTaskHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncTaskHandle, TaskId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskId_MetaData), NewProp_TaskId_MetaData) };
void Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FAsyncTaskHandle*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAsyncTaskHandle), &Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::NewProp_TaskId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::NewProp_bIsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
	nullptr,
	&NewStructOps,
	"AsyncTaskHandle",
	Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::PropPointers),
	sizeof(FAsyncTaskHandle),
	alignof(FAsyncTaskHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAsyncTaskHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FAsyncTaskHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAsyncTaskHandle.InnerSingleton, Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAsyncTaskHandle.InnerSingleton;
}
// ********** End ScriptStruct FAsyncTaskHandle ****************************************************

// ********** Begin ScriptStruct FAsyncTaskInfo ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAsyncTaskInfo;
class UScriptStruct* FAsyncTaskInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAsyncTaskInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAsyncTaskInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAsyncTaskInfo, (UObject*)Z_Construct_UPackage__Script_AsyncHelper(), TEXT("AsyncTaskInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FAsyncTaskInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Information about an async task\n */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about an async task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "Category", "Async Task" },
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "Category", "Async Task" },
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[] = {
		{ "Category", "Async Task" },
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasCancelled_MetaData[] = {
		{ "Category", "Async Task" },
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Async Task" },
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Async Task" },
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static void NewProp_bIsCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
	static void NewProp_bWasCancelled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancelled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAsyncTaskInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncTaskInfo, Handle), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3541892958
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncTaskInfo, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
void Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
{
	((FAsyncTaskInfo*)Obj)->bIsCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAsyncTaskInfo), &Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCompleted_MetaData), NewProp_bIsCompleted_MetaData) };
void Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_bWasCancelled_SetBit(void* Obj)
{
	((FAsyncTaskInfo*)Obj)->bWasCancelled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_bWasCancelled = { "bWasCancelled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAsyncTaskInfo), &Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_bWasCancelled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasCancelled_MetaData), NewProp_bWasCancelled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncTaskInfo, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncTaskInfo, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_bIsCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_bWasCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
	nullptr,
	&NewStructOps,
	"AsyncTaskInfo",
	Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::PropPointers),
	sizeof(FAsyncTaskInfo),
	alignof(FAsyncTaskInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAsyncTaskInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FAsyncTaskInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAsyncTaskInfo.InnerSingleton, Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAsyncTaskInfo.InnerSingleton;
}
// ********** End ScriptStruct FAsyncTaskInfo ******************************************************

// ********** Begin Class UAsyncTaskManager Function CancelAllAsyncTasks ***************************
struct Z_Construct_UFunction_UAsyncTaskManager_CancelAllAsyncTasks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel all running async tasks\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel all running async tasks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskManager_CancelAllAsyncTasks_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskManager, nullptr, "CancelAllAsyncTasks", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_CancelAllAsyncTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskManager_CancelAllAsyncTasks_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncTaskManager_CancelAllAsyncTasks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskManager_CancelAllAsyncTasks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskManager::execCancelAllAsyncTasks)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAllAsyncTasks();
	P_NATIVE_END;
}
// ********** End Class UAsyncTaskManager Function CancelAllAsyncTasks *****************************

// ********** Begin Class UAsyncTaskManager Function CancelAsyncTask *******************************
struct Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics
{
	struct AsyncTaskManager_eventCancelAsyncTask_Parms
	{
		FAsyncTaskHandle TaskHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel a running async task\n\x09 * @param TaskHandle - Handle of the task to cancel\n\x09 * @return True if task was successfully cancelled\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel a running async task\n@param TaskHandle - Handle of the task to cancel\n@return True if task was successfully cancelled" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventCancelAsyncTask_Parms, TaskHandle), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskHandle_MetaData), NewProp_TaskHandle_MetaData) }; // 3541892958
void Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AsyncTaskManager_eventCancelAsyncTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTaskManager_eventCancelAsyncTask_Parms), &Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::NewProp_TaskHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskManager, nullptr, "CancelAsyncTask", Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::AsyncTaskManager_eventCancelAsyncTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::AsyncTaskManager_eventCancelAsyncTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskManager::execCancelAsyncTask)
{
	P_GET_STRUCT_REF(FAsyncTaskHandle,Z_Param_Out_TaskHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CancelAsyncTask(Z_Param_Out_TaskHandle);
	P_NATIVE_END;
}
// ********** End Class UAsyncTaskManager Function CancelAsyncTask *********************************

// ********** Begin Class UAsyncTaskManager Function ExecuteAsyncBatch *****************************
struct Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics
{
	struct AsyncTaskManager_eventExecuteAsyncBatch_Parms
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
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::NewProp_TaskCount = { "TaskCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncBatch_Parms, TaskCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::NewProp_BatchDelegate = { "BatchDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncBatch_Parms, BatchDelegate), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BatchDelegate_MetaData), NewProp_BatchDelegate_MetaData) }; // 1146528334
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::NewProp_TimeoutSeconds = { "TimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncBatch_Parms, TimeoutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncBatch_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncBatch_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::NewProp_TaskCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::NewProp_BatchDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::NewProp_TimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskManager, nullptr, "ExecuteAsyncBatch", Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::AsyncTaskManager_eventExecuteAsyncBatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::AsyncTaskManager_eventExecuteAsyncBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskManager::execExecuteAsyncBatch)
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
// ********** End Class UAsyncTaskManager Function ExecuteAsyncBatch *******************************

// ********** Begin Class UAsyncTaskManager Function ExecuteAsyncDelay *****************************
struct Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics
{
	struct AsyncTaskManager_eventExecuteAsyncDelay_Parms
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
		{ "Comment", "/**\n\x09 * Execute a simple async delay\n\x09 * @param DelaySeconds - How long to wait before executing the callback\n\x09 * @param Callback - Function to execute after delay\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncDelay" },
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute a simple async delay\n@param DelaySeconds - How long to wait before executing the callback\n@param Callback - Function to execute after delay\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelay_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelay_Parms, Callback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1774040023
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelay_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelay_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskManager, nullptr, "ExecuteAsyncDelay", Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::AsyncTaskManager_eventExecuteAsyncDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::AsyncTaskManager_eventExecuteAsyncDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskManager::execExecuteAsyncDelay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=P_THIS->ExecuteAsyncDelay(Z_Param_DelaySeconds,FAsyncTaskDelegate(Z_Param_Out_Callback),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTaskManager Function ExecuteAsyncDelay *******************************

// ********** Begin Class UAsyncTaskManager Function ExecuteAsyncDelayWithResult *******************
struct Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics
{
	struct AsyncTaskManager_eventExecuteAsyncDelayWithResult_Parms
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
		{ "Comment", "/**\n\x09 * Execute an async task with result callback\n\x09 * @param DelaySeconds - How long to wait before executing\n\x09 * @param Callback - Function to execute with success result\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "CPP_Default_TaskName", "AsyncDelayWithResult" },
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async task with result callback\n@param DelaySeconds - How long to wait before executing\n@param Callback - Function to execute with success result\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelayWithResult_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelayWithResult_Parms, Callback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegateWithResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1479815987
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelayWithResult_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelayWithResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskManager, nullptr, "ExecuteAsyncDelayWithResult", Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::AsyncTaskManager_eventExecuteAsyncDelayWithResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::AsyncTaskManager_eventExecuteAsyncDelayWithResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskManager::execExecuteAsyncDelayWithResult)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DelaySeconds);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=P_THIS->ExecuteAsyncDelayWithResult(Z_Param_DelaySeconds,FAsyncTaskDelegateWithResult(Z_Param_Out_Callback),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTaskManager Function ExecuteAsyncDelayWithResult *********************

// ********** Begin Class UAsyncTaskManager Function ExecuteAsyncDelayWithTimeout ******************
struct Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics
{
	struct AsyncTaskManager_eventExecuteAsyncDelayWithTimeout_Parms
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
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_DelaySeconds = { "DelaySeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelayWithTimeout_Parms, DelaySeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutSeconds = { "TimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelayWithTimeout_Parms, TimeoutSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelayWithTimeout_Parms, Callback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1774040023
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutCallback = { "TimeoutCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelayWithTimeout_Parms, TimeoutCallback), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTimeoutDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeoutCallback_MetaData), NewProp_TimeoutCallback_MetaData) }; // 1802616842
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelayWithTimeout_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncDelayWithTimeout_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_DelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TimeoutCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskManager, nullptr, "ExecuteAsyncDelayWithTimeout", Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::AsyncTaskManager_eventExecuteAsyncDelayWithTimeout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::AsyncTaskManager_eventExecuteAsyncDelayWithTimeout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskManager::execExecuteAsyncDelayWithTimeout)
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
// ********** End Class UAsyncTaskManager Function ExecuteAsyncDelayWithTimeout ********************

// ********** Begin Class UAsyncTaskManager Function ExecuteAsyncTaskChain *************************
struct Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics
{
	struct AsyncTaskManager_eventExecuteAsyncTaskChain_Parms
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
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain_Inner = { "TaskChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain = { "TaskChain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncTaskChain_Parms, TaskChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskChain_MetaData), NewProp_TaskChain_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_ChainDelegate = { "ChainDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncTaskChain_Parms, ChainDelegate), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTaskChainDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainDelegate_MetaData), NewProp_ChainDelegate_MetaData) }; // 1146528334
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_DelayBetweenTasks = { "DelayBetweenTasks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncTaskChain_Parms, DelayBetweenTasks), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure_SetBit(void* Obj)
{
	((AsyncTaskManager_eventExecuteAsyncTaskChain_Parms*)Obj)->bStopOnFailure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure = { "bStopOnFailure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTaskManager_eventExecuteAsyncTaskChain_Parms), &Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncTaskChain_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventExecuteAsyncTaskChain_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_TaskChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_ChainDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_DelayBetweenTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_bStopOnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskManager, nullptr, "ExecuteAsyncTaskChain", Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::AsyncTaskManager_eventExecuteAsyncTaskChain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::AsyncTaskManager_eventExecuteAsyncTaskChain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskManager::execExecuteAsyncTaskChain)
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
// ********** End Class UAsyncTaskManager Function ExecuteAsyncTaskChain ***************************

// ********** Begin Class UAsyncTaskManager Function GetAsyncTaskInfo ******************************
struct Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics
{
	struct AsyncTaskManager_eventGetAsyncTaskInfo_Parms
	{
		FAsyncTaskHandle TaskHandle;
		FAsyncTaskInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get information about an async task\n\x09 * @param TaskHandle - Handle of the task\n\x09 * @return Task information structure\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get information about an async task\n@param TaskHandle - Handle of the task\n@return Task information structure" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventGetAsyncTaskInfo_Parms, TaskHandle), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskHandle_MetaData), NewProp_TaskHandle_MetaData) }; // 3541892958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventGetAsyncTaskInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskInfo, METADATA_PARAMS(0, nullptr) }; // 3835502652
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::NewProp_TaskHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskManager, nullptr, "GetAsyncTaskInfo", Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::AsyncTaskManager_eventGetAsyncTaskInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::AsyncTaskManager_eventGetAsyncTaskInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskManager::execGetAsyncTaskInfo)
{
	P_GET_STRUCT_REF(FAsyncTaskHandle,Z_Param_Out_TaskHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskInfo*)Z_Param__Result=P_THIS->GetAsyncTaskInfo(Z_Param_Out_TaskHandle);
	P_NATIVE_END;
}
// ********** End Class UAsyncTaskManager Function GetAsyncTaskInfo ********************************

// ********** Begin Class UAsyncTaskManager Function GetRunningTaskCount ***************************
struct Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics
{
	struct AsyncTaskManager_eventGetRunningTaskCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the number of currently running async tasks\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of currently running async tasks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventGetRunningTaskCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskManager, nullptr, "GetRunningTaskCount", Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::AsyncTaskManager_eventGetRunningTaskCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::AsyncTaskManager_eventGetRunningTaskCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskManager::execGetRunningTaskCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRunningTaskCount();
	P_NATIVE_END;
}
// ********** End Class UAsyncTaskManager Function GetRunningTaskCount *****************************

// ********** Begin Class UAsyncTaskManager Function IsAsyncTaskRunning ****************************
struct Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics
{
	struct AsyncTaskManager_eventIsAsyncTaskRunning_Parms
	{
		FAsyncTaskHandle TaskHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if an async task is still running\n\x09 * @param TaskHandle - Handle of the task to check\n\x09 * @return True if task is still running\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if an async task is still running\n@param TaskHandle - Handle of the task to check\n@return True if task is still running" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTaskManager_eventIsAsyncTaskRunning_Parms, TaskHandle), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskHandle_MetaData), NewProp_TaskHandle_MetaData) }; // 3541892958
void Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AsyncTaskManager_eventIsAsyncTaskRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTaskManager_eventIsAsyncTaskRunning_Parms), &Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::NewProp_TaskHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTaskManager, nullptr, "IsAsyncTaskRunning", Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::AsyncTaskManager_eventIsAsyncTaskRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::AsyncTaskManager_eventIsAsyncTaskRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTaskManager::execIsAsyncTaskRunning)
{
	P_GET_STRUCT_REF(FAsyncTaskHandle,Z_Param_Out_TaskHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAsyncTaskRunning(Z_Param_Out_TaskHandle);
	P_NATIVE_END;
}
// ********** End Class UAsyncTaskManager Function IsAsyncTaskRunning ******************************

// ********** Begin Class UAsyncTaskManager ********************************************************
void UAsyncTaskManager::StaticRegisterNativesUAsyncTaskManager()
{
	UClass* Class = UAsyncTaskManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelAllAsyncTasks", &UAsyncTaskManager::execCancelAllAsyncTasks },
		{ "CancelAsyncTask", &UAsyncTaskManager::execCancelAsyncTask },
		{ "ExecuteAsyncBatch", &UAsyncTaskManager::execExecuteAsyncBatch },
		{ "ExecuteAsyncDelay", &UAsyncTaskManager::execExecuteAsyncDelay },
		{ "ExecuteAsyncDelayWithResult", &UAsyncTaskManager::execExecuteAsyncDelayWithResult },
		{ "ExecuteAsyncDelayWithTimeout", &UAsyncTaskManager::execExecuteAsyncDelayWithTimeout },
		{ "ExecuteAsyncTaskChain", &UAsyncTaskManager::execExecuteAsyncTaskChain },
		{ "GetAsyncTaskInfo", &UAsyncTaskManager::execGetAsyncTaskInfo },
		{ "GetRunningTaskCount", &UAsyncTaskManager::execGetRunningTaskCount },
		{ "IsAsyncTaskRunning", &UAsyncTaskManager::execIsAsyncTaskRunning },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncTaskManager;
UClass* UAsyncTaskManager::GetPrivateStaticClass()
{
	using TClass = UAsyncTaskManager;
	if (!Z_Registration_Info_UClass_UAsyncTaskManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncTaskManager"),
			Z_Registration_Info_UClass_UAsyncTaskManager.InnerSingleton,
			StaticRegisterNativesUAsyncTaskManager,
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
	return Z_Registration_Info_UClass_UAsyncTaskManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncTaskManager_NoRegister()
{
	return UAsyncTaskManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncTaskManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Core async task manager class\n * Handles creation, execution, and management of async tasks using UE5 task system\n */" },
#endif
		{ "IncludePath", "AsyncTaskManager.h" },
		{ "ModuleRelativePath", "Public/AsyncTaskManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core async task manager class\nHandles creation, execution, and management of async tasks using UE5 task system" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTaskManager_CancelAllAsyncTasks, "CancelAllAsyncTasks" }, // 2539306516
		{ &Z_Construct_UFunction_UAsyncTaskManager_CancelAsyncTask, "CancelAsyncTask" }, // 4255190261
		{ &Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncBatch, "ExecuteAsyncBatch" }, // 4144896649
		{ &Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelay, "ExecuteAsyncDelay" }, // 265108771
		{ &Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithResult, "ExecuteAsyncDelayWithResult" }, // 3376893939
		{ &Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncDelayWithTimeout, "ExecuteAsyncDelayWithTimeout" }, // 3616280579
		{ &Z_Construct_UFunction_UAsyncTaskManager_ExecuteAsyncTaskChain, "ExecuteAsyncTaskChain" }, // 317406982
		{ &Z_Construct_UFunction_UAsyncTaskManager_GetAsyncTaskInfo, "GetAsyncTaskInfo" }, // 3271089312
		{ &Z_Construct_UFunction_UAsyncTaskManager_GetRunningTaskCount, "GetRunningTaskCount" }, // 2821946709
		{ &Z_Construct_UFunction_UAsyncTaskManager_IsAsyncTaskRunning, "IsAsyncTaskRunning" }, // 2592318134
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTaskManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAsyncTaskManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTaskManager_Statics::ClassParams = {
	&UAsyncTaskManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncTaskManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncTaskManager()
{
	if (!Z_Registration_Info_UClass_UAsyncTaskManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTaskManager.OuterSingleton, Z_Construct_UClass_UAsyncTaskManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncTaskManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTaskManager);
UAsyncTaskManager::~UAsyncTaskManager() {}
// ********** End Class UAsyncTaskManager **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h__Script_AsyncHelper_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAsyncTaskHandle::StaticStruct, Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics::NewStructOps, TEXT("AsyncTaskHandle"), &Z_Registration_Info_UScriptStruct_FAsyncTaskHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAsyncTaskHandle), 3541892958U) },
		{ FAsyncTaskInfo::StaticStruct, Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics::NewStructOps, TEXT("AsyncTaskInfo"), &Z_Registration_Info_UScriptStruct_FAsyncTaskInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAsyncTaskInfo), 3835502652U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncTaskManager, UAsyncTaskManager::StaticClass, TEXT("UAsyncTaskManager"), &Z_Registration_Info_UClass_UAsyncTaskManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTaskManager), 1905963488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h__Script_AsyncHelper_382967426(TEXT("/Script/AsyncHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h__Script_AsyncHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h__Script_AsyncHelper_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h__Script_AsyncHelper_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h__Script_AsyncHelper_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
