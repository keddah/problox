// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MagPole.generated.h"

UCLASS()

class PROJPROBLOX_API AMagPole : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* positiveMat;
	
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* negativeMat;
	
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* mesh;
	
	void ConfigureCharge() const { mesh->SetMaterial(0, positive? positiveMat : negativeMat); }

	UPROPERTY(EditInstanceOnly)
	bool positive;
	
	UPROPERTY(EditInstanceOnly, Category = "Ability", meta = (Delta = 1))
	float attractionForce = 2500;

	
public:	
	// Sets default values for this actor's properties
	AMagPole();
	virtual void Tick(float DeltaTime) override;

	// true = positive
	bool GetPositiveCharge() const { return positive; }
	float GetAttraction() const { return attractionForce * 1000; } 
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
