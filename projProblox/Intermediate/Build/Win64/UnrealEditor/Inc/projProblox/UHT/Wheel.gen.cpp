// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Wheel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AWheel();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AWheel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AWheel::StaticRegisterNativesAWheel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWheel);
	UClass* Z_Construct_UClass_AWheel_NoRegister()
	{
		return AWheel::StaticClass();
	}
	struct Z_Construct_UClass_AWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pivot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wheelAxel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_wheelAxel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWheel_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/Wheel.h" },
		{ "ModuleRelativePath", "Pickupables/Wheel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheel_Statics::NewProp_pivot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Wheel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Wheel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheel_Statics::NewProp_pivot = { "pivot", nullptr, (EPropertyFlags)0x004000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWheel, pivot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheel_Statics::NewProp_pivot_MetaData), Z_Construct_UClass_AWheel_Statics::NewProp_pivot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheel_Statics::NewProp_wheelAxel_MetaData[] = {
		{ "Category", "Wheel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Wheel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheel_Statics::NewProp_wheelAxel = { "wheelAxel", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWheel, wheelAxel), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheel_Statics::NewProp_wheelAxel_MetaData), Z_Construct_UClass_AWheel_Statics::NewProp_wheelAxel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheel_Statics::NewProp_pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheel_Statics::NewProp_wheelAxel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWheel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWheel_Statics::ClassParams = {
		&AWheel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWheel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWheel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheel_Statics::Class_MetaDataParams), Z_Construct_UClass_AWheel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWheel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWheel()
	{
		if (!Z_Registration_Info_UClass_AWheel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWheel.OuterSingleton, Z_Construct_UClass_AWheel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWheel.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AWheel>()
	{
		return AWheel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWheel);
	AWheel::~AWheel() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Wheel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Wheel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWheel, AWheel::StaticClass, TEXT("AWheel"), &Z_Registration_Info_UClass_AWheel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWheel), 1665909969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Wheel_h_3765915519(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Wheel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Wheel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
