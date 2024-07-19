/**************************************************************************************************************
* Spawn Point - Header
* 
* The header file for the player and core spawn point. Also defines the levels enum.
*
* Created by Dean Atkinson-Walker 2024
***************************************************************************************************************/


#include "SpawnPoint.h"

#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Pickupables/Cores/CubeCore.h"

// Sets default values
ASpawnPoint::ASpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	defaultScene = CreateDefaultSubobject<USceneComponent>("Default Scene Root");
	unlockTrigger = CreateDefaultSubobject<UBoxComponent>("Unlock Trigger");
	unlockTrigger->SetupAttachment(defaultScene);

	direction = CreateDefaultSubobject<UArrowComponent>("Direction Indicator");
	direction->SetupAttachment(defaultScene);
}


void ASpawnPoint::NotifyActorBeginOverlap(AActor* OtherActor)
{
	if(OtherActor) return;
	
	Super::NotifyActorBeginOverlap(OtherActor);

	// Don't do anything if the point has already been unlocked
	if(unlocked) return;
	
	if(!Cast<ACubeCore>(OtherActor)) return;

	UnlockPoint();
}

UTexture* ASpawnPoint::CaptureScreenshot()
{
    // Create a SceneCaptureComponent2D
    USceneCaptureComponent2D* captureComp = NewObject<USceneCaptureComponent2D>(this);
    captureComp->SetupAttachment(RootComponent);
    captureComp->RegisterComponent();

    // Create a Render Target
    UTextureRenderTarget2D* renderTarget = NewObject<UTextureRenderTarget2D>();
    renderTarget->InitAutoFormat(600, 600);
    renderTarget->UpdateResourceImmediate(true);

    // Assign the Render Target to the SceneCaptureComponent
    captureComp->TextureTarget = renderTarget;
    captureComp->CaptureSource = SCS_FinalColorLDR;
    captureComp->bCaptureEveryFrame = false;
    captureComp->bCaptureOnMovement = false;
    captureComp->ShowFlags.SetDynamicShadows(true);
    captureComp->ShowFlags.SetAntiAliasing(true);

    //////////////////////////// PP ////////////////////////////
	FPostProcessSettings& ppSettings = captureComp->PostProcessSettings;

	// "Brighter"
	// Camera settings
	ppSettings.bOverride_CameraShutterSpeed = true;
	ppSettings.CameraShutterSpeed = 2;  
	ppSettings.bOverride_CameraISO = true;
	ppSettings.CameraISO = 1400;  
	
	// Auto exposure settings
	ppSettings.bOverride_AutoExposureMethod = true;
	ppSettings.AutoExposureMethod = AEM_Histogram;
	ppSettings.bOverride_AutoExposureBias = true;
	ppSettings.AutoExposureBias = 10; 
	ppSettings.bOverride_AutoExposureMaxBrightness = true; 
	ppSettings.bOverride_AutoExposureMinBrightness = true;
	ppSettings.AutoExposureMaxBrightness = 20; 
	ppSettings.AutoExposureMinBrightness = 2;

	ppSettings.bOverride_LocalExposureDetailStrength = true;
	ppSettings.LocalExposureDetailStrength = 2;
	
	ppSettings.bOverride_ColorGammaShadows = true;
	ppSettings.ColorGammaShadows = FVector4{2,2,2,1};
	ppSettings.bOverride_IndirectLightingIntensity = true;
	ppSettings.IndirectLightingIntensity = level == ELevel::Bathroom? 1000 : 160;
	
	// Motion blur settings
	ppSettings.bOverride_MotionBlurAmount = true;
	ppSettings.MotionBlurAmount = 0.3f;  
	ppSettings.bOverride_MotionBlurMax = true;
	ppSettings.MotionBlurMax = 0.3f; 

	// "Polaroid"
	// Color Grading
	ppSettings.bOverride_ColorSaturation = true;
	ppSettings.ColorSaturation = FVector4(0.8f, 0.7f, 0.7f, 1.0f); // Slight desaturation for vintage look

	ppSettings.bOverride_ColorContrast = true;
	ppSettings.ColorContrast = FVector4(1.3f, 1.3f, 1.3f, 1.0f); // Increase contrast

	ppSettings.bOverride_ColorGamma = true;
	ppSettings.ColorGamma = FVector4(0.9f, 0.9f, 0.9f, 1.0f); // Slightly reduce gamma

	ppSettings.bOverride_ColorGain = true;
	ppSettings.ColorGain = FVector4(0.9f, 0.95f, 1.0f, 1.0f); // Slight blue-green tint for vintage effect

	// Vignette
	ppSettings.bOverride_VignetteIntensity = true;
	ppSettings.VignetteIntensity = 0.5f; // Strong vignette for Polaroid focus effect

	// Film Grain
	ppSettings.bOverride_FilmGrainIntensity = true;
	ppSettings.FilmGrainIntensity = 0.3f; // Add some film grain

	// Color Grading: Tint
	ppSettings.bOverride_WhiteTemp = true;
	ppSettings.WhiteTemp = 5500;
	ppSettings.bOverride_FilmToe = true;
	ppSettings.FilmToe = .2f;
	
	// Bloom
	ppSettings.bOverride_BloomIntensity = true;
	ppSettings.BloomIntensity = 0.4f; // Moderate bloom effect

	// Tone Mapping
	ppSettings.bOverride_ToneCurveAmount = true;
	ppSettings.ToneCurveAmount = 0.6f;
	//////////////////////////////////////////////////////////////////////


	captureComp->CaptureScene();

    // Read the pixels from the Render Target
    TArray<FColor> outBMP;
    FRenderTarget* targetResource = renderTarget->GameThread_GetRenderTargetResource();
    targetResource->ReadPixels(outBMP);

    // Create a new Texture2D
    UTexture2D* screenshot = UTexture2D::CreateTransient(renderTarget->SizeX, renderTarget->SizeY, PF_B8G8R8A8);
    if (!screenshot) return nullptr;

    // Lock the texture for editing
    FTexture2DMipMap& Mip = screenshot->GetPlatformData()->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
    FMemory::Memcpy(Data, outBMP.GetData(), outBMP.Num() * sizeof(FColor));

    // Unlock the texture
    Mip.BulkData.Unlock();
    screenshot->UpdateResource();

    // Cleanup
    captureComp->DestroyComponent();
    renderTarget->ConditionalBeginDestroy();

    return screenshot;
}

