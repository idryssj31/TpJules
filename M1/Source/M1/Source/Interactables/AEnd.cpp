// Fill out your copyright notice in the Description page of Project Settings.


#include "M1/Include/Interactables/AEnd.h"
#include "Components/BoxComponent.h"
#include "M1/Include/Character/Player/M1Character.h"

// Sets default values
AAEnd::AAEnd()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// if collide call the fct...
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(38.f,38.f,38.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AAEnd::OnOverlapBegin);

}

// Called when the game starts or when spawned
void AAEnd::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAEnd::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAEnd::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(auto* player = Cast<AM1Character>(OtherActor))
	{
		if(player->NbrGoldInScene == 0)
		{
			GEngine->AddOnScreenDebugMessage(-1,1.f,FColor::Green, "Winn");
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1,1.f,FColor::Green, "Collect all the gold");
		}	
	}
}

