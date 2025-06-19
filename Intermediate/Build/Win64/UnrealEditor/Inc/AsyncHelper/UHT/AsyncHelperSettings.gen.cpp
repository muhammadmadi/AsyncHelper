// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncHelperSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncHelperSettings() {}

// ********** Begin Cross Module References ********************************************************
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperSettings();
ASYNCHELPER_API UClass* Z_Construct_UClass_UAsyncHelperSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_AsyncHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAsyncHelperSettings *****************************************************
void UAsyncHelperSettings::StaticRegisterNativesUAsyncHelperSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncHelperSettings;
UClass* UAsyncHelperSettings::GetPrivateStaticClass()
{
	using TClass = UAsyncHelperSettings;
	if (!Z_Registration_Info_UClass_UAsyncHelperSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncHelperSettings"),
			Z_Registration_Info_UClass_UAsyncHelperSettings.InnerSingleton,
			StaticRegisterNativesUAsyncHelperSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAsyncHelperSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncHelperSettings_NoRegister()
{
	return UAsyncHelperSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncHelperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings for the AsyncHelper plugin\n * Configurable through Project Settings > Plugins > Async Helper\n */" },
#endif
		{ "DisplayName", "Async Helper" },
		{ "IncludePath", "AsyncHelperSettings.h" },
		{ "ModuleRelativePath", "Public/AsyncHelperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings for the AsyncHelper plugin\nConfigurable through Project Settings > Plugins > Async Helper" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentTasks_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Maximum number of concurrent async tasks allowed\n\x09 * Higher values allow more parallelism but use more memory\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of concurrent async tasks allowed\nHigher values allow more parallelism but use more memory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CleanupInterval_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * How often to clean up completed tasks (in seconds)\n\x09 * Lower values use more CPU but free memory faster\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often to clean up completed tasks (in seconds)\nLower values use more CPU but free memory faster" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskInfoRetentionTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * How long to keep completed task info for status checking (in seconds)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long to keep completed task info for status checking (in seconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDetailedLogging_MetaData[] = {
		{ "Category", "Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enable detailed logging for async operations\n\x09 * Useful for debugging but may impact performance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable detailed logging for async operations\nUseful for debugging but may impact performance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePerformanceStats_MetaData[] = {
		{ "Category", "Debugging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enable performance statistics tracking\n\x09 * Adds small overhead but provides useful metrics\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable performance statistics tracking\nAdds small overhead but provides useful metrics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LongRunningTaskWarningThreshold_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ClampMax", "60.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Warn when tasks take longer than this threshold (in seconds)\n\x09 * Set to 0 to disable warnings\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Warn when tasks take longer than this threshold (in seconds)\nSet to 0 to disable warnings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBackgroundThreadPriority_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Use background thread priority for async operations\n\x09 * When enabled, tasks run at lower priority to avoid impacting game performance\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use background thread priority for async operations\nWhen enabled, tasks run at lower priority to avoid impacting game performance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCleanupOnWorldDestroy_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enable automatic task cancellation when the world is destroyed\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncHelperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable automatic task cancellation when the world is destroyed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentTasks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CleanupInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TaskInfoRetentionTime;
	static void NewProp_bEnableDetailedLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDetailedLogging;
	static void NewProp_bEnablePerformanceStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePerformanceStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LongRunningTaskWarningThreshold;
	static void NewProp_bUseBackgroundThreadPriority_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBackgroundThreadPriority;
	static void NewProp_bAutoCleanupOnWorldDestroy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCleanupOnWorldDestroy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncHelperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_MaxConcurrentTasks = { "MaxConcurrentTasks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncHelperSettings, MaxConcurrentTasks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConcurrentTasks_MetaData), NewProp_MaxConcurrentTasks_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_CleanupInterval = { "CleanupInterval", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncHelperSettings, CleanupInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CleanupInterval_MetaData), NewProp_CleanupInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_TaskInfoRetentionTime = { "TaskInfoRetentionTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncHelperSettings, TaskInfoRetentionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskInfoRetentionTime_MetaData), NewProp_TaskInfoRetentionTime_MetaData) };
void Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bEnableDetailedLogging_SetBit(void* Obj)
{
	((UAsyncHelperSettings*)Obj)->bEnableDetailedLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bEnableDetailedLogging = { "bEnableDetailedLogging", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncHelperSettings), &Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bEnableDetailedLogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDetailedLogging_MetaData), NewProp_bEnableDetailedLogging_MetaData) };
void Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bEnablePerformanceStats_SetBit(void* Obj)
{
	((UAsyncHelperSettings*)Obj)->bEnablePerformanceStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bEnablePerformanceStats = { "bEnablePerformanceStats", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncHelperSettings), &Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bEnablePerformanceStats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePerformanceStats_MetaData), NewProp_bEnablePerformanceStats_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_LongRunningTaskWarningThreshold = { "LongRunningTaskWarningThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncHelperSettings, LongRunningTaskWarningThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LongRunningTaskWarningThreshold_MetaData), NewProp_LongRunningTaskWarningThreshold_MetaData) };
void Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bUseBackgroundThreadPriority_SetBit(void* Obj)
{
	((UAsyncHelperSettings*)Obj)->bUseBackgroundThreadPriority = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bUseBackgroundThreadPriority = { "bUseBackgroundThreadPriority", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncHelperSettings), &Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bUseBackgroundThreadPriority_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBackgroundThreadPriority_MetaData), NewProp_bUseBackgroundThreadPriority_MetaData) };
void Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bAutoCleanupOnWorldDestroy_SetBit(void* Obj)
{
	((UAsyncHelperSettings*)Obj)->bAutoCleanupOnWorldDestroy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bAutoCleanupOnWorldDestroy = { "bAutoCleanupOnWorldDestroy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncHelperSettings), &Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bAutoCleanupOnWorldDestroy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCleanupOnWorldDestroy_MetaData), NewProp_bAutoCleanupOnWorldDestroy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncHelperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_MaxConcurrentTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_CleanupInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_TaskInfoRetentionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bEnableDetailedLogging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bEnablePerformanceStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_LongRunningTaskWarningThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bUseBackgroundThreadPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncHelperSettings_Statics::NewProp_bAutoCleanupOnWorldDestroy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncHelperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncHelperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AsyncHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncHelperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncHelperSettings_Statics::ClassParams = {
	&UAsyncHelperSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAsyncHelperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncHelperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncHelperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncHelperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncHelperSettings()
{
	if (!Z_Registration_Info_UClass_UAsyncHelperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncHelperSettings.OuterSingleton, Z_Construct_UClass_UAsyncHelperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncHelperSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncHelperSettings);
UAsyncHelperSettings::~UAsyncHelperSettings() {}
// ********** End Class UAsyncHelperSettings *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSettings_h__Script_AsyncHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncHelperSettings, UAsyncHelperSettings::StaticClass, TEXT("UAsyncHelperSettings"), &Z_Registration_Info_UClass_UAsyncHelperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncHelperSettings), 635224565U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSettings_h__Script_AsyncHelper_743634606(TEXT("/Script/AsyncHelper"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSettings_h__Script_AsyncHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_testgas_Plugins_AsyncHelper_Source_AsyncHelper_Public_AsyncHelperSettings_h__Script_AsyncHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
