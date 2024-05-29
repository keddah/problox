// Created by Dean Atkinson-Walker 2024


#include "Collector.h"

#include "Cells/Cell.h"
#include "Cells/CellSpawner.h"
#include "Components/LightComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACollector::ACollector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
	ACubeCore* core = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(GetWorld(), ACubeCore::StaticClass()));

	if(!core) return;

	core->onStartGame.AddDynamic(this, &ACollector::CalculateCellCount);
}

void ACollector::ResetCells()
{
	TArray<AActor*> cellActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACell::StaticClass(), cellActors);

	// Destroy all the cells in the level
	for (const auto& cell : cellActors) cell->Destroy();

	// ... Then get all the spawners in the level to spawn the cells again.
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACellSpawner::StaticClass(), cellActors);
	for (auto& spawner : cellActors) Cast<ACellSpawner>(spawner)->BeginSpawn();

	Print("Resetting", 5);
}

// Called every frame
void ACollector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACollector::CalculateCellCount()
{
	if(player->GetGameMode() == EGameMode::Story) ResetCells();
	
	TArray<AActor*> countArr;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACell::StaticClass(), countArr);

	// Only count the cells that aren't captured
	cellsInLevel = 0;
	cellCount = 0;
	
	for (const auto& Acell: countArr)
	{
		if(ACell* cell = Cast<ACell>(Acell))
		{
			if(!cell->IsSafe()) cellsInLevel++;
		}
	}
	Print("Things in level: " + FString::FromInt(cellsInLevel), 40)
}