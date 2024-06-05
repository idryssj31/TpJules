// Fill out your copyright notice in the Description page of Project Settings.


#include "M1/Include/Interactables/ATrap.h"
#include "M1/Include/Character/Player/M1Character.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"

// Sets default values
AATrap::AATrap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// if collide call the fct...
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(38.f,38.f,38.f));
	CollisionBox->SetCollisionProfileName("Trigger");

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AATrap::OnOverlapBegin);

}

// Called when the game starts or when spawned
void AATrap::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AATrap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AATrap::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(auto* player = Cast<AM1Character>(OtherActor))
	{
		if(player->NbrHealth == 0)
		{
			UGameplayStatics::OpenLevel(this, TEXT("/Content/ThirdPerson/Maps/ThirdPersonMap"), true);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1,1.f,FColor::Green, "Trap Collide player");
			player->NbrHealth--;
			UE_LOG(LogTemp,Warning,TEXT("MyCharacter's Health is %d"), player->NbrHealth);
		}	
	}
}

