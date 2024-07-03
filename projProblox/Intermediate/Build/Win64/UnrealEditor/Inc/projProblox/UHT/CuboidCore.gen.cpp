// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Cores/CuboidCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCuboidCore() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACuboidCore();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACuboidCore_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void ACuboidCore::StaticRegisterNativesACuboidCore()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACuboidCore);
	UClass* Z_Construct_UClass_ACuboidCore_NoRegister()
	{
		return ACuboidCore::StaticClass();
	}
	struct Z_Construct_UClass_ACuboidCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherIndicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherIndicator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACuboidCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACubeCore,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidCore_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboidCore_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pickupables/Cores/CuboidCore.h" },
		{ "ModuleRelativePath", "Pickupables/Cores/CuboidCore.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuboidCore_Statics::NewProp_otherIndicator_MetaData[] = {
		{ "Category", "CuboidCore" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/CuboidCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACuboidCore_Statics::NewProp_otherIndicator = { "otherIndicator", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACuboidCore, otherIndicator), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidCore_Statics::NewProp_otherIndicator_MetaData), Z_Construct_UClass_ACuboidCore_Statics::NewProp_otherIndicator_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACuboidCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuboidCore_Statics::NewProp_otherIndicator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACuboidCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACuboidCore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACuboidCore_Statics::ClassParams = {
		&ACuboidCore::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACuboidCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidCore_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidCore_Statics::Class_MetaDataParams), Z_Construct_UClass_ACuboidCore_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACuboidCore_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACuboidCore()
	{
		if (!Z_Registration_Info_UClass_ACuboidCore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACuboidCore.OuterSingleton, Z_Construct_UClass_ACuboidCore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACuboidCore.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ACuboidCore>()
	{
		return ACuboidCore::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACuboidCore);
	ACuboidCore::~ACuboidCore() {}
	struct Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Cores_CuboidCore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Cores_CuboidCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACuboidCore, ACuboidCore::StaticClass, TEXT("ACuboidCore"), &Z_Registration_Info_UClass_ACuboidCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACuboidCore), 955096449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Cores_CuboidCore_h_1095597842(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Cores_CuboidCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Cores_CuboidCore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
