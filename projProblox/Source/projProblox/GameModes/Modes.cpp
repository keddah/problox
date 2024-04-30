// Created by Dean Atkinson-Walker 2024


#include "Modes.h"

#include "Kismet/GameplayStatics.h"
#include "projProblox/PlayerCharacter.h"

void AMode_Story::BeginPlay()
{
	Super::BeginPlay();

	APlayerCharacter* player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	player->SetGameMode(EGameMode::Story);
}

void AMode_Wave::BeginPlay()
{
	APlayerCharacter* player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	player->SetGameMode(EGameMode::Wave);
}

void AMode_Assault::BeginPlay()
{
	APlayerCharacter* player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	player->SetGameMode(EGameMode::Assault);
}

void AMode_Creative::BeginPlay()
{
	APlayerCharacter* player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	player->SetGameMode(EGameMode::Creative);
}
