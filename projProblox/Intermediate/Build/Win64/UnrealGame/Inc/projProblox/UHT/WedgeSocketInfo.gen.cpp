// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Cores/SocketInfo/WedgeSocketInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWedgeSocketInfo() {}
// Cross Module References
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCubeSocketInfo();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UWedgeSocketInfo();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UWedgeSocketInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void UWedgeSocketInfo::StaticRegisterNativesUWedgeSocketInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWedgeSocketInfo);
	UClass* Z_Construct_UClass_UWedgeSocketInfo_NoRegister()
	{
		return UWedgeSocketInfo::StaticClass();
	}
	struct Z_Construct_UClass_UWedgeSocketInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWedgeSocketInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCubeSocketInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWedgeSocketInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWedgeSocketInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/Cores/SocketInfo/WedgeSocketInfo.h" },
		{ "ModuleRelativePath", "Pickupables/Cores/SocketInfo/WedgeSocketInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWedgeSocketInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWedgeSocketInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWedgeSocketInfo_Statics::ClassParams = {
		&UWedgeSocketInfo::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWedgeSocketInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UWedgeSocketInfo_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWedgeSocketInfo()
	{
		if (!Z_Registration_Info_UClass_UWedgeSocketInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWedgeSocketInfo.OuterSingleton, Z_Construct_UClass_UWedgeSocketInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWedgeSocketInfo.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<UWedgeSocketInfo>()
	{
		return UWedgeSocketInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWedgeSocketInfo);
	UWedgeSocketInfo::~UWedgeSocketInfo() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_WedgeSocketInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_WedgeSocketInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWedgeSocketInfo, UWedgeSocketInfo::StaticClass, TEXT("UWedgeSocketInfo"), &Z_Registration_Info_UClass_UWedgeSocketInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWedgeSocketInfo), 351357171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_WedgeSocketInfo_h_515949945(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_WedgeSocketInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_WedgeSocketInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
