#include "M1/Include/Character/AI/Enemy/AIC_AiEnemy.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "M1/Include/Character/AI/Enemy/AiEnemy.h"
#include "M1/Include/Character/Player/M1Character.h"
#include "M1/Include/Interactables/AGold.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"

AAIC_AiEnemy::AAIC_AiEnemy(FObjectInitializer const& ObjectInitializer)
{
	SetupSightSystem();
}

void AAIC_AiEnemy::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (AAiEnemy* const ai = Cast<AAiEnemy>(InPawn))
	{
		if (UBehaviorTree* const tree = ai->GetBehaviorTree())
		{
			UBlackboardComponent* b;
			UseBlackboard(tree->BlackboardAsset, b);
			Blackboard = b;
			RunBehaviorTree(tree);
		}
	}
}

void AAIC_AiEnemy::SetupSightSystem()
{
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sigh Config"));
	if (SightConfig)
	{
		SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));
		SightConfig->SightRadius = 500.f;
		SightConfig->LoseSightRadius = SightConfig->SightRadius + 20.f;
		SightConfig->PeripheralVisionAngleDegrees = 45.f;
		SightConfig->SetMaxAge(5.f);
		SightConfig->AutoSuccessRangeFromLastSeenLocation = 250.f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

		GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());

		// If the player is on our field of vision.
		GetPerceptionComponent()->OnTargetPerceptionUpdated.AddDynamic(this, &AAIC_AiEnemy::OnTargetDetected);
		GetPerceptionComponent()->ConfigureSense((*SightConfig));
	}
}

void AAIC_AiEnemy::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
{
	if(auto* player = Cast<AM1Character>(Actor))
	{
		GetBlackboardComponent()->SetValueAsBool("CanSeePlayer", Stimulus.WasSuccessfullySensed());
	}

	if(const auto* Perso = Cast<AAGold>(Actor))
	{
		GetBlackboardComponent()->SetValueAsBool("CanSeeGold", Stimulus.WasSuccessfullySensed());
		GetBlackboardComponent()->SetValueAsVector("TargetGoldLocation",Perso->GetTargetLocation());
	}


}
