// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PickupableMaster.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APickupableMaster;
class UStaticMeshComponent;
#ifdef PROJPROBLOX_PickupableMaster_generated_h
#error "PickupableMaster.generated.h already included, missing '#pragma once' in PickupableMaster.h"
#endif
#define PROJPROBLOX_PickupableMaster_generated_h

#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_SPARSE_DATA
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMass); \
	DECLARE_FUNCTION(execAscendDescend); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGravitySelection); \
	DECLARE_FUNCTION(execResetRotation); \
	DECLARE_FUNCTION(execSnapRotateMesh); \
	DECLARE_FUNCTION(execRotateMesh); \
	DECLARE_FUNCTION(execRotateHori); \
	DECLARE_FUNCTION(execRotateVert); \
	DECLARE_FUNCTION(execSetAbilityActive); \
	DECLARE_FUNCTION(execRemoveAttachment); \
	DECLARE_FUNCTION(execAddAttachment);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupableMaster(); \
	friend struct Z_Construct_UClass_APickupableMaster_Statics; \
public: \
	DECLARE_CLASS(APickupableMaster, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(APickupableMaster)


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupableMaster(APickupableMaster&&); \
	NO_API APickupableMaster(const APickupableMaster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupableMaster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupableMaster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupableMaster) \
	NO_API virtual ~APickupableMaster();


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_16_PROLOG
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_SPARSE_DATA \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class APickupableMaster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_PickupableMaster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
