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

	UCubeSocketInfo* socketInfo;

	virtual void Placement() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void AddAttachment(APickupableMaster* attachment, FName socket) override;

	virtual void RemoveAttachment(FName socket) override;

	UFUNCTION(BlueprintCallable)
	bool ObjectInSocket(FName socketToCheck) const { return socketInfo->ObjectInSocket(socketToCheck); };

	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetAttachedObjects() const { return socketInfo->GetAttachments(); }

	virtual void SetSelected(const bool value) override;
};
