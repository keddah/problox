// Fill out your copyright notice in the Description page of Project Settings.


#include "Glider.h"

#include "CubeCore.h"

void AGlider::Ability()
{
	// Doesn't need to be "active" in order to work
	if(!isAttached) return;
	if(selected)
	{
		objMesh->SetAllPhysicsLinearVelocity({});
		return;
	}
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Cyan, FString::FromInt(objMesh->GetPhysicsLinearVelocity().Z));

	// If falling fast enough...
	if(objMesh->GetPhysicsLinearVelocity().Z > -activationSpeed) return;

	
	objCore->Movement(objMesh->GetForwardVector(), glideSpeed * 1000);
	objCore->AddVelocity(objMesh->GetUpVector() * floatAmount);
}
