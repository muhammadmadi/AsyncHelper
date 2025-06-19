// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncTraceBlueprintLibrary.h"
#include "AsyncTaskManager.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncTraceBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTraceBlueprintLibrary();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTraceBlueprintLibrary_NoRegister();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceMissDelegate__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceMissDelegate__DelegateSignature();
ASYNCHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncTaskHandle();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_AsyncHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FAsyncTraceHitDelegate ************************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncTraceHitDelegate_Parms
	{
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AsyncHelper_eventAsyncTraceHitDelegate_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTraceHitDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTraceHitDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncTraceHitDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTraceHitDelegate_DelegateWrapper(const FScriptDelegate& AsyncTraceHitDelegate, FHitResult const& HitResult)
{
	struct _Script_AsyncHelper_eventAsyncTraceHitDelegate_Parms
	{
		FHitResult HitResult;
	};
	_Script_AsyncHelper_eventAsyncTraceHitDelegate_Parms Parms;
	Parms.HitResult=HitResult;
	AsyncTraceHitDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncTraceHitDelegate **************************************************

// ********** Begin Delegate FAsyncTraceMissDelegate ***********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceMissDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceMissDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncTraceMissDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceMissDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceMissDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceMissDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceMissDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncTraceMissDelegate_DelegateWrapper(const FScriptDelegate& AsyncTraceMissDelegate)
{
	AsyncTraceMissDelegate.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncTraceMissDelegate *************************************************

// ********** Begin Delegate FAsyncMultiTraceHitDelegate *******************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncMultiTraceHitDelegate_Parms
	{
		TArray<FHitResult> HitResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AsyncHelper_eventAsyncMultiTraceHitDelegate_Parms, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResults_MetaData), NewProp_HitResults_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::NewProp_HitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::NewProp_HitResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncMultiTraceHitDelegate__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncMultiTraceHitDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncMultiTraceHitDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncMultiTraceHitDelegate_DelegateWrapper(const FScriptDelegate& AsyncMultiTraceHitDelegate, TArray<FHitResult> const& HitResults)
{
	struct _Script_AsyncHelper_eventAsyncMultiTraceHitDelegate_Parms
	{
		TArray<FHitResult> HitResults;
	};
	_Script_AsyncHelper_eventAsyncMultiTraceHitDelegate_Parms Parms;
	Parms.HitResults=HitResults;
	AsyncMultiTraceHitDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncMultiTraceHitDelegate *********************************************

// ********** Begin Delegate FAsyncMultiTraceMissDelegate ******************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceMissDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceMissDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncMultiTraceMissDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceMissDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceMissDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceMissDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceMissDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncMultiTraceMissDelegate_DelegateWrapper(const FScriptDelegate& AsyncMultiTraceMissDelegate)
{
	AsyncMultiTraceMissDelegate.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncMultiTraceMissDelegate ********************************************

// ********** Begin Class UAsyncTraceBlueprintLibrary Function AsyncLineTraceByChannelDelegate *****
struct Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics
{
	struct AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms
	{
		const UObject* WorldContext;
		FVector Start;
		FVector End;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		FScriptDelegate OnHit;
		FScriptDelegate OnMiss;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper|Trace Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async line trace by channel with delegates\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param Start - Start location of the trace\n\x09 * @param End - End location of the trace\n\x09 * @param TraceChannel - Collision channel to trace against\n\x09 * @param OnHit - Delegate called when trace hits something\n\x09 * @param OnMiss - Delegate called when trace misses\n\x09 * @param bTraceComplex - Whether to trace against complex collision\n\x09 * @param ActorsToIgnore - Array of actors to ignore during trace\n\x09 * @param DrawDebugType - Debug drawing type\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async line trace by channel with delegates\n@param WorldContext - World context for the operation\n@param Start - Start location of the trace\n@param End - End location of the trace\n@param TraceChannel - Collision channel to trace against\n@param OnHit - Delegate called when trace hits something\n@param OnMiss - Delegate called when trace misses\n@param bTraceComplex - Whether to trace against complex collision\n@param ActorsToIgnore - Array of actors to ignore during trace\n@param DrawDebugType - Debug drawing type\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMiss_MetaData[] = {
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
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnHit;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMiss;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_OnHit = { "OnHit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms, OnHit), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHit_MetaData), NewProp_OnHit_MetaData) }; // 2222624844
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_OnMiss = { "OnMiss", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms, OnMiss), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceMissDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMiss_MetaData), NewProp_OnMiss_MetaData) }; // 4188419874
void Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms), &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 2070357899
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_OnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_OnMiss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTraceBlueprintLibrary, nullptr, "AsyncLineTraceByChannelDelegate", Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::AsyncTraceBlueprintLibrary_eventAsyncLineTraceByChannelDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTraceBlueprintLibrary::execAsyncLineTraceByChannelDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnHit);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnMiss);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=UAsyncTraceBlueprintLibrary::AsyncLineTraceByChannelDelegate(Z_Param_WorldContext,Z_Param_Start,Z_Param_End,ECollisionChannel(Z_Param_TraceChannel),FAsyncTraceHitDelegate(Z_Param_Out_OnHit),FAsyncTraceMissDelegate(Z_Param_Out_OnMiss),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTraceBlueprintLibrary Function AsyncLineTraceByChannelDelegate *******

// ********** Begin Class UAsyncTraceBlueprintLibrary Function AsyncLineTraceByObjectTypeDelegate **
struct Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics
{
	struct AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms
	{
		const UObject* WorldContext;
		FVector Start;
		FVector End;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		FScriptDelegate OnHit;
		FScriptDelegate OnMiss;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper|Trace Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async line trace by object type with delegates\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param Start - Start location of the trace\n\x09 * @param End - End location of the trace\n\x09 * @param ObjectTypes - Object types to trace against\n\x09 * @param OnHit - Delegate called when trace hits something\n\x09 * @param OnMiss - Delegate called when trace misses\n\x09 * @param bTraceComplex - Whether to trace against complex collision\n\x09 * @param ActorsToIgnore - Array of actors to ignore during trace\n\x09 * @param DrawDebugType - Debug drawing type\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async line trace by object type with delegates\n@param WorldContext - World context for the operation\n@param Start - Start location of the trace\n@param End - End location of the trace\n@param ObjectTypes - Object types to trace against\n@param OnHit - Delegate called when trace hits something\n@param OnMiss - Delegate called when trace misses\n@param bTraceComplex - Whether to trace against complex collision\n@param ActorsToIgnore - Array of actors to ignore during trace\n@param DrawDebugType - Debug drawing type\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMiss_MetaData[] = {
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
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnHit;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMiss;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypes_MetaData), NewProp_ObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_OnHit = { "OnHit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms, OnHit), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHit_MetaData), NewProp_OnHit_MetaData) }; // 2222624844
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_OnMiss = { "OnMiss", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms, OnMiss), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceMissDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMiss_MetaData), NewProp_OnMiss_MetaData) }; // 4188419874
void Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms), &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 2070357899
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_ObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_ObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_OnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_OnMiss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTraceBlueprintLibrary, nullptr, "AsyncLineTraceByObjectTypeDelegate", Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::AsyncTraceBlueprintLibrary_eventAsyncLineTraceByObjectTypeDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTraceBlueprintLibrary::execAsyncLineTraceByObjectTypeDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnHit);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnMiss);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=UAsyncTraceBlueprintLibrary::AsyncLineTraceByObjectTypeDelegate(Z_Param_WorldContext,Z_Param_Start,Z_Param_End,Z_Param_Out_ObjectTypes,FAsyncTraceHitDelegate(Z_Param_Out_OnHit),FAsyncTraceMissDelegate(Z_Param_Out_OnMiss),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTraceBlueprintLibrary Function AsyncLineTraceByObjectTypeDelegate ****

// ********** Begin Class UAsyncTraceBlueprintLibrary Function AsyncMultiLineTraceByChannelDelegate 
struct Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics
{
	struct AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms
	{
		const UObject* WorldContext;
		FVector Start;
		FVector End;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		FScriptDelegate OnHit;
		FScriptDelegate OnMiss;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper|Trace Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async multi line trace by channel with delegates\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param Start - Start location of the trace\n\x09 * @param End - End location of the trace\n\x09 * @param TraceChannel - Collision channel to trace against\n\x09 * @param OnHit - Delegate called when trace hits something\n\x09 * @param OnMiss - Delegate called when trace misses\n\x09 * @param bTraceComplex - Whether to trace against complex collision\n\x09 * @param ActorsToIgnore - Array of actors to ignore during trace\n\x09 * @param DrawDebugType - Debug drawing type\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async multi line trace by channel with delegates\n@param WorldContext - World context for the operation\n@param Start - Start location of the trace\n@param End - End location of the trace\n@param TraceChannel - Collision channel to trace against\n@param OnHit - Delegate called when trace hits something\n@param OnMiss - Delegate called when trace misses\n@param bTraceComplex - Whether to trace against complex collision\n@param ActorsToIgnore - Array of actors to ignore during trace\n@param DrawDebugType - Debug drawing type\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMiss_MetaData[] = {
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
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnHit;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMiss;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_OnHit = { "OnHit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms, OnHit), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceHitDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHit_MetaData), NewProp_OnHit_MetaData) }; // 3469628508
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_OnMiss = { "OnMiss", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms, OnMiss), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiTraceMissDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMiss_MetaData), NewProp_OnMiss_MetaData) }; // 2942869193
void Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms), &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 2070357899
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_OnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_OnMiss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTraceBlueprintLibrary, nullptr, "AsyncMultiLineTraceByChannelDelegate", Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::AsyncTraceBlueprintLibrary_eventAsyncMultiLineTraceByChannelDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTraceBlueprintLibrary::execAsyncMultiLineTraceByChannelDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnHit);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnMiss);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=UAsyncTraceBlueprintLibrary::AsyncMultiLineTraceByChannelDelegate(Z_Param_WorldContext,Z_Param_Start,Z_Param_End,ECollisionChannel(Z_Param_TraceChannel),FAsyncMultiTraceHitDelegate(Z_Param_Out_OnHit),FAsyncMultiTraceMissDelegate(Z_Param_Out_OnMiss),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTraceBlueprintLibrary Function AsyncMultiLineTraceByChannelDelegate **

// ********** Begin Class UAsyncTraceBlueprintLibrary Function AsyncSphereTraceByChannelDelegate ***
struct Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics
{
	struct AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms
	{
		const UObject* WorldContext;
		FVector Start;
		FVector End;
		float Radius;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		FScriptDelegate OnHit;
		FScriptDelegate OnMiss;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
		FString TaskName;
		FAsyncTaskHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper|Trace Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async sphere trace by channel with delegates\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param Start - Start location of the trace\n\x09 * @param End - End location of the trace\n\x09 * @param Radius - Radius of the sphere\n\x09 * @param TraceChannel - Collision channel to trace against\n\x09 * @param OnHit - Delegate called when trace hits something\n\x09 * @param OnMiss - Delegate called when trace misses\n\x09 * @param bTraceComplex - Whether to trace against complex collision\n\x09 * @param ActorsToIgnore - Array of actors to ignore during trace\n\x09 * @param DrawDebugType - Debug drawing type\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return Handle to the created task\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async sphere trace by channel with delegates\n@param WorldContext - World context for the operation\n@param Start - Start location of the trace\n@param End - End location of the trace\n@param Radius - Radius of the sphere\n@param TraceChannel - Collision channel to trace against\n@param OnHit - Delegate called when trace hits something\n@param OnMiss - Delegate called when trace misses\n@param bTraceComplex - Whether to trace against complex collision\n@param ActorsToIgnore - Array of actors to ignore during trace\n@param DrawDebugType - Debug drawing type\n@param TaskName - Optional name for debugging\n@return Handle to the created task" },
#endif
		{ "WorldContext", "WorldContext" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHit_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMiss_MetaData[] = {
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnHit;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMiss;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_OnHit = { "OnHit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms, OnHit), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceHitDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHit_MetaData), NewProp_OnHit_MetaData) }; // 2222624844
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_OnMiss = { "OnMiss", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms, OnMiss), Z_Construct_UDelegateFunction_AsyncHelper_AsyncTraceMissDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMiss_MetaData), NewProp_OnMiss_MetaData) }; // 4188419874
void Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms), &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 2070357899
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms, ReturnValue), Z_Construct_UScriptStruct_FAsyncTaskHandle, METADATA_PARAMS(0, nullptr) }; // 3541892958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_OnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_OnMiss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTraceBlueprintLibrary, nullptr, "AsyncSphereTraceByChannelDelegate", Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::AsyncTraceBlueprintLibrary_eventAsyncSphereTraceByChannelDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTraceBlueprintLibrary::execAsyncSphereTraceByChannelDelegate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnHit);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnMiss);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAsyncTaskHandle*)Z_Param__Result=UAsyncTraceBlueprintLibrary::AsyncSphereTraceByChannelDelegate(Z_Param_WorldContext,Z_Param_Start,Z_Param_End,Z_Param_Radius,ECollisionChannel(Z_Param_TraceChannel),FAsyncTraceHitDelegate(Z_Param_Out_OnHit),FAsyncTraceMissDelegate(Z_Param_Out_OnMiss),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncTraceBlueprintLibrary Function AsyncSphereTraceByChannelDelegate *****

// ********** Begin Class UAsyncTraceBlueprintLibrary Function GetHitActor *************************
struct Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics
{
	struct AsyncTraceBlueprintLibrary_eventGetHitActor_Parms
	{
		FHitResult HitResult;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper|Trace Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the hit actor from a hit result\n\x09 * @param HitResult - The hit result\n\x09 * @return The hit actor, or nullptr if none\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the hit actor from a hit result\n@param HitResult - The hit result\n@return The hit actor, or nullptr if none" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventGetHitActor_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventGetHitActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTraceBlueprintLibrary, nullptr, "GetHitActor", Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::AsyncTraceBlueprintLibrary_eventGetHitActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::AsyncTraceBlueprintLibrary_eventGetHitActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTraceBlueprintLibrary::execGetHitActor)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UAsyncTraceBlueprintLibrary::GetHitActor(Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// ********** End Class UAsyncTraceBlueprintLibrary Function GetHitActor ***************************

// ********** Begin Class UAsyncTraceBlueprintLibrary Function GetHitComponent *********************
struct Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics
{
	struct AsyncTraceBlueprintLibrary_eventGetHitComponent_Parms
	{
		FHitResult HitResult;
		UPrimitiveComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper|Trace Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the hit component from a hit result\n\x09 * @param HitResult - The hit result\n\x09 * @return The hit component, or nullptr if none\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the hit component from a hit result\n@param HitResult - The hit result\n@return The hit component, or nullptr if none" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventGetHitComponent_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventGetHitComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTraceBlueprintLibrary, nullptr, "GetHitComponent", Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::AsyncTraceBlueprintLibrary_eventGetHitComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::AsyncTraceBlueprintLibrary_eventGetHitComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTraceBlueprintLibrary::execGetHitComponent)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimitiveComponent**)Z_Param__Result=UAsyncTraceBlueprintLibrary::GetHitComponent(Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// ********** End Class UAsyncTraceBlueprintLibrary Function GetHitComponent ***********************

// ********** Begin Class UAsyncTraceBlueprintLibrary Function GetHitDistance **********************
struct Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics
{
	struct AsyncTraceBlueprintLibrary_eventGetHitDistance_Parms
	{
		FHitResult HitResult;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper|Trace Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the hit distance from a hit result\n\x09 * @param HitResult - The hit result\n\x09 * @return The hit distance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the hit distance from a hit result\n@param HitResult - The hit result\n@return The hit distance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventGetHitDistance_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventGetHitDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTraceBlueprintLibrary, nullptr, "GetHitDistance", Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::AsyncTraceBlueprintLibrary_eventGetHitDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::AsyncTraceBlueprintLibrary_eventGetHitDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTraceBlueprintLibrary::execGetHitDistance)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAsyncTraceBlueprintLibrary::GetHitDistance(Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// ********** End Class UAsyncTraceBlueprintLibrary Function GetHitDistance ************************

// ********** Begin Class UAsyncTraceBlueprintLibrary Function GetHitLocation **********************
struct Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics
{
	struct AsyncTraceBlueprintLibrary_eventGetHitLocation_Parms
	{
		FHitResult HitResult;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper|Trace Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the hit location from a hit result\n\x09 * @param HitResult - The hit result\n\x09 * @return The hit location\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the hit location from a hit result\n@param HitResult - The hit result\n@return The hit location" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventGetHitLocation_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventGetHitLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTraceBlueprintLibrary, nullptr, "GetHitLocation", Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::AsyncTraceBlueprintLibrary_eventGetHitLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::AsyncTraceBlueprintLibrary_eventGetHitLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTraceBlueprintLibrary::execGetHitLocation)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UAsyncTraceBlueprintLibrary::GetHitLocation(Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// ********** End Class UAsyncTraceBlueprintLibrary Function GetHitLocation ************************

// ********** Begin Class UAsyncTraceBlueprintLibrary Function GetHitNormal ************************
struct Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics
{
	struct AsyncTraceBlueprintLibrary_eventGetHitNormal_Parms
	{
		FHitResult HitResult;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper|Trace Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the hit normal from a hit result\n\x09 * @param HitResult - The hit result\n\x09 * @return The hit normal\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the hit normal from a hit result\n@param HitResult - The hit result\n@return The hit normal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventGetHitNormal_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventGetHitNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTraceBlueprintLibrary, nullptr, "GetHitNormal", Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::AsyncTraceBlueprintLibrary_eventGetHitNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::AsyncTraceBlueprintLibrary_eventGetHitNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTraceBlueprintLibrary::execGetHitNormal)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UAsyncTraceBlueprintLibrary::GetHitNormal(Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// ********** End Class UAsyncTraceBlueprintLibrary Function GetHitNormal **************************

// ********** Begin Class UAsyncTraceBlueprintLibrary Function WasActorHit *************************
struct Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics
{
	struct AsyncTraceBlueprintLibrary_eventWasActorHit_Parms
	{
		FHitResult HitResult;
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper|Trace Library" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if an actor was hit in the trace result\n\x09 * @param HitResult - The hit result to check\n\x09 * @param Actor - The actor to check for\n\x09 * @return True if the actor was hit\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if an actor was hit in the trace result\n@param HitResult - The hit result to check\n@param Actor - The actor to check for\n@return True if the actor was hit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventWasActorHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncTraceBlueprintLibrary_eventWasActorHit_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AsyncTraceBlueprintLibrary_eventWasActorHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncTraceBlueprintLibrary_eventWasActorHit_Parms), &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncTraceBlueprintLibrary, nullptr, "WasActorHit", Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::AsyncTraceBlueprintLibrary_eventWasActorHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::AsyncTraceBlueprintLibrary_eventWasActorHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncTraceBlueprintLibrary::execWasActorHit)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAsyncTraceBlueprintLibrary::WasActorHit(Z_Param_Out_HitResult,Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UAsyncTraceBlueprintLibrary Function WasActorHit ***************************

// ********** Begin Class UAsyncTraceBlueprintLibrary **********************************************
void UAsyncTraceBlueprintLibrary::StaticRegisterNativesUAsyncTraceBlueprintLibrary()
{
	UClass* Class = UAsyncTraceBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncLineTraceByChannelDelegate", &UAsyncTraceBlueprintLibrary::execAsyncLineTraceByChannelDelegate },
		{ "AsyncLineTraceByObjectTypeDelegate", &UAsyncTraceBlueprintLibrary::execAsyncLineTraceByObjectTypeDelegate },
		{ "AsyncMultiLineTraceByChannelDelegate", &UAsyncTraceBlueprintLibrary::execAsyncMultiLineTraceByChannelDelegate },
		{ "AsyncSphereTraceByChannelDelegate", &UAsyncTraceBlueprintLibrary::execAsyncSphereTraceByChannelDelegate },
		{ "GetHitActor", &UAsyncTraceBlueprintLibrary::execGetHitActor },
		{ "GetHitComponent", &UAsyncTraceBlueprintLibrary::execGetHitComponent },
		{ "GetHitDistance", &UAsyncTraceBlueprintLibrary::execGetHitDistance },
		{ "GetHitLocation", &UAsyncTraceBlueprintLibrary::execGetHitLocation },
		{ "GetHitNormal", &UAsyncTraceBlueprintLibrary::execGetHitNormal },
		{ "WasActorHit", &UAsyncTraceBlueprintLibrary::execWasActorHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncTraceBlueprintLibrary;
UClass* UAsyncTraceBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UAsyncTraceBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UAsyncTraceBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncTraceBlueprintLibrary"),
			Z_Registration_Info_UClass_UAsyncTraceBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUAsyncTraceBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UAsyncTraceBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncTraceBlueprintLibrary_NoRegister()
{
	return UAsyncTraceBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncTraceBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint Function Library for Async Trace operations\n * Provides easy access to async tracing functionality from Blueprints\n */" },
#endif
		{ "IncludePath", "AsyncTraceBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AsyncTraceBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Function Library for Async Trace operations\nProvides easy access to async tracing functionality from Blueprints" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByChannelDelegate, "AsyncLineTraceByChannelDelegate" }, // 4208288842
		{ &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncLineTraceByObjectTypeDelegate, "AsyncLineTraceByObjectTypeDelegate" }, // 2268755763
		{ &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncMultiLineTraceByChannelDelegate, "AsyncMultiLineTraceByChannelDelegate" }, // 1811924600
		{ &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_AsyncSphereTraceByChannelDelegate, "AsyncSphereTraceByChannelDelegate" }, // 3595799174
		{ &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitActor, "GetHitActor" }, // 4113282077
		{ &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitComponent, "GetHitComponent" }, // 65494852
		{ &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitDistance, "GetHitDistance" }, // 738268982
		{ &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitLocation, "GetHitLocation" }, // 1210590575
		{ &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_GetHitNormal, "GetHitNormal" }, // 880794134
		{ &Z_Construct_UFunction_UAsyncTraceBlueprintLibrary_WasActorHit, "WasActorHit" }, // 639568707
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTraceBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAsyncTraceBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTraceBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTraceBlueprintLibrary_Statics::ClassParams = {
	&UAsyncTraceBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTraceBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncTraceBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncTraceBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UAsyncTraceBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTraceBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAsyncTraceBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncTraceBlueprintLibrary.OuterSingleton;
}
UAsyncTraceBlueprintLibrary::UAsyncTraceBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTraceBlueprintLibrary);
UAsyncTraceBlueprintLibrary::~UAsyncTraceBlueprintLibrary() {}
// ********** End Class UAsyncTraceBlueprintLibrary ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h__Script_AsyncHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncTraceBlueprintLibrary, UAsyncTraceBlueprintLibrary::StaticClass, TEXT("UAsyncTraceBlueprintLibrary"), &Z_Registration_Info_UClass_UAsyncTraceBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTraceBlueprintLibrary), 2825728703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h__Script_AsyncHelper_284655048(TEXT("/Script/AsyncHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h__Script_AsyncHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h__Script_AsyncHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
