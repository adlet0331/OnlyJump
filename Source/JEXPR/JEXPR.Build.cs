// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JEXPR : ModuleRules
{
	public JEXPR(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
