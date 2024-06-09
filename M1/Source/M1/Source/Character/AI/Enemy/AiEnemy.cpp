#include "M1/Include/Character/AI/Enemy/AiEnemy.h"

#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "M1/Include/Character/Player/M1Character.h"

AAiEnemy::AAiEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	
	
	// if collide call the fct...
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(38.f,38.f,38.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	CollisionBox->SetupAttachment(RootComponent);
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AAiEnemy::OnOverlapBegin);
}

void AAiEnemy::BeginPlay()
{
	Super::BeginPlay();
}

void AAiEnemy::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
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
			player->CAllHudSuppHearth();
			player->TeleportTo(FVector(200,200,0), FRotator(0,0,0), false, false);
		}	
	}
}

void AAiEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

UBehaviorTree* AAiEnemy::GetBehaviorTree() const
{
	return Tree;
}

