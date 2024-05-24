// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Cores/SocketInfo/CuboidSocketInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCuboidSocketInfo() {}
// Cross Module References
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCubeSocketInfo();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCuboidSocketInfo();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCuboidSocketInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void UCuboidSocketInfo::StaticRegisterNativesUCuboidSocketInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCuboidSocketInfo);
	UClass* Z_Construct_UClass_UCuboidSocketInfo_NoRegister()
	{
		return UCuboidSocketInfo::StaticClass();
	}
	struct Z_Construct_UClass_UCuboidSocketInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCuboidSocketInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCubeSocketInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCuboidSocketInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCuboidSocketInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pickupables/Cores/SocketInfo/CuboidSocketInfo.h" },
		{ "ModuleRelativePath", "Pickupables/Cores/SocketInfo/CuboidSocketInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCuboidSocketInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCuboidSocketInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCuboidSocketInfo_Statics::ClassParams = {
		&UCuboidSocketInfo::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCuboidSocketInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCuboidSocketInfo_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCuboidSocketInfo()
	{
		if (!Z_Registration_Info_UClass_UCuboidSocketInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCuboidSocketInfo.OuterSingleton, Z_Construct_UClass_UCuboidSocketInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCuboidSocketInfo.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<UCuboidSocketInfo>()
	{
		return UCuboidSocketInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCuboidSocketInfo);
	UCuboidSocketInfo::~UCuboidSocketInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_CuboidSocketInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_CuboidSocketInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCuboidSocketInfo, UCuboidSocketInfo::StaticClass, TEXT("UCuboidSocketInfo"), &Z_Registration_Info_UClass_UCuboidSocketInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCuboidSocketInfo), 176886709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_CuboidSocketInfo_h_4023742799(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_CuboidSocketInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_CuboidSocketInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
