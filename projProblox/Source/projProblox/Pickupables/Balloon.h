/**************************************************************************************************************
* Balloon - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	SetAbilityActive
*	Attach
*	GetParent
*	Detach
*	GhostPlacement
*	UseSilhouetteTransform
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "CableComponent.h"
#include "PickupableMaster.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Balloon.generated.h"

UCLASS()
class PROJPROBLOX_API ABalloon : public APickupableMaster
{
	GENERATED_BODY()
	ABalloon();
	virtual void BeginPlay() override;
	
	virtual void Ability(float deltaTime) override;
	virtual void SetAbilityActive(const bool value) override { Super::SetAbilityActive(value); mesh->SetUseCCD(value); }
	virtual void Attach() override;
	virtual APickupableMaster* GetParent() override;
	virtual void Detach(bool playSound, float detachForce, float detachAngularForce) override;
	virtual void GhostPlacement() override;
	virtual void UseSilhouetteTransform(const UStaticMeshComponent* ghost = 0) override;
	
	void BalloonAttach();

	void SetParentDominates(const bool dominate) const
	{
		if(!constraint) return;
		
		if(dominate) constraint->ConstraintInstance.EnableParentDominates();
		else constraint->ConstraintInstance.DisableParentDominates();
	}
	
	UFUNCTION()
	void SaveResetTransform() { resetTransform = GetActorTransform(); }
	
	void SetConstraintsActive(const bool constrained) const
	{
		if(!IsValid(constraint)) return;
		if(!IsValid(mesh)) return;
		
		// Need to deactivate first before disabling physics
		constraint->SetActive(constrained);
		mesh->SetSimulatePhysics(constrained);
	}

	UPROPERTY(EditDefaultsOnly)
	UPhysicsConstraintComponent* constraint;

	UPROPERTY(EditDefaultsOnly)
	UCableComponent* string;

	FTransform resetTransform;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = .1f, ToolTip = "..."))
	float floatiness = 40;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 1.f, ToolTip = "..."))
	float stringLength = 300;

public:
	// Should be called after the cube teleports...
	void Teleport(bool physicsOn);
};
