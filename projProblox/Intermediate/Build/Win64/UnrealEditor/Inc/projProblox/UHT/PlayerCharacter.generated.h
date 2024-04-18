// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef PROJPROBLOX_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define PROJPROBLOX_PlayerCharacter_generated_h

#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_SPARSE_DATA
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execDetach); \
	DECLARE_FUNCTION(execDeselect); \
	DECLARE_FUNCTION(execMoveSelection); \
	DECLARE_FUNCTION(execGroupSelect); \
	DECLARE_FUNCTION(execSelectObject);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_18_PROLOG
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_SPARSE_DATA \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PlayerCharacter_h


#define FOREACH_ENUM_EOPERATIONS(op) \
	op(EOperations::Attach) \
	op(EOperations::Detach) \
	op(EOperations::Move) 

enum class EOperations : uint8;
template<> struct TIsUEnumClass<EOperations> { enum { Value = true }; };
template<> PROJPROBLOX_API UEnum* StaticEnum<EOperations>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
