// Created by Dean Atkinson-Walker 2024


#include "BuyableAttachment.h"

// Sets default values
ABuyableAttachment::ABuyableAttachment()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	infoWidget = CreateDefaultSubobject<UWidgetComponent>("Display Widget");
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>("Mesh Component");
	mouseDetector = CreateDefaultSubobject<UBoxComponent>("Box Collision");
	
	meshComp->SetSimulatePhysics(false);
	meshComp->SetupAttachment(infoWidget);
	mouseDetector->SetupAttachment(meshComp);
}



// Called when the game starts or when spawned
void ABuyableAttachment::BeginPlay()
{
	Super::BeginPlay();
}

void ABuyableAttachment::UnlockAttachment()
{
	if(unlocked)
	{
		Print("Already unlocked...", 4)
		return;
	}
	
	unlocked = true;
	SetHide(false);
	Print("Unlocked", 5)
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
	if(!buyInfo.editScale) meshComp->SetRelativeScale3D(buyInfo.defaultScale);

	// Setting materials
	if(unlocked) SetHide(false);

	// If not unlocked...
	else SetHide(true);

	// unlocked = true;
}

void ABuyableAttachment::SetHide(const bool hide)
{
	if(!hide)
	{
		const FBuyableInfoStruct buyInfo = info->GetInfo();
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
	if(lockedMaterial) meshComp->SetMaterial(0, lockedMaterial);
}
