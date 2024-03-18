// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "CubeCore.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayerCharacter::SelectObject(const FHitResult& hit)
{
	// When the hold button is let go
	if(!holding)
	{
		if(!IsValid(selectedObj)) return;

		selectedObj->SetSelected(false);
		selectedObj = nullptr;

		// Clear things to ignore once not selecting anything.
		exclusions.Empty();
		return;
	}

	// Don't do anything if the selected object is already valid
	if(IsValid(selectedObj)) return;
	if(!hit.bBlockingHit) return;

	AActor* hitActor = hit.GetActor();
	
	if(!IsValid(hitActor)) return;

	// Cast to the selected object..
	if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor))
	{
		selectedObj = obj;
		selectedObj->SetSelected(true);
	}

	// Includes if the selected object is the core
	exclusions.Add(selectedObj);
	if(!selectedObj->IsA<ACubeCore>()) return;

	// Add the things that are connected to the core/connector to the things to ignore
	if(ACubeCore* obj = Cast<ACubeCore>(selectedObj))
	{
		exclusions.Append(obj->GetAttachedObjects(true));
	}
}

void APlayerCharacter::MoveSelection(const FVector& mousePos)
{
	selectedObj->GravitySelection();

	if(selectedObj->IsA<ACubeCore>())
	{
		// exclusions.Append(core->GetAttachedObjects(true));
		exclusions.AddUnique(selectedObj);
	}
	else
	{
		// exclusions.Remove(core);
		exclusions.AddUnique(selectedObj);
	}

	selectedObj->GetMesh()->SetWorldLocation({mousePos.X, mousePos.Y, selectedObj->GetMesh()->GetComponentLocation().Z});
}
