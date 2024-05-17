// Created by Dean Atkinson-Walker 2024

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/AudioComponent.h"
#include "AudioManager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJPROBLOX_API UAudioManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAudioManager();

private:
	UAudioComponent* player;
	
	UPROPERTY(VisibleAnywhere)
	TArray<USoundWave*> sounds;


	void LoadSoundFiles();
	
public:	
	void PlayConnect();
		
};
