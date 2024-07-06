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
	end->SetCollisionResponseToAllChannels(ECR_Ignore);

	spline = CreateDefaultSubobject<USplineMeshComponent>("Spline Mesh");
	spline->SetupAttachment(start);

	spline->SetCollisionResponseToAllChannels(ECR_Ignore);
	spline->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	spline->SetCollisionResponseToChannel(ECC_Camera, ECR_Block);
	
	spline->ForwardAxis = ESplineMeshAxis::Z;
	spline->SetMobility(EComponentMobility::Movable);

	soundPlayer->AddAbilitySFX(TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_spring.MS_spring'"));
	
	needsTimer = false;
	uiName = "Spring";
}

void ABounceSpring::Ability(float deltaTime)
{
	Super::Ability(deltaTime);
	
	if(!wrld)
	{
		Print("Bad world ~ Spring", 5)
		return;
	}

	const FVector startPos = start->GetComponentLocation();
	const FVector direction = start->GetForwardVector(); 
	const FVector endPos = startPos + direction * springLength;
	
	FCollisionQueryParams collisionParams;
	collisionParams.AddIgnoredActor(this);
	collisionParams.AddIgnoredActor(parentCore);
	
	wrld->LineTraceSingleByChannel(springHit, startPos, endPos, ECC_Visibility, collisionParams);
	mouseDetector->SetWorldLocation(end->GetComponentLocation());

	if(!springHit.bBlockingHit)
	{
		springLength = FMath::Lerp(springLength, minSpringLength, compressionSpeed * deltaTime);
		springLength = FMath::Clamp(springLength, 0, maxSpringLength);
		end->SetWorldLocation(endPos);
		return;
	}
	springLength = FVector::Distance(springHit.Location, start->GetComponentLocation()) + 10;
	end->SetWorldLocation(springHit.Location);
	
	const FVector velocity = (GetActorLocation() - GetVelocity()) / deltaTime;

	// Lower the spring energy when the core is in the adjust phase.
	const float springEnergy = GetSpringEnergy(startPos, springHit.Location, velocity) * GetMass();
	mesh->AddForceAtLocation(springHit.ImpactNormal * (parentCore->InAdjustPhase()? springEnergy * .05f : springEnergy), springHit.Location);

	if(GetVelocity().Length() < 20) return;
	if(!soundPlayer->IsPlaying()) soundPlayer->PlayAbility();
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

void ABounceSpring::SetShowMesh(const bool enable) const
{
	Super::SetShowMesh(enable);
	end->SetCollisionEnabled(enable? ECollisionEnabled::QueryAndPhysics: ECollisionEnabled::NoCollision);
	end->SetHiddenInGame(!enable);

	spline->SetCollisionEnabled(enable? ECollisionEnabled::QueryAndPhysics: ECollisionEnabled::NoCollision);
	spline->SetHiddenInGame(!enable);
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
