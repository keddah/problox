/**************************************************************************************************************
* Cube core - Header
* 
* The header file for the core class (the main cube). This class inherits from the Pickupable Master class.
* Also declares delegates that need to be broadcast to essential parts of levels (like the player, collector and cells). 
*
* OVERRIDES:
*	SetCanPickup
*	Reattach
*	Placement
*	ResetRotation
*	SetAttachedSocket
*	RemoveVelocity
*	ToggleGravity
*	AddAttachment
*	RemoveAttachment
*	SetAbilityActive
*	SetSelected
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "./projProblox/Collector.h"
#include "projProblox/CustomGameInstance.h"
#include "projProblox/SaveFiles.h"
#include "SocketInfo/CubeSocketInfo.h"
#include "CubeCore.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTurnStarted);

// Should be broadcast whenever more cells are spawned in after the game has already started.
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpawnedCells);

// Should be broadcast whenever an object is added/removed from this cube.
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttachmentChange);

// Should be broadcast when the reset timer has elapsed.. 
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReset);

// Should be broadcast when a "Thing" collides with any of the things that are attached to the cube.
// This has been declared so that a Blueprint function can be called.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddedThing, AActor*, thing);

UCLASS()
class PROJPROBLOX_API ACubeCore : public APickupableMaster
{
	GENERATED_BODY()

	// The object that is attached to this cube and selected...
	APickupableMaster* selectedObj;

	// UFUNCTION(BlueprintCallable)
	// void StartEndingGame() { onEndingGame.Broadcast(); }

	void TimedObjectActivation(TArray<int> delays, TArray<int> durations, float longestDuration);
	void SetCanCollect(bool collectable);


	/////////////// Undo/Redo ///////////////
	virtual void Reattach(bool sound) override;

	
	/////////////// Game States ///////////////
	UFUNCTION()
	void Start();
	
	UFUNCTION(BlueprintCallable, meta = (Tooltip = "Calls the delegate that initiates the game."))
	void StartGame() { onTurnStarted.Broadcast(); } 

	UFUNCTION(BlueprintCallable, meta = (Tooltip = "Gives the core the delay's / durations and calls the start game delegate."))
	void StartStoryGame(const TArray<int>& delays, const TArray<int>& durations, const float longestDuration)
	{
		TimedObjectActivation(delays, durations, longestDuration);
		StartGame();
	}


	/////////////// Other ///////////////
	UFUNCTION(BlueprintCallable)
	void AddMoney(const int amount = 10) { if (instance) instance->AddMoney(amount); else Print("Instance was invalid", 4) }
	UCustomGameInstance* instance;
	
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

	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* selectedMat;
	
	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UBoxComponent* thingCollector;
	
	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UBoxComponent* thingHomer;

	UPROPERTY(EditAnywhere, Category = "Collection", BlueprintReadOnly)
	float fairBounds = 6500;
	
	UPROPERTY(VisibleAnywhere, Category = "Collection", meta = (ToolTip = "This arrow should be shown when the cube is too far away from the collector"))
	UArrowComponent* distanceLine;


	/////////////// Selection/Placement ///////////////
	// The socket that the placement ray from this object is firing from
	FName raySocket = "DOWN";

	// The socket opposite to the attached socket (should always be blocked)
	FName oppositeSocket;
	
	
	/////////////// Collection ///////////////
	UPROPERTY(BlueprintReadOnly, Category = "Collection")
	ACollector* collector;

	UPROPERTY(BlueprintReadOnly, Category = "Colletion", meta = (ToolTip = "Whether or not 'Things' are allowed to be collected (pairs with canPickup)..."))
	bool canCollect = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "The time that has to elapse in order for the game to end once the minimum amount of cells has been collected"))
	float thingAttraction = 4200000;
	
	
	/////////////// Delegates ///////////////
	UPROPERTY(BlueprintAssignable)
	FOnAddedThing onAddedThing;
	
	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired when an attachment has been added or removed from this core."))
	FOnAttachmentChange onChangeAttachments;

	/////////////// Undo/Redo ///////////////
	TArray<APickupableMaster*> previousAttachments;

	
	/////////////// Turn System ///////////////
	UPROPERTY(BlueprintReadOnly)
	FTimerHandle resetTimer;

	/////////////// Other ///////////////
	UMaterial* defaultMat;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "The time that has to elapse in order for the game to end once the minimum amount of cells has been collected"))
	float levelEndDelay = 5;

	UPROPERTY(EditDefaultsOnly, Category = "Angular Drag", meta = (ToolTip = "The angular drag that the mesh should have when a turn is active."))
	float defaultAngularDrag = .05f;

	UPROPERTY(EditDefaultsOnly, Category = "Angular Drag", meta = (ToolTip = "The angular drag that the mesh should have at the end of a turn."))
	float heavyAngularDrag = 1;


	/////////////// Game States ///////////////
	UPROPERTY(BlueprintReadOnly)
	EGameMode currentMode;

	
///////////////////////////// Functions /////////////////////////////
	/////////////// Rotations ///////////////
	virtual void ResetRotation(bool resetVelocity) override;

	
	/////////////// Attachments ///////////////
	virtual void SetAttachedSocket(FName socket, const bool useDirection) override;

	
	/////////////// Other ///////////////
	virtual void ToggleGravity() const override;
	virtual void ToggleGravity(bool gravityOn) override
	{
		Super::ToggleGravity(gravityOn);
		for(const auto& obj : socketInfo->GetAttachments()) obj->ToggleGravity(gravityOn);
	}
	
	UFUNCTION(BlueprintCallable)
	void PlayCollectSound() { soundPlayer->PlayAbility(); }
	
	void SetEnableCollisions(bool enable) const;
	
public:
	/////////////// Attachments ///////////////
	virtual void AddAttachment(APickupableMaster* attachment, const FName& socket) override;
	virtual void RemoveAttachment(const FName& socket) override;
	virtual void RemoveAttachment(APickupableMaster* obj);

	UFUNCTION(BlueprintCallable, Category = "Socket", meta = (ToolTip = "Returns an array of all the attachments that were detached."))
	TArray<APickupableMaster*> DetachAll(bool push = true);
	
	UFUNCTION(BlueprintCallable, Category = "Socket")
	bool ObjectInSocket(const FName& socketToCheck) const { return socketInfo->ObjectInSocket(socketToCheck); };

	UFUNCTION(BlueprintCallable)
	void EjectObject(APickupableMaster* toEject);
	
	/////////////// Abilities ///////////////
	UFUNCTION(BlueprintCallable, Category = "Ablility")
	void SetAllAbilityActive(bool value) const;
	virtual void SetAbilityActive(bool value) override;

	
	/////////////// Selection/Placement ///////////////
	virtual EOperations SetSelected(const bool value) override;
	virtual void Detach(bool push) override;
	
	/////////////// Turn System ///////////////
	void ResetToStart() const;


	/////////////// Getters ///////////////
	// UFUNCTION(BlueprintCallable, Category = "Socket")
	TArray<APickupableMaster*> GetAttachedObjs() const
	{
		TArray<APickupableMaster*> out;
		GetDescendents(this, out);
		
		return out;
	}

	TArray<FName> GetFreeSlots() const
	{
		TArray<FName> slots = socketInfo->GetFreeSockets();
		if(slots.Contains(oppositeSocket)) slots.Remove(oppositeSocket);
		return slots;
	}

	virtual bool GetIsAttached() const override { return parentCore || isAttached; }
	
	UFUNCTION(BlueprintCallable, Category = "Socket")
	int GetSocketCount() const { return socketInfo->GetSockets().Num(); };
	
	UFUNCTION(BlueprintCallable, Category = "Socket", meta = (ToolTip = "Gets the attachments that are directly attached to this cube."))
	TArray<APickupableMaster*> GetCloseAttachments() const { return socketInfo->GetAttachments(); }

	virtual float GetMass() const override;
	bool CanCollect() const { return canCollect; }

	UFUNCTION(BlueprintCallable)
	EGameMode GetGameMode() const { return currentMode; }


	/////////////// Delegates ///////////////
	// UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once the countdown has finished it completely ends the level."))
	// FOnGameEnd onGameEnd;
	//
	// FOnOutOfRange onRangeExceeded;

	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once the game has started (when the play button is pressed)."))
	FOnTurnStarted onTurnStarted;

	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once x seconds have passed after the last attachment deactivates."))
	FOnReset onReset;

	UFUNCTION(BlueprintCallable)
	void BroadcastNewCells() const { onCellsSpawned.Broadcast(); }
	
	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired when more cells are spawned in whilst the game has already started."))
	FOnSpawnedCells onCellsSpawned;
	
	/////////////// Undo/Redo ///////////////
	// If something was attached to this core, when undoing/redoing, it detaches the objects that weren't there before the change
	// THIS SHOULDN'T BE NEEDED BUT THE OVERWRITE FUNCTION ISN'T WORKING PROPERLY...
	void RevertAttachments();

	
	/////////////// Other ///////////////
	virtual void RemoveVelocity() const override;

	void AddThing(AActor* thing) const;

	UFUNCTION(BlueprintCallable, Category = "Socket")
	int SelectSocket(int socket);

	void Teleport(const FVector& pos, const FRotator& rot);
	
	void LoseMoney(const short amount) { if(instance) instance->LoseMoney(amount); else Print("Instance was invalid.", 4) }
};
