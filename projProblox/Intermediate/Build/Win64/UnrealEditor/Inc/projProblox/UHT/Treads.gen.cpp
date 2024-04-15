// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Treads.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreads() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ATreads();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ATreads_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void ATreads::StaticRegisterNativesATreads()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATreads);
	UClass* Z_Construct_UClass_ATreads_NoRegister()
	{
		return ATreads::StaticClass();
	}
	struct Z_Construct_UClass_ATreads_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_driveTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_driveTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grounded_MetaData[];
#endif
		static void NewProp_grounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_grounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_defaultFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_drag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_drag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATreads_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATreads_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreads_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Treads.h" },
		{ "ModuleRelativePath", "Treads.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreads_Statics::NewProp_driveTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Treads" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Treads.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreads_Statics::NewProp_driveTrigger = { "driveTrigger", nullptr, (EPropertyFlags)0x004000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATreads, driveTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATreads_Statics::NewProp_driveTrigger_MetaData), Z_Construct_UClass_ATreads_Statics::NewProp_driveTrigger_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreads_Statics::NewProp_grounded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Treads" },
		{ "ModuleRelativePath", "Treads.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When grounded, the ability is able to be activated... otherwise nothing will happen" },
#endif
	};
#endif
	void Z_Construct_UClass_ATreads_Statics::NewProp_grounded_SetBit(void* Obj)
	{
		((ATreads*)Obj)->grounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATreads_Statics::NewProp_grounded = { "grounded", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATreads), &Z_Construct_UClass_ATreads_Statics::NewProp_grounded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATreads_Statics::NewProp_grounded_MetaData), Z_Construct_UClass_ATreads_Statics::NewProp_grounded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreads_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Treads.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATreads_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATreads, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATreads_Statics::NewProp_moveSpeed_MetaData), Z_Construct_UClass_ATreads_Statics::NewProp_moveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreads_Statics::NewProp_defaultFriction_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Treads.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATreads_Statics::NewProp_defaultFriction = { "defaultFriction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATreads, defaultFriction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATreads_Statics::NewProp_defaultFriction_MetaData), Z_Construct_UClass_ATreads_Statics::NewProp_defaultFriction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreads_Statics::NewProp_drag_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Treads.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overrides the 'Linear damping' value of the objMesh." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATreads_Statics::NewProp_drag = { "drag", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATreads, drag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATreads_Statics::NewProp_drag_MetaData), Z_Construct_UClass_ATreads_Statics::NewProp_drag_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATreads_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreads_Statics::NewProp_driveTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreads_Statics::NewProp_grounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreads_Statics::NewProp_moveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreads_Statics::NewProp_defaultFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreads_Statics::NewProp_drag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATreads_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATreads>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATreads_Statics::ClassParams = {
		&ATreads::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATreads_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATreads_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATreads_Statics::Class_MetaDataParams), Z_Construct_UClass_ATreads_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATreads_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATreads()
	{
		if (!Z_Registration_Info_UClass_ATreads.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATreads.OuterSingleton, Z_Construct_UClass_ATreads_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATreads.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ATreads>()
	{
		return ATreads::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATreads);
	ATreads::~ATreads() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Treads_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Treads_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATreads, ATreads::StaticClass, TEXT("ATreads"), &Z_Registration_Info_UClass_ATreads, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATreads), 2590316984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Treads_h_2750710739(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Treads_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Treads_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
