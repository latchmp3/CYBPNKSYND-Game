// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BaseGameInstance.generated.h"

UENUM(BlueprintType)
enum class ECharacterClass : uint8
{
	E_TRNDMMY	UMETA(DisplayName = "Training Dummy"),
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

	//default round timer for each round
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode Settings")
	float roundTime;

	//number of rounds in set
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode Settings")
	int numRounds;

	//is device used by multiple players
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Controller")
	bool isDeviceShared;
};
