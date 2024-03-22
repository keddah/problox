// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupableMaster.h"
#include "Engine/DataAsset.h"
#include "CubeSocketInfo.generated.h"

/**
 * 
 */
UCLASS()
class PROJPROBLOX_API UCubeSocketInfo : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleDefaultsOnly)
	TArray<FName> sockets { "FRONT", "BACK", "LEFT", "RIGHT", "UP", "DOWN"};

	UPROPERTY(VisibleDefaultsOnly, meta = (ArrayClamp = "sockets"))
	TArray<APickupableMaster*> socketObjects { 0, 0, 0, 0, 0, 0 };

	bool ObjectInSocket(const FName& socket) const;
	bool ObjectInSocket(int index) const;

	// Returns an array of all of the available sockets.
	TArray<FName> GetFreeSockets() const;
	
	void AddAttachment(APickupableMaster* attachment, FName socket);
	void RemoveAttachment(FName socket);
	void ClearAttachments() { for(const auto& name : sockets) RemoveAttachment(name);}

	TArray<AActor*> GetAttachmentActors() const;
	TArray<APickupableMaster*> GetAttachments() const;
	
	APickupableMaster* GetObjectInSocket(const int index) const { return socketObjects[index]; }
	APickupableMaster* GetObjectInSocket(const FName& name) const;
	
};
