// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/SpawnSaves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnSaves() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	PROJPROBLOX_API UClass* Z_Construct_UClass_USpawnSaves();
	PROJPROBLOX_API UClass* Z_Construct_UClass_USpawnSaves_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void USpawnSaves::StaticRegisterNativesUSpawnSaves()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnSaves);
	UClass* Z_Construct_UClass_USpawnSaves_NoRegister()
	{
		return USpawnSaves::StaticClass();
	}
	struct Z_Construct_UClass_USpawnSaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnSaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnSaves_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnSaves_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SpawnSaves.h" },
		{ "ModuleRelativePath", "SpawnSaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnSaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnSaves>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnSaves_Statics::ClassParams = {
		&USpawnSaves::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnSaves_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnSaves_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpawnSaves()
	{
		if (!Z_Registration_Info_UClass_USpawnSaves.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnSaves.OuterSingleton, Z_Construct_UClass_USpawnSaves_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnSaves.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<USpawnSaves>()
	{
		return USpawnSaves::StaticClass();
	}
	USpawnSaves::USpawnSaves(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnSaves);
	USpawnSaves::~USpawnSaves() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnSaves_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnSaves_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnSaves, USpawnSaves::StaticClass, TEXT("USpawnSaves"), &Z_Registration_Info_UClass_USpawnSaves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnSaves), 1514105400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnSaves_h_2182064092(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnSaves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnSaves_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
