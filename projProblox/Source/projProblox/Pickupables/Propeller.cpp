/**************************************************************************************************************
* Propeller - Code
* 
* The code file for one of the pickupable objects.
* PROBLEMS:
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/

#include "Propeller.h"

#include "Cores/CubeCore.h"

void APropeller::BeginPlay()
{
	Super::BeginPlay();
	
	attachOffset = 5;
}

APropeller::APropeller()
{
	windBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Wind Collider"));
	windBox->AttachToComponent(mesh, FAttachmentTransformRules::KeepRelativeTransform);

	soundPlayer->AddAbilitySFX(TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_propeller.MS_propeller'"));

	favouredSlot = ECoreSockets::Up;
	soundPlayer->SetAbilityLooping(true);
}


void APropeller::Ability(const float deltaTime)
{
	if(!IsValid(mesh))
	{
		Print("mesh was invalid......?: " + GetName().ToUpper(), 4)
		return;
	}
	
	if(IsValid(soundPlayer)) soundPlayer->SetFloatParam("roll", mesh->GetRelativeRotation().Yaw);
	if(!active) return;

	mesh->AddLocalRotation({0, spinSpeed, 0});
	
	if(!IsValid(parentCore)) return;

	const FVector up = mesh->GetUpVector();
	const bool vertical = up.Z >= .85f;

	// Push the things that are inside the wind box
    if(!pushedObjs.IsEmpty())
    {
		for	(const auto& obj : pushedObjs)
		{
    		if(!IsValid(obj)) continue;

			const float power = (pushForce * 1000) / sqrt(FVector::DistSquared(GetActorLocation(), obj->GetComponentLocation())) ;
			obj->AddForce(up * power);
		}
    }

	if(!vertical) return;

	const float power = sqrt(parentCore->GetMass()) * propelForce * 1000; 
	const FVector force = power * up;
	
	parentCore->GetMesh()->AddForceAtLocation(force, mesh->GetComponentLocation());
}

void APropeller::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);
	if(!IsValid(soundPlayer)) return;
	
	if(value) soundPlayer->PlayAbility();
	else soundPlayer->StopAbility();
}
