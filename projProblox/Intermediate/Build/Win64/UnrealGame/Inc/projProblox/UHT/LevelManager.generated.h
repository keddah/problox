// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASpawnPoint;
class UTexture;
enum class ELevel : uint8;
#ifdef PROJPROBLOX_LevelManager_generated_h
#error "LevelManager.generated.h already included, missing '#pragma once' in LevelManager.h"
#endif
#define PROJPROBLOX_LevelManager_generated_h

#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_23_DELEGATE \
PROJPROBLOX_API void FOnLoadingLevel_DelegateWrapper(const FMulticastScriptDelegate& OnLoadingLevel);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_24_DELEGATE \
PROJPROBLOX_API void FOnScreenshotsTaken_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotsTaken);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_25_DELEGATE \
PROJPROBLOX_API void FOnChangedSpawn_DelegateWrapper(const FMulticastScriptDelegate& OnChangedSpawn, int32 spawn);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_26_DELEGATE \
PROJPROBLOX_API void FOnChangedLevels_DelegateWrapper(const FMulticastScriptDelegate& OnChangedLevels, int32 levelIndex, ELevel newLevel);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_SPARSE_DATA
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrintCurrentLevel); \
	DECLARE_FUNCTION(execGetLevel3Screenshots); \
	DECLARE_FUNCTION(execGetLevel2Screenshots); \
	DECLARE_FUNCTION(execGetLevel1Screenshots); \
	DECLARE_FUNCTION(execGetLevel3Spawns); \
	DECLARE_FUNCTION(execGetLevel2Spawns); \
	DECLARE_FUNCTION(execGetLevel1Spawns); \
	DECLARE_FUNCTION(execGetCurrentLevel); \
	DECLARE_FUNCTION(execUnloadUnusedLevels); \
	DECLARE_FUNCTION(execLoadLevel); \
	DECLARE_FUNCTION(execFindSpawns); \
	DECLARE_FUNCTION(execSaveSpawns); \
	DECLARE_FUNCTION(execSetIsLoading); \
	DECLARE_FUNCTION(execOnShown); \
	DECLARE_FUNCTION(execOnHidden);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelManager(); \
	friend struct Z_Construct_UClass_ALevelManager_Statics; \
public: \
	DECLARE_CLASS(ALevelManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(ALevelManager)


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelManager(ALevelManager&&); \
	NO_API ALevelManager(const ALevelManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelManager) \
	NO_API virtual ~ALevelManager();


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_29_PROLOG
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_SPARSE_DATA \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class ALevelManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
