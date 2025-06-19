#include "AsyncHelperSettings.h"

#define LOCTEXT_NAMESPACE "AsyncHelperSettings"

UAsyncHelperSettings::UAsyncHelperSettings()
{
	CategoryName = TEXT("Plugins");
	SectionName = TEXT("AsyncHelper");
}

FName UAsyncHelperSettings::GetCategoryName() const
{
	return FName(TEXT("Plugins"));
}

FText UAsyncHelperSettings::GetSectionText() const
{
	return LOCTEXT("AsyncHelperSettingsSection", "Async Helper");
}

#if WITH_EDITOR
FText UAsyncHelperSettings::GetSectionDescription() const
{
	return LOCTEXT("AsyncHelperSettingsDescription", "Configure settings for the Async Helper plugin");
}
#endif

#undef LOCTEXT_NAMESPACE
