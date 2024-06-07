// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UndoRedo/ActionHistory.h"
#include "Pickupables/PickupableMaster.h"
#include "PlayerCharacter.generated.h"

UENUM(BlueprintType)
enum class EGameMode : uint8
{
	Story,
	Wave,
	Assault,
	Creative
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

	FTask lastUndo;
	FTask lastRedo;
	bool undid;
	bool redid;

	// The transform of the selected object (should be set when picking up an object)
	FTransform selectedTransform;

	UFUNCTION(BlueprintCallable)
	void Undo();
	UFUNCTION(BlueprintCallable)
	void Redo();

	void CreateTaskHistory(const FName& task, TArray<APickupableMaster*> objs, const FTransform& startTransform, const FTransform& endTransform);

	// Detaches everything from the inputted core or the pickupable's parent then creates task histories for each thing that was detached.  
	UFUNCTION(BlueprintCallable)
	void CreateDetachHistory(APickupableMaster* obj);
	
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

	
	/////////////// Other ///////////////
	UPROPERTY(BlueprintReadOnly)
	ACubeCore* core;

	UPROPERTY(BlueprintReadWrite, Category = "Controls")
	bool holding;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controls")
	float mouseDistance = 20000;

	
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
	void SetGameMode(EGameMode mode) { currentMode = mode; }

	UFUNCTION(BlueprintCallable)
	EGameMode GetGameMode() const { return currentMode; }
	
	UFUNCTION(BlueprintCallable)
	void ManualSelectObject(APickupableMaster* obj);

private:
	/////////////// Selection / Placement ///////////////
	UFUNCTION(BlueprintCallable, Category = "Picking up")
	void SelectObject(const FHitResult& hit);

	UFUNCTION(BlueprintCallable, Category = "Picking up")
	void GroupSelect(const FHitResult& hit);

	UFUNCTION(BlueprintCallable, Category = "Picking up")
	void MoveSelection(const FVector& mousePos);

	UFUNCTION()
	void Deselect();

	UFUNCTION(BlueprintCallable)
	void Detach(const FHitResult& hit);

	
	/////////////// Game States ///////////////
	UFUNCTION()
	void EndGame() { gameEnded = true; }

	UFUNCTION(BlueprintCallable)
	ACubeCore* GetCore() const { return core; }
};
