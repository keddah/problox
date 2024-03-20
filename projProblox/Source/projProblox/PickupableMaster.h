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
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Math/Rotator.h"
#include "Kismet/KismetMathLibrary.h"
#include "PickupableMaster.generated.h"

#define Print(x) { GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, x); }

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
	UBoxComponent* collider;

	UPROPERTY(BlueprintReadOnly)
	bool active;

	UPROPERTY(BlueprintReadOnly)
	bool selected;

	// This is in the PickupMaster class instead of the cube core (the only time it's used) to make it easier for the player to read.
	UPROPERTY(BlueprintReadWrite)
	bool canPickup = true;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The direction to place the object from the relative rotation of the 'objMesh'."))
	FVector placeDir {0, 0,-1};
	
	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The axis the mesh should spin on when trying to spin horizontally (On the global axis)."))
	FVector horiAxis {0, 0,1};
	
	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The axis the mesh should spin on when trying to spin vertically (On the global axis)."))
	FVector vertAxis {0, 1,0};

	UPROPERTY(EditDefaultsOnly)
	float ascensionSpeed = 2.5f;
	
	UPROPERTY(EditDefaultsOnly)
	float placeRange = 180;

	UPROPERTY(BlueprintReadOnly)
	ACubeCore* objCore;

	const FAttachmentTransformRules attachRules {EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, true};

	UPROPERTY(BlueprintReadOnly)
	FName attachedSocket;
	
	bool isAttached;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
	/////////////////// FUNCTIONS ///////////////////
	
	virtual void Placement();
	virtual void Ability() {}

	virtual void AddAttachment(APickupableMaster* attachment, const FName& socket);
	virtual void RemoveAttachment(const FName& socket) { attachedSocket = "None"; }

	// Used when attaching to sockets of the cube... Rounds the given rotation to right angles (90 degrees)
	static FRotator RoundRotation(const FRotator& rotation)
	{
		// Quantize each component of the Rotator using Frac and Floor
		FRotator rounded;

		// Using -90 since otherwise the outputted rotation would face the opposite direction when attaching)
		rounded.Pitch = FMath::FloorToFloat(rotation.Pitch / -90) * -90;
		rounded.Yaw = FMath::FloorToFloat(rotation.Yaw / -90) * -90;
		rounded.Roll = FMath::FloorToFloat(rotation.Roll / -90) * -90;

		return rounded;
	}

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
	void SnapRotateMesh(bool hori, FString keypress);

	UFUNCTION(BlueprintCallable, Category = "Movement", meta = (ToolTip = "Resets the relative rotation of the mesh and removes all velocity if set."))
	virtual void ResetRotation(bool resetVelocity = false);
	void RemoveVelocity() const;
	
	// Enable/Disable gravity when selected/deselected
	UFUNCTION(BlueprintCallable)
	void GravitySelection() const { objMesh->SetEnableGravity(!selected); }

	FName GetAttachedSocket() const { return attachedSocket; }
	virtual void Detach();
	
	UFUNCTION(BlueprintCallable, Category = "Getters")
	UStaticMeshComponent* GetMesh() const { return objMesh; }

	UFUNCTION(BlueprintCallable)
	virtual void SetSelected(const bool value);

	void SetCore(ACubeCore* _core) { objCore = _core; }
	void SetAttachedSocket(FName socket) { attachedSocket = socket; }

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
