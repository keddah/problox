// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/LevelManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ALevelManager();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ALevelManager_NoRegister();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics
	{
		struct _Script_projProblox_eventOnChangedLevels_Parms
		{
			int32 levelIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_levelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_levelIndex = { "levelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_projProblox_eventOnChangedLevels_Parms, levelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_levelIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnChangedLevels__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::_Script_projProblox_eventOnChangedLevels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::_Script_projProblox_eventOnChangedLevels_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChangedLevels_DelegateWrapper(const FMulticastScriptDelegate& OnChangedLevels, int32 levelIndex)
{
	struct _Script_projProblox_eventOnChangedLevels_Parms
	{
		int32 levelIndex;
	};
	_Script_projProblox_eventOnChangedLevels_Parms Parms;
	Parms.levelIndex=levelIndex;
	OnChangedLevels.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ALevelManager::execPrintCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execUnloadAllLevels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadAllLevels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execInitLoadLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_lvlIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitLoadLevel(Z_Param_lvlIndex);
		P_NATIVE_END;
	}
	void ALevelManager::StaticRegisterNativesALevelManager()
	{
		UClass* Class = ALevelManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitLoadLevel", &ALevelManager::execInitLoadLevel },
			{ "PrintCurrentLevel", &ALevelManager::execPrintCurrentLevel },
			{ "UnloadAllLevels", &ALevelManager::execUnloadAllLevels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics
	{
		struct LevelManager_eventInitLoadLevel_Parms
		{
			int32 lvlIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_lvlIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::NewProp_lvlIndex = { "lvlIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventInitLoadLevel_Parms, lvlIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::NewProp_lvlIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the loaded level. \n" },
#endif
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the loaded level." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "InitLoadLevel", nullptr, nullptr, Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::LevelManager_eventInitLoadLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::LevelManager_eventInitLoadLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelManager_InitLoadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_InitLoadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_PrintCurrentLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_PrintCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_PrintCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "PrintCurrentLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_PrintCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_PrintCurrentLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelManager_PrintCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_PrintCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_UnloadAllLevels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_UnloadAllLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unloads all the levels apart from the current level." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_UnloadAllLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "UnloadAllLevels", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_UnloadAllLevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_UnloadAllLevels_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelManager_UnloadAllLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_UnloadAllLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelManager);
	UClass* Z_Construct_UClass_ALevelManager_NoRegister()
	{
		return ALevelManager::StaticClass();
	}
	struct Z_Construct_UClass_ALevelManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLevelLoading_MetaData[];
#endif
		static void NewProp_bLevelLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLevelLoading;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_levels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_levels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelManager_InitLoadLevel, "InitLoadLevel" }, // 3493453917
		{ &Z_Construct_UFunction_ALevelManager_PrintCurrentLevel, "PrintCurrentLevel" }, // 455026106
		{ &Z_Construct_UFunction_ALevelManager_UnloadAllLevels, "UnloadAllLevels" }, // 2294205534
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelManager.h" },
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_bLevelLoading_MetaData[] = {
		{ "Category", "LevelManager" },
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	void Z_Construct_UClass_ALevelManager_Statics::NewProp_bLevelLoading_SetBit(void* Obj)
	{
		((ALevelManager*)Obj)->bLevelLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_bLevelLoading = { "bLevelLoading", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALevelManager), &Z_Construct_UClass_ALevelManager_Statics::NewProp_bLevelLoading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_bLevelLoading_MetaData), Z_Construct_UClass_ALevelManager_Statics::NewProp_bLevelLoading_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_levels_Inner = { "levels", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_levels_MetaData[] = {
		{ "Category", "LevelManager" },
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_levels = { "levels", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelManager, levels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_levels_MetaData), Z_Construct_UClass_ALevelManager_Statics::NewProp_levels_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_bLevelLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_levels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_levels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelManager_Statics::ClassParams = {
		&ALevelManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALevelManager()
	{
		if (!Z_Registration_Info_UClass_ALevelManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelManager.OuterSingleton, Z_Construct_UClass_ALevelManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelManager.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ALevelManager>()
	{
		return ALevelManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelManager);
	ALevelManager::~ALevelManager() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelManager, ALevelManager::StaticClass, TEXT("ALevelManager"), &Z_Registration_Info_UClass_ALevelManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelManager), 2803068857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_1560698482(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
