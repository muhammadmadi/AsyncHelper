// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncDelayAction.h"

#ifdef ASYNCHELPER_AsyncDelayAction_generated_h
#error "AsyncDelayAction.generated.h already included, missing '#pragma once' in AsyncDelayAction.h"
#endif
#define ASYNCHELPER_AsyncDelayAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncDelayAction;
class UObject;
struct FAsyncTaskHandle;

// ********** Begin Delegate FAsyncDelayCompleted **************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h_8_DELEGATE \
ASYNCHELPER_API void FAsyncDelayCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncDelayCompleted);


// ********** End Delegate FAsyncDelayCompleted ****************************************************

// ********** Begin Class UAsyncDelayAction ********************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTaskCompleted); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execAsyncDelayWithCancellation); \
	DECLARE_FUNCTION(execAsyncDelay);


ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncDelayAction_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncDelayAction(); \
	friend struct Z_Construct_UClass_UAsyncDelayAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncDelayAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncDelayAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncHelper"), Z_Construct_UClass_UAsyncDelayAction_NoRegister) \
	DECLARE_SERIALIZER(UAsyncDelayAction)


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncDelayAction(UAsyncDelayAction&&) = delete; \
	UAsyncDelayAction(const UAsyncDelayAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncDelayAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncDelayAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncDelayAction) \
	NO_API virtual ~UAsyncDelayAction();


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h_14_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncDelayAction;

// ********** End Class UAsyncDelayAction **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncDelayAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
