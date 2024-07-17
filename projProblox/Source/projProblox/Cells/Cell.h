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
#include "NiagaraComponent.h"
#include "NiagaraComponent.h"
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
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    UStaticMeshComponent* body;


private:
	UPROPERTY(EditDefaultsOnly)
    USphereComponent* hitBox;

	UPROPERTY(EditDefaultsOnly)
	UNiagaraComponent* fx;
	
	ACubeCore* core;
	
	float attractionForce;
	bool isHoming;
	
	void GoHome() const;
	bool safe;

	
public:
	// When the core collects it...
	UFUNCTION(BlueprintCallable, Category = "Collection")
	void Teleport(const FVector& pos);
	
	UFUNCTION(BlueprintCallable, Category = "Collection")
	void SetHoming(const bool home, const float attraction) { isHoming = home; attractionForce = attraction; }

	// Used for spawning and level transitions
	void SetDormant(bool _dormant);
	
	UFUNCTION()
	void DeactivateHoming() { isHoming = false;}
	
	UFUNCTION(BlueprintCallable)
	bool IsSafe() const { return safe; }

	UStaticMeshComponent* GetMesh() const { return body; }
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
	virtual void BeginPlay() override { wrld = GetWorld(); Super::BeginPlay(); }
	virtual void Tick(float DeltaSeconds) override;

	UWorld* wrld;
};


	/////////////// STICKY ///////////////
UCLASS()
class PROJPROBLOX_API AStickyCell : public ACell
{
	GENERATED_BODY()

	virtual void BeginPlay() override { wrld = GetWorld(); Super::BeginPlay(); }
	
	UPROPERTY(EditDefaultsOnly, meta = (ToolTip = "The amount of force required to make the Thing unstick."))
	float stickThreshold = 1;

	UWorld* wrld;
	
	bool stuck;
	FVector previousVelocity;
	
	void Unstick(float deltaTime) const;

	virtual void Tick(float DeltaSeconds) override;
	virtual void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;
};
