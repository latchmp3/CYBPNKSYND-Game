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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_roundTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_roundTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numRounds_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_numRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isRoundTimerActive_MetaData[];
#endif
		static void NewProp_isRoundTimerActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isRoundTimerActive;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_roundTime_MetaData[] = {
		{ "Category", "GameMode Settings" },
		{ "Comment", "//default round timer for each round\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesGameMode.h" },
		{ "ToolTip", "default round timer for each round" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_roundTime = { "roundTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesGameMode, roundTime), METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_roundTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_roundTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_numRounds_MetaData[] = {
		{ "Category", "GameMode Settings" },
		{ "Comment", "//number of rounds in set\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesGameMode.h" },
		{ "ToolTip", "number of rounds in set" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_numRounds = { "numRounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesGameMode, numRounds), METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_numRounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_numRounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_isRoundTimerActive_MetaData[] = {
		{ "Category", "GameMode Settings" },
		{ "Comment", "//start timer countdown\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesGameMode.h" },
		{ "ToolTip", "start timer countdown" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_isRoundTimerActive_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesGameMode*)Obj)->isRoundTimerActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_isRoundTimerActive = { "isRoundTimerActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesGameMode), &Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_isRoundTimerActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_isRoundTimerActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_isRoundTimerActive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_player2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_roundTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_numRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesGameMode_Statics::NewProp_isRoundTimerActive,
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
		{ Z_Construct_UClass_ACyberpunkSyndicatesGameMode, ACyberpunkSyndicatesGameMode::StaticClass, TEXT("ACyberpunkSyndicatesGameMode"), &Z_Registration_Info_UClass_ACyberpunkSyndicatesGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACyberpunkSyndicatesGameMode), 3660123266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesGameMode_h_4040301316(TEXT("/Script/CyberpunkSyndicates"),
		Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
