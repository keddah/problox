// Fill out your copyright notice in the Description page of Project Settings.


#include "Wheel.h"
#include "CubeCore.h"


AWheel::AWheel()
{
	wheelMesh = CreateDefaultSubobject<UStaticMeshComponent>("Wheel Mesh");
	wheelMesh->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);
	wheelMesh->SetSimulatePhysics(true);
	
	axel = CreateDefaultSubobject<UPhysicsConstraintComponent>("Wheel Axel");
	axel->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);
	axel->SetDisableCollision(false);
	
	axel->SetLinearXLimit(LCM_Free, 0);
	axel->SetLinearYLimit(LCM_Free, 0);
	axel->SetLinearZLimit(LCM_Free, 0);
	
	axel->SetAngularSwing1Limit(ACM_Locked, 45);
	axel->SetAngularSwing2Limit(ACM_Free,45);
	axel->SetAngularTwistLimit(ACM_Locked,45);
	
	
	axel->SetAngularDriveMode(EAngularDriveMode::TwistAndSwing);
	axel->SetAngularVelocityDriveTwistAndSwing(false, true);
}

void AWheel::SetSelected(const bool value)
{
	Super::SetSelected(value);
	if(!value && IsValid(objCore)) axel->SetConstrainedComponents(wheelMesh, "", objCore->GetMesh(), "");
}