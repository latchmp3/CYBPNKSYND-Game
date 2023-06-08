// Fill out your copyright notice in the Description page of Project Settings.
#include "TRNDMMYCharacter.h"

ATRNDMMYCharacter::ATRNDMMYCharacter()
{
	//set this character to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;

	//set default values for variables
	characterClass = ECharacterClass::E_TRNDMMY;
}

void ATRNDMMYCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ATRNDMMYCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void ATRNDMMYCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}