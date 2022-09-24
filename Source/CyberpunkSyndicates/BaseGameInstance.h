// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BaseGameInstance.generated.h"

UENUM(BlueprintType)
enum class ECharacterClass : uint8
{
	VE_TRNDMMY	UMETA(DisplayName = "Training Dummy"),
};

UCLASS()
class CYBERPUNKSYNDICATES_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerReferences")
	ECharacterClass P1CharacterClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerReferences")
	ECharacterClass P2CharacterClass;

	//is device used by multiple players
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controller")
	bool isDeviceShared;
};
