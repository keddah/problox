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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APlayerCharacter();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UActionHistory_NoRegister();
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
		{ "EGameMode::Wave", (int64)EGameMode::Wave },
		{ "EGameMode::Assault", (int64)EGameMode::Assault },
		{ "EGameMode::Creative", (int64)EGameMode::Creative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_projProblox_EGameMode_Statics::Enum_MetaDataParams[] = {
		{ "Assault.Name", "EGameMode::Assault" },
		{ "BlueprintType", "true" },
		{ "Creative.Name", "EGameMode::Creative" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
		{ "Story.Name", "EGameMode::Story" },
		{ "Wave.Name", "EGameMode::Wave" },
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
	DEFINE_FUNCTION(APlayerCharacter::execGetGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameMode*)Z_Param__Result=P_THIS->GetGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execEndGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execDetach)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Detach(Z_Param_Out_hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execDeselect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deselect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execMoveSelection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_mousePos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveSelection(Z_Param_Out_mousePos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execGroupSelect)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GroupSelect(Z_Param_Out_hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execSelectObject)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectObject(Z_Param_Out_hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execManualSelectObject)
	{
		P_GET_OBJECT(APickupableMaster,Z_Param_obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ManualSelectObject(Z_Param_obj);
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
	DEFINE_FUNCTION(APlayerCharacter::execRedo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Redo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execUndo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Undo();
		P_NATIVE_END;
	}
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
		UClass* Class = APlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Deselect", &APlayerCharacter::execDeselect },
			{ "Detach", &APlayerCharacter::execDetach },
			{ "EndGame", &APlayerCharacter::execEndGame },
			{ "GetCore", &APlayerCharacter::execGetCore },
			{ "GetGameMode", &APlayerCharacter::execGetGameMode },
			{ "GroupSelect", &APlayerCharacter::execGroupSelect },
			{ "ManualSelectObject", &APlayerCharacter::execManualSelectObject },
			{ "MoveSelection", &APlayerCharacter::execMoveSelection },
			{ "Redo", &APlayerCharacter::execRedo },
			{ "SelectObject", &APlayerCharacter::execSelectObject },
			{ "SetGameMode", &APlayerCharacter::execSetGameMode },
			{ "Undo", &APlayerCharacter::execUndo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Deselect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Deselect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Deselect_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Deselect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_Deselect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Deselect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_Detach_Statics
	{
		struct PlayerCharacter_eventDetach_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_Detach_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_Detach_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventDetach_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Detach_Statics::NewProp_hit_MetaData), Z_Construct_UFunction_APlayerCharacter_Detach_Statics::NewProp_hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Detach_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Detach_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_Detach_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Detach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Detach", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_Detach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Detach_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_Detach_Statics::PlayerCharacter_eventDetach_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Detach_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Detach_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Detach_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_Detach_Statics::PlayerCharacter_eventDetach_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_Detach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Detach_Statics::FuncParams);
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
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetGameMode_Parms, ReturnValue), Z_Construct_UEnum_projProblox_EGameMode, METADATA_PARAMS(0, nullptr) }; // 616461896
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetGameMode", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::PlayerCharacter_eventGetGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetGameMode_Statics::Function_MetaDataParams) };
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
	struct Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics
	{
		struct PlayerCharacter_eventGroupSelect_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGroupSelect_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::NewProp_hit_MetaData), Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::NewProp_hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Picking up" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GroupSelect", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::PlayerCharacter_eventGroupSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::PlayerCharacter_eventGroupSelect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_GroupSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GroupSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics
	{
		struct PlayerCharacter_eventManualSelectObject_Parms
		{
			APickupableMaster* obj;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventManualSelectObject_Parms, obj), Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::NewProp_obj,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "ManualSelectObject", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::PlayerCharacter_eventManualSelectObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::PlayerCharacter_eventManualSelectObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_ManualSelectObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_ManualSelectObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics
	{
		struct PlayerCharacter_eventMoveSelection_Parms
		{
			FVector mousePos;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mousePos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_mousePos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::NewProp_mousePos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::NewProp_mousePos = { "mousePos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMoveSelection_Parms, mousePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::NewProp_mousePos_MetaData), Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::NewProp_mousePos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::NewProp_mousePos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Picking up" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "MoveSelection", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::PlayerCharacter_eventMoveSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::PlayerCharacter_eventMoveSelection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_MoveSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_MoveSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_Redo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_Redo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Redo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Redo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Redo_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Redo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_Redo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Redo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics
	{
		struct PlayerCharacter_eventSelectObject_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSelectObject_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::NewProp_hit_MetaData), Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::NewProp_hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::Function_MetaDataParams[] = {
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "SelectObject", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::PlayerCharacter_eventSelectObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::PlayerCharacter_eventSelectObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlayerCharacter_SelectObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_SelectObject_Statics::FuncParams);
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
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerCharacter_SetGameMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventSetGameMode_Parms, mode), Z_Construct_UEnum_projProblox_EGameMode, METADATA_PARAMS(0, nullptr) }; // 616461896
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
	struct Z_Construct_UFunction_APlayerCharacter_Undo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_Undo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Undo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Undo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Undo_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Undo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_Undo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Undo_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_history_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_history;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_exclusions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_exclusions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_exclusions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_core_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_core;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_holding_MetaData[];
#endif
		static void NewProp_holding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_holding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouseDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gameEnded_MetaData[];
#endif
		static void NewProp_gameEnded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_gameEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buildPhase_MetaData[];
#endif
		static void NewProp_buildPhase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_buildPhase;
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
		{ &Z_Construct_UFunction_APlayerCharacter_Deselect, "Deselect" }, // 959344020
		{ &Z_Construct_UFunction_APlayerCharacter_Detach, "Detach" }, // 1541612637
		{ &Z_Construct_UFunction_APlayerCharacter_EndGame, "EndGame" }, // 601148697
		{ &Z_Construct_UFunction_APlayerCharacter_GetCore, "GetCore" }, // 344276006
		{ &Z_Construct_UFunction_APlayerCharacter_GetGameMode, "GetGameMode" }, // 4117543127
		{ &Z_Construct_UFunction_APlayerCharacter_GroupSelect, "GroupSelect" }, // 2137927514
		{ &Z_Construct_UFunction_APlayerCharacter_ManualSelectObject, "ManualSelectObject" }, // 163528957
		{ &Z_Construct_UFunction_APlayerCharacter_MoveSelection, "MoveSelection" }, // 767853428
		{ &Z_Construct_UFunction_APlayerCharacter_Redo, "Redo" }, // 2675371083
		{ &Z_Construct_UFunction_APlayerCharacter_SelectObject, "SelectObject" }, // 1727888823
		{ &Z_Construct_UFunction_APlayerCharacter_SetGameMode, "SetGameMode" }, // 1885103187
		{ &Z_Construct_UFunction_APlayerCharacter_Undo, "Undo" }, // 1218169235
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_history_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Undo/Redo ///////////////\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Undo/Redo" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_history = { "history", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, history), Z_Construct_UClass_UActionHistory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_history_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_history_MetaData) };
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_exclusions_Inner = { "exclusions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_exclusions_MetaData[] = {
		{ "Category", "Picking up" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_exclusions = { "exclusions", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, exclusions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_exclusions_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_exclusions_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holding_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holding_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->holding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holding = { "holding", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holding_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseDistance_MetaData[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseDistance = { "mouseDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, mouseDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseDistance_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseDistance_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_buildPhase_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not the game is currently in the build phase (will be set to false once the game starts)." },
#endif
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_buildPhase_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->buildPhase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_buildPhase = { "buildPhase", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_buildPhase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_buildPhase_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_buildPhase_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode = { "currentMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, currentMode), Z_Construct_UEnum_projProblox_EGameMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_currentMode_MetaData) }; // 616461896
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_history,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_selectedObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_groupSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_toggleSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_exclusions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_exclusions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_core,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_holding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_mouseDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_gameEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_buildPhase,
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
	struct Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_PlayerCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_PlayerCharacter_h_Statics::EnumInfo[] = {
		{ EGameMode_StaticEnum, TEXT("EGameMode"), &Z_Registration_Info_UEnum_EGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 616461896U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 2615148560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_PlayerCharacter_h_3733312201(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_PlayerCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_PlayerCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
