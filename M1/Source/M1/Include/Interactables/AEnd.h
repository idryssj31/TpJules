// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AEnd.generated.h"

UCLASS()
class M1_API AAEnd : public AActor
{
	GENERATED_BODY()
	
public:
	
	/** Sets default values for this actor's properties */
	AAEnd();

	/** Component Collider use for the BeginOverlap */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent *CollisionBox;
	
protected:
	
	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

public:
	
	/** Called every frame */
	virtual void Tick(float DeltaTime) override;


private:
	
	/** The function is launched if the actor has come into contact with another specific actor and depending on the number of pieces present on the ground will display a message */
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
