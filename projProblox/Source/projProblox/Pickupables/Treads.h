/**************************************************************************************************************
* Treads - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	SetAbilityActive
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Treads.generated.h"

UCLASS()
class PROJPROBLOX_API ATreads : public APickupableMaster
{
	GENERATED_BODY()

	ATreads();
	virtual void BeginPlay() override { soundPlayer->SetAbilityLooping(true); Super::BeginPlay(); }
	virtual void Ability(float deltaTime) override;
	virtual void SetAbilityActive(const bool value) override;

	/////////////// Ability ///////////////
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 2))
	unsigned int moveSpeed = 5000;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* driveTrigger;
	
	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "When grounded, the ability is able to be activated... otherwise nothing will happen"))
	bool grounded;
};
