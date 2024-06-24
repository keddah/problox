// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpawnPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJPROBLOX_SpawnPoint_generated_h
#error "SpawnPoint.generated.h already included, missing '#pragma once' in SpawnPoint.h"
#endif
#define PROJPROBLOX_SpawnPoint_generated_h

#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_14_DELEGATE \
PROJPROBLOX_API void FOnNewSpawn_DelegateWrapper(const FMulticastScriptDelegate& OnNewSpawn);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_SPARSE_DATA
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLevelIndex); \
	DECLARE_FUNCTION(execUnlockPoint);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnPoint(); \
	friend struct Z_Construct_UClass_ASpawnPoint_Statics; \
public: \
	DECLARE_CLASS(ASpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(ASpawnPoint)


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnPoint(ASpawnPoint&&); \
	NO_API ASpawnPoint(const ASpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnPoint) \
	NO_API virtual ~ASpawnPoint();


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_25_PROLOG
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_SPARSE_DATA \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class ASpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_SpawnPoint_h


#define FOREACH_ENUM_ELEVEL(op) \
	op(ELevel::BuildArea) \
	op(ELevel::Bedroom) \
	op(ELevel::Kitchen) \
	op(ELevel::Bathroom) 

enum class ELevel : uint8;
template<> struct TIsUEnumClass<ELevel> { enum { Value = true }; };
template<> PROJPROBLOX_API UEnum* StaticEnum<ELevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
