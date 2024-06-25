// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Wheels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheels() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AWheels();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AWheels_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AWheels::StaticRegisterNativesAWheels()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWheels);
	UClass* Z_Construct_UClass_AWheels_NoRegister()
	{
		return AWheels::StaticClass();
	}
	struct Z_Construct_UClass_AWheels_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftAxel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leftAxel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightAxel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rightAxel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftPivot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leftPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightPivot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rightPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftWheel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leftWheel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightWheel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rightWheel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_suspensionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_suspensionDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWheels_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWheels_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheels_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/Wheels.h" },
		{ "ModuleRelativePath", "Pickupables/Wheels.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheels_Statics::NewProp_leftAxel_MetaData[] = {
		{ "Category", "Wheels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Wheels.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheels_Statics::NewProp_leftAxel = { "leftAxel", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWheels, leftAxel), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheels_Statics::NewProp_leftAxel_MetaData), Z_Construct_UClass_AWheels_Statics::NewProp_leftAxel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheels_Statics::NewProp_rightAxel_MetaData[] = {
		{ "Category", "Wheels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Wheels.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheels_Statics::NewProp_rightAxel = { "rightAxel", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWheels, rightAxel), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheels_Statics::NewProp_rightAxel_MetaData), Z_Construct_UClass_AWheels_Statics::NewProp_rightAxel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheels_Statics::NewProp_leftPivot_MetaData[] = {
		{ "Category", "Wheels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Wheels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used so that the transform for the wheel can be set correctly." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheels_Statics::NewProp_leftPivot = { "leftPivot", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWheels, leftPivot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheels_Statics::NewProp_leftPivot_MetaData), Z_Construct_UClass_AWheels_Statics::NewProp_leftPivot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheels_Statics::NewProp_rightPivot_MetaData[] = {
		{ "Category", "Wheels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Wheels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used so that the transform for the wheel can be set correctly." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheels_Statics::NewProp_rightPivot = { "rightPivot", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWheels, rightPivot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheels_Statics::NewProp_rightPivot_MetaData), Z_Construct_UClass_AWheels_Statics::NewProp_rightPivot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheels_Statics::NewProp_leftWheel_MetaData[] = {
		{ "Category", "Wheels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Wheels.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheels_Statics::NewProp_leftWheel = { "leftWheel", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWheels, leftWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheels_Statics::NewProp_leftWheel_MetaData), Z_Construct_UClass_AWheels_Statics::NewProp_leftWheel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheels_Statics::NewProp_rightWheel_MetaData[] = {
		{ "Category", "Wheels" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Wheels.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWheels_Statics::NewProp_rightWheel = { "rightWheel", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWheels, rightWheel), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheels_Statics::NewProp_rightWheel_MetaData), Z_Construct_UClass_AWheels_Statics::NewProp_rightWheel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheels_Statics::NewProp_suspensionDistance_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Pickupables/Wheels.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum both wheels are allowed to go up/down" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWheels_Statics::NewProp_suspensionDistance = { "suspensionDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWheels, suspensionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheels_Statics::NewProp_suspensionDistance_MetaData), Z_Construct_UClass_AWheels_Statics::NewProp_suspensionDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWheels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheels_Statics::NewProp_leftAxel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheels_Statics::NewProp_rightAxel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheels_Statics::NewProp_leftPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheels_Statics::NewProp_rightPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheels_Statics::NewProp_leftWheel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheels_Statics::NewProp_rightWheel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheels_Statics::NewProp_suspensionDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWheels_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWheels>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWheels_Statics::ClassParams = {
		&AWheels::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWheels_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWheels_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWheels_Statics::Class_MetaDataParams), Z_Construct_UClass_AWheels_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWheels_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWheels()
	{
		if (!Z_Registration_Info_UClass_AWheels.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWheels.OuterSingleton, Z_Construct_UClass_AWheels_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWheels.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AWheels>()
	{
		return AWheels::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWheels);
	AWheels::~AWheels() {}
	struct Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Wheels_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Wheels_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWheels, AWheels::StaticClass, TEXT("AWheels"), &Z_Registration_Info_UClass_AWheels, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWheels), 2339207439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Wheels_h_1135614185(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Wheels_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Wheels_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
