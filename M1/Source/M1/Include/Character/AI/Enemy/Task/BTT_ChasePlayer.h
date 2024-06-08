#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTT_ChasePlayer.generated.h"

UCLASS()
class M1_API UBTT_ChasePlayer : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:

	/** Constructor */
	explicit UBTT_ChasePlayer(FObjectInitializer const& ObjectInitializer);

	/** Task chase the player location */
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
