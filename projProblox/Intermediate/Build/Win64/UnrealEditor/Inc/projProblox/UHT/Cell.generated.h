// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cells/Cell.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJPROBLOX_Cell_generated_h
#error "Cell.generated.h already included, missing '#pragma once' in Cell.h"
#endif
#define PROJPROBLOX_Cell_generated_h

#define FID_projProblox_Source_projProblox_Cells_Cell_h_23_SPARSE_DATA
#define FID_projProblox_Source_projProblox_Cells_Cell_h_23_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSafe); \
	DECLARE_FUNCTION(execDeactivateHoming); \
	DECLARE_FUNCTION(execSetHoming); \
	DECLARE_FUNCTION(execTeleport);


#define FID_projProblox_Source_projProblox_Cells_Cell_h_23_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACell(); \
	friend struct Z_Construct_UClass_ACell_Statics; \
public: \
	DECLARE_CLASS(ACell, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(ACell)


#define FID_projProblox_Source_projProblox_Cells_Cell_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACell(ACell&&); \
	NO_API ACell(const ACell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACell) \
	NO_API virtual ~ACell();


#define FID_projProblox_Source_projProblox_Cells_Cell_h_20_PROLOG
#define FID_projProblox_Source_projProblox_Cells_Cell_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projProblox_Source_projProblox_Cells_Cell_h_23_SPARSE_DATA \
	FID_projProblox_Source_projProblox_Cells_Cell_h_23_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_23_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_23_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_23_INCLASS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class ACell>();

#define FID_projProblox_Source_projProblox_Cells_Cell_h_69_SPARSE_DATA
#define FID_projProblox_Source_projProblox_Cells_Cell_h_69_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_69_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_69_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_69_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABouncyCell(); \
	friend struct Z_Construct_UClass_ABouncyCell_Statics; \
public: \
	DECLARE_CLASS(ABouncyCell, ACell, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(ABouncyCell)


#define FID_projProblox_Source_projProblox_Cells_Cell_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABouncyCell(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABouncyCell(ABouncyCell&&); \
	NO_API ABouncyCell(const ABouncyCell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABouncyCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABouncyCell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABouncyCell) \
	NO_API virtual ~ABouncyCell();


#define FID_projProblox_Source_projProblox_Cells_Cell_h_66_PROLOG
#define FID_projProblox_Source_projProblox_Cells_Cell_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projProblox_Source_projProblox_Cells_Cell_h_69_SPARSE_DATA \
	FID_projProblox_Source_projProblox_Cells_Cell_h_69_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_69_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_69_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_69_INCLASS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class ABouncyCell>();

#define FID_projProblox_Source_projProblox_Cells_Cell_h_85_SPARSE_DATA
#define FID_projProblox_Source_projProblox_Cells_Cell_h_85_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_85_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_85_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_85_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHoverCell(); \
	friend struct Z_Construct_UClass_AHoverCell_Statics; \
public: \
	DECLARE_CLASS(AHoverCell, ACell, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(AHoverCell)


#define FID_projProblox_Source_projProblox_Cells_Cell_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHoverCell(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHoverCell(AHoverCell&&); \
	NO_API AHoverCell(const AHoverCell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoverCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoverCell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHoverCell) \
	NO_API virtual ~AHoverCell();


#define FID_projProblox_Source_projProblox_Cells_Cell_h_82_PROLOG
#define FID_projProblox_Source_projProblox_Cells_Cell_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projProblox_Source_projProblox_Cells_Cell_h_85_SPARSE_DATA \
	FID_projProblox_Source_projProblox_Cells_Cell_h_85_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_85_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_85_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_85_INCLASS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class AHoverCell>();

#define FID_projProblox_Source_projProblox_Cells_Cell_h_96_SPARSE_DATA
#define FID_projProblox_Source_projProblox_Cells_Cell_h_96_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_96_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_96_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_96_ACCESSORS
#define FID_projProblox_Source_projProblox_Cells_Cell_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStickyCell(); \
	friend struct Z_Construct_UClass_AStickyCell_Statics; \
public: \
	DECLARE_CLASS(AStickyCell, ACell, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/projProblox"), NO_API) \
	DECLARE_SERIALIZER(AStickyCell)


#define FID_projProblox_Source_projProblox_Cells_Cell_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStickyCell(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStickyCell(AStickyCell&&); \
	NO_API AStickyCell(const AStickyCell&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStickyCell); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStickyCell); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStickyCell) \
	NO_API virtual ~AStickyCell();


#define FID_projProblox_Source_projProblox_Cells_Cell_h_93_PROLOG
#define FID_projProblox_Source_projProblox_Cells_Cell_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projProblox_Source_projProblox_Cells_Cell_h_96_SPARSE_DATA \
	FID_projProblox_Source_projProblox_Cells_Cell_h_96_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_96_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_96_ACCESSORS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_96_INCLASS_NO_PURE_DECLS \
	FID_projProblox_Source_projProblox_Cells_Cell_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJPROBLOX_API UClass* StaticClass<class AStickyCell>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projProblox_Source_projProblox_Cells_Cell_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
