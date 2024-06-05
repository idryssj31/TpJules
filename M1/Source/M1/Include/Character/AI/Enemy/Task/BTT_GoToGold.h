#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTT_GoToGold.generated.h"


UCLASS()
class M1_API UBTT_GoToGold : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:

	/** Constructor */
	explicit UBTT_GoToGold(FObjectInitializer const& ObjectInitializer);

	/** */
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
