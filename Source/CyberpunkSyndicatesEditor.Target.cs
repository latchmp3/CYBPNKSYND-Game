// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CyberpunkSyndicatesEditorTarget : TargetRules
{
	public CyberpunkSyndicatesEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("CyberpunkSyndicates");
	}
}
