// Created by Dean Atkinson-Walker 2024


#include "CuboidCore.h"

ACuboidCore::ACuboidCore()
{
	otherIndicator = CreateDefaultSubobject<UArrowComponent>("2nd Place Indicator");
	otherIndicator->SetupAttachment(mesh);
}

void ACuboidCore::ScaleIndicator()
{
	placeIndicator->ArrowColor.A = .5f;
	otherIndicator->ArrowColor.A = .5f;

	const float length = placeRange * 2;
	placeIndicator->ArrowLength = length;
	otherIndicator->ArrowLength = length;

	const FRotator rot = UKismetMathLibrary::MakeRotFromX({0,0,-1});
	placeIndicator->SetRelativeRotation(rot);
	otherIndicator->SetRelativeRotation(rot);

	placeIndicator->SetWorldLocation(mesh->GetSocketLocation("DOWN1"));
	otherIndicator->SetWorldLocation(mesh->GetSocketLocation("DOWN2"));

	SetHideIndicator(true);
}

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

	const FVector direction = mesh->GetComponentRotation().RotateVector(placeDir);

	for(int i = 0; i < 2; i++)
	{
		// If the first iteration use the first down slot...
		const FName socket = i == 0? "DOWN1" : "DOWN2";

		// Unhide both indicators...
		SetHideIndicator(false);
		if(ObjectInSocket(socket))
		{
			// Hide the correct indicator depending on the blocked socket.
			if(socket == "DOWN1") placeIndicator->SetHiddenInGame(true);
			else otherIndicator->SetHiddenInGame(true);
			continue;
		}
		
		const FVector start = mesh->GetSocketLocation(socket);
		DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, 5);	
		wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Visibility, collisionParams);

		AActor* hitActor = hit.GetActor();
		if(!hit.bBlockingHit)
		{
			hitObj = 0;
			ResetGhost();
			continue;
		}

		DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, 5);
	
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
		raySocket = socket;
		break;
	}
}