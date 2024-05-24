// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/AudioManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UAudioManager();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UAudioManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(UAudioManager::execStopAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioManager::execPlayAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAbility();
		P_NATIVE_END;
	}
	void UAudioManager::StaticRegisterNativesUAudioManager()
	{
		UClass* Class = UAudioManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayAbility", &UAudioManager::execPlayAbility },
			{ "StopAbility", &UAudioManager::execStopAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioManager_PlayAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioManager_PlayAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AudioManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManager_PlayAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManager, nullptr, "PlayAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_PlayAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManager_PlayAbility_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAudioManager_PlayAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManager_PlayAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioManager_StopAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioManager_StopAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AudioManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioManager_StopAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioManager, nullptr, "StopAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioManager_StopAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioManager_StopAbility_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAudioManager_StopAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioManager_StopAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioManager);
	UClass* Z_Construct_UClass_UAudioManager_NoRegister()
	{
		return UAudioManager::StaticClass();
	}
	struct Z_Construct_UClass_UAudioManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_sounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioManager_PlayAbility, "PlayAbility" }, // 1650690295
		{ &Z_Construct_UFunction_UAudioManager_StopAbility, "StopAbility" }, // 1754673019
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AudioManager.h" },
		{ "ModuleRelativePath", "AudioManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAudioManager_Statics::NewProp_sounds_Inner = { "sounds", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioManager_Statics::NewProp_sounds_MetaData[] = {
		{ "Category", "AudioManager" },
		{ "ModuleRelativePath", "AudioManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioManager_Statics::NewProp_sounds = { "sounds", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAudioManager, sounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManager_Statics::NewProp_sounds_MetaData), Z_Construct_UClass_UAudioManager_Statics::NewProp_sounds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManager_Statics::NewProp_sounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioManager_Statics::NewProp_sounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioManager_Statics::ClassParams = {
		&UAudioManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAudioManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAudioManager()
	{
		if (!Z_Registration_Info_UClass_UAudioManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioManager.OuterSingleton, Z_Construct_UClass_UAudioManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioManager.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<UAudioManager>()
	{
		return UAudioManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioManager);
	UAudioManager::~UAudioManager() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_AudioManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_AudioManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioManager, UAudioManager::StaticClass, TEXT("UAudioManager"), &Z_Registration_Info_UClass_UAudioManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioManager), 1635448071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_AudioManager_h_236326444(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_AudioManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_AudioManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
