// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CyberpunkSyndicates/CyberpunkSyndicatesCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCyberpunkSyndicatesCharacter() {}
// Cross Module References
	CYBERPUNKSYNDICATES_API UEnum* Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState();
	UPackage* Z_Construct_UPackage__Script_CyberpunkSyndicates();
	CYBERPUNKSYNDICATES_API UScriptStruct* Z_Construct_UScriptStruct_FCommand();
	CYBERPUNKSYNDICATES_API UScriptStruct* Z_Construct_UScriptStruct_FInputInfo();
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_ACyberpunkSyndicatesCharacter_NoRegister();
	CYBERPUNKSYNDICATES_API UClass* Z_Construct_UClass_ACyberpunkSyndicatesCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CYBERPUNKSYNDICATES_API UEnum* Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
	static UEnum* ECharacterState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState, Z_Construct_UPackage__Script_CyberpunkSyndicates(), TEXT("ECharacterState"));
		}
		return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
	}
	template<> CYBERPUNKSYNDICATES_API UEnum* StaticEnum<ECharacterState>()
	{
		return ECharacterState_StaticEnum();
	}
	struct Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState_Statics::Enumerators[] = {
		{ "ECharacterState::VE_Standing", (int64)ECharacterState::VE_Standing },
		{ "ECharacterState::VE_Forward", (int64)ECharacterState::VE_Forward },
		{ "ECharacterState::VE_Running", (int64)ECharacterState::VE_Running },
		{ "ECharacterState::VE_Back", (int64)ECharacterState::VE_Back },
		{ "ECharacterState::VE_Jumping", (int64)ECharacterState::VE_Jumping },
		{ "ECharacterState::VE_Up", (int64)ECharacterState::VE_Up },
		{ "ECharacterState::VE_HitStun", (int64)ECharacterState::VE_HitStun },
		{ "ECharacterState::VE_Block", (int64)ECharacterState::VE_Block },
		{ "ECharacterState::VE_Crouching", (int64)ECharacterState::VE_Crouching },
		{ "ECharacterState::VE_Rising", (int64)ECharacterState::VE_Rising },
		{ "ECharacterState::VE_Launched", (int64)ECharacterState::VE_Launched },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "VE_Back.DisplayName", "BACK" },
		{ "VE_Back.Name", "ECharacterState::VE_Back" },
		{ "VE_Block.DisplayName", "BLOCK" },
		{ "VE_Block.Name", "ECharacterState::VE_Block" },
		{ "VE_Crouching.DisplayName", "CROUCHING" },
		{ "VE_Crouching.Name", "ECharacterState::VE_Crouching" },
		{ "VE_Forward.DisplayName", "FORWARD" },
		{ "VE_Forward.Name", "ECharacterState::VE_Forward" },
		{ "VE_HitStun.DisplayName", "HITSTUN" },
		{ "VE_HitStun.Name", "ECharacterState::VE_HitStun" },
		{ "VE_Jumping.DisplayName", "JUMPING" },
		{ "VE_Jumping.Name", "ECharacterState::VE_Jumping" },
		{ "VE_Launched.DisplayName", "LAUNCHED" },
		{ "VE_Launched.Name", "ECharacterState::VE_Launched" },
		{ "VE_Rising.DisplayName", "RISING" },
		{ "VE_Rising.Name", "ECharacterState::VE_Rising" },
		{ "VE_Running.DisplayName", "RUNNING" },
		{ "VE_Running.Name", "ECharacterState::VE_Running" },
		{ "VE_Standing.DisplayName", "STANDING" },
		{ "VE_Standing.Name", "ECharacterState::VE_Standing" },
		{ "VE_Up.DisplayName", "UP" },
		{ "VE_Up.Name", "ECharacterState::VE_Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CyberpunkSyndicates,
		nullptr,
		"ECharacterState",
		"ECharacterState",
		Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState()
	{
		if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Command;
class UScriptStruct* FCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Command.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Command.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommand, Z_Construct_UPackage__Script_CyberpunkSyndicates(), TEXT("Command"));
	}
	return Z_Registration_Info_UScriptStruct_Command.OuterSingleton;
}
template<> CYBERPUNKSYNDICATES_API UScriptStruct* StaticStruct<FCommand>()
{
	return FCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasUsedCommand_MetaData[];
#endif
		static void NewProp_hasUsedCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasUsedCommand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommand, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_name_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs_Inner = { "inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs = { "inputs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommand, inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand_SetBit(void* Obj)
	{
		((FCommand*)Obj)->hasUsedCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand = { "hasUsedCommand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCommand), &Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CyberpunkSyndicates,
		nullptr,
		&NewStructOps,
		"Command",
		sizeof(FCommand),
		alignof(FCommand),
		Z_Construct_UScriptStruct_FCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_Command.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Command.InnerSingleton, Z_Construct_UScriptStruct_FCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Command.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputInfo;
class UScriptStruct* FInputInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputInfo, Z_Construct_UPackage__Script_CyberpunkSyndicates(), TEXT("InputInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InputInfo.OuterSingleton;
}
template<> CYBERPUNKSYNDICATES_API UScriptStruct* StaticStruct<FInputInfo>()
{
	return FInputInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_inputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeStamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputName = { "inputName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputInfo, inputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_timeStamp_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_timeStamp = { "timeStamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputInfo, timeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_timeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_timeStamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_timeStamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CyberpunkSyndicates,
		nullptr,
		&NewStructOps,
		"InputInfo",
		sizeof(FInputInfo),
		alignof(FInputInfo),
		Z_Construct_UScriptStruct_FInputInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_InputInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputInfo.InnerSingleton, Z_Construct_UScriptStruct_FInputInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(ACyberpunkSyndicatesCharacter::execWinMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WinMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunkSyndicatesCharacter::execWinRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WinRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunkSyndicatesCharacter::execStartCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__commandName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCommand(Z_Param__commandName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunkSyndicatesCharacter::execCheckInputBufferForCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckInputBufferForCommand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunkSyndicatesCharacter::execAddInputToInputBuffer)
	{
		P_GET_STRUCT(FInputInfo,Z_Param__inputInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInputToInputBuffer(Z_Param__inputInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunkSyndicatesCharacter::execStopBlocking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopBlocking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunkSyndicatesCharacter::execStartBlocking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartBlocking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunkSyndicatesCharacter::execStopCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunkSyndicatesCharacter::execStartCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunkSyndicatesCharacter::execCollidedWProxHitbox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollidedWProxHitbox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACyberpunkSyndicatesCharacter::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__damageAmount);
		P_GET_PROPERTY(FFloatProperty,Z_Param__stunTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param__blockstunTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param__pushbackAmount);
		P_GET_PROPERTY(FFloatProperty,Z_Param__launchAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param__damageAmount,Z_Param__stunTime,Z_Param__blockstunTime,Z_Param__pushbackAmount,Z_Param__launchAmount);
		P_NATIVE_END;
	}
	static FName NAME_ACyberpunkSyndicatesCharacter_AddInputIconToScreen = FName(TEXT("AddInputIconToScreen"));
	void ACyberpunkSyndicatesCharacter::AddInputIconToScreen(int32 _iconIndex, bool _shouldAddInput)
	{
		CyberpunkSyndicatesCharacter_eventAddInputIconToScreen_Parms Parms;
		Parms._iconIndex=_iconIndex;
		Parms._shouldAddInput=_shouldAddInput ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACyberpunkSyndicatesCharacter_AddInputIconToScreen),&Parms);
	}
	static FName NAME_ACyberpunkSyndicatesCharacter_EnterRage = FName(TEXT("EnterRage"));
	void ACyberpunkSyndicatesCharacter::EnterRage()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACyberpunkSyndicatesCharacter_EnterRage),NULL);
	}
	static FName NAME_ACyberpunkSyndicatesCharacter_NotifyRoundEnd = FName(TEXT("NotifyRoundEnd"));
	void ACyberpunkSyndicatesCharacter::NotifyRoundEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACyberpunkSyndicatesCharacter_NotifyRoundEnd),NULL);
	}
	static FName NAME_ACyberpunkSyndicatesCharacter_NotifyRoundStart = FName(TEXT("NotifyRoundStart"));
	void ACyberpunkSyndicatesCharacter::NotifyRoundStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACyberpunkSyndicatesCharacter_NotifyRoundStart),NULL);
	}
	static FName NAME_ACyberpunkSyndicatesCharacter_PlayDamageSoundEffect = FName(TEXT("PlayDamageSoundEffect"));
	void ACyberpunkSyndicatesCharacter::PlayDamageSoundEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACyberpunkSyndicatesCharacter_PlayDamageSoundEffect),NULL);
	}
	static FName NAME_ACyberpunkSyndicatesCharacter_UpdateHUDRoundIcons = FName(TEXT("UpdateHUDRoundIcons"));
	void ACyberpunkSyndicatesCharacter::UpdateHUDRoundIcons()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACyberpunkSyndicatesCharacter_UpdateHUDRoundIcons),NULL);
	}
	void ACyberpunkSyndicatesCharacter::StaticRegisterNativesACyberpunkSyndicatesCharacter()
	{
		UClass* Class = ACyberpunkSyndicatesCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInputToInputBuffer", &ACyberpunkSyndicatesCharacter::execAddInputToInputBuffer },
			{ "CheckInputBufferForCommand", &ACyberpunkSyndicatesCharacter::execCheckInputBufferForCommand },
			{ "CollidedWProxHitbox", &ACyberpunkSyndicatesCharacter::execCollidedWProxHitbox },
			{ "StartBlocking", &ACyberpunkSyndicatesCharacter::execStartBlocking },
			{ "StartCommand", &ACyberpunkSyndicatesCharacter::execStartCommand },
			{ "StartCrouch", &ACyberpunkSyndicatesCharacter::execStartCrouch },
			{ "StopBlocking", &ACyberpunkSyndicatesCharacter::execStopBlocking },
			{ "StopCrouch", &ACyberpunkSyndicatesCharacter::execStopCrouch },
			{ "TakeDamage", &ACyberpunkSyndicatesCharacter::execTakeDamage },
			{ "WinMatch", &ACyberpunkSyndicatesCharacter::execWinMatch },
			{ "WinRound", &ACyberpunkSyndicatesCharacter::execWinRound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__iconIndex;
		static void NewProp__shouldAddInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__shouldAddInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::NewProp__iconIndex = { "_iconIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberpunkSyndicatesCharacter_eventAddInputIconToScreen_Parms, _iconIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::NewProp__shouldAddInput_SetBit(void* Obj)
	{
		((CyberpunkSyndicatesCharacter_eventAddInputIconToScreen_Parms*)Obj)->_shouldAddInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::NewProp__shouldAddInput = { "_shouldAddInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CyberpunkSyndicatesCharacter_eventAddInputIconToScreen_Parms), &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::NewProp__shouldAddInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::NewProp__iconIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::NewProp__shouldAddInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "AddInputIconToScreen", nullptr, nullptr, sizeof(CyberpunkSyndicatesCharacter_eventAddInputIconToScreen_Parms), Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics
	{
		struct CyberpunkSyndicatesCharacter_eventAddInputToInputBuffer_Parms
		{
			FInputInfo _inputInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp__inputInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics::NewProp__inputInfo = { "_inputInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberpunkSyndicatesCharacter_eventAddInputToInputBuffer_Parms, _inputInfo), Z_Construct_UScriptStruct_FInputInfo, METADATA_PARAMS(nullptr, 0) }; // 3516994199
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics::NewProp__inputInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//adds inputs to input buffer\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "adds inputs to input buffer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "AddInputToInputBuffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics::CyberpunkSyndicatesCharacter_eventAddInputToInputBuffer_Parms), Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CheckInputBufferForCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CheckInputBufferForCommand_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//check if the input buffer contains valid command\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "check if the input buffer contains valid command" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CheckInputBufferForCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "CheckInputBufferForCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CheckInputBufferForCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CheckInputBufferForCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CheckInputBufferForCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CheckInputBufferForCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CollidedWProxHitbox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CollidedWProxHitbox_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//determine what char should do after colliding w/ proximity hitbox\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "determine what char should do after colliding w/ proximity hitbox" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CollidedWProxHitbox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "CollidedWProxHitbox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CollidedWProxHitbox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CollidedWProxHitbox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CollidedWProxHitbox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CollidedWProxHitbox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_EnterRage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_EnterRage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_EnterRage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "EnterRage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_EnterRage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_EnterRage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_EnterRage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_EnterRage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "NotifyRoundEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "NotifyRoundStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_PlayDamageSoundEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_PlayDamageSoundEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_PlayDamageSoundEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "PlayDamageSoundEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_PlayDamageSoundEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_PlayDamageSoundEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_PlayDamageSoundEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_PlayDamageSoundEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartBlocking_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartBlocking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "StartBlocking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics
	{
		struct CyberpunkSyndicatesCharacter_eventStartCommand_Parms
		{
			FString _commandName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__commandName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics::NewProp__commandName = { "_commandName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberpunkSyndicatesCharacter_eventStartCommand_Parms, _commandName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics::NewProp__commandName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//make character use command based of name\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "make character use command based of name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "StartCommand", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics::CyberpunkSyndicatesCharacter_eventStartCommand_Parms), Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCrouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCrouch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Make character crouch\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Make character crouch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "StartCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopBlocking_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopBlocking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "StopBlocking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopCrouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopCrouch_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Make character stop crouching\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Make character stop crouching" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "StopCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics
	{
		struct CyberpunkSyndicatesCharacter_eventTakeDamage_Parms
		{
			float _damageAmount;
			float _stunTime;
			float _blockstunTime;
			float _pushbackAmount;
			float _launchAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__damageAmount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp__stunTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp__blockstunTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp__pushbackAmount;
		static const UECodeGen_Private::FFloatPropertyParams NewProp__launchAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::NewProp__damageAmount = { "_damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberpunkSyndicatesCharacter_eventTakeDamage_Parms, _damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::NewProp__stunTime = { "_stunTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberpunkSyndicatesCharacter_eventTakeDamage_Parms, _stunTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::NewProp__blockstunTime = { "_blockstunTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberpunkSyndicatesCharacter_eventTakeDamage_Parms, _blockstunTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::NewProp__pushbackAmount = { "_pushbackAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberpunkSyndicatesCharacter_eventTakeDamage_Parms, _pushbackAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::NewProp__launchAmount = { "_launchAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CyberpunkSyndicatesCharacter_eventTakeDamage_Parms, _launchAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::NewProp__damageAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::NewProp__stunTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::NewProp__blockstunTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::NewProp__pushbackAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::NewProp__launchAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Damage player\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Damage player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::CyberpunkSyndicatesCharacter_eventTakeDamage_Parms), Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_UpdateHUDRoundIcons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_UpdateHUDRoundIcons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_UpdateHUDRoundIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "UpdateHUDRoundIcons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_UpdateHUDRoundIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_UpdateHUDRoundIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_UpdateHUDRoundIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_UpdateHUDRoundIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinMatch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "WinMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinRound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACyberpunkSyndicatesCharacter, nullptr, "WinRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACyberpunkSyndicatesCharacter);
	UClass* Z_Construct_UClass_ACyberpunkSyndicatesCharacter_NoRegister()
	{
		return ACyberpunkSyndicatesCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inputBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_inputBuffer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_characterCommands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterCommands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_characterCommands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isPlayerOne_MetaData[];
#endif
		static void NewProp_isPlayerOne_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPlayerOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasReleasedAxisInput_MetaData[];
#endif
		static void NewProp_hasReleasedAxisInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasReleasedAxisInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxDistanceApart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxDistanceApart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hurtbox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hurtbox;
		static const UECodeGen_Private::FBytePropertyParams NewProp_characterClass_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterClass_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_characterClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_characterState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_characterState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_characterState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canMove_MetaData[];
#endif
		static void NewProp_canMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isCrouching_MetaData[];
#endif
		static void NewProp_isCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isCrouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stunTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stunTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isFlipped_MetaData[];
#endif
		static void NewProp_isFlipped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isFlipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_roundsWon_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_roundsWon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canAttack_MetaData[];
#endif
		static void NewProp_canAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lpPressed_MetaData[];
#endif
		static void NewProp_lpPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_lpPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rpPressed_MetaData[];
#endif
		static void NewProp_rpPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_rpPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lkPressed_MetaData[];
#endif
		static void NewProp_lkPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_lkPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rkPressed_MetaData[];
#endif
		static void NewProp_rkPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_rkPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wasBlitzUsed_MetaData[];
#endif
		static void NewProp_wasBlitzUsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_wasBlitzUsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasAttackHit_MetaData[];
#endif
		static void NewProp_hasAttackHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasAttackHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasLandedThrow_MetaData[];
#endif
		static void NewProp_hasLandedThrow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasLandedThrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isReadyForEntrance_MetaData[];
#endif
		static void NewProp_isReadyForEntrance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isReadyForEntrance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasLostRound_MetaData[];
#endif
		static void NewProp_hasLostRound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasLostRound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasWonMatch_MetaData[];
#endif
		static void NewProp_hasWonMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasWonMatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CyberpunkSyndicates,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputIconToScreen, "AddInputIconToScreen" }, // 3818225629
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_AddInputToInputBuffer, "AddInputToInputBuffer" }, // 771701734
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CheckInputBufferForCommand, "CheckInputBufferForCommand" }, // 3976128247
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_CollidedWProxHitbox, "CollidedWProxHitbox" }, // 3966953579
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_EnterRage, "EnterRage" }, // 1668387997
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundEnd, "NotifyRoundEnd" }, // 3167071489
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_NotifyRoundStart, "NotifyRoundStart" }, // 19599558
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_PlayDamageSoundEffect, "PlayDamageSoundEffect" }, // 4077274766
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartBlocking, "StartBlocking" }, // 2002923832
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCommand, "StartCommand" }, // 234375280
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StartCrouch, "StartCrouch" }, // 3016993379
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopBlocking, "StopBlocking" }, // 2768525146
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_StopCrouch, "StopCrouch" }, // 3218737422
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_TakeDamage, "TakeDamage" }, // 4167231839
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_UpdateHUDRoundIcons, "UpdateHUDRoundIcons" }, // 713751587
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinMatch, "WinMatch" }, // 3677075826
		{ &Z_Construct_UFunction_ACyberpunkSyndicatesCharacter_WinRound, "WinRound" }, // 3511741884
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_inputBuffer_Inner = { "inputBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputInfo, METADATA_PARAMS(nullptr, 0) }; // 3516994199
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_inputBuffer_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//the array of inputs the player controlling this character has performed\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "the array of inputs the player controlling this character has performed" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_inputBuffer = { "inputBuffer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, inputBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_inputBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_inputBuffer_MetaData)) }; // 3516994199
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterCommands_Inner = { "characterCommands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCommand, METADATA_PARAMS(nullptr, 0) }; // 4182804762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterCommands_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterCommands = { "characterCommands", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, characterCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterCommands_MetaData)) }; // 4182804762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isPlayerOne_MetaData[] = {
		{ "Category", "Input Stack" },
		{ "Comment", "//Is character conntrolled by P1?\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Is character conntrolled by P1?" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isPlayerOne_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->isPlayerOne = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isPlayerOne = { "isPlayerOne", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isPlayerOne_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isPlayerOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isPlayerOne_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasReleasedAxisInput_MetaData[] = {
		{ "Category", "Input Stack" },
		{ "Comment", "// has player released directional input\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "has player released directional input" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasReleasedAxisInput_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->hasReleasedAxisInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasReleasedAxisInput = { "hasReleasedAxisInput", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasReleasedAxisInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasReleasedAxisInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasReleasedAxisInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_maxDistanceApart_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Max distance players can be apart\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Max distance players can be apart" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_maxDistanceApart = { "maxDistanceApart", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, maxDistanceApart), METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_maxDistanceApart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_maxDistanceApart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_otherPlayer_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_otherPlayer = { "otherPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, otherPlayer), Z_Construct_UClass_ACyberpunkSyndicatesCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_otherPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_otherPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hurtbox_MetaData[] = {
		{ "Category", "Hitbox" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hurtbox = { "hurtbox", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, hurtbox), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hurtbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hurtbox_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterClass_MetaData[] = {
		{ "Category", "Character Details" },
		{ "Comment", "//current class of character\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "current class of character" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterClass = { "characterClass", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, characterClass), Z_Construct_UEnum_CyberpunkSyndicates_ECharacterClass, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterClass_MetaData)) }; // 4191807639
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterState_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//direction char is moving or pressing\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "direction char is moving or pressing" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterState = { "characterState", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, characterState), Z_Construct_UEnum_CyberpunkSyndicates_ECharacterState, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterState_MetaData)) }; // 2069903104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canMove_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//is player able to move?\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "is player able to move?" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canMove_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->canMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canMove = { "canMove", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isCrouching_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//is the character crouching?\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "is the character crouching?" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isCrouching_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->isCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isCrouching = { "isCrouching", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isCrouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_stunTime_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//amount of time character is in - hitstun, blockstun, etc.\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "amount of time character is in - hitstun, blockstun, etc." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_stunTime = { "stunTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, stunTime), METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_stunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_stunTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_gravityScale_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "//scaled value of gravity (how long player(s) stays in air) \n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "scaled value of gravity (how long player(s) stays in air)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_gravityScale = { "gravityScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, gravityScale), METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_gravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_gravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_scale_MetaData[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_transform_MetaData[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isFlipped_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "//check if model is flipped\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "check if model is flipped" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isFlipped_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->isFlipped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isFlipped = { "isFlipped", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isFlipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isFlipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isFlipped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_playerHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_playerHealth = { "playerHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, playerHealth), METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_playerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_playerHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_roundsWon_MetaData[] = {
		{ "Category", "Game Logic" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_roundsWon = { "roundsWon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACyberpunkSyndicatesCharacter, roundsWon), METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_roundsWon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_roundsWon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canAttack_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//can player use attacks\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "can player use attacks" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canAttack_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->canAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canAttack = { "canAttack", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lpPressed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Was Left Punch (1) used \n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Was Left Punch (1) used" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lpPressed_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->lpPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lpPressed = { "lpPressed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lpPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lpPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lpPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rpPressed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Was Right Punch (2) used \n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Was Right Punch (2) used" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rpPressed_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->rpPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rpPressed = { "rpPressed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rpPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rpPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rpPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lkPressed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Was Left Kick (3) used \n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Was Left Kick (3) used" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lkPressed_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->lkPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lkPressed = { "lkPressed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lkPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lkPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lkPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rkPressed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Was Right Kick (4) used \n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Was Right Kick (4) used" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rkPressed_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->rkPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rkPressed = { "rkPressed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rkPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rkPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rkPressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_wasBlitzUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Was blitz attack used\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Was blitz attack used" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_wasBlitzUsed_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->wasBlitzUsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_wasBlitzUsed = { "wasBlitzUsed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_wasBlitzUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_wasBlitzUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_wasBlitzUsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasAttackHit_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//Attack landed?\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Attack landed?" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasAttackHit_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->hasAttackHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasAttackHit = { "hasAttackHit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasAttackHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasAttackHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasAttackHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLandedThrow_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "//Throw landed?\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "Throw landed?" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLandedThrow_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->hasLandedThrow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLandedThrow = { "hasLandedThrow", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLandedThrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLandedThrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLandedThrow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isReadyForEntrance_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "//is character ready to play entrance anim?\n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "is character ready to play entrance anim?" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isReadyForEntrance_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->isReadyForEntrance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isReadyForEntrance = { "isReadyForEntrance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isReadyForEntrance_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isReadyForEntrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isReadyForEntrance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLostRound_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "// determines loser of round \n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "determines loser of round" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLostRound_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->hasLostRound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLostRound = { "hasLostRound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLostRound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLostRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLostRound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasWonMatch_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "// determines winner of round \n" },
		{ "ModuleRelativePath", "CyberpunkSyndicatesCharacter.h" },
		{ "ToolTip", "determines winner of round" },
	};
#endif
	void Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasWonMatch_SetBit(void* Obj)
	{
		((ACyberpunkSyndicatesCharacter*)Obj)->hasWonMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasWonMatch = { "hasWonMatch", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACyberpunkSyndicatesCharacter), &Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasWonMatch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasWonMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasWonMatch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_inputBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_inputBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterCommands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isPlayerOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasReleasedAxisInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_maxDistanceApart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_otherPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hurtbox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_characterState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_stunTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_gravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isFlipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_playerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_roundsWon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_canAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lpPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rpPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_lkPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_rkPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_wasBlitzUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasAttackHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLandedThrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_isReadyForEntrance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasLostRound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::NewProp_hasWonMatch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACyberpunkSyndicatesCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::ClassParams = {
		&ACyberpunkSyndicatesCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACyberpunkSyndicatesCharacter()
	{
		if (!Z_Registration_Info_UClass_ACyberpunkSyndicatesCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACyberpunkSyndicatesCharacter.OuterSingleton, Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACyberpunkSyndicatesCharacter.OuterSingleton;
	}
	template<> CYBERPUNKSYNDICATES_API UClass* StaticClass<ACyberpunkSyndicatesCharacter>()
	{
		return ACyberpunkSyndicatesCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACyberpunkSyndicatesCharacter);
	struct Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_Statics::EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2069903104U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_Statics::ScriptStructInfo[] = {
		{ FCommand::StaticStruct, Z_Construct_UScriptStruct_FCommand_Statics::NewStructOps, TEXT("Command"), &Z_Registration_Info_UScriptStruct_Command, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommand), 4182804762U) },
		{ FInputInfo::StaticStruct, Z_Construct_UScriptStruct_FInputInfo_Statics::NewStructOps, TEXT("InputInfo"), &Z_Registration_Info_UScriptStruct_InputInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputInfo), 3516994199U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACyberpunkSyndicatesCharacter, ACyberpunkSyndicatesCharacter::StaticClass, TEXT("ACyberpunkSyndicatesCharacter"), &Z_Registration_Info_UClass_ACyberpunkSyndicatesCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACyberpunkSyndicatesCharacter), 2100331298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_3545572897(TEXT("/Script/CyberpunkSyndicates"),
		Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
