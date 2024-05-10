// Created by Dean Atkinson-Walker 2024
#include "Components/StaticMeshComponent.h"


#include "Balloon.h"

#include "Cores/CubeCore.h"

void ABalloon::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(!parentCore || !isAttached) return;
	FVector velocity = objMesh->GetPhysicsLinearVelocity();
	velocity.Z *= -DeltaSeconds;
	velocity.Z -= sqrt(parentCore->GetMass());
	velocity.Z += floatiness; 
	
	objMesh->SetPhysicsLinearVelocity(velocity);
}
