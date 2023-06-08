// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CyberpunkSyndicatesCharacter.h"
#include "TRNDMMYCharacter.generated.h"

UCLASS()
class CYBERPUNKSYNDICATES_API ATRNDMMYCharacter : public ACyberpunkSyndicatesCharacter
{
	GENERATED_BODY()
	
public:
	// set default values for character properties
	ATRNDMMYCharacter();

protected:
	// called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// called every frame
	virtual void Tick(float DeltaTime) override;

	// called to bing functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
