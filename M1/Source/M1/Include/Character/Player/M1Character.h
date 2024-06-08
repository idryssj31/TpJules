// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Logging/LogMacros.h"
#include "M1Character.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AM1Character : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

public:
	
	/** Sets default values for this actor's properties */
	AM1Character();
	
	/** Actor Array */ 
	TArray<AActor*> FoundActors;

	/** Call a specific function in my third person blueprint */
	void CAllHudSuppHearth();
	
	/** Call a specific function in my third person blueprint */
	void CAllHudSuppGold();
	
protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
	
	/** APawn interface */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Function called when the player falls off the field and subtracted life points and teleported to a predefined location */
	virtual void FellOutOfWorld(const UDamageType& dmgType) override;
	
	/** To add mapping context */
	virtual void BeginPlay();

public:
	
	/** Returns CameraBoom subobject */
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	
	/** Returns FollowCamera subobject */
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	/** Component Collider use for the BeginOverlap */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent *CollisionBox;

	/** Integer of Max Health at the begin */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Health")
	int32 NbrMaxHealth = 5;

	/** Integer of Health Point */ 
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Health")
	int32 NbrHealth;

	/** Integer of Number of Gold coin present on the stage at the very beginning */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Gold")
	int32 NbrGoldInScene;

private:
	
	/** This actor will be considered in the perception system */
	class UAIPerceptionStimuliSourceComponent* StimulusSource;

	/** Create the stimulus source */
	void SetupStimulusSource();

	/** Setup Axe rotation of the camera */
	void SetupCamRotation() const;

	/** Setup Int Health value at the begin */
	void SetupHealthValue();

	/** Fill the array of Gold Actor */
	void FoundGoldInScene();

};

