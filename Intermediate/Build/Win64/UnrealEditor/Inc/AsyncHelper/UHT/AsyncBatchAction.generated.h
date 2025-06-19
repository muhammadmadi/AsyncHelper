// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncBatchAction.h"

#ifdef ASYNCHELPER_AsyncBatchAction_generated_h
#error "AsyncBatchAction.generated.h already included, missing '#pragma once' in AsyncBatchAction.h"
#endif
#define ASYNCHELPER_AsyncBatchAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncBatchAction;
class UObject;

// ********** Begin Delegate FAsyncBatchProgress ***************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h_8_DELEGATE \
ASYNCHELPER_API void FAsyncBatchProgress_DelegateWrapper(const FMulticastScriptDelegate& AsyncBatchProgress, int32 TaskIndex);


// ********** End Delegate FAsyncBatchProgress *****************************************************

// ********** Begin Delegate FAsyncBatchActionCompleted ********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h_9_DELEGATE \
ASYNCHELPER_API void FAsyncBatchActionCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncBatchActionCompleted);


// ********** End Delegate FAsyncBatchActionCompleted **********************************************

// ********** Begin Delegate FAsyncBatchActionCancelled ********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h_10_DELEGATE \
ASYNCHELPER_API void FAsyncBatchActionCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncBatchActionCancelled);


// ********** End Delegate FAsyncBatchActionCancelled **********************************************

// ********** Begin Class UAsyncBatchAction ********************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTaskCompleted); \
	DECLARE_FUNCTION(execHandleTaskProgress); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execExecuteAsyncBatch);


ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncBatchAction_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncBatchAction(); \
	friend struct Z_Construct_UClass_UAsyncBatchAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncBatchAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncBatchAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncHelper"), Z_Construct_UClass_UAsyncBatchAction_NoRegister) \
	DECLARE_SERIALIZER(UAsyncBatchAction)


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncBatchAction(UAsyncBatchAction&&) = delete; \
	UAsyncBatchAction(const UAsyncBatchAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncBatchAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncBatchAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncBatchAction) \
	NO_API virtual ~UAsyncBatchAction();


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h_16_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncBatchAction;

// ********** End Class UAsyncBatchAction **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncBatchAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
