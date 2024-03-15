// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/CubeConnector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeConnector() {}
// Cross Module References
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeConnector();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeConnector_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void ACubeConnector::StaticRegisterNativesACubeConnector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACubeConnector);
	UClass* Z_Construct_UClass_ACubeConnector_NoRegister()
	{
		return ACubeConnector::StaticClass();
	}
	struct Z_Construct_UClass_ACubeConnector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeConnector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACubeCore,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeConnector_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CubeConnector.h" },
		{ "ModuleRelativePath", "CubeConnector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeConnector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeConnector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACubeConnector_Statics::ClassParams = {
		&ACubeConnector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::Class_MetaDataParams), Z_Construct_UClass_ACubeConnector_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACubeConnector()
	{
		if (!Z_Registration_Info_UClass_ACubeConnector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACubeConnector.OuterSingleton, Z_Construct_UClass_ACubeConnector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACubeConnector.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ACubeConnector>()
	{
		return ACubeConnector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeConnector);
	ACubeConnector::~ACubeConnector() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeConnector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeConnector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACubeConnector, ACubeConnector::StaticClass, TEXT("ACubeConnector"), &Z_Registration_Info_UClass_ACubeConnector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACubeConnector), 4224726740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeConnector_h_4065590468(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeConnector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeConnector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
