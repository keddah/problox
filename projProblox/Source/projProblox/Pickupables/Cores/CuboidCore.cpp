// Created by Dean Atkinson-Walker 2024


#include "CuboidCore.h"

ACuboidCore::ACuboidCore()
{
	otherIndicator = CreateDefaultSubobject<UArrowComponent>("2nd Place Indicator");
	otherIndicator->SetupAttachment(mesh);
}


void ACuboidCore::BeginPlay()
{
	Super::BeginPlay();

	socketInfo = NewObject<UCuboidSocketInfo>();
}