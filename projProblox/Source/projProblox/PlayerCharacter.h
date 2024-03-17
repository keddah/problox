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

	UPROPERTY(BlueprintReadOnly)
	APickupableMaster* selectedObj;
	
	UPROPERTY(BlueprintReadWrite)
	bool holding;
	
	UPROPERTY(BlueprintReadWrite)
	bool toggleSelection = true;

	UPROPERTY(BlueprintReadWrite)
	bool groupSelection = false;

	UPROPERTY(BlueprintReadWrite)
	TArray<AActor*> exclusions;
	
	UPROPERTY(BlueprintReadWrite)
	ACubeCore* core;
	
	UPROPERTY(BlueprintReadOnly)
	float mouseDistance = 20000;

	
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	UFUNCTION(BlueprintCallable)
	void SelectObject(const FHitResult& hit);

	
	UFUNCTION(BlueprintCallable)
	void MoveSelection(const FVector& mousePos);
};
