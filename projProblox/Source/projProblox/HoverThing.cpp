// Created by Dean Atkinson-Walker 2024


#include "Thing.h"

void AHoverThing::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	const FVector velocity = body->GetPhysicsLinearVelocity();

	body->SetPhysicsLinearVelocity({velocity.X, velocity.Y, -GetWorld()->GetGravityZ() * .01f});
}
