// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/GrappleHead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappleHead() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AGrappleHead();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AGrappleHead_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AGrappleHead::StaticRegisterNativesAGrappleHead()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrappleHead);
	UClass* Z_Construct_UClass_AGrappleHead_NoRegister()
	{
		return AGrappleHead::StaticClass();
	}
	struct Z_Construct_UClass_AGrappleHead_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_launchForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_launchForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pullSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pullSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cancelDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cancelDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrappleHead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHead_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHead_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GrappleHead.h" },
		{ "ModuleRelativePath", "GrappleHead.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHead_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "GrappleHead" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GrappleHead.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHead_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleHead, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHead_Statics::NewProp_mesh_MetaData), Z_Construct_UClass_AGrappleHead_Statics::NewProp_mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHead_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "GrappleHead" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GrappleHead.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappleHead_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleHead, collider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHead_Statics::NewProp_collider_MetaData), Z_Construct_UClass_AGrappleHead_Statics::NewProp_collider_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHead_Statics::NewProp_launchForce_MetaData[] = {
		{ "Category", "GrappleHead" },
		{ "ModuleRelativePath", "GrappleHead.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrappleHead_Statics::NewProp_launchForce = { "launchForce", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleHead, launchForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHead_Statics::NewProp_launchForce_MetaData), Z_Construct_UClass_AGrappleHead_Statics::NewProp_launchForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHead_Statics::NewProp_pullSpeed_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "GrappleHead.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrappleHead_Statics::NewProp_pullSpeed = { "pullSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleHead, pullSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHead_Statics::NewProp_pullSpeed_MetaData), Z_Construct_UClass_AGrappleHead_Statics::NewProp_pullSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleHead_Statics::NewProp_cancelDistance_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "GrappleHead.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrappleHead_Statics::NewProp_cancelDistance = { "cancelDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappleHead, cancelDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHead_Statics::NewProp_cancelDistance_MetaData), Z_Construct_UClass_AGrappleHead_Statics::NewProp_cancelDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrappleHead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHead_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHead_Statics::NewProp_collider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHead_Statics::NewProp_launchForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHead_Statics::NewProp_pullSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappleHead_Statics::NewProp_cancelDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrappleHead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappleHead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrappleHead_Statics::ClassParams = {
		&AGrappleHead::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrappleHead_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHead_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHead_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrappleHead_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleHead_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGrappleHead()
	{
		if (!Z_Registration_Info_UClass_AGrappleHead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrappleHead.OuterSingleton, Z_Construct_UClass_AGrappleHead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrappleHead.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AGrappleHead>()
	{
		return AGrappleHead::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappleHead);
	AGrappleHead::~AGrappleHead() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_GrappleHead_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_GrappleHead_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrappleHead, AGrappleHead::StaticClass, TEXT("AGrappleHead"), &Z_Registration_Info_UClass_AGrappleHead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrappleHead), 695221320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_GrappleHead_h_3408108083(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_GrappleHead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_GrappleHead_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
