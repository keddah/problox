// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

#include "GameFramework/GameSession.h"
#include "Pickups/CubeCore.h"

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

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// if(selectedObj) MoveSelection();
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
		return;
	}

	if(IsValid(selectedObj)) return;
	if(!hit.bBlockingHit) return;

	AActor* hitActor = hit.GetActor();
	
	if(!IsValid(hitActor)) return;

	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, "hit thing " + hitActor->GetName());
	
	if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor))
	{
		selectedObj = obj;
		selectedObj->SetSelected(true);
		GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, "casted to " + selectedObj->GetName());
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
