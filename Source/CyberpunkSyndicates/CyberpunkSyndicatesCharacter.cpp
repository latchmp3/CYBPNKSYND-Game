// Copyright Epic Games, Inc. All Rights Reserved.

#include "CyberpunkSyndicatesCharacter.h"
#include "CyberpunkSyndicatesGameMode.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"

//////////////////////////////////////////////////////////////////////////
// ACyberpunkSyndicatesCharacter

ACyberpunkSyndicatesCharacter::ACyberpunkSyndicatesCharacter()
{
	// Create a camera boom (pulls in towards the player if there is a collision)
	//CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	//CameraBoom->SetupAttachment(RootComponent);
	//CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	//CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	//FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	//FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	//FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	// set our turn rate for input
	//TurnRateGamepad = 50.f;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);


	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 140.0f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;
	

	playerHealth = 1.00f;
	otherPlayer = nullptr;
	hurtbox = nullptr;
	isFlipped = false;
	transform = FTransform();
	scale = FVector(0.0f, 0.0f, 0.0f);
	maxDistanceApart = 800.f;
	gravityScale = GetCharacterMovement()->GravityScale;

	characterState = ECharacterState::VE_Standing;
	characterClass = ECharacterClass::E_TRNDMMY;

	roundsWon = 0;

	lpPressed = false;
	rpPressed = false;
	lkPressed = false;
	rkPressed = false;

	isPlayerOne = false;
	wasBlitzUsed = false;
	hasAttackHit = false;
	hasLandedThrow = false; 

	canMove = false;
	canAttack = false;

	isCrouching = false;

	isReadyForEntrance = false;
	hasLostRound = false;
	hasWonMatch = false;

	stunTime = 0.0f;
	removeInputFromBufferTime = 1.4f;

	//Create and assign character commands.
	characterCommands.SetNum(2);

	//Command 1 assignments.
	characterCommands[0].name = "Command 1";
	characterCommands[0].inputs.Add("Right");
	characterCommands[0].inputs.Add("Left");
	characterCommands[0].inputs.Add("W");
	characterCommands[0].hasUsedCommand = false;

	//Command 2 assignments.
	characterCommands[1].name = "Command 2";
	characterCommands[1].inputs.Add("Right");
	characterCommands[1].inputs.Add("Left");
	characterCommands[1].inputs.Add("S");
	characterCommands[1].hasUsedCommand = false;


}

//////////////////////////////////////////////////////////////////////////
// Input

void ACyberpunkSyndicatesCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	if (auto gameMode = Cast<ACyberpunkSyndicatesGameMode>(GetWorld()->GetAuthGameMode()))
	{
		if (gameMode->player1 == this)	
		{
			PlayerInputComponent->BindAxis("forwardP1", this, &ACyberpunkSyndicatesCharacter::MoveForward);
			isPlayerOne = true;
		}
		else
		{
			PlayerInputComponent->BindAxis("forwardP2", this, &ACyberpunkSyndicatesCharacter::MoveForward);
			isPlayerOne = false;
		}

		
		// Set up gameplay key bindings
		PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACyberpunkSyndicatesCharacter::Jump);
		PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACyberpunkSyndicatesCharacter::StopJumping);
		PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &ACyberpunkSyndicatesCharacter::StartCrouch);
		PlayerInputComponent->BindAction("Crouch", IE_Released, this, &ACyberpunkSyndicatesCharacter::StopCrouch);
		PlayerInputComponent->BindAction("block", IE_Pressed, this, &ACyberpunkSyndicatesCharacter::StartBlocking);
		PlayerInputComponent->BindAction("block", IE_Released, this, &ACyberpunkSyndicatesCharacter::StopBlocking);
		PlayerInputComponent->BindAxis("MoveForwardController", this, &ACyberpunkSyndicatesCharacter::MoveForwardController);

		//Attack commands
		PlayerInputComponent->BindAction("leftPunch", IE_Pressed, this, &ACyberpunkSyndicatesCharacter::leftPunch);
		//PlayerInputComponent->BindAction("leftPunch", IE_Released, this, &ACyberpunkSyndicatesCharacter::leftPunch);
		PlayerInputComponent->BindAction("rightPunch", IE_Pressed, this, &ACyberpunkSyndicatesCharacter::rightPunch);
		//PlayerInputComponent->BindAction("rightPunch", IE_Released, this, &ACyberpunkSyndicatesCharacter::rightPunch);
		PlayerInputComponent->BindAction("leftKick", IE_Pressed, this, &ACyberpunkSyndicatesCharacter::leftKick);
		//PlayerInputComponent->BindAction("leftKick", IE_Released, this, &ACyberpunkSyndicatesCharacter::leftKick);
		PlayerInputComponent->BindAction("rightKick", IE_Pressed, this, &ACyberpunkSyndicatesCharacter::rightKick);
		//PlayerInputComponent->BindAction("rightKick", IE_Released, this, &ACyberpunkSyndicatesCharacter::rightKick);

		PlayerInputComponent->BindAction("blitz", IE_Pressed, this, &ACyberpunkSyndicatesCharacter::blitzAttack);

		//PlayerInputComponent->BindAction("AddInputToInputBuffer", IE_Pressed, this, &ACyberpunkSyndicatesCharacter::AddInputToInputBuffer);
	}
}



void ACyberpunkSyndicatesCharacter::MoveForward(float Value)
{
	if (auto baseGameInstance = Cast<UBaseGameInstance>(GetGameInstance()))
	{
		if (baseGameInstance->isDeviceShared)
		{
			if (canMove && !isCrouching || characterState != ECharacterState::VE_Crouching && characterState != ECharacterState::VE_HitStun && characterState != ECharacterState::VE_Block)
			{
				if (characterState != ECharacterState::VE_Jumping && characterState != ECharacterState::VE_Launched)
				{
					if (Value > 0.01f)
					{
						characterState = ECharacterState::VE_Forward;
						AddInputIconToScreen(4, hasReleasedAxisInput);
						hasReleasedAxisInput = false;
					}
					else if (Value < -0.01f)
					{
						characterState = ECharacterState::VE_Back;
						AddInputIconToScreen(5, hasReleasedAxisInput);
						hasReleasedAxisInput = false;
					}
					else
					{
						characterState = ECharacterState::VE_Standing;
						hasReleasedAxisInput = true;
					}
				}

				float currentDistanceApart = abs(otherPlayer->GetActorLocation().Y - GetActorLocation().Y);

				if (currentDistanceApart >= maxDistanceApart)
				{
					if ((currentDistanceApart + Value < currentDistanceApart && !isFlipped) || (currentDistanceApart - Value < currentDistanceApart && isFlipped))
					{
						// add movement in that direction
						AddMovementInput(FVector(0.0f, 1.0f, 0.0f), Value);
					}
				}
				else
				{
					// add movement in that direction
					AddMovementInput(FVector(0.0f, 1.0f, 0.0f), Value);
				}
			}
			else if (canMove && isCrouching || characterState == ECharacterState::VE_Crouching)
			{
				if (Value > 0.01f)
				{
					AddInputIconToScreen(9, hasReleasedAxisInput);
					hasReleasedAxisInput = false;
				}
				else if (Value < -0.01f)
				{
					AddInputIconToScreen(10, hasReleasedAxisInput);
					hasReleasedAxisInput = false;
				}
				else
				{
					hasReleasedAxisInput = true;
				}
			}
		}
	}
}

void ACyberpunkSyndicatesCharacter::MoveForwardController(float Value)
{
	if (auto baseGameInstance = Cast<UBaseGameInstance>(GetGameInstance()))
	{
		if (!baseGameInstance->isDeviceShared)
		{
			if (canMove && isCrouching || characterState != ECharacterState::VE_Crouching && characterState != ECharacterState::VE_HitStun && characterState != ECharacterState::VE_Block)
			{
				if (characterState != ECharacterState::VE_Jumping && characterState != ECharacterState::VE_Launched)
				{
					if (Value > 0.20f)
					{
						characterState = ECharacterState::VE_Forward;
						AddInputIconToScreen(4, hasReleasedAxisInput);
						hasReleasedAxisInput = false;
					}
					else if (Value < -0.20f)
					{
						characterState = ECharacterState::VE_Back;
						AddInputIconToScreen(5, hasReleasedAxisInput);
						hasReleasedAxisInput = false;
					}
					else
					{
						characterState = ECharacterState::VE_Standing;
						hasReleasedAxisInput = true;
					}
				}

				float currentDistanceApart = abs(otherPlayer->GetActorLocation().Y - GetActorLocation().Y);

				if (currentDistanceApart >= maxDistanceApart)
				{
					if ((currentDistanceApart + Value < currentDistanceApart && !isFlipped) || (currentDistanceApart - Value < currentDistanceApart && isFlipped))
					{
						// add movement in that direction
						AddMovementInput(FVector(0.0f, 1.0f, 0.0f), Value);
					}
				}
				else
				{
					// add movement in that direction
					AddMovementInput(FVector(0.0f, 1.0f, 0.0f), Value);
				}
			}
			else if (canMove && isCrouching || characterState == ECharacterState::VE_Crouching)
			{
				if (Value > 0.20f)
				{
					AddInputIconToScreen(9, hasReleasedAxisInput);
					hasReleasedAxisInput = false;
				}
				else if (Value < -0.20f)
				{
					AddInputIconToScreen(10, hasReleasedAxisInput);
					hasReleasedAxisInput = false;
				}
				else
				{
					hasReleasedAxisInput = true;
				}
			}
		}
	}
}

void ACyberpunkSyndicatesCharacter::StartBlocking()
{
	characterState = ECharacterState::VE_Block;
}

void ACyberpunkSyndicatesCharacter::StopBlocking()
{
	characterState = ECharacterState::VE_Standing;
}

void ACyberpunkSyndicatesCharacter::Jump()
{
	if (canMove && characterState != ECharacterState::VE_HitStun)
	{
		if (characterState == ECharacterState::VE_Back)
		{
			AddInputIconToScreen(11);
		}
		else if (characterState == ECharacterState::VE_Forward)
		{
			AddInputIconToScreen(8);
		}
		else
		{
			AddInputIconToScreen(7, hasReleasedAxisInput);
		}

		ACharacter::Jump();
		characterState = ECharacterState::VE_Jumping;
	}
}

void ACyberpunkSyndicatesCharacter::StopJumping()
{
	ACharacter::StopJumping();
}

void ACyberpunkSyndicatesCharacter::Landed(const FHitResult& Hit)
{
	if (characterState == ECharacterState::VE_Launched || characterState == ECharacterState::VE_Jumping)
	{
		GetCharacterMovement()->GravityScale = gravityScale;
		characterState = ECharacterState::VE_Standing;
	}
}

void ACyberpunkSyndicatesCharacter::StartCrouch()
{
	if (canMove && characterState != ECharacterState::VE_HitStun)
	{
		isCrouching = true;
		characterState = ECharacterState::VE_Crouching;
		AddInputIconToScreen(6, hasReleasedAxisInput);
	}
}

void ACyberpunkSyndicatesCharacter::StopCrouch()
{
	isCrouching = false;
	characterState = ECharacterState::VE_Standing;
}

void ACyberpunkSyndicatesCharacter::leftPunch()
{
	if (canAttack && characterState != ECharacterState::VE_HitStun)
	{
		lpPressed = true;
		AddInputIconToScreen(0, hasReleasedAxisInput);
	}
}

void ACyberpunkSyndicatesCharacter::rightPunch()
{
	if (canAttack && characterState != ECharacterState::VE_HitStun)
	{
		rpPressed = true;
		AddInputIconToScreen(1, hasReleasedAxisInput);
	}
}

void ACyberpunkSyndicatesCharacter::leftKick()
{
	if (canAttack && characterState != ECharacterState::VE_HitStun)
	{
		lkPressed = true;
		AddInputIconToScreen(2, hasReleasedAxisInput);
	}
}

void ACyberpunkSyndicatesCharacter::rightKick()
{
	if (canAttack && characterState != ECharacterState::VE_HitStun)
	{
		rkPressed = true;
		AddInputIconToScreen(3, hasReleasedAxisInput);
	}
}

void ACyberpunkSyndicatesCharacter::blitzAttack()
{
	if (canAttack && characterState != ECharacterState::VE_HitStun)
	{
		wasBlitzUsed = true;
		AddInputIconToScreen(4, hasReleasedAxisInput);
	}
}

//auto blocking functionality
void ACyberpunkSyndicatesCharacter::CollidedWProxHitbox()
{
	if ((characterState == ECharacterState::VE_Back && isFlipped) || (characterState == ECharacterState::VE_Forward && !isFlipped))
	{
		characterState = ECharacterState::VE_Block;
	}
}

void ACyberpunkSyndicatesCharacter::PerformPushback(float _pushbackAmount, float _launchAmount, bool _hasBlocked)
{
	if (_hasBlocked)
	{
		if (isFlipped)
		{
			LaunchCharacter(FVector(0.0f, -_pushbackAmount * 2.0f, 0.0f), false, false);
		}
		else
		{
			LaunchCharacter(FVector(0.0f, _pushbackAmount * 2.0f, 0.0f), false, false);
		}
	}
	else
	{
		if (_launchAmount > 0.0f)
		{
			GetCharacterMovement()->GravityScale *= 0.7;
			characterState = ECharacterState::VE_Launched;
		}

		if (isFlipped)
		{
			LaunchCharacter(FVector(0.0f, -_pushbackAmount, _launchAmount), false, false);
		}
		else
		{
			LaunchCharacter(FVector(0.0f, _pushbackAmount, _launchAmount), false, false);
		}
	}
}

void ACyberpunkSyndicatesCharacter::TakeDamage(float _damageAmount, float _stunTime, float _blockstunTime, float _pushbackAmount, float _launchAmount)
{
	if (characterState != ECharacterState::VE_Block)
	{
		playerHealth -= _damageAmount;

		stunTime = _stunTime;

		//PlayDamageSoundEffect();

		if (stunTime > 0.0f)
		{		
			characterState = ECharacterState::VE_HitStun;
			StartStun();
		}

		if (otherPlayer)
		{
			otherPlayer->hasAttackHit = true;
			otherPlayer->PerformPushback(0.0f, 0.0f, false);
		} 

		PerformPushback(_pushbackAmount, _launchAmount, false);
	}
	else
	{
		float reducedDamage = _damageAmount * NULL;
		playerHealth -= reducedDamage;

		stunTime = _blockstunTime;

		if (stunTime > 0.0f)
		{
			StartStun();
		}
		else
		{
			characterState = ECharacterState::VE_Standing;
		}

		if (otherPlayer)
		{
			otherPlayer->hasAttackHit = false;
			otherPlayer->PerformPushback(_pushbackAmount, 0.0f, false);
		}

		PerformPushback(_pushbackAmount, 0.0f, true);
	}

	if (playerHealth <= 0.00f)
	{
		playerHealth = 0.00f;
		otherPlayer->WinRound();
	}
	else if (playerHealth > 0.00f && playerHealth <= 0.30f)
	{
		EnterRage();
	}

}

void ACyberpunkSyndicatesCharacter::StartStun()
{
	canMove = false;
	GetWorld()->GetTimerManager().SetTimer(stunTimerHandle, this, &ACyberpunkSyndicatesCharacter::EndStun, stunTime, false);
}

void ACyberpunkSyndicatesCharacter::EndStun()
{
	if (characterState != ECharacterState::VE_Launched)
	{
		characterState = ECharacterState::VE_Standing;
	}

	canMove = true;
}

void ACyberpunkSyndicatesCharacter::AddInputToInputBuffer(FInputInfo _inputInfo)
{
	inputBuffer.Add(_inputInfo);
	CheckInputBufferForCommand();
	//GetWorld()->GetTimerManager().SetTimer(inputBufferTimerHandle, this, &ACyberpunkSyndicatesCharacter::RemoveInputFromInputBuffer, removeInputFromBufferTime, false);
}

void ACyberpunkSyndicatesCharacter::CheckInputBufferForCommand()
{
	int correctSequenceCounter = 0;

	for (auto currentCommand : characterCommands)
	{
		for (int commandInput = 0; commandInput < currentCommand.inputs.Num(); ++commandInput)
		{
			for (int input = 0; input < inputBuffer.Num(); ++input)
			{
				if (input + correctSequenceCounter < inputBuffer.Num())
				{
					if (inputBuffer[input + correctSequenceCounter].inputName.Compare(currentCommand.inputs[commandInput]) == 0)
					{
						++correctSequenceCounter;

						if (correctSequenceCounter == currentCommand.inputs.Num())
						{
							StartCommand(currentCommand.name);
						}

						break;
					}
					else
					{
						correctSequenceCounter = 0;
					}
				}
				else
				{
					correctSequenceCounter = 0;

				}
			}
		}
	}
}

void ACyberpunkSyndicatesCharacter::StartCommand(FString _commandName)
{
	for (int currentCommand = 0; currentCommand < characterCommands.Num(); ++currentCommand)
	{
		if (_commandName.Compare(characterCommands[currentCommand].name) == 0)
		{
			characterCommands[currentCommand].hasUsedCommand = true;
		}
	}
}

/*
void ACyberpunkSyndicatesCharacter::SetHealth(float _health)
{
	playerHealth = _health;
}
*/

void ACyberpunkSyndicatesCharacter::WinRound()
{
	otherPlayer->hasLostRound = true;
	++roundsWon;

	NotifyRoundEnd();
	UpdateHUDRoundIcons();
	
}

void ACyberpunkSyndicatesCharacter::WinMatch()
{
	canMove = false;
	canAttack = false;
	hasWonMatch = true;
}

//called every frame
void ACyberpunkSyndicatesCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (characterState != ECharacterState::VE_Jumping)
	{
		if (otherPlayer)
		{
			if (auto characterMovement = GetCharacterMovement())
			{
				if (auto enemyMovement = otherPlayer->GetCharacterMovement())
				{
					if (enemyMovement->GetActorLocation().Y <= characterMovement->GetActorLocation().Y)
					{
						if (isFlipped)
						{
							if (auto mesh = GetCapsuleComponent()->GetChildComponent(1))
							{
								transform = mesh->GetRelativeTransform();
								scale = transform.GetScale3D();
								scale.Y = -1;
								transform.SetScale3D(scale);
								mesh->SetRelativeTransform(transform);
							}
							isFlipped = false;
						}
					}
					else
					{
						if (!isFlipped)
						{
							if (auto mesh = GetCapsuleComponent()->GetChildComponent(1))
							{
								transform = mesh->GetRelativeTransform();
								scale = transform.GetScale3D();
								scale.Y = 1;
								transform.SetScale3D(scale);
								mesh->SetRelativeTransform(transform);
							}
							isFlipped = true;
						}
					}
				}
			}
		}
	}
}

/*
void ACyberpunkSyndicatesCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ACyberpunkSyndicatesCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}


void ACyberpunkSyndicatesCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}


void ACyberpunkSyndicatesCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
*/