// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "CubeConnector.h"
#include "Kismet/GameplayStatics.h"

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
	
	if(ACubeCore* cubeCore = Cast<ACubeCore>(UGameplayStatics::GetActorOfClass(GetWorld(), ACubeCore::StaticClass()))) core = cubeCore;
	Print(IsValid(core)? "core is valid" : "core invalid", 3)

	core->onRangeExeeded.AddDynamic(this, &APlayerCharacter::Deselect);
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
		Deselect();
		return;
	}

	// Don't do anything if the selected object is already valid
	if(IsValid(selectedObj)) return;
	
	if(!hit.bBlockingHit)
	{
		holding = false;
		return;
	}

	AActor* hitActor = hit.GetActor();
	
	if(!IsValid(hitActor))
	{
		holding = false;
		return;
	}

	// Cast to the selected object..
	if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor))
	{
		// If the player can't pick it up... return.
		if(!obj->GetCanPickup() && (obj->IsA<ACubeCore>() && !obj->IsA<ACubeConnector>()) ) return;
		
		selectedObj = obj;
		selectedObj->SetSelected(true);
		selectedObj->RemoveVelocity();
	}
	else holding = false;
	
	if(!IsValid(selectedObj))
	{
		holding = false;
		return;
	}
	
	// Includes if the selected object is the core
	exclusions.Add(selectedObj);
	if(!selectedObj->IsA<ACubeCore>()) return;

	// Add the things that are connected to the core/connector to the things to ignore
	if(ACubeCore* obj = Cast<ACubeCore>(selectedObj))
	{
		exclusions.Append(obj->GetAttachedObjActors(true));
		Print(FString::FromInt(exclusions.Num()), 3)
	}
}

void APlayerCharacter::GroupSelect(const FHitResult& hit)
{
	if(!holding)
	{
		Deselect();
		return;
	}

	// Don't do anything if there's already something selected.
	if(IsValid(selectedObj)) return;

	// If the trace didn't hit anything don't do anything...
	if(!hit.bBlockingHit)
	{
		holding = false;
		return;
	}

	AActor* hitActor = hit.GetActor();
	
	if(!IsValid(hitActor))
	{
		holding = false;
		return;
	}

	if(APickupableMaster* hitObj = Cast<APickupableMaster>(hitActor))
	{
		selectedObj = hitObj->GetParent();

		selectedObj->RemoveVelocity();
		selectedObj->SetGroupSelected(true);
	}
	else holding = false;

	if(!IsValid(selectedObj)) return;
	
	// Setup mouse hit exclusions
	exclusions.Add(selectedObj);
	
	if(!selectedObj->IsA<ACubeCore>()) return;

	// Add the things that are connected to the core/connector to the things to ignore
	const ACubeCore* obj = Cast<ACubeCore>(selectedObj);

	exclusions.Append(obj->GetAttachedObjActors(true));
	Print(FString::FromInt(exclusions.Num()), 3)
}

void APlayerCharacter::MoveSelection(const FVector& mousePos)
{
	selectedObj->GravitySelection();

	if(selectedObj->IsA<ACubeCore>()) exclusions.AddUnique(selectedObj);
	else exclusions.AddUnique(selectedObj);

	selectedObj->GetMesh()->SetWorldLocation({mousePos.X, mousePos.Y, selectedObj->GetMesh()->GetComponentLocation().Z});
}

void APlayerCharacter::Deselect()
{
	holding = false;
	
	if(!IsValid(selectedObj)) return;

	selectedObj->SetSelected(false);
	selectedObj = nullptr;

	// Clear things to ignore once not selecting anything.
	exclusions.Empty();
}
