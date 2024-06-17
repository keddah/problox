// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/SpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnPoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ASpawnPoint();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ASpawnPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void ASpawnPoint::StaticRegisterNativesASpawnPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnPoint);
	UClass* Z_Construct_UClass_ASpawnPoint_NoRegister()
	{
		return ASpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_previewer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_previewer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_defaultScene;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnPoint.h" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::NewProp_previewer_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_previewer = { "previewer", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnPoint, previewer), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_previewer_MetaData), Z_Construct_UClass_ASpawnPoint_Statics::NewProp_previewer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::NewProp_defaultScene_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_defaultScene = { "defaultScene", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnPoint, defaultScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_defaultScene_MetaData), Z_Construct_UClass_ASpawnPoint_Statics::NewProp_defaultScene_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_previewer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_defaultScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnPoint_Statics::ClassParams = {
		&ASpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpawnPoint()
	{
		if (!Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton, Z_Construct_UClass_ASpawnPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ASpawnPoint>()
	{
		return ASpawnPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnPoint);
	ASpawnPoint::~ASpawnPoint() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnPoint, ASpawnPoint::StaticClass, TEXT("ASpawnPoint"), &Z_Registration_Info_UClass_ASpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnPoint), 739951948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_470084779(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
