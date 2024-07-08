/**************************************************************************************************************
* Spring - Header
* 
* The header file for one of the pickupables.
*
* OVERRIDES:
*	SetAbilityActive
*	ToggleGravity	
*	RemoveVelocity
*	SetShowMesh
*
* 
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Components/SplineMeshComponent.h"
#include "BounceSpring.generated.h"

UCLASS()
class PROJPROBLOX_API ABounceSpring : public APickupableMaster
{
	GENERATED_BODY()
	ABounceSpring();
	
	virtual void BeginPlay() override { Super::BeginPlay(); damping *= .001f; }
	
	virtual void Ability(float deltaTime) override;
	virtual void SetAbilityActive(const bool value) override { Super::SetAbilityActive(value); springLength = 0; }
	virtual void ToggleGravity() const override;
	virtual void ToggleGravity(bool gravityOn) override;
	virtual void RemoveVelocity() const override;
	virtual void SetShowMesh(const bool enable) const override;
	
	bool contracting;

	UPROPERTY(EditDefaultsOnly, Category = "Spring|Length", meta = (Delta = 1, ToolTip = "The maximum amount the spring is allowed to stretch."))
	float maxSpringLength = 3000;
	
	UPROPERTY(EditDefaultsOnly, Category = "Spring|Length", meta = (Delta = 1, ToolTip = "The length of the spring when its fully compressed."))
	float minSpringLength = maxSpringLength * .05f;

	UPROPERTY(EditDefaultsOnly, Category = "Spring|Length", meta = (Delta = .01f, ToolTip = "The speed of compression when not pressing against an object (while airborne)."))
	float compressionSpeed = .5f;

	UPROPERTY(EditDefaultsOnly, Category = "Ability|Physics")
	float springConstant = 2;

	UPROPERTY(EditDefaultsOnly, Category = "Ability|Physics", meta = (Delta = .01f))
	float damping = .01f;

	float GetSpringEnergy(const FVector& startPos, const FVector& endPos, const FVector& velocity) const;

	float springLength = maxSpringLength;

protected:
	UPROPERTY(BlueprintReadOnly)
	FHitResult springHit;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* start;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USplineMeshComponent* spline;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* end;
};
