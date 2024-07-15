/**************************************************************************************************************
* Balloon - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	Ability
*	SetSelected
*	GetParent
*	Detach
*	Reattach
*	GhostPlacement
*	UseSilhouetteTransform
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "CableComponent.h"
#include "PickupableMaster.h"
#include "Cores/CubeCore.h"
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
	virtual void SetSelected(const bool value) override;
	virtual APickupableMaster* GetParent() override;
	virtual void Detach(bool push = false) override;
	virtual void GhostPlacement() override;
	virtual void UseSilhouetteTransform(const UStaticMeshComponent* ghost = 0) override;
	
	void Attach();
	
	UFUNCTION()
	void SaveResetTransform() { resetTransform = GetActorTransform(); }
	
	void SetConstraintsActive(const bool constrained) const
	{
		// Need to deactivate first before disabling physics
		constraint->SetActive(constrained);
		mesh->SetSimulatePhysics(constrained);
	}
	void SetParentDominates(const bool dominate) const
	{
		if(dominate) constraint->ConstraintInstance.EnableParentDominates();
		else constraint->ConstraintInstance.DisableParentDominates();
	}
	
	UPROPERTY(EditDefaultsOnly)
	UPhysicsConstraintComponent* constraint;

	UPROPERTY(EditDefaultsOnly)
	UCableComponent* string;

	FTransform resetTransform;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = .1f, ToolTip = "..."))
	float floatiness = 40;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = .1f, ToolTip = "Higher number = balloon is less affected by mass."))
	float massMultiplier = .7f;
};
