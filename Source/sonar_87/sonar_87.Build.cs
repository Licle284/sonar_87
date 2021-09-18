// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class sonar_87 : ModuleRules
{
	public sonar_87(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
