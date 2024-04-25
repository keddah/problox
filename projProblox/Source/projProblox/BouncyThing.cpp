// Created by Dean Atkinson-Walker 2024


#include "Thing.h"

void ABouncyThing::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	Print("df",.1)
	const FVector velocity = body->GetPhysicsLinearVelocity();

	// If the z velocity inverts... bounce
	if((zVelocity < 0 && velocity.Z > 0) || zVelocity > 0 && velocity.Z < 0)
	{
		body->SetPhysicsLinearVelocity({velocity.X, velocity.Y, velocity.Z * (bounciness + 1)});
	}

	zVelocity = velocity.Z;
}
