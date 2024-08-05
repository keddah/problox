/**************************************************************************************************************
* Magnet - Header
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
#include "Magnet.generated.h"

class AMagPole;

UCLASS()
class PROJPROBLOX_API AMagnet : public APickupableMaster	
{
	GENERATED_BODY()

	AMagnet() { favouredSlot = ECoreSockets::Up; soundPlayer->SetAbilityLooping(true); }
	
	virtual void SetAbilityActive(const bool value) override
	{
		Super::SetAbilityActive(value);
		if(active) soundPlayer->PlayAbility();
		else soundPlayer->StopAbility();
	}
	
	UPROPERTY(EditAnywhere, Category = "Ability")
	bool positive;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 1))
	unsigned int attractionForce = 15;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 10))
	unsigned int fieldRange = 1500000;

	bool magAttached;

	TArray<AMagnet*> otherMagnets;
	TArray<AMagPole*> poles;

	// Needs to be add unique since this would be done at begin play for all the magnets
	void AddMagnet(AMagnet* mag) { otherMagnets.AddUnique(mag); }
	
public:
	float GetAttraction() const { return attractionForce; }

	// For when a new magpole is created in creative mode...
	void AddMagPole(AMagPole* newPole) { poles.AddUnique(newPole); }
	
protected:
	virtual void BeginPlay() override;
	virtual void Ability(float deltaTime) override;
};
