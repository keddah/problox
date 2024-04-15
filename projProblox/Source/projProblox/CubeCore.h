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
#include "Wheel.h"
#include "CubeCore.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartGame);

// Should be broadcasted whenever an object is added/removed from this cube
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttachmentChange);

// Should be broadcasted when the cube goes too far away from the container.
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOutOfRange);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameEnd);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndingGame);

// Should be broadcasted when the reset delay + longest duration has elapsed.. 
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttemptEnding);

// Should be broadcasted when the reset timer has elapsed.. 
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReset);

// Should be broadcasted when a "Thing" collides with any of the things that are attached to the cube.
// This has been declared so that a Blueprint function can be called.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddedThing, AActor*, thing);

UCLASS()
class PROJPROBLOX_API ACubeCore : public APickupableMaster
{
	GENERATED_BODY()

private:
	// The object that is attached to this cube and selected...
	APickupableMaster* selectedObj;

	UFUNCTION(BlueprintCallable)
	void StartEndingGame() { onEndingGame.Broadcast(); }

	void TimedObjectActivation(TArray<int> delays, TArray<int> durations);
	virtual void SetCanPickup(const bool can) override;
	void SetCanCollect(bool collectable);

	
	/////////////// Turn System ///////////////
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	FTimerHandle resetTimer;

	FTransform resetTransform;
	
	UPROPERTY(EditDefaultsOnly)
	float resetDelay = 5;

	short attempts = 1;
	short maxAttempts = 5;

	float longestDuration;
	
	UFUNCTION()
	void Start();
	
	
	/////////////// Game States ///////////////
	UFUNCTION(BlueprintCallable)
	void EndGame() { onGameEnd.Broadcast(); }

	UFUNCTION(BlueprintCallable, meta = (Tooltip = "Calls the delegate that initiates the game."))
	void StartGame(const TArray<int>& delays, const TArray<int>& durations)
	{
		// Crashes when the objects are rearranged
		if(durations.IsEmpty())
		{
			Print("Couldn't start game... durations empty", 4)
			return;
		}
		
		onStartGame.Broadcast();
		TimedObjectActivation(delays, durations);
	}
	
	
protected:
	ACubeCore();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
///////////////////////////// PROPERTIES /////////////////////////////
	/////////////// Components ///////////////
	// A data asset that contains an array of things that are attached to each face of the cube.
	UPROPERTY(VisibleAnywhere)
	UCubeSocketInfo* socketInfo;
	
	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UMaterial* inactiveMat;

	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UMaterialInstance* selectedMat;
	
	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UBoxComponent* thingCollector;
	
	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UBoxComponent* thingHomer;

	UPROPERTY(EditAnywhere, Category = "Collection", BlueprintReadOnly)
	float fairBounds = 6500;
	
	UPROPERTY(VisibleAnywhere, Category = "Collection", meta = (ToolTip = "This arrow should be shown when the cube is too far away from the collector"))
	UArrowComponent* distanceLine;
	
	
	/////////////// Collection ///////////////
	UPROPERTY(BlueprintReadOnly, Category = "Collection")
	ACollector* collector;

	UPROPERTY(BlueprintReadOnly, Category = "Colletion", meta = (ToolTip = "Whether or not 'Things' are allowed to be collected (pairs with canPickup)..."))
	bool canCollect;

	
	/////////////// Delegates ///////////////
	UPROPERTY(BlueprintAssignable)
	FOnAddedThing onAddedThing;
	
	/////////////// Other ///////////////
	UMaterial* defaultMat;
	APickupableMaster* hitObj;
	


///////////////////////////// Functions /////////////////////////////
	/////////////// Selection/Placement ///////////////
	// Ghost placement except the other object's silhouette is affected 
	void OtherGhostPlacement();
	virtual void Placement() override;

	void AdjustRange() { placeRange *= GetActorScale().Length(); }

	
	/////////////// Rotations ///////////////
	// Sets rotations depending on the attachee's type / snapRot variable...
	void OtherRotations(const APickupableMaster& other);

	virtual void ResetRotation(bool resetVelocity) override;

	
	/////////////// Attachments ///////////////
	virtual void SetAttachedSocket(FName socket, const bool useDirection) override;
	
	// Need to change the attaching socket if there's something in the bottom socket since cubes always attach to the bottom
	// (since the pivot is at the bottom).
	void RearrangeSockets();

	
	/////////////// Other ///////////////
	virtual void RemoveVelocity() const override;
	virtual void GravitySelection() const override;
	
public:
	/////////////// Delegates ///////////////
	FOnOutOfRange onRangeExceeded;

	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired when an attachment has been added or removed from this core."))
	FOnAttachmentChange onChangeAttachments;

	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once the game has started (when the play button is pressed)."))
	FOnStartGame onStartGame;
	
	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once the countdown has finished it completely ends the level."))
	FOnGameEnd onGameEnd;
	
	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once the min percentage of Things has been collected."))
	FOnEndingGame onEndingGame;

	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once x seconds have passed after the last attachment deactivates."))
	FOnAttemptEnding onAttemptEnding;

	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once x seconds have passed after the last attachment deactivates."))
	FOnReset onReset;
	
	
	/////////////// Attachments ///////////////
	virtual void AddAttachment(APickupableMaster* attachment, const FName& socket) override;
	virtual void RemoveAttachment(const FName& socket) override;
	virtual void RemoveAttachment(APickupableMaster* obj);

	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetAttachedObjActors()
	{
		TArray<AActor*> out;
		for (const auto& obj : socketInfo->GetAttachmentActors())
		{
			// Add the wheels manually since they're aren't actually attached to the actor.
			// (will only work for direct connections).
			if(obj->IsA<AWheel>()) out.Add(obj);
		}
		GetDescendentsActors(this, out);

		return out;
	}
	TArray<APickupableMaster*> GetAttachedObjects() const
	{
		TArray<APickupableMaster*> out;
		for (const auto& obj : socketInfo->GetAttachments())
		{
			// Add the wheels manually since they're aren't actually attached to the actor.
			// (will only work for direct connections).
			if(obj->IsA<AWheel>()) out.Add(obj);
		}
		GetDescendents(this, out);
		
		return out;
	}
	
	UFUNCTION(BlueprintCallable)
	void DetachAll(bool push = true);
	
	UFUNCTION(BlueprintCallable)
	bool ObjectInSocket(FName socketToCheck) const { return socketInfo->ObjectInSocket(socketToCheck); };
	TArray<FName> GetFreeSlots() const { return socketInfo->GetFreeSockets(); };

	
	/////////////// Abilities ///////////////
	UFUNCTION(BlueprintCallable, Category = "Ablility")
	void SetAllAbilityActive(bool value) const;
	virtual void SetAbilityActive(bool value) override;

	
	/////////////// Selection/Placement ///////////////
	virtual void SetSelected(const bool value) override;
	virtual bool SetGroupSelected(const bool value) override;

	
	/////////////// Turn System ///////////////
	void SetMaxAttempts(const short& max) { maxAttempts = max; }
	void ResetToStart();
	void InitiateReset() const { onAttemptEnding.Broadcast(); }
	FTransform GetResetTransform() const { return resetTransform; }

	/////////////// Getters ///////////////
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Gets the attachments that are directly attached to this cube."))
	TArray<APickupableMaster*> GetCloseAttachments() const { return socketInfo->GetAttachments(); }

	virtual float GetMass() const override;
	bool CanCollect() const { return canCollect; }


	/////////////// Other ///////////////
	void AddThing(AActor* thing) const;

	UFUNCTION(BlueprintCallable)
	int SelectSocket(int socket);


};
