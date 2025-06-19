#include "AsyncHelper.h"

DEFINE_LOG_CATEGORY(LogAsyncHelper);

#define LOCTEXT_NAMESPACE "FAsyncHelperModule"

void FAsyncHelperModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file
	UE_LOG(LogAsyncHelper, Log, TEXT("AsyncHelper module started"));
}

void FAsyncHelperModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module. For modules that support dynamic reloading,
	// we call this function before unloading the module.
	UE_LOG(LogAsyncHelper, Log, TEXT("AsyncHelper module shutdown"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAsyncHelperModule, AsyncHelper)
