/**************************************************************************************************************
* Grappler - Header
* 
* The header file for one of the pickupable objects.
* OVERRIDES:
*	SetAbilityActive
*
* PROBLEMS:
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
	AGrappler();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	USceneComponent* grappleSpawn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	UCableComponent* grappleLine;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> grappleHeadClass;

	AActor* hook;

	
	// If this is called whilst the hook is valid, destroy the hook (this means pressing the ability button after the grapple has been launched will destroy the grapple).  
	virtual void SetAbilityActive(const bool value) override { Super::SetAbilityActive(value); if(IsValid(hook) && !active) hook->Destroy(); };
	virtual void Ability() override;

	void SetupLine() const { grappleLine->CableLength = 2500; if(hook) grappleLine->SetAttachEndTo(hook, ""); }

	UFUNCTION(BlueprintCallable, Category = "Ability")
	void Pull(const FVector& direction, const float speed) { objMesh->AddForce(direction * speed * 1000); }
};
