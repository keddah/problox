/**************************************************************************************************************
* Collector - Code
* 
* The code file for the cell collector. Creates the defined components and finds the player so that it can be used in blueprint.
* This class is responsible for managing the counts of the cells - the collected ones and all the ones in the level. Needed to calculate the percentages
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "Collector.h"

#include "Cells/CellSpawner.h"
#include "Components/LightComponent.h"
#include "Kismet/GameplayStatics.h"

ACollector::ACollector()
{
	PrimaryActorTick.bCanEverTick = false;

	// Create its components and set some of their values
	scene = CreateDefaultSubobject<USceneComponent>("Default Scene");

	tube = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	tube->SetupAttachment(scene);
	tube->SetRelativeScale3D({6,6,6});
	
	lid = CreateDefaultSubobject<UStaticMeshComponent>("Top");
	lid->SetupAttachment(tube);
	lid->SetRelativeLocation({0,0,190});
	lid->SetRelativeScale3D({1.166f,1.166f,.025f});
	
	depoPoint = CreateDefaultSubobject<USceneComponent>("Teleport Position");
	depoPoint->SetupAttachment(tube);
	depoPoint->SetRelativeLocation({0,0,160});
	
	light = CreateDefaultSubobject<UPointLightComponent>("Light");
	light->SetupAttachment(tube);
	light->Intensity = 15000;
	light->AttenuationRadius = 1100;

	light->SourceLength = 912;
	light->SourceRadius = 20;
}

// Called when the game starts or when spawned
void ACollector::BeginPlay()
{
	Super::BeginPlay();

	if(APlayerCharacter* rPlayer = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()))) player = rPlayer;
}


// Gets the number of all the potential cells. Since some spawners are triggered and not activated at the start of the game,
// The spawners are used to calculate all the cells in the levels.
void ACollector::CalculateCellCount()
{
	const UWorld* wrld = GetWorld();
	if(!wrld) return;
	
	TArray<AActor*> countArr;

	// Only count the cells that aren't captured
	cellsInLevel = 0;
	
	UGameplayStatics::GetAllActorsOfClass(wrld, ACellSpawner::StaticClass(), countArr);
	for (const auto& spawnActor: countArr)
	{
		if(ACellSpawner* spawner = Cast<ACellSpawner>(spawnActor))
		{
			// Adds the spawn amounts for every spawner in the level to get the maximum amount of cells that can be in this level
			cellsInLevel += spawner->GetSpawnAmount();
		}
	}
}

int ACollector::GetLvlCellCount(const ELevel& lvl) const
{
	const UWorld* wrld = GetWorld();
	TArray<AActor*> countArr;

	int count = 0;
	
	UGameplayStatics::GetAllActorsOfClass(wrld, ACellSpawner::StaticClass(), countArr);
	for (const auto& spawnActor: countArr)
	{
		// Cast to the every cell spawner
		if(const ACellSpawner* spawner = Cast<ACellSpawner>(spawnActor))
		{
			// If the spawner's level matches with the parameter...
			if(lvl == spawner->GetLevelEnum())
			{
				count += spawner->GetSpawnAmount();
			}
		}
	}

	return count;
}

int ACollector::GetCollectedCountFromLvl(const ELevel& lvl) const
{
	const UWorld* wrld = GetWorld();
	TArray<AActor*> countArr;

	int count = 0;

	UGameplayStatics::GetAllActorsOfClass(wrld, ACellSpawner::StaticClass(), countArr);
	for (const auto& spawnActor: countArr)
	{
		// Cast to the every cell spawner
		if(ACellSpawner* spawner = Cast<ACellSpawner>(spawnActor))
		{
			// If the spawner's level matches with the parameter...
			if(lvl == spawner->GetLevelEnum()) count += spawner->GetCollectedAmount();
		}
	}
	
	return count;
}
