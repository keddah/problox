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
		if(!selectedObj) return;

		selectedObj->SetSelected(false);
		selectedObj = nullptr;
		return;
	}

	if(selectedObj) return;

	if(!hit.bBlockingHit) return;
	
	selectedObj = Cast<APickupableMaster>(hit.GetActor());
	if(selectedObj) selectedObj->SetSelected(true);
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

// FHitResult APlayerCharacter::GetCursorLocation(FVector& rLocation, FVector& rDirection) const
// {
// 	FHitResult hit;
//
// 	const UWorld* wrld = GetWorld();
// 	const FVector start = GetActorLocation();
//
// 	FCollisionQueryParams traceParams;
// 	traceParams.AddIgnoredActors(exclusions);
// 	traceParams.AddIgnoredActor(this);
// 	traceParams.MobilityType = EQueryMobilityType::Any;
//
// 	APlayerController* controller = Cast<APlayerController>(GetController());
// 	if(!controller->DeprojectMousePositionToWorld(rLocation, rDirection)) return hit;
// 	
// 	wrld->LineTraceSingleByChannel(hit, start, start + rDirection * mouseDistance,ECC_Camera, traceParams);
// 	
// 	if(hit.bBlockingHit) rLocation = hit.ImpactPoint;
// 	else rLocation = hit.TraceEnd;
// 	return hit;
// }

