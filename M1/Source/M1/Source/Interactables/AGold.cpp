// Fill out your copyright notice in the Description page of Project Settings.


#include "M1/Include/Interactables/AGold.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Components/BoxComponent.h"

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
	GEngine->AddOnScreenDebugMessage(-1,1.f,FColor::Green, "ohh");
	UE_LOG(LogTemp, Warning, TEXT("Hello"));
}

void AAGold::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	StimulusSource->RegisterForSense(UAISense_Sight::StaticClass());
	StimulusSource->RegisterWithPerceptionSystem();
	
}

