// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/AudioComponent.h"
#include "AudioManager.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PROJPROBLOX_API UAudioManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAudioManager();

private:
	UAudioComponent* player;
	
	UPROPERTY(EditAnywhere)
	TArray<USoundWave*> sounds;

	void PlaySound(int index, float startTime = 0);
	void StopSound(const float delay = 0) const { player->StopDelayed(delay); }
	void LoadSoundFiles();
	
public:
	void Attach(UPrimitiveComponent* parent) const { player->SetupAttachment(parent); }

	// Would mean that the sound effect is the last element (since the universal sounds are all created in the constructor).
	// Call in the pickupable's constructor...
	void AddAbilitySFX(const TCHAR* reference)
	{
		sounds.Add(LoadObject<USoundWave>(0,reference));
	}

	// This override is to be used by the core so that the collection sound can be added...
	void AddAbilitySFX(const TCHAR* sfxRef, const TCHAR* collectionRef)
	{
		// Add the collection first so that it's the second last element...
		sounds.Add(LoadObject<USoundWave>(0,collectionRef));
		sounds.Add(LoadObject<USoundWave>(0,sfxRef));
	}
	
	bool IsPlaying() const { return player->IsPlaying(); }

	void PlayAttach(float startTime = 0) { PlaySound(0, startTime); }
	void PlayDetach(float startTime = 0) { PlaySound(1, startTime); }
	void PlayDetachAll(const float startTime = 0) { PlaySound(2, startTime); }

	UFUNCTION(BlueprintCallable)
	void PlayAbility() { PlaySound(sounds.Num() - 1); }
	UFUNCTION(BlueprintCallable)
	void StopAbility()
	{
		// If the ability sound is currently the sound of the player, stop.
		if(player->Sound == sounds.Last()) StopSound();
	}

	// These to be called when setting parameters in meta sounds
	void SetFloatParam(const FName& key, const float value) const { player->SetFloatParameter(key, value); }
	void SetIntParam(const FName& key, const int value) const { player->SetIntParameter(key, value); }
	void SetBoolParam(const FName& key, const bool value) const { player->SetBoolParameter(key, value); }
	void RunAudioFunction(const FName& key) const { player->SetTriggerParameter(key); }

	void SetIs2DSound(const bool ui) const { player->SetUISound(ui); }
};
