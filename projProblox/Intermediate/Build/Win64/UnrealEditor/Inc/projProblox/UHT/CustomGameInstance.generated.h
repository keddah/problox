// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJPROBLOX_CustomGameInstance_generated_h
#error "CustomGameInstance.generated.h already included, missing '#pragma once' in CustomGameInstance.h"
#endif
#define PROJPROBLOX_CustomGameInstance_generated_h

#define FID_projProblox_Source_projProblox_CustomGameInstance_h_20_SPARSE_DATA
#define FID_projProblox_Source_projProblox_CustomGameInstance_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_CustomGameInstance_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_CustomGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadSave);


#define FID_projProblox_Source_projProblox_CustomGameInstance_h_20_ACCESSORS
#define FID_projProblox_Source_projProblox_CustomGameInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomGameInstance(); \
	friend struct Z_Construct_UClass_UCustomGameInstance_Statics; \
public: \
	DECLARE_CLASS(UCustomGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(UCustomGameInstance)


#define FID_projProblox_Source_projProblox_CustomGameInstance_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGameInstance(UCustomGameInstance&&); \
	NO_API UCustomGameInstance(const UCustomGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGameInstance) \
	NO_API virtual ~UCustomGameInstance();


#define FID_projProblox_Source_projProblox_CustomGameInstance_h_17_PROLOG
#define FID_projProblox_Source_projProblox_CustomGameInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projProblox_Source_projProblox_CustomGameInstance_h_20_SPARSE_DATA \
	FID_projProblox_Source_projProblox_CustomGameInstance_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_CustomGameInstance_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_CustomGameInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_CustomGameInstance_h_20_ACCESSORS \
	FID_projProblox_Source_projProblox_CustomGameInstance_h_20_INCLASS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_CustomGameInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class UCustomGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projProblox_Source_projProblox_CustomGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
