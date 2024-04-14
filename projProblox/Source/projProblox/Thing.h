/**************************************************************************************************************
* Thing (called thing because we didn't know what to call them.. they were "things") - Header
* 
* The header file for the collectible creature things. Declares inherited methods and variables used to make the pickupable objects more
* replicable.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "CubeCore.h"
#include "GameFramework/Actor.h"
#include "Thing.generated.h"

UCLASS()
class PROJPROBLOX_API AThing : public AActor
{
	GENERATED_BODY()
	
	AThing();
	
	UPROPERTY(EditDefaultsOnly)
    UStaticMeshComponent* body;

	ACubeCore* core;

	float attractionForce;
	FVector goal;
	
	bool isHoming;
	bool safe;
	
	void Drag() const;
	void GoHome() const;

	
public:	
	// Sets default values for this actor's properties

	UFUNCTION(BlueprintCallable)
	void Teleport(const FVector& pos) { SetActorLocation(pos); safe = true; }
	
	UFUNCTION(BlueprintCallable)
	void SetHoming(const bool home, const float attraction) { isHoming = home; attractionForce = attraction; }

	UFUNCTION()
	void DeactivateHoming() { isHoming = false;}
	
	UFUNCTION(BlueprintCallable)
	bool IsSafe() const { return safe; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

