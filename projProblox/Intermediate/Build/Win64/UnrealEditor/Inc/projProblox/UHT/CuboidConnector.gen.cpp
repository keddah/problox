// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Cores/Connectors/CuboidConnector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCuboidConnector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeConnector();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACuboidConnector();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACuboidConnector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void ACuboidConnector::StaticRegisterNativesACuboidConnector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACuboidConnector);
	UClass* Z_Construct_UClass_ACuboidConnector_NoRegister()
	{
		return ACuboidConnector::StaticClass();
	}
	struct Z_Construct_UClass_ACuboidConnector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftArrow2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leftArrow2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightArrow2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rightArrow2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_upArrow2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_upArrow2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_downArrow2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_downArrow2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACuboidConnector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACubeConnector,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidConnector_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboidConnector_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pickupables/Cores/Connectors/CuboidConnector.h" },
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CuboidConnector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboidConnector_Statics::NewProp_leftArrow2_MetaData[] = {
		{ "Category", "CuboidConnector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CuboidConnector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACuboidConnector_Statics::NewProp_leftArrow2 = { "leftArrow2", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACuboidConnector, leftArrow2), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidConnector_Statics::NewProp_leftArrow2_MetaData), Z_Construct_UClass_ACuboidConnector_Statics::NewProp_leftArrow2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboidConnector_Statics::NewProp_rightArrow2_MetaData[] = {
		{ "Category", "CuboidConnector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CuboidConnector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACuboidConnector_Statics::NewProp_rightArrow2 = { "rightArrow2", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACuboidConnector, rightArrow2), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidConnector_Statics::NewProp_rightArrow2_MetaData), Z_Construct_UClass_ACuboidConnector_Statics::NewProp_rightArrow2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboidConnector_Statics::NewProp_upArrow2_MetaData[] = {
		{ "Category", "CuboidConnector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CuboidConnector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACuboidConnector_Statics::NewProp_upArrow2 = { "upArrow2", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACuboidConnector, upArrow2), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidConnector_Statics::NewProp_upArrow2_MetaData), Z_Construct_UClass_ACuboidConnector_Statics::NewProp_upArrow2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboidConnector_Statics::NewProp_downArrow2_MetaData[] = {
		{ "Category", "CuboidConnector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CuboidConnector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACuboidConnector_Statics::NewProp_downArrow2 = { "downArrow2", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACuboidConnector, downArrow2), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidConnector_Statics::NewProp_downArrow2_MetaData), Z_Construct_UClass_ACuboidConnector_Statics::NewProp_downArrow2_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACuboidConnector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuboidConnector_Statics::NewProp_leftArrow2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuboidConnector_Statics::NewProp_rightArrow2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuboidConnector_Statics::NewProp_upArrow2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuboidConnector_Statics::NewProp_downArrow2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACuboidConnector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACuboidConnector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACuboidConnector_Statics::ClassParams = {
		&ACuboidConnector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACuboidConnector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidConnector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidConnector_Statics::Class_MetaDataParams), Z_Construct_UClass_ACuboidConnector_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidConnector_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACuboidConnector()
	{
		if (!Z_Registration_Info_UClass_ACuboidConnector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACuboidConnector.OuterSingleton, Z_Construct_UClass_ACuboidConnector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACuboidConnector.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ACuboidConnector>()
	{
		return ACuboidConnector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACuboidConnector);
	ACuboidConnector::~ACuboidConnector() {}
	struct Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_Pickupables_Cores_Connectors_CuboidConnector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_Pickupables_Cores_Connectors_CuboidConnector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACuboidConnector, ACuboidConnector::StaticClass, TEXT("ACuboidConnector"), &Z_Registration_Info_UClass_ACuboidConnector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACuboidConnector), 4060114694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_Pickupables_Cores_Connectors_CuboidConnector_h_6762117(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_Pickupables_Cores_Connectors_CuboidConnector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_Pickupables_Cores_Connectors_CuboidConnector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
