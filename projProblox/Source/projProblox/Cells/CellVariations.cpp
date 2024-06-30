/**************************************************************************************************************
* Cell Variations - Code
* 
* The code file that gives functionality to the different cell types. Uses the cell variant classes that were created in the cell header file.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "Cell.h"

/////////////// BOUNCY ///////////////
void ABouncyCell::AsyncPhysicsTickActor(float DeltaTime, float SimTime)
{
	if(DeltaTime == NAN || SimTime == NAN) return;
	Super::AsyncPhysicsTickActor(DeltaTime, SimTime);
	if(!body) return;
	if(!body->IsSimulatingPhysics()) return;

	const FVector velocity = body->GetPhysicsLinearVelocity();

	// If the z velocity inverts... bounce
	if ((zVelocity < 0 && velocity.Z > 0) || zVelocity > 0 && velocity.Z < 0)
	{
		body->SetPhysicsLinearVelocity({ velocity.X, velocity.Y, velocity.Z * (bounciness + 1) });
	}

	zVelocity = velocity.Z;
}

/////////////// HOVER ///////////////
void AHoverCell::AsyncPhysicsTickActor(float DeltaTime, float SimTime)
{
	if(DeltaTime == NAN || SimTime == NAN) return;
	Super::AsyncPhysicsTickActor(DeltaTime, SimTime);
	if(!body) return;
	if(!body->IsSimulatingPhysics()) return;

	const FVector velocity = body->GetPhysicsLinearVelocity();
	body->SetPhysicsLinearVelocity({ velocity.X, velocity.Y, DeltaTime * -wrld->GetGravityZ() });//8.2f});
}


/////////////// STICKY ///////////////
void AStickyCell::AsyncPhysicsTickActor(float DeltaTime, float SimTime)
{
	Super::AsyncPhysicsTickActor(DeltaTime, SimTime);
	Unstick(DeltaTime);
}

void AStickyCell::Unstick(const float deltaTime) const
{
	if(!body) return;
	if(!stuck) return;
	if(!body->IsSimulatingPhysics()) return;
	if(deltaTime == NAN) return;

	// Stop the Thing from moving...
	body->SetPhysicsLinearVelocity({0,0, deltaTime * -wrld->GetGravityZ()});
	body->SetPhysicsAngularVelocityInDegrees({0,0,0});
}


void AStickyCell::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp,
                             bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);
	if(!body) return;

	// Stop the Thing from moving...
	body->SetPhysicsLinearVelocity({0,0,0});
	body->SetPhysicsAngularVelocityInDegrees({0,0,0});
	
	stuck = true;
	if(GEngine) body->SetMassOverrideInKg("", 100000);
}
