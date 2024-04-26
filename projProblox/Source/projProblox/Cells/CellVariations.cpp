// Created by Dean Atkinson-Walker 2024


#include "Cell.h"

/////////////// BOUNCY ///////////////
void ABouncyCell::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	const FVector velocity = body->GetPhysicsLinearVelocity();

	// If the z velocity inverts... bounce
	if((zVelocity < 0 && velocity.Z > 0) || zVelocity > 0 && velocity.Z < 0)
	{
		body->SetPhysicsLinearVelocity({velocity.X, velocity.Y, velocity.Z * (bounciness + 1)});
	}

	zVelocity = velocity.Z;
}


/////////////// HOVER ///////////////
void AHoverCell::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	const FVector velocity = body->GetPhysicsLinearVelocity();

	body->SetPhysicsLinearVelocity({velocity.X, velocity.Y, DeltaSeconds * -GetWorld()->GetGravityZ()});//8.2f});
}



/////////////// STICKY ///////////////
void AStickyCell::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	Unstick(DeltaSeconds);
}

void AStickyCell::Unstick(const float deltaTime) const
{
	if(!stuck) return;

	// Stop the Thing from moving...
	body->SetPhysicsLinearVelocity({0,0, deltaTime * -GetWorld()->GetGravityZ()});
	body->SetPhysicsAngularVelocityInDegrees({0,0,0});
}

void AStickyCell::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp,
                             bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	// Stop the Thing from moving...
	body->SetPhysicsLinearVelocity({0,0,0});
	body->SetPhysicsAngularVelocityInDegrees({0,0,0});
	
	stuck = true;
	body->SetMassOverrideInKg("", 100000);
}
