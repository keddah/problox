// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeCore.h"

ACubeCore::ACubeCore()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

void ACubeCore::BeginPlay()
{
	Super::BeginPlay();
}

void ACubeCore::RemoveAttachment(FName socket)
{
	Super::RemoveAttachment(socket);

	socketInfo->RemoveAttachment(socket);
}

void ACubeCore::SetSelected(const bool value)
{
	Super::SetSelected(value);
}

void ACubeCore::Placement()
{
	Super::Placement();
}

void ACubeCore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACubeCore::AddAttachment(APickupableMaster* attachment, FName socket)
{
	Super::AddAttachment(attachment, socket);
}
