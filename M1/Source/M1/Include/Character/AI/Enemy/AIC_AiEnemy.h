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

	/** Constructor */
	explicit AAIC_AiEnemy(FObjectInitializer const& ObjectInitializer);

protected:

	/** Link blackboard to behavior tree */
	virtual void OnPossess(APawn* InPawn) override;

private:

	/** Class allowing us to configure what we can see and how our AI can see */
	UAISenseConfig_Sight* SightConfig;

	/** Setup sight component value */
	void SetupSightSystem();

	/** If the player is detected we assign a value to our boolean and our vector */
	UFUNCTION()
	void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus);
	
};
