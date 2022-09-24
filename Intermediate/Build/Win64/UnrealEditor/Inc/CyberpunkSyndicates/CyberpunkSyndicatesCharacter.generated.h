// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputInfo;
#ifdef CYBERPUNKSYNDICATES_CyberpunkSyndicatesCharacter_generated_h
#error "CyberpunkSyndicatesCharacter.generated.h already included, missing '#pragma once' in CyberpunkSyndicatesCharacter.h"
#endif
#define CYBERPUNKSYNDICATES_CyberpunkSyndicatesCharacter_generated_h

#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommand_Statics; \
	CYBERPUNKSYNDICATES_API static class UScriptStruct* StaticStruct();


template<> CYBERPUNKSYNDICATES_API UScriptStruct* StaticStruct<struct FCommand>();

#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputInfo_Statics; \
	CYBERPUNKSYNDICATES_API static class UScriptStruct* StaticStruct();


template<> CYBERPUNKSYNDICATES_API UScriptStruct* StaticStruct<struct FInputInfo>();

#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_SPARSE_DATA
#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartCommand); \
	DECLARE_FUNCTION(execCheckInputBufferForCommand); \
	DECLARE_FUNCTION(execAddInputToInputBuffer); \
	DECLARE_FUNCTION(execStopBlocking); \
	DECLARE_FUNCTION(execStartBlocking); \
	DECLARE_FUNCTION(execStopCrouch); \
	DECLARE_FUNCTION(execStartCrouch); \
	DECLARE_FUNCTION(execCollidedWProxHitbox); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartCommand); \
	DECLARE_FUNCTION(execCheckInputBufferForCommand); \
	DECLARE_FUNCTION(execAddInputToInputBuffer); \
	DECLARE_FUNCTION(execStopBlocking); \
	DECLARE_FUNCTION(execStartBlocking); \
	DECLARE_FUNCTION(execStopCrouch); \
	DECLARE_FUNCTION(execStartCrouch); \
	DECLARE_FUNCTION(execCollidedWProxHitbox); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_EVENT_PARMS \
	struct CyberpunkSyndicatesCharacter_eventAddInputIconToScreen_Parms \
	{ \
		int32 _iconIndex; \
		bool _shouldAddInput; \
	};


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_CALLBACK_WRAPPERS
#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberpunkSyndicatesCharacter(); \
	friend struct Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics; \
public: \
	DECLARE_CLASS(ACyberpunkSyndicatesCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberpunkSyndicates"), NO_API) \
	DECLARE_SERIALIZER(ACyberpunkSyndicatesCharacter)


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_INCLASS \
private: \
	static void StaticRegisterNativesACyberpunkSyndicatesCharacter(); \
	friend struct Z_Construct_UClass_ACyberpunkSyndicatesCharacter_Statics; \
public: \
	DECLARE_CLASS(ACyberpunkSyndicatesCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberpunkSyndicates"), NO_API) \
	DECLARE_SERIALIZER(ACyberpunkSyndicatesCharacter)


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACyberpunkSyndicatesCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACyberpunkSyndicatesCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberpunkSyndicatesCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberpunkSyndicatesCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACyberpunkSyndicatesCharacter(ACyberpunkSyndicatesCharacter&&); \
	NO_API ACyberpunkSyndicatesCharacter(const ACyberpunkSyndicatesCharacter&); \
public:


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACyberpunkSyndicatesCharacter(ACyberpunkSyndicatesCharacter&&); \
	NO_API ACyberpunkSyndicatesCharacter(const ACyberpunkSyndicatesCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberpunkSyndicatesCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberpunkSyndicatesCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberpunkSyndicatesCharacter)


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_54_PROLOG \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_EVENT_PARMS


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_SPARSE_DATA \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_RPC_WRAPPERS \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_CALLBACK_WRAPPERS \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_INCLASS \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_SPARSE_DATA \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_CALLBACK_WRAPPERS \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_INCLASS_NO_PURE_DECLS \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERPUNKSYNDICATES_API UClass* StaticClass<class ACyberpunkSyndicatesCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_CyberpunkSyndicatesCharacter_h


#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::VE_Standing) \
	op(ECharacterState::VE_Forward) \
	op(ECharacterState::VE_Running) \
	op(ECharacterState::VE_Back) \
	op(ECharacterState::VE_Jumping) \
	op(ECharacterState::VE_Up) \
	op(ECharacterState::VE_HitStun) \
	op(ECharacterState::VE_Block) \
	op(ECharacterState::VE_Crouching) \
	op(ECharacterState::VE_Rising) \
	op(ECharacterState::VE_Launched) 

enum class ECharacterState : uint8;
template<> CYBERPUNKSYNDICATES_API UEnum* StaticEnum<ECharacterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
