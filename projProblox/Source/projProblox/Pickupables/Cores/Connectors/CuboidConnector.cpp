// Created by Dean Atkinson-Walker 2024


#include "CuboidConnector.h"

#include "./projProblox/Pickupables/Cores/SocketInfo/CuboidSocketInfo.h"

ACuboidConnector::ACuboidConnector()
{
	leftArrow2 = CreateDefaultSubobject<UArrowComponent>("Left");
	leftArrow2->SetupAttachment(mesh);
	
	rightArrow2 = CreateDefaultSubobject<UArrowComponent>("Right");
	rightArrow2->SetupAttachment(mesh);

	upArrow2 = CreateDefaultSubobject<UArrowComponent>("Upward");
	upArrow2->SetupAttachment(mesh);

	downArrow2 = CreateDefaultSubobject<UArrowComponent>("Downwards");
	downArrow2->SetupAttachment(mesh);
}

void ACuboidConnector::BeginPlay()
{
	Super::BeginPlay();
}

void ACuboidConnector::GhostPlacement()
{
	// Keep all the rotations stuff the same...
	Super::GhostPlacement();
	if(!parentCore) return;
	
	// Compensate for the extra length (it thinks it's a cube)... 
	FVector relativePos = mesh->GetSocketTransform(raySocket).GetRelativeTransform(GetActorTransform()).GetLocation();
	
	// The relative position of the raySocket to the mesh's position
	PrintVector(relativePos, .1)

	silhouette->AddRelativeLocation(relativePos);
	
	relativePos = silhouette->GetComponentTransform().GetRelativeTransform(parentCore->GetActorTransform()).GetLocation();
	relativePos += UKismetMathLibrary::GetForwardVector(parentCore->GetMesh()->GetSocketRotation(attachedSocket)) * -100;
	silhouette->SetRelativeLocation({GetAttachOffset(*parentCore), relativePos.Y, relativePos.Z});

}

void ACuboidConnector::SetupPlaceIndicator()
{
	socketInfo = NewObject<UCuboidSocketInfo>();

	// Setting the position and orientation
	FRotator rot = UKismetMathLibrary::MakeRotFromX({1,0,0});
	indicator->SetRelativeRotation(rot);
	indicator->SetWorldLocation(mesh->GetSocketLocation("FRONT"));

	rot = UKismetMathLibrary::MakeRotFromX({-1,0,0});
	backArrow->SetRelativeRotation(rot);
	backArrow->SetWorldLocation(mesh->GetSocketLocation("BACK"));

	rot = UKismetMathLibrary::MakeRotFromX({0,-1,0});
	leftArrow->SetRelativeRotation(rot);
	leftArrow->SetWorldLocation(mesh->GetSocketLocation("LEFT1"));

	rot = UKismetMathLibrary::MakeRotFromX({0,1,0});
	rightArrow->SetRelativeRotation(rot);
	rightArrow->SetWorldLocation(mesh->GetSocketLocation("RIGHT1"));

	rot = UKismetMathLibrary::MakeRotFromX({0,0,1});
	upArrow->SetRelativeRotation(rot);
	upArrow->SetWorldLocation(mesh->GetSocketLocation("UP1"));

	rot = UKismetMathLibrary::MakeRotFromX({0,0,-1});
	downArrow->SetRelativeRotation(rot);
	downArrow->SetWorldLocation(mesh->GetSocketLocation("DOWN1"));

	rot = UKismetMathLibrary::MakeRotFromX({0,-1,0});
	leftArrow2->SetRelativeRotation(rot);
	leftArrow2->SetWorldLocation(mesh->GetSocketLocation("LEFT2"));

	rot = UKismetMathLibrary::MakeRotFromX({0,1,0});
	rightArrow2->SetRelativeRotation(rot);
	rightArrow2->SetWorldLocation(mesh->GetSocketLocation("RIGHT2"));

	rot = UKismetMathLibrary::MakeRotFromX({0,0,1});
	upArrow2->SetRelativeRotation(rot);
	upArrow2->SetWorldLocation(mesh->GetSocketLocation("UP2"));

	rot = UKismetMathLibrary::MakeRotFromX({0,0,-1});
	downArrow2->SetRelativeRotation(rot);
	downArrow2->SetWorldLocation(mesh->GetSocketLocation("DOWN2"));
	
	ScaleIndicator();
	SetHideIndicator(true);
}

void ACuboidConnector::SetHideIndicator(const bool hide)
{
	Super::SetHideIndicator(hide);

	leftArrow2->SetHiddenInGame(hide);
	rightArrow2->SetHiddenInGame(hide);
	upArrow2->SetHiddenInGame(hide);
	downArrow2->SetHiddenInGame(hide);
}
