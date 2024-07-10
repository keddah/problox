// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/Modes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACubeCore;
#ifdef PROJPROBLOX_Modes_generated_h
#error "Modes.generated.h already included, missing '#pragma once' in Modes.h"
#endif
#define PROJPROBLOX_Modes_generated_h

#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_SPARSE_DATA
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMode_Story(); \
	friend struct Z_Construct_UClass_AMode_Story_Statics; \
public: \
	DECLARE_CLASS(AMode_Story, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(AMode_Story)


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMode_Story(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMode_Story(AMode_Story&&); \
	NO_API AMode_Story(const AMode_Story&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMode_Story); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMode_Story); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMode_Story) \
	NO_API virtual ~AMode_Story();


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_19_PROLOG
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_SPARSE_DATA \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_INCLASS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class AMode_Story>();

#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_29_DELEGATE \
PROJPROBLOX_API void FOnCoreChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCoreChanged, ACubeCore* newCore);


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_SPARSE_DATA
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeductAvailability); \
	DECLARE_FUNCTION(execGetAvailability); \
	DECLARE_FUNCTION(execGetWave); \
	DECLARE_FUNCTION(execIncreaseSpawns);


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMode_Wave(); \
	friend struct Z_Construct_UClass_AMode_Wave_Statics; \
public: \
	DECLARE_CLASS(AMode_Wave, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(AMode_Wave)


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMode_Wave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMode_Wave(AMode_Wave&&); \
	NO_API AMode_Wave(const AMode_Wave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMode_Wave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMode_Wave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMode_Wave) \
	NO_API virtual ~AMode_Wave();


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_31_PROLOG
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_SPARSE_DATA \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_INCLASS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class AMode_Wave>();

#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_SPARSE_DATA
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMode_Assault(); \
	friend struct Z_Construct_UClass_AMode_Assault_Statics; \
public: \
	DECLARE_CLASS(AMode_Assault, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(AMode_Assault)


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMode_Assault(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMode_Assault(AMode_Assault&&); \
	NO_API AMode_Assault(const AMode_Assault&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMode_Assault); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMode_Assault); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMode_Assault) \
	NO_API virtual ~AMode_Assault();


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_74_PROLOG
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_SPARSE_DATA \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_INCLASS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class AMode_Assault>();

#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_SPARSE_DATA
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMode_Creative(); \
	friend struct Z_Construct_UClass_AMode_Creative_Statics; \
public: \
	DECLARE_CLASS(AMode_Creative, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(AMode_Creative)


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMode_Creative(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMode_Creative(AMode_Creative&&); \
	NO_API AMode_Creative(const AMode_Creative&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMode_Creative); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMode_Creative); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMode_Creative) \
	NO_API virtual ~AMode_Creative();


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_82_PROLOG
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_SPARSE_DATA \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_INCLASS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class AMode_Creative>();

#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_SPARSE_DATA
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_ACCESSORS
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMode_Build(); \
	friend struct Z_Construct_UClass_AMode_Build_Statics; \
public: \
	DECLARE_CLASS(AMode_Build, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(AMode_Build)


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMode_Build(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMode_Build(AMode_Build&&); \
	NO_API AMode_Build(const AMode_Build&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMode_Build); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMode_Build); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMode_Build) \
	NO_API virtual ~AMode_Build();


#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_90_PROLOG
#define FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_SPARSE_DATA \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_ACCESSORS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_INCLASS_NO_PURE_DECLS \
	FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class AMode_Build>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Uni_problox_projProblox_Source_projProblox_GameModes_Modes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
