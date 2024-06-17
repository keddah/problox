// Created by Dean Atkinson-Walker 2024


#include "SpawnPoint.h"

// Sets default values
ASpawnPoint::ASpawnPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	defaultScene = CreateDefaultSubobject<USceneComponent>("Default Scene Root");
	
	previewer = CreateDefaultSubobject<USceneCaptureComponent2D>("Previewer");
	previewer->SetupAttachment(defaultScene);
}


// Called when the game starts or when spawned
void ASpawnPoint::BeginPlay()
{
	Super::BeginPlay();

	renderTarget = NewObject<UTextureRenderTarget2D>();

	if (!renderTarget) return;
	
	// Set the desired properties
	renderTarget->RenderTargetFormat = RTF_RGBA16f; // Use a format suitable for your needs
	renderTarget->bHDR_DEPRECATED = true;
	renderTarget->ClearColor = {0,0,0,1}; // Set the clear color
	renderTarget->InitAutoFormat(2048, 2048); // Initialize with specified width and height

	// Update the resource
	renderTarget->UpdateResourceImmediate(true);
	previewer->TextureTarget = renderTarget;
	LoadMaterial();
}

UTexture2D* ASpawnPoint::ConvertRenderTargetToTexture() const
{
	previewer->CaptureScene();

	if (!renderTarget) return nullptr;
	renderTarget->UpdateResourceImmediate(true);

	// Get Render Target Resource
	FTextureRenderTargetResource* renderTargetResource = renderTarget->GameThread_GetRenderTargetResource();

	// Create a new Texture2D
	UTexture2D* texture = UTexture2D::CreateTransient(renderTarget->SizeX, renderTarget->SizeY);
	texture->MipGenSettings = TMGS_NoMipmaps;
	texture->CompressionSettings = TC_VectorDisplacementmap;
	texture->SRGB = false;

	// Copy data from Render Target to Texture2D
	TArray<FColor> OutBMP;
	renderTargetResource->ReadPixels(OutBMP);

	// Update texture with new data
	void* TextureData = texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
	FMemory::Memcpy(TextureData, OutBMP.GetData(), OutBMP.Num() * sizeof(FColor));
	texture->GetPlatformData()->Mips[0].BulkData.Unlock();

	// Update Texture2D
	texture->UpdateResource();

	return texture;
}

void ASpawnPoint::LoadMaterial()
{
	// Load the material interface from the content folder
	UMaterialInterface* matInterface = LoadObject<UMaterialInterface>(0, TEXT("/Script/Engine.Material'/Game/UI/M_RenderTarget.M_RenderTarget'"));
	if(!matInterface)
	{
		GEngine->AddOnScreenDebugMessage(0, 5, FColor::Cyan, "Bad file path for Screen Capture Material...");
		return;
	}
	
	// Create dynamic material instance
	dynamicMat = UMaterialInstanceDynamic::Create(matInterface, this);
	
	// Set parameters or textures on the dynamic material instance if needed
	if (!dynamicMat) return;
	
	// Set texture parameter if needed
	dynamicMat->SetTextureParameterValue("LiveTexture", ConvertRenderTargetToTexture());
}