// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberpunkSyndicates/CyberpunkSyndicatesGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCyberpunkSyndicatesGameMode() {}
// Cross Module References
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_ACyberpunkSyndicatesGameMode_NoRegister();
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_ACyberpunkSyndicatesGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CyberpunkSyndicates();
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_ACyberpunkSyndicatesCharacter_NoRegister();
// End Cross Module References
	void ACyberpunkSyndicatesGameMode::StaticRegisterNativesACyberpunkSyndicatesGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACyberpunkSyndicatesGameMode);
	UClass* Z_Construct_UClass_ACyberpunkSyndicatesGameMode_NoRegister()
	{
		return ACyberpunkSyndicatesGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberpunkSyndicates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CyberpunkSyndicatesGameMode.h" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player1_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player1 = { "player1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesGameMode, player1), Z_Construct_UClass_ACyberpunkSyndicatesCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player2_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player2 = { "player2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesGameMode, player2), Z_Construct_UClass_ACyberpunkSyndicatesCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberpunkSyndicatesGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::ClassParams = {
		&ACyberpunkSyndicatesGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACyberpunkSyndicatesGameMode()
	{
		if (!Z_Registration_Info_UClass_ACyberpunkSyndicatesGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACyberpunkSyndicatesGameMode.OuterSingleton, Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACyberpunkSyndicatesGameMode.OuterSingleton;
	}
	template<> CYBERPUNKSYNDICATES_API UClass* StaticClass<ACyberpunkSyndicatesGameMode>()
	{
		return ACyberpunkSyndicatesGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberpunkSyndicatesGameMode);
	struct Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACyberpunkSyndicatesGameMode, ACyberpunkSyndicatesGameMode::StaticClass, TEXT("ACyberpunkSyndicatesGameMode"), &Z_Registration_Info_UClass_ACyberpunkSyndicatesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACyberpunkSyndicatesGameMode), 2137465544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesGameMode_h_980238303(TEXT("/Script/CyberpunkSyndicates"),
		Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
