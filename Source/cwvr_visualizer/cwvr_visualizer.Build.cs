// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class cwvr_visualizer : ModuleRules
{
	public cwvr_visualizer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
