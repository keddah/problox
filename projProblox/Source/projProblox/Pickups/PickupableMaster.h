// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "PickupableMaster.generated.h"

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


	/////////////////// PROPERTIES ///////////////////

	// Blueprint visible components..
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* scene;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* objMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UBoxComponent* collider;

	UPROPERTY(BlueprintReadOnly)
	bool active;

	UPROPERTY(BlueprintReadOnly)
	bool selected;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The direction to place the object from the relative rotation of the 'objMesh'."))
	FVector placeDir {0, 0,-1};

	UPROPERTY(BlueprintReadWrite)
	float placeRange = 180;

	UPROPERTY(BlueprintReadOnly)
	ACubeCore* objCore;

	const FAttachmentTransformRules attachRules {EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, true};

	UPROPERTY(BlueprintReadOnly)
	FName attachedSocket;
	
	/////////////////// FUNCTIONS ///////////////////
	
	virtual void Placement();
	
	virtual void Ability();

	UFUNCTION(BlueprintCallable)
	virtual void AddAttachment(APickupableMaster* attachment, const FName& socket);

	UFUNCTION(BlueprintCallable)
	virtual void RemoveAttachment(const FName& socket) { attachedSocket = "None"; }
	

	static FRotator RoundRotation(const FRotator& rotation, float roundTo)
	{
		// Quantize each component of the Rotator using Frac and Floor
		FRotator rounded;
		rounded.Pitch = FMath::FloorToFloat(rotation.Pitch / roundTo) * roundTo;
		rounded.Yaw = FMath::FloorToFloat(rotation.Yaw / roundTo) * roundTo;
		rounded.Roll = FMath::FloorToFloat(rotation.Roll / roundTo) * roundTo;

		return rounded;
	}

private:
	FRotator defaultRot{};
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	virtual void SetAbilityActive(const bool value) { active = value; }
	
	UFUNCTION(BlueprintCallable)
	void RotateMesh(const FRotator& rotation);

	UFUNCTION(BlueprintCallable)
	void SnapRotateMesh(const bool hori) { RotateMesh(hori? FRotator{0,90,00} : FRotator{90,0,0}); }

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Resets the relative rotation of the mesh and removes all velocity if set."))
	void ResetRotation(bool resetVelocity = false);
	
	// Enable/Disable gravity when selected/deselected
	UFUNCTION(BlueprintCallable)
	void GravitySelection() const { objMesh->SetEnableGravity(!selected); }
	
	UFUNCTION(BlueprintCallable)
	UStaticMeshComponent* GetMesh() const { return objMesh; }

	UFUNCTION(BlueprintCallable)
	virtual void SetSelected(const bool value);

	void SetCore(ACubeCore* _core) { objCore = _core; }
	void SetAttachedSocket(FName socket) { attachedSocket = socket; }

	UFUNCTION(BlueprintCallable)
	void AscendDescend(const float inputValue) { objMesh->AddWorldOffset(FVector::UpVector * inputValue); }

	UFUNCTION(BlueprintPure)
	virtual float GetMass() const { return objMesh->GetMass(); }
};
