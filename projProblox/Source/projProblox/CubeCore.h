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

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartGame);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttachmentChange);

// Should be broadcasted when the cube goes too far away from the container.
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOutOfRange);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndingGame);

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

	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* line;

	UFUNCTION(BlueprintCallable)
	void StartEndingGame() { onEndingGame.Broadcast(); }

	void TimedObjectActivation(TArray<int> durations);
	
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

	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UMaterialInstance* selectedMat;
	
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

	UFUNCTION(BlueprintCallable)
	void EndGame() { onGameEnd.Broadcast(); }

	UFUNCTION(BlueprintCallable, meta = (Tooltip = "Calls the delegate that initiates the game."))
	void StartGame(const TArray<int>& durations)
	{
		// Crashes when the objects are rearranged
		if(durations.IsEmpty())
		{
			Print("Couldn't start game... durations empty", 4)
			return;
		}
		
		onStartGame.Broadcast();
		TimedObjectActivation(durations);
	}
	
public:
	virtual void AddAttachment(APickupableMaster* attachment, const FName& socket) override;
	virtual void RemoveAttachment(const FName& socket) override;
	virtual void RemoveAttachment(APickupableMaster* obj);

	UFUNCTION(BlueprintCallable)
	bool ObjectInSocket(FName socketToCheck) const { return socketInfo->ObjectInSocket(socketToCheck); };
	TArray<FName> GetFreeSlots() const { return socketInfo->GetFreeSockets(); };

	virtual void SetAbilityActive(bool value) override;

	UFUNCTION(BlueprintCallable, Category = "Ablility")
	void SetAllAbilityActive(bool value) const;

	UFUNCTION(BlueprintCallable)
	void DetachAll(bool push = true);
	
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

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Gets the attachments that are directly attached to this cube."))
	TArray<APickupableMaster*> GetCloseAttachments() const { return socketInfo->GetAttachments(); }
	
	virtual void SetSelected(const bool value) override;
	virtual bool SetGroupSelected(const bool value) override;
	
	virtual float GetMass() const override;

	void Movement(const FVector& direction, const float speed) const { objMesh->AddForce(direction * speed * 1000); }
	void AddThing(AActor* thing) const;

	FOnOutOfRange onRangeExceeded;

	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired when an attachment has been added or removed from this core."))
	FOnAttachmentChange onChangeAttachments;

	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once the game has started (when the play button is pressed)."))
	FOnStartGame onStartGame;
	
	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once the countdown has finished it completely ends the level."))
	FOnGameEnd onGameEnd;
	
	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once the min percentage of Things has been collected."))
	FOnEndingGame onEndingGame;
	
	bool CanCollect() const { return canCollect; }

	UFUNCTION(BlueprintCallable)
	int SelectSocket(int socket);
};
