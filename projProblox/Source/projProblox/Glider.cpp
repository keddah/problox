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

	if(objMesh->GetPhysicsLinearVelocity().Z > -activationSpeed) return;

	// 1000 is the mass of the core (Will take into account of the other attached things .. just not the core.)
	objMesh->AddForce(GetActorForwardVector() * glideSpeed * 1000);
	objMesh->AddForce(GetActorUpVector() * floatAmount * 1000);
	// objCore->Movement(objMesh->GetForwardVector(), glideSpeed * 1000);
	// objCore->AddVelocity(objMesh->GetUpVector() * floatAmount);
}
