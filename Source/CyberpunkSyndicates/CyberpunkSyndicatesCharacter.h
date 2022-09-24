// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CyberpunkSyndicatesCharacter.generated.h"

UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	VE_Standing		UMETA(DisplayName = "STANDING"),
	VE_Forward		UMETA(DisplayName = "FORWARD"),
	VE_Running		UMETA(DisplayName = "RUNNING"),
	VE_Back			UMETA(DisplayName = "BACK"),
	VE_Jumping		UMETA(DisplayName = "JUMPING"),
	VE_Up			UMETA(DisplayName = "UP"),
	VE_HitStun		UMETA(DisplayName = "HITSTUN"),
	VE_Block		UMETA(DisplayName = "BLOCK"),
	VE_Crouching	UMETA(DisplayName = "CROUCHING"),
	VE_Rising		UMETA(DisplayName = "RISING"),
	VE_Launched		UMETA(DisplayName = "LAUNCHED")
};

USTRUCT(BlueprintType)
struct FCommand
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	TArray<FString> inputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	bool hasUsedCommand;
};

USTRUCT(BlueprintType)
struct FInputInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	FString inputName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	float timeStamp;
};

UCLASS(config=Game)
class ACyberpunkSyndicatesCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	//class USpringArmComponent* CameraBoom;

	/** Follow camera */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	//class UCameraComponent* FollowCamera;

	void leftPunch();
	void rightPunch();
	void leftKick();
	void rightKick();

	void blitzAttack();


	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Input)
	//float TurnRateGamepad;

protected:
	//used to move char using controller
	void MoveForwardController(float _val);

	/** Called for forwards/backward input */
	void MoveForward(float _val);

	/** Called for side to side input */
	//void MoveRight(float Val);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	//void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	//void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	//void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	//void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	//ECharacterClass characterClass

	// called every frame
	virtual void Tick(float DeltaTime) override;

	//Override the ACharacter and APawn functionality to have more control over jumps and landings.
	virtual void Jump() override;
	virtual void StopJumping() override;
	virtual void Landed(const FHitResult& Hit) override;


	//Enter Hit stun state.
	void StartStun();

	//Exit Hit stun state.
	void EndStun();

	//Damage player
	UFUNCTION(BlueprintCallable)
	void TakeDamage(float _damageAmount, float _stunTime, float _blockstunTime, float _pushbackAmount, float _launchAmount);

	UFUNCTION(BlueprintImplementableEvent)
	void EnterRage();

	//determine what char should do after colliding w/ proximity hitbox
	UFUNCTION(BlueprintCallable)
	void CollidedWProxHitbox();

	//determine how far chars ger pushed back
	void PerformPushback(float _pushbackAmount, float _launchAmount, bool _hasBlocked);

	//Make character crouch
	UFUNCTION(BlueprintCallable)
	void StartCrouch();

	//Make character stop crouching
	UFUNCTION(BlueprintCallable)
	void StopCrouch();

	UFUNCTION(BlueprintCallable)
	void StartBlocking();

	UFUNCTION(BlueprintCallable)
	void StopBlocking();

	//adds inputs to input buffer
	UFUNCTION(BlueprintCallable)
	void AddInputToInputBuffer(FInputInfo _inputInfo);

	//check if the input buffer contains valid command
	UFUNCTION(BlueprintCallable)
	void CheckInputBufferForCommand();

	//make character use command based of name
	UFUNCTION(BlueprintCallable)
	void StartCommand(FString _commandName);

	UFUNCTION(BlueprintImplementableEvent)
	void AddInputIconToScreen(int _iconIndex, bool _shouldAddInput = true);

	//the array of inputs the player controlling this character has performed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	TArray<FInputInfo> inputBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	TArray<FCommand> characterCommands;

	// has player released directional input
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Stack")
	bool hasReleasedAxisInput;

	//Max distance players can be apart
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float maxDistanceApart;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player References")
	ACyberpunkSyndicatesCharacter* otherPlayer;

	//Is character conntrolled by P1?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input Stack")
	bool isPlayerOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	AActor* hurtbox;

	//direction char is moving or pressing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	ECharacterState characterState;

	//is player able to move?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool canMove;

	//amount of time character is in - hitstun, blockstun, etc.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float stunTime;

	//scaled value of gravity (how long player(s) stays in air) 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float gravityScale;

	// timer handle for all stuns
	FTimerHandle stunTimerHandle;

	// timer handle to remove inputs from input buffer
	//FTimerHandle inputBufferTimerHandle;

	//amount of time before inputs are removed from input buffer
	float removeInputFromBufferTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Model")
	FVector scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Model")
	FTransform transform;

	//check if model is flipped
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Model")
	bool isFlipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float playerHealth;

	// Was Left Punch (1) used 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacks")
	bool lpPressed;

	// Was Right Punch (2) used 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacks")
	bool rpPressed;

	// Was Left Kick (3) used 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacks")
	bool lkPressed;

	// Was Right Kick (4) used 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacks")
	bool rkPressed;

	// Was blitz attack used
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacks")
	bool wasBlitzUsed;

	//Attack landed?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attacks")
	bool hasAttackHit;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	ACyberpunkSyndicatesCharacter();

	/** Returns CameraBoom subobject **/
	//FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	//FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

