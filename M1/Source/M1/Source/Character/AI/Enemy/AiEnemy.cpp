// Fill out your copyright notice in the Description page of Project Settings.


#include "M1/Include/Character/AI/Enemy/AiEnemy.h"

// Sets default values
AAiEnemy::AAiEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAiEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAiEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAiEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

