// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Cells/CellSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACell_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACellSpawner();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACellSpawner_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ULevelObjective_NoRegister();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_ECellType();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_ELevel();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics
	{
		struct _Script_projProblox_eventOnSpawnTriggered_Parms
		{
			ACellSpawner* triggeredSpawner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_triggeredSpawner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::NewProp_triggeredSpawner = { "triggeredSpawner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_projProblox_eventOnSpawnTriggered_Parms, triggeredSpawner), Z_Construct_UClass_ACellSpawner_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::NewProp_triggeredSpawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnSpawnTriggered__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::_Script_projProblox_eventOnSpawnTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::_Script_projProblox_eventOnSpawnTriggered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSpawnTriggered_DelegateWrapper(const FMulticastScriptDelegate& OnSpawnTriggered, ACellSpawner* triggeredSpawner)
{
	struct _Script_projProblox_eventOnSpawnTriggered_Parms
	{
		ACellSpawner* triggeredSpawner;
	};
	_Script_projProblox_eventOnSpawnTriggered_Parms Parms;
	Parms.triggeredSpawner=triggeredSpawner;
	OnSpawnTriggered.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECellType;
	static UEnum* ECellType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECellType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECellType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_projProblox_ECellType, (UObject*)Z_Construct_UPackage__Script_projProblox(), TEXT("ECellType"));
		}
		return Z_Registration_Info_UEnum_ECellType.OuterSingleton;
	}
	template<> PROJPROBLOX_API UEnum* StaticEnum<ECellType>()
	{
		return ECellType_StaticEnum();
	}
	struct Z_Construct_UEnum_projProblox_ECellType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_projProblox_ECellType_Statics::Enumerators[] = {
		{ "ECellType::Normal", (int64)ECellType::Normal },
		{ "ECellType::Bouncy", (int64)ECellType::Bouncy },
		{ "ECellType::Slippery", (int64)ECellType::Slippery },
		{ "ECellType::Hover", (int64)ECellType::Hover },
		{ "ECellType::Sticky", (int64)ECellType::Sticky },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_projProblox_ECellType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bouncy.Name", "ECellType::Bouncy" },
		{ "Hover.Name", "ECellType::Hover" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
		{ "Normal.Name", "ECellType::Normal" },
		{ "Slippery.Name", "ECellType::Slippery" },
		{ "Sticky.Name", "ECellType::Sticky" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_projProblox_ECellType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_projProblox,
		nullptr,
		"ECellType",
		"ECellType",
		Z_Construct_UEnum_projProblox_ECellType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_ECellType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_ECellType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_projProblox_ECellType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_projProblox_ECellType()
	{
		if (!Z_Registration_Info_UEnum_ECellType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECellType.InnerSingleton, Z_Construct_UEnum_projProblox_ECellType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECellType.InnerSingleton;
	}
	DEFINE_FUNCTION(ACellSpawner::execDisplaySpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplaySpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACellSpawner::execGetObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const ULevelObjective**)Z_Param__Result=P_THIS->GetObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACellSpawner::execHasObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACellSpawner::execGetLevelEnum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELevel*)Z_Param__Result=P_THIS->GetLevelEnum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACellSpawner::execStopSound)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_empty);
		P_GET_ENUM(ELevel,Z_Param_unused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSound(Z_Param_empty,ELevel(Z_Param_unused));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACellSpawner::execIncreaseCollectedAmount)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseCollectedAmount(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACellSpawner::execOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Overlap(Z_Param_otherActor);
		P_NATIVE_END;
	}
	void ACellSpawner::StaticRegisterNativesACellSpawner()
	{
		UClass* Class = ACellSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplaySpawn", &ACellSpawner::execDisplaySpawn },
			{ "GetLevelEnum", &ACellSpawner::execGetLevelEnum },
			{ "GetObjective", &ACellSpawner::execGetObjective },
			{ "HasObjective", &ACellSpawner::execHasObjective },
			{ "IncreaseCollectedAmount", &ACellSpawner::execIncreaseCollectedAmount },
			{ "Overlap", &ACellSpawner::execOverlap },
			{ "StopSound", &ACellSpawner::execStopSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACellSpawner_DisplaySpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_DisplaySpawn_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used in the main menu to spawn smaller cells that don't do anything\n" },
#endif
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used in the main menu to spawn smaller cells that don't do anything" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACellSpawner_DisplaySpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACellSpawner, nullptr, "DisplaySpawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_DisplaySpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACellSpawner_DisplaySpawn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACellSpawner_DisplaySpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACellSpawner_DisplaySpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics
	{
		struct CellSpawner_eventGetLevelEnum_Parms
		{
			ELevel ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CellSpawner_eventGetLevelEnum_Parms, ReturnValue), Z_Construct_UEnum_projProblox_ELevel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::NewProp_ReturnValue_MetaData) }; // 1235914906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////// GETTERS ///////////\n" },
#endif
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GETTERS" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACellSpawner, nullptr, "GetLevelEnum", nullptr, nullptr, Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::CellSpawner_eventGetLevelEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::CellSpawner_eventGetLevelEnum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACellSpawner_GetLevelEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACellSpawner_GetLevelEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACellSpawner_GetObjective_Statics
	{
		struct CellSpawner_eventGetObjective_Parms
		{
			const ULevelObjective* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CellSpawner_eventGetObjective_Parms, ReturnValue), Z_Construct_UClass_ULevelObjective_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACellSpawner, nullptr, "GetObjective", nullptr, nullptr, Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::CellSpawner_eventGetObjective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::CellSpawner_eventGetObjective_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACellSpawner_GetObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACellSpawner_GetObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACellSpawner_HasObjective_Statics
	{
		struct CellSpawner_eventHasObjective_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CellSpawner_eventHasObjective_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CellSpawner_eventHasObjective_Parms), &Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACellSpawner, nullptr, "HasObjective", nullptr, nullptr, Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::CellSpawner_eventHasObjective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::CellSpawner_eventHasObjective_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACellSpawner_HasObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACellSpawner_HasObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics
	{
		struct CellSpawner_eventIncreaseCollectedAmount_Parms
		{
			AActor* DestroyedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CellSpawner_eventIncreaseCollectedAmount_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACellSpawner, nullptr, "IncreaseCollectedAmount", nullptr, nullptr, Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::CellSpawner_eventIncreaseCollectedAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::CellSpawner_eventIncreaseCollectedAmount_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACellSpawner_Overlap_Statics
	{
		struct CellSpawner_eventOverlap_Parms
		{
			AActor* otherActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACellSpawner_Overlap_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CellSpawner_eventOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACellSpawner_Overlap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CellSpawner_eventOverlap_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACellSpawner_Overlap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CellSpawner_eventOverlap_Parms), &Z_Construct_UFunction_ACellSpawner_Overlap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACellSpawner_Overlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACellSpawner_Overlap_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACellSpawner_Overlap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_Overlap_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the overlap caused a spawn\n" },
#endif
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the overlap caused a spawn" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACellSpawner_Overlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACellSpawner, nullptr, "Overlap", nullptr, nullptr, Z_Construct_UFunction_ACellSpawner_Overlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_Overlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACellSpawner_Overlap_Statics::CellSpawner_eventOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_Overlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACellSpawner_Overlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_Overlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACellSpawner_Overlap_Statics::CellSpawner_eventOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACellSpawner_Overlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACellSpawner_Overlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACellSpawner_StopSound_Statics
	{
		struct CellSpawner_eventStopSound_Parms
		{
			int32 empty;
			ELevel unused;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_empty;
		static const UECodeGen_Private::FBytePropertyParams NewProp_unused_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_unused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACellSpawner_StopSound_Statics::NewProp_empty = { "empty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CellSpawner_eventStopSound_Parms, empty), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACellSpawner_StopSound_Statics::NewProp_unused_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACellSpawner_StopSound_Statics::NewProp_unused = { "unused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CellSpawner_eventStopSound_Parms, unused), Z_Construct_UEnum_projProblox_ELevel, METADATA_PARAMS(0, nullptr) }; // 1235914906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACellSpawner_StopSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACellSpawner_StopSound_Statics::NewProp_empty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACellSpawner_StopSound_Statics::NewProp_unused_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACellSpawner_StopSound_Statics::NewProp_unused,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_StopSound_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////// DELEGATES ///////////\n// The parameters are there so that it can be called when the level changes\n" },
#endif
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DELEGATES\nThe parameters are there so that it can be called when the level changes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACellSpawner_StopSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACellSpawner, nullptr, "StopSound", nullptr, nullptr, Z_Construct_UFunction_ACellSpawner_StopSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_StopSound_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACellSpawner_StopSound_Statics::CellSpawner_eventStopSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_StopSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACellSpawner_StopSound_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_StopSound_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACellSpawner_StopSound_Statics::CellSpawner_eventStopSound_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACellSpawner_StopSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACellSpawner_StopSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACellSpawner);
	UClass* Z_Construct_UClass_ACellSpawner_NoRegister()
	{
		return ACellSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACellSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_soundPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_soundPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_soundToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_soundToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_soundDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_soundDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loopingSound_MetaData[];
#endif
		static void NewProp_loopingSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_loopingSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normalCell_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_normalCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bouncyThing_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_bouncyThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slipperyCell_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_slipperyCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hoverCell_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_hoverCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stickyCell_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_stickyCell;
		static const UECodeGen_Private::FBytePropertyParams NewProp_cellType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_cellType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objective_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_objective;
		static const UECodeGen_Private::FBytePropertyParams NewProp_level_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnAmount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_spawnAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_previewed_MetaData[];
#endif
		static void NewProp_previewed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_previewed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_spawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_coneRadius_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_coneRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnForce_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_spawnForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_triggerable_MetaData[];
#endif
		static void NewProp_triggerable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_triggerable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_scene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forceDirection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_forceDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onTriggered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onTriggered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACellSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACellSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACellSpawner_DisplaySpawn, "DisplaySpawn" }, // 1338642413
		{ &Z_Construct_UFunction_ACellSpawner_GetLevelEnum, "GetLevelEnum" }, // 3505796159
		{ &Z_Construct_UFunction_ACellSpawner_GetObjective, "GetObjective" }, // 41837920
		{ &Z_Construct_UFunction_ACellSpawner_HasObjective, "HasObjective" }, // 602619484
		{ &Z_Construct_UFunction_ACellSpawner_IncreaseCollectedAmount, "IncreaseCollectedAmount" }, // 3086535848
		{ &Z_Construct_UFunction_ACellSpawner_Overlap, "Overlap" }, // 1969133639
		{ &Z_Construct_UFunction_ACellSpawner_StopSound, "StopSound" }, // 2314357331
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cells/CellSpawner.h" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnTrigger_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the relative location is 0, this has no affect." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnTrigger = { "spawnTrigger", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, spawnTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnTrigger_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnTrigger_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundPlayer_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sound will play at the location of this sound player..." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundPlayer = { "soundPlayer", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, soundPlayer), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundPlayer_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundToPlay_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////// SOUND ///////////\n" },
#endif
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SOUND" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundToPlay = { "soundToPlay", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, soundToPlay), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundToPlay_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundToPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundDelay_MetaData[] = {
		{ "Category", "Sound" },
		{ "Delta", "0.500000" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setting to 0 means the sound plays instantly" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundDelay = { "soundDelay", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, soundDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundDelay_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_loopingSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	void Z_Construct_UClass_ACellSpawner_Statics::NewProp_loopingSound_SetBit(void* Obj)
	{
		((ACellSpawner*)Obj)->loopingSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_loopingSound = { "loopingSound", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACellSpawner), &Z_Construct_UClass_ACellSpawner_Statics::NewProp_loopingSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_loopingSound_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_loopingSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_normalCell_MetaData[] = {
		{ "Category", "CellSpawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////// CELL CLASSES ///////////\n" },
#endif
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CELL CLASSES" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_normalCell = { "normalCell", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, normalCell), Z_Construct_UClass_UClass, Z_Construct_UClass_ACell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_normalCell_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_normalCell_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_bouncyThing_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_bouncyThing = { "bouncyThing", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, bouncyThing), Z_Construct_UClass_UClass, Z_Construct_UClass_ACell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_bouncyThing_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_bouncyThing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_slipperyCell_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_slipperyCell = { "slipperyCell", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, slipperyCell), Z_Construct_UClass_UClass, Z_Construct_UClass_ACell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_slipperyCell_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_slipperyCell_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_hoverCell_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_hoverCell = { "hoverCell", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, hoverCell), Z_Construct_UClass_UClass, Z_Construct_UClass_ACell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_hoverCell_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_hoverCell_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_stickyCell_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_stickyCell = { "stickyCell", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, stickyCell), Z_Construct_UClass_UClass, Z_Construct_UClass_ACell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_stickyCell_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_stickyCell_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_cellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_cellType_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of thing to spawn." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_cellType = { "cellType", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, cellType), Z_Construct_UEnum_projProblox_ECellType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_cellType_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_cellType_MetaData) }; // 653651803
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_objective_MetaData[] = {
		{ "Category", "Objective" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////// EDITABLE PROPERTIES ///////////\n" },
#endif
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EDITABLE PROPERTIES" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_objective = { "objective", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, objective), Z_Construct_UClass_ULevelObjective_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_objective_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_objective_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_level_MetaData[] = {
		{ "Category", "Level Assignment" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of thing to spawn." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, level), Z_Construct_UEnum_projProblox_ELevel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_level_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_level_MetaData) }; // 1235914906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnAmount_MetaData[] = {
		{ "Category", "Spawn Properties|Amount" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The initial number of cells that will spawn from this..." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnAmount = { "spawnAmount", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, spawnAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnAmount_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_previewed_MetaData[] = {
		{ "Category", "Spawn Properties|Activation" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to spawn the cells as soon as the level is loaded" },
#endif
	};
#endif
	void Z_Construct_UClass_ACellSpawner_Statics::NewProp_previewed_SetBit(void* Obj)
	{
		((ACellSpawner*)Obj)->previewed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_previewed = { "previewed", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACellSpawner), &Z_Construct_UClass_ACellSpawner_Statics::NewProp_previewed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_previewed_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_previewed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnRadius_MetaData[] = {
		{ "Category", "Spawn Properties|Force" },
		{ "ClampMax", "1000000" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The radius around the position of this actor that cells are allowed to spawn in (setting to means they spawn directly on the actor)." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnRadius = { "spawnRadius", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, spawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnRadius_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_coneRadius_MetaData[] = {
		{ "Category", "Spawn Properties|Force" },
		{ "ClampMax", "1000000" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The max angle of the cone of force to be applied when new cells are spawned." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_coneRadius = { "coneRadius", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, coneRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_coneRadius_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_coneRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnForce_MetaData[] = {
		{ "Category", "Spawn Properties|Force" },
		{ "Delta", "10" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This only applies when cells are spawned using the triggers." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnForce = { "spawnForce", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, spawnForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnForce_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_triggerable_MetaData[] = {
		{ "Category", "Spawn Properties|Activation" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to spawn cells on collision rather than when the game starts..." },
#endif
	};
#endif
	void Z_Construct_UClass_ACellSpawner_Statics::NewProp_triggerable_SetBit(void* Obj)
	{
		((ACellSpawner*)Obj)->triggerable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_triggerable = { "triggerable", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACellSpawner), &Z_Construct_UClass_ACellSpawner_Statics::NewProp_triggerable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_triggerable_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_triggerable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_scene_MetaData[] = {
		{ "Category", "CellSpawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////// COMPONENTS ///////////\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "COMPONENTS" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_scene = { "scene", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_scene_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_scene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_forceDirection_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_forceDirection = { "forceDirection", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, forceDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_forceDirection_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_forceDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_onTriggered_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////// VARIABLES ///////////////////////////\n/////////// DELEGATES ///////////\n" },
#endif
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "VARIABLES\nDELEGATES" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_onTriggered = { "onTriggered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, onTriggered), Z_Construct_UDelegateFunction_projProblox_OnSpawnTriggered__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_onTriggered_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_onTriggered_MetaData) }; // 4114899187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACellSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_soundDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_loopingSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_normalCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_bouncyThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_slipperyCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_hoverCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_stickyCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_cellType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_cellType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_objective,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_level_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_previewed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_coneRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_triggerable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_forceDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_onTriggered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACellSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACellSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACellSpawner_Statics::ClassParams = {
		&ACellSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACellSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ACellSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACellSpawner()
	{
		if (!Z_Registration_Info_UClass_ACellSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACellSpawner.OuterSingleton, Z_Construct_UClass_ACellSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACellSpawner.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ACellSpawner>()
	{
		return ACellSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACellSpawner);
	ACellSpawner::~ACellSpawner() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_Statics::EnumInfo[] = {
		{ ECellType_StaticEnum, TEXT("ECellType"), &Z_Registration_Info_UEnum_ECellType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 653651803U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACellSpawner, ACellSpawner::StaticClass, TEXT("ACellSpawner"), &Z_Registration_Info_UClass_ACellSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACellSpawner), 2151823877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_1543404065(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
