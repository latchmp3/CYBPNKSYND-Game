// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CyberpunkSyndicatesCharacter.h"
#include "CyberpunkSyndicatesGameMode.generated.h"

UCLASS(minimalapi)
class ACyberpunkSyndicatesGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACyberpunkSyndicatesGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	ACyberpunkSyndicatesCharacter* player1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	ACyberpunkSyndicatesCharacter* player2;

	//default round timer for each round
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode Settings")
	float roundTime;

	//number of rounds in set
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode Settings")
	int numRounds;

	//start timer countdown
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode Settings")
	bool isRoundTimerActive;
};



