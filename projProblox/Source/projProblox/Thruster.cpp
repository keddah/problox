// Created by Dean Atkinson-Walker 2024


#include "Thruster.h"

AThruster::AThruster()
{
	thruster = CreateDefaultSubobject<UPhysicsThrusterComponent>("Thruster");
	thruster->SetupAttachment(objMesh);
}

void AThruster::Ability()
{
	thruster->ThrustStrength = power * 1000;
	thruster->SetActive(active);
	Print("Running", .1f)
}

void AThruster::AlignSocketRot(bool useDirection)
{
	Super::AlignSocketRot(false);
}
