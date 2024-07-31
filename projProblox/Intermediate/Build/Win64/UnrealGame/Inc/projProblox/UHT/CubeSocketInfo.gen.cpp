// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Cores/SocketInfo/CubeSocketInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeSocketInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCubeSocketInfo();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCubeSocketInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void UCubeSocketInfo::StaticRegisterNativesUCubeSocketInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeSocketInfo);
	UClass* Z_Construct_UClass_UCubeSocketInfo_NoRegister()
	{
		return UCubeSocketInfo::StaticClass();
	}
	struct Z_Construct_UClass_UCubeSocketInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_sockets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sockets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_sockets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_socketObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_socketObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_socketObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubeSocketInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeSocketInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should never save and only to be made while the game is running\n" },
#endif
		{ "IncludePath", "Pickupables/Cores/SocketInfo/CubeSocketInfo.h" },
		{ "ModuleRelativePath", "Pickupables/Cores/SocketInfo/CubeSocketInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should never save and only to be made while the game is running" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets_Inner = { "sockets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets_MetaData[] = {
		{ "Category", "CubeSocketInfo" },
		{ "ModuleRelativePath", "Pickupables/Cores/SocketInfo/CubeSocketInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets = { "sockets", nullptr, (EPropertyFlags)0x0020080000030001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubeSocketInfo, sockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets_MetaData), Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects_Inner = { "socketObjects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects_MetaData[] = {
		{ "ArrayClamp", "sockets" },
		{ "Category", "CubeSocketInfo" },
		{ "ModuleRelativePath", "Pickupables/Cores/SocketInfo/CubeSocketInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects = { "socketObjects", nullptr, (EPropertyFlags)0x0020080000030001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubeSocketInfo, socketObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects_MetaData), Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubeSocketInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubeSocketInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeSocketInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeSocketInfo_Statics::ClassParams = {
		&UCubeSocketInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCubeSocketInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCubeSocketInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCubeSocketInfo()
	{
		if (!Z_Registration_Info_UClass_UCubeSocketInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeSocketInfo.OuterSingleton, Z_Construct_UClass_UCubeSocketInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCubeSocketInfo.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<UCubeSocketInfo>()
	{
		return UCubeSocketInfo::StaticClass();
	}
	UCubeSocketInfo::UCubeSocketInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeSocketInfo);
	UCubeSocketInfo::~UCubeSocketInfo() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_CubeSocketInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_CubeSocketInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCubeSocketInfo, UCubeSocketInfo::StaticClass, TEXT("UCubeSocketInfo"), &Z_Registration_Info_UClass_UCubeSocketInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeSocketInfo), 3440768335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_CubeSocketInfo_h_4042079248(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_CubeSocketInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Pickupables_Cores_SocketInfo_CubeSocketInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
