// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UndoRedo/ActionHistory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJPROBLOX_ActionHistory_generated_h
#error "ActionHistory.generated.h already included, missing '#pragma once' in ActionHistory.h"
#endif
#define PROJPROBLOX_ActionHistory_generated_h

#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTask_Statics; \
	PROJPROBLOX_API static class UScriptStruct* StaticStruct();


template<> PROJPROBLOX_API UScriptStruct* StaticStruct<struct FTask>();

#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_SPARSE_DATA
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActionHistory(); \
	friend struct Z_Construct_UClass_UActionHistory_Statics; \
public: \
	DECLARE_CLASS(UActionHistory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(UActionHistory)


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActionHistory(UActionHistory&&); \
	NO_API UActionHistory(const UActionHistory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActionHistory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActionHistory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActionHistory) \
	NO_API virtual ~UActionHistory();


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_41_PROLOG
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_SPARSE_DATA \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_INCLASS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class UActionHistory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h


#define FOREACH_ENUM_EOPERATIONS(op) \
	op(EOperations::Attach) \
	op(EOperations::Detach) \
	op(EOperations::Move) 

enum class EOperations : uint8;
template<> struct TIsUEnumClass<EOperations> { enum { Value = true }; };
template<> PROJPROBLOX_API UEnum* StaticEnum<EOperations>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
