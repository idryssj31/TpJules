// Copyright Epic Games, Inc. All Rights Reserved.

#include "M1/Include/Character/Player/M1Character.h"
#include "M1/Include/Interactables/AGold.h"
#include "Components/BoxComponent.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/OutputDeviceNull.h"

#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISenseConfig_Sight.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AM1Character

AM1Character::AM1Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// if collide call the fct...
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(32.f,32.f,32.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = false; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	SetupHealthValue();
	
	SetupStimulusSource();
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	// Get all actor present on the field
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAGold::StaticClass(),FoundActors);
	UE_LOG(LogTemp, Warning, TEXT("%d"), FoundActors.Num());

	FoundGoldInScene();
}

void AM1Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	// Cam rotation
	SetupCamRotation();

}

void AM1Character::CAllHudSuppHearth()
{
	// I call the "CallSuppHudHeart" in my blueprint third person character that will call the supp heart function of the hearth Widget
	FOutputDeviceNull ar;
	CallFunctionByNameWithArguments(TEXT("CallSuppHudHeart"), ar , NULL, true);
}

void AM1Character::CAllHudSuppGold()
{
	// I call the "CallSuppHudGold" in my blueprint third person character that will call the supp gold function of the gold Widget
	FOutputDeviceNull ar;
	CallFunctionByNameWithArguments(TEXT("CallSuppHudGold"), ar , NULL, true);
}

void AM1Character::SetupStimulusSource()
{
	StimulusSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("Stimulus"));
	if (StimulusSource)
	{
		StimulusSource->RegisterForSense(TSubclassOf<UAISense_Sight>());
		StimulusSource->RegisterWithPerceptionSystem();
	}
}

void AM1Character::SetupCamRotation() const
{
	// Get player camera manager and disable all camera rotation.
	APlayerCameraManager* const camMan = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
	
	camMan->ViewPitchMax = 0.f;
	camMan->ViewPitchMin = 0.f;
	camMan->ViewYawMax = 0.f;
	camMan->ViewYawMin = 0.f;
}

void AM1Character::SetupHealthValue()
{
	// Set Health Value
	NbrHealth = NbrMaxHealth;
}

void AM1Character::FoundGoldInScene()
{
	// Increment the number of NbrGoldInScene depending on the number of actors in this class
	for (AActor* Actor : FoundActors)
	{
		NbrGoldInScene++;
	}
	UE_LOG(LogTemp, Warning, TEXT("The integer value is: %d"), NbrGoldInScene);
}


//////////////////////////////////////////////////////////////////////////
// Input

void AM1Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AM1Character::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AM1Character::Look);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AM1Character::FellOutOfWorld(const UDamageType& dmgType)
{
	if(NbrHealth < 1 )
	{
		UGameplayStatics::OpenLevel(this, TEXT("/Content/ThirdPerson/Maps/ThirdPersonMap"), true);
	}
	
	NbrHealth--;
	TeleportTo(FVector(200,200,0), FRotator(0,0,0), false, false);
	UE_LOG(LogTemp,Warning,TEXT("MyCharacter's Health is %d"), NbrHealth);

	CAllHudSuppHearth();
}



void AM1Character::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AM1Character::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}