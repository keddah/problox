// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneCaptureComponent2D.h"
#include "SpawnPoint.generated.h"

UCLASS()
class PROJPROBLOX_API ASpawnPoint : public AActor
{
	GENERATED_BODY()
	
	bool unlocked;
	
public:	
	// Sets default values for this actor's properties
	ASpawnPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	USceneCaptureComponent2D* previewer;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* defaultScene;

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void UnlockPoint() { unlocked = true; }
	bool IsUnlocked() const { return unlocked; }
};
