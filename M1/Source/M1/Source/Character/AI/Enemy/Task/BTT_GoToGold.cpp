#include "M1/Include/Character/AI/Enemy/Task/BTT_GoToGold.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "M1/Include/Interactables/Gold.h"
//#include "M1/Include/Interactables/A_Gold.h"

UBTT_GoToGold::UBTT_GoToGold(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Go to the gold";
}

EBTNodeResult::Type UBTT_GoToGold::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Get Player controller.
	if(auto* const controller = Cast<AAIController>(OwnerComp.GetAIOwner()))
	{


	}
	return EBTNodeResult::Failed;
}
