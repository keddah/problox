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
	GravitySelection();
	
	if(selected)
	{
		Detach();
		return;
	}
	
	if(!IsValid(parentCore)) return;
	if(attachedSocket == NAME_None) return;
	
	const UStaticMeshComponent* coreMesh = parentCore->GetMesh();
	const FVector forwardVec = UKismetMathLibrary::GetForwardVector(coreMesh->GetSocketRotation(attachedSocket));
	
	FRotator rot;
	if(placeDir.X != 0) rot = UKismetMathLibrary::MakeRotFromX(forwardVec);
	else if(placeDir.Y != 0) rot = UKismetMathLibrary::MakeRotFromY(forwardVec);
	else if(placeDir.Z != 0) rot = UKismetMathLibrary::MakeRotFromZ(forwardVec);
	
	// Rotate to match the socket rotation
	SetActorRotation(rot);
	
	AttachToActor(parentCore, attachRules, attachedSocket);
	ApplyOffset();
	
	parentCore->AddAttachment(this, attachedSocket);
	isAttached = true;
}

void APropeller::Ability()
{
	Super::Ability();

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
