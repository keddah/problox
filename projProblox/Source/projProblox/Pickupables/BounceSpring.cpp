// Created by Dean Atkinson-Walker 2024


#include "BounceSpring.h"

#include "Cores/CubeCore.h"

ABounceSpring::ABounceSpring()
{
	start = CreateDefaultSubobject<USceneComponent>("Start");
	start->SetupAttachment(mesh);
	
	end = CreateDefaultSubobject<UStaticMeshComponent>("End");
	end->SetupAttachment(mesh);
	end->SetSimulatePhysics(false);

	needsTimer = false;

	soundManager->AddAbilitySFX(TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_spring.MS_spring'"));
}

void ABounceSpring::Ability(float deltaTime)
{
	Super::Ability(deltaTime);
	
	if(!wrld)
	{
		Print("Bad world ~ Spring", 5)
		return;
	}
	// if(!isAttached) return;

	const FVector startPos = start->GetComponentLocation();
	const FVector direction = start->GetForwardVector(); 
	const FVector endPos = startPos + direction * springLength;
	
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.AddIgnoredActor(parentCore);
	
	// DrawDebugLine(wrld, startPos, endPos, FColor::Red);
	wrld->LineTraceSingleByChannel(springHit, startPos, endPos, ECC_Visibility, collisionParams);

	pickerUpper->SetWorldLocation(end->GetComponentLocation());

	if(!springHit.bBlockingHit)
	{
		springLength = FMath::Lerp(springLength, minSpringLength, compressionSpeed * deltaTime);
		springLength = FMath::Clamp(springLength, 0, maxSpringLength);
		end->SetWorldLocation(endPos);
		return;
	}
	springLength = FVector::Distance(springHit.Location, start->GetComponentLocation()) + 10;
	end->SetWorldLocation(springHit.Location);
	
	// DrawDebugPoint(wrld, springHit.ImpactPoint, 10, FColor::Green, false, .2f);

	const FVector velocity = (GetActorLocation() - GetVelocity()) / deltaTime;
	// DrawDebugLine(wrld, springHit.Location, springHit.Location + springHit.ImpactNormal * 200, FColor::Cyan);

	mesh->AddForceAtLocation(springHit.ImpactNormal * GetSpringEnergy(startPos, springHit.Location, velocity) * GetMass(), springHit.Location);
	if(!soundManager->IsPlaying()) soundManager->PlayAbility();
}

void ABounceSpring::ToggleGravity() const
{
	// Does the same for objMesh... Also calls RemoveVelocity
	Super::ToggleGravity();

	end->SetEnableGravity(!selected);
}

void ABounceSpring::ToggleGravity(bool gravityOn)
{
	Super::ToggleGravity(gravityOn);

	end->SetEnableGravity(gravityOn);
}

void ABounceSpring::RemoveVelocity() const
{
	Super::RemoveVelocity();

	end->SetPhysicsLinearVelocity(FVector::ZeroVector);
	end->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
}

float ABounceSpring::GetSpringEnergy(const FVector& startPos, const FVector& endPos, const FVector& velocity) const
{
	const float change = (endPos - startPos).Length();

	// Damping is proportional to velocity
	const float dampingForce = damping * velocity.Length();

	// Spring energy with damping
	const float springEnergy = 0.5f * springConstant * change * change;

	// Damping energy
	const float dampingEnergy = dampingForce * change;

	return springEnergy + dampingEnergy;
}