#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTT_FindRandomLocation.generated.h"

UCLASS()
class M1_API UBTT_FindRandomLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	// Constructor.
	explicit UBTT_FindRandomLocation(FObjectInitializer const& ObjectInitializer);
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:

	// Range radius.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta=(AllowPrivateAccess="true"))
	float SearchRadius = 1500.f;
};
