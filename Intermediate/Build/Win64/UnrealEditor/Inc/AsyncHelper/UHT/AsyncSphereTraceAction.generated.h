// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncSphereTraceAction.h"

#ifdef ASYNCHELPER_AsyncSphereTraceAction_generated_h
#error "AsyncSphereTraceAction.generated.h already included, missing '#pragma once' in AsyncSphereTraceAction.h"
#endif
#define ASYNCHELPER_AsyncSphereTraceAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UAsyncSphereTraceAction;
class UObject;
struct FHitResult;

// ********** Begin Delegate FAsyncSphereTraceCompleted ********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_12_DELEGATE \
ASYNCHELPER_API void FAsyncSphereTraceCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncSphereTraceCompleted, FHitResult const& HitResult);


// ********** End Delegate FAsyncSphereTraceCompleted **********************************************

// ********** Begin Delegate FAsyncSphereTraceFailed ***********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_13_DELEGATE \
ASYNCHELPER_API void FAsyncSphereTraceFailed_DelegateWrapper(const FMulticastScriptDelegate& AsyncSphereTraceFailed);


// ********** End Delegate FAsyncSphereTraceFailed *************************************************

// ********** Begin Delegate FAsyncSphereTraceCancelled ********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_14_DELEGATE \
ASYNCHELPER_API void FAsyncSphereTraceCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncSphereTraceCancelled);


// ********** End Delegate FAsyncSphereTraceCancelled **********************************************

// ********** Begin Delegate FAsyncMultiSphereTraceCompleted ***************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_16_DELEGATE \
ASYNCHELPER_API void FAsyncMultiSphereTraceCompleted_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiSphereTraceCompleted, TArray<FHitResult> const& HitResults);


// ********** End Delegate FAsyncMultiSphereTraceCompleted *****************************************

// ********** Begin Delegate FAsyncMultiSphereTraceFailed ******************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_17_DELEGATE \
ASYNCHELPER_API void FAsyncMultiSphereTraceFailed_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiSphereTraceFailed);


// ********** End Delegate FAsyncMultiSphereTraceFailed ********************************************

// ********** Begin Delegate FAsyncMultiSphereTraceCancelled ***************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_18_DELEGATE \
ASYNCHELPER_API void FAsyncMultiSphereTraceCancelled_DelegateWrapper(const FMulticastScriptDelegate& AsyncMultiSphereTraceCancelled);


// ********** End Delegate FAsyncMultiSphereTraceCancelled *****************************************

// ********** Begin Class UAsyncSphereTraceAction **************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTraceCompleted); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execAsyncMultiSphereTraceByChannel); \
	DECLARE_FUNCTION(execAsyncSphereTraceByObjectType); \
	DECLARE_FUNCTION(execAsyncSphereTraceByChannel);


ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncSphereTraceAction_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncSphereTraceAction(); \
	friend struct Z_Construct_UClass_UAsyncSphereTraceAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncSphereTraceAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncSphereTraceAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncHelper"), Z_Construct_UClass_UAsyncSphereTraceAction_NoRegister) \
	DECLARE_SERIALIZER(UAsyncSphereTraceAction)


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncSphereTraceAction(UAsyncSphereTraceAction&&) = delete; \
	UAsyncSphereTraceAction(const UAsyncSphereTraceAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncSphereTraceAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncSphereTraceAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncSphereTraceAction) \
	NO_API virtual ~UAsyncSphereTraceAction();


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_24_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_27_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncSphereTraceAction;

// ********** End Class UAsyncSphereTraceAction ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncSphereTraceAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
