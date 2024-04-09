/**************************************************************************************************************
* Cube core - Header
* 
* The header file for the core class (the main cube). This class inherits from the Pickupable Master class.
* Delegates are declared for when 
* be modified by inherited classes but functions like rotate and remove velocity are universal.
* Also creates the actor components that all variations of this class will have... Mesh and collider.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "Collector.h"
#include "CubeSocketInfo.h"
#include "CubeCore.generated.h"

// Should be broadcasted when the cube goes too far away from the container.
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOutOfRange);

// Should be broadcasted when a "Thing" collides with any of the things that are attached to the cube.
// This has been declared so that a Blueprint function can be called.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddedThing, AActor*, thing);

UCLASS()
class PROJPROBLOX_API ACubeCore : public APickupableMaster
{
	GENERATED_BODY()

	virtual void SetCanPickup(const bool can) override;
	void SetCanCollect(bool collectable);

	APickupableMaster* selectedObj;
	
protected:
	ACubeCore();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TArray<FName> _attachedSockets;
	
	// A data asset that contains an array of things that are attached to each face of the cube.
	UPROPERTY(VisibleAnywhere)
	UCubeSocketInfo* socketInfo;
	
	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UMaterial* inactiveMat;
	
	UMaterial* defaultMat;
	
	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UBoxComponent* thingCollector;
	
	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UBoxComponent* thingHomer;

	UPROPERTY(EditAnywhere, Category = "Collection", BlueprintReadOnly)
	float fairBounds = 6500;
	
	UPROPERTY(BlueprintAssignable)
	FOnAddedThing onAddedThing;

	// Ghost placement except the other object's silhouette is affected 
	void OtherGhostPlacement();

	// Sets rotations depending on the attachee's type / snapRot variable...
	void OtherRotations(const APickupableMaster& other);
	
	virtual void Placement() override;
	virtual void ResetRotation(bool resetVelocity) override;
	virtual void RemoveVelocity() const override;
	
	void AdjustRange() { placeRange *= GetActorScale().Length(); }

	APickupableMaster* hitObj;
	
	UPROPERTY(BlueprintReadOnly, Category = "Collection")
	ACollector* collector;
	
	UPROPERTY(BlueprintReadOnly, Category = "Colletion", meta = (ToolTip = "Whether or not 'Things' are allowed to be collected (pairs with canPickup)..."))
	bool canCollect;
	
	virtual void SetAttachedSocket(FName socket, const bool useDirection) override;
	
	// Need to change the attaching socket if there's something in the bottom socket since cubes always attach to the bottom
	// (since the pivot is at the bottom).
	void RearrangeSockets();

public:
	virtual void AddAttachment(APickupableMaster* attachment, const FName& socket) override;
	virtual void RemoveAttachment(const FName& socket) override;

	UFUNCTION(BlueprintCallable)
	bool ObjectInSocket(FName socketToCheck) const { return socketInfo->ObjectInSocket(socketToCheck); };
	TArray<FName> GetFreeSlots() const { return socketInfo->GetFreeSockets(); };

	virtual void SetAbilityActive(bool value) override;

	UFUNCTION(BlueprintCallable)
	void DetachAll(bool push = true);
	void DetachFromSocket(const FName& socket) { RemoveAttachment(socket); }
	
	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetAttachedObjActors()
	{
		const AActor* self = this;
		TArray<AActor*> out;
		GetDescendentsActors(self, out);

		return out;
	}
	TArray<APickupableMaster*> GetAttachedObjects() const
	{
		const AActor* self = this;
		TArray<APickupableMaster*> out;
		GetDescendents(self, out);
		
		return out;
	}
	
	virtual void SetSelected(const bool value) override;
	virtual bool SetGroupSelected(const bool value) override;
	
	virtual float GetMass() const override;

	void Movement(const FVector& direction, const float speed) const { objMesh->AddForce(direction * speed * 1000); }
	void AddThing(AActor* thing) const;

	FOnOutOfRange onRangeExceeded;
	
	bool CanCollect() const { return canCollect; }

	UFUNCTION(BlueprintCallable)
	int SelectSocket(int socket);
};
