// Copyright Turtle Shell Games

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();

	// Enemy Interface
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

	// Combat Interface
	virtual int32 GetPlayerLevel() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	int32 Level = 1;

	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;
};
