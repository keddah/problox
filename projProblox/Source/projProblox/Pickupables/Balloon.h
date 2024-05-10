// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "CableComponent.h"
#include "PickupableMaster.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Balloon.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API ABalloon : public APickupableMaster
{
	GENERATED_BODY()
	ABalloon();
	
	virtual void BeginPlay() override { Super::BeginPlay(); wrld = GetWorld(); }
	virtual void Tick(float DeltaSeconds) override;
	
	virtual void Ability(float deltaTime) override;
	virtual EOperations SetSelected(const bool value) override;
	virtual void Detach() override;
	void SetConstraintsActive(const bool constrained) const
	{
		// Need to deactivate first before disabling physics
		constraint->SetActive(constrained);
		objMesh->SetSimulatePhysics(constrained);
	}
	void Attach() const;
	
	UWorld* wrld;

	UPROPERTY(EditDefaultsOnly)
	UPhysicsConstraintComponent* constraint;

	UPROPERTY(EditDefaultsOnly)
	UCableComponent* string;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = .1f, ToolTip = "How far the flatHead should extend from the piston shaft."))
	float floatiness = 67;
};
