// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/BounceSpring.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBounceSpring() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABounceSpring();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABounceSpring_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void ABounceSpring::StaticRegisterNativesABounceSpring()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABounceSpring);
	UClass* Z_Construct_UClass_ABounceSpring_NoRegister()
	{
		return ABounceSpring::StaticClass();
	}
	struct Z_Construct_UClass_ABounceSpring_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSpringLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSpringLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minSpringLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minSpringLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_compressionSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_compressionSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_springConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_springConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_springHit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_springHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_end_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_end;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABounceSpring_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounceSpring_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/BounceSpring.h" },
		{ "ModuleRelativePath", "Pickupables/BounceSpring.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounceSpring_Statics::NewProp_maxSpringLength_MetaData[] = {
		{ "Category", "Spring" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Pickupables/BounceSpring.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum amount the spring is allowed to stretch." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABounceSpring_Statics::NewProp_maxSpringLength = { "maxSpringLength", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABounceSpring, maxSpringLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::NewProp_maxSpringLength_MetaData), Z_Construct_UClass_ABounceSpring_Statics::NewProp_maxSpringLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounceSpring_Statics::NewProp_minSpringLength_MetaData[] = {
		{ "Category", "Spring" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Pickupables/BounceSpring.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The length of the spring when its fully compressed." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABounceSpring_Statics::NewProp_minSpringLength = { "minSpringLength", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABounceSpring, minSpringLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::NewProp_minSpringLength_MetaData), Z_Construct_UClass_ABounceSpring_Statics::NewProp_minSpringLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounceSpring_Statics::NewProp_compressionSpeed_MetaData[] = {
		{ "Category", "Spring" },
		{ "Delta", "0.010000" },
		{ "ModuleRelativePath", "Pickupables/BounceSpring.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The speed of compression when not pressing against an object (while airborne)." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABounceSpring_Statics::NewProp_compressionSpeed = { "compressionSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABounceSpring, compressionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::NewProp_compressionSpeed_MetaData), Z_Construct_UClass_ABounceSpring_Statics::NewProp_compressionSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounceSpring_Statics::NewProp_springConstant_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Pickupables/BounceSpring.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABounceSpring_Statics::NewProp_springConstant = { "springConstant", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABounceSpring, springConstant), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::NewProp_springConstant_MetaData), Z_Construct_UClass_ABounceSpring_Statics::NewProp_springConstant_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounceSpring_Statics::NewProp_damping_MetaData[] = {
		{ "Category", "Ability" },
		{ "Delta", "0.010000" },
		{ "ModuleRelativePath", "Pickupables/BounceSpring.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABounceSpring_Statics::NewProp_damping = { "damping", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABounceSpring, damping), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::NewProp_damping_MetaData), Z_Construct_UClass_ABounceSpring_Statics::NewProp_damping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounceSpring_Statics::NewProp_springHit_MetaData[] = {
		{ "Category", "BounceSpring" },
		{ "ModuleRelativePath", "Pickupables/BounceSpring.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABounceSpring_Statics::NewProp_springHit = { "springHit", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABounceSpring, springHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::NewProp_springHit_MetaData), Z_Construct_UClass_ABounceSpring_Statics::NewProp_springHit_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounceSpring_Statics::NewProp_start_MetaData[] = {
		{ "Category", "Ability" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/BounceSpring.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABounceSpring_Statics::NewProp_start = { "start", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABounceSpring, start), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::NewProp_start_MetaData), Z_Construct_UClass_ABounceSpring_Statics::NewProp_start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABounceSpring_Statics::NewProp_end_MetaData[] = {
		{ "Category", "BounceSpring" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/BounceSpring.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABounceSpring_Statics::NewProp_end = { "end", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABounceSpring, end), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::NewProp_end_MetaData), Z_Construct_UClass_ABounceSpring_Statics::NewProp_end_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABounceSpring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounceSpring_Statics::NewProp_maxSpringLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounceSpring_Statics::NewProp_minSpringLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounceSpring_Statics::NewProp_compressionSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounceSpring_Statics::NewProp_springConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounceSpring_Statics::NewProp_damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounceSpring_Statics::NewProp_springHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounceSpring_Statics::NewProp_start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABounceSpring_Statics::NewProp_end,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABounceSpring_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABounceSpring>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABounceSpring_Statics::ClassParams = {
		&ABounceSpring::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABounceSpring_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::Class_MetaDataParams), Z_Construct_UClass_ABounceSpring_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABounceSpring_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABounceSpring()
	{
		if (!Z_Registration_Info_UClass_ABounceSpring.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABounceSpring.OuterSingleton, Z_Construct_UClass_ABounceSpring_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABounceSpring.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ABounceSpring>()
	{
		return ABounceSpring::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABounceSpring);
	ABounceSpring::~ABounceSpring() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BounceSpring_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BounceSpring_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABounceSpring, ABounceSpring::StaticClass, TEXT("ABounceSpring"), &Z_Registration_Info_UClass_ABounceSpring, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABounceSpring), 2555652224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BounceSpring_h_4270521064(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BounceSpring_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BounceSpring_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
