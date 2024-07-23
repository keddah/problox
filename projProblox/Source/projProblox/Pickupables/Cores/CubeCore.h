/**************************************************************************************************************
* Cube core - Header
* 
* The header file for the core class (the main cube). This class inherits from the Pickupable Master class.
* Also declares delegates that need to be broadcast to essential parts of levels (like the player, collector and cells). 
*
* OVERRIDES:
*	SetCanPickup
*	Attach
*	Placement
*	ResetRotation
*	SetAttachedSocket
*	RemoveVelocity
*	ToggleGravity
*	PickupCell
*	GetMass
*	AddAttachment
*	Detach
*	RemoveAttachment
*	SetAbilityActive
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "./projProblox/Collector.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "projProblox/CustomGameInstance.h"
#include "SocketInfo/CubeSocketInfo.h"
#include "CubeCore.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTurnStarted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBadCamera);

// Should be broadcast whenever more cells are spawned in after the game has already started.
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpawnedCells);

// Should be broadcast when the reset timer has elapsed.. 
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReset);

// Should be broadcast when a "Thing" collides with any of the things that are attached to the cube.
// This has been declared so that a Blueprint function can be called.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddedCell, AActor*, thing);

UCLASS()
class PROJPROBLOX_API ACubeCore : public APickupableMaster
{
	GENERATED_BODY()

	// The object that is attached to this cube and selected...
	APickupableMaster* selectedObj;

	void TimedObjectActivation(const TArray<int>& delays, const TArray<int>& durations, float _longestTime);


	/////////////// Game States ///////////////
	UFUNCTION()
	void Start();
	
	UFUNCTION(BlueprintCallable, meta = (Tooltip = "Calls the delegate that initiates the game."))
	void StartGame() { onTurnStarted.Broadcast(); } 

	UFUNCTION(BlueprintCallable, meta = (Tooltip = "Gives the core the delay's / durations and calls the start game delegate."))
	void StartStoryGame(const TArray<int>& delays, const TArray<int>& durations, const float _longestTime)
	{
		if(!wrld) return;
		if(wrld->GetTimerManager().IsTimerActive(resetTimer)) return;

		TimedObjectActivation(delays, durations, _longestTime);
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
	
	/////////////// Components ///////////////
	// A data asset that contains an array of things that are attached to each face of the cube.
	UPROPERTY(VisibleAnywhere)
	UCubeSocketInfo* socketInfo;

private:
	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UBoxComponent* cellCollector;
	
	UPROPERTY(EditDefaultsOnly, Category = "Collection")
	UBoxComponent* cellHomer;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	UCameraComponent* coreCam;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	USpringArmComponent* camArm;
	

protected:
	/////////////// Collection ///////////////
	UPROPERTY(BlueprintReadOnly, Category = "Collection")
	ACollector* collector;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "The time that has to elapse in order for the game to end once the minimum amount of cells has been collected"))
	float cellAttraction = 4200000;

	
	/////////////// Game States ///////////////
	UPROPERTY(BlueprintReadOnly)
	EGameMode currentMode;

	
	/////////////// Turn System ///////////////
	UPROPERTY(BlueprintReadOnly)
	FTimerHandle resetTimer;

	
	/////////////// Selection/Placement ///////////////
	// The socket that the placement ray from this object is firing from
	FName raySocket = "DOWN";

	// The socket opposite to the attached socket (should always be blocked)
	FName oppositeSocket;

	
private:
	/////////////// Delegates ///////////////
	UPROPERTY(BlueprintAssignable)
	FOnAddedCell onAddedCell;

	float longestDuration;
	
	UPROPERTY(EditDefaultsOnly, meta = (ClampMin = 0, ClampMax = 1, Delta = .05f, meta = "The percentage of the turn that needs to have happened before the player can end the turn early."))
	float endTurnPercent = .4f;

	/////////////// Selection / Placement ///////////////
	virtual void Attach() override {}

	
	/////////////// Other ///////////////
	UPROPERTY(EditDefaultsOnly, Category = "Forces|Detachment", meta = (ToolTip = "The force to be applied when detaching."))
	float detachForce = 3000;
	
	UPROPERTY(EditDefaultsOnly, Category = "Forces|Detachment", meta = (ToolTip = "The angular force to be applied when detaching."))
	float detachAngularForce = 100;
	
	UPROPERTY(EditDefaultsOnly, Category = "Forces|Drag", meta = (ToolTip = "The angular drag that the mesh should have when a turn is active."))
	float defaultAngularDrag = .05f;

	UPROPERTY(EditDefaultsOnly, Category = "Forces|Drag", meta = (ToolTip = "The angular drag that the mesh should have at the end of a turn."))
	float heavyAngularDrag = 1;

	UPROPERTY(EditDefaultsOnly, Category = "Camera", meta = (ToolTip = "Higher number = snappier."))
	float cameraDamping = 3;

	FVector lastSpawnPos;
	
	UFUNCTION(BlueprintCallable)
	void PlayCollectSound() { soundPlayer->PlayAbility(); }
	
	void SetEnableCollisions(bool enable) const;

	void ClearAndInvalidateTimer()
	{
		if(!wrld) return;

		wrld->GetTimerManager().ClearTimer(resetTimer);
		resetTimer.Invalidate();
	}

	// In BP only run this if the view target is this core.
	UFUNCTION(BlueprintCallable)
	void CoreCamera(float deltaTime);

	
	/////////////// Rotations ///////////////
	virtual void ResetRotation(bool resetVelocity) override;


public:
	/////////////// Attachments ///////////////
	virtual void AddAttachment(APickupableMaster* attachment, const FName& socket) override;
	virtual void RemoveAttachment(const FName& socket) override;
	virtual void RemoveAttachment(APickupableMaster* obj);

	UFUNCTION(BlueprintCallable, Category = "Socket", meta = (ToolTip = "Returns an array of all the attachments that were detached."))
	TArray<APickupableMaster*> DetachAll();
	
	UFUNCTION(BlueprintCallable, Category = "Socket")
	bool ObjectInSocket(FName socketToCheck) const { return socketInfo->ObjectInSocket(socketToCheck); };

	UFUNCTION(BlueprintCallable)
	void EjectObject(APickupableMaster* toEject, bool playSound = true);
	void EjectObject(const FName& ejectSocket, bool playSound = true) const;
	
	/////////////// Abilities ///////////////
	virtual void SetAbilityActive(bool value) override;

	
	/////////////// Selection/Placement ///////////////
	virtual void Detach(bool playSound, float _detachForce, float _detachAngularForce) override {}
	
	
	/////////////// Turn System ///////////////
	void ResetToStart();


	/////////////// Getters ///////////////
	// Returns all the objects that are attached to this (including things attached to the attached things)
	TArray<APickupableMaster*> GetAttachedObjs() const
	{
		TArray<APickupableMaster*> out;
		GetDescendents(this, out);
		
		return out;
	}

	TArray<FName> GetOccupiedSockets() const { return socketInfo->GetOccupiedSockets(); }
	TArray<FName> GetFreeSockets() const
	{
		TArray<FName> slots = socketInfo->GetFreeSockets();
		if(slots.Contains(oppositeSocket)) slots.Remove(oppositeSocket);
		return slots;
	}

	UFUNCTION(BlueprintCallable, Category = "Socket", meta = (ToolTip = "Gets the attachments that are directly attached to this cube."))
	TArray<APickupableMaster*> GetCloseAttachments() const { return socketInfo->GetAttachments(); }

	virtual float GetMass() const override;
	float GetDefaultDrag() const { return defaultAngularDrag; }
	float GetHeavyDrag() const { return heavyAngularDrag; }

	UFUNCTION(BlueprintCallable)
	EGameMode GetGameMode() const { return currentMode; }
	
	void SetGameMode(const EGameMode& mode) { currentMode = mode; }

	UFUNCTION(BlueprintCallable)
	bool InAdjustPhase() const
	{
		if(!wrld) return false;
		if(!instance) return false;
		
		// If not in the build area and the timer isn't active
		// When this timer is active, it means that the game is simulating
		return instance->GetCurrentLevel() != 0 && !wrld->GetTimerManager().IsTimerActive(resetTimer);
	}


	/////////////// Delegates ///////////////
	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once the game has started (when the play button is pressed)."))
	FOnTurnStarted onTurnStarted;


	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired once x seconds have passed after the last attachment deactivates."))
	FOnReset onReset;
	
	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired if the core cam is facind directly upwards... meaning the camera is in the floor."))
	FOnBadCamera onBadCamera;

	UFUNCTION(BlueprintCallable)
	void BroadcastNewCells() const { onCellsSpawned.Broadcast(); }
	
	UPROPERTY(BlueprintAssignable, meta = (ToolTip = "Will be fired when more cells are spawned in whilst the game has already started."))
	FOnSpawnedCells onCellsSpawned;
	
	/////////////// Other ///////////////
	virtual void ToggleGravity(const bool on) const override
	{
		Super::ToggleGravity(on);
		for(const auto& obj : socketInfo->GetAttachments()) obj->ToggleGravity(on);
	}
	virtual void RemoveVelocity() const override;

	// To be used whenever the core goes out of bounds or when the core changes levels
	UFUNCTION(BlueprintCallable)
	void Teleport(const FRotator& rot, const FVector& pos, bool respawning = false);
	void EndTurn(bool force = false);

	virtual void PickupCell(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
	void LoseMoney(const short amount) const { if(instance) instance->LoseMoney(amount); else Print("Instance was invalid.", 4) }
};
