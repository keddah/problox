// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeConnector.h"

ACubeConnector::ACubeConnector()
{
	defaultPlaceDir = placeDir;
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
	if(!selected) return;

	FRotator rot = objMesh->GetComponentRotation(); 
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::FromInt(rot.Roll) + ", " + FString::FromInt(rot.Pitch) + ", " + FString::FromInt(rot.Yaw));

	const UWorld* wrld = GetWorld();
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	collisionParams.bDebugQuery = true;

	// Change the direction to each face of the cube
	for(int i = 0; i < 6; i++)
	{
		// The indices have to match up with the socket names in the CubeSocketInfo dataAsset
		switch (i)
		{
			//front
			case 0:
				placeDir = {1, 0, 0};
				break;

			//back
			case 1:
				placeDir = {-1, 0, 0};
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

		// Don't do anything if there's already something in the current direction slot.
		if(socketInfo->ObjectInSocket(i)) continue;;
		
		FHitResult hit;
		const FVector direction = objMesh->GetComponentRotation().RotateVector(placeDir);
		const FVector start = pivot->GetComponentLocation();

		// Debug Draw
		// DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, 5);	
		wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Visibility, collisionParams);

		// Go to the next ray if it didn't hit anything...
		if(!hit.bBlockingHit)
		{
			hitObj = 0;
			objCore = 0;
			continue;
		}
		
		// Go to the next ray if it didn't hit an actor...
		AActor* hitActor = hit.GetActor();
		if(!hitActor) continue;

		FName closestSocket = "None";

		if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor)) hitObj = obj;
		else
		{
			objCore = 0;
			hitObj = 0;
		}
		if(!IsValid(hitObj)) continue;

		float shortestDistance = 9999999;
		
		// Attempt to cast to the cubecore
		if(hitObj->IsA<ACubeCore>())
		{
			// All the previous checks ensure that the cast is valid
			objCore = Cast<ACubeCore>(hitObj);
			const UStaticMeshComponent* coreMesh = objCore->GetMesh();

			for(const auto& socket: coreMesh->GetAllSocketNames())
			{
				// If the cube doesn't have an object in its socket...
				if(objCore->ObjectInSocket(socket)) continue;

				// Compare the distance between the current socket and this connector's mesh
				const float distance = FVector::Distance(coreMesh->GetSocketLocation(socket), hit.ImpactPoint);
				
				// Don't allow the attachment if the socket is out of range.
				if(distance > placeRange) continue;
				
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

		if(closestSocket != NAME_None) attachedSocket = closestSocket;
		objCore = nullptr;
		hitObj->SetCore(this);
		break;
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
		
		if(!IsValid(objCore)) return;

		objCore->RemoveAttachment(attachedSocket);
		GravitySelection();

		for(const auto& obj : socketInfo->GetAttachments())
		{
			if(!obj->IsA<AWheel>()) continue;

			Cast<AWheel>(obj)->SetParentDominates(true);
		}
		return;
	}
	GravitySelection();
	for(const auto& obj : socketInfo->GetAttachments())
	{
		if(!obj->IsA<AWheel>()) continue;

		Cast<AWheel>(obj)->SetParentDominates(false);
	}
	
	// Rotate/Manipulate self when it hits the core
	if(!IsValid(objCore)) return;
	if(attachedSocket == NAME_None) return;
	
	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(objCore->GetMesh()->GetSocketRotation(attachedSocket));
	const FRotator rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);
	
	// Rotate to match the socket rotation but incorporate the crot1urrent rotation
	// const FRotator currentRot = RoundRotation(objMesh->GetComponentRotation(), 90);
	// const FRotator newRot =  currentRot + (rot - FRotator(0, 0, currentRot.Roll));

	objMesh->SetWorldRotation(rot);
	
	// Attach self to the core
	AttachToActor(objCore, attachRules, attachedSocket);
	objCore->AddAttachment(this, attachedSocket);
}

void ACubeConnector::SetAbilityActive(bool value)
{
	if(!IsValid(objCore)) return;

	Super::SetAbilityActive(value);
}
