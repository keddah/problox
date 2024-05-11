/**************************************************************************************************************
* Cube Socket Information - Header
* 
* The header file for cube core/connector's socket information. This is used to keep track of all the things that are attached to the cube.
* Declares several functions related to finding/getting the attached objects as well as functions to add/remove objects.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "./projProblox/Pickupables/PickupableMaster.h"
#include "Engine/DataAsset.h"
#include "CubeSocketInfo.generated.h"

UCLASS()
class PROJPROBLOX_API UCubeSocketInfo : public UPrimaryDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleDefaultsOnly)
	TArray<FName> sockets { "FRONT", "BACK", "RIGHT", "LEFT", "UP", "DOWN" };

	UPROPERTY(VisibleDefaultsOnly, meta = (ArrayClamp = "sockets"))
	TArray<APickupableMaster*> socketObjects { 0, 0, 0, 0, 0, 0 };
	
public:
	virtual bool ObjectInSocket(const FName& socket) const;
	virtual bool ObjectInSocket(int index) const;
	virtual FName GetOppositeSocket(const FName& origin) const;
	virtual FName GetOppositeSocket(int index) const;
	
	// Returns an array of all of the available sockets.
	TArray<FName> GetFreeSockets() const;
	
	// Returns an array of all of the sockets that have objects in them.
	TArray<FName> GetOccupiedSockets() const;
	
	void AddAttachment(APickupableMaster* attachment, FName socket);
	void RemoveAttachment(FName socket);
	void RemoveAttachment(APickupableMaster* obj);
	void ClearAttachments() { for(const auto& name : sockets) RemoveAttachment(name);}

	// Use this when an array of only valid elements is wanted
	TArray<AActor*> GetAttachmentActors() const;
	
	// Use this when an array of only valid elements is wanted
	TArray<APickupableMaster*> GetAttachments() const;

	
	// Use these when the entire array of objects is wanted (even invalid ones)
	TArray<APickupableMaster*> GetObjectsArray() const { return socketObjects; }
	const TArray<FName>& GetSockets() const { return sockets; }
	
	APickupableMaster* GetObjectInSocket(const int index) const { return socketObjects[index]; }
	APickupableMaster* GetObjectInSocket(const FName& name) const;
};
