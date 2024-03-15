// Fill out your copyright notice in the Description page of Project Settings.


#include "Wheel.h"
#include "CubeCore.h"


AWheel::AWheel()
{
	pivot = CreateDefaultSubobject<USceneComponent>("Center");
	pivot->AttachToComponent(objMesh, FAttachmentTransformRules::KeepWorldTransform);
	pivot->AddRelativeLocation({0,0,50});
	
	axel = CreateDefaultSubobject<UPhysicsConstraintComponent>("Wheel Axel");
	axel->SetupAttachment(objMesh);
	axel->SetDisableCollision(true);
	
	axel->SetLinearXLimit(LCM_Locked, 0);
	axel->SetLinearYLimit(LCM_Locked, 0);
	axel->SetLinearZLimit(LCM_Locked, 0);
	
	axel->SetAngularSwing1Limit(ACM_Locked, 45);
	axel->SetAngularSwing2Limit(ACM_Free,45);
	axel->SetAngularTwistLimit(ACM_Locked,45);
	
	axel->SetAngularDriveMode(EAngularDriveMode::TwistAndSwing);
	axel->SetAngularVelocityDriveTwistAndSwing(false, true);

	wheelMesh = CreateDefaultSubobject<UStaticMeshComponent>("Wheel Mesh");
	wheelMesh->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);
	wheelMesh->SetSimulatePhysics(true);
	
	axel->SetConstrainedComponents(wheelMesh, "", objMesh, "");
}


// Override is exactly the same as the original except changing where the line trace starts from...
void AWheel::Placement()
{
	GravitySelection();
	
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
		objCore = 0;
		return;
	}
	
	if(ACubeCore* core = Cast<ACubeCore>(hit.GetActor())) objCore = core;
	else objCore = nullptr;
	if(!IsValid(objCore)) return;
	
	// objCore has been set to the hit actor.
	const UStaticMeshComponent* coreMesh = objCore->GetMesh();
	
	float shortestDistance = 9999;
	FName closestSocket = "None";

	for(int i = 0; i < 2; i++)
	{
		for(const auto& socket: coreMesh->GetAllSocketNames())
		{
			if(objCore) if(objCore->ObjectInSocket(socket)) continue;
			
			const float distance = FVector::Distance(coreMesh->GetSocketLocation(socket), hit.ImpactPoint);

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

void AWheel::SetSelected(const bool value)
{
	Super::SetSelected(value);

	wheelMesh->SetEnableGravity(!value);
}

void AWheel::ResetRotation(bool resetVelocity)
{
	objMesh->SetRelativeRotation(defaultRot);

	if(!resetVelocity) return;

	wheelMesh->SetAllPhysicsLinearVelocity({});
	wheelMesh->SetAllPhysicsAngularVelocityInRadians({});
	wheelMesh->ResetSceneVelocity();

	objMesh->SetAllPhysicsLinearVelocity({});
	objMesh->SetAllPhysicsAngularVelocityInRadians({});
	objMesh->ResetSceneVelocity();
}
