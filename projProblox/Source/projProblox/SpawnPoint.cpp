// Created by Dean Atkinson-Walker 2024


#include "SpawnPoint.h"

#include "Pickupables/Cores/Connectors/CubeConnector.h"

// Sets default values
ASpawnPoint::ASpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	defaultScene = CreateDefaultSubobject<USceneComponent>("Default Scene Root");
	unlockTrigger = CreateDefaultSubobject<UBoxComponent>("Unlock Trigger");
	unlockTrigger->SetupAttachment(defaultScene);
}


// Called when the game starts or when spawned
void ASpawnPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASpawnPoint::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	// Don't do anything if the point has already been unlocked
	if(unlocked) return;
	
	if(OtherActor->IsA<ACubeConnector>()) return;
	if(!Cast<ACubeCore>(OtherActor)) return;

	UnlockPoint();
}
