/**************************************************************************************************************
* Glider - Code
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
	
	// Don't allow cells to be collected from this collider.
	Tags.Add("NO");

	uiName = "Propeller";
	favouredSlot = ECoreSockets::Up;
}


void APropeller::Ability(const float deltaTime)
{
	if(soundPlayer) soundPlayer->SetFloatParam("roll", mesh->GetRelativeRotation().Roll);
	Super::Ability(deltaTime);
	soundPlayer->RunAudioFunction("print");
	
	if(!active) return;

	mesh->AddLocalRotation({0, 0, spinSpeed});
	
	if(!parentCore) return;

	const bool vertical = GetActorForwardVector().Z >= .85f;

	// Push the things that are inside the wind box
    if(!pushedObjs.IsEmpty())
    {
		for	(const auto& obj : pushedObjs)
		{
    		if(obj)
    		{
    			const float power = (pushForce * 1000) / sqrt(FVector::DistSquared(GetActorLocation(), obj->GetComponentLocation())) ;
				obj->AddForce(mesh->GetForwardVector() * power);
    		}
		}
    }

	if(!vertical) return;

	const float power = sqrt(parentCore->GetMass()) * propelForce * 1000; 
	const FVector force = power * mesh->GetForwardVector();
	
	parentCore->GetMesh()->AddForceAtLocation(force, mesh->GetComponentLocation());
}

void APropeller::SetAbilityActive(const bool value)
{
	Super::SetAbilityActive(value);
	if(value) soundPlayer->PlayAbility();
	else soundPlayer->StopAbility();
}
