/**************************************************************************************************************
* Player - Header
* 
* The header file for the player. Defines the gamemodes enum and the player class.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "CustomGameInstance.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Pickupables/BuyableAttachment.h"
#include "PlayerCharacter.generated.h"

UENUM(BlueprintType)
enum class EGameMode : uint8
{
	Story,
	Build
};

UCLASS()
class PROJPROBLOX_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

private:
	///////////////////////// Building /////////////////////////
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	USpringArmComponent* camBoom;

	// Orbit
	UFUNCTION(BlueprintCallable)
	void OrbitControls(float deltaTime);

	// Zooming
	UFUNCTION(BlueprintCallable)
	void Zoom();
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "The same build mode zoom except this uses the scroll wheel instead of the mouse-Y value."))
	void ScrollZoom(float input);

	// The buyable object that the player's mouse is currently hovering over
	ABuyableAttachment* hoveredBuyable;

	// The buyable object that is being placed on the cube core
	ABuyableAttachment* selectedBuyable;

	
	///////////////////////// Sockets /////////////////////////
	FName FindSuggestedSlot(APickupableMaster* obj) const;
	FName selectedSocket = "FRONT";
	short currentSocketIndex = 0;
	
	UFUNCTION(BlueprintCallable)
	void NextPreviousSlot(const bool next);
	
	UFUNCTION(BlueprintCallable, meta = (ToolTip = "The same as NextPreviousSlot() except it goes 2 spaces ahead instead of one."))
	void AboveBelowSlot(const bool above);

	void GoToSlot() const;


	///////////////////////// Turns /////////////////////////
	UFUNCTION(BlueprintCallable)
	void EndTurnEarly();
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
	/////////////// Selection / Placement ///////////////
	UPROPERTY(BlueprintReadOnly, Category = "Picking up")
	APickupableMaster* selectedObj;

	UPROPERTY(BlueprintReadWrite, Category = "Picking up")
	bool groupSelection = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controls")
	bool toggleSelection = false;

	UPROPERTY(EditDefaultsOnly, Category = "Controls",  BlueprintReadOnly, meta = (ToolTip = "The max speed the core is allowed to be going when trying to adjust the core's rotation.", Delta = 1))
	int adjustSpeedThreshold = 10;
	
	
	/////////////// Camera ///////////////
	UPROPERTY(EditDefaultsOnly, Category = "Camera", BlueprintReadOnly)
	FVector2f sensitivity {1.8f, 1.2f};

	UPROPERTY(EditDefaultsOnly, Category = "Orbit", BlueprintReadOnly, meta = (Delta = 1))
	int orbitSpeed = 100;

	UPROPERTY(EditDefaultsOnly, Category = "Orbit", BlueprintReadOnly, meta = (Delta = 1))
	int camZoomSpeed = orbitSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Orbit", BlueprintReadOnly, meta = (Delta = 1))
	int maxOrbitDistance = 2750;
	
	UPROPERTY(EditDefaultsOnly, Category = "Orbit",  BlueprintReadOnly, meta = (Delta = 1))
	int minOrbitDistance = 15;
	
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
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controls")
	int mouseDistance = 20000;


	/////////////// Game States ///////////////
	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "Whether or not the game is currently in the build phase (will be set to false once the game starts)."))
	bool adjustPhase;
	
	UPROPERTY(BlueprintReadOnly)
	EGameMode currentMode = EGameMode::Story;

	
public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override { Super::SetupPlayerInputComponent(PlayerInputComponent); }

	UFUNCTION(BlueprintCallable)
	void SetGameMode(EGameMode mode);

	UFUNCTION(BlueprintCallable)
	EGameMode GetGameMode() const { return currentMode; }
	
	// Used when teleporting to the build area... (resets the camera boom length)
	void EnterLevel(const bool canAdjust = true)
	{
		camBoom->TargetArmLength = 0;
		adjustPhase = canAdjust;
	}

	// Public so that the construction widget can eject too
	UFUNCTION(BlueprintCallable)
	bool EjectAll();

	
private:
	/////////////// Selection / Placement ///////////////
	void SelectObject(APickupableMaster* obj);

	UFUNCTION(BlueprintCallable)
	void Deselect();

	UFUNCTION(BlueprintCallable)
	void Confirm();

	void DetachAll(APickupableMaster* obj);
	
	UFUNCTION(BlueprintCallable)
	void BuildControls(const FHitResult& hit, const float deltaTime);

	UFUNCTION(BlueprintCallable)
	void SpawnFromBuyable(const FHitResult& hit);

	// MAKE AN EJECT ALL (WHEN MIDDLE MOUSE IS CLICKED)
	UFUNCTION(BlueprintCallable)
	void EjectObject(const FHitResult& hit);

	UFUNCTION(BlueprintCallable)
	void AdjustCore(const FVector& mousePos);
	
	UFUNCTION(BlueprintCallable)
	void MouseRotateCore(const FVector& mousePos);
	
	
	/////////////// Getters ///////////////
	UFUNCTION(BlueprintCallable)
	ACubeCore* GetCore() const { return core; }
};
