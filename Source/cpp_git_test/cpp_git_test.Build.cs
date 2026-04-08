// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class cpp_git_test : ModuleRules
{
	public cpp_git_test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
