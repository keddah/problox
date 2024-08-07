/**************************************************************************************************************
* Mag Pole - Header
* 
* The header file for the stationary magnet class. These magnets will be placed in levels so that the pickupable magnets can be attracted to them.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "Magnet.h"
#include "GameFramework/Actor.h"
#include "MagPole.generated.h"


UCLASS()
class PROJPROBLOX_API AMagPole : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* mesh;
	
	UPROPERTY(EditInstanceOnly)
	bool positive = true;
	
	UPROPERTY(EditInstanceOnly, Category = "Ability", meta = (Delta = 1, ToolTip = "Putting this value too high will cause the magnets that are attracted to it to get destroyed..."))
	uint16 attractionForce = 2500;

	void UpdateMagnets();
	
	// Critical section for synchronization
	mutable FCriticalSection criticalSection;

public:	
	// Sets default values for this actor's properties
	AMagPole();

	bool GetPositiveCharge() const;
	float GetAttraction() const;
	FVector GetMagPosition(const AMagnet* mag) const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override { Super::BeginPlay(); UpdateMagnets(); }
};
