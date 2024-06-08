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
	
	/** Sets default values for this character's properties */
	AAiEnemy();
	
	/** Called every frame */
	virtual void Tick(float DeltaTime) override;
	
	/** Return the behavior tree */
	UBehaviorTree* GetBehaviorTree() const;

	/** Component Collider use for the BeginOverlap */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UBoxComponent *CollisionBox;
	
protected:
	
	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

	/** Our Behaviour tree property that will handle the logic of your ai */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta=(AllowPrivateAccess="true"))
	UBehaviorTree* Tree;

private:

	
	/** The function is launched if the actor has come into contact with another specific actor and subtract the number of life points and reload the game if needed */
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
