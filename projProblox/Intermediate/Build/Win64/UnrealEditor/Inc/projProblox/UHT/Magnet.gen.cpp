// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Magnet.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagnet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMagnet();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMagnet_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(AMagnet::execAttachMagnet)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachMagnet(Z_Param_Out_hit);
		P_NATIVE_END;
	}
	void AMagnet::StaticRegisterNativesAMagnet()
	{
		UClass* Class = AMagnet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachMagnet", &AMagnet::execAttachMagnet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagnet_AttachMagnet_Statics
	{
		struct Magnet_eventAttachMagnet_Parms
		{
			FHitResult hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Magnet_eventAttachMagnet_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::NewProp_hit_MetaData), Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::NewProp_hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magnet" },
		{ "ModuleRelativePath", "Magnet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagnet, nullptr, "AttachMagnet", nullptr, nullptr, Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::Magnet_eventAttachMagnet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::Magnet_eventAttachMagnet_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMagnet_AttachMagnet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagnet_AttachMagnet_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positiveMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_positiveMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_negativeMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_negativeMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attractionForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attractionForce;
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
		{ &Z_Construct_UFunction_AMagnet_AttachMagnet, "AttachMagnet" }, // 2781066179
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Magnet.h" },
		{ "ModuleRelativePath", "Magnet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnet_Statics::NewProp_positive_MetaData[] = {
		{ "Category", "Magnet" },
		{ "ModuleRelativePath", "Magnet.h" },
	};
#endif
	void Z_Construct_UClass_AMagnet_Statics::NewProp_positive_SetBit(void* Obj)
	{
		((AMagnet*)Obj)->positive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagnet_Statics::NewProp_positive = { "positive", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMagnet), &Z_Construct_UClass_AMagnet_Statics::NewProp_positive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::NewProp_positive_MetaData), Z_Construct_UClass_AMagnet_Statics::NewProp_positive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnet_Statics::NewProp_positiveMat_MetaData[] = {
		{ "Category", "Magnet" },
		{ "ModuleRelativePath", "Magnet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagnet_Statics::NewProp_positiveMat = { "positiveMat", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagnet, positiveMat), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::NewProp_positiveMat_MetaData), Z_Construct_UClass_AMagnet_Statics::NewProp_positiveMat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnet_Statics::NewProp_negativeMat_MetaData[] = {
		{ "Category", "Magnet" },
		{ "ModuleRelativePath", "Magnet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagnet_Statics::NewProp_negativeMat = { "negativeMat", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagnet, negativeMat), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::NewProp_negativeMat_MetaData), Z_Construct_UClass_AMagnet_Statics::NewProp_negativeMat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnet_Statics::NewProp_attractionForce_MetaData[] = {
		{ "Category", "Magnet" },
		{ "ModuleRelativePath", "Magnet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMagnet_Statics::NewProp_attractionForce = { "attractionForce", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagnet, attractionForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagnet_Statics::NewProp_attractionForce_MetaData), Z_Construct_UClass_AMagnet_Statics::NewProp_attractionForce_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagnet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnet_Statics::NewProp_positive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnet_Statics::NewProp_positiveMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnet_Statics::NewProp_negativeMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnet_Statics::NewProp_attractionForce,
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
	AMagnet::AMagnet() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagnet);
	AMagnet::~AMagnet() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Magnet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Magnet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagnet, AMagnet::StaticClass, TEXT("AMagnet"), &Z_Registration_Info_UClass_AMagnet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagnet), 2528226967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Magnet_h_2797711887(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Magnet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Magnet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
