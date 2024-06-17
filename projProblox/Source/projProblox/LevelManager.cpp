// Created by Dean Atkinson-Walker 2024


#include "LevelManager.h"


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
	instance = Cast<UCustomGameInstance>(wrld->GetGameInstance());
	
	// Get the level instances that are a part of the main world
	for (int i = 0; i < wrld->GetStreamingLevels().Num(); i++)
	{
		ULevelStreaming* levelStream = wrld->GetStreamingLevels()[i];
		if (levelStream && levelStream->IsA<ULevelStreamingDynamic>())
		{
			ULevelStreamingDynamic* lvl = Cast<ULevelStreamingDynamic>(levelStream);
			if (!lvl) continue;

			// Add the level if it's valid.
			levels.AddUnique(lvl);

			// Get all the spawn points from that level
			TArray<AActor*> spawns;
			UGameplayStatics::GetAllActorsOfClass(lvl, ASpawnPoint::StaticClass(), spawns);

			for (int j = 0; j < spawns.Num(); j++)
			{
				ASpawnPoint* point = Cast<ASpawnPoint>(spawns[j]);
				if(!point) continue;

				// Unlock the first point of each level
				if(j == 0) point->UnlockPoint();

				// Add the points to their respective arrays
				// 0 == the build area
				if(i == 1) lvl1Spawns.Add(point);
				if(i == 2) lvl2Spawns.Add(point);
				if(i == 3) lvl3Spawns.Add(point);
			}
		}
	}

	// Unload every level apart from the first.
	for(int i = 1; i < levels.Num(); i++) UnloadLevel(i);
}

void ALevelManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(levels.IsEmpty()) return;

	if(levels.IsValidIndex(currentLevel))
	{
		bLevelLoading = levels[currentLevel]->GetLevelStreamingState() == ELevelStreamingState::MakingVisible;// || levels[currentLevel]->GetLevelStreamingState() == ELevelStreamingState::Loading;
	}
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
		Print("Level name = " + levels[currentLevel]->GetWorld()->GetName(), 5)
		return;
	}

	if(!wrld)
	{
		Print("World was invalid when trying to load a levels...", 8)
		return;
	}

	currentLevel = lvlIndex;
	if(!levels[currentLevel]->IsLevelLoaded()) levels[currentLevel]->SetShouldBeLoaded(true);
	levels[currentLevel]->SetShouldBeVisible(true);
	instance->SetCurrentLevel(currentLevel);
	UnloadAllLevels();
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

	levels[lvlIndex]->SetShouldBeVisible(false);
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