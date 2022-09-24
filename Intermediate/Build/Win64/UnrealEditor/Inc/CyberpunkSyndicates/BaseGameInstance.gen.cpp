// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberpunkSyndicates/BaseGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameInstance() {}
// Cross Module References
	CYBERPUNKSYNDICATES_API UEnum* Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass();
	UPackage* Z_Construct_UPackage__Script_CyberpunkSyndicates();
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister();
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_UBaseGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterClass;
	static UEnum* ECharacterClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass, Z_Construct_UPackage__Script_CyberpunkSyndicates(), TEXT("ECharacterClass"));
		}
		return Z_Registration_Info_UEnum_ECharacterClass.OuterSingleton;
	}
	template<> CYBERPUNKSYNDICATES_API UEnum* StaticEnum<ECharacterClass>()
	{
		return ECharacterClass_StaticEnum();
	}
	struct Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass_Statics::Enumerators[] = {
		{ "ECharacterClass::VE_TRNDMMY", (int64)ECharacterClass::VE_TRNDMMY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
		{ "VE_TRNDMMY.DisplayName", "Training Dummy" },
		{ "VE_TRNDMMY.Name", "ECharacterClass::VE_TRNDMMY" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CyberpunkSyndicates,
		nullptr,
		"ECharacterClass",
		"ECharacterClass",
		Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass()
	{
		if (!Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton, Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterClass.InnerSingleton;
	}
	void UBaseGameInstance::StaticRegisterNativesUBaseGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseGameInstance);
	UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister()
	{
		return UBaseGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBaseGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_P1CharacterClass_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P1CharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_P1CharacterClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_P2CharacterClass_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2CharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_P2CharacterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDeviceShared_MetaData[];
#endif
		static void NewProp_isDeviceShared_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDeviceShared;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberpunkSyndicates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGameInstance.h" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1CharacterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1CharacterClass_MetaData[] = {
		{ "Category", "PlayerReferences" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1CharacterClass = { "P1CharacterClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGameInstance, P1CharacterClass), Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass, METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1CharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1CharacterClass_MetaData)) }; // 4224459901
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2CharacterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2CharacterClass_MetaData[] = {
		{ "Category", "PlayerReferences" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2CharacterClass = { "P2CharacterClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGameInstance, P2CharacterClass), Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass, METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2CharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2CharacterClass_MetaData)) }; // 4224459901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceShared_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "//is device used by multiple players\n" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
		{ "ToolTip", "is device used by multiple players" },
	};
#endif
	void Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceShared_SetBit(void* Obj)
	{
		((UBaseGameInstance*)Obj)->isDeviceShared = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceShared = { "isDeviceShared", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseGameInstance), &Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceShared_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceShared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceShared_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1CharacterClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2CharacterClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceShared,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseGameInstance_Statics::ClassParams = {
		&UBaseGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseGameInstance()
	{
		if (!Z_Registration_Info_UClass_UBaseGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseGameInstance.OuterSingleton, Z_Construct_UClass_UBaseGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseGameInstance.OuterSingleton;
	}
	template<> CYBERPUNKSYNDICATES_API UClass* StaticClass<UBaseGameInstance>()
	{
		return UBaseGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGameInstance);
	struct Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_Statics::EnumInfo[] = {
		{ ECharacterClass_StaticEnum, TEXT("ECharacterClass"), &Z_Registration_Info_UEnum_ECharacterClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4224459901U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseGameInstance, UBaseGameInstance::StaticClass, TEXT("UBaseGameInstance"), &Z_Registration_Info_UClass_UBaseGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseGameInstance), 2310643473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_3462745715(TEXT("/Script/CyberpunkSyndicates"),
		Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
