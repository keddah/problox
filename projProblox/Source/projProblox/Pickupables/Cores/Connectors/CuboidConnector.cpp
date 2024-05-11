// Created by Dean Atkinson-Walker 2024


#include "CuboidConnector.h"

#include "./projProblox/Pickupables/Cores/SocketInfo/CuboidSocketInfo.h"

ACuboidConnector::ACuboidConnector()
{
	leftArrow2 = CreateDefaultSubobject<UArrowComponent>("Left");
	leftArrow2->SetupAttachment(mesh);
	
	rightArrow2 = CreateDefaultSubobject<UArrowComponent>("Right");
	rightArrow2->SetupAttachment(mesh);

	upwardsArrow2 = CreateDefaultSubobject<UArrowComponent>("Upward");
	upwardsArrow2->SetupAttachment(mesh);

	downwardsArrow2 = CreateDefaultSubobject<UArrowComponent>("Downwards");
	downwardsArrow2->SetupAttachment(mesh);
}

void ACuboidConnector::BeginPlay()
{
	Super::BeginPlay();
	
	socketInfo = NewObject<UCuboidSocketInfo>();
}

void ACuboidConnector::SetupIndicator()
{
	Super::SetupIndicator();

	leftArrow2->ArrowColor.A = .5f;
	leftArrow2->ArrowLength = placeRange;

	rightArrow2->ArrowColor.A = .5f;
	rightArrow2->ArrowLength = placeRange;

	upwardsArrow2->ArrowColor.A = .5f;
	upwardsArrow2->ArrowLength = placeRange;

	downwardsArrow2->ArrowColor.A = .5f;
	downwardsArrow2->ArrowLength = placeRange;

	FRotator rot = UKismetMathLibrary::MakeRotFromX({0,-1,0});
	leftArrow2->SetRelativeRotation(rot);

	rot = UKismetMathLibrary::MakeRotFromX({0,1,0});
	rightArrow2->SetRelativeRotation(rot);

	rot = UKismetMathLibrary::MakeRotFromX({0,0,1});
	upwardsArrow2->SetRelativeRotation(rot);

	rot = UKismetMathLibrary::MakeRotFromX({0,0,-1});
	downwardsArrow2->SetRelativeRotation(rot);
}

void ACuboidConnector::SetHideIndicator(const bool hide)
{
	Super::SetHideIndicator(hide);

	leftArrow2->SetHiddenInGame(hide);
	rightArrow2->SetHiddenInGame(hide);
	upwardsArrow2->SetHiddenInGame(hide);
	downwardsArrow2->SetHiddenInGame(hide);
}
