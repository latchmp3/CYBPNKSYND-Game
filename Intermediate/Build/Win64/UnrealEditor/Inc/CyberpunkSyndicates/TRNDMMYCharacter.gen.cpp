// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberpunkSyndicates/TRNDMMYCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTRNDMMYCharacter() {}
// Cross Module References
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_ATRNDMMYCharacter_NoRegister();
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_ATRNDMMYCharacter();
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_ACyberpunkSyndicatesCharacter();
	UPackage* Z_Construct_UPackage__Script_CyberpunkSyndicates();
// End Cross Module References
	void ATRNDMMYCharacter::StaticRegisterNativesATRNDMMYCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATRNDMMYCharacter);
	UClass* Z_Construct_UClass_ATRNDMMYCharacter_NoRegister()
	{
		return ATRNDMMYCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATRNDMMYCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATRNDMMYCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberpunkSyndicates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATRNDMMYCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TRNDMMYCharacter.h" },
		{ "ModuleRelativePath", "TRNDMMYCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATRNDMMYCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATRNDMMYCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATRNDMMYCharacter_Statics::ClassParams = {
		&ATRNDMMYCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATRNDMMYCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATRNDMMYCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATRNDMMYCharacter()
	{
		if (!Z_Registration_Info_UClass_ATRNDMMYCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATRNDMMYCharacter.OuterSingleton, Z_Construct_UClass_ATRNDMMYCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATRNDMMYCharacter.OuterSingleton;
	}
	template<> CYBERPUNKSYNDICATES_API UClass* StaticClass<ATRNDMMYCharacter>()
	{
		return ATRNDMMYCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATRNDMMYCharacter);
	struct Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_TRNDMMYCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_TRNDMMYCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATRNDMMYCharacter, ATRNDMMYCharacter::StaticClass, TEXT("ATRNDMMYCharacter"), &Z_Registration_Info_UClass_ATRNDMMYCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATRNDMMYCharacter), 274031015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_TRNDMMYCharacter_h_2737999393(TEXT("/Script/CyberpunkSyndicates"),
		Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_TRNDMMYCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_TRNDMMYCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
