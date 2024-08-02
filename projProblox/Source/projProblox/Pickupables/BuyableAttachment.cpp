// Created by Dean Atkinson-Walker 2024


#include "BuyableAttachment.h"

// Sets default values
ABuyableAttachment::ABuyableAttachment()
{
	PrimaryActorTick.bCanEverTick = false;

	infoWidget = CreateDefaultSubobject<UWidgetComponent>("Display Widget");
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>("Mesh Component");
	mouseDetector = CreateDefaultSubobject<UBoxComponent>("Box Collision");

	meshComp->SetSimulatePhysics(false);
	meshComp->SetupAttachment(infoWidget);
	mouseDetector->SetupAttachment(meshComp);
}

// void ABuyableAttachment::UnlockAttachment()
// {
// 	if(unlocked)
// 	{
// 		return;
// 	}
// 	
// 	unlocked = true;
// 	SetHide(false);
// 	onBoughtAttachment.Broadcast();
// }

void ABuyableAttachment::UseInfoMesh()
{
	if(!info)
	{
		Print("Info was invalid... couldn't use its mesh/material", 6)
		return;
	}
	if(!IsValid(meshComp))
	{
		Print("Mesh component was invalid... couldn't set its mesh/material", 6)
		return;
	}

	const FBuyableInfoStruct buyInfo = info->GetInfo();
	meshComp->SetStaticMesh(buyInfo.attachmentMesh);
	
	if(!buyInfo.editScale) meshComp->SetRelativeScale3D(buyInfo.defaultScale);

	// Setting materials
	// if(unlocked) SetHide(false);
	SetHide(false);
	
	// If not unlocked...
	// else SetHide(true);
}

void ABuyableAttachment::SetHide(const bool hide) const
{
	if(!hide)
	{
		const FBuyableInfoStruct buyInfo = info->GetInfo();
		for(unsigned short i = 0; i < meshComp->GetNumMaterials(); i++) meshComp->SetMaterial(i, buyInfo.attachmentMesh->GetMaterial(i));
	}
	// if(lockedMaterial) for(int i = 0; i < meshComp->GetNumMaterials(); i++) meshComp->SetMaterial(i, lockedMaterial);
}

void ABuyableAttachment::SetSelected(const bool value)
{
	selected = value;
	if(selected) return;

	OnDeselected.Broadcast();
}
