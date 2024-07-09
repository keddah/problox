// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Balloon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBalloon() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABalloon();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABalloon_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(ABalloon::execSaveResetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveResetTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABalloon::execResetBalloon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetBalloon();
		P_NATIVE_END;
	}
	void ABalloon::StaticRegisterNativesABalloon()
	{
		UClass* Class = ABalloon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetBalloon", &ABalloon::execResetBalloon },
			{ "SaveResetTransform", &ABalloon::execSaveResetTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABalloon_ResetBalloon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABalloon_ResetBalloon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABalloon_ResetBalloon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABalloon, nullptr, "ResetBalloon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABalloon_ResetBalloon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABalloon_ResetBalloon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABalloon_ResetBalloon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABalloon_ResetBalloon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABalloon_SaveResetTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABalloon_SaveResetTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABalloon_SaveResetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABalloon, nullptr, "SaveResetTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABalloon_SaveResetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABalloon_SaveResetTransform_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABalloon_SaveResetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABalloon_SaveResetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABalloon);
	UClass* Z_Construct_UClass_ABalloon_NoRegister()
	{
		return ABalloon::StaticClass();
	}
	struct Z_Construct_UClass_ABalloon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_constraint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_constraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_string_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_string;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floatiness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_floatiness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABalloon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABalloon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABalloon_ResetBalloon, "ResetBalloon" }, // 2396562097
		{ &Z_Construct_UFunction_ABalloon_SaveResetTransform, "SaveResetTransform" }, // 1404031365
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/Balloon.h" },
		{ "ModuleRelativePath", "Pickupables/Balloon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_constraint_MetaData[] = {
		{ "Category", "Balloon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_constraint = { "constraint", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABalloon, constraint), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_constraint_MetaData), Z_Construct_UClass_ABalloon_Statics::NewProp_constraint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_string_MetaData[] = {
		{ "Category", "Balloon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Balloon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABalloon, string), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_string_MetaData), Z_Construct_UClass_ABalloon_Statics::NewProp_string_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::NewProp_floatiness_MetaData[] = {
		{ "Category", "Ability" },
		{ "Delta", "0.100000" },
		{ "ModuleRelativePath", "Pickupables/Balloon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far the flatHead should extend from the piston shaft." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABalloon_Statics::NewProp_floatiness = { "floatiness", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABalloon, floatiness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::NewProp_floatiness_MetaData), Z_Construct_UClass_ABalloon_Statics::NewProp_floatiness_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABalloon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_constraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_string,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABalloon_Statics::NewProp_floatiness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABalloon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABalloon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABalloon_Statics::ClassParams = {
		&ABalloon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABalloon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::Class_MetaDataParams), Z_Construct_UClass_ABalloon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABalloon()
	{
		if (!Z_Registration_Info_UClass_ABalloon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABalloon.OuterSingleton, Z_Construct_UClass_ABalloon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABalloon.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ABalloon>()
	{
		return ABalloon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABalloon);
	ABalloon::~ABalloon() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Balloon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Balloon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABalloon, ABalloon::StaticClass, TEXT("ABalloon"), &Z_Registration_Info_UClass_ABalloon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABalloon), 4094938220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Balloon_h_2871983890(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Balloon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Balloon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
