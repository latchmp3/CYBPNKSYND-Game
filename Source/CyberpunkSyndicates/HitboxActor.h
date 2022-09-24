// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitboxActor.generated.h"

UENUM(BlueprintType)
enum class EHitboxEnum : uint8
{
	HB_PROXIMITY	UMETA(DisplayName = "Proximity"),
	HB_ACTIVE		UMETA(DisplayName = "Active"),
	HB_HURTBOX		UMETA(DisplayName = "Hurtbox")
};

UCLASS()
class CYBERPUNKSYNDICATES_API AHitboxActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHitboxActor();

	// Amount of damage this hitbox will do.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	float hitboxDamage;

	// Amount of hitstun this hitbox will do.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	float hitstunTime;

	// Amount of blockstun this hitbox will do.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	float blockstunTime;

	// Amount of pushback this hitbox will do.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	float pushbackDistance;

	// Amount of distance to launch player(s).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	float launchDistance;

	// The hitbox enum instance.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	EHitboxEnum hitboxtype;

	// The location to spawn the hitbox.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	FVector hitboxLocation;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};