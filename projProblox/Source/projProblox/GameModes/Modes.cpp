/**************************************************************************************************************
* Modes - Code
* 
* The code file for the different game mode classes. Mostly unused (there were supposed to be several game modes).
* 
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "Modes.h"

#include "Kismet/GameplayStatics.h"
#include "projProblox/PlayerCharacter.h"

void AMode_Story::BeginPlay()
{
	Super::BeginPlay();

	APlayerCharacter* player = Cast<APlayerCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCharacter::StaticClass()));
	player->SetGameMode(EGameMode::Story);
}
