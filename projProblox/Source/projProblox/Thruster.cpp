// Created by Dean Atkinson-Walker 2024


#include "Thruster.h"

AThruster::AThruster()
{
	thruster = CreateDefaultSubobject<UPhysicsThrusterComponent>("Thruster");
	thruster->SetupAttachment(objMesh);
}

void AThruster::BeginPlay()
{
	Super::BeginPlay();
	thruster->ThrustStrength = power * 1000;
}