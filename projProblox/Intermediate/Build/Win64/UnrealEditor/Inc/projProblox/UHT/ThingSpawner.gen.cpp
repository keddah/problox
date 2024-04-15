// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/ThingSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThingSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AThing_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AThingSpawner();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AThingSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AThingSpawner::StaticRegisterNativesAThingSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThingSpawner);
	UClass* Z_Construct_UClass_AThingSpawner_NoRegister()
	{
		return AThingSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AThingSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thingClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_thingClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnAmounts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_spawnAmounts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThingSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThingSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThingSpawner.h" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingClass_MetaData[] = {
		{ "Category", "ThingSpawner" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingClass = { "thingClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThingSpawner, thingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AThing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingClass_MetaData), Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThingSpawner_Statics::NewProp_spawnAmounts_MetaData[] = {
		{ "Category", "ThingSpawner" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index corresponds with the index of the spawn locations..." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThingSpawner_Statics::NewProp_spawnAmounts = { "spawnAmounts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThingSpawner, spawnAmounts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::NewProp_spawnAmounts_MetaData), Z_Construct_UClass_AThingSpawner_Statics::NewProp_spawnAmounts_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThingSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThingSpawner_Statics::NewProp_spawnAmounts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThingSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThingSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThingSpawner_Statics::ClassParams = {
		&AThingSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThingSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AThingSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AThingSpawner()
	{
		if (!Z_Registration_Info_UClass_AThingSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThingSpawner.OuterSingleton, Z_Construct_UClass_AThingSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThingSpawner.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AThingSpawner>()
	{
		return AThingSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThingSpawner);
	AThingSpawner::~AThingSpawner() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThingSpawner, AThingSpawner::StaticClass, TEXT("AThingSpawner"), &Z_Registration_Info_UClass_AThingSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThingSpawner), 3022071091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_1716086497(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
