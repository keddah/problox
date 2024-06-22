// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACubeCore;
class APickupableMaster;
enum class EGameMode : uint8;
struct FHitResult;
#ifdef PROJPROBLOX_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define PROJPROBLOX_PlayerCharacter_generated_h

#define FID_projProblox_Source_projProblox_PlayerCharacter_h_26_SPARSE_DATA
#define FID_projProblox_Source_projProblox_PlayerCharacter_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_PlayerCharacter_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_PlayerCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCore); \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execSpawnFromBuyable); \
	DECLARE_FUNCTION(execBuildControls); \
	DECLARE_FUNCTION(execDetach); \
	DECLARE_FUNCTION(execDeselect); \
	DECLARE_FUNCTION(execMoveSelection); \
	DECLARE_FUNCTION(execGroupSelect); \
	DECLARE_FUNCTION(execSelectObject); \
	DECLARE_FUNCTION(execManualSelectObject); \
	DECLARE_FUNCTION(execGetGameMode); \
	DECLARE_FUNCTION(execSetGameMode); \
	DECLARE_FUNCTION(execCreateDetachHistory); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo);


#define FID_projProblox_Source_projProblox_PlayerCharacter_h_26_ACCESSORS
#define FID_projProblox_Source_projProblox_PlayerCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_projProblox_Source_projProblox_PlayerCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_projProblox_Source_projProblox_PlayerCharacter_h_23_PROLOG
#define FID_projProblox_Source_projProblox_PlayerCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projProblox_Source_projProblox_PlayerCharacter_h_26_SPARSE_DATA \
	FID_projProblox_Source_projProblox_PlayerCharacter_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_PlayerCharacter_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_PlayerCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_PlayerCharacter_h_26_ACCESSORS \
	FID_projProblox_Source_projProblox_PlayerCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_PlayerCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projProblox_Source_projProblox_PlayerCharacter_h


#define FOREACH_ENUM_EGAMEMODE(op) \
	op(EGameMode::Story) \
	op(EGameMode::Wave) \
	op(EGameMode::Assault) \
	op(EGameMode::Creative) \
	op(EGameMode::Build) 

enum class EGameMode : uint8;
template<> struct TIsUEnumClass<EGameMode> { enum { Value = true }; };
template<> PROJPROBLOX_API UEnum* StaticEnum<EGameMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
