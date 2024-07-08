/**************************************************************************************************************
* Propeller - Header
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
#include "Propeller.generated.h"

UCLASS()
class PROJPROBLOX_API APropeller : public APickupableMaster
{
	GENERATED_BODY()

	APropeller();
	virtual void BeginPlay() override;
	virtual void Ability(float deltaTime) override;
	virtual void SetAbilityActive(const bool value) override;
	
	UPROPERTY(VisibleDefaultsOnly)
	UBoxComponent* windBox;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability|Forces", meta = (Delta = .5f, ToolTip = "The amount of force to apply to the thing that it's attached to"))
	float propelForce = 50;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability|Forces", meta = (Delta = 1, ToolTip = "The amount of force to apply to things that are inside the windCollider while active"))
	float pushForce = 100;

	UPROPERTY(EditDefaultsOnly, Category = "Ability|Visual", meta = (Delta = 1, ToolTip = "The speed the propellers rotate (purely visual)."))
	float spinSpeed = 22;

	UPROPERTY(EditDefaultsOnly, Category = "Ability|Forces", meta = (ToolTip = "How much the mass of the core affects the force of the propeller (higher number = higher force)."))
	float massScale = 1000;

protected:
	UPROPERTY(BlueprintReadWrite)
	TArray<UPrimitiveComponent*> pushedObjs;
};
