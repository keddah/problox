// Created by Dean Atkinson-Walker 2024


#include "BuyableAttachment.h"

// Sets default values
ABuyableAttachment::ABuyableAttachment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>("Mesh Component");

	mouseDetector = CreateDefaultSubobject<UBoxComponent>("Box Collision");
	mouseDetector->SetupAttachment(meshComp);

	UseInfoMesh();
}



// Called when the game starts or when spawned
void ABuyableAttachment::BeginPlay()
{
	Super::BeginPlay();

	UseInfoMesh();
}

void ABuyableAttachment::UseInfoMesh() const
{
	if(!info)
	{
		Print("Info was invalid... couldn't use its mesh/material", 6)
		return;
	}

	const FBuyableInfoStruct buyInfo = info->GetInfo();
	meshComp->SetStaticMesh(buyInfo.attachmentMesh);
	for (int i = 0; i < buyInfo.attachmentMats.Num(); i++)
	{
		meshComp->SetMaterial(i, buyInfo.attachmentMats[i]);
	}
}