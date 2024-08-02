// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickupables/BuyableAttachment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABuyableAttachment;
struct FBuyableInfoStruct;
#ifdef PROJPROBLOX_BuyableAttachment_generated_h
#error "BuyableAttachment.generated.h already included, missing '#pragma once' in BuyableAttachment.h"
#endif
#define PROJPROBLOX_BuyableAttachment_generated_h

#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_12_DELEGATE \
PROJPROBLOX_API void FOnDeselected_DelegateWrapper(const FMulticastScriptDelegate& OnDeselected);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_13_DELEGATE \
PROJPROBLOX_API void FOnShowDisplay_DelegateWrapper(const FMulticastScriptDelegate& OnShowDisplay, const ABuyableAttachment* checker);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_14_DELEGATE \
PROJPROBLOX_API void FOnHideDisplay_DelegateWrapper(const FMulticastScriptDelegate& OnHideDisplay, const ABuyableAttachment* checker);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_SPARSE_DATA
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInfo); \
	DECLARE_FUNCTION(execUseInfoMesh);


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_ACCESSORS
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuyableAttachment(); \
	friend struct Z_Construct_UClass_ABuyableAttachment_Statics; \
public: \
	DECLARE_CLASS(ABuyableAttachment, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(ABuyableAttachment)


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuyableAttachment(ABuyableAttachment&&); \
	NO_API ABuyableAttachment(const ABuyableAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuyableAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuyableAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuyableAttachment) \
	NO_API virtual ~ABuyableAttachment();


#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_18_PROLOG
#define FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_SPARSE_DATA \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_ACCESSORS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class ABuyableAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
