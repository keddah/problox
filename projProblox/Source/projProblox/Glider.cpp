// Fill out your copyright notice in the Description page of Project Settings.


#include "Glider.h"

#include "CubeConnector.h"
#include "WedgeConnector.h"

class AWedgeConnector;

AGlider::AGlider()
{
	snapRot = false;
}

void AGlider::Ability()
{
	// Doesn't need to be "active" in order to work
	if(!isAttached) return;
	if(selected)
	{
		objMesh->SetAllPhysicsLinearVelocity({});
		return;
	}

	if(objMesh->GetPhysicsLinearVelocity().Z > -activationSpeed) return;

	// 1000 is the mass of the core (Will take into account of the other attached things .. just not the core.)
	objMesh->AddForce(GetActorForwardVector() * glideSpeed * 1000);
	objMesh->AddForce(GetActorUpVector() * floatAmount * 1000);
}

void AGlider::GhostPlacement()
{
	Super::GhostPlacement();
	// RemoveVelocity();
	//
	// if(!parentCore) return;
	//
	// silhouette->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	// silhouette->SetHiddenInGame(false);
	//
	// const UStaticMeshComponent* parentMesh = parentCore->GetMesh();
	//
	// const bool above = !parentCore->IsA<AWedgeConnector>() && parentCore->GetActorLocation().Z + parentCore->GetActorRelativeScale3D().X * 100 <= GetActorLocation().Z;	// 100 = the size of the core 
	//
	// // Attach the actor to the parent with the target socket
	// silhouette->AttachToComponent(parentCore->GetMesh(), ghostRules, attachedSocket);
	//
	// // Have to realign the socket rotation with another axis
	// FRotator socketRot = parentMesh->GetSocketRotation(attachedSocket);
	// if(above)
	// {
	// 	const FVector socketForward = UKismetMathLibrary::GetForwardVector(socketRot);
	// 	socketRot = socketRot.RotateVector(socketForward).Rotation();
	// 	Print("Above", .2)
	// }
	//
	// silhouette->SetWorldRotation(RoundRotation(GetActorRotation(), socketRot));
	//
	// ///////////// Location
	// const float distance = parentCore->IsA<ACubeConnector>()? 50 : 25;
	// attachOffset = distance;
	// silhouette->SetRelativeLocation({attachOffset,0,0});
}