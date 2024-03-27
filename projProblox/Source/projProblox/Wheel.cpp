// Fill out your copyright notice in the Description page of Project Settings.


#include "Wheel.h"
#include "CubeCore.h"


AWheel::AWheel()
{
	pivot = CreateDefaultSubobject<USceneComponent>("Center");
	pivot->AttachToComponent(objMesh, FAttachmentTransformRules::KeepWorldTransform);
	pivot->AddRelativeLocation({0,0,50});
	
	wheelAxel = CreateDefaultSubobject<UPhysicsConstraintComponent>("Wheel Axel");
	wheelAxel->SetupAttachment(objMesh);
	wheelAxel->SetDisableCollision(true);
	
	wheelAxel->SetLinearXLimit(LCM_Locked, 0);
	wheelAxel->SetLinearYLimit(LCM_Locked, 0);
	wheelAxel->SetLinearZLimit(LCM_Locked, 0);
	
	wheelAxel->SetAngularSwing1Limit(ACM_Free, 45);
	wheelAxel->SetAngularSwing2Limit(ACM_Locked,45);
	wheelAxel->SetAngularTwistLimit(ACM_Locked,45);
	
	wheelAxel->SetAngularDriveMode(EAngularDriveMode::TwistAndSwing);
	wheelAxel->SetAngularVelocityDriveTwistAndSwing(false, true);

	
	placeRange = 300;
	SetParentDominates(false);
}

void AWheel::Ability()
{
	if(!IsValid(parentCore)) return;

	// const FVector coreVelocity = objCore->GetMesh()->GetPhysicsAngularVelocityInRadians();
	// wheelAxel->SetAngularVelocityTarget(-coreVelocity);
}


// Override is exactly the same as the original except changing where the line trace starts from...
void AWheel::Placement()
{
	if(!selected) return;

	const UWorld* wrld = GetWorld();
	
	FHitResult hit;
	const FVector direction = pivot->GetComponentRotation().RotateVector(placeDir);

	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.MobilityType = EQueryMobilityType::Any;
	
	// Debug Draw
	const FVector start = pivot->GetComponentLocation();
	DrawDebugLine(wrld, start, start + direction * placeRange, FColor::Red, false, 5);	
	wrld->LineTraceSingleByChannel(hit, start, start + direction * placeRange, ECC_Camera, collisionParams);

	if(!hit.bBlockingHit)
	{
		parentCore = 0;
		return;
	}

	DrawDebugPoint(wrld, hit.ImpactPoint, 10, FColor::Green, false, 5);

	// Do the cube connector first since that's the broken one...
	if(ACubeCore* core = Cast<ACubeCore>(hit.GetActor())) parentCore = core;
	else parentCore = nullptr;
	
	if(!IsValid(parentCore)) return;
	
	// objCore has been set to the hit actor.
	const UStaticMeshComponent* cubeMesh = parentCore->GetMesh();
	
	float shortestDistance = 9999;
	FName closestSocket = "None";

	for(int i = 0; i < 2; i++)
	{
		for(const auto& socket: cubeMesh->GetAllSocketNames())
		{
			if(parentCore) if(parentCore->ObjectInSocket(socket)) continue;
			
			const float distance = FVector::Distance(cubeMesh->GetSocketLocation(socket), hit.ImpactPoint);

			// Don't allow the attachment if the socket is out of range.
			if(distance > placeRange) continue;
			
			if(distance < shortestDistance)
			{
				shortestDistance = distance;
				closestSocket = socket;
			}
		}
	}

	if(closestSocket != NAME_None) attachedSocket = closestSocket;
	
}

// The same as the normal function except attachments are managed using the physics constraint.
void AWheel::SetSelected(const bool value)
{
	selected = value; 
	GravitySelection();
	
	if(selected)
	{
		Detach();
		return;
	}

	// If the wheel is unselected whilst the objCore isn't valid
	if(!IsValid(parentCore))
	{
		Detach();
		return;
	}
	if(attachedSocket == NAME_None) return;

	Attach(parentCore);
}

void AWheel::Detach()
{
	if(!IsValid(parentCore)) return;

	parentCore->RemoveAttachment(attachedSocket);
	wheelAxel->BreakConstraint();
	wheelAxel->UpdateConstraintFrames();
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	SetParentDominates(false);
	isAttached = false;
}

void AWheel::Attach(ACubeCore* core)
{
	parentCore = core;
	ResetRotation();

	const UStaticMeshComponent* coreMesh = parentCore->GetMesh();
	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(coreMesh->GetSocketRotation(attachedSocket));

	FRotator rot;
	if(placeDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
	else if(placeDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
	else if(placeDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);

	// Rotate to match the socket rotation
	SetActorRotation(rot);
	SetActorLocation(coreMesh->GetSocketLocation(attachedSocket));
	
	wheelAxel->SetConstrainedComponents(objMesh, attachedSocket, parentCore->GetMesh(), attachedSocket);
	wheelAxel->UpdateConstraintFrames();
	
	parentCore->AddAttachment(this, attachedSocket);
	SetParentDominates(false);
	isAttached = true;
}
