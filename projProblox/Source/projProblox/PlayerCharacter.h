// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PickupableMaster.h"
#include "GameFramework/PlayerController.h"
#include "PlayerCharacter.generated.h"


UCLASS()
class PROJPROBLOX_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, Category = "Picking up")
	APickupableMaster* selectedObj;
	
	UPROPERTY(BlueprintReadWrite, Category = "Picking up")
	bool holding;
	
	UPROPERTY(BlueprintReadWrite, Category = "Picking up")
	bool toggleSelection = true;

	UPROPERTY(BlueprintReadWrite, Category = "Picking up")
	bool groupSelection = false;

	UPROPERTY(BlueprintReadWrite, Category = "Picking up")
	TArray<AActor*> exclusions;
	
	UPROPERTY(BlueprintReadWrite)
	ACubeCore* core;
	
	UPROPERTY(BlueprintReadOnly)
	float mouseDistance = 20000;

	
	
public:	
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	ACubeCore* GetCore() const { return core; }
	
private:

	UFUNCTION(BlueprintCallable, Category = "Picking up")
	void SelectObject(const FHitResult& hit);
	
	UFUNCTION(BlueprintCallable, Category = "Picking up")
	void MoveSelection(const FVector& mousePos);

	UFUNCTION()
	void Deselect();
};
