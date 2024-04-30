// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickupables/Cores/CubeCore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APickupableMaster;
#ifdef PROJPROBLOX_CubeCore_generated_h
#error "CubeCore.generated.h already included, missing '#pragma once' in CubeCore.h"
#endif
#define PROJPROBLOX_CubeCore_generated_h

#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_34_DELEGATE \
PROJPROBLOX_API void FOnStartGame_DelegateWrapper(const FMulticastScriptDelegate& OnStartGame);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_37_DELEGATE \
PROJPROBLOX_API void FOnAttachmentChange_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentChange);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_40_DELEGATE \
PROJPROBLOX_API void FOnOutOfRange_DelegateWrapper(const FMulticastScriptDelegate& OnOutOfRange);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_42_DELEGATE \
PROJPROBLOX_API void FOnGameEnd_DelegateWrapper(const FMulticastScriptDelegate& OnGameEnd);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_43_DELEGATE \
PROJPROBLOX_API void FOnEndingGame_DelegateWrapper(const FMulticastScriptDelegate& OnEndingGame);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_46_DELEGATE \
PROJPROBLOX_API void FOnAttemptEnding_DelegateWrapper(const FMulticastScriptDelegate& OnAttemptEnding);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_49_DELEGATE \
PROJPROBLOX_API void FOnReset_DelegateWrapper(const FMulticastScriptDelegate& OnReset, int32 tries);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_53_DELEGATE \
PROJPROBLOX_API void FOnAddedThing_DelegateWrapper(const FMulticastScriptDelegate& OnAddedThing, AActor* thing);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_SPARSE_DATA
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectSocket); \
	DECLARE_FUNCTION(execGetRating); \
	DECLARE_FUNCTION(execGetAttempts); \
	DECLARE_FUNCTION(execGetCloseAttachments); \
	DECLARE_FUNCTION(execSetAllAbilityActive); \
	DECLARE_FUNCTION(execObjectInSocket); \
	DECLARE_FUNCTION(execDetachAll); \
	DECLARE_FUNCTION(execGetAttachedObjActors); \
	DECLARE_FUNCTION(execStartStoryGame); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execStartEndingGame);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACubeCore(); \
	friend struct Z_Construct_UClass_ACubeCore_Statics; \
public: \
	DECLARE_CLASS(ACubeCore, APickupableMaster, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(ACubeCore)


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACubeCore(ACubeCore&&); \
	NO_API ACubeCore(const ACubeCore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACubeCore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACubeCore); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACubeCore) \
	NO_API virtual ~ACubeCore();


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_55_PROLOG
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_SPARSE_DATA \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_INCLASS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class ACubeCore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
