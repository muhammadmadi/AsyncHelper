// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncTraceBlueprintLibrary.h"

#ifdef ASYNCHELPER_AsyncTraceBlueprintLibrary_generated_h
#error "AsyncTraceBlueprintLibrary.generated.h already included, missing '#pragma once' in AsyncTraceBlueprintLibrary.h"
#endif
#define ASYNCHELPER_AsyncTraceBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UObject;
class UPrimitiveComponent;
struct FAsyncTaskHandle;
struct FHitResult;

// ********** Begin Delegate FAsyncTraceHitDelegate ************************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_12_DELEGATE \
ASYNCHELPER_API void FAsyncTraceHitDelegate_DelegateWrapper(const FScriptDelegate& AsyncTraceHitDelegate, FHitResult const& HitResult);


// ********** End Delegate FAsyncTraceHitDelegate **************************************************

// ********** Begin Delegate FAsyncTraceMissDelegate ***********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_13_DELEGATE \
ASYNCHELPER_API void FAsyncTraceMissDelegate_DelegateWrapper(const FScriptDelegate& AsyncTraceMissDelegate);


// ********** End Delegate FAsyncTraceMissDelegate *************************************************

// ********** Begin Delegate FAsyncMultiTraceHitDelegate *******************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_14_DELEGATE \
ASYNCHELPER_API void FAsyncMultiTraceHitDelegate_DelegateWrapper(const FScriptDelegate& AsyncMultiTraceHitDelegate, TArray<FHitResult> const& HitResults);


// ********** End Delegate FAsyncMultiTraceHitDelegate *********************************************

// ********** Begin Delegate FAsyncMultiTraceMissDelegate ******************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_15_DELEGATE \
ASYNCHELPER_API void FAsyncMultiTraceMissDelegate_DelegateWrapper(const FScriptDelegate& AsyncMultiTraceMissDelegate);


// ********** End Delegate FAsyncMultiTraceMissDelegate ********************************************

// ********** Begin Class UAsyncTraceBlueprintLibrary **********************************************
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHitDistance); \
	DECLARE_FUNCTION(execGetHitNormal); \
	DECLARE_FUNCTION(execGetHitLocation); \
	DECLARE_FUNCTION(execGetHitComponent); \
	DECLARE_FUNCTION(execGetHitActor); \
	DECLARE_FUNCTION(execWasActorHit); \
	DECLARE_FUNCTION(execAsyncSphereTraceByChannelDelegate); \
	DECLARE_FUNCTION(execAsyncMultiLineTraceByChannelDelegate); \
	DECLARE_FUNCTION(execAsyncLineTraceByObjectTypeDelegate); \
	DECLARE_FUNCTION(execAsyncLineTraceByChannelDelegate);


ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTraceBlueprintLibrary_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncTraceBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAsyncTraceBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncTraceBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncTraceBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AsyncHelper"), Z_Construct_UClass_UAsyncTraceBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAsyncTraceBlueprintLibrary)


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncTraceBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncTraceBlueprintLibrary(UAsyncTraceBlueprintLibrary&&) = delete; \
	UAsyncTraceBlueprintLibrary(const UAsyncTraceBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncTraceBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTraceBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTraceBlueprintLibrary) \
	NO_API virtual ~UAsyncTraceBlueprintLibrary();


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_21_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncTraceBlueprintLibrary;

// ********** End Class UAsyncTraceBlueprintLibrary ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncTraceBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
