// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/PlayerCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABuyableAttachment_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APlayerCharacter();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCustomGameInstance_NoRegister();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_EGameMode();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameMode;
	static UEnum* EGameMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_projProblox_EGameMode, (UObject*)Z_Construct_UPackage__Script_projProblox(), TEXT("EGameMode"));
		}
		return Z_Registration_Info_UEnum_EGameMode.OuterSingleton;
	}
	template<> PROJPROBLOX_API UEnum* StaticEnum<EGameMode>()
	{
		return EGameMode_StaticEnum();
	}
	struct Z_Construct_UEnum_projProblox_EGameMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_projProblox_EGameMode_Statics::Enumerators[] = {
		{ "EGameMode::Story", (int64)EGameMode::Story },
		{ "EGameMode::Build", (int64)EGameMode::Build },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_projProblox_EGameMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Build.Name", "EGameMode::Build" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
		{ "Story.Name", "EGameMode::Story" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_projProblox_EGameMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_projProblox,
		nullptr,
		"EGameMode",
		"EGameMode",
		Z_Construct_UEnum_projProblox_EGameMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_EGameMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_EGameMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_projProblox_EGameMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_projProblox_EGameMode()
	{
		if (!Z_Registration_Info_UEnum_EGameMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameMode.InnerSingleton, Z_Construct_UEnum_projProblox_EGameMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameMode.InnerSingleton;
	}
	DEFINE_FUNCTION(APlayerCharacter::execGetCore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACubeCore**)Z_Param__Result=P_THIS->GetCore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execEndGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execAdjustCore)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustCore(Z_Param_Out_hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execEjectObject)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EjectObject(Z_Param_Out_hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execSpawnFromBuyable)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnFromBuyable(Z_Param_Out_hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execBuildControls)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildControls(Z_Param_Out_hit,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execConfirm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Confirm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execDeselect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deselect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execEjectAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EjectAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execGetGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameMode*)Z_Param__Result=P_THIS->GetGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execSetGameMode)
	{
		P_GET_ENUM(EGameMode,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameMode(EGameMode(Z_Param_mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execEndTurnEarly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTurnEarly();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execAboveBelowSlot)
	{
		P_GET_UBOOL(Z_Param_above);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AboveBelowSlot(Z_Param_above);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execNextPreviousSlot)
	{
		P_GET_UBOOL(Z_Param_next);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextPreviousSlot(Z_Param_next);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execScrollZoom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScrollZoom(Z_Param_input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execZoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Zoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execOrbitControls)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OrbitControls(Z_Param_deltaTime);
		P_NATIVE_END;
	}
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
		UClass* Class = APlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AboveBelowSlot", &APlayerCharacter::execAboveBelowSlot },
			{ "AdjustCore", &APlayerCharacter::execAdjustCore },
			{ "BuildControls", &APlayerCharacter::execBuildControls },
			{ "Confirm", &APlayerCharacter::execConfirm },
			{ "Deselect", &APlayerCharacter::execDeselect },
			{ "EjectAll", &APlayerCharacter::execEjectAll },
			{ "EjectObject", &APlayerCharacter::execEjectObject },
			{ "EndGame", &APlayerCharacter::execEndGame },
			{ "EndTurnEarly", &APlayerCharacter::execEndTurnEarly },
			{ "GetCore", &APlayerCharacter::execGetCore },
			{ "GetGameMode", &APlayerCharacter::execGetGameMode },
			{ "NextPreviousSlot", &APlayerCharacter::execNextPreviousSlot },
			{ "OrbitControls", &APlayerCharacter::execOrbitControls },
			{ "ScrollZoom", &APlayerCharacter::execScrollZoom },
			{ "SetGameMode", &APlayerCharacter::execSetGameMode },
			{ "SpawnFromBuyable", &APlayerCharacter::execSpawnFromBuyable },
			{ "Zoom", &APlayerCharacter::execZoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics
	{
		struct PlayerCharacter_eventAboveBelowSlot_Parms
		{
			bool above;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_above_MetaData[];
#endif
		static void NewProp_above_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_above;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::NewProp_above_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::NewProp_above_SetBit(void* Obj)
	{
		((PlayerCharacter_eventAboveBelowSlot_Parms*)Obj)->above = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::NewProp_above = { "above", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventAboveBelowSlot_Parms), &Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::NewProp_above_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::NewProp_above_MetaData), Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::NewProp_above_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::NewProp_above,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The same as NextPreviousSlot() except it goes 2 spaces ahead instead of one." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "AboveBelowSlot", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::PlayerCharacter_eventAboveBelowSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::PlayerCharacter_eventAboveBelowSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics
	{
		struct PlayerCharacter_eventAdjustCore_Parms
		{
			FHitResult hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventAdjustCore_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::NewProp_hit_MetaData), Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::NewProp_hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "AdjustCore", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::PlayerCharacter_eventAdjustCore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::PlayerCharacter_eventAdjustCore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_AdjustCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_AdjustCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics
	{
		struct PlayerCharacter_eventBuildControls_Parms
		{
			FHitResult hit;
			float deltaTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventBuildControls_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::NewProp_hit_MetaData), Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::NewProp_hit_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::NewProp_deltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventBuildControls_Parms, deltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::NewProp_deltaTime_MetaData), Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::NewProp_deltaTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::NewProp_hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "BuildControls", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::PlayerCharacter_eventBuildControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::PlayerCharacter_eventBuildControls_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_BuildControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_BuildControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_Confirm_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_Confirm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Confirm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Confirm", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Confirm_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Confirm_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_Confirm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Confirm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_Deselect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_Deselect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Deselect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Deselect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Deselect_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Deselect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_Deselect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Deselect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_EjectAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_EjectAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_EjectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "EjectAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EjectAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_EjectAll_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_EjectAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_EjectAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics
	{
		struct PlayerCharacter_eventEjectObject_Parms
		{
			FHitResult hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventEjectObject_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::NewProp_hit_MetaData), Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::NewProp_hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MAKE AN EJECT ALL (WHEN MIDDLE MOUSE IS CLICKED)\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MAKE AN EJECT ALL (WHEN MIDDLE MOUSE IS CLICKED)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "EjectObject", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::PlayerCharacter_eventEjectObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::PlayerCharacter_eventEjectObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_EjectObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_EjectObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_EndGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_EndGame_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Game States ///////////////\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game States" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "EndGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_EndGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_EndTurnEarly_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_EndTurnEarly_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////// Turns /////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Turns /" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_EndTurnEarly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "EndTurnEarly", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EndTurnEarly_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_EndTurnEarly_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_EndTurnEarly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_EndTurnEarly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_GetCore_Statics
	{
		struct PlayerCharacter_eventGetCore_Parms
		{
			ACubeCore* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetCore_Parms, ReturnValue), Z_Construct_UClass_ACubeCore_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetCore", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::PlayerCharacter_eventGetCore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::PlayerCharacter_eventGetCore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_GetCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics
	{
		struct PlayerCharacter_eventGetGameMode_Parms
		{
			EGameMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetGameMode_Parms, ReturnValue), Z_Construct_UEnum_projProblox_EGameMode, METADATA_PARAMS(0, nullptr) }; // 2527694996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetGameMode", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::PlayerCharacter_eventGetGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::PlayerCharacter_eventGetGameMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_GetGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics
	{
		struct PlayerCharacter_eventNextPreviousSlot_Parms
		{
			bool next;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_next_MetaData[];
#endif
		static void NewProp_next_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_next;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::NewProp_next_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::NewProp_next_SetBit(void* Obj)
	{
		((PlayerCharacter_eventNextPreviousSlot_Parms*)Obj)->next = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::NewProp_next = { "next", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventNextPreviousSlot_Parms), &Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::NewProp_next_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::NewProp_next_MetaData), Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::NewProp_next_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::NewProp_next,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "NextPreviousSlot", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::PlayerCharacter_eventNextPreviousSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::PlayerCharacter_eventNextPreviousSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics
	{
		struct PlayerCharacter_eventOrbitControls_Parms
		{
			float deltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOrbitControls_Parms, deltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Orbit\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Orbit" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OrbitControls", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::PlayerCharacter_eventOrbitControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::PlayerCharacter_eventOrbitControls_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_OrbitControls()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OrbitControls_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics
	{
		struct PlayerCharacter_eventScrollZoom_Parms
		{
			float input;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventScrollZoom_Parms, input), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The same build mode zoom except this uses the scroll wheel instead of the mouse-Y value." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "ScrollZoom", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::PlayerCharacter_eventScrollZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::PlayerCharacter_eventScrollZoom_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_ScrollZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_ScrollZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics
	{
		struct PlayerCharacter_eventSetGameMode_Parms
		{
			EGameMode mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetGameMode_Parms, mode), Z_Construct_UEnum_projProblox_EGameMode, METADATA_PARAMS(0, nullptr) }; // 2527694996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::NewProp_mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::NewProp_mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SetGameMode", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::PlayerCharacter_eventSetGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::PlayerCharacter_eventSetGameMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_SetGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics
	{
		struct PlayerCharacter_eventSpawnFromBuyable_Parms
		{
			FHitResult hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSpawnFromBuyable_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::NewProp_hit_MetaData), Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::NewProp_hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SpawnFromBuyable", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::PlayerCharacter_eventSpawnFromBuyable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::PlayerCharacter_eventSpawnFromBuyable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_Zoom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_Zoom_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Zooming\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zooming" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Zoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Zoom", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Zoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Zoom_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_Zoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Zoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_camBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_camBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_selectedObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_selectedObj;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groupSelection_MetaData[];
#endif
		static void NewProp_groupSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_groupSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_toggleSelection_MetaData[];
#endif
		static void NewProp_toggleSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_toggleSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_adjustSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_adjustSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_orbitSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_orbitSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_camZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_camZoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxOrbitDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxOrbitDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minOrbitDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minOrbitDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerCam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerCam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseValues_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mouseValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_orbiting_MetaData[];
#endif
		static void NewProp_orbiting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_orbiting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_zooming_MetaData[];
#endif
		static void NewProp_zooming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_zooming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_core_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_core;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouseDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canMove_MetaData[];
#endif
		static void NewProp_canMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hoveredBuyable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hoveredBuyable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameEnded_MetaData[];
#endif
		static void NewProp_gameEnded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_gameEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_adjustPhase_MetaData[];
#endif
		static void NewProp_adjustPhase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_adjustPhase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_currentMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_AboveBelowSlot, "AboveBelowSlot" }, // 1245471134
		{ &Z_Construct_UFunction_APlayerCharacter_AdjustCore, "AdjustCore" }, // 24047420
		{ &Z_Construct_UFunction_APlayerCharacter_BuildControls, "BuildControls" }, // 1582125953
		{ &Z_Construct_UFunction_APlayerCharacter_Confirm, "Confirm" }, // 2101215247
		{ &Z_Construct_UFunction_APlayerCharacter_Deselect, "Deselect" }, // 2189380603
		{ &Z_Construct_UFunction_APlayerCharacter_EjectAll, "EjectAll" }, // 853812392
		{ &Z_Construct_UFunction_APlayerCharacter_EjectObject, "EjectObject" }, // 312383470
		{ &Z_Construct_UFunction_APlayerCharacter_EndGame, "EndGame" }, // 601148697
		{ &Z_Construct_UFunction_APlayerCharacter_EndTurnEarly, "EndTurnEarly" }, // 2865316487
		{ &Z_Construct_UFunction_APlayerCharacter_GetCore, "GetCore" }, // 344276006
		{ &Z_Construct_UFunction_APlayerCharacter_GetGameMode, "GetGameMode" }, // 3056313343
		{ &Z_Construct_UFunction_APlayerCharacter_NextPreviousSlot, "NextPreviousSlot" }, // 2140460848
		{ &Z_Construct_UFunction_APlayerCharacter_OrbitControls, "OrbitControls" }, // 1112996026
		{ &Z_Construct_UFunction_APlayerCharacter_ScrollZoom, "ScrollZoom" }, // 2530486982
		{ &Z_Construct_UFunction_APlayerCharacter_SetGameMode, "SetGameMode" }, // 4253032614
		{ &Z_Construct_UFunction_APlayerCharacter_SpawnFromBuyable, "SpawnFromBuyable" }, // 2435491414
		{ &Z_Construct_UFunction_APlayerCharacter_Zoom, "Zoom" }, // 2239424416
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacter.h" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camBoom_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////// Building /////////////////////////\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Building /" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camBoom = { "camBoom", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, camBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camBoom_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_selectedObj_MetaData[] = {
		{ "Category", "Picking up" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Selection / Placement ///////////////\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selection / Placement" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_selectedObj = { "selectedObj", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, selectedObj), Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_selectedObj_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_selectedObj_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_groupSelection_MetaData[] = {
		{ "Category", "Picking up" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_groupSelection_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->groupSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_groupSelection = { "groupSelection", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_groupSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_groupSelection_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_groupSelection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_toggleSelection_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_toggleSelection_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->toggleSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_toggleSelection = { "toggleSelection", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_toggleSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_toggleSelection_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_toggleSelection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustSpeedThreshold_MetaData[] = {
		{ "Category", "Controls" },
		{ "Delta", "0.050000" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The max speed the core is allowed to be going when trying to adjust the core's rotation." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustSpeedThreshold = { "adjustSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, adjustSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustSpeedThreshold_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_sensitivity_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Camera ///////////////\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_sensitivity = { "sensitivity", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, sensitivity), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_sensitivity_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_sensitivity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbitSpeed_MetaData[] = {
		{ "Category", "Orbit" },
		{ "Delta", "0.100000" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbitSpeed = { "orbitSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, orbitSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbitSpeed_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbitSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camZoomSpeed_MetaData[] = {
		{ "Category", "Orbit" },
		{ "Delta", "0.100000" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camZoomSpeed = { "camZoomSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, camZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camZoomSpeed_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camZoomSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_maxOrbitDistance_MetaData[] = {
		{ "Category", "Orbit" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_maxOrbitDistance = { "maxOrbitDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, maxOrbitDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_maxOrbitDistance_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_maxOrbitDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_minOrbitDistance_MetaData[] = {
		{ "Category", "Orbit" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_minOrbitDistance = { "minOrbitDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, minOrbitDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_minOrbitDistance_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_minOrbitDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerCam_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerCam = { "playerCam", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, playerCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerCam_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerCam_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseValues_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseValues = { "mouseValues", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, mouseValues), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseValues_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseValues_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbiting_MetaData[] = {
		{ "Category", "Orbit" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbiting_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->orbiting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbiting = { "orbiting", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbiting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbiting_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbiting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_zooming_MetaData[] = {
		{ "Category", "Orbit" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_zooming_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->zooming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_zooming = { "zooming", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_zooming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_zooming_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_zooming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_core_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Other ///////////////\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Other" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_core = { "core", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, core), Z_Construct_UClass_ACubeCore_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_core_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_core_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_instance_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, instance), Z_Construct_UClass_UCustomGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_instance_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_instance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseDistance_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseDistance = { "mouseDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, mouseDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseDistance_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_canMove_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_canMove_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->canMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_canMove = { "canMove", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_canMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_canMove_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_canMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_hoveredBuyable_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_hoveredBuyable = { "hoveredBuyable", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, hoveredBuyable), Z_Construct_UClass_ABuyableAttachment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_hoveredBuyable_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_hoveredBuyable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_gameEnded_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Game States ///////////////\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game States" },
#endif
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_gameEnded_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->gameEnded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_gameEnded = { "gameEnded", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_gameEnded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_gameEnded_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_gameEnded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustPhase_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not the game is currently in the build phase (will be set to false once the game starts)." },
#endif
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustPhase_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->adjustPhase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustPhase = { "adjustPhase", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustPhase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustPhase_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustPhase_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode = { "currentMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, currentMode), Z_Construct_UEnum_projProblox_EGameMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode_MetaData) }; // 2527694996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_selectedObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_groupSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_toggleSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_sensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbitSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_camZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_maxOrbitDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_minOrbitDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_playerCam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_orbiting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_zooming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_core,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_canMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_hoveredBuyable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_gameEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_adjustPhase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
		&APlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<APlayerCharacter>()
	{
		return APlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
	APlayerCharacter::~APlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_PlayerCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_PlayerCharacter_h_Statics::EnumInfo[] = {
		{ EGameMode_StaticEnum, TEXT("EGameMode"), &Z_Registration_Info_UEnum_EGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2527694996U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 2293726500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_PlayerCharacter_h_4220107993(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_PlayerCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Uni_problox_projProblox_Source_projProblox_PlayerCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
