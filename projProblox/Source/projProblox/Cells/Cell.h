/**************************************************************************************************************
* Cell - Header
* 
* The header file for the collectible cells. Creates the classes for each of its variations and declares their needed variables and functions.
* A slippery cell variant is made in the editor...
* The variant cells all inherit from the base cell (ACell)
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "./projProblox/Pickupables/Cores/CubeCore.h"
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
	virtual void Tick(float DeltaSeconds) override;
	
	UWorld* wrld;

	UPROPERTY(EditDefaultsOnly)
    UStaticMeshComponent* body;

	UPROPERTY(EditDefaultsOnly)
    USphereComponent* hitBox;

private:
	ACubeCore* core;
	FVector thisPos;
	FVector corePos;
	
	float attractionForce;
	
	bool isHoming;
	bool safe;
	
	void GoHome() const;

	static bool IsValidVector(const FVector& Vec)
	{
		// Check if any component is NaN
		if (Vec.X == NAN || Vec.Y == NAN || Vec.Z == NAN) return false;
    
		// Check if any component is infinity
		if (FMath::IsFinite(Vec.X) == false || FMath::IsFinite(Vec.Y) == false || FMath::IsFinite(Vec.Z) == false) return false;
    
		return true;
	}
	
public:	
	UFUNCTION(BlueprintCallable, Category = "Collection")
	void Teleport(const FVector& pos) { SetActorLocation(pos); safe = true; body->SetRelativeScale3D({10,10,10});}
	
	UFUNCTION(BlueprintCallable, Category = "Collection")
	void SetHoming(const bool home, const float attraction) { isHoming = home; attractionForce = attraction; }

	void SetDormant(bool dormant);
	
	UFUNCTION()
	void DeactivateHoming() { isHoming = false;}
	
	UFUNCTION(BlueprintCallable)
	bool IsSafe() const { return safe; }

	virtual void AsyncPhysicsTickActor(float DeltaTime, float SimTime) override;

	UStaticMeshComponent* GetMesh() const { return body; }
};


	/////////////// BOUNCE ///////////////
UCLASS()
class PROJPROBLOX_API ABouncyCell : public ACell
{
	GENERATED_BODY()
	ABouncyCell() { }
	
	float zVelocity;

	UPROPERTY(EditDefaultsOnly)
	float bounciness = 4;
	
public:
	virtual void AsyncPhysicsTickActor(float DeltaTime, float SimTime) override;
};


	/////////////// HOVER ///////////////
UCLASS()
class PROJPROBLOX_API AHoverCell : public ACell
{
	GENERATED_BODY()

	virtual void AsyncPhysicsTickActor(float DeltaTime, float SimTime) override;

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

	virtual void AsyncPhysicsTickActor(float DeltaTime, float SimTime) override;
	virtual void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};
