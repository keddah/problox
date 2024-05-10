/**************************************************************************************************************
* Thruster - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	Ability
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "PhysicsEngine/PhysicsThrusterComponent.h"
#include "Thruster.generated.h"

UCLASS()
class PROJPROBLOX_API AThruster : public APickupableMaster
{
	GENERATED_BODY()
	AThruster();

	virtual void BeginPlay() override;
	virtual void Ability(float deltaTime) override { Super::Ability(deltaTime); thrusterComp->SetActive(active); }

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	UPhysicsThrusterComponent* thrusterComp;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 1))
	float power = 56;
};
