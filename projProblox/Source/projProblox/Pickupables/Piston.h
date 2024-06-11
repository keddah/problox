/**************************************************************************************************************
* Piston - Header
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
#include "Piston.generated.h"

UCLASS()
class PROJPROBLOX_API APiston : public APickupableMaster
{
	GENERATED_BODY()

	APiston();

	virtual void Ability(float deltaTime) override;
	virtual void SetAbilityActive(const bool value) override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* flatHead;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "How fast the piston head should push out."))
	float pushSpeed = 60;

	float defaultPushSpeed = pushSpeed;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "The force to be applied to this object when it pushes against something immoveable."))
	float selfPropelForce = 2500;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (ToolTip = "The force to be applied to the other object."))
	float pushForce = 15000;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 1, ToolTip = "How far the flatHead should extend from the piston shaft."))
	float pushExtent = 100;

	static bool Approximately(const float a, const float b, const float tolerance)
	{
		return fabs(a - b) < tolerance;
	}
	
protected:
	UPROPERTY(BlueprintReadOnly, Category = "Ability")
	bool canPush;

	UPROPERTY(BlueprintReadOnly, Category = "Ability", meta = (ToolTip = "Whether or not the piston head is currently pushing"))
	bool moving;

};
