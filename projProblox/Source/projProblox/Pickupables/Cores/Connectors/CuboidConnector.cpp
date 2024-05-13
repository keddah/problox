// Created by Dean Atkinson-Walker 2024


#include "CuboidConnector.h"

#include "WedgeConnector.h"
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
	SetDifferenceFromSockets();
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

float ACuboidConnector::GetAttachOffset(const APickupableMaster& attachee)
{
	float distance;

	// Different offsets depending on what connector it attaches to...
	if(attachee.IsA<ACubeConnector>()) distance = 52.5f; 
	else if(attachee.IsA<AWedgeConnector>()) distance = 55;
	else if(attachee.IsA<ACubeCore>()) distance = raySocket == "FRONT" || raySocket == "BACK"? 18.5f : 35;
	else distance = 50;

	attachOffset = distance;
	return attachOffset;
}

void ACuboidConnector::GhostPlacement()
{
	// Keep all the rotations stuff the same...
	Super::GhostPlacement();

	if(!parentCore) return;
	
	// Compensate for the extra length (it uses its center)...
	silhouette->AddRelativeLocation(GetSocketDifference(raySocket) - GetSocketDifference(raySocket) * 1.5f);

	// If the ray socket is the front or back add half the size of the cuboid...
	const bool addOffset = (raySocket == "FRONT" || raySocket == "BACK");
	const float offset = addOffset? GetAttachOffset(*parentCore) + 50 : GetAttachOffset(*parentCore);
	const FVector relativePos = silhouette->GetRelativeLocation();

	silhouette->SetRelativeLocation({offset, relativePos.Y,relativePos.Z});
}

// Call at beginPlay after socketInfo has been made.....
void ACuboidConnector::SetDifferenceFromSockets()
{
	const FVector thisPos = mesh->GetComponentLocation();
	
	// Sets the default offsets for each raysocket
	for (const auto& socket : socketInfo->GetSockets())
	{
		socketDifferences.Add( thisPos - mesh->GetSocketLocation(socket));
	}
}

const FVector& ACuboidConnector::GetSocketDifference(const FName& socket)
{
	TArray<FName> sockets = socketInfo->GetSockets();
	for(int i = 0; i < sockets.Num(); i++)
	{
		if(socket == sockets[i])
		{
			PrintVector(socketDifferences[i], 5)
			return socketDifferences[i];
		}
	}

	// Return empty vector if something went wrong...
	Print("Couldn't get the right socket differences... ~ cuboid connector", 5)
	return {};
}
