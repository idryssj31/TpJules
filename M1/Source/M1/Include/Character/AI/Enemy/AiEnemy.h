#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTree.h"
#include "GameFramework/Character.h"
#include "AiEnemy.generated.h"

UCLASS()
class M1_API AAiEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	
	// Sets default values for this character's properties
	AAiEnemy();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Return the behavior tree.
	UBehaviorTree* GetBehaviorTree() const;
	
protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Our Behaviour tree property that will handle the logic of your ai. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta=(AllowPrivateAccess="true"))
	UBehaviorTree* Tree;
	
};
