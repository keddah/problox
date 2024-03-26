// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Glider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlider() {}
// Cross Module References
	PROJPROBLOX_API UClass* Z_Construct_UClass_AGlider();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AGlider_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AGlider::StaticRegisterNativesAGlider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGlider);
	UClass* Z_Construct_UClass_AGlider_NoRegister()
	{
		return AGlider::StaticClass();
	}
	struct Z_Construct_UClass_AGlider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_glideSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_glideSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floatAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_floatAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_activationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_activationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGlider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlider_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlider_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Glider.h" },
		{ "ModuleRelativePath", "Glider.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlider_Statics::NewProp_glideSpeed_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Glider.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGlider_Statics::NewProp_glideSpeed = { "glideSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlider, glideSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGlider_Statics::NewProp_glideSpeed_MetaData), Z_Construct_UClass_AGlider_Statics::NewProp_glideSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlider_Statics::NewProp_floatAmount_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Glider.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGlider_Statics::NewProp_floatAmount = { "floatAmount", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlider, floatAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGlider_Statics::NewProp_floatAmount_MetaData), Z_Construct_UClass_AGlider_Statics::NewProp_floatAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGlider_Statics::NewProp_activationSpeed_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Glider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast the object has to be falling in order to activate the glide (Z axis velocity)." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGlider_Statics::NewProp_activationSpeed = { "activationSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlider, activationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGlider_Statics::NewProp_activationSpeed_MetaData), Z_Construct_UClass_AGlider_Statics::NewProp_activationSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlider_Statics::NewProp_glideSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlider_Statics::NewProp_floatAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlider_Statics::NewProp_activationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGlider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlider_Statics::ClassParams = {
		&AGlider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGlider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGlider_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGlider_Statics::Class_MetaDataParams), Z_Construct_UClass_AGlider_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlider_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGlider()
	{
		if (!Z_Registration_Info_UClass_AGlider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGlider.OuterSingleton, Z_Construct_UClass_AGlider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGlider.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AGlider>()
	{
		return AGlider::StaticClass();
	}
	AGlider::AGlider() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGlider);
	AGlider::~AGlider() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Glider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Glider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGlider, AGlider::StaticClass, TEXT("AGlider"), &Z_Registration_Info_UClass_AGlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlider), 3718970210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Glider_h_1214254902(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Glider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Glider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
