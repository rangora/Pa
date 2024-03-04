// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Pa : ModuleRules
{
	public Pa(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput",
            "UMG",
            "Slate",
            "SlateCore",
            "NavigationSystem"
        });
	}
}
