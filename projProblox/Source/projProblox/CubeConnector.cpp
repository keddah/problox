// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeConnector.h"
#include "Wheel.h"
#include "Engine/StaticMeshSocket.h"


ACubeConnector::ACubeConnector()
{
	thingCollector->SetGenerateOverlapEvents(false);
	thingCollector->SetBoxExtent({});
	thingCollector->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	thingHomer->SetGenerateOverlapEvents(false);
	thingHomer->SetBoxExtent({});
	thingHomer->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ACubeConnector::BeginPlay()
{
	placeRange = 100;
	attachOffset = 50;
	
	Super::BeginPlay();
}

void ACubeConnector::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ACubeConnector::SetAttachedSocket(FName socket, const bool useDirection)
{
	attachedSocket = socket;

	if(!useDirection) return;

	RearrangeSockets();
	AlignSocketRot();
}

void ACubeConnector::Placement()
{
	if(!canPlace) return;
	if(!selected) return;

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

			//right
			case 2:
				placeDir = {0, 1, 0};
				break;

			//left
			case 3:
				placeDir = {0, -1, 0};
				break;

			//up
			case 4:
				placeDir = {0, 0, 1};
				break;

			//down
			case 5:
				placeDir = {0, 0, -1};
				break;
		}

		// Don't do anything if there's already something in the current direction slot.
		if(socketInfo->ObjectInSocket(i)) continue;

		FHitResult hit;
		const FVector direction = objMesh->GetComponentRotation().RotateVector(placeDir);
		const FVector start = GetActorLocation();

		// Debug Draw
		DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, .5f);	
		wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Visibility, collisionParams);

		// Go to the next ray if it didn't hit anything...
		if(!hit.bBlockingHit)
		{
			hitObj = 0;
			parentCore = 0;
			continue;;
		}

		DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, .5f);

		// Go to the next ray if it didn't hit an actor...
		AActor* hitActor = hit.GetActor();
		if(!hitActor) continue;

		FName closestSocket = NAME_None;

		if(APickupableMaster* obj = Cast<APickupableMaster>(hitActor)) hitObj = obj;
		else
		{
			parentCore = 0;
			hitObj = 0;
		}
		if(!IsValid(hitObj)) continue;

		// Don't do anything if the hit object is anywhere in this actor's hierarchy
		if(hitObj->Children.Contains(this)) continue;
		if(hitObj->IsChildOf(this)) continue;
		
		float shortestDistance = 999999;
		
		// Attempt to cast to the cubecore
		if(hitObj->IsA<ACubeCore>())
		{
			// All the previous checks ensure that the cast is valid
			parentCore = Cast<ACubeCore>(hitObj);
			const UStaticMeshComponent* coreMesh = parentCore->GetMesh();

			for(const auto& socket: coreMesh->GetAllSocketNames())
			{
				// If the cube doesn't have an object in its socket...
				if(parentCore->ObjectInSocket(socket)) continue;

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

			raySocket = closestSocket;
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

		if(closestSocket != NAME_None) raySocket = closestSocket;
		parentCore = nullptr;
		hitObj->SetCore(this);
		break;
	}
}

void ACubeConnector::Detach()
{
	Super::Detach();
	if(!isAttached) DetachAll(false);
}

bool ACubeConnector::SetGroupSelected(const bool value)
{
	selected = value;
	canPlace = !selected;
	
	return true;
}

void ACubeConnector::SetSelected(const bool value)
{
	selected = value;

	// Detach from its components if selected
	if(selected)
	{
		canPlace = true;
		Detach();
		
		for(const auto& obj : socketInfo->GetAttachments())
		{
			if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(true);
		}
		return;
	}

	// When unselected....
	for(const auto& obj : socketInfo->GetAttachments())
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(false);
	}
	
	// Rotate/Manipulate self when it hits the core
	if(!IsValid(parentCore)) return;

	const FRotator actualRot = GetActorRotation();
	const FRotator socketRot = parentCore->GetMesh()->GetSocketRotation(raySocket);
	FRotator rot = RoundRotation(actualRot);

	SetActorRotation({0,0,0});
	
	// Attach self to the core
	attachedSocket = raySocket;
	AttachToActor(parentCore, attachRules, attachedSocket);

	// IF THE PITCH IS CHANGED IT MESSES UP
	const FVector upVec = UKismetMathLibrary::GetUpVector(socketRot);

	// Print(abs(upVec.Z) > .4f? "using Yaw" : "using Roll")
	Print("added rot: " + FString::SanitizeFloat(rot.Roll) + ", " + FString::SanitizeFloat(rot.Pitch) + ", " + FString::SanitizeFloat(rot.Yaw), 3)

	
	// = On the sides of the cube (not above/below)
	if(abs(upVec.Z) > .8f)
	{
		SetActorRelativeRotation({0, rot.Yaw, 0});
		Print("rotated yaw", 3)
	}
	else
	{
		SetActorRelativeRotation({0,0,0});

		const FRotator worldRot = GetActorRotation();
		SetActorRelativeRotation(RoundRotation(FRotator(actualRot - worldRot)));
		
		Print("rotated roll", 3)
	}

	rot = GetActorRotation();
	Print("final Rot: " + FString::SanitizeFloat(rot.Roll) + ", " + FString::SanitizeFloat(rot.Pitch) + ", " + FString::SanitizeFloat(rot.Yaw), 10)

	// If it's the actual core use a smaller offset
	attachOffset = !parentCore->IsA<ACubeConnector>()? 35 : 50; 
	ApplyOffset();
	
	parentCore->AddAttachment(this, attachedSocket);
}

void ACubeConnector::SetAbilityActive(bool value)
{
	// if(!IsValid(parentCore)) return;

	Super::SetAbilityActive(value);
}
