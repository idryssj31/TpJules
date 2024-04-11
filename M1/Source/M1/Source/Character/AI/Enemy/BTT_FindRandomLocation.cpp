#include "M1/Include/Character/AI/Enemy/BTT_FindRandomLocation.h"
#include "NavigationSystem.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTT_FindRandomLocation::UBTT_FindRandomLocation(FObjectInitializer const& ObjectInitializer)
{
	NodeName = "Find Random Location";
}

EBTNodeResult::Type UBTT_FindRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Get ai controller.
	if (auto* const controller = Cast<AAIController>(OwnerComp.GetAIOwner()))
	{
		// Get ai enemy.
		if(auto* const enemy = controller->GetPawn())
		{
			// Get enemy location.
			auto const originLocation = enemy->GetActorLocation();
			// Get the navigation system.
			if(auto* const navSystem = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				FNavLocation Location;
				// Generate random point with origin location of the enemy.
				if(navSystem->GetRandomReachablePointInRadius(originLocation,SearchRadius,Location))
				{
					OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), Location.Location);
				}
				// Finish success.
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}
