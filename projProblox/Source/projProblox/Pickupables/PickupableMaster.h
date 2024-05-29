/**************************************************************************************************************
* Pickupable Master - Header
* 
* The header file for the parent class of all the movable things in the game. Declares inherited methods and variables used to make the pickupable objects more
* replicable.
* Also creates the actor components that all variations of this class will have... Mesh and collider.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "./projProblox/UndoRedo/ActionHistory.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Math/Rotator.h"
#include "Kismet/KismetMathLibrary.h"
#include "projProblox/AudioManager.h"
#include "PickupableMaster.generated.h"


/// .................
#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }
#define PrintInt(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, FString::FromInt(x)); }
#define PrintFloat(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, FString::SanitizeFloat(x, 4)); }
#define PrintVector(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, "X: " + FString::SanitizeFloat(x.X, 4) + ", " + "Y: " + FString::SanitizeFloat(x.Y, 4) + ", " + "Z: " + FString::SanitizeFloat(x.Z, 4)); }
#define PrintRotator(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, "X: " + FString::SanitizeFloat(x.Roll, 4) + ", " + "Y: " + FString::SanitizeFloat(x.Pitch, 4) + ", " + "Z: " + FString::SanitizeFloat(x.Yaw, 4)); }

class ACubeCore;

UCLASS()
class PROJPROBLOX_API APickupableMaster : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	APickupableMaster();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

///////////////////////////// PROPERTIES /////////////////////////////
	/////////////// Components ///////////////
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* mesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* silhouette;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* mouseCollider;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* centerMass;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* placeIndicator;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAudioManager* sfxManager;


	/////////////// Selection / Placement ///////////////
	UPROPERTY(BlueprintReadOnly)
	bool selected;
	bool groupSelected;

	// When group selected, you're unable to place cores...
	bool canPlace;

	// This is in the PickupMaster class instead of the cube core (the only time it's used) to make it easier for the player to read.
	UPROPERTY(BlueprintReadWrite)
	bool canPickup = true;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The direction to place the object from the relative rotation of the 'objMesh'."))
	FVector placeDir {0, 0,-1};

	UPROPERTY(EditDefaultsOnly, meta = (Delta = 1))
	float placeRange = 180;
	
	/////////////// Rotations ///////////////
	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The axis the mesh should spin on when trying to spin horizontally (On the global axis)."))
	FVector horiAxis {0, 0,1};
	
	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The axis the mesh should spin on when trying to spin vertically (On the global axis)."))
	FVector vertAxis {0, 1,0};

	// Used to properly denote the amount of horizontal rotation the player has applied whilst the object has been held.
	float appliedYaw = 0;
	
	UPROPERTY(EditDefaultsOnly)
	float ascensionSpeed = 2.5f;
	
	FRotator defaultRot{};
	
	// Whether or not to use the parent core's socket's forward rotation when attaching...
	bool snapRot = true;

	
	/////////////// Attachments ///////////////
	UPROPERTY(BlueprintReadOnly)
	ACubeCore* parentCore;

	const FAttachmentTransformRules attachRules {EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, true};
	const FAttachmentTransformRules ghostRules {EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false};

	UPROPERTY(EditDefaultsOnly, meta = (Delta = .25f, ToolTip = "The positional offset for when objects attach to cores."))
	float attachOffset;

	UPROPERTY(EditDefaultsOnly, meta = (Delta = .25f, ToolTip = "The rotational offset for when the core attaches itself to the object."))
	FRotator rotOffset;

	UPROPERTY(BlueprintReadOnly)
	FName attachedSocket;
	
	bool isAttached;

	
	/////////////// Abilities ///////////////
	UPROPERTY(BlueprintReadOnly)
	bool active;

	bool needsTimer = true;
	
	/////////////// Other ///////////////
	UMaterial* defaultMat;
	UMaterial* silhouetteMat;


	/////////////// Undo/Redo ///////////////
	// The socket that this has been removed from
	FName removedSocket;
	bool wasDetached;

	// The relative transform that should be saved whenever attaching...
	FTransform savedTransform;
	
	APickupableMaster* previousObj;

	
///////////////////////////// Functions /////////////////////////////

	/////////////// Selection / Placement ///////////////
	virtual void Placement();
	FName NearestSocket(const ACubeCore* core, const FVector& hitPos) const;
	
	// Shows a preview of what the placed object would look like.
	virtual void GhostPlacement();
	void ResetGhost() const;

	// Should be ran at the end of GhostPlacement (+ before returns)
	void SetGhostBlocked();
	
	virtual void Ability(float deltaTime)
	{
		if(active)
		{
			silhouette->SetWorldRotation(mesh->GetComponentRotation());
			silhouette->SetWorldLocation(mesh->GetComponentLocation());
		}
	}

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void AscendDescend(const float inputValue) { AddActorWorldOffset(FVector::UpVector * inputValue * ascensionSpeed); }

	
	/////////////// Indicator ///////////////
	virtual void SetHideIndicator(const bool hide) { placeIndicator->SetHiddenInGame(hide); }
	virtual void ScaleIndicator();
	virtual void SetPlaceIndicator();

	
	/////////////// Attachments ///////////////
	virtual void AddAttachment(APickupableMaster* attachment, const FName& socket);


	/////////////// Rotations ///////////////
	// Used when attaching to sockets of the cube... Rounds the given rotation to right angles (90 degrees)
	static FRotator RoundRotation(const FRotator& rotation, const bool negate = true);
	static FRotator RoundRotation(const FRotator& rotation, const float rounder);
	static FRotator RoundRotation(const FRotator& rotation, const FRotator& referencedRot, const float rounder = -90);

	static FRotator DiagRoundRot(const FRotator& rotation, const FRotator& referencedRot, const bool isDiag);

	// Set the "axis" so that the angle is the value you want to round to.  
	static FRotator RoundAxis(const FRotator& rotation, const FRotator& axis = {90,90,90});
	static FRotator RoundAxis(const FRotator& rotation, const FRotator& referenceRot, const FRotator& axis);


	// Ensures that the mesh is pointing in the right direction when attached
	virtual void AlignSocketRot(bool useDirection = true);

	
	/////////////// Other ///////////////
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/////////////// Rotations ///////////////
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void RotateVert(float axis, const float rotSpeed);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void RotateHori(float axis, const float rotSpeed);
	
	UFUNCTION(BlueprintCallable, Category = "Movement", meta = (ToolTip = "Quarter parameter = whether of not to rotate in 45 degree intervals... (Recommended for Wedges)"))
	virtual void SnapRotateMesh(bool hori, FString keypress);

	UFUNCTION(BlueprintCallable, Category = "Movement", meta = (ToolTip = "Resets the relative rotation of the mesh and removes all velocity if set."))
	virtual void ResetRotation(bool resetVelocity = false);

	bool ShouldSnapRotation() const { return snapRot; }

	
	/////////////// Selection / Placement ///////////////
	UFUNCTION(BlueprintCallable)
	virtual EOperations SetSelected(const bool value);
	void ManualSetSelected(const bool value) { selected = value; };
	virtual EOperations SetGroupSelected(const bool value);

	virtual void Detach(bool push = false);

	// Add the offset in the direction of the sockets forward vector. Call after the being attached to a core.
	virtual void ApplyOffset(const ACubeCore* core) { if(core) SetActorRelativeLocation({attachOffset,0,0}); }

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual void SetCanPickup(const bool can) { canPickup = can; }

	// Since this is used a lot...
	void UseSilhouetteTransform(const UStaticMeshComponent* ghost = nullptr)
	{
		// If a silhouette wasn't given, use this one.
		if(!ghost) ghost = silhouette;
		
		const FTransform silhouetteTransform = ghost->GetComponentTransform();
		SetActorLocation(silhouetteTransform.GetLocation());
		SetActorRotation(silhouetteTransform.GetRotation());
		SetSavedTransform();
	}

	
	// Saves the relative transform from the parent (should be called while the parentCore is valid)
	void SetSavedTransform();
	void UseSavedTransform()
	{
		SetActorRelativeLocation(savedTransform.GetLocation());
		SetActorRelativeRotation(savedTransform.Rotator());
	}

	
	/////////////// Ability ///////////////
	UFUNCTION(BlueprintCallable, Category = "Ability")
	virtual void SetAbilityActive(const bool value) { active = value; }


	/////////////// Attachments ///////////////
	virtual void SetAttachedSocket(FName socket, const bool useDirection = true) { attachedSocket = socket; AlignSocketRot(useDirection); isAttached = true; }
	virtual void RemoveAttachment(const FName& socket) { attachedSocket = "None"; }


	/////////////// Hierarchy ///////////////
	static void GetDescendents(const AActor* parent, TArray<APickupableMaster*>& outArray);
	static void GetDescendentsActors(const AActor* parent, TArray<AActor*>& outArray);
	
	static void GetAscendantsActors(const AActor* child, TArray<AActor*>& outArray);
	static void GetAscendants(const AActor* child, TArray<APickupableMaster*>& outArray);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<APickupableMaster*> AllObjsInHierarchy();

	bool IsChildOf(const APickupableMaster* parent) const;

	
	/////////////// Undo/Redo ///////////////
	virtual void Reattach();

	
	/////////////// Getters ///////////////
	ACubeCore* GetCore() const { return parentCore; }
	APickupableMaster* GetPreviousObj() const { return previousObj; }

	// Returns the APickupable at the top of this hierarchy
	virtual APickupableMaster* GetParent();

	FVector GetPlaceDir() const { return placeDir; }
	
	virtual float GetAttachOffset(const APickupableMaster& attachee) { return attachOffset; }
	FRotator GetRotOffset() const { return rotOffset; }
	
	FName GetAttachedSocket() const { return attachedSocket; }
	virtual bool GetIsAttached() const { return isAttached; }
	
	UFUNCTION(BlueprintCallable, Category = "Getters")
	UStaticMeshComponent* GetMesh() const { return mesh; }
	UStaticMeshComponent* GetSilhouette() const { return silhouette; }

	// Returns the relative transform to the parent core.
	FTransform GetRelativeTransform() const { return mesh->GetRelativeTransform(); }

	UFUNCTION(BlueprintCallable)
	bool IsTimerRequired() const { return needsTimer; }
	
	UFUNCTION(BlueprintPure, Category = "Getters")
	virtual float GetMass() const
	{
		if(mesh->IsSimulatingPhysics()) return mesh->GetMass();
		return mesh->CalculateMass();
	}

	// Returns whether or not the player is able to pick this up.
	bool GetCanPickup() const { return canPickup; }

	
	/////////////// Other ///////////////
	void SetCore(ACubeCore* _core) { parentCore = _core; }

	// Enable/Disable gravity when selected/deselected
	virtual void ToggleGravity() const
	{
		mesh->SetEnableGravity(!selected);
		if(selected) RemoveVelocity();
	}
	virtual void ToggleGravity(bool gravityOn)
	{
		mesh->SetEnableGravity(gravityOn);
		if(!gravityOn) RemoveVelocity();	
	}
	
	virtual void RemoveVelocity() const;
	
	void ResetMaterial() const { silhouette->SetMaterial(0, silhouetteMat); }

	virtual void ActivateOutline(UMaterialInstance* mat) const;
	void DeactivateOutline() const;

	void AddVelocity(const FVector& velocity) const
	{
		const FVector currentVel = GetVelocity();
		mesh->SetPhysicsLinearVelocity(FVector(currentVel.X + velocity.X,currentVel.Y + velocity.Y, currentVel.Z + velocity.Z));
	}
};
