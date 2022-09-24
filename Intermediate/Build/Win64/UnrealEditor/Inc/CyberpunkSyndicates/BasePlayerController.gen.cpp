// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberpunkSyndicates/BasePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePlayerController() {}
// Cross Module References
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_ABasePlayerController_NoRegister();
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_ABasePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CyberpunkSyndicates();
// End Cross Module References
	void ABasePlayerController::StaticRegisterNativesABasePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePlayerController);
	UClass* Z_Construct_UClass_ABasePlayerController_NoRegister()
	{
		return ABasePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABasePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberpunkSyndicates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BasePlayerController.h" },
		{ "ModuleRelativePath", "BasePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePlayerController_Statics::ClassParams = {
		&ABasePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasePlayerController()
	{
		if (!Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton, Z_Construct_UClass_ABasePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasePlayerController.OuterSingleton;
	}
	template<> CYBERPUNKSYNDICATES_API UClass* StaticClass<ABasePlayerController>()
	{
		return ABasePlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePlayerController);
	struct Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BasePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BasePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasePlayerController, ABasePlayerController::StaticClass, TEXT("ABasePlayerController"), &Z_Registration_Info_UClass_ABasePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePlayerController), 3968650798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BasePlayerController_h_1293948873(TEXT("/Script/CyberpunkSyndicates"),
		Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BasePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BasePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
