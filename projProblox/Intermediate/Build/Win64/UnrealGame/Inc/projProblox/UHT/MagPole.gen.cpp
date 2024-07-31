// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Magnet/MagPole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagPole() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMagPole();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMagPole_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AMagPole::StaticRegisterNativesAMagPole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagPole);
	UClass* Z_Construct_UClass_AMagPole_NoRegister()
	{
		return AMagPole::StaticClass();
	}
	struct Z_Construct_UClass_AMagPole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positive_MetaData[];
#endif
		static void NewProp_positive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_positive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attractionForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attractionForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagPole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagPole_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagPole_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/Magnet/MagPole.h" },
		{ "ModuleRelativePath", "Pickupables/Magnet/MagPole.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagPole_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "MagPole" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Magnet/MagPole.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagPole_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagPole, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagPole_Statics::NewProp_mesh_MetaData), Z_Construct_UClass_AMagPole_Statics::NewProp_mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagPole_Statics::NewProp_positive_MetaData[] = {
		{ "Category", "MagPole" },
		{ "ModuleRelativePath", "Pickupables/Magnet/MagPole.h" },
	};
#endif
	void Z_Construct_UClass_AMagPole_Statics::NewProp_positive_SetBit(void* Obj)
	{
		((AMagPole*)Obj)->positive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagPole_Statics::NewProp_positive = { "positive", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMagPole), &Z_Construct_UClass_AMagPole_Statics::NewProp_positive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagPole_Statics::NewProp_positive_MetaData), Z_Construct_UClass_AMagPole_Statics::NewProp_positive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagPole_Statics::NewProp_attractionForce_MetaData[] = {
		{ "Category", "Ability" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Pickupables/Magnet/MagPole.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Putting this value too high will cause the magnets that are attracted to it to get destroyed..." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMagPole_Statics::NewProp_attractionForce = { "attractionForce", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagPole, attractionForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagPole_Statics::NewProp_attractionForce_MetaData), Z_Construct_UClass_AMagPole_Statics::NewProp_attractionForce_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagPole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagPole_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagPole_Statics::NewProp_positive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagPole_Statics::NewProp_attractionForce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagPole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagPole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagPole_Statics::ClassParams = {
		&AMagPole::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMagPole_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagPole_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagPole_Statics::Class_MetaDataParams), Z_Construct_UClass_AMagPole_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagPole_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMagPole()
	{
		if (!Z_Registration_Info_UClass_AMagPole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagPole.OuterSingleton, Z_Construct_UClass_AMagPole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagPole.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AMagPole>()
	{
		return AMagPole::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagPole);
	AMagPole::~AMagPole() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Magnet_MagPole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Magnet_MagPole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagPole, AMagPole::StaticClass, TEXT("AMagPole"), &Z_Registration_Info_UClass_AMagPole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagPole), 3912798349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Magnet_MagPole_h_4044268455(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Magnet_MagPole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Magnet_MagPole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
