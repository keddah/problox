// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ActionHistory.h"
#include "PickupableMaster.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class PROJPROBLOX_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

private:
	/////////////// Selection / Placement ///////////////
	UPROPERTY(BlueprintReadOnly, Category = "Picking up", meta = (AllowPrivateAccess = true))
	APickupableMaster* selectedObj;

	UPROPERTY(BlueprintReadWrite, Category = "Picking up", meta = (AllowPrivateAccess = true))
	bool groupSelection = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controls", meta = (AllowPrivateAccess = true))
	bool toggleSelection = false;

	UPROPERTY(BlueprintReadWrite, Category = "Picking up", meta = (AllowPrivateAccess = true))
	TArray<AActor*> exclusions;

	
	/////////////// Other ///////////////
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	ACubeCore* core;

	UPROPERTY(BlueprintReadWrite, Category = "Controls", meta = (AllowPrivateAccess = true))
	bool holding;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Controls", meta = (AllowPrivateAccess = true))
	float mouseDistance = 20000;

	
	/////////////// Game States ///////////////
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true))
	bool gameEnded = false;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = true, ToolTip = "Whether or not the game is currently in the build phase (will be set to false once the game starts)."))
	bool buildPhase = true;

	
	/////////////// Undo/Redo ///////////////
	UPROPERTY(VisibleAnywhere)
	UActionHistory* history;

	// The transform of the selected object (should be set when picking up/dropping an object)
	FTransform selectedTransform;

	UFUNCTION(BlueprintCallable)
	void Undo() const;
	UFUNCTION(BlueprintCallable)
	void Redo();
	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	
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
	void EndGame();
};
