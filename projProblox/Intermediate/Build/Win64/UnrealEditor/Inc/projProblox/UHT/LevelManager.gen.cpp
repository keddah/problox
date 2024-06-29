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
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ALevelManager();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ALevelManager_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ASpawnPoint_NoRegister();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
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
			bool save;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_levelIndex;
		static void NewProp_save_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_save;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_levelIndex = { "levelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_projProblox_eventOnChangedLevels_Parms, levelIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_save_SetBit(void* Obj)
	{
		((_Script_projProblox_eventOnChangedLevels_Parms*)Obj)->save = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_save = { "save", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_projProblox_eventOnChangedLevels_Parms), &Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_save_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_levelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature_Statics::NewProp_save,
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
void FOnChangedLevels_DelegateWrapper(const FMulticastScriptDelegate& OnChangedLevels, int32 levelIndex, bool save)
{
	struct _Script_projProblox_eventOnChangedLevels_Parms
	{
		int32 levelIndex;
		bool save;
	};
	_Script_projProblox_eventOnChangedLevels_Parms Parms;
	Parms.levelIndex=levelIndex;
	Parms.save=save ? true : false;
	OnChangedLevels.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ALevelManager::execGetLevel3Screenshots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTexture*>*)Z_Param__Result=P_THIS->GetLevel3Screenshots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execGetLevel2Screenshots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTexture*>*)Z_Param__Result=P_THIS->GetLevel2Screenshots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execGetLevel1Screenshots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTexture*>*)Z_Param__Result=P_THIS->GetLevel1Screenshots();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(ALevelManager::execPrintCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execGetCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execUnloadAllLevels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadAllLevels();
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
		P_GET_UBOOL(Z_Param_initialLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadLevel(Z_Param_lvlIndex,Z_Param_spawnPoint,Z_Param_initialLoad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execSetLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelManager::execSaveSpawns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveSpawns();
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
			{ "GetCurrentLevel", &ALevelManager::execGetCurrentLevel },
			{ "GetLevel1Screenshots", &ALevelManager::execGetLevel1Screenshots },
			{ "GetLevel1Spawns", &ALevelManager::execGetLevel1Spawns },
			{ "GetLevel2Screenshots", &ALevelManager::execGetLevel2Screenshots },
			{ "GetLevel2Spawns", &ALevelManager::execGetLevel2Spawns },
			{ "GetLevel3Screenshots", &ALevelManager::execGetLevel3Screenshots },
			{ "GetLevel3Spawns", &ALevelManager::execGetLevel3Spawns },
			{ "LoadLevel", &ALevelManager::execLoadLevel },
			{ "OnHidden", &ALevelManager::execOnHidden },
			{ "OnShown", &ALevelManager::execOnShown },
			{ "PrintCurrentLevel", &ALevelManager::execPrintCurrentLevel },
			{ "SaveSpawns", &ALevelManager::execSaveSpawns },
			{ "SetLoading", &ALevelManager::execSetLoading },
			{ "UnloadAllLevels", &ALevelManager::execUnloadAllLevels },
			{ "UnloadUnusedLevels", &ALevelManager::execUnloadUnusedLevels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	struct Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics
	{
		struct LevelManager_eventGetLevel1Screenshots_Parms
		{
			TArray<UTexture*> ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventGetLevel1Screenshots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "GetLevel1Screenshots", nullptr, nullptr, Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::LevelManager_eventGetLevel1Screenshots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::LevelManager_eventGetLevel1Screenshots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots_Statics::FuncParams);
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
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASpawnPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventGetLevel1Spawns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel1Spawns_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
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
	struct Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics
	{
		struct LevelManager_eventGetLevel2Screenshots_Parms
		{
			TArray<UTexture*> ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventGetLevel2Screenshots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "GetLevel2Screenshots", nullptr, nullptr, Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::LevelManager_eventGetLevel2Screenshots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::LevelManager_eventGetLevel2Screenshots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots_Statics::FuncParams);
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
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASpawnPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel2Spawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventGetLevel2Spawns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
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
	struct Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics
	{
		struct LevelManager_eventGetLevel3Screenshots_Parms
		{
			TArray<UTexture*> ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventGetLevel3Screenshots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "GetLevel3Screenshots", nullptr, nullptr, Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::LevelManager_eventGetLevel3Screenshots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::LevelManager_eventGetLevel3Screenshots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots_Statics::FuncParams);
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
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASpawnPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelManager_GetLevel3Spawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelManager_eventGetLevel3Spawns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
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
			bool initialLoad;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_lvlIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_spawnPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initialLoad_MetaData[];
#endif
		static void NewProp_initialLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_initialLoad;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_initialLoad_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_initialLoad_SetBit(void* Obj)
	{
		((LevelManager_eventLoadLevel_Parms*)Obj)->initialLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_initialLoad = { "initialLoad", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelManager_eventLoadLevel_Parms), &Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_initialLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_initialLoad_MetaData), Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_initialLoad_MetaData) };
	void Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelManager_eventLoadLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelManager_eventLoadLevel_Parms), &Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_lvlIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_spawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_initialLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_LoadLevel_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the loaded level. Initial load is only for the build level (when it's first loaded up in the level manager blueprint) \n" },
#endif
		{ "CPP_Default_initialLoad", "false" },
		{ "CPP_Default_spawnPoint", "0" },
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the loaded level. Initial load is only for the build level (when it's first loaded up in the level manager blueprint)" },
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
	struct Z_Construct_UFunction_ALevelManager_OnHidden_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_OnHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
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
		{ "ModuleRelativePath", "LevelManager.h" },
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_PrintCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "PrintCurrentLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_PrintCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_PrintCurrentLevel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelManager_PrintCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_PrintCurrentLevel_Statics::FuncParams);
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
		{ "ModuleRelativePath", "LevelManager.h" },
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
	struct Z_Construct_UFunction_ALevelManager_SetLoading_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelManager_SetLoading_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelManager_SetLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelManager, nullptr, "SetLoading", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelManager_SetLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelManager_SetLoading_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelManager_SetLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelManager_SetLoading_Statics::FuncParams);
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hides every single level.\n" },
#endif
		{ "ModuleRelativePath", "LevelManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hides every single level." },
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onLevelChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onLevelChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onSpawnChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSpawnChanged;
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
		{ &Z_Construct_UFunction_ALevelManager_GetCurrentLevel, "GetCurrentLevel" }, // 257163267
		{ &Z_Construct_UFunction_ALevelManager_GetLevel1Screenshots, "GetLevel1Screenshots" }, // 1598109973
		{ &Z_Construct_UFunction_ALevelManager_GetLevel1Spawns, "GetLevel1Spawns" }, // 1323057479
		{ &Z_Construct_UFunction_ALevelManager_GetLevel2Screenshots, "GetLevel2Screenshots" }, // 3949829570
		{ &Z_Construct_UFunction_ALevelManager_GetLevel2Spawns, "GetLevel2Spawns" }, // 3792744041
		{ &Z_Construct_UFunction_ALevelManager_GetLevel3Screenshots, "GetLevel3Screenshots" }, // 491255176
		{ &Z_Construct_UFunction_ALevelManager_GetLevel3Spawns, "GetLevel3Spawns" }, // 461800045
		{ &Z_Construct_UFunction_ALevelManager_LoadLevel, "LoadLevel" }, // 1725365563
		{ &Z_Construct_UFunction_ALevelManager_OnHidden, "OnHidden" }, // 899158313
		{ &Z_Construct_UFunction_ALevelManager_OnShown, "OnShown" }, // 3579765318
		{ &Z_Construct_UFunction_ALevelManager_PrintCurrentLevel, "PrintCurrentLevel" }, // 4221123980
		{ &Z_Construct_UFunction_ALevelManager_SaveSpawns, "SaveSpawns" }, // 227645982
		{ &Z_Construct_UFunction_ALevelManager_SetLoading, "SetLoading" }, // 1979334078
		{ &Z_Construct_UFunction_ALevelManager_UnloadAllLevels, "UnloadAllLevels" }, // 2865920579
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_onLevelChanged_MetaData[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_onLevelChanged = { "onLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelManager, onLevelChanged), Z_Construct_UDelegateFunction_projProblox_OnChangedLevels__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_onLevelChanged_MetaData), Z_Construct_UClass_ALevelManager_Statics::NewProp_onLevelChanged_MetaData) }; // 2739233177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelManager_Statics::NewProp_onSpawnChanged_MetaData[] = {
		{ "ModuleRelativePath", "LevelManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALevelManager_Statics::NewProp_onSpawnChanged = { "onSpawnChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelManager, onSpawnChanged), Z_Construct_UDelegateFunction_projProblox_OnChangedSpawn__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelManager_Statics::NewProp_onSpawnChanged_MetaData), Z_Construct_UClass_ALevelManager_Statics::NewProp_onSpawnChanged_MetaData) }; // 1927768340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_bLevelLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_levels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_onLevelChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelManager_Statics::NewProp_onSpawnChanged,
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
		{ Z_Construct_UClass_ALevelManager, ALevelManager::StaticClass, TEXT("ALevelManager"), &Z_Registration_Info_UClass_ALevelManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelManager), 2068026750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_2857914592(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
