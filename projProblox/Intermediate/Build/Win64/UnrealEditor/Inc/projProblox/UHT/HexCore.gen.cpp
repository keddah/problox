// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Cores/HexCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexCore() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AHexCore();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AHexCore_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AHexCore::StaticRegisterNativesAHexCore()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHexCore);
	UClass* Z_Construct_UClass_AHexCore_NoRegister()
	{
		return AHexCore::StaticClass();
	}
	struct Z_Construct_UClass_AHexCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_topper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_topper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHexCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACubeCore,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHexCore_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexCore_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pickupables/Cores/HexCore.h" },
		{ "ModuleRelativePath", "Pickupables/Cores/HexCore.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHexCore_Statics::NewProp_topper_MetaData[] = {
		{ "Category", "HexCore" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/HexCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexCore_Statics::NewProp_topper = { "topper", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexCore, topper), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHexCore_Statics::NewProp_topper_MetaData), Z_Construct_UClass_AHexCore_Statics::NewProp_topper_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHexCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexCore_Statics::NewProp_topper,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHexCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHexCore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHexCore_Statics::ClassParams = {
		&AHexCore::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHexCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHexCore_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHexCore_Statics::Class_MetaDataParams), Z_Construct_UClass_AHexCore_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHexCore_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHexCore()
	{
		if (!Z_Registration_Info_UClass_AHexCore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHexCore.OuterSingleton, Z_Construct_UClass_AHexCore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHexCore.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AHexCore>()
	{
		return AHexCore::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHexCore);
	AHexCore::~AHexCore() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_HexCore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_HexCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHexCore, AHexCore::StaticClass, TEXT("AHexCore"), &Z_Registration_Info_UClass_AHexCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHexCore), 701009603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_HexCore_h_2339134056(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_HexCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_HexCore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
