// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveFiles.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayerSettings;
#ifdef PROJPROBLOX_SaveFiles_generated_h
#error "SaveFiles.generated.h already included, missing '#pragma once' in SaveFiles.h"
#endif
#define PROJPROBLOX_SaveFiles_generated_h

#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_SPARSE_DATA
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpawnSaves(); \
	friend struct Z_Construct_UClass_USpawnSaves_Statics; \
public: \
	DECLARE_CLASS(USpawnSaves, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(USpawnSaves)


#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpawnSaves(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpawnSaves(USpawnSaves&&); \
	NO_API USpawnSaves(const USpawnSaves&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpawnSaves); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpawnSaves); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpawnSaves) \
	NO_API virtual ~USpawnSaves();


#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_23_PROLOG
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_SPARSE_DATA \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_INCLASS_NO_PURE_DECLS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class USpawnSaves>();

#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerSettings_Statics; \
	PROJPROBLOX_API static class UScriptStruct* StaticStruct();


template<> PROJPROBLOX_API UScriptStruct* StaticStruct<struct FPlayerSettings>();

#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_SPARSE_DATA
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSettings); \
	DECLARE_FUNCTION(execSetSfxMuted); \
	DECLARE_FUNCTION(execSetSfxVolume); \
	DECLARE_FUNCTION(execSetMusicMuted); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execSetSensitivityY); \
	DECLARE_FUNCTION(execSetSensitivityX); \
	DECLARE_FUNCTION(execSetAttachOnRelease); \
	DECLARE_FUNCTION(execSetToggleSelection);


#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSettingsSave(); \
	friend struct Z_Construct_UClass_USettingsSave_Statics; \
public: \
	DECLARE_CLASS(USettingsSave, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(USettingsSave)


#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USettingsSave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USettingsSave(USettingsSave&&); \
	NO_API USettingsSave(const USettingsSave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USettingsSave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USettingsSave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USettingsSave) \
	NO_API virtual ~USettingsSave();


#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_63_PROLOG
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_SPARSE_DATA \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_INCLASS_NO_PURE_DECLS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class USettingsSave>();

#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_SPARSE_DATA
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoughtAttachments(); \
	friend struct Z_Construct_UClass_UBoughtAttachments_Statics; \
public: \
	DECLARE_CLASS(UBoughtAttachments, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(UBoughtAttachments)


#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoughtAttachments(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoughtAttachments(UBoughtAttachments&&); \
	NO_API UBoughtAttachments(const UBoughtAttachments&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoughtAttachments); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoughtAttachments); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoughtAttachments) \
	NO_API virtual ~UBoughtAttachments();


#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_104_PROLOG
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_SPARSE_DATA \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_INCLASS_NO_PURE_DECLS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class UBoughtAttachments>();

#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_SPARSE_DATA
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_ACCESSORS
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoneySave(); \
	friend struct Z_Construct_UClass_UMoneySave_Statics; \
public: \
	DECLARE_CLASS(UMoneySave, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(UMoneySave)


#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoneySave(UMoneySave&&); \
	NO_API UMoneySave(const UMoneySave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoneySave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoneySave); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoneySave) \
	NO_API virtual ~UMoneySave();


#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_129_PROLOG
#define FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_SPARSE_DATA \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_ACCESSORS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_INCLASS_NO_PURE_DECLS \
	FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class UMoneySave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
