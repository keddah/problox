/**************************************************************************************************************
* Buyable Attachment - Code
* 
* The code file for the buyable attachment. Gives functionality to allow the buyable to interact whenever it's bought.
* 
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


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

void ABuyableAttachment::UnlockAttachment()
{
	if(unlocked) return;
	
	unlocked = true;
	SetHide(false);
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
}

void ABuyableAttachment::SetHide(const bool hide) const
{
	if(!hide)
	{
		const FBuyableInfoStruct buyInfo = info->GetInfo();
		if(buyInfo.attachmentMats.IsEmpty())
		{
			for(int i = 0; i < meshComp->GetNumMaterials(); i++) meshComp->SetMaterial(i, buyInfo.attachmentMesh->GetMaterial(0));
			return;
		}
			
		for (int i = 0; i < buyInfo.attachmentMats.Num(); i++)
		{
			if(meshComp->GetMaterials().IsValidIndex(i)) meshComp->SetMaterial(i, buyInfo.attachmentMats[i]);
		}
		return;
	}
	if(lockedMaterial) for(int i = 0; i < meshComp->GetNumMaterials(); i++) meshComp->SetMaterial(i, lockedMaterial);
}
