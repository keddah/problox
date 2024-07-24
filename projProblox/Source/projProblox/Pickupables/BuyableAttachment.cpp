// Created by Dean Atkinson-Walker 2024


#include "BuyableAttachment.h"

// Sets default values
ABuyableAttachment::ABuyableAttachment()
{
	PrimaryActorTick.bCanEverTick = false;

	infoWidget = CreateDefaultSubobject<UWidgetComponent>("Display Widget");
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>("Mesh Component");
	mouseDetector = CreateDefaultSubobject<UBoxComponent>("Box Collision");

	outlineMesh = CreateDefaultSubobject<UStaticMeshComponent>("Outline");
	outlineMesh->SetupAttachment(meshComp);
	outlineMesh->SetSimulatePhysics(false);
	outlineMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
	outlineMesh->SetHiddenInGame(true);
	
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

	const FBuyableInfoStruct buyInfo = info->GetInfo();
	meshComp->SetStaticMesh(buyInfo.attachmentMesh);
	outlineMesh->SetStaticMesh(buyInfo.attachmentMesh);
	
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
		for(int i = 0; i < meshComp->GetNumMaterials(); i++) meshComp->SetMaterial(i, buyInfo.attachmentMesh->GetMaterial(i));

		if(hoverMaterial)
		{
			for(int i = 0; i < outlineMesh->GetNumMaterials(); i++) outlineMesh->SetMaterial(i, hoverMaterial);
		}
		// return;
	}
	// if(lockedMaterial) for(int i = 0; i < meshComp->GetNumMaterials(); i++) meshComp->SetMaterial(i, lockedMaterial);
}

void ABuyableAttachment::SetSelected(const bool value)
{
	selected = value;

	if(value)
	{
		if(selectedMaterial)
		{
			for(int i = 0; i < outlineMesh->GetNumMaterials(); i++) outlineMesh->SetMaterial(i, selectedMaterial);
		}
	}

	else
	{
		outlineMesh->SetHiddenInGame(true);
		if(hoverMaterial)
		{
			for(int i = 0; i < outlineMesh->GetNumMaterials(); i++) outlineMesh->SetMaterial(i, hoverMaterial);
		}
	}
}
