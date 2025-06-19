using UnrealBuildTool;

public class AsyncHelper : ModuleRules
{
	public AsyncHelper(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
			}
		);
				
		PrivateIncludePaths.AddRange(
			new string[] {
			}
		);
			
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine"
			}
		);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"DeveloperSettings",
				"KismetCompiler"
			}
		);

		// Only add editor dependencies in editor builds
		if (Target.Type == TargetType.Editor)
		{
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"Slate",
					"SlateCore",
					"ToolMenus",
					"EditorStyle",
					"EditorWidgets",
					"UnrealEd"
				}
			);
		}
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
		);
	}
}
