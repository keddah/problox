/**************************************************************************************************************
* Thing (called thing because we didn't know what to call them.. they were "things") - Header
* 
* The header file for the collectible creature things. 
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

protected:
	AThing();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly)
    UStaticMeshComponent* body;

private:
	ACubeCore* core;

	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	float attractionForce;
	
	FVector goal;
	
	bool isHoming;
	bool safe;
	
	void Drag() const;
	void GoHome() const;

public:	
	// Sets default values for this actor's properties

	UFUNCTION(BlueprintCallable, Category = "Collection")
	void Teleport(const FVector& pos) { SetActorLocation(pos); safe = true; }
	
	UFUNCTION(BlueprintCallable, Category = "Collection")
	void SetHoming(const bool home, const float attraction) { isHoming = home; attractionForce = attraction; }

	UFUNCTION()
	void DeactivateHoming() { isHoming = false;}
	
	UFUNCTION(BlueprintCallable)
	bool IsSafe() const { return safe; }

	// Called every frame
	virtual void Tick(float DeltaTime) override;
};


// The bouncy variant of the Thing
UCLASS()
class PROJPROBLOX_API ABouncyThing : public AThing
{
	GENERATED_BODY()

	float zVelocity;

	UPROPERTY(EditDefaultsOnly)
	float bounciness = 4;
	
public:
	virtual void Tick(float DeltaSeconds) override;
};
