// Copyright Epic Games, Inc. All Rights Reserved.

#include "CyberpunkSyndicatesGameMode.h"
#include "CyberpunkSyndicatesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACyberpunkSyndicatesGameMode::ACyberpunkSyndicatesGameMode()
{
	// set default pawn class to our Blueprinted character
	numRounds = 3;
	roundTime = 60;
	isRoundTimerActive = false;
}
