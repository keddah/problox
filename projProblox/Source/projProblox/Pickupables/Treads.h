/**************************************************************************************************************
* Treads - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	GetAttachedOffset
*	Ability
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
	virtual void BeginPlay() override { Super::BeginPlay(); }

	
	virtual void Ability(float deltaTime) override;
	virtual void SetAbilityActive(const bool value) override;
	virtual float GetAttachOffset(const APickupableMaster& attachee) override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	UBoxComponent* driveTrigger;
	
	/////////////// Ability ///////////////

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = .1f))
	float moveSpeed = 500;

	void CalculateVelocity(float deltaTime);
	FVector velocity;
	FVector prevPos;

	
protected:
	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "When grounded, the ability is able to be activated... otherwise nothing will happen"))
	bool grounded;
};
