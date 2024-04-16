#include "M1/Include/Character/AI/Enemy/Task/BTT_ChasePlayer.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

UBTT_ChasePlayer::UBTT_ChasePlayer(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Chase the player";
}

EBTNodeResult::Type UBTT_ChasePlayer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Get Player controller.
	if(auto* const controller = Cast<AAIController>(OwnerComp.GetAIOwner()))
	{
		if(auto* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
		{
			auto const playerLocation = player->GetActorLocation();
			FNavLocation location;
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(controller, playerLocation);
			// Finish with success.
			FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}

	}
	return EBTNodeResult::Failed;
}
