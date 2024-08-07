// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Magnet/Magnet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagnet() {}
// Cross Module References
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMagnet();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMagnet_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_ELevel();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(AMagnet::execResetPoles)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_lvl);
		P_GET_ENUM(ELevel,Z_Param_eLvl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPoles(Z_Param_lvl,ELevel(Z_Param_eLvl));
		P_NATIVE_END;
	}
	void AMagnet::StaticRegisterNativesAMagnet()
	{
		UClass* Class = AMagnet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetPoles", &AMagnet::execResetPoles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagnet_ResetPoles_Statics
	{
		struct Magnet_eventResetPoles_Parms
		{
			int32 lvl;
			ELevel eLvl;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_lvl;
		static const UECodeGen_Private::FBytePropertyParams NewProp_eLvl_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_eLvl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMagnet_ResetPoles_Statics::NewProp_lvl = { "lvl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Magnet_eventResetPoles_Parms, lvl), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMagnet_ResetPoles_Statics::NewProp_eLvl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMagnet_ResetPoles_Statics::NewProp_eLvl = { "eLvl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Magnet_eventResetPoles_Parms, eLvl), Z_Construct_UEnum_projProblox_ELevel, METADATA_PARAMS(0, nullptr) }; // 1235914906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagnet_ResetPoles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnet_ResetPoles_Statics::NewProp_lvl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnet_ResetPoles_Statics::NewProp_eLvl_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnet_ResetPoles_Statics::NewProp_eLvl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagnet_ResetPoles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/Magnet/Magnet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagnet_ResetPoles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagnet, nullptr, "ResetPoles", nullptr, nullptr, Z_Construct_UFunction_AMagnet_ResetPoles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnet_ResetPoles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMagnet_ResetPoles_Statics::Magnet_eventResetPoles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnet_ResetPoles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagnet_ResetPoles_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnet_ResetPoles_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMagnet_ResetPoles_Statics::Magnet_eventResetPoles_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMagnet_ResetPoles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagnet_ResetPoles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagnet);
	UClass* Z_Construct_UClass_AMagnet_NoRegister()
	{
		return AMagnet::StaticClass();
	}
	struct Z_Construct_UClass_AMagnet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positive_MetaData[];
#endif
		static void NewProp_positive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_positive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attractionForce_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_attractionForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fieldRange_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_fieldRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagnet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagnet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagnet_ResetPoles, "ResetPoles" }, // 2106094468
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/Magnet/Magnet.h" },
		{ "ModuleRelativePath", "Pickupables/Magnet/Magnet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnet_Statics::NewProp_positive_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Pickupables/Magnet/Magnet.h" },
	};
#endif
	void Z_Construct_UClass_AMagnet_Statics::NewProp_positive_SetBit(void* Obj)
	{
		((AMagnet*)Obj)->positive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagnet_Statics::NewProp_positive = { "positive", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMagnet), &Z_Construct_UClass_AMagnet_Statics::NewProp_positive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::NewProp_positive_MetaData), Z_Construct_UClass_AMagnet_Statics::NewProp_positive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnet_Statics::NewProp_attractionForce_MetaData[] = {
		{ "Category", "Ability" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Pickupables/Magnet/Magnet.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_AMagnet_Statics::NewProp_attractionForce = { "attractionForce", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagnet, attractionForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::NewProp_attractionForce_MetaData), Z_Construct_UClass_AMagnet_Statics::NewProp_attractionForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnet_Statics::NewProp_fieldRange_MetaData[] = {
		{ "Category", "Ability" },
		{ "Delta", "10" },
		{ "ModuleRelativePath", "Pickupables/Magnet/Magnet.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMagnet_Statics::NewProp_fieldRange = { "fieldRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagnet, fieldRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::NewProp_fieldRange_MetaData), Z_Construct_UClass_AMagnet_Statics::NewProp_fieldRange_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagnet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnet_Statics::NewProp_positive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnet_Statics::NewProp_attractionForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnet_Statics::NewProp_fieldRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagnet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagnet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagnet_Statics::ClassParams = {
		&AMagnet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagnet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::Class_MetaDataParams), Z_Construct_UClass_AMagnet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMagnet()
	{
		if (!Z_Registration_Info_UClass_AMagnet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagnet.OuterSingleton, Z_Construct_UClass_AMagnet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagnet.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AMagnet>()
	{
		return AMagnet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagnet);
	AMagnet::~AMagnet() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Magnet_Magnet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Magnet_Magnet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagnet, AMagnet::StaticClass, TEXT("AMagnet"), &Z_Registration_Info_UClass_AMagnet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagnet), 337821772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Magnet_Magnet_h_3384208512(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Magnet_Magnet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Magnet_Magnet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
