// Created by Dean Atkinson-Walker 2024


#include "LevelManager.h"

#include "Engine/LevelStreamingDynamic.h"


// Sets default values
ALevelManager::ALevelManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALevelManager::BeginPlay()
{
	Super::BeginPlay();

	wrld = GetWorld();

	// Get the level instances that are a part of the main level
	for (ULevelStreaming* levelStream : wrld->GetStreamingLevels())
	{
		if (levelStream && levelStream->IsA<ULevelStreamingDynamic>())
		{
			if (ULevelStreamingDynamic* lvl = Cast<ULevelStreamingDynamic>(levelStream))
			{
				// Add the soft reference to the array
				TSoftObjectPtr<UWorld> LevelReference(lvl->GetWorldAsset());
				levels.Add(LevelReference);
			}
		}
	}
}

void ALevelManager::LoadLevel(int lvlIndex)
{
	if(!levels.IsValidIndex(lvlIndex))
	{
		Print("Level index is out of range....: Index = " + FString::FromInt(lvlIndex), 5)
		return;
	}

	if (bLevelLoading)
	{
		Print("Already loading a level...", 5);
		return;
	}
	
	if(lvlIndex == currentLevel)
	{
		Print("The level that's trying to be loaded is already loaded...: Index = " + FString::FromInt(lvlIndex), 5)
		return;
	}

	if (!GEngine || !GEngine->GameViewport)
	{
		Print("Invalid game viewport....", 5);
		return;
	}

	bLevelLoading = true;
	pendingLevel = lvlIndex;
	UnloadCurrentLevel();
}

void ALevelManager::UnloadCurrentLevel()
{
	if (currentLevel == -1)
	{
		Print("No level currently loaded...", 5)
		return; 
	}

	if(!wrld)
	{
		Print("World was invalid when trying to unload current levels...", 8)
		return;
	}
	
	FLatentActionInfo unloadInfo;
	unloadInfo.CallbackTarget = this;
	unloadInfo.ExecutionFunction = FName("OnLevelUnloaded");
	unloadInfo.UUID = FMath::Rand();  // Ensure UUID is unique
	unloadInfo.Linkage = 0;

	UGameplayStatics::UnloadStreamLevelBySoftObjectPtr(wrld, levels[currentLevel] , unloadInfo, false);
	currentLevel = -1; // Reset current level index
}

void ALevelManager::OnLevelUnloaded()
{
	// Print("Level unloaded Successfully.", 5)
	if(!wrld)
	{
		Print("World was invalid but the level was Successfully unloaded... (was trying to load the pending level)", 8)
		return;
	}

	// If there's a level waiting to be loaded... load it.
	if (pendingLevel != -1)
	{
		Print("Loading the pending level", 3)
		FLatentActionInfo loadInfo;
		loadInfo.CallbackTarget = this;
		loadInfo.ExecutionFunction = FName("OnLevelLoaded");
		loadInfo.UUID = FMath::Rand();  // Ensure UUID is unique
		loadInfo.Linkage = 0;

		UGameplayStatics::LoadStreamLevelBySoftObjectPtr(wrld, levels[pendingLevel], true, false, loadInfo);
	}
}

void ALevelManager::OnLevelLoaded()
{
	Print("Level loaded Successfully.", 5)
	
	bLevelLoading = false;
	currentLevel = pendingLevel;
	pendingLevel = -1;
}


void ALevelManager::UnloadAllLevels()
{
	if (!GEngine || !GEngine->GameViewport)
	{
		Print("Invalid game viewport....", 5);
		return;
	}

	if(!wrld)
	{
		Print("World was invalid when trying to unload all levels...", 8)
		return;
	}
	
	FLatentActionInfo unloadInfo;
	unloadInfo.CallbackTarget = this;
	unloadInfo.ExecutionFunction = FName("OnAllLevelsUnloaded");
	unloadInfo.UUID = FMath::Rand();  // Ensure UUID is unique
	unloadInfo.Linkage = 0;
	
	for(int i = 0; i < levels.Num(); i++)
	{
		UGameplayStatics::UnloadStreamLevelBySoftObjectPtr(wrld, levels[i] , unloadInfo, false);
	}
}