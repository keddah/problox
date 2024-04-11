// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CubeCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJPROBLOX_CubeCore_generated_h
#error "CubeCore.generated.h already included, missing '#pragma once' in CubeCore.h"
#endif
#define PROJPROBLOX_CubeCore_generated_h

#define FID_projProblox_Source_projProblox_CubeCore_h_21_DELEGATE \
PROJPROBLOX_API void FOnOutOfRange_DelegateWrapper(const FMulticastScriptDelegate& OnOutOfRange);


#define FID_projProblox_Source_projProblox_CubeCore_h_22_DELEGATE \
PROJPROBLOX_API void FOnGameEnd_DelegateWrapper(const FMulticastScriptDelegate& OnGameEnd);


#define FID_projProblox_Source_projProblox_CubeCore_h_26_DELEGATE \
PROJPROBLOX_API void FOnAddedThing_DelegateWrapper(const FMulticastScriptDelegate& OnAddedThing, AActor* thing);


#define FID_projProblox_Source_projProblox_CubeCore_h_31_SPARSE_DATA
#define FID_projProblox_Source_projProblox_CubeCore_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_CubeCore_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_CubeCore_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectSocket); \
	DECLARE_FUNCTION(execGetAttachedObjActors); \
	DECLARE_FUNCTION(execDetachAll); \
	DECLARE_FUNCTION(execObjectInSocket);


#define FID_projProblox_Source_projProblox_CubeCore_h_31_ACCESSORS
#define FID_projProblox_Source_projProblox_CubeCore_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACubeCore(); \
	friend struct Z_Construct_UClass_ACubeCore_Statics; \
public: \
	DECLARE_CLASS(ACubeCore, APickupableMaster, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(ACubeCore)


#define FID_projProblox_Source_projProblox_CubeCore_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubeCore(ACubeCore&&); \
	NO_API ACubeCore(const ACubeCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubeCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubeCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACubeCore) \
	NO_API virtual ~ACubeCore();


#define FID_projProblox_Source_projProblox_CubeCore_h_28_PROLOG
#define FID_projProblox_Source_projProblox_CubeCore_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projProblox_Source_projProblox_CubeCore_h_31_SPARSE_DATA \
	FID_projProblox_Source_projProblox_CubeCore_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_CubeCore_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_CubeCore_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_CubeCore_h_31_ACCESSORS \
	FID_projProblox_Source_projProblox_CubeCore_h_31_INCLASS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_CubeCore_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class ACubeCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projProblox_Source_projProblox_CubeCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
