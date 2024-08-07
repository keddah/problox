/**************************************************************************************************************
* Spawn Point - Header
* 
* The header file for the player and core spawn point. Also defines the levels enum.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#pragma once

#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
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
	
	uint8 levelIndex;
	bool unlocked;
	
public:	
	// Sets default values for this actor's properties
	ASpawnPoint();

	
protected:
	UPROPERTY(EditDefaultsOnly)
	USceneComponent* defaultScene;
	
	UPROPERTY(EditDefaultsOnly)
	UArrowComponent* direction;
	
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* unlockTrigger;
	
	UPROPERTY(EditAnywhere, meta = (ToolTip = "The level that the spawn point should be valid for."))
	ELevel level;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
public:
	UFUNCTION(BlueprintCallable)
	void UnlockPoint() { unlocked = true; onNewSpawn.Broadcast(); }
	void LockPoint() { unlocked = false; }
	bool IsUnlocked() const { return unlocked; }

	FRotator GetRot() const { return direction->GetComponentRotation(); }

	// Creates capture component and takes a screenshot then deletes the component and everything it needed to take a picture before
	// returning the texture of the screenshot.
	// UTexture* CaptureScreenshot();

	UFUNCTION(BlueprintCallable)
	int GetLevelIndex() const { return levelIndex; }
	void SetLevelIndex(const short index) { levelIndex = index; }

	ELevel GetLevelEnum() const { return level; }

	FOnNewSpawn onNewSpawn;
};
