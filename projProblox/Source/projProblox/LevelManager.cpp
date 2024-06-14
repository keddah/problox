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

	// Unload every level apart from the first.
	for(int i = 1; i < levels.Num(); i++) UnloadLevel(i);
}

void ALevelManager::InitLoadLevel(int lvlIndex)
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

	if(!wrld)
	{
		Print("World was invalid when trying to load a levels...", 8)
		return;
	}
	

	bLevelLoading = true;
	currentLevel = lvlIndex;
	
	FLatentActionInfo loadInfo;
	loadInfo.CallbackTarget = this;
	loadInfo.ExecutionFunction = FName("OnLevelLoaded");
	loadInfo.UUID = FMath::Rand();  // Ensure UUID is unique
	loadInfo.Linkage = 0;

	// Then load the new level
	UGameplayStatics::LoadStreamLevelBySoftObjectPtr(wrld, levels[currentLevel], true, false, loadInfo);
}

void ALevelManager::UnloadLevel(short lvlIndex)
{
	if(!wrld)
	{
		Print("World was invalid when trying to unload A levels...", 8)
		return;
	}

	if(!levels.IsValidIndex(lvlIndex))
	{
		Print("Level index is out of range....: Index = " + FString::FromInt(lvlIndex), 5)
		return;
	}

	FLatentActionInfo unloadInfo;
	unloadInfo.CallbackTarget = this;
	unloadInfo.ExecutionFunction = FName("OnLevelUnloaded");
	unloadInfo.UUID = FMath::Rand();  // Ensure UUID is unique
	unloadInfo.Linkage = 0;

	UGameplayStatics::UnloadStreamLevelBySoftObjectPtr(wrld, levels[lvlIndex], unloadInfo, false);
}

void ALevelManager::OnLevelLoaded()
{
	Print("Level loaded Successfully.", 5)
	
	bLevelLoading = false;
	
	// Unloads all apart from the current level
	UnloadAllLevels();
}


void ALevelManager::UnloadAllLevels()
{
	// Unload all levels
	for(int i = 0; i < levels.Num(); i++)
	{
		if(i == currentLevel) continue;
		UnloadLevel(i);
	}
}