// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AGold.generated.h"


class AM1Character;

UCLASS(config=Game)
class M1_API AAGold : public AActor
{
	GENERATED_BODY()
	
public:
	
	/** Sets default values for this actor's properties */
	AAGold();

protected:
	
	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

	/** Called when the object is created and all of it’s components have been registered and initialized */
	virtual void PostInitializeComponents() override;
	
public:
	
	/** Called every frame */
	virtual void Tick(float DeltaTime) override;

	/** Component Collider use for the BeginOverlap */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent *CollisionBox;

	/** Gives us access to our third person character */ 
	AM1Character* Perso;
	
private:
	
	/** This actor will be considered in the perception system */
	class UAIPerceptionStimuliSourceComponent* StimulusSource;
	
	/** Create the stimulus source */
	void SetupStimulusSource();

	/** The function is launched if the actor has come into contact with another specific actor and subtract the number of pieces present on the field */
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
};
