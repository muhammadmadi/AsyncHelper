// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncHelperSubsystem.h"

#ifdef ASYNCHELPER_AsyncHelperSubsystem_generated_h
#error "AsyncHelperSubsystem.generated.h already included, missing '#pragma once' in AsyncHelperSubsystem.h"
#endif
#define ASYNCHELPER_AsyncHelperSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncTaskManager;
struct FAsyncTaskHandle;
struct FAsyncTaskInfo;

// ********** Begin Class UAsyncHelperSubsystem ****************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteAsyncBatch); \
	DECLARE_FUNCTION(execExecuteAsyncDelayWithTimeout); \
	DECLARE_FUNCTION(execExecuteAsyncTaskChain); \
	DECLARE_FUNCTION(execGetPerformanceStats); \
	DECLARE_FUNCTION(execExecuteTaskChain); \
	DECLARE_FUNCTION(execExecuteParallelTasks); \
	DECLARE_FUNCTION(execGetRunningTaskCount); \
	DECLARE_FUNCTION(execCancelAllAsyncTasks); \
	DECLARE_FUNCTION(execGetAsyncTaskInfo); \
	DECLARE_FUNCTION(execIsAsyncTaskRunning); \
	DECLARE_FUNCTION(execCancelAsyncTask); \
	DECLARE_FUNCTION(execExecuteAsyncDelayWithResult); \
	DECLARE_FUNCTION(execExecuteAsyncDelay); \
	DECLARE_FUNCTION(execGetAsyncTaskManager);


ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperSubsystem_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncHelperSubsystem(); \
	friend struct Z_Construct_UClass_UAsyncHelperSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncHelperSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncHelper"), Z_Construct_UClass_UAsyncHelperSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAsyncHelperSubsystem)


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncHelperSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncHelperSubsystem(UAsyncHelperSubsystem&&) = delete; \
	UAsyncHelperSubsystem(const UAsyncHelperSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncHelperSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncHelperSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncHelperSubsystem) \
	NO_API virtual ~UAsyncHelperSubsystem();


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h_12_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncHelperSubsystem;

// ********** End Class UAsyncHelperSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
