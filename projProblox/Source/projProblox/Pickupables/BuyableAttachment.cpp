// Created by Dean Atkinson-Walker 2024


#include "BuyableAttachment.h"

// Sets default values
ABuyableAttachment::ABuyableAttachment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>("Mesh Component");
	meshComp->SetSimulatePhysics(false);
	
	mouseDetector = CreateDefaultSubobject<UBoxComponent>("Box Collision");
	mouseDetector->SetupAttachment(meshComp);
}



// Called when the game starts or when spawned
void ABuyableAttachment::BeginPlay()
{
	Super::BeginPlay();
}

void ABuyableAttachment::UnlockAttachment()
{
	unlocked = true;
	onBoughtAttachment.Broadcast();
}

void ABuyableAttachment::UseInfoMesh()
{
	if(!info)
	{
		Print("Info was invalid... couldn't use its mesh/material", 6)
		return;
	}

	const FBuyableInfoStruct buyInfo = info->GetInfo();
	meshComp->SetStaticMesh(buyInfo.attachmentMesh);
	meshComp->SetRelativeScale3D(buyInfo.defaultScale);

	// Setting materials
	if(unlocked)
	{
		if(buyInfo.attachmentMats.IsEmpty())
		{
			meshComp->SetMaterial(0, buyInfo.attachmentMesh->GetMaterial(0));
			return;
		}
		
		for (int i = 0; i < buyInfo.attachmentMats.Num(); i++)
		{
			meshComp->SetMaterial(i, buyInfo.attachmentMats[i]);
		}
		return;
	}

	// If not unlocked...
	if(lockedMaterial) meshComp->SetMaterial(0, lockedMaterial);

	unlocked = true;
}
