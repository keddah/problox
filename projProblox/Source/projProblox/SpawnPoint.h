// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "SpawnPoint.generated.h"

UENUM(BlueprintType)
enum class ELevel : uint8
{
	BuildArea,
	Bedroom,
	Kitchen
};

UCLASS()
class PROJPROBLOX_API ASpawnPoint : public AActor
{
	GENERATED_BODY()
	
	bool unlocked;
	short levelIndex;
	
	UTextureRenderTarget2D* renderTarget;
	UMaterialInstanceDynamic* dynamicMat;
	void LoadMaterial();

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

	UPROPERTY(EditAnywhere, meta = (ToolTip = "The level that the spawn point should be valid for."))
	ELevel level;

public:	
	void UnlockPoint() { unlocked = true; }
	bool IsUnlocked() const { return unlocked; }

	void SetLevelIndex(const short index) { levelIndex = index; }

	UFUNCTION(BlueprintCallable)
	UTextureRenderTarget2D* GetRenderTarget() const { return renderTarget; }
	
	UFUNCTION(BlueprintCallable)
	int GetLevelIndex() const { return levelIndex; }

	ELevel GetLevelEnum() const { return level; }

	UFUNCTION(BlueprintCallable)
	UTexture2D* ConvertRenderTargetToTexture() const;

	UFUNCTION(BlueprintCallable)
	UMaterialInstanceDynamic* GetDisplayMaterial() const { return dynamicMat; };
};
