// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Spring.generated.h"

UCLASS()
class PROJPROBLOX_API ASpring : public APickupableMaster
{
	GENERATED_BODY()
	ASpring();
	virtual void BeginPlay() override { Super::BeginPlay(); wrld = GetWorld(); damping *= .001f; }
	
	virtual void Ability(float deltaTime) override;
	virtual void ToggleGravity() const override;
	virtual void ToggleGravity(bool gravityOn) override;
	virtual void RemoveVelocity() const override;
	
	void Attach();

	UWorld* wrld;
	bool contracting;

	UPROPERTY(EditDefaultsOnly, Category = "Spring", meta = (Delta = 1, ToolTip = "The maximum amount the spring is allowed to stretch."))
	float maxSpringLength = 3000;
	
	UPROPERTY(EditDefaultsOnly, Category = "Spring", meta = (Delta = 1, ToolTip = "The length of the spring when its fully compressed."))
	float minSpringLength = maxSpringLength * .05f;

	UPROPERTY(EditDefaultsOnly, Category = "Spring", meta = (Delta = .01f, ToolTip = "The speed of compression when not pressing against an object (while airborne)."))
	float compressionSpeed = .5f;

	float springLength = maxSpringLength;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	float springConstant = 2;

	UPROPERTY(EditDefaultsOnly, Category = "Ability", meta = (Delta = .01f))
	float damping = .01f;

	float GetSpringEnergy(const FVector& startPos, const FVector& endPos, const FVector& velocity) const;

protected:
	UPROPERTY(BlueprintReadOnly)
	FHitResult springHit;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability")
	USceneComponent* start;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* end;
};
