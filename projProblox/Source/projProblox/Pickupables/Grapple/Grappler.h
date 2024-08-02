/**************************************************************************************************************
* Grappler - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	SetAbilityActive
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "./projProblox/Pickupables/PickupableMaster.h"
#include "CableComponent.h"
#include "Grappler.generated.h"

UCLASS()
class PROJPROBLOX_API AGrappler : public APickupableMaster
{
	GENERATED_BODY()
	
protected:
	AGrappler();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* grappleSpawn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCableComponent* grappleLine;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> grappleHeadClass;

	AActor* hook;
	FActorSpawnParameters params;

	// If this is called whilst the hook is valid, destroy the hook (this means pressing the ability button after the grapple has been launched will destroy the grapple).  
	virtual void SetAbilityActive(const bool value) override;
	
	void SetupLine() const 
	{ 
		if(!IsValid(grappleLine)) return;

		grappleLine->CableLength = 1000; 
		if(IsValid(hook)) grappleLine->SetAttachEndTo(hook, ""); 
	}

	UFUNCTION(BlueprintCallable, Category = "Ability")
	void Pull(const FVector& direction, const float speed) { if(IsValid(mesh)) mesh->AddForce(direction * speed * 1000); }
};
