// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncHelperSettings.h"

#ifdef ASYNCHELPER_AsyncHelperSettings_generated_h
#error "AsyncHelperSettings.generated.h already included, missing '#pragma once' in AsyncHelperSettings.h"
#endif
#define ASYNCHELPER_AsyncHelperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAsyncHelperSettings *****************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperSettings_NoRegister();

#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncHelperSettings(); \
	friend struct Z_Construct_UClass_UAsyncHelperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncHelperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AsyncHelper"), Z_Construct_UClass_UAsyncHelperSettings_NoRegister) \
	DECLARE_SERIALIZER(UAsyncHelperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncHelperSettings(UAsyncHelperSettings&&) = delete; \
	UAsyncHelperSettings(const UAsyncHelperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncHelperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncHelperSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncHelperSettings) \
	NO_API virtual ~UAsyncHelperSettings();


#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSettings_h_11_PROLOG
#define FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncHelperSettings;

// ********** End Class UAsyncHelperSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
