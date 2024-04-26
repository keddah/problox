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
	virtual void Ability() override;
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	UStaticMeshComponent* flatHead;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability", meta = (AllowPrivateAccess = true, ToolTip = "How fast the piston head should push out."))
	float pushSpeed = 1;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability", meta = (AllowPrivateAccess = TEXT_TRUE, ToolTip = "How fast the piston head should push out."))
	float pushForce = 8;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 1, ToolTip = "How far the flatHead should extend from the piston shaft."))
	float pushExtent = 100;

	UPROPERTY(BlueprintReadOnly, Category = "Ability", meta = (AllowPrivateAccess = true, ToolTip = "Whether or not the piston head is currently pushing"))
	bool moving;
	
};
