// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Grappler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappler() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AGrappler();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AGrappler_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AGrappler::StaticRegisterNativesAGrappler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrappler);
	UClass* Z_Construct_UClass_AGrappler_NoRegister()
	{
		return AGrappler::StaticClass();
	}
	struct Z_Construct_UClass_AGrappler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grappleSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grappleSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grappleLine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grappleLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grappleHeadClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_grappleHeadClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrappler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappler_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Grappler.h" },
		{ "ModuleRelativePath", "Grappler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappler_Statics::NewProp_grappleSpawn_MetaData[] = {
		{ "Category", "Grappler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grappler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappler_Statics::NewProp_grappleSpawn = { "grappleSpawn", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappler, grappleSpawn), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::NewProp_grappleSpawn_MetaData), Z_Construct_UClass_AGrappler_Statics::NewProp_grappleSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappler_Statics::NewProp_grappleLine_MetaData[] = {
		{ "Category", "Grappler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grappler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappler_Statics::NewProp_grappleLine = { "grappleLine", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappler, grappleLine), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::NewProp_grappleLine_MetaData), Z_Construct_UClass_AGrappler_Statics::NewProp_grappleLine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappler_Statics::NewProp_grappleHeadClass_MetaData[] = {
		{ "Category", "Grappler" },
		{ "ModuleRelativePath", "Grappler.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGrappler_Statics::NewProp_grappleHeadClass = { "grappleHeadClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappler, grappleHeadClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::NewProp_grappleHeadClass_MetaData), Z_Construct_UClass_AGrappler_Statics::NewProp_grappleHeadClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrappler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappler_Statics::NewProp_grappleSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappler_Statics::NewProp_grappleLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappler_Statics::NewProp_grappleHeadClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrappler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrappler_Statics::ClassParams = {
		&AGrappler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrappler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrappler_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGrappler()
	{
		if (!Z_Registration_Info_UClass_AGrappler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrappler.OuterSingleton, Z_Construct_UClass_AGrappler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrappler.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AGrappler>()
	{
		return AGrappler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappler);
	AGrappler::~AGrappler() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Grappler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Grappler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrappler, AGrappler::StaticClass, TEXT("AGrappler"), &Z_Registration_Info_UClass_AGrappler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrappler), 326794263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Grappler_h_3861081701(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Grappler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Grappler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
