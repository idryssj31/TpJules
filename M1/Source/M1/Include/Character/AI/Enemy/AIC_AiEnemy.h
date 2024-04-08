#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig_Sight.h"
#include "AIC_AiEnemy.generated.h"

UCLASS()
class M1_API AAIC_AiEnemy : public AAIController
{
	GENERATED_BODY()

public:

	// Constructor.
	explicit AAIC_AiEnemy(FObjectInitializer const& ObjectInitializer);

protected:

	// Link blackboard to behavior tree.
	virtual void OnPossess(APawn* InPawn) override;

private:
	UAISenseConfig_Sight* SightConfig;

	// Setup sight component value.
	void SetupSightSystem();

	UFUNCTION()
	// If the player is detected.
	void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus);
};
