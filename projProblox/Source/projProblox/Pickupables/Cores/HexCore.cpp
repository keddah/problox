// Created by Dean Atkinson-Walker 2024


#include "HexCore.h"
#include "SocketInfo/HexagonSocketInfo.h"

AHexCore::AHexCore()
{
	topper = CreateDefaultSubobject<UStaticMeshComponent>("Top");
	topper->SetupAttachment(mesh);
	topper->SetRelativeLocation({0,0,100});	
}


void AHexCore::BeginPlay()
{
	Super::BeginPlay();

	socketInfo = NewObject<UHexagonSocketInfo>();
}
