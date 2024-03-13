// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Components/SphereComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Wheel.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API AWheel : public APickupableMaster
{
	GENERATED_BODY()

	AWheel();
	virtual void SetSelected(const bool value) override;
	
protected:
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* wheelMesh;

	UPROPERTY(EditDefaultsOnly)
	UPhysicsConstraintComponent* axel;
	
public:
};
