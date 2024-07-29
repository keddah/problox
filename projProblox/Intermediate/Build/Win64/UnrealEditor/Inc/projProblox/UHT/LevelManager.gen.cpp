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
	PROJPROBLOX_API UClass* Z_Construct_UClass_ASpawnPoint_NoRegister();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_ELevel();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnFirstLoad__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnLoadingLevel__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_projProblox_OnLoadingLevel__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnLoadingLevel__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnLoadingLevel__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnLoadingLevel__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnLoadingLevel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnLoadingLevel__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnLoadingLevel__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnLoadingLevel__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLoadingLevel_DelegateWrapper(const FMulticastScriptDelegate& OnLoadingLevel)
{
	OnLoadingLevel.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_projProblox_OnFirstLoad__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnFirstLoad__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnScreenshotsTaken);\n" },
#endif
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnScreenshotsTaken);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnFirstLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnFirstLoad__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnFirstLoad__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnFirstLoad__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnFirstLoad__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnFirstLoad__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFirstLoad_DelegateWrapper(const FMulticastScriptDelegate& OnFirstLoad)
{
	OnFirstLoad.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics
	{
		struct _Script_projProblox_eventOnChangedSpawn_Parms
		{
			int32 spawn;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_spawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::NewProp_spawn = { "spawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_projProblox_eventOnChangedSpawn_Parms, spawn), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::NewProp_spawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnChangedSpawn__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::_Script_projProblox_eventOnChangedSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::_Script_projProblox_eventOnChangedSpawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChangedSpawn_DelegateWrapper(const FMulticastScriptDelegate& OnChangedSpawn, int32 spawn)
{
	struct _Script_projProblox_eventOnChangedSpawn_Parms
	{
		int32 spawn;
	};
	_Script_projProblox_eventOnChangedSpawn_Parms Parms;
	Parms.spawn=spawn;
	OnChangedSpawn.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics
	{
		struct _Script_projProblox_eventOnChangedLevels_Parms
		{
			int32 levelIndex;
			ELevel newLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_levelIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_newLevel_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_newLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_levelIndex = { "levelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_projProblox_eventOnChangedLevels_Parms, levelIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_newLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_newLevel = { "newLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_projProblox_eventOnChangedLevels_Parms, newLevel), Z_Construct_UEnum_projProblox_ELevel, METADATA_PARAMS(0, nullptr) }; // 1235914906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_levelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_newLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_newLevel,
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
void FOnChangedLevels_DelegateWrapper(const FMulticastScriptDelegate& OnChangedLevels, int32 levelIndex, ELevel newLevel)
{
	struct _Script_projProblox_eventOnChangedLevels_Parms
	{
		int32 levelIndex;
		ELevel newLevel;
	};
	_Script_projProblox_eventOnChangedLevels_Parms Parms;
	Parms.levelIndex=levelIndex;
	Parms.newLevel=newLevel;
	OnChangedLevels.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ALevelManager::execGetLevel3Spawns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASpawnPoint*>*)Z_Param__Result=P_THIS->GetLevel3Spawns();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execGetLevel2Spawns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASpawnPoint*>*)Z_Param__Result=P_THIS->GetLevel2Spawns();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execGetLevel1Spawns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ASpawnPoint*>*)Z_Param__Result=P_THIS->GetLevel1Spawns();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execGetCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execUnloadUnusedLevels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadUnusedLevels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execLoadLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_lvlIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_spawnPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadLevel(Z_Param_lvlIndex,Z_Param_spawnPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execFindSpawns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindSpawns();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execSaveSpawns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveSpawns();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execOnFirstSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFirstSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execSetIsLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execOnShown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execOnHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHidden();
		P_NATIVE_END;
	}
	void ALevelManager::StaticRegisterNativesALevelManager()
	{
		UClass* Class = ALevelManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSpawns", &ALevelManager::execFindSpawns },
			{ "GetCurrentLevel", &ALevelManager::execGetCurrentLevel },
			{ "GetLevel1Spawns", &ALevelManager::execGetLevel1Spawns },
			{ "GetLevel2Spawns", &ALevelManager::execGetLevel2Spawns },
			{ "GetLevel3Spawns", &ALevelManager::execGetLevel3Spawns },
			{ "LoadLevel", &ALevelManager::execLoadLevel },
			{ "OnFirstSpawn", &ALevelManager::execOnFirstSpawn },
			{ "OnHidden", &ALevelManager::execOnHidden },
			{ "OnShown", &ALevelManager::execOnShown },
			{ "SaveSpawns", &ALevelManager::execSaveSpawns },
			{ "SetIsLoading", &ALevelManager::execSetIsLoading },
			{ "UnloadUnusedLevels", &ALevelManager::execUnloadUnusedLevels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelManager_FindSpawns_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_FindSpawns_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Run on beginPlay\n" },
#endif
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run on beginPlay" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_FindSpawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "FindSpawns", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_FindSpawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_FindSpawns_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelManager_FindSpawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_FindSpawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics
	{
		struct LevelManager_eventGetCurrentLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventGetCurrentLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the level index of the current level." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "GetCurrentLevel", nullptr, nullptr, Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::LevelManager_eventGetCurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::LevelManager_eventGetCurrentLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelManager_GetCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_GetCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics
	{
		struct LevelManager_eventGetLevel1Spawns_Parms
		{
			TArray<ASpawnPoint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASpawnPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventGetLevel1Spawns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// These return the spawn points from each level\n" },
#endif
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These return the spawn points from each level" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "GetLevel1Spawns", nullptr, nullptr, Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::LevelManager_eventGetLevel1Spawns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::LevelManager_eventGetLevel1Spawns_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelManager_GetLevel1Spawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics
	{
		struct LevelManager_eventGetLevel2Spawns_Parms
		{
			TArray<ASpawnPoint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASpawnPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventGetLevel2Spawns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "GetLevel2Spawns", nullptr, nullptr, Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::LevelManager_eventGetLevel2Spawns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::LevelManager_eventGetLevel2Spawns_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelManager_GetLevel2Spawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics
	{
		struct LevelManager_eventGetLevel3Spawns_Parms
		{
			TArray<ASpawnPoint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASpawnPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventGetLevel3Spawns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "GetLevel3Spawns", nullptr, nullptr, Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::LevelManager_eventGetLevel3Spawns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::LevelManager_eventGetLevel3Spawns_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelManager_GetLevel3Spawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_LoadLevel_Statics
	{
		struct LevelManager_eventLoadLevel_Parms
		{
			int32 lvlIndex;
			int32 spawnPoint;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_lvlIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_spawnPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_lvlIndex = { "lvlIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventLoadLevel_Parms, lvlIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_spawnPoint = { "spawnPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventLoadLevel_Parms, spawnPoint), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelManager_eventLoadLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelManager_eventLoadLevel_Parms), &Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_lvlIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_spawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////// FUNCTIONS ///////////////////////////\n// Returns whether the loaded level. Initial load is only for the build level (when it's first loaded up in the level manager blueprint) \n" },
#endif
		{ "CPP_Default_spawnPoint", "0" },
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FUNCTIONS\nReturns whether the loaded level. Initial load is only for the build level (when it's first loaded up in the level manager blueprint)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "LoadLevel", nullptr, nullptr, Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::LevelManager_eventLoadLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::LevelManager_eventLoadLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelManager_LoadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_OnFirstSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_OnFirstSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_OnFirstSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "OnFirstSpawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_OnFirstSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_OnFirstSpawn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelManager_OnFirstSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_OnFirstSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_OnHidden_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_OnHidden_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////// FUNCTIONS ///////////////////////////\n/////////// DELEGATE FUNCTIONS ///////////\n// Function called when the unload delegate is broadcast..\n" },
#endif
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FUNCTIONS\nDELEGATE FUNCTIONS\nFunction called when the unload delegate is broadcast.." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_OnHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "OnHidden", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_OnHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_OnHidden_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelManager_OnHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_OnHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_OnShown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_OnShown_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function called when the load delegate is broadcast..\n" },
#endif
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when the load delegate is broadcast.." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_OnShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "OnShown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_OnShown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_OnShown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelManager_OnShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_OnShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_SaveSpawns_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_SaveSpawns_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function called when the new spawn unlocked delegate is broadcast..\n" },
#endif
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when the new spawn unlocked delegate is broadcast.." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_SaveSpawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "SaveSpawns", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_SaveSpawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_SaveSpawns_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelManager_SaveSpawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_SaveSpawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_SetIsLoading_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_SetIsLoading_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function called when the loading delegate is broadcast..\n" },
#endif
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function called when the loading delegate is broadcast.." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_SetIsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "SetIsLoading", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_SetIsLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_SetIsLoading_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelManager_SetIsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_SetIsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelManager_UnloadUnusedLevels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_UnloadUnusedLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hides all the levels apart from the current level." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_UnloadUnusedLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "UnloadUnusedLevels", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_UnloadUnusedLevels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_UnloadUnusedLevels_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelManager_UnloadUnusedLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_UnloadUnusedLevels_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onLoadingLevel_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onLoadingLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onLevelChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onLevelChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onSpawnChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSpawnChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onFirstLoad_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFirstLoad;
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
		{ &Z_Construct_UFunction_ALevelManager_FindSpawns, "FindSpawns" }, // 587090323
		{ &Z_Construct_UFunction_ALevelManager_GetCurrentLevel, "GetCurrentLevel" }, // 257163267
		{ &Z_Construct_UFunction_ALevelManager_GetLevel1Spawns, "GetLevel1Spawns" }, // 3445442489
		{ &Z_Construct_UFunction_ALevelManager_GetLevel2Spawns, "GetLevel2Spawns" }, // 2339672390
		{ &Z_Construct_UFunction_ALevelManager_GetLevel3Spawns, "GetLevel3Spawns" }, // 1683549394
		{ &Z_Construct_UFunction_ALevelManager_LoadLevel, "LoadLevel" }, // 2367168764
		{ &Z_Construct_UFunction_ALevelManager_OnFirstSpawn, "OnFirstSpawn" }, // 3233166158
		{ &Z_Construct_UFunction_ALevelManager_OnHidden, "OnHidden" }, // 2857873469
		{ &Z_Construct_UFunction_ALevelManager_OnShown, "OnShown" }, // 3455925180
		{ &Z_Construct_UFunction_ALevelManager_SaveSpawns, "SaveSpawns" }, // 1746644647
		{ &Z_Construct_UFunction_ALevelManager_SetIsLoading, "SetIsLoading" }, // 3544637251
		{ &Z_Construct_UFunction_ALevelManager_UnloadUnusedLevels, "UnloadUnusedLevels" }, // 3862849941
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_onLoadingLevel_MetaData[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_onLoadingLevel = { "onLoadingLevel", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelManager, onLoadingLevel), Z_Construct_UDelegateFunction_projProblox_OnLoadingLevel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_onLoadingLevel_MetaData), Z_Construct_UClass_ALevelManager_Statics::NewProp_onLoadingLevel_MetaData) }; // 1426361282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_onLevelChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////// VARIABLES ///////////////////////////\n////////////// DELEGATES ///////////\n" },
#endif
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VARIABLES\nDELEGATES" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_onLevelChanged = { "onLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelManager, onLevelChanged), Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_onLevelChanged_MetaData), Z_Construct_UClass_ALevelManager_Statics::NewProp_onLevelChanged_MetaData) }; // 1446319119
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_onSpawnChanged_MetaData[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_onSpawnChanged = { "onSpawnChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelManager, onSpawnChanged), Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_onSpawnChanged_MetaData), Z_Construct_UClass_ALevelManager_Statics::NewProp_onSpawnChanged_MetaData) }; // 1927768340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_onFirstLoad_MetaData[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_onFirstLoad = { "onFirstLoad", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelManager, onFirstLoad), Z_Construct_UDelegateFunction_projProblox_OnFirstLoad__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_onFirstLoad_MetaData), Z_Construct_UClass_ALevelManager_Statics::NewProp_onFirstLoad_MetaData) }; // 3194864220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_bLevelLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_levels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_onLoadingLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_onLevelChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_onSpawnChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_onFirstLoad,
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
		{ Z_Construct_UClass_ALevelManager, ALevelManager::StaticClass, TEXT("ALevelManager"), &Z_Registration_Info_UClass_ALevelManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelManager), 2858133449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_809198532(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
