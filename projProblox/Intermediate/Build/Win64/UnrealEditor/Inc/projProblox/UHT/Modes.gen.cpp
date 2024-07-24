// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/GameModes/Modes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Build();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Build_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Story();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Story_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AMode_Story::StaticRegisterNativesAMode_Story()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMode_Story);
	UClass* Z_Construct_UClass_AMode_Story_NoRegister()
	{
		return AMode_Story::StaticClass();
	}
	struct Z_Construct_UClass_AMode_Story_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMode_Story_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Story_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMode_Story_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/Modes.h" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMode_Story_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMode_Story>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMode_Story_Statics::ClassParams = {
		&AMode_Story::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Story_Statics::Class_MetaDataParams), Z_Construct_UClass_AMode_Story_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMode_Story()
	{
		if (!Z_Registration_Info_UClass_AMode_Story.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMode_Story.OuterSingleton, Z_Construct_UClass_AMode_Story_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMode_Story.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AMode_Story>()
	{
		return AMode_Story::StaticClass();
	}
	AMode_Story::AMode_Story(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMode_Story);
	AMode_Story::~AMode_Story() {}
	void AMode_Build::StaticRegisterNativesAMode_Build()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMode_Build);
	UClass* Z_Construct_UClass_AMode_Build_NoRegister()
	{
		return AMode_Build::StaticClass();
	}
	struct Z_Construct_UClass_AMode_Build_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMode_Build_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Build_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMode_Build_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/Modes.h" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMode_Build_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMode_Build>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMode_Build_Statics::ClassParams = {
		&AMode_Build::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Build_Statics::Class_MetaDataParams), Z_Construct_UClass_AMode_Build_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMode_Build()
	{
		if (!Z_Registration_Info_UClass_AMode_Build.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMode_Build.OuterSingleton, Z_Construct_UClass_AMode_Build_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMode_Build.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AMode_Build>()
	{
		return AMode_Build::StaticClass();
	}
	AMode_Build::AMode_Build(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMode_Build);
	AMode_Build::~AMode_Build() {}
	struct Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMode_Story, AMode_Story::StaticClass, TEXT("AMode_Story"), &Z_Registration_Info_UClass_AMode_Story, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMode_Story), 2900308758U) },
		{ Z_Construct_UClass_AMode_Build, AMode_Build::StaticClass, TEXT("AMode_Build"), &Z_Registration_Info_UClass_AMode_Build, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMode_Build), 2849129638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_2683888969(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
