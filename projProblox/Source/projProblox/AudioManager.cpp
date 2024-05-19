// Created by Dean Atkinson-Walker 2024


#include "AudioManager.h"

// Sets default values for this component's properties
UAudioManager::UAudioManager()
{
	PrimaryComponentTick.bCanEverTick = false;
	player = CreateDefaultSubobject<UAudioComponent>("Audio Player");

	LoadSoundFiles();
}

void UAudioManager::LoadSoundFiles()
{
	sounds.Add(LoadObject<USoundWave>(0, TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_connection1.MS_connection1'")));
	sounds.Add(LoadObject<USoundWave>(0, TEXT("/Script/MetasoundEngine.MetaSoundSource'/Game/Audio/MetaSounds/MS_ejection.MS_ejection'")));
}

void UAudioManager::PlayConnect(const float startTime)
{
	if(sounds.IsValidIndex(0)) player->SetSound(sounds[0]);
	player->Play(startTime);
}

void UAudioManager::PlayDetachAll(const float startTime)
{
	if(sounds.IsValidIndex(1)) player->SetSound(sounds[1]);
	player->Play(startTime);
}

