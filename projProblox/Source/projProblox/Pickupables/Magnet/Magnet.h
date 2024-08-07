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
#include "projProblox/SpawnPoint.h"
#include "./projProblox/Pickupables/PickupableMaster.h"
#include "Magnet.generated.h"

class AMagPole;

UCLASS()
class PROJPROBLOX_API AMagnet : public APickupableMaster	
{
	GENERATED_BODY()

	AMagnet()
	{
		favouredSlot = ECoreSockets::Up;
		soundPlayer->SetAbilityLooping(true);
	}

	virtual void SetAbilityActive(const bool value) override;
	
	UPROPERTY(EditAnywhere, Category = "Ability")
	bool positive;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 1))
	uint16 attractionForce = 15;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = 10))
	unsigned int fieldRange = 55000;

	bool magAttached;

	TArray<AMagPole*> poles;

	// Critical section for synchronization
	mutable FCriticalSection criticalSection;

	UFUNCTION()
	void ResetPoles(int lvl, ELevel eLvl)
	{
		FScopeLock Lock(&criticalSection);
		poles.Empty();
	}

public:
	float GetAttraction() const
	{
		FScopeLock Lock(&criticalSection);
		return attractionForce;
	}

	// For when a new magpole is created in creative mode...
	void AddMagPole(AMagPole* newPole)
	{
		FScopeLock Lock(&criticalSection);
		poles.AddUnique(newPole);
	}

protected:
	virtual void BeginPlay() override;
	virtual void Ability(float deltaTime) override;
};
