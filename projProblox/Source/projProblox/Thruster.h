// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "PhysicsEngine/PhysicsThrusterComponent.h"
#include "Thruster.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API AThruster : public APickupableMaster
{
	GENERATED_BODY()
	AThruster();

	virtual void Ability() override;
	virtual void AlignSocketRot(bool useDirection) override;
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UPhysicsThrusterComponent* thruster;
	
	UPROPERTY(EditDefaultsOnly)
	float power = 56;
};
