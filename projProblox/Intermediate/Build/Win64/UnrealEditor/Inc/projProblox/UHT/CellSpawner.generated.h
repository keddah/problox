// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cells/CellSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACellSpawner;
class ULevelObjective;
enum class ELevel : uint8;
#ifdef PROJPROBLOX_CellSpawner_generated_h
#error "CellSpawner.generated.h already included, missing '#pragma once' in CellSpawner.h"
#endif
#define PROJPROBLOX_CellSpawner_generated_h

#define FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_19_DELEGATE \
PROJPROBLOX_API void FOnSpawnTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnSpawnTriggered, ACellSpawner* triggeredSpawner);


#define FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_SPARSE_DATA
#define FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetObjective); \
	DECLARE_FUNCTION(execHasObjective); \
	DECLARE_FUNCTION(execGetLevelEnum); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execOverlap);


#define FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACellSpawner(); \
	friend struct Z_Construct_UClass_ACellSpawner_Statics; \
public: \
	DECLARE_CLASS(ACellSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(ACellSpawner)


#define FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACellSpawner(ACellSpawner&&); \
	NO_API ACellSpawner(const ACellSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACellSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACellSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACellSpawner) \
	NO_API virtual ~ACellSpawner();


#define FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_32_PROLOG
#define FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_SPARSE_DATA \
	FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_INCLASS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class ACellSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Uni_problox_projProblox_Source_projProblox_Cells_CellSpawner_h


#define FOREACH_ENUM_ECELLTYPE(op) \
	op(ECellType::Normal) \
	op(ECellType::Bouncy) \
	op(ECellType::Slippery) \
	op(ECellType::Hover) \
	op(ECellType::Sticky) 

enum class ECellType : uint8;
template<> struct TIsUEnumClass<ECellType> { enum { Value = true }; };
template<> PROJPROBLOX_API UEnum* StaticEnum<ECellType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
