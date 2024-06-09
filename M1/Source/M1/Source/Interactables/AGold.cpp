// Fill out your copyright notice in the Description page of Project Settings.


#include "M1/Include/Interactables/AGold.h"
#include "M1/Include/Character/Player/M1Character.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "M1/Include/Character/AI/Enemy/AiEnemy.h"
#include "M1/Include/GameMode/M1GameMode.h"


// Sets default values
AAGold::AAGold()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// if collide call the fct...
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(32.f,32.f,32.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	//RootComponent = CollisionBox;
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AAGold::OnOverlapBegin);
	SetupStimulusSource();
}

// Called when the game starts or when spawned
void AAGold::BeginPlay()
{
	Super::BeginPlay();
	Perso = Cast<AM1Character>(UGameplayStatics::GetPlayerCharacter(this,0));
	
}

// Called every frame
void AAGold::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAGold::SetupStimulusSource()
{
	StimulusSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("Stimulus"));
	if (StimulusSource)
	{
		StimulusSource->RegisterForSense(TSubclassOf<UAISense_Sight>());
		StimulusSource->RegisterWithPerceptionSystem();
		StimulusSource->bAutoRegister = true;
	}
}


void AAGold::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                            int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(auto* player = Cast<class AM1Character>(OtherActor))
	{
		
		UE_LOG(LogTemp,Warning,TEXT("Collide player"));
		player->NbrGoldInScene--;
		UE_LOG(LogTemp,Warning,TEXT("value : %d"), player->NbrGoldInScene);
		player->CAllHudSuppGold();
		Destroy();
		if(player->NbrGoldInScene == 0)
		{
			UE_LOG(LogTemp,Warning,TEXT("Winn"));
		}
		
	}

	if(auto* npc = Cast<AAiEnemy>(OtherActor))
	{
		GEngine->AddOnScreenDebugMessage(-1,1.f,FColor::Green, "Collide ai enemy");
		Destroy();
		Perso->NbrGoldInScene--;
		Perso->CAllHudSuppGold();
	}
}

void AAGold::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	StimulusSource->RegisterForSense(UAISense_Sight::StaticClass());
	StimulusSource->RegisterWithPerceptionSystem();
	
}

