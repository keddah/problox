// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeConnector.h"

ACubeConnector::ACubeConnector()
{
	defaultPlaceDir = placeDir;
	isCore = false;
}

void ACubeConnector::BeginPlay()
{
	placeRange = 100;
	Super::BeginPlay();
}

void ACubeConnector::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ACubeConnector::Placement()
{
	GravitySelection();
	
	if(!selected) return;

	const UWorld* wrld = GetWorld();
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	collisionParams.bDebugQuery = true;

	// Change the direction to each face of the cube
	for(int i = 0; i < 6; i++)
	{
		switch (i)
		{
			//backwards
			case 0:
				placeDir = {-1, 0, 0};
				break;

			//forwards
			case 1:
				placeDir = {1, 0, 0};
				break;

			//left
			case 2:
				placeDir = {0, -1, 0};
				break;

			//right
			case 3:
				placeDir = {0, 1, 0};
				break;

			//down
			case 4:
				placeDir = {0, 0, -1};
				break;

			//up
			case 5:
				placeDir = {0, 0, 1};
				break;
		}

		FHitResult hit;
		const FVector direction = objMesh->GetComponentRotation().RotateVector(placeDir);
		const FVector start = pivot->GetComponentLocation();

		// Debug Draw
		DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, 5);	
		wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Visibility, collisionParams);

		// Go to the next ray if it didn't hit anything...
		if(!hit.bBlockingHit) continue;
		
		// Go to the next ray if it didn't hit an actor...
		AActor* hitActor = hit.GetActor();
		if(!hitActor) continue;

		float shortestDistance = 9999999;
		FName closestSocket = "None";

		hitObj = Cast<APickupableMaster>(hitActor);
		if(hitObj)
		{
			// Attempt to cast to the cubecore
			if(hitObj->IsA<ACubeCore>())
			{
				objCore = Cast<ACubeCore>(hitObj);
				const UStaticMeshComponent* coreMesh = objCore->GetMesh();
	
				for(const auto& socket: coreMesh->GetAllSocketNames())
				{
					// If the cube doesn't have an object in its socket...
					if(objCore->ObjectInSocket(socket)) continue;

					// Compare the distance between the current socket and this connector's mesh
					const float distance = FVector::Distance(coreMesh->GetSocketLocation(socket), hit.ImpactPoint);
					if(distance < shortestDistance)
					{
						shortestDistance = distance;
						closestSocket = socket;
					}
				}

				attachedSocket = closestSocket;
				hitObj = nullptr;
				break;
			}

			// Foreach of the connector's sockets
			for(const auto& socket: objMesh->GetAllSocketNames())
			{
				// If the socket is free...
				if(ObjectInSocket(socket)) continue;

				// Compare the distances between the current socket and the impact point
				const float distance = FVector::Distance(objMesh->GetSocketLocation(socket), hit.ImpactPoint);
				if(distance < shortestDistance)
				{
					shortestDistance = distance;
					closestSocket = socket;
				}
			}

			attachedSocket = closestSocket;
			objCore = nullptr;
			hitObj->SetCore(this);
			break;
		}

	}
}

void ACubeConnector::SetSelected(const bool value)
{
	selected = value;

	// Detach from its components if selected
	if(selected)
	{
		objMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		active = false;
		
		if(objCore) objCore->RemoveAttachment(attachedSocket);
		return;
	}

	// Rotate/Manipulate self when it hits the core
	if(!objCore) return;
	ResetRotation();

	const UStaticMeshComponent* coreMesh = objCore->GetMesh();
	
	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(coreMesh->GetSocketRotation(attachedSocket));
	const FRotator rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);
	
	// Rotate to match the socket rotation
	objMesh->SetWorldRotation(rot);


	// Attach self to the core
	const FAttachmentTransformRules rules {EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, true};
	objMesh->AttachToComponent(objCore->GetMesh(), rules, attachedSocket);

	objCore->AddAttachment(this, attachedSocket);
}
