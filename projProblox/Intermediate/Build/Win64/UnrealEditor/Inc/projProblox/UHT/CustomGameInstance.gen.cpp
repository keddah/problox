// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/CustomGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCustomGameInstance();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(UCustomGameInstance::execLoadSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSave();
		P_NATIVE_END;
	}
	void UCustomGameInstance::StaticRegisterNativesUCustomGameInstance()
	{
		UClass* Class = UCustomGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadSave", &UCustomGameInstance::execLoadSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomGameInstance_LoadSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomGameInstance_LoadSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomGameInstance_LoadSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomGameInstance, nullptr, "LoadSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomGameInstance_LoadSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomGameInstance_LoadSave_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UCustomGameInstance_LoadSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomGameInstance_LoadSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomGameInstance);
	UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister()
	{
		return UCustomGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCustomGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomGameInstance_LoadSave, "LoadSave" }, // 2101186814
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomGameInstance.h" },
		{ "ModuleRelativePath", "CustomGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomGameInstance_Statics::ClassParams = {
		&UCustomGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomGameInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCustomGameInstance()
	{
		if (!Z_Registration_Info_UClass_UCustomGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomGameInstance.OuterSingleton, Z_Construct_UClass_UCustomGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomGameInstance.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<UCustomGameInstance>()
	{
		return UCustomGameInstance::StaticClass();
	}
	UCustomGameInstance::UCustomGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomGameInstance);
	UCustomGameInstance::~UCustomGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_CustomGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_CustomGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomGameInstance, UCustomGameInstance::StaticClass, TEXT("UCustomGameInstance"), &Z_Registration_Info_UClass_UCustomGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomGameInstance), 2649682719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_CustomGameInstance_h_3975231566(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_CustomGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_CustomGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
