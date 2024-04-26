// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Propeller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropeller() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APropeller();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APropeller_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void APropeller::StaticRegisterNativesAPropeller()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APropeller);
	UClass* Z_Construct_UClass_APropeller_NoRegister()
	{
		return APropeller::StaticClass();
	}
	struct Z_Construct_UClass_APropeller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_windBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_windBox;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pushedObjs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pushedObjs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_pushedObjs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_propelForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_propelForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pushForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pushForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_spinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_massScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_massScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APropeller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APropeller_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropeller_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Propeller.h" },
		{ "ModuleRelativePath", "Propeller.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropeller_Statics::NewProp_windBox_MetaData[] = {
		{ "Category", "Propeller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Propeller.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APropeller_Statics::NewProp_windBox = { "windBox", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APropeller, windBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APropeller_Statics::NewProp_windBox_MetaData), Z_Construct_UClass_APropeller_Statics::NewProp_windBox_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APropeller_Statics::NewProp_pushedObjs_Inner = { "pushedObjs", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropeller_Statics::NewProp_pushedObjs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Propeller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Propeller.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APropeller_Statics::NewProp_pushedObjs = { "pushedObjs", nullptr, (EPropertyFlags)0x004000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APropeller, pushedObjs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APropeller_Statics::NewProp_pushedObjs_MetaData), Z_Construct_UClass_APropeller_Statics::NewProp_pushedObjs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropeller_Statics::NewProp_propelForce_MetaData[] = {
		{ "Category", "Ability" },
		{ "Delta", "0.500000" },
		{ "ModuleRelativePath", "Propeller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of force to apply to the thing that it's attached to" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APropeller_Statics::NewProp_propelForce = { "propelForce", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APropeller, propelForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APropeller_Statics::NewProp_propelForce_MetaData), Z_Construct_UClass_APropeller_Statics::NewProp_propelForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropeller_Statics::NewProp_pushForce_MetaData[] = {
		{ "Category", "Ability" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Propeller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of force to apply to things that are inside the windCollider while active" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APropeller_Statics::NewProp_pushForce = { "pushForce", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APropeller, pushForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APropeller_Statics::NewProp_pushForce_MetaData), Z_Construct_UClass_APropeller_Statics::NewProp_pushForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropeller_Statics::NewProp_spinSpeed_MetaData[] = {
		{ "Category", "Ability" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Propeller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The speed the propellers rotate (purely visual)." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APropeller_Statics::NewProp_spinSpeed = { "spinSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APropeller, spinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APropeller_Statics::NewProp_spinSpeed_MetaData), Z_Construct_UClass_APropeller_Statics::NewProp_spinSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropeller_Statics::NewProp_massScale_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Propeller.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much the mass of the core affects the force of the propeller (higher number = higher force)." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APropeller_Statics::NewProp_massScale = { "massScale", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APropeller, massScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APropeller_Statics::NewProp_massScale_MetaData), Z_Construct_UClass_APropeller_Statics::NewProp_massScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APropeller_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropeller_Statics::NewProp_windBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropeller_Statics::NewProp_pushedObjs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropeller_Statics::NewProp_pushedObjs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropeller_Statics::NewProp_propelForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropeller_Statics::NewProp_pushForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropeller_Statics::NewProp_spinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropeller_Statics::NewProp_massScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APropeller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APropeller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APropeller_Statics::ClassParams = {
		&APropeller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APropeller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APropeller_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APropeller_Statics::Class_MetaDataParams), Z_Construct_UClass_APropeller_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APropeller_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APropeller()
	{
		if (!Z_Registration_Info_UClass_APropeller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APropeller.OuterSingleton, Z_Construct_UClass_APropeller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APropeller.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<APropeller>()
	{
		return APropeller::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APropeller);
	APropeller::~APropeller() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Propeller_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Propeller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APropeller, APropeller::StaticClass, TEXT("APropeller"), &Z_Registration_Info_UClass_APropeller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APropeller), 3975685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Propeller_h_2639053030(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Propeller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Propeller_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
