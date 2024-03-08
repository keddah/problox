// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickups/PickupableMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupableMaster() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(APickupableMaster::execAscendDescend)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AscendDescend(Z_Param_inputValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execSetSelected)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelected(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execGravitySelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GravitySelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execSnapRotateMesh)
	{
		P_GET_UBOOL(Z_Param_hori);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnapRotateMesh(Z_Param_hori);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execRotateMesh)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateMesh(Z_Param_Out_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execSetAbilityActive)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbilityActive(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execRemoveAttachment)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAttachment(Z_Param_socket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execAddAttachment)
	{
		P_GET_OBJECT(APickupableMaster,Z_Param_attachment);
		P_GET_PROPERTY(FNameProperty,Z_Param_socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttachment(Z_Param_attachment,Z_Param_socket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execResetRotation)
	{
		P_GET_UBOOL(Z_Param_resetVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetRotation(Z_Param_resetVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execPlacement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Placement();
		P_NATIVE_END;
	}
	void APickupableMaster::StaticRegisterNativesAPickupableMaster()
	{
		UClass* Class = APickupableMaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttachment", &APickupableMaster::execAddAttachment },
			{ "AscendDescend", &APickupableMaster::execAscendDescend },
			{ "GetMesh", &APickupableMaster::execGetMesh },
			{ "GravitySelection", &APickupableMaster::execGravitySelection },
			{ "Placement", &APickupableMaster::execPlacement },
			{ "RemoveAttachment", &APickupableMaster::execRemoveAttachment },
			{ "ResetRotation", &APickupableMaster::execResetRotation },
			{ "RotateMesh", &APickupableMaster::execRotateMesh },
			{ "SetAbilityActive", &APickupableMaster::execSetAbilityActive },
			{ "SetSelected", &APickupableMaster::execSetSelected },
			{ "SnapRotateMesh", &APickupableMaster::execSnapRotateMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics
	{
		struct PickupableMaster_eventAddAttachment_Parms
		{
			APickupableMaster* attachment;
			FName socket;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attachment;
		static const UECodeGen_Private::FNamePropertyParams NewProp_socket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::NewProp_attachment = { "attachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventAddAttachment_Parms, attachment), Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::NewProp_socket = { "socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventAddAttachment_Parms, socket), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::NewProp_attachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::NewProp_socket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "AddAttachment", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::PickupableMaster_eventAddAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::PickupableMaster_eventAddAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_AddAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_AddAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics
	{
		struct PickupableMaster_eventAscendDescend_Parms
		{
			float inputValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inputValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::NewProp_inputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::NewProp_inputValue = { "inputValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventAscendDescend_Parms, inputValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::NewProp_inputValue_MetaData), Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::NewProp_inputValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::NewProp_inputValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "AscendDescend", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::PickupableMaster_eventAscendDescend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::PickupableMaster_eventAscendDescend_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_AscendDescend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_AscendDescend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_GetMesh_Statics
	{
		struct PickupableMaster_eventGetMesh_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "GetMesh", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PickupableMaster_eventGetMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PickupableMaster_eventGetMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_GravitySelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GravitySelection_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable/Disable gravity when selected/deselected\n" },
#endif
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable/Disable gravity when selected/deselected" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_GravitySelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "GravitySelection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GravitySelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_GravitySelection_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APickupableMaster_GravitySelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_GravitySelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_Placement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_Placement_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////// FUNCTIONS ///////////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ FUNCTIONS /" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_Placement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "Placement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_Placement_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_Placement_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APickupableMaster_Placement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_Placement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics
	{
		struct PickupableMaster_eventRemoveAttachment_Parms
		{
			FName socket;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_socket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::NewProp_socket = { "socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventRemoveAttachment_Parms, socket), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::NewProp_socket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "RemoveAttachment", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::PickupableMaster_eventRemoveAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::PickupableMaster_eventRemoveAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_RemoveAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_RemoveAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics
	{
		struct PickupableMaster_eventResetRotation_Parms
		{
			bool resetVelocity;
		};
		static void NewProp_resetVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_resetVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::NewProp_resetVelocity_SetBit(void* Obj)
	{
		((PickupableMaster_eventResetRotation_Parms*)Obj)->resetVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::NewProp_resetVelocity = { "resetVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupableMaster_eventResetRotation_Parms), &Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::NewProp_resetVelocity_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::NewProp_resetVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_resetVelocity", "false" },
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "ResetRotation", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PickupableMaster_eventResetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PickupableMaster_eventResetRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_ResetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics
	{
		struct PickupableMaster_eventRotateMesh_Parms
		{
			FRotator rotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventRotateMesh_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::NewProp_rotation_MetaData), Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::NewProp_rotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "RotateMesh", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::PickupableMaster_eventRotateMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::PickupableMaster_eventRotateMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_RotateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_RotateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics
	{
		struct PickupableMaster_eventSetAbilityActive_Parms
		{
			bool value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value_SetBit(void* Obj)
	{
		((PickupableMaster_eventSetAbilityActive_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupableMaster_eventSetAbilityActive_Parms), &Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value_MetaData), Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "SetAbilityActive", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PickupableMaster_eventSetAbilityActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PickupableMaster_eventSetAbilityActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_SetAbilityActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_SetSelected_Statics
	{
		struct PickupableMaster_eventSetSelected_Parms
		{
			bool value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value_SetBit(void* Obj)
	{
		((PickupableMaster_eventSetSelected_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupableMaster_eventSetSelected_Parms), &Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value_MetaData), Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "SetSelected", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PickupableMaster_eventSetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PickupableMaster_eventSetSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics
	{
		struct PickupableMaster_eventSnapRotateMesh_Parms
		{
			bool hori;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hori_MetaData[];
#endif
		static void NewProp_hori_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hori;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::NewProp_hori_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::NewProp_hori_SetBit(void* Obj)
	{
		((PickupableMaster_eventSnapRotateMesh_Parms*)Obj)->hori = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::NewProp_hori = { "hori", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupableMaster_eventSnapRotateMesh_Parms), &Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::NewProp_hori_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::NewProp_hori_MetaData), Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::NewProp_hori_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::NewProp_hori,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "SnapRotateMesh", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::PickupableMaster_eventSnapRotateMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::PickupableMaster_eventSnapRotateMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_SnapRotateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_SnapRotateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupableMaster);
	UClass* Z_Construct_UClass_APickupableMaster_NoRegister()
	{
		return APickupableMaster::StaticClass();
	}
	struct Z_Construct_UClass_APickupableMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_scene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_active_MetaData[];
#endif
		static void NewProp_active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_active;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_selected_MetaData[];
#endif
		static void NewProp_selected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_selected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_placeDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_placeDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_placeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_placeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objCore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objCore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupableMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupableMaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupableMaster_AddAttachment, "AddAttachment" }, // 2410992574
		{ &Z_Construct_UFunction_APickupableMaster_AscendDescend, "AscendDescend" }, // 2074423749
		{ &Z_Construct_UFunction_APickupableMaster_GetMesh, "GetMesh" }, // 568971449
		{ &Z_Construct_UFunction_APickupableMaster_GravitySelection, "GravitySelection" }, // 3848286903
		{ &Z_Construct_UFunction_APickupableMaster_Placement, "Placement" }, // 1722872120
		{ &Z_Construct_UFunction_APickupableMaster_RemoveAttachment, "RemoveAttachment" }, // 2818181948
		{ &Z_Construct_UFunction_APickupableMaster_ResetRotation, "ResetRotation" }, // 2126190750
		{ &Z_Construct_UFunction_APickupableMaster_RotateMesh, "RotateMesh" }, // 152319599
		{ &Z_Construct_UFunction_APickupableMaster_SetAbilityActive, "SetAbilityActive" }, // 4019941948
		{ &Z_Construct_UFunction_APickupableMaster_SetSelected, "SetSelected" }, // 80610846
		{ &Z_Construct_UFunction_APickupableMaster_SnapRotateMesh, "SnapRotateMesh" }, // 2949503426
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickups/PickupableMaster.h" },
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_scene_MetaData[] = {
		{ "Category", "PickupableMaster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint visible components..\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint visible components.." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_scene = { "scene", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_scene_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_scene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_objMesh_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_objMesh = { "objMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, objMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_objMesh_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_objMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_collider_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_collider_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_active_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	void Z_Construct_UClass_APickupableMaster_Statics::NewProp_active_SetBit(void* Obj)
	{
		((APickupableMaster*)Obj)->active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APickupableMaster), &Z_Construct_UClass_APickupableMaster_Statics::NewProp_active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_active_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_active_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	void Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected_SetBit(void* Obj)
	{
		((APickupableMaster*)Obj)->selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected = { "selected", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APickupableMaster), &Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeDir_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeDir = { "placeDir", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, placeDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeDir_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeRange_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeRange = { "placeRange", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, placeRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeRange_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_objCore_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "ModuleRelativePath", "Pickups/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_objCore = { "objCore", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, objCore), Z_Construct_UClass_ACubeCore_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_objCore_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_objCore_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupableMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_objMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_collider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_active,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_objCore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupableMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupableMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupableMaster_Statics::ClassParams = {
		&APickupableMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupableMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_APickupableMaster_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APickupableMaster()
	{
		if (!Z_Registration_Info_UClass_APickupableMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupableMaster.OuterSingleton, Z_Construct_UClass_APickupableMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupableMaster.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<APickupableMaster>()
	{
		return APickupableMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupableMaster);
	APickupableMaster::~APickupableMaster() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickups_PickupableMaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickups_PickupableMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupableMaster, APickupableMaster::StaticClass, TEXT("APickupableMaster"), &Z_Registration_Info_UClass_APickupableMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupableMaster), 577146353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickups_PickupableMaster_h_3878601416(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickups_PickupableMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickups_PickupableMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
