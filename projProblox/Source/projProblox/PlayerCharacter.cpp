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
	Print(IsValid(core)? "core is valid" : "core invalid")

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
	if(!hit.bBlockingHit) return;

	AActor* hitActor = hit.GetActor();
	
	if(!IsValid(hitActor)) return;

	// Cast to the selected object..
	if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor))
	{
		// If the player can't pick it up... return.
		if(!obj->GetCanPickup() && (obj->IsA<ACubeCore>() && !obj->IsA<ACubeConnector>()) ) return;
		
		selectedObj = obj;
		selectedObj->SetSelected(true);
		selectedObj->RemoveVelocity();
	}

	if(!IsValid(selectedObj)) return;
	
	// Includes if the selected object is the core
	exclusions.Add(selectedObj);
	if(!selectedObj->IsA<ACubeCore>()) return;

	// Add the things that are connected to the core/connector to the things to ignore
	if(ACubeCore* obj = Cast<ACubeCore>(selectedObj))
	{
		exclusions.Append(obj->GetAttachedObjActors(true));
		Print(FString::FromInt(exclusions.Num()))
	}
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
