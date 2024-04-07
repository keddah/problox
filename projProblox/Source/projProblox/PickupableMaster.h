/**************************************************************************************************************
* Pickupable Master - Header
* 
* The header file for the parent class of all the moveable things in the game. Declares inherited methods and variables used to make the pickupable objects more
* replicable.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Math/Rotator.h"
#include "Kismet/KismetMathLibrary.h"
#include "PickupableMaster.generated.h"

#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }
#define PrintRotator(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, "X: " + FString::SanitizeFloat(x.Roll) + ", " + "Y: " + FString::SanitizeFloat(x.Pitch) + ", " + "Z: " + FString::SanitizeFloat(x.Yaw)); }
#define PrintVector(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, "X: " + FString::SanitizeFloat(x.X) + ", " + "Y: " + FString::SanitizeFloat(x.Y) + ", " + "Z: " + FString::SanitizeFloat(x.Z)); }

class ACubeCore;

UCLASS()
class PROJPROBLOX_API APickupableMaster : public AActor
{
	GENERATED_BODY()

	const float rotSpeed = 2;
	
public:	
	// Sets default values for this actor's properties
	APickupableMaster();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	/////////////////// PROPERTIES ///////////////////

	// Blueprint visible components..
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* objMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* silhouette;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* collider;

	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* indicator;

	// UPROPERTY(EditDefaultsOnly)
	// UMaterial* indicatorMat;
	
	UPROPERTY(BlueprintReadOnly)
	bool active;

	UPROPERTY(BlueprintReadOnly)
	bool selected;

	// When group selected, you're unable to place cores...
	// (everything would work normally but when attaching welding the physics gets awkward...)
	bool canPlace;

	// This is in the PickupMaster class instead of the cube core (the only time it's used) to make it easier for the player to read.
	UPROPERTY(BlueprintReadWrite)
	bool canPickup = true;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The direction to place the object from the relative rotation of the 'objMesh'."))
	FVector placeDir {0, 0,-1};

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The axis the mesh should spin on when trying to spin horizontally (On the global axis)."))
	FVector horiAxis {0, 0,1};
	
	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The axis the mesh should spin on when trying to spin vertically (On the global axis)."))
	FVector vertAxis {0, 1,0};

	// Used to properly denote the amount of horizontal rotation the player has applied whilst the object has been held.
	float appliedYaw = 0;
	
	UPROPERTY(EditDefaultsOnly)
	float ascensionSpeed = 2.5f;
	
	UPROPERTY(EditDefaultsOnly)
	float placeRange = 180;

	UPROPERTY(BlueprintReadOnly)
	ACubeCore* parentCore;

	const FAttachmentTransformRules attachRules {EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, true};
	const FAttachmentTransformRules ghostRules {EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false};

	UPROPERTY(EditDefaultsOnly, meta = (ToolTip = "The positional offset for when objects attach to cores."))
	float attachOffset;

	UPROPERTY(BlueprintReadOnly)
	FName attachedSocket;
	
	bool isAttached;
	bool ghostVisible;
	
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
	/////////////////// FUNCTIONS ///////////////////
	
	virtual void Placement();
	FName NearestSocket(const ACubeCore* core, const FHitResult& hit) const;
	
	// Shows a preview of what the placed object would look like.
	virtual void GhostPlacement();
	void ResetGhost();
	
	virtual void Ability() {}

	virtual void AddAttachment(APickupableMaster* attachment, const FName& socket);
	virtual void RemoveAttachment(const FName& socket) { attachedSocket = "None"; }

	virtual void SetHideIndicator(const bool hide) { indicator->SetHiddenInGame(hide); }
	virtual void SetupIndicator();
	
	// Used when attaching to sockets of the cube... Rounds the given rotation to right angles (90 degrees)
	static FRotator RoundRotation(const FRotator& rotation, const bool negate = true)
	{
		// Quantize each component of the Rotator using Frac and Floor
		FRotator rounded;
		const float rounder = negate? -90 : 90;
		
		// Using -90 since otherwise the outputted rotation would face the opposite direction when attaching)
		rounded.Pitch = FMath::RoundHalfFromZero(rotation.Pitch / rounder) * rounder;
		rounded.Yaw = FMath::RoundHalfFromZero(rotation.Yaw / rounder) * rounder;
		rounded.Roll = FMath::RoundHalfFromZero(rotation.Roll / rounder) * rounder;

		return rounded;
	}
	static FRotator RoundRotation(const FRotator& rotation, const float rounder)
	{
		// Quantize each component of the Rotator using Frac and Floor
		FRotator rounded;
		
		rounded.Pitch = FMath::RoundHalfFromZero(rotation.Pitch / rounder) * rounder;
		rounded.Yaw = FMath::RoundHalfFromZero(rotation.Yaw / rounder) * rounder;
		rounded.Roll = FMath::RoundHalfFromZero(rotation.Roll / rounder) * rounder;

		return rounded;
	}

	static FRotator RoundRotation(const FRotator& rotation, const FRotator& referencedRot)
	{
		// Calculate the difference between the rotations
		const FRotator difference = rotation - referencedRot;

		// Round the differences to the nearest 90 degrees
		const float pitchDiff = FMath::RoundHalfFromZero(difference.Pitch / 90.0f) * 90.0f;
		const float yawDiff = FMath::RoundHalfFromZero(difference.Yaw / 90.0f) * 90.0f;
		const float rollDiff = FMath::RoundHalfFromZero(difference.Roll / 90.0f) * 90.0f;

		// Add the rounded differences to the reference rotation to get the rounded rotation
		return referencedRot + FRotator(pitchDiff, yawDiff, rollDiff);
	}
	
	// Ensures that the mesh is pointing in the right direction when attached
	virtual void AlignSocketRot(bool useDirection = true);

	FRotator defaultRot{};
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Ability")
	virtual void SetAbilityActive(const bool value) { active = value; }
	
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void RotateVert(float axis);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void RotateHori(float axis);
	
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SnapRotateMesh(bool hori, FString keypress, bool quarter = false);

	UFUNCTION(BlueprintCallable, Category = "Movement", meta = (ToolTip = "Resets the relative rotation of the mesh and removes all velocity if set."))
	virtual void ResetRotation(bool resetVelocity = false);
	virtual void RemoveVelocity() const;

	// Add the offset in the direction of the sockets forward vector. Call after the being attached to a core.
	virtual void ApplyOffset(const ACubeCore* core) { if(core) SetActorRelativeLocation({attachOffset,0,0}); }
	
	// Enable/Disable gravity when selected/deselected
	UFUNCTION(BlueprintCallable)
	void GravitySelection() const { objMesh->SetEnableGravity(!selected); }

	FName GetAttachedSocket() const { return attachedSocket; }
	virtual void Detach();
	
	UFUNCTION(BlueprintCallable, Category = "Getters")
	UStaticMeshComponent* GetMesh() const { return objMesh; }
	UStaticMeshComponent* GetSilhouette() const { return silhouette; }

	UFUNCTION(BlueprintCallable)
	virtual void SetSelected(const bool value);
	virtual bool SetGroupSelected(const bool value);

	void SetCore(ACubeCore* _core) { parentCore = _core; }
	ACubeCore* GetCore() const { return parentCore; }

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<APickupableMaster*> AllObjsInHierarchy();

	static void GetDescendents(const AActor* parent, TArray<APickupableMaster*>& outArray);
	static void GetDescendentsActors(const AActor* parent, TArray<AActor*>& outArray);
	
	static void GetAscendantsActors(const AActor* child, TArray<AActor*>& outArray);
	static void GetAscendants(const AActor* child, TArray<APickupableMaster*>& outArray);
	
	APickupableMaster* GetParent();
	bool IsChildOf(const APickupableMaster* parent);

	virtual void SetAttachedSocket(FName socket, const bool useDirection = true) { attachedSocket = socket; AlignSocketRot(useDirection); }

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void AscendDescend(const float inputValue) { AddActorWorldOffset(FVector::UpVector * inputValue * ascensionSpeed); }

	UFUNCTION(BlueprintPure, Category = "Getters")
	virtual float GetMass() const { return objMesh->GetMass(); }

	void AddVelocity(const FVector& velocity) const
	{
		const FVector currentVel = GetVelocity();
		objMesh->SetPhysicsLinearVelocity(FVector(currentVel.X + velocity.X,currentVel.Y + velocity.Y, currentVel.Z + velocity.Z));
	}

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual void SetCanPickup(const bool can) { canPickup = can; }

	// Returns whether or not the player is able to pick this up.
	bool GetCanPickup() const { return canPickup; }

};
