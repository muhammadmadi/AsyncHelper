// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncLineTraceAction.h"

#ifdef ASYNCHELPER_AsyncLineTraceAction_generated_h
#error "AsyncLineTraceAction.generated.h already included, missing '#pragma once' in AsyncLineTraceAction.h"
#endif
#define ASYNCHELPER_AsyncLineTraceAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UAsyncLineTraceAction;
class UObject;
struct FHitResult;

// ********** Begin Delegate FAsyncLineTraceCompleted **********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_12_DELEGATE \
ASYNCHELPER_API void FAsyncLineTraceCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncLineTraceCompleted, FHitResult const& HitResult);


// ********** End Delegate FAsyncLineTraceCompleted ************************************************

// ********** Begin Delegate FAsyncLineTraceFailed *************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_13_DELEGATE \
ASYNCHELPER_API void FAsyncLineTraceFailed_DelegateWrapper(const FMulticastScriptDelegate& AsyncLineTraceFailed);


// ********** End Delegate FAsyncLineTraceFailed ***************************************************

// ********** Begin Delegate FAsyncLineTraceCancelled **********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_14_DELEGATE \
ASYNCHELPER_API void FAsyncLineTraceCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncLineTraceCancelled);


// ********** End Delegate FAsyncLineTraceCancelled ************************************************

// ********** Begin Delegate FAsyncMultiLineTraceCompleted *****************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_16_DELEGATE \
ASYNCHELPER_API void FAsyncMultiLineTraceCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiLineTraceCompleted, TArray<FHitResult> const& HitResults);


// ********** End Delegate FAsyncMultiLineTraceCompleted *******************************************

// ********** Begin Delegate FAsyncMultiLineTraceFailed ********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_17_DELEGATE \
ASYNCHELPER_API void FAsyncMultiLineTraceFailed_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiLineTraceFailed);


// ********** End Delegate FAsyncMultiLineTraceFailed **********************************************

// ********** Begin Delegate FAsyncMultiLineTraceCancelled *****************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_18_DELEGATE \
ASYNCHELPER_API void FAsyncMultiLineTraceCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiLineTraceCancelled);


// ********** End Delegate FAsyncMultiLineTraceCancelled *******************************************

// ********** Begin Class UAsyncLineTraceAction ****************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execAsyncMultiLineTraceByChannel); \
	DECLARE_FUNCTION(execAsyncLineTraceByObjectType); \
	DECLARE_FUNCTION(execAsyncLineTraceByChannel);


ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncLineTraceAction_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncLineTraceAction(); \
	friend struct Z_Construct_UClass_UAsyncLineTraceAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncLineTraceAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncLineTraceAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncHelper"), Z_Construct_UClass_UAsyncLineTraceAction_NoRegister) \
	DECLARE_SERIALIZER(UAsyncLineTraceAction)


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncLineTraceAction(UAsyncLineTraceAction&&) = delete; \
	UAsyncLineTraceAction(const UAsyncLineTraceAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncLineTraceAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncLineTraceAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncLineTraceAction) \
	NO_API virtual ~UAsyncLineTraceAction();


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_24_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_27_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncLineTraceAction;

// ********** End Class UAsyncLineTraceAction ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncLineTraceAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
