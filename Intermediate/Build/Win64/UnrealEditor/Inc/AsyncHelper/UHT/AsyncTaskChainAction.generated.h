// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncTaskChainAction.h"

#ifdef ASYNCHELPER_AsyncTaskChainAction_generated_h
#error "AsyncTaskChainAction.generated.h already included, missing '#pragma once' in AsyncTaskChainAction.h"
#endif
#define ASYNCHELPER_AsyncTaskChainAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncTaskChainAction;
class UObject;

// ********** Begin Delegate FAsyncTaskChainProgress ***********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h_8_DELEGATE \
ASYNCHELPER_API void FAsyncTaskChainProgress_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskChainProgress, int32 TaskIndex);


// ********** End Delegate FAsyncTaskChainProgress *************************************************

// ********** Begin Delegate FAsyncTaskChainActionCompleted ****************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h_9_DELEGATE \
ASYNCHELPER_API void FAsyncTaskChainActionCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskChainActionCompleted);


// ********** End Delegate FAsyncTaskChainActionCompleted ******************************************

// ********** Begin Delegate FAsyncTaskChainActionCancelled ****************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h_10_DELEGATE \
ASYNCHELPER_API void FAsyncTaskChainActionCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncTaskChainActionCancelled);


// ********** End Delegate FAsyncTaskChainActionCancelled ******************************************

// ********** Begin Class UAsyncTaskChainAction ****************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTaskCompleted); \
	DECLARE_FUNCTION(execHandleTaskProgress); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execAsyncTaskChain);


ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTaskChainAction_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTaskChainAction(); \
	friend struct Z_Construct_UClass_UAsyncTaskChainAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTaskChainAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncTaskChainAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncHelper"), Z_Construct_UClass_UAsyncTaskChainAction_NoRegister) \
	DECLARE_SERIALIZER(UAsyncTaskChainAction)


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncTaskChainAction(UAsyncTaskChainAction&&) = delete; \
	UAsyncTaskChainAction(const UAsyncTaskChainAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTaskChainAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskChainAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncTaskChainAction) \
	NO_API virtual ~UAsyncTaskChainAction();


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h_16_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncTaskChainAction;

// ********** End Class UAsyncTaskChainAction ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTaskChainAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
