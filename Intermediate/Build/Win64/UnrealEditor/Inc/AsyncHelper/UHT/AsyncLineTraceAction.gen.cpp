// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncLineTraceAction.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncLineTraceAction() {}

// ********** Begin Cross Module References ********************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncLineTraceAction();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncLineTraceAction_NoRegister();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCancelled__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceFailed__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCancelled__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceFailed__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_AsyncHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAsyncLineTraceCompleted **********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncLineTraceCompleted_Parms
	{
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AsyncHelper_eventAsyncLineTraceCompleted_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncLineTraceCompleted__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncLineTraceCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncLineTraceCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncLineTraceCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncLineTraceCompleted, FHitResult const& HitResult)
{
	struct _Script_AsyncHelper_eventAsyncLineTraceCompleted_Parms
	{
		FHitResult HitResult;
	};
	_Script_AsyncHelper_eventAsyncLineTraceCompleted_Parms Parms;
	Parms.HitResult=HitResult;
	AsyncLineTraceCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncLineTraceCompleted ************************************************

// ********** Begin Delegate FAsyncLineTraceFailed *************************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceFailed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceFailed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncLineTraceFailed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceFailed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncLineTraceFailed_DelegateWrapper(const FMulticastScriptDelegate& AsyncLineTraceFailed)
{
	AsyncLineTraceFailed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncLineTraceFailed ***************************************************

// ********** Begin Delegate FAsyncLineTraceCancelled **********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCancelled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCancelled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncLineTraceCancelled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCancelled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCancelled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCancelled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCancelled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncLineTraceCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncLineTraceCancelled)
{
	AsyncLineTraceCancelled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncLineTraceCancelled ************************************************

// ********** Begin Delegate FAsyncMultiLineTraceCompleted *****************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncMultiLineTraceCompleted_Parms
	{
		TArray<FHitResult> HitResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AsyncHelper_eventAsyncMultiLineTraceCompleted_Parms, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResults_MetaData), NewProp_HitResults_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::NewProp_HitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::NewProp_HitResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncMultiLineTraceCompleted__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncMultiLineTraceCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncMultiLineTraceCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncMultiLineTraceCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiLineTraceCompleted, TArray<FHitResult> const& HitResults)
{
	struct _Script_AsyncHelper_eventAsyncMultiLineTraceCompleted_Parms
	{
		TArray<FHitResult> HitResults;
	};
	_Script_AsyncHelper_eventAsyncMultiLineTraceCompleted_Parms Parms;
	Parms.HitResults=HitResults;
	AsyncMultiLineTraceCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncMultiLineTraceCompleted *******************************************

// ********** Begin Delegate FAsyncMultiLineTraceFailed ********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceFailed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceFailed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncMultiLineTraceFailed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceFailed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncMultiLineTraceFailed_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiLineTraceFailed)
{
	AsyncMultiLineTraceFailed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncMultiLineTraceFailed **********************************************

// ********** Begin Delegate FAsyncMultiLineTraceCancelled *****************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCancelled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCancelled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncMultiLineTraceCancelled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCancelled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCancelled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCancelled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCancelled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncMultiLineTraceCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiLineTraceCancelled)
{
	AsyncMultiLineTraceCancelled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncMultiLineTraceCancelled *******************************************

// ********** Begin Class UAsyncLineTraceAction Function AsyncLineTraceByChannel *******************
struct Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics
{
	struct AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms
	{
		const UObject* WorldContext;
		FVector Start;
		FVector End;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
		FString TaskName;
		UAsyncLineTraceAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Async Helper|Line Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async line trace by channel\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param Start - Start location of the trace\n\x09 * @param End - End location of the trace\n\x09 * @param TraceChannel - Collision channel to trace against\n\x09 * @param bTraceComplex - Whether to trace against complex collision\n\x09 * @param ActorsToIgnore - Array of actors to ignore during trace\n\x09 * @param DrawDebugType - Debug drawing type\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return The async action instance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async line trace by channel\n@param WorldContext - World context for the operation\n@param Start - Start location of the trace\n@param End - End location of the trace\n@param TraceChannel - Collision channel to trace against\n@param bTraceComplex - Whether to trace against complex collision\n@param ActorsToIgnore - Array of actors to ignore during trace\n@param DrawDebugType - Debug drawing type\n@param TaskName - Optional name for debugging\n@return The async action instance" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms), &Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 2070357899
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms, ReturnValue), Z_Construct_UClass_UAsyncLineTraceAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLineTraceAction, nullptr, "AsyncLineTraceByChannel", Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::AsyncLineTraceAction_eventAsyncLineTraceByChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLineTraceAction::execAsyncLineTraceByChannel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncLineTraceAction**)Z_Param__Result=UAsyncLineTraceAction::AsyncLineTraceByChannel(Z_Param_WorldContext,Z_Param_Start,Z_Param_End,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncLineTraceAction Function AsyncLineTraceByChannel *********************

// ********** Begin Class UAsyncLineTraceAction Function AsyncLineTraceByObjectType ****************
struct Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics
{
	struct AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms
	{
		const UObject* WorldContext;
		FVector Start;
		FVector End;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
		FString TaskName;
		UAsyncLineTraceAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Async Helper|Line Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async line trace by object type\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param Start - Start location of the trace\n\x09 * @param End - End location of the trace\n\x09 * @param ObjectTypes - Object types to trace against\n\x09 * @param bTraceComplex - Whether to trace against complex collision\n\x09 * @param ActorsToIgnore - Array of actors to ignore during trace\n\x09 * @param DrawDebugType - Debug drawing type\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return The async action instance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async line trace by object type\n@param WorldContext - World context for the operation\n@param Start - Start location of the trace\n@param End - End location of the trace\n@param ObjectTypes - Object types to trace against\n@param bTraceComplex - Whether to trace against complex collision\n@param ActorsToIgnore - Array of actors to ignore during trace\n@param DrawDebugType - Debug drawing type\n@param TaskName - Optional name for debugging\n@return The async action instance" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypes_MetaData), NewProp_ObjectTypes_MetaData) }; // 1798967895
void Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms), &Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 2070357899
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms, ReturnValue), Z_Construct_UClass_UAsyncLineTraceAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_ObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_ObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLineTraceAction, nullptr, "AsyncLineTraceByObjectType", Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::AsyncLineTraceAction_eventAsyncLineTraceByObjectType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLineTraceAction::execAsyncLineTraceByObjectType)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncLineTraceAction**)Z_Param__Result=UAsyncLineTraceAction::AsyncLineTraceByObjectType(Z_Param_WorldContext,Z_Param_Start,Z_Param_End,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncLineTraceAction Function AsyncLineTraceByObjectType ******************

// ********** Begin Class UAsyncLineTraceAction Function AsyncMultiLineTraceByChannel **************
struct Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics
{
	struct AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms
	{
		const UObject* WorldContext;
		FVector Start;
		FVector End;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
		FString TaskName;
		UAsyncLineTraceAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Async Helper|Line Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async multi line trace by channel\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param Start - Start location of the trace\n\x09 * @param End - End location of the trace\n\x09 * @param TraceChannel - Collision channel to trace against\n\x09 * @param bTraceComplex - Whether to trace against complex collision\n\x09 * @param ActorsToIgnore - Array of actors to ignore during trace\n\x09 * @param DrawDebugType - Debug drawing type\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return The async action instance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async multi line trace by channel\n@param WorldContext - World context for the operation\n@param Start - Start location of the trace\n@param End - End location of the trace\n@param TraceChannel - Collision channel to trace against\n@param bTraceComplex - Whether to trace against complex collision\n@param ActorsToIgnore - Array of actors to ignore during trace\n@param DrawDebugType - Debug drawing type\n@param TaskName - Optional name for debugging\n@return The async action instance" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms), &Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 2070357899
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms, ReturnValue), Z_Construct_UClass_UAsyncLineTraceAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLineTraceAction, nullptr, "AsyncMultiLineTraceByChannel", Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::AsyncLineTraceAction_eventAsyncMultiLineTraceByChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLineTraceAction::execAsyncMultiLineTraceByChannel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncLineTraceAction**)Z_Param__Result=UAsyncLineTraceAction::AsyncMultiLineTraceByChannel(Z_Param_WorldContext,Z_Param_Start,Z_Param_End,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncLineTraceAction Function AsyncMultiLineTraceByChannel ****************

// ********** Begin Class UAsyncLineTraceAction Function Cancel ************************************
struct Z_Construct_UFunction_UAsyncLineTraceAction_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel the async operation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel the async operation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncLineTraceAction_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncLineTraceAction, nullptr, "Cancel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncLineTraceAction_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncLineTraceAction_Cancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncLineTraceAction_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncLineTraceAction_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncLineTraceAction::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// ********** End Class UAsyncLineTraceAction Function Cancel **************************************

// ********** Begin Class UAsyncLineTraceAction ****************************************************
void UAsyncLineTraceAction::StaticRegisterNativesUAsyncLineTraceAction()
{
	UClass* Class = UAsyncLineTraceAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncLineTraceByChannel", &UAsyncLineTraceAction::execAsyncLineTraceByChannel },
		{ "AsyncLineTraceByObjectType", &UAsyncLineTraceAction::execAsyncLineTraceByObjectType },
		{ "AsyncMultiLineTraceByChannel", &UAsyncLineTraceAction::execAsyncMultiLineTraceByChannel },
		{ "Cancel", &UAsyncLineTraceAction::execCancel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncLineTraceAction;
UClass* UAsyncLineTraceAction::GetPrivateStaticClass()
{
	using TClass = UAsyncLineTraceAction;
	if (!Z_Registration_Info_UClass_UAsyncLineTraceAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncLineTraceAction"),
			Z_Registration_Info_UClass_UAsyncLineTraceAction.InnerSingleton,
			StaticRegisterNativesUAsyncLineTraceAction,
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
	return Z_Registration_Info_UClass_UAsyncLineTraceAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncLineTraceAction_NoRegister()
{
	return UAsyncLineTraceAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncLineTraceAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint Async Action for executing line traces asynchronously\n * Provides non-blocking line trace operations with hit result callbacks\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AsyncLineTraceAction.h" },
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Async Action for executing line traces asynchronously\nProvides non-blocking line trace operations with hit result callbacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Single line trace events\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single line trace events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMiss_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMultiHit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multi line trace events\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multi line trace events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMultiMiss_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMultiCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncLineTraceAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMiss;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMultiHit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMultiMiss;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMultiCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByChannel, "AsyncLineTraceByChannel" }, // 1981528056
		{ &Z_Construct_UFunction_UAsyncLineTraceAction_AsyncLineTraceByObjectType, "AsyncLineTraceByObjectType" }, // 2498591862
		{ &Z_Construct_UFunction_UAsyncLineTraceAction_AsyncMultiLineTraceByChannel, "AsyncMultiLineTraceByChannel" }, // 1015958619
		{ &Z_Construct_UFunction_UAsyncLineTraceAction_Cancel, "Cancel" }, // 1387529159
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncLineTraceAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnHit = { "OnHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLineTraceAction, OnHit), Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHit_MetaData), NewProp_OnHit_MetaData) }; // 533205717
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnMiss = { "OnMiss", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLineTraceAction, OnMiss), Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMiss_MetaData), NewProp_OnMiss_MetaData) }; // 4249963544
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLineTraceAction, OnCancelled), Z_Construct_UDelegateFunction_AsyncHelper_AsyncLineTraceCancelled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 1915193188
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnMultiHit = { "OnMultiHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLineTraceAction, OnMultiHit), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMultiHit_MetaData), NewProp_OnMultiHit_MetaData) }; // 3784314080
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnMultiMiss = { "OnMultiMiss", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLineTraceAction, OnMultiMiss), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMultiMiss_MetaData), NewProp_OnMultiMiss_MetaData) }; // 2503682101
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnMultiCancelled = { "OnMultiCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncLineTraceAction, OnMultiCancelled), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiLineTraceCancelled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMultiCancelled_MetaData), NewProp_OnMultiCancelled_MetaData) }; // 976185200
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncLineTraceAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnMiss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnMultiHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnMultiMiss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncLineTraceAction_Statics::NewProp_OnMultiCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLineTraceAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncLineTraceAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLineTraceAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncLineTraceAction_Statics::ClassParams = {
	&UAsyncLineTraceAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncLineTraceAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLineTraceAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncLineTraceAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncLineTraceAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncLineTraceAction()
{
	if (!Z_Registration_Info_UClass_UAsyncLineTraceAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncLineTraceAction.OuterSingleton, Z_Construct_UClass_UAsyncLineTraceAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncLineTraceAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncLineTraceAction);
UAsyncLineTraceAction::~UAsyncLineTraceAction() {}
// ********** End Class UAsyncLineTraceAction ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h__Script_AsyncHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncLineTraceAction, UAsyncLineTraceAction::StaticClass, TEXT("UAsyncLineTraceAction"), &Z_Registration_Info_UClass_UAsyncLineTraceAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncLineTraceAction), 1152277966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h__Script_AsyncHelper_3268007142(TEXT("/Script/AsyncHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h__Script_AsyncHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h__Script_AsyncHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
