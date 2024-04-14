// Fill out your copyright notice in the Description page of Project Settings.


#include "Glider.h"


AGlider::AGlider()
{
	snapRot = false;
}

void AGlider::Ability()
{
	// Doesn't need to be "active" in order to work
	if(!isAttached) return;
	if(selected)
	{
		objMesh->SetAllPhysicsLinearVelocity({});
		return;
	}

	// Only activate when falling fast enough
	if(objMesh->GetPhysicsLinearVelocity().Z > -activationSpeed) return;

	// 1000 is the mass of the core (The mass of the other attached objects will be considered... just not the core.)
	objMesh->AddForce(GetActorForwardVector() * glideSpeed * 1000);
	objMesh->AddForce(GetActorUpVector() * floatAmount * 1000);
}