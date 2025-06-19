// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncHelperBlueprintLibrary.h"

#ifdef ASYNCHELPER_AsyncHelperBlueprintLibrary_generated_h
#error "AsyncHelperBlueprintLibrary.generated.h already included, missing '#pragma once' in AsyncHelperBlueprintLibrary.h"
#endif
#define ASYNCHELPER_AsyncHelperBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
struct FAsyncTaskHandle;
struct FAsyncTaskInfo;

// ********** Begin Class UAsyncHelperBlueprintLibrary *********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteAsyncBatch); \
	DECLARE_FUNCTION(execExecuteAsyncDelayWithTimeout); \
	DECLARE_FUNCTION(execExecuteAsyncTaskChain); \
	DECLARE_FUNCTION(execIsAsyncHelperAvailable); \
	DECLARE_FUNCTION(execExecuteSimpleDelay); \
	DECLARE_FUNCTION(execGetPerformanceStats); \
	DECLARE_FUNCTION(execExecuteTaskChain); \
	DECLARE_FUNCTION(execExecuteParallelTasks); \
	DECLARE_FUNCTION(execGetRunningTaskCount); \
	DECLARE_FUNCTION(execCancelAllAsyncTasks); \
	DECLARE_FUNCTION(execGetAsyncTaskInfo); \
	DECLARE_FUNCTION(execIsAsyncTaskRunning); \
	DECLARE_FUNCTION(execCancelAsyncTask); \
	DECLARE_FUNCTION(execExecuteAsyncDelayWithResult); \
	DECLARE_FUNCTION(execExecuteAsyncDelay);


ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperBlueprintLibrary_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncHelperBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAsyncHelperBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncHelperBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncHelper"), Z_Construct_UClass_UAsyncHelperBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAsyncHelperBlueprintLibrary)


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncHelperBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncHelperBlueprintLibrary(UAsyncHelperBlueprintLibrary&&) = delete; \
	UAsyncHelperBlueprintLibrary(const UAsyncHelperBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncHelperBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncHelperBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncHelperBlueprintLibrary) \
	NO_API virtual ~UAsyncHelperBlueprintLibrary();


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h_12_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncHelperBlueprintLibrary;

// ********** End Class UAsyncHelperBlueprintLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
