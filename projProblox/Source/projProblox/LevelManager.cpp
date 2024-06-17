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

	// Get the level instances that are a part of the main level
	for (ULevelStreaming* levelStream : wrld->GetStreamingLevels())
	{
		if (levelStream && levelStream->IsA<ULevelStreamingDynamic>())
		{
			if (ULevelStreamingDynamic* lvl = Cast<ULevelStreamingDynamic>(levelStream)) levels.Add(lvl);
		}
	}

	// Unload every level apart from the first.
	for(int i = 1; i < levels.Num(); i++) UnloadLevel(i);
}

void ALevelManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(levels.IsEmpty()) return;

	if(levels.IsValidIndex(currentLevel)) bLevelLoading = levels[currentLevel]->GetLevelStreamingState() == ELevelStreamingState::MakingVisible;
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

	TArray<AActor*> outActors;
	UGameplayStatics::GetAllActorsWithTag(levels[currentLevel],"Chaos", outActors);
	for (auto& actor : outActors)
	{
		if(UStaticMeshComponent* mesh = Cast<UStaticMeshComponent>(actor->FindComponentByClass(UStaticMeshComponent::StaticClass())))
		{
			mesh->SetSimulatePhysics(true);
		}
	}
	
	currentLevel = lvlIndex;
	levels[currentLevel]->SetShouldBeVisible(true);
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

	TArray<AActor*> outActors;
	UGameplayStatics::GetAllActorsWithTag(levels[currentLevel],"Chaos", outActors);
	for (auto& actor : outActors)
	{
		if(UStaticMeshComponent* mesh = Cast<UStaticMeshComponent>(actor->FindComponentByClass(UStaticMeshComponent::StaticClass())))
		{
			mesh->SetSimulatePhysics(false);
		}
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