// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CustomGameInstance.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Pickupables/BuyableAttachment.h"
#include "UndoRedo/ActionHistory.h"
#include "Pickupables/PickupableMaster.h"
#include "PlayerCharacter.generated.h"

UENUM(BlueprintType)
enum class EGameMode : uint8
{
	Story,
	Wave,
	Assault,
	Creative,
	Build
};

UCLASS()
class PROJPROBLOX_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

private:
	/////////////// Undo/Redo ///////////////
	UPROPERTY(VisibleAnywhere)
	UActionHistory* history;

	float undoRedoThreshold = 30;
	
	// The transform of the selected object (should be set when picking up an object)
	FTransform selectedTransform;

	UFUNCTION(BlueprintCallable)
	void Undo();
	UFUNCTION(BlueprintCallable)
	void Redo();

	void CreateTaskHistory(const FName& task, TArray<APickupableMaster*> objs, const FTransform& startTransform, const FTransform& endTransform) const;

	// Detaches everything from the inputted core or the pickupable's parent then creates task histories for each thing that was detached.  
	UFUNCTION(BlueprintCallable)
	void CreateDetachHistory(APickupableMaster* obj);

	
	/////////////// Building ///////////////
	UFUNCTION(BlueprintCallable)
	void OrbitControls(float deltaTime);
	
	UFUNCTION(BlueprintCallable)
	void Zoom();
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "The same build mode zoom except this uses the scroll wheel instead of the mouse-Y value."))
	void ScrollZoom(float input);
	
	FName FindSuggestedSlot(APickupableMaster* obj) const;
	FName selectedSocket = "FRONT";
	short currentSlot = 0;
	
	UFUNCTION(BlueprintCallable)
	void NextPreviousSlot(const bool next);
	
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "The same as NextPreviousSlot() except it goes 2 spaces ahead instead of one."))
	void AboveBelowSlot(const bool above);

	void GoToSlot() const;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	
	
	/////////////// Selection / Placement ///////////////
	UPROPERTY(BlueprintReadOnly, Category = "Picking up")
	APickupableMaster* selectedObj;

	UPROPERTY(BlueprintReadWrite, Category = "Picking up")
	bool groupSelection = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controls")
	bool toggleSelection = false;

	UPROPERTY(BlueprintReadWrite, Category = "Picking up")
	TArray<AActor*> exclusions;

	UPROPERTY(BlueprintReadWrite, Category = "Controls", meta = (ToolTip = "Whether to rotate on the horizontal or vertical axis"))
	bool rotateHori = true;
	
	
	/////////////// Camera ///////////////
	UPROPERTY(EditDefaultsOnly, Category = "Camera", BlueprintReadOnly)
	FVector2f sensitivity {1.8f, 1.2f};

	UPROPERTY(EditDefaultsOnly, Category = "Orbit", BlueprintReadOnly, meta = (Delta = .1f))
	float orbitSpeed = 100;

	UPROPERTY(EditDefaultsOnly, Category = "Orbit", BlueprintReadOnly, meta = (Delta = 1))
	float maxOrbitDistance = 2750;
	
	UPROPERTY(EditDefaultsOnly, Category = "Orbit",  BlueprintReadOnly, meta = (Delta = 1))
	float minOrbitDistance = 15;
	
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	USpringArmComponent* camBoom;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* playerCam;
	
	UPROPERTY(BlueprintReadWrite)
	FVector2f mouseValues;
	
	UPROPERTY(BlueprintReadWrite, Category = "Orbit")
	bool orbiting;

	UPROPERTY(BlueprintReadWrite, Category = "Orbit")
	bool zooming;
	
	
	/////////////// Other ///////////////
	UPROPERTY(BlueprintReadOnly)
	ACubeCore* core;

	UPROPERTY(BlueprintReadOnly)
	UCustomGameInstance* instance;
	
	UPROPERTY(BlueprintReadWrite, Category = "Controls")
	bool holding;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controls")
	float mouseDistance = 20000;

	UPROPERTY(BlueprintReadOnly)
	bool canMove = true;
	
	UPROPERTY(BlueprintReadOnly)
	ABuyableAttachment* hoveredBuyable;

	
	/////////////// Game States ///////////////
	UPROPERTY(BlueprintReadOnly)
	bool gameEnded = false;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "Whether or not the game is currently in the build phase (will be set to false once the game starts)."))
	bool buildPhase;
	
	UPROPERTY(BlueprintReadOnly)
	EGameMode currentMode = EGameMode::Story;
	
public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void SetGameMode(EGameMode mode)
	{
		currentMode = mode;
		canMove = currentMode != EGameMode::Build;
	}

	UFUNCTION(BlueprintCallable)
	EGameMode GetGameMode() const { return currentMode; }
	
	UFUNCTION(BlueprintCallable)
	void ManualSelectObject(APickupableMaster* obj);

	void Respawn(const FVector& pos, const FRotator& rot);

	UFUNCTION(BlueprintCallable)
	void EjectAll();
	
	
private:
	/////////////// Selection / Placement ///////////////
	UFUNCTION(BlueprintCallable, Category = "Picking up")
	void SelectObject(const FHitResult& hit);

	void OtherSelectObject(APickupableMaster* obj);

	UFUNCTION(BlueprintCallable, Category = "Picking up")
	void GroupSelect(const FHitResult& hit);

	UFUNCTION(BlueprintCallable, Category = "Picking up")
	void MoveSelection(const FVector& mousePos);

	UFUNCTION(BlueprintCallable)
	void Deselect();

	UFUNCTION(BlueprintCallable)
	void Confirm();

	UFUNCTION(BlueprintCallable)
	void Detach(const FHitResult& hit);

	UFUNCTION(BlueprintCallable)
	void BuildControls(const FHitResult& hit, const float deltaTime);

	UFUNCTION(BlueprintCallable)
	void SpawnFromBuyable(const FHitResult& hit);

	UFUNCTION(BlueprintCallable)
	void EjectObject(const FHitResult& hit);
	
	UFUNCTION(BlueprintCallable)
	void ChangeCore(float value);

	
	/////////////// Game States ///////////////
	UFUNCTION()
	void EndGame() { gameEnded = true; }

	UFUNCTION(BlueprintCallable)
	ACubeCore* GetCore() const { return core; }
};
