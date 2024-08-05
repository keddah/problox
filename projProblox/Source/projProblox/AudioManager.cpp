/**************************************************************************************************************
* Audio Manager - Code
* 
* The code file the audio manager which is on every pickupable.
*
* Problems:
*	Possibly bad for memory loading instances of sounds for each attachment (could potentially load 7 lots of the same thing)
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "AudioManager.h"

// Sets default values for this component's properties
UAudioManager::UAudioManager()
{
	PrimaryComponentTick.bCanEverTick = false;
	player = CreateDefaultSubobject<UAudioComponent>("Audio Player");

	LoadSoundFiles();
}

// BAD FOR MEMORY DOING THIS FOR EVERY INSTANCE OF A PICKUPABLE??
void UAudioManager::LoadSoundFiles()
{
	// Attach
	sounds.Add(LoadObject<USoundWave>(0, TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_attach.MS_attach'")));
	// Ability
	sounds.Add(LoadObject<USoundWave>(0, TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_detach.MS_detach'")));
	// Eject
	sounds.Add(LoadObject<USoundWave>(0, TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_ejection.MS_ejection'")));

	// Collision
	sounds.Add(LoadObject<USoundWave>(0, TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_Impact.MS_Impact'")));
	if(sounds.IsValidIndex(3)) sounds[3]->bLooping = false;
}

void UAudioManager::PlaySound(const int index, const float startTime)
{
	if(!sounds.IsValidIndex(index))
	{
		GEngine->AddOnScreenDebugMessage(0, 5 ,FColor::Cyan, "bad sound index ~ audio manager");
		return;
	}

	// Only set the sound if the sound isn't already the target sound..
	if(player->Sound != sounds[index]) player->SetSound(sounds[index]);
	player->Play(startTime);
}