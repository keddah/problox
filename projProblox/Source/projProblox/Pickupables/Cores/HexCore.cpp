// Created by Dean Atkinson-Walker 2024


#include "HexCore.h"
#include "SocketInfo/HexagonSocketInfo.h"

void AHexCore::BeginPlay()
{
	Super::BeginPlay();

	socketInfo = NewObject<UHexagonSocketInfo>();
}
