// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncSphereTraceAction.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncSphereTraceAction() {}

// ********** Begin Cross Module References ********************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncSphereTraceAction();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncSphereTraceAction_NoRegister();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCancelled__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceFailed__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCancelled__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature();
ASYNCHELPER_API UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceFailed__DelegateSignature();
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

// ********** Begin Delegate FAsyncSphereTraceCompleted ********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncSphereTraceCompleted_Parms
	{
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AsyncHelper_eventAsyncSphereTraceCompleted_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncSphereTraceCompleted__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncSphereTraceCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncSphereTraceCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncSphereTraceCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncSphereTraceCompleted, FHitResult const& HitResult)
{
	struct _Script_AsyncHelper_eventAsyncSphereTraceCompleted_Parms
	{
		FHitResult HitResult;
	};
	_Script_AsyncHelper_eventAsyncSphereTraceCompleted_Parms Parms;
	Parms.HitResult=HitResult;
	AsyncSphereTraceCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncSphereTraceCompleted **********************************************

// ********** Begin Delegate FAsyncSphereTraceFailed ***********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceFailed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceFailed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncSphereTraceFailed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceFailed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncSphereTraceFailed_DelegateWrapper(const FMulticastScriptDelegate& AsyncSphereTraceFailed)
{
	AsyncSphereTraceFailed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncSphereTraceFailed *************************************************

// ********** Begin Delegate FAsyncSphereTraceCancelled ********************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCancelled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCancelled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncSphereTraceCancelled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCancelled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCancelled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCancelled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCancelled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncSphereTraceCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncSphereTraceCancelled)
{
	AsyncSphereTraceCancelled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncSphereTraceCancelled **********************************************

// ********** Begin Delegate FAsyncMultiSphereTraceCompleted ***************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics
{
	struct _Script_AsyncHelper_eventAsyncMultiSphereTraceCompleted_Parms
	{
		TArray<FHitResult> HitResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::NewProp_HitResults_Inner = { "HitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::NewProp_HitResults = { "HitResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AsyncHelper_eventAsyncMultiSphereTraceCompleted_Parms, HitResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResults_MetaData), NewProp_HitResults_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::NewProp_HitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::NewProp_HitResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncMultiSphereTraceCompleted__DelegateSignature", Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncMultiSphereTraceCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::_Script_AsyncHelper_eventAsyncMultiSphereTraceCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncMultiSphereTraceCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiSphereTraceCompleted, TArray<FHitResult> const& HitResults)
{
	struct _Script_AsyncHelper_eventAsyncMultiSphereTraceCompleted_Parms
	{
		TArray<FHitResult> HitResults;
	};
	_Script_AsyncHelper_eventAsyncMultiSphereTraceCompleted_Parms Parms;
	Parms.HitResults=HitResults;
	AsyncMultiSphereTraceCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FAsyncMultiSphereTraceCompleted *****************************************

// ********** Begin Delegate FAsyncMultiSphereTraceFailed ******************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceFailed__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceFailed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncMultiSphereTraceFailed__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceFailed__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncMultiSphereTraceFailed_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiSphereTraceFailed)
{
	AsyncMultiSphereTraceFailed.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncMultiSphereTraceFailed ********************************************

// ********** Begin Delegate FAsyncMultiSphereTraceCancelled ***************************************
struct Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCancelled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCancelled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AsyncHelper, nullptr, "AsyncMultiSphereTraceCancelled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCancelled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCancelled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCancelled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCancelled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAsyncMultiSphereTraceCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiSphereTraceCancelled)
{
	AsyncMultiSphereTraceCancelled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FAsyncMultiSphereTraceCancelled *****************************************

// ********** Begin Class UAsyncSphereTraceAction Function AsyncMultiSphereTraceByChannel **********
struct Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics
{
	struct AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms
	{
		const UObject* WorldContext;
		FVector Start;
		FVector End;
		float Radius;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
		FString TaskName;
		UAsyncSphereTraceAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Async Helper|Sphere Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async multi sphere trace by channel\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param Start - Start location of the trace\n\x09 * @param End - End location of the trace\n\x09 * @param Radius - Radius of the sphere\n\x09 * @param TraceChannel - Collision channel to trace against\n\x09 * @param bTraceComplex - Whether to trace against complex collision\n\x09 * @param ActorsToIgnore - Array of actors to ignore during trace\n\x09 * @param DrawDebugType - Debug drawing type\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return The async action instance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async multi sphere trace by channel\n@param WorldContext - World context for the operation\n@param Start - Start location of the trace\n@param End - End location of the trace\n@param Radius - Radius of the sphere\n@param TraceChannel - Collision channel to trace against\n@param bTraceComplex - Whether to trace against complex collision\n@param ActorsToIgnore - Array of actors to ignore during trace\n@param DrawDebugType - Debug drawing type\n@param TaskName - Optional name for debugging\n@return The async action instance" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms), &Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 2070357899
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms, ReturnValue), Z_Construct_UClass_UAsyncSphereTraceAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncSphereTraceAction, nullptr, "AsyncMultiSphereTraceByChannel", Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::AsyncSphereTraceAction_eventAsyncMultiSphereTraceByChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncSphereTraceAction::execAsyncMultiSphereTraceByChannel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncSphereTraceAction**)Z_Param__Result=UAsyncSphereTraceAction::AsyncMultiSphereTraceByChannel(Z_Param_WorldContext,Z_Param_Start,Z_Param_End,Z_Param_Radius,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncSphereTraceAction Function AsyncMultiSphereTraceByChannel ************

// ********** Begin Class UAsyncSphereTraceAction Function AsyncSphereTraceByChannel ***************
struct Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics
{
	struct AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms
	{
		const UObject* WorldContext;
		FVector Start;
		FVector End;
		float Radius;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
		FString TaskName;
		UAsyncSphereTraceAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Async Helper|Sphere Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async sphere trace by channel\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param Start - Start location of the trace\n\x09 * @param End - End location of the trace\n\x09 * @param Radius - Radius of the sphere\n\x09 * @param TraceChannel - Collision channel to trace against\n\x09 * @param bTraceComplex - Whether to trace against complex collision\n\x09 * @param ActorsToIgnore - Array of actors to ignore during trace\n\x09 * @param DrawDebugType - Debug drawing type\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return The async action instance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async sphere trace by channel\n@param WorldContext - World context for the operation\n@param Start - Start location of the trace\n@param End - End location of the trace\n@param Radius - Radius of the sphere\n@param TraceChannel - Collision channel to trace against\n@param bTraceComplex - Whether to trace against complex collision\n@param ActorsToIgnore - Array of actors to ignore during trace\n@param DrawDebugType - Debug drawing type\n@param TaskName - Optional name for debugging\n@return The async action instance" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms), &Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 2070357899
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms, ReturnValue), Z_Construct_UClass_UAsyncSphereTraceAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncSphereTraceAction, nullptr, "AsyncSphereTraceByChannel", Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::AsyncSphereTraceAction_eventAsyncSphereTraceByChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncSphereTraceAction::execAsyncSphereTraceByChannel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncSphereTraceAction**)Z_Param__Result=UAsyncSphereTraceAction::AsyncSphereTraceByChannel(Z_Param_WorldContext,Z_Param_Start,Z_Param_End,Z_Param_Radius,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncSphereTraceAction Function AsyncSphereTraceByChannel *****************

// ********** Begin Class UAsyncSphereTraceAction Function AsyncSphereTraceByObjectType ************
struct Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics
{
	struct AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms
	{
		const UObject* WorldContext;
		FVector Start;
		FVector End;
		float Radius;
		TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
		bool bTraceComplex;
		TArray<AActor*> ActorsToIgnore;
		TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
		FString TaskName;
		UAsyncSphereTraceAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Async Helper|Sphere Trace" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Execute an async sphere trace by object type\n\x09 * @param WorldContext - World context for the operation\n\x09 * @param Start - Start location of the trace\n\x09 * @param End - End location of the trace\n\x09 * @param Radius - Radius of the sphere\n\x09 * @param ObjectTypes - Object types to trace against\n\x09 * @param bTraceComplex - Whether to trace against complex collision\n\x09 * @param ActorsToIgnore - Array of actors to ignore during trace\n\x09 * @param DrawDebugType - Debug drawing type\n\x09 * @param TaskName - Optional name for debugging\n\x09 * @return The async action instance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute an async sphere trace by object type\n@param WorldContext - World context for the operation\n@param Start - Start location of the trace\n@param End - End location of the trace\n@param Radius - Radius of the sphere\n@param ObjectTypes - Object types to trace against\n@param bTraceComplex - Whether to trace against complex collision\n@param ActorsToIgnore - Array of actors to ignore during trace\n@param DrawDebugType - Debug drawing type\n@param TaskName - Optional name for debugging\n@return The async action instance" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypes_MetaData), NewProp_ObjectTypes_MetaData) }; // 1798967895
void Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms), &Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(0, nullptr) }; // 2070357899
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms, ReturnValue), Z_Construct_UClass_UAsyncSphereTraceAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_ObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_ObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncSphereTraceAction, nullptr, "AsyncSphereTraceByObjectType", Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::AsyncSphereTraceAction_eventAsyncSphereTraceByObjectType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncSphereTraceAction::execAsyncSphereTraceByObjectType)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
	P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
	P_GET_PROPERTY(FStrProperty,Z_Param_TaskName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncSphereTraceAction**)Z_Param__Result=UAsyncSphereTraceAction::AsyncSphereTraceByObjectType(Z_Param_WorldContext,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TaskName);
	P_NATIVE_END;
}
// ********** End Class UAsyncSphereTraceAction Function AsyncSphereTraceByObjectType **************

// ********** Begin Class UAsyncSphereTraceAction Function Cancel **********************************
struct Z_Construct_UFunction_UAsyncSphereTraceAction_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Helper" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cancel the async operation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancel the async operation" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncSphereTraceAction_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncSphereTraceAction, nullptr, "Cancel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncSphereTraceAction_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncSphereTraceAction_Cancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncSphereTraceAction_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncSphereTraceAction_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncSphereTraceAction::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// ********** End Class UAsyncSphereTraceAction Function Cancel ************************************

// ********** Begin Class UAsyncSphereTraceAction Function HandleTraceCompleted ********************
struct Z_Construct_UFunction_UAsyncSphereTraceAction_HandleTraceCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Internal callbacks\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncSphereTraceAction_HandleTraceCompleted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncSphereTraceAction, nullptr, "HandleTraceCompleted", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncSphereTraceAction_HandleTraceCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncSphereTraceAction_HandleTraceCompleted_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAsyncSphereTraceAction_HandleTraceCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncSphereTraceAction_HandleTraceCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncSphereTraceAction::execHandleTraceCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTraceCompleted();
	P_NATIVE_END;
}
// ********** End Class UAsyncSphereTraceAction Function HandleTraceCompleted **********************

// ********** Begin Class UAsyncSphereTraceAction **************************************************
void UAsyncSphereTraceAction::StaticRegisterNativesUAsyncSphereTraceAction()
{
	UClass* Class = UAsyncSphereTraceAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncMultiSphereTraceByChannel", &UAsyncSphereTraceAction::execAsyncMultiSphereTraceByChannel },
		{ "AsyncSphereTraceByChannel", &UAsyncSphereTraceAction::execAsyncSphereTraceByChannel },
		{ "AsyncSphereTraceByObjectType", &UAsyncSphereTraceAction::execAsyncSphereTraceByObjectType },
		{ "Cancel", &UAsyncSphereTraceAction::execCancel },
		{ "HandleTraceCompleted", &UAsyncSphereTraceAction::execHandleTraceCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncSphereTraceAction;
UClass* UAsyncSphereTraceAction::GetPrivateStaticClass()
{
	using TClass = UAsyncSphereTraceAction;
	if (!Z_Registration_Info_UClass_UAsyncSphereTraceAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncSphereTraceAction"),
			Z_Registration_Info_UClass_UAsyncSphereTraceAction.InnerSingleton,
			StaticRegisterNativesUAsyncSphereTraceAction,
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
	return Z_Registration_Info_UClass_UAsyncSphereTraceAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncSphereTraceAction_NoRegister()
{
	return UAsyncSphereTraceAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncSphereTraceAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint Async Action for executing sphere traces asynchronously\n * Provides non-blocking sphere trace operations with hit result callbacks\n */" },
#endif
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AsyncSphereTraceAction.h" },
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Async Action for executing sphere traces asynchronously\nProvides non-blocking sphere trace operations with hit result callbacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Single sphere trace events\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single sphere trace events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMiss_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMultiHit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multi sphere trace events\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multi sphere trace events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMultiMiss_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMultiCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncSphereTraceAction.h" },
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
		{ &Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncMultiSphereTraceByChannel, "AsyncMultiSphereTraceByChannel" }, // 3715725136
		{ &Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByChannel, "AsyncSphereTraceByChannel" }, // 3361964799
		{ &Z_Construct_UFunction_UAsyncSphereTraceAction_AsyncSphereTraceByObjectType, "AsyncSphereTraceByObjectType" }, // 1427211162
		{ &Z_Construct_UFunction_UAsyncSphereTraceAction_Cancel, "Cancel" }, // 4024840787
		{ &Z_Construct_UFunction_UAsyncSphereTraceAction_HandleTraceCompleted, "HandleTraceCompleted" }, // 43011021
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncSphereTraceAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnHit = { "OnHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncSphereTraceAction, OnHit), Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHit_MetaData), NewProp_OnHit_MetaData) }; // 3055924219
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnMiss = { "OnMiss", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncSphereTraceAction, OnMiss), Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMiss_MetaData), NewProp_OnMiss_MetaData) }; // 3281693613
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncSphereTraceAction, OnCancelled), Z_Construct_UDelegateFunction_AsyncHelper_AsyncSphereTraceCancelled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 3902329432
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnMultiHit = { "OnMultiHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncSphereTraceAction, OnMultiHit), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMultiHit_MetaData), NewProp_OnMultiHit_MetaData) }; // 1757523573
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnMultiMiss = { "OnMultiMiss", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncSphereTraceAction, OnMultiMiss), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMultiMiss_MetaData), NewProp_OnMultiMiss_MetaData) }; // 3192877347
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnMultiCancelled = { "OnMultiCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncSphereTraceAction, OnMultiCancelled), Z_Construct_UDelegateFunction_AsyncHelper_AsyncMultiSphereTraceCancelled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMultiCancelled_MetaData), NewProp_OnMultiCancelled_MetaData) }; // 1061980242
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncSphereTraceAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnMiss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnMultiHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnMultiMiss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncSphereTraceAction_Statics::NewProp_OnMultiCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncSphereTraceAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncSphereTraceAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncSphereTraceAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncSphereTraceAction_Statics::ClassParams = {
	&UAsyncSphereTraceAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncSphereTraceAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncSphereTraceAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncSphereTraceAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncSphereTraceAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncSphereTraceAction()
{
	if (!Z_Registration_Info_UClass_UAsyncSphereTraceAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncSphereTraceAction.OuterSingleton, Z_Construct_UClass_UAsyncSphereTraceAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncSphereTraceAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncSphereTraceAction);
UAsyncSphereTraceAction::~UAsyncSphereTraceAction() {}
// ********** End Class UAsyncSphereTraceAction ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h__Script_AsyncHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncSphereTraceAction, UAsyncSphereTraceAction::StaticClass, TEXT("UAsyncSphereTraceAction"), &Z_Registration_Info_UClass_UAsyncSphereTraceAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncSphereTraceAction), 2855069478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h__Script_AsyncHelper_683237865(TEXT("/Script/AsyncHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h__Script_AsyncHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h__Script_AsyncHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
