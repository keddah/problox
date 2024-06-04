// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Hoverer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AHoverer();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AHoverer_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AHoverer::StaticRegisterNativesAHoverer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoverer);
	UClass* Z_Construct_UClass_AHoverer_NoRegister()
	{
		return AHoverer::StaticClass();
	}
	struct Z_Construct_UClass_AHoverer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_topLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_topRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bottomLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bottomLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bottomRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bottomRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sideUp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sideUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sideDown_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sideDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sideLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sideLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sideRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sideRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hoverDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hoverDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_distanceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distanceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hoverStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hoverStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoverer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/Hoverer.h" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::NewProp_topLeft_MetaData[] = {
		{ "Category", "Hoverer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverer_Statics::NewProp_topLeft = { "topLeft", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverer, topLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::NewProp_topLeft_MetaData), Z_Construct_UClass_AHoverer_Statics::NewProp_topLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::NewProp_topRight_MetaData[] = {
		{ "Category", "Hoverer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverer_Statics::NewProp_topRight = { "topRight", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverer, topRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::NewProp_topRight_MetaData), Z_Construct_UClass_AHoverer_Statics::NewProp_topRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::NewProp_bottomLeft_MetaData[] = {
		{ "Category", "Hoverer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverer_Statics::NewProp_bottomLeft = { "bottomLeft", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverer, bottomLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::NewProp_bottomLeft_MetaData), Z_Construct_UClass_AHoverer_Statics::NewProp_bottomLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::NewProp_bottomRight_MetaData[] = {
		{ "Category", "Hoverer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverer_Statics::NewProp_bottomRight = { "bottomRight", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverer, bottomRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::NewProp_bottomRight_MetaData), Z_Construct_UClass_AHoverer_Statics::NewProp_bottomRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::NewProp_sideUp_MetaData[] = {
		{ "Category", "Hoverer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverer_Statics::NewProp_sideUp = { "sideUp", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverer, sideUp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::NewProp_sideUp_MetaData), Z_Construct_UClass_AHoverer_Statics::NewProp_sideUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::NewProp_sideDown_MetaData[] = {
		{ "Category", "Hoverer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverer_Statics::NewProp_sideDown = { "sideDown", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverer, sideDown), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::NewProp_sideDown_MetaData), Z_Construct_UClass_AHoverer_Statics::NewProp_sideDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::NewProp_sideLeft_MetaData[] = {
		{ "Category", "Hoverer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverer_Statics::NewProp_sideLeft = { "sideLeft", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverer, sideLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::NewProp_sideLeft_MetaData), Z_Construct_UClass_AHoverer_Statics::NewProp_sideLeft_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::NewProp_sideRight_MetaData[] = {
		{ "Category", "Hoverer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHoverer_Statics::NewProp_sideRight = { "sideRight", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverer, sideRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::NewProp_sideRight_MetaData), Z_Construct_UClass_AHoverer_Statics::NewProp_sideRight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::NewProp_hoverDistance_MetaData[] = {
		{ "Category", "Hoverer" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverer_Statics::NewProp_hoverDistance = { "hoverDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverer, hoverDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::NewProp_hoverDistance_MetaData), Z_Construct_UClass_AHoverer_Statics::NewProp_hoverDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::NewProp_distanceMultiplier_MetaData[] = {
		{ "Category", "Hoverer" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How strong the falloff for the hover strength is (relative to the distance to the floor)." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverer_Statics::NewProp_distanceMultiplier = { "distanceMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverer, distanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::NewProp_distanceMultiplier_MetaData), Z_Construct_UClass_AHoverer_Statics::NewProp_distanceMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverer_Statics::NewProp_hoverStrength_MetaData[] = {
		{ "Category", "Hoverer" },
		{ "ModuleRelativePath", "Pickupables/Hoverer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverer_Statics::NewProp_hoverStrength = { "hoverStrength", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverer, hoverStrength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::NewProp_hoverStrength_MetaData), Z_Construct_UClass_AHoverer_Statics::NewProp_hoverStrength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoverer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverer_Statics::NewProp_topLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverer_Statics::NewProp_topRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverer_Statics::NewProp_bottomLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverer_Statics::NewProp_bottomRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverer_Statics::NewProp_sideUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverer_Statics::NewProp_sideDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverer_Statics::NewProp_sideLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverer_Statics::NewProp_sideRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverer_Statics::NewProp_hoverDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverer_Statics::NewProp_distanceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverer_Statics::NewProp_hoverStrength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoverer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoverer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoverer_Statics::ClassParams = {
		&AHoverer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHoverer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoverer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHoverer()
	{
		if (!Z_Registration_Info_UClass_AHoverer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoverer.OuterSingleton, Z_Construct_UClass_AHoverer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHoverer.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AHoverer>()
	{
		return AHoverer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoverer);
	AHoverer::~AHoverer() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Hoverer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Hoverer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHoverer, AHoverer::StaticClass, TEXT("AHoverer"), &Z_Registration_Info_UClass_AHoverer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoverer), 3082739503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Hoverer_h_4222263975(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Hoverer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Hoverer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
