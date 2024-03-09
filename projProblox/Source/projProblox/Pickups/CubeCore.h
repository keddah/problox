// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CubeSocketInfo.h"
#include "PickupableMaster.h"
#include "CubeCore.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API ACubeCore : public APickupableMaster
{
	GENERATED_BODY()
	ACubeCore();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	UCubeSocketInfo* socketInfo;

	virtual void Placement() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void AddAttachment(APickupableMaster* attachment, FName socket) override;

	virtual void RemoveAttachment(FName socket) override;

	UFUNCTION(BlueprintCallable)
	bool ObjectInSocket(FName socketToCheck) const { return socketInfo->ObjectInSocket(socketToCheck); };

	virtual void SetAbilityActive(bool value) override;

	// Depending on the given bool.. return the array of AActors or APickupableMasters 
	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetAttachedObjects(const bool returnAActor) const { return socketInfo->GetAttachmentActors(); }
	TArray<APickupableMaster*> GetAttachedObjects() const { return socketInfo->GetAttachments(); }

	virtual void SetSelected(const bool value) override;
};
