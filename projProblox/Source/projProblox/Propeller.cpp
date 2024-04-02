// Fill out your copyright notice in the Description page of Project Settings.


#include "Propeller.h"

#include "CubeCore.h"

void APropeller::BeginPlay()
{
	Super::BeginPlay();
	
	attachOffset = 5;
}

APropeller::APropeller()
{
	windBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Wind Collider"));
	windBox->AttachToComponent(objMesh, FAttachmentTransformRules::KeepRelativeTransform);
}

void APropeller::SetSelected(const bool value)
{
	selected = value;
	
	if(selected)
	{
		Detach();
		return;
	}
	
	if(!IsValid(parentCore)) return;
	if(attachedSocket == NAME_None) return;
	
	// Rotate to match the socket rotation
	SetActorRotation(parentCore->GetMesh()->GetSocketRotation(attachedSocket));
	
	AttachToActor(parentCore, attachRules, attachedSocket);
	ApplyOffset(parentCore);

	ResetGhost();
	
	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}

void APropeller::Ability()
{
	if(!active) return;

	objMesh->AddLocalRotation({0, 0, spinSpeed});

	if(!parentCore) return;

	const float power = sqrt(parentCore->GetMass()) * propelForce * 1000; 
	const FVector force = power * objMesh->GetForwardVector();
	
	parentCore->GetMesh()->AddForceAtLocation(force, objMesh->GetComponentLocation());

	// Push the things that are inside the wind box
	if(pushedObjs.IsEmpty()) return;
	for (const auto& obj : pushedObjs) if(obj) obj->AddForce(objMesh->GetForwardVector() * pushForce * 1000);
}
