// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "SpawnPoint.generated.h"

#define Print(x, duration) { GEngine->AddOnScreenDebugMessage(-1, duration, FColor::Cyan, x); }
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewSpawn);

UENUM(BlueprintType)
enum class ELevel : uint8
{
	BuildArea,
	Bedroom,
	Kitchen,
	Bathroom
};

UCLASS()
class PROJPROBLOX_API ASpawnPoint : public AActor
{
	GENERATED_BODY()
	
	short levelIndex;


	
public:	
	// Sets default values for this actor's properties
	ASpawnPoint();

	UPROPERTY(EditAnywhere)
	bool unlocked;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	USceneComponent* defaultScene;
	
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* unlockTrigger;
	
	UPROPERTY(EditAnywhere, meta = (ToolTip = "The level that the spawn point should be valid for."))
	ELevel level;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
public:	
	void UnlockPoint() { unlocked = true; }
	void LockPoint() { unlocked = false; }
	bool IsUnlocked() const { return unlocked; }

	UFUNCTION(BlueprintCallable)
	int GetLevelIndex() const { return levelIndex; }
	void SetLevelIndex(const short index) { levelIndex = index; }

	ELevel GetLevelEnum() const { return level; }

	FOnNewSpawn onNewSpawn;
};
