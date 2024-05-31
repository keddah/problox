/**************************************************************************************************************
* Glider - Code
* 
* The code file for one of the pickupable objects.
* PROBLEMS:
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/



#include "Glider.h"


AGlider::AGlider()
{
	snapRot = false;
	needsTimer = false;

	uiName = "Glider";
}

void AGlider::Ability(const float deltaTime)
{
	Super::Ability(deltaTime);
	
	// if(!active) return;
	if(selected)
	{
		mesh->SetAllPhysicsLinearVelocity({});
		return;
	}

	// Only activate when falling fast enough
	if(mesh->GetPhysicsLinearVelocity().Z > -activationSpeed) return;

	// 1000 is the mass of the core (The mass of the other attached objects will be considered... just not the core.)
	mesh->AddForce(GetActorForwardVector() * glideSpeed * 1000);
	mesh->AddForce(GetActorUpVector() * floatAmount * 1000);
}