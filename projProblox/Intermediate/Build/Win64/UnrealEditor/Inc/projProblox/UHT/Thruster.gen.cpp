// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Thruster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThruster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AThruster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AThruster_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AThruster::StaticRegisterNativesAThruster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThruster);
	UClass* Z_Construct_UClass_AThruster_NoRegister()
	{
		return AThruster::StaticClass();
	}
	struct Z_Construct_UClass_AThruster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thruster_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_thruster;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_power_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_power;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThruster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThruster_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThruster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/Thruster.h" },
		{ "ModuleRelativePath", "Pickupables/Thruster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThruster_Statics::NewProp_thruster_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Thruster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Thruster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThruster_Statics::NewProp_thruster = { "thruster", nullptr, (EPropertyFlags)0x004000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThruster, thruster), Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThruster_Statics::NewProp_thruster_MetaData), Z_Construct_UClass_AThruster_Statics::NewProp_thruster_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThruster_Statics::NewProp_power_MetaData[] = {
		{ "Category", "Ability" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Pickupables/Thruster.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThruster_Statics::NewProp_power = { "power", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThruster, power), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThruster_Statics::NewProp_power_MetaData), Z_Construct_UClass_AThruster_Statics::NewProp_power_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThruster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThruster_Statics::NewProp_thruster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThruster_Statics::NewProp_power,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThruster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThruster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThruster_Statics::ClassParams = {
		&AThruster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThruster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThruster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThruster_Statics::Class_MetaDataParams), Z_Construct_UClass_AThruster_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThruster_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AThruster()
	{
		if (!Z_Registration_Info_UClass_AThruster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThruster.OuterSingleton, Z_Construct_UClass_AThruster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThruster.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AThruster>()
	{
		return AThruster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThruster);
	AThruster::~AThruster() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Thruster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Thruster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThruster, AThruster::StaticClass, TEXT("AThruster"), &Z_Registration_Info_UClass_AThruster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThruster), 2107657901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Thruster_h_140056817(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Thruster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Thruster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
