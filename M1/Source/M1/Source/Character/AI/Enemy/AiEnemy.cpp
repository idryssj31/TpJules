#include "M1/Include/Character/AI/Enemy/AiEnemy.h"

AAiEnemy::AAiEnemy()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAiEnemy::BeginPlay()
{
	Super::BeginPlay();
}

void AAiEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

UBehaviorTree* AAiEnemy::GetBehaviorTree() const
{
	return Tree;
}

