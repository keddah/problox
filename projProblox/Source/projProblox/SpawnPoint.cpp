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
#include "Pickupables/Cores/Connectors/CubeConnector.h"

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
	Super::NotifyActorBeginOverlap(OtherActor);

	// Don't do anything if the point has already been unlocked
	if(unlocked) return;
	
	if(OtherActor->IsA<ACubeConnector>()) return;
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
	// // Camera settings
	ppSettings.bOverride_CameraShutterSpeed = true;
	ppSettings.CameraShutterSpeed = 1/30;  
	ppSettings.bOverride_CameraISO = true;
	ppSettings.CameraISO = 400;  
	
	// Auto exposure settings
	ppSettings.bOverride_AutoExposureMethod = true;
	ppSettings.AutoExposureMethod = EAutoExposureMethod::AEM_Histogram;
	ppSettings.bOverride_AutoExposureBias = true;
	ppSettings.AutoExposureBias = 2; 
	ppSettings.bOverride_AutoExposureMaxBrightness = true; 
	ppSettings.bOverride_AutoExposureMinBrightness = true; 
	ppSettings.AutoExposureMaxBrightness = 10; 
	ppSettings.AutoExposureMinBrightness = 5; 
	//
	// // Bloom settings
	// ppSettings.bOverride_BloomIntensity = true;
	// ppSettings.BloomIntensity = 0.3f;
	// ppSettings.bOverride_BloomThreshold = true;
	// ppSettings.BloomThreshold = -1.0f; 
	// ppSettings.bOverride_BloomSizeScale = true;
	// ppSettings.BloomSizeScale = 1.0f; 
	//
	// // Lens flare settings
	// ppSettings.bOverride_LensFlareIntensity = true;
	// ppSettings.LensFlareIntensity = 0.2f;  
	//
	// // Color grading settings
	// ppSettings.bOverride_FilmToe = true;
	// ppSettings.FilmToe = .1f;  
	// ppSettings.bOverride_FilmShoulder = true;
	// ppSettings.FilmShoulder = 0.9f;  
	// ppSettings.bOverride_FilmWhiteClip = true;
	// ppSettings.FilmWhiteClip = 1.0f;
	// ppSettings.bOverride_FilmBlackClip = true;
	// ppSettings.FilmBlackClip = 0.0f; 
	//
	// // Depth of field settings
	// ppSettings.bOverride_DepthOfFieldFstop = true;
	// ppSettings.DepthOfFieldFstop = 5.6f; 
	//
	// // Ambient occlusion settings
	// ppSettings.bOverride_AmbientOcclusionIntensity = true;
	// ppSettings.AmbientOcclusionIntensity = 0.9f;  
	// ppSettings.bOverride_AmbientOcclusionRadius = true;
	// ppSettings.AmbientOcclusionRadius = 250.0f; 
	//
	// // Motion blur settings
	// ppSettings.bOverride_MotionBlurAmount = true;
	// ppSettings.MotionBlurAmount = 0.3f;  
	// ppSettings.bOverride_MotionBlurMax = true;
	// ppSettings.MotionBlurMax = 0.3f; 
	//
	// // Screen space reflection settings
	// ppSettings.bOverride_ScreenSpaceReflectionIntensity = true;
	// ppSettings.ScreenSpaceReflectionIntensity = 100.0f; 
	// ppSettings.bOverride_ScreenSpaceReflectionQuality = true;
	// ppSettings.ScreenSpaceReflectionQuality = 100.0f;  
	// ppSettings.bOverride_ScreenSpaceReflectionMaxRoughness = true;
	// ppSettings.ScreenSpaceReflectionMaxRoughness = 0.5f;

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
	ppSettings.bOverride_SceneColorTint = true;
	ppSettings.SceneColorTint = FLinearColor(1.0f, 0.9f, 0.8f, 1.0f); // Warm color tint

	// Bloom
	ppSettings.bOverride_BloomIntensity = true;
	ppSettings.BloomIntensity = 0.4f; // Moderate bloom effect

	// Tone Mapping
	ppSettings.bOverride_ToneCurveAmount = true;
	ppSettings.ToneCurveAmount = 0.6f;

	// "Vibrant"
	// Color Grading
	// ppSettings.bOverride_ColorSaturation = true;
	// ppSettings.ColorSaturation = FVector4(1.2f, 1.2f, 1.2f, 1.0f); // Increase saturation for vibrancy
	//
	// ppSettings.bOverride_ColorContrast = true;
	// ppSettings.ColorContrast = FVector4(1.2f, 1.2f, 1.2f, 1.0f); // Increase contrast for depth
	//
	// ppSettings.bOverride_ColorGamma = true;
	// ppSettings.ColorGamma = FVector4(1.1f, 1.1f, 1.1f, 1.0f); // Adjust gamma slightly
	//
	// ppSettings.bOverride_ColorGain = true;
	// ppSettings.ColorGain = FVector4(1.0f, 1.0f, 1.0f, 1.0f);
	//
	// // Sharpness
	// ppSettings.bOverride_Sharpen = true;
	// ppSettings.Sharpen = 1.5f; // Increase the sharpness
	//
	// // Exposure
	// ppSettings.bOverride_AutoExposureMethod = true;
	// ppSettings.AutoExposureMethod = EAutoExposureMethod::AEM_Histogram;
 //            
	// ppSettings.bOverride_AutoExposureBias = true;
	// ppSettings.AutoExposureBias = 0.5f; // Adjust exposure to brighten the scene
	//
	// // Tone Mapping
	// ppSettings.bOverride_ToneCurveAmount = true;
	// ppSettings.ToneCurveAmount = 0.8f; // Apply tone mapping curve
	//
	// // Vignette (optional, for focus effect)
	// ppSettings.bOverride_VignetteIntensity = true;
	// ppSettings.VignetteIntensity = 0.2f; // Slight vignette for focus
	//
	// // Bloom (optional, for added effect)
	// ppSettings.bOverride_BloomIntensity = true;
	// ppSettings.BloomIntensity = 0.7f;
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

