// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/BuyableAttachment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuyableAttachment() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABuyableAttachment();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABuyableAttachment_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UBuyableInfo_NoRegister();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnBoughtAttachment__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBoughtAttachment_DelegateWrapper(const FMulticastScriptDelegate& OnBoughtAttachment)
{
	OnBoughtAttachment.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ABuyableAttachment::execUseInfoMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseInfoMesh();
		P_NATIVE_END;
	}
	void ABuyableAttachment::StaticRegisterNativesABuyableAttachment()
	{
		UClass* Class = ABuyableAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UseInfoMesh", &ABuyableAttachment::execUseInfoMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this in the construction script so that changes are updated whenever they need to be." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuyableAttachment, nullptr, "UseInfoMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuyableAttachment);
	UClass* Z_Construct_UClass_ABuyableAttachment_NoRegister()
	{
		return ABuyableAttachment::StaticClass();
	}
	struct Z_Construct_UClass_ABuyableAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseDetector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mouseDetector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_info;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lockedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lockedMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuyableAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuyableAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh, "UseInfoMesh" }, // 427336234
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/BuyableAttachment.h" },
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "BuyableAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuyableAttachment, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_meshComp_MetaData), Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_meshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_mouseDetector_MetaData[] = {
		{ "Category", "BuyableAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_mouseDetector = { "mouseDetector", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuyableAttachment, mouseDetector), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_mouseDetector_MetaData), Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_mouseDetector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_info_MetaData[] = {
		{ "Category", "BuyableAttachment" },
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuyableAttachment, info), Z_Construct_UClass_UBuyableInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_info_MetaData), Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_info_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_lockedMaterial_MetaData[] = {
		{ "Category", "BuyableAttachment" },
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_lockedMaterial = { "lockedMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuyableAttachment, lockedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_lockedMaterial_MetaData), Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_lockedMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuyableAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_meshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_mouseDetector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_lockedMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuyableAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuyableAttachment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuyableAttachment_Statics::ClassParams = {
		&ABuyableAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuyableAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuyableAttachment_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABuyableAttachment()
	{
		if (!Z_Registration_Info_UClass_ABuyableAttachment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuyableAttachment.OuterSingleton, Z_Construct_UClass_ABuyableAttachment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuyableAttachment.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ABuyableAttachment>()
	{
		return ABuyableAttachment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuyableAttachment);
	ABuyableAttachment::~ABuyableAttachment() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuyableAttachment, ABuyableAttachment::StaticClass, TEXT("ABuyableAttachment"), &Z_Registration_Info_UClass_ABuyableAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuyableAttachment), 2895244267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_4174208786(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
