// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncTimeoutAction.h"

#ifdef ASYNCHELPER_AsyncTimeoutAction_generated_h
#error "AsyncTimeoutAction.generated.h already included, missing '#pragma once' in AsyncTimeoutAction.h"
#endif
#define ASYNCHELPER_AsyncTimeoutAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncTimeoutAction;
class UObject;

// ********** Begin Delegate FAsyncTimeoutActionCompleted ******************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h_8_DELEGATE \
ASYNCHELPER_API void FAsyncTimeoutActionCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncTimeoutActionCompleted);


// ********** End Delegate FAsyncTimeoutActionCompleted ********************************************

// ********** Begin Delegate FAsyncTimeoutActionTimedOut *******************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h_9_DELEGATE \
ASYNCHELPER_API void FAsyncTimeoutActionTimedOut_DelegateWrapper(const FMulticastScriptDelegate& AsyncTimeoutActionTimedOut);


// ********** End Delegate FAsyncTimeoutActionTimedOut *********************************************

// ********** Begin Delegate FAsyncTimeoutActionCancelled ******************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h_10_DELEGATE \
ASYNCHELPER_API void FAsyncTimeoutActionCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncTimeoutActionCancelled);


// ********** End Delegate FAsyncTimeoutActionCancelled ********************************************

// ********** Begin Class UAsyncTimeoutAction ******************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTaskTimeout); \
	DECLARE_FUNCTION(execHandleTaskCompleted); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execAsyncDelayWithTimeout);


ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTimeoutAction_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTimeoutAction(); \
	friend struct Z_Construct_UClass_UAsyncTimeoutAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTimeoutAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncTimeoutAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncHelper"), Z_Construct_UClass_UAsyncTimeoutAction_NoRegister) \
	DECLARE_SERIALIZER(UAsyncTimeoutAction)


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncTimeoutAction(UAsyncTimeoutAction&&) = delete; \
	UAsyncTimeoutAction(const UAsyncTimeoutAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTimeoutAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTimeoutAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncTimeoutAction) \
	NO_API virtual ~UAsyncTimeoutAction();


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h_16_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncTimeoutAction;

// ********** End Class UAsyncTimeoutAction ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTimeoutAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
