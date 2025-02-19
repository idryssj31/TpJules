// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ATrap.generated.h"

UCLASS(config=Game)

class M1_API AATrap : public AActor
{
	GENERATED_BODY()
	
public:	

	/** Sets default values for this actor's properties */
	AATrap();

protected:

	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

public:	

	/** Called every frame */
	virtual void Tick(float DeltaTime) override;

	/** Component Collider use for the BeginOverlap */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent *CollisionBox;
	
private:
	
	/** The function is launched if the actor has come into contact with another specific actor and subtract the number of life points and reload the game if needed */
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
