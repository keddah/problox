// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Collector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJPROBLOX_Collector_generated_h
#error "Collector.generated.h already included, missing '#pragma once' in Collector.h"
#endif
#define PROJPROBLOX_Collector_generated_h

#define FID_projProblox_Source_projProblox_Collector_h_21_SPARSE_DATA
#define FID_projProblox_Source_projProblox_Collector_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_Collector_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_Collector_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddThing); \
	DECLARE_FUNCTION(execGetCollectPoint); \
	DECLARE_FUNCTION(execCalculateCellCount);


#define FID_projProblox_Source_projProblox_Collector_h_21_ACCESSORS
#define FID_projProblox_Source_projProblox_Collector_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollector(); \
	friend struct Z_Construct_UClass_ACollector_Statics; \
public: \
	DECLARE_CLASS(ACollector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(ACollector)


#define FID_projProblox_Source_projProblox_Collector_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollector(ACollector&&); \
	NO_API ACollector(const ACollector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollector) \
	NO_API virtual ~ACollector();


#define FID_projProblox_Source_projProblox_Collector_h_18_PROLOG
#define FID_projProblox_Source_projProblox_Collector_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projProblox_Source_projProblox_Collector_h_21_SPARSE_DATA \
	FID_projProblox_Source_projProblox_Collector_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_Collector_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_Collector_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_Collector_h_21_ACCESSORS \
	FID_projProblox_Source_projProblox_Collector_h_21_INCLASS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_Collector_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class ACollector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projProblox_Source_projProblox_Collector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
