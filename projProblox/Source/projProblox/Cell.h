/**************************************************************************************************************
* Cell - Header
* 
* The header file for the collectible cells. Creates the classes for each of its variations and declares their needed variables and functions.
* The 
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "CubeCore.h"
#include "GameFramework/Actor.h"
#include "Cell.generated.h"


UCLASS()
class PROJPROBLOX_API ACell : public AActor
{
	GENERATED_BODY()

protected:
	ACell();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditDefaultsOnly)
    UStaticMeshComponent* body;

private:
	ACubeCore* core;

	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	float attractionForce = 1.2f;
	
	FVector goal;
	
	bool isHoming;
	bool safe;
	
	void Drag() const;
	void GoHome() const;

public:	
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


	/////////////// BOUNCE ///////////////
UCLASS()
class PROJPROBLOX_API ABouncyCell : public ACell
{
	GENERATED_BODY()

	float zVelocity;

	UPROPERTY(EditDefaultsOnly)
	float bounciness = 4;
	
public:
	virtual void Tick(float DeltaSeconds) override;
};


	/////////////// HOVER ///////////////
UCLASS()
class PROJPROBLOX_API AHoverCell : public ACell
{
	GENERATED_BODY()

	virtual void Tick(float DeltaSeconds) override;
	
};


	/////////////// STICKY ///////////////
UCLASS()
class PROJPROBLOX_API AStickyCell : public ACell
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, meta = (ToolTip = "The amount of force required to make the Thing unstick."))
	float stickThreshold = 1;

	bool stuck;
	FVector previousVelocity;
	
	void Unstick(float deltaTime) const;
	
	virtual void Tick(float DeltaSeconds) override;
	virtual void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};
