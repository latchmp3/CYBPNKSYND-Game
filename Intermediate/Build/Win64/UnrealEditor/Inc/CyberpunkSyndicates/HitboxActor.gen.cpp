// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberpunkSyndicates/HitboxActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitboxActor() {}
// Cross Module References
	CYBERPUNKSYNDICATES_API UEnum* Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum();
	UPackage* Z_Construct_UPackage__Script_CyberpunkSyndicates();
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_AHitboxActor_NoRegister();
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_AHitboxActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHitboxEnum;
	static UEnum* EHitboxEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHitboxEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHitboxEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum, Z_Construct_UPackage__Script_CyberpunkSyndicates(), TEXT("EHitboxEnum"));
		}
		return Z_Registration_Info_UEnum_EHitboxEnum.OuterSingleton;
	}
	template<> CYBERPUNKSYNDICATES_API UEnum* StaticEnum<EHitboxEnum>()
	{
		return EHitboxEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum_Statics::Enumerators[] = {
		{ "EHitboxEnum::HB_PROXIMITY", (int64)EHitboxEnum::HB_PROXIMITY },
		{ "EHitboxEnum::HB_ACTIVE", (int64)EHitboxEnum::HB_ACTIVE },
		{ "EHitboxEnum::HB_HURTBOX", (int64)EHitboxEnum::HB_HURTBOX },
		{ "EHitboxEnum::HB_THROW", (int64)EHitboxEnum::HB_THROW },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HB_ACTIVE.DisplayName", "Active" },
		{ "HB_ACTIVE.Name", "EHitboxEnum::HB_ACTIVE" },
		{ "HB_HURTBOX.DisplayName", "Hurtbox" },
		{ "HB_HURTBOX.Name", "EHitboxEnum::HB_HURTBOX" },
		{ "HB_PROXIMITY.DisplayName", "Proximity" },
		{ "HB_PROXIMITY.Name", "EHitboxEnum::HB_PROXIMITY" },
		{ "HB_THROW.DisplayName", "Throw" },
		{ "HB_THROW.Name", "EHitboxEnum::HB_THROW" },
		{ "ModuleRelativePath", "HitboxActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CyberpunkSyndicates,
		nullptr,
		"EHitboxEnum",
		"EHitboxEnum",
		Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum()
	{
		if (!Z_Registration_Info_UEnum_EHitboxEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHitboxEnum.InnerSingleton, Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHitboxEnum.InnerSingleton;
	}
	void AHitboxActor::StaticRegisterNativesAHitboxActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHitboxActor);
	UClass* Z_Construct_UClass_AHitboxActor_NoRegister()
	{
		return AHitboxActor::StaticClass();
	}
	struct Z_Construct_UClass_AHitboxActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitboxDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hitboxDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitstunTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hitstunTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_blockstunTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_blockstunTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pushbackDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pushbackDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_launchDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_launchDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_hitboxtype_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitboxtype_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_hitboxtype;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitboxLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitboxLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHitboxActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberpunkSyndicates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HitboxActor.h" },
		{ "ModuleRelativePath", "HitboxActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxDamage_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "// Amount of damage this hitbox will do.\n" },
		{ "ModuleRelativePath", "HitboxActor.h" },
		{ "ToolTip", "Amount of damage this hitbox will do." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxDamage = { "hitboxDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitboxActor, hitboxDamage), METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitstunTime_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "// Amount of hitstun this hitbox will do.\n" },
		{ "ModuleRelativePath", "HitboxActor.h" },
		{ "ToolTip", "Amount of hitstun this hitbox will do." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitstunTime = { "hitstunTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitboxActor, hitstunTime), METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitstunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitstunTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_blockstunTime_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "// Amount of blockstun this hitbox will do.\n" },
		{ "ModuleRelativePath", "HitboxActor.h" },
		{ "ToolTip", "Amount of blockstun this hitbox will do." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_blockstunTime = { "blockstunTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitboxActor, blockstunTime), METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_blockstunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_blockstunTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_pushbackDistance_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "// Amount of pushback this hitbox will do.\n" },
		{ "ModuleRelativePath", "HitboxActor.h" },
		{ "ToolTip", "Amount of pushback this hitbox will do." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_pushbackDistance = { "pushbackDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitboxActor, pushbackDistance), METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_pushbackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_pushbackDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_launchDistance_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "// Amount of distance to launch player(s).\n" },
		{ "ModuleRelativePath", "HitboxActor.h" },
		{ "ToolTip", "Amount of distance to launch player(s)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_launchDistance = { "launchDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitboxActor, launchDistance), METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_launchDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_launchDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxtype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxtype_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "// The hitbox enum instance.\n" },
		{ "ModuleRelativePath", "HitboxActor.h" },
		{ "ToolTip", "The hitbox enum instance." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxtype = { "hitboxtype", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitboxActor, hitboxtype), Z_Construct_UEnum_CyberpunkSyndicates_EHitboxEnum, METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxtype_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxtype_MetaData)) }; // 3065532037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxLocation_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "Comment", "// The location to spawn the hitbox.\n" },
		{ "ModuleRelativePath", "HitboxActor.h" },
		{ "ToolTip", "The location to spawn the hitbox." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxLocation = { "hitboxLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHitboxActor, hitboxLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitboxActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitstunTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_blockstunTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_pushbackDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_launchDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxtype_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxtype,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitboxLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHitboxActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitboxActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHitboxActor_Statics::ClassParams = {
		&AHitboxActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHitboxActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHitboxActor()
	{
		if (!Z_Registration_Info_UClass_AHitboxActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHitboxActor.OuterSingleton, Z_Construct_UClass_AHitboxActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHitboxActor.OuterSingleton;
	}
	template<> CYBERPUNKSYNDICATES_API UClass* StaticClass<AHitboxActor>()
	{
		return AHitboxActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHitboxActor);
	struct Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_HitboxActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_HitboxActor_h_Statics::EnumInfo[] = {
		{ EHitboxEnum_StaticEnum, TEXT("EHitboxEnum"), &Z_Registration_Info_UEnum_EHitboxEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3065532037U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_HitboxActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHitboxActor, AHitboxActor::StaticClass, TEXT("AHitboxActor"), &Z_Registration_Info_UClass_AHitboxActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHitboxActor), 3797468220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_HitboxActor_h_4117288148(TEXT("/Script/CyberpunkSyndicates"),
		Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_HitboxActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_HitboxActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_HitboxActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_HitboxActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
