// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeConnector.h"
#include "Wheel.h"


ACubeConnector::ACubeConnector()
{
	// Disable anything to do with Thing collection
	thingCollector->SetGenerateOverlapEvents(false);
	thingCollector->SetBoxExtent({});
	thingCollector->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	thingHomer->SetGenerateOverlapEvents(false);
	thingHomer->SetBoxExtent({});
	thingHomer->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ACubeConnector::ApplyOffset(ACubeCore* core)
{
	// If it's the actual core use a smaller offset
	if(core) attachOffset = !core->IsA<ACubeConnector>()? 35 : 50;
	
	Super::ApplyOffset(core);
}

void ACubeConnector::BeginPlay()
{
	placeRange = 100;
	attachOffset = 5;
	
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
	for(int i = 0; i < socketInfo->GetSockets().Num(); i++)
	{
		// Don't do anything if there's already something in the current direction slot.
		if(socketInfo->ObjectInSocket(i)) continue;

		FHitResult hit;
		const FVector direction = UKismetMathLibrary::GetForwardVector(objMesh->GetSocketRotation(socketInfo->GetSockets()[i]));
		const FVector start = objMesh->GetSocketLocation(socketInfo->GetSockets()[i]);

		// Debug Draw
		DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, .5f);	
		wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Visibility, collisionParams);

		// Go to the next ray if it didn't hit anything...
		if(!hit.bBlockingHit)
		{
			hitObj = 0;
			parentCore = 0;
			continue;
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
			raySocket = socketInfo->GetSockets()[i];

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

			tempSocket = closestSocket;
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

		if(closestSocket != NAME_None) tempSocket = closestSocket;
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

	const AActor* self = this;
	TArray<APickupableMaster*> children;
	GetDescendents(self, children);
	
	// Detach from its components if selected
	if(selected)
	{
		canPlace = true;
		Detach();

		
		for(const auto& obj : children)
		{
			if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(true);
		}
		return;
	}

	// When unselected....
	
	for(const auto& obj : children)
	{
		if(obj->IsA<AWheel>()) Cast<AWheel>(obj)->SetParentDominates(false);
	}
	
	// Rotate/Manipulate self when it hits the core
	if(!IsValid(parentCore)) return;

	attachedSocket = tempSocket;
	//////// ROTATION stuff /////////
	
	FRotator alignedRotation = FRotator::ZeroRotator;

	if (raySocket == "FRONT" || raySocket == "BACK") alignedRotation = FRotator::ZeroRotator;
	else if (raySocket == "LEFT") alignedRotation = FRotator(0, -90, 0);
	else if (raySocket == "RIGHT") alignedRotation = FRotator(0, 90, 0);
	else if (raySocket == "UP") alignedRotation = FRotator(-90, 180, 0);
	else if (raySocket == "DOWN") alignedRotation = FRotator(90, 180, 0);

	// Fixes the rotation depending on the orientation of the cube
	if(abs(parentCore->GetActorUpVector().Z) < .5f)
	{
		if(attachedSocket == "FRONT" || attachedSocket == "BACK") alignedRotation += FRotator(0,0,180);
		else if (attachedSocket == "LEFT") alignedRotation += FRotator(-90,90,0);
		else if (attachedSocket == "RIGHT") alignedRotation += FRotator(90,90,0);
		else if (attachedSocket == "UP" || "DOWN") alignedRotation += FRotator::ZeroRotator;
	}
	
	// Get the current rotation of the actor and round it
	const FRotator currentRot = {0, appliedYaw, 0};
	const FRotator roundRot = RoundRotation(currentRot);
	
	// Attach the actor to the parent with the target socket
	AttachToActor(parentCore, attachRules, attachedSocket);

	// The rotation of the socket
	SetActorRelativeRotation(alignedRotation);
	
	// The rotation the cube had before attaching...
	AddActorWorldRotation({0, roundRot.Yaw + RoundRotation(GetActorRotation()).Yaw, 0});
	
	ApplyOffset(parentCore);
	
	parentCore->AddAttachment(this, attachedSocket);
}

void ACubeConnector::SetAbilityActive(bool value)
{
	// if(!IsValid(parentCore)) return;

	Super::SetAbilityActive(value);
}
