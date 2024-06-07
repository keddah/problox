// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Piston.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiston() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APiston();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APiston_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void APiston::StaticRegisterNativesAPiston()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APiston);
	UClass* Z_Construct_UClass_APiston_NoRegister()
	{
		return APiston::StaticClass();
	}
	struct Z_Construct_UClass_APiston_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_flatHead_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_flatHead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pushSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pushSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_selfPropelForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_selfPropelForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pushForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pushForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pushExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pushExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canPush_MetaData[];
#endif
		static void NewProp_canPush_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canPush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moving_MetaData[];
#endif
		static void NewProp_moving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_moving;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APiston_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APiston_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiston_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/Piston.h" },
		{ "ModuleRelativePath", "Pickupables/Piston.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiston_Statics::NewProp_flatHead_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Piston" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Piston.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APiston_Statics::NewProp_flatHead = { "flatHead", nullptr, (EPropertyFlags)0x004000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APiston, flatHead), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APiston_Statics::NewProp_flatHead_MetaData), Z_Construct_UClass_APiston_Statics::NewProp_flatHead_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiston_Statics::NewProp_pushSpeed_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Pickupables/Piston.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How fast the piston head should push out." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APiston_Statics::NewProp_pushSpeed = { "pushSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APiston, pushSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APiston_Statics::NewProp_pushSpeed_MetaData), Z_Construct_UClass_APiston_Statics::NewProp_pushSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiston_Statics::NewProp_selfPropelForce_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Pickupables/Piston.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The force to be applied to this object when it pushes against something immoveable." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APiston_Statics::NewProp_selfPropelForce = { "selfPropelForce", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APiston, selfPropelForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APiston_Statics::NewProp_selfPropelForce_MetaData), Z_Construct_UClass_APiston_Statics::NewProp_selfPropelForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiston_Statics::NewProp_pushForce_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Pickupables/Piston.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The force to be applied to the other object." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APiston_Statics::NewProp_pushForce = { "pushForce", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APiston, pushForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APiston_Statics::NewProp_pushForce_MetaData), Z_Construct_UClass_APiston_Statics::NewProp_pushForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiston_Statics::NewProp_pushExtent_MetaData[] = {
		{ "Category", "Ability" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Pickupables/Piston.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far the flatHead should extend from the piston shaft." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APiston_Statics::NewProp_pushExtent = { "pushExtent", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APiston, pushExtent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APiston_Statics::NewProp_pushExtent_MetaData), Z_Construct_UClass_APiston_Statics::NewProp_pushExtent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiston_Statics::NewProp_canPush_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Pickupables/Piston.h" },
	};
#endif
	void Z_Construct_UClass_APiston_Statics::NewProp_canPush_SetBit(void* Obj)
	{
		((APiston*)Obj)->canPush = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APiston_Statics::NewProp_canPush = { "canPush", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APiston), &Z_Construct_UClass_APiston_Statics::NewProp_canPush_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APiston_Statics::NewProp_canPush_MetaData), Z_Construct_UClass_APiston_Statics::NewProp_canPush_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiston_Statics::NewProp_moving_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Pickupables/Piston.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not the piston head is currently pushing" },
#endif
	};
#endif
	void Z_Construct_UClass_APiston_Statics::NewProp_moving_SetBit(void* Obj)
	{
		((APiston*)Obj)->moving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APiston_Statics::NewProp_moving = { "moving", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APiston), &Z_Construct_UClass_APiston_Statics::NewProp_moving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APiston_Statics::NewProp_moving_MetaData), Z_Construct_UClass_APiston_Statics::NewProp_moving_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APiston_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiston_Statics::NewProp_flatHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiston_Statics::NewProp_pushSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiston_Statics::NewProp_selfPropelForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiston_Statics::NewProp_pushForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiston_Statics::NewProp_pushExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiston_Statics::NewProp_canPush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiston_Statics::NewProp_moving,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APiston_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiston>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APiston_Statics::ClassParams = {
		&APiston::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APiston_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APiston_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APiston_Statics::Class_MetaDataParams), Z_Construct_UClass_APiston_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APiston_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APiston()
	{
		if (!Z_Registration_Info_UClass_APiston.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APiston.OuterSingleton, Z_Construct_UClass_APiston_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APiston.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<APiston>()
	{
		return APiston::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APiston);
	APiston::~APiston() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Piston_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Piston_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APiston, APiston::StaticClass, TEXT("APiston"), &Z_Registration_Info_UClass_APiston, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APiston), 445038238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Piston_h_2848811507(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Piston_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Piston_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
