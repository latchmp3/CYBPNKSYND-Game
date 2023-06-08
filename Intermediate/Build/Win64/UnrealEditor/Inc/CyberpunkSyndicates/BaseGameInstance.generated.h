// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CYBERPUNKSYNDICATES_BaseGameInstance_generated_h
#error "BaseGameInstance.generated.h already included, missing '#pragma once' in BaseGameInstance.h"
#endif
#define CYBERPUNKSYNDICATES_BaseGameInstance_generated_h

#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_SPARSE_DATA
#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_RPC_WRAPPERS
#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGameInstance(); \
	friend struct Z_Construct_UClass_UBaseGameInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CyberpunkSyndicates"), NO_API) \
	DECLARE_SERIALIZER(UBaseGameInstance)


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUBaseGameInstance(); \
	friend struct Z_Construct_UClass_UBaseGameInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CyberpunkSyndicates"), NO_API) \
	DECLARE_SERIALIZER(UBaseGameInstance)


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGameInstance(UBaseGameInstance&&); \
	NO_API UBaseGameInstance(const UBaseGameInstance&); \
public:


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGameInstance(UBaseGameInstance&&); \
	NO_API UBaseGameInstance(const UBaseGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameInstance)


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_15_PROLOG
#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_SPARSE_DATA \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_RPC_WRAPPERS \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_INCLASS \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_SPARSE_DATA \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_INCLASS_NO_PURE_DECLS \
	FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERPUNKSYNDICATES_API UClass* StaticClass<class UBaseGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CyberpunkSyndicates_Source_CyberpunkSyndicates_BaseGameInstance_h


#define FOREACH_ENUM_ECHARACTERCLASS(op) \
	op(ECharacterClass::E_TRNDMMY) 

enum class ECharacterClass : uint8;
template<> CYBERPUNKSYNDICATES_API UEnum* StaticEnum<ECharacterClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
