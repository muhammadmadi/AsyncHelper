// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncTaskManager.h"

#ifdef ASYNCHELPER_AsyncTaskManager_generated_h
#error "AsyncTaskManager.generated.h already included, missing '#pragma once' in AsyncTaskManager.h"
#endif
#define ASYNCHELPER_AsyncTaskManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FAsyncTaskHandle;
struct FAsyncTaskInfo;

// ********** Begin Delegate FAsyncTaskDelegate ****************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_11_DELEGATE \
ASYNCHELPER_API void FAsyncTaskDelegate_DelegateWrapper(const FScriptDelegate& AsyncTaskDelegate);


// ********** End Delegate FAsyncTaskDelegate ******************************************************

// ********** Begin Delegate FAsyncTaskDelegateWithResult ******************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_12_DELEGATE \
ASYNCHELPER_API void FAsyncTaskDelegateWithResult_DelegateWrapper(const FScriptDelegate& AsyncTaskDelegateWithResult, bool bSuccess);


// ********** End Delegate FAsyncTaskDelegateWithResult ********************************************

// ********** Begin Delegate FAsyncTaskCompleted ***************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_13_DELEGATE \
ASYNCHELPER_API void FAsyncTaskCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskCompleted);


// ********** End Delegate FAsyncTaskCompleted *****************************************************

// ********** Begin Delegate FAsyncTaskCompletedWithResult *****************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_14_DELEGATE \
ASYNCHELPER_API void FAsyncTaskCompletedWithResult_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskCompletedWithResult, bool bSuccess);


// ********** End Delegate FAsyncTaskCompletedWithResult *******************************************

// ********** Begin Delegate FAsyncTaskChainDelegate ***********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_17_DELEGATE \
ASYNCHELPER_API void FAsyncTaskChainDelegate_DelegateWrapper(const FScriptDelegate& AsyncTaskChainDelegate, int32 TaskIndex);


// ********** End Delegate FAsyncTaskChainDelegate *************************************************

// ********** Begin Delegate FAsyncTimeoutDelegate *************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_18_DELEGATE \
ASYNCHELPER_API void FAsyncTimeoutDelegate_DelegateWrapper(const FScriptDelegate& AsyncTimeoutDelegate, bool bTimedOut);


// ********** End Delegate FAsyncTimeoutDelegate ***************************************************

// ********** Begin Delegate FAsyncTaskChainCompleted **********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_19_DELEGATE \
ASYNCHELPER_API void FAsyncTaskChainCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskChainCompleted, bool bAllSucceeded);


// ********** End Delegate FAsyncTaskChainCompleted ************************************************

// ********** Begin Delegate FAsyncTaskWithTimeoutCompleted ****************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_20_DELEGATE \
ASYNCHELPER_API void FAsyncTaskWithTimeoutCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskWithTimeoutCompleted, bool bTimedOut);


// ********** End Delegate FAsyncTaskWithTimeoutCompleted ******************************************

// ********** Begin ScriptStruct FAsyncTaskHandle **************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAsyncTaskHandle_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAsyncTaskHandle;
// ********** End ScriptStruct FAsyncTaskHandle ****************************************************

// ********** Begin ScriptStruct FAsyncTaskInfo ****************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAsyncTaskInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAsyncTaskInfo;
// ********** End ScriptStruct FAsyncTaskInfo ******************************************************

// ********** Begin Class UAsyncTaskManager ********************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteAsyncBatch); \
	DECLARE_FUNCTION(execExecuteAsyncDelayWithTimeout); \
	DECLARE_FUNCTION(execExecuteAsyncTaskChain); \
	DECLARE_FUNCTION(execGetRunningTaskCount); \
	DECLARE_FUNCTION(execCancelAllAsyncTasks); \
	DECLARE_FUNCTION(execGetAsyncTaskInfo); \
	DECLARE_FUNCTION(execIsAsyncTaskRunning); \
	DECLARE_FUNCTION(execCancelAsyncTask); \
	DECLARE_FUNCTION(execExecuteAsyncDelayWithResult); \
	DECLARE_FUNCTION(execExecuteAsyncDelay);


ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTaskManager_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTaskManager(); \
	friend struct Z_Construct_UClass_UAsyncTaskManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTaskManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncTaskManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncHelper"), Z_Construct_UClass_UAsyncTaskManager_NoRegister) \
	DECLARE_SERIALIZER(UAsyncTaskManager)


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_92_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncTaskManager(UAsyncTaskManager&&) = delete; \
	UAsyncTaskManager(const UAsyncTaskManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncTaskManager) \
	NO_API virtual ~UAsyncTaskManager();


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_89_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_92_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncTaskManager;

// ********** End Class UAsyncTaskManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
