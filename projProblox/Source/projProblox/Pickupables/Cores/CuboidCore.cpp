// Created by Dean Atkinson-Walker 2024


#include "CuboidCore.h"

void ACuboidCore::BeginPlay()
{
	Super::BeginPlay();

	socketInfo = NewObject<UCuboidSocketInfo>();
}

void ACuboidCore::Placement()
{
	if(!canPlace) return;
	if(!selected) return;
	if(ObjectInSocket("DOWN1") && ObjectInSocket("DOWN2")) return;

	RemoveVelocity();
	
	const UWorld* wrld = GetWorld();
	
	FHitResult hit;
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	collisionParams.bDebugQuery = true;

	const FVector direction = objMesh->GetComponentRotation().RotateVector(placeDir);

	for(int i = 0; i < 2; i++)
	{
		// If the first iteration use the first down slot...
		const FName socket = i == 0? "DOWN1" : "DOWN2";
		
		const FVector start = objMesh->GetSocketLocation(socket);
		// DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, 5);	
		wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Visibility, collisionParams);

		AActor* hitActor = hit.GetActor();
		if(!hit.bBlockingHit)
		{
			hitObj = 0;
			ResetGhost();
			continue;
		}

		// DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, 5);
	
		if(!hitActor)
		{
			hitObj = 0;
			ResetGhost();
			continue;
		}
	
		// If the cast was unsuccessful....
		if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor)) hitObj = obj;
		else hitObj = 0;
	
		if(!IsValid(hitObj)) continue;

		OtherGhostPlacement();
		attachedSocket = socket;
		break;
	}
}
