// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CubeSocketInfo.h"
#include "CubeCore.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API ACubeCore : public APickupableMaster
{
	GENERATED_BODY()
	
protected:
	ACubeCore();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// A data asset that contains an array of things that are attached to each face of the cube.
	UPROPERTY(VisibleAnywhere)
	UCubeSocketInfo* socketInfo;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* pivot;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* thingCollector;
	
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* thingHomer;

	UPROPERTY(BlueprintReadOnly, EditInstanceOnly, meta = (MakeEditWidget))
	FVector safeSpace;
	
	virtual void Placement() override;
	virtual void ResetRotation(bool resetVelocity) override;
	
	void AdjustRange() { placeRange *= objMesh->GetRelativeScale3D().Length(); }

	APickupableMaster* hitObj;

public:	
	virtual void AddAttachment(APickupableMaster* attachment, const FName& socket) override;
	virtual void RemoveAttachment(const FName& socket) override;

	FVector GetCenterPos() const { return pivot->GetComponentLocation(); }
	
	UFUNCTION(BlueprintCallable)
	bool ObjectInSocket(FName socketToCheck) const { return socketInfo->ObjectInSocket(socketToCheck); };

	virtual void SetAbilityActive(bool value) override;

	UFUNCTION(BlueprintCallable)
	void DetachAll();
	
	// Depending on the given bool.. return the array of AActors or APickupableMasters 
	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetAttachedObjects(const bool returnAActor) const { return socketInfo->GetAttachmentActors(); }
	TArray<APickupableMaster*> GetAttachedObjects() const { return socketInfo->GetAttachments(); }

	virtual void SetSelected(const bool value) override;
	virtual float GetMass() const override;

	void Movement(const FVector& direction, const float speed) const { objMesh->AddForce(direction * speed * 1000); }
};
