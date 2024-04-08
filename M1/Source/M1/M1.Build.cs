// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class M1 : ModuleRules
{
	public M1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AIModule", "GameplayTasks", "NavigationSystem" });
	}
}
