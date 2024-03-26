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

protected:
	UPROPERTY(VisibleDefaultsOnly)
	TArray<FName> sockets { "FRONT", "RIGHT", "BACK", "LEFT", "UP", "DOWN"};

	UPROPERTY(VisibleDefaultsOnly, meta = (ArrayClamp = "sockets"))
	TArray<APickupableMaster*> socketObjects { 0, 0, 0, 0, 0, 0 };
	
public:
	bool ObjectInSocket(const FName& socket) const;
	bool ObjectInSocket(int index) const;
	FName GetOppositeSocket(const FName& origin) const;
	FName GetOppositeSocket(int index) const;
	
	// Returns an array of all of the available sockets.
	TArray<FName> GetFreeSockets() const;
	
	// Returns an array of all of the sockets that have objects in them.
	TArray<FName> GetOccupiedSockets() const;
	
	void AddAttachment(APickupableMaster* attachment, FName socket);
	void RemoveAttachment(FName socket);
	void ClearAttachments() { for(const auto& name : sockets) RemoveAttachment(name);}

	// Use these when an array of only valid elements is wanted
	TArray<AActor*> GetAttachmentActors() const;
	TArray<APickupableMaster*> GetAttachments() const;

	
	// Use these when the entire array of objects is wanted (even invalid ones)
	TArray<APickupableMaster*> GetObjectsArray() const { return socketObjects; }
	TArray<FName> GetSockets() const { return sockets; }
	
	APickupableMaster* GetObjectInSocket(const int index) const { return socketObjects[index]; }
	APickupableMaster* GetObjectInSocket(const FName& name) const;
};
