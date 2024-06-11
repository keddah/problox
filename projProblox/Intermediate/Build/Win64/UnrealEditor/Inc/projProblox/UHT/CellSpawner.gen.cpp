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
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACell_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACellSpawner();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACellSpawner_NoRegister();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_ECellType();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
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
	DEFINE_FUNCTION(ACellSpawner::execBeginSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACellSpawner::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACellSpawner::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	void ACellSpawner::StaticRegisterNativesACellSpawner()
	{
		UClass* Class = ACellSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &ACellSpawner::execActivate },
			{ "BeginSpawn", &ACellSpawner::execBeginSpawn },
			{ "IsActive", &ACellSpawner::execIsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACellSpawner_Activate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACellSpawner_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACellSpawner, nullptr, "Activate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_Activate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACellSpawner_Activate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACellSpawner_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACellSpawner_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACellSpawner_BeginSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_BeginSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACellSpawner_BeginSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACellSpawner, nullptr, "BeginSpawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_BeginSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACellSpawner_BeginSpawn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACellSpawner_BeginSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACellSpawner_BeginSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACellSpawner_IsActive_Statics
	{
		struct CellSpawner_eventIsActive_Parms
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
	void Z_Construct_UFunction_ACellSpawner_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CellSpawner_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACellSpawner_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CellSpawner_eventIsActive_Parms), &Z_Construct_UFunction_ACellSpawner_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACellSpawner_IsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACellSpawner_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACellSpawner_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACellSpawner_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACellSpawner, nullptr, "IsActive", nullptr, nullptr, Z_Construct_UFunction_ACellSpawner_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_IsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACellSpawner_IsActive_Statics::CellSpawner_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACellSpawner_IsActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACellSpawner_IsActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACellSpawner_IsActive_Statics::CellSpawner_eventIsActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACellSpawner_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACellSpawner_IsActive_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normalThing_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_normalThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bouncyThing_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_bouncyThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slipperyThing_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_slipperyThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hoverThing_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_hoverThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stickyThing_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_stickyThing;
		static const UECodeGen_Private::FBytePropertyParams NewProp_thingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_thingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_defaultScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_spawnAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSpawnAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxSpawnAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_spawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_spawnForce;
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
		{ &Z_Construct_UFunction_ACellSpawner_Activate, "Activate" }, // 1333075796
		{ &Z_Construct_UFunction_ACellSpawner_BeginSpawn, "BeginSpawn" }, // 3883282272
		{ &Z_Construct_UFunction_ACellSpawner_IsActive, "IsActive" }, // 4174767182
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cells/CellSpawner.h" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_normalThing_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_normalThing = { "normalThing", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, normalThing), Z_Construct_UClass_UClass, Z_Construct_UClass_ACell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_normalThing_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_normalThing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_bouncyThing_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_bouncyThing = { "bouncyThing", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, bouncyThing), Z_Construct_UClass_UClass, Z_Construct_UClass_ACell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_bouncyThing_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_bouncyThing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_slipperyThing_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_slipperyThing = { "slipperyThing", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, slipperyThing), Z_Construct_UClass_UClass, Z_Construct_UClass_ACell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_slipperyThing_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_slipperyThing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_hoverThing_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_hoverThing = { "hoverThing", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, hoverThing), Z_Construct_UClass_UClass, Z_Construct_UClass_ACell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_hoverThing_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_hoverThing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_stickyThing_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_stickyThing = { "stickyThing", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, stickyThing), Z_Construct_UClass_UClass, Z_Construct_UClass_ACell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_stickyThing_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_stickyThing_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_thingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_thingType_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of thing to spawn." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_thingType = { "thingType", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, thingType), Z_Construct_UEnum_projProblox_ECellType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_thingType_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_thingType_MetaData) }; // 653651803
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_defaultScene_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_defaultScene = { "defaultScene", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, defaultScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_defaultScene_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_defaultScene_MetaData) };
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnTrigger = { "spawnTrigger", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, spawnTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnTrigger_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnTrigger_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnAmount_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The initial number of cells that will spawn from this..." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnAmount = { "spawnAmount", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, spawnAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnAmount_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_maxSpawnAmount_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum amount of cells that can spawn from this spawner..." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_maxSpawnAmount = { "maxSpawnAmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, maxSpawnAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_maxSpawnAmount_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_maxSpawnAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnRadius_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "ClampMax", "1000000" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The radius around the position of this actor that cells are allowed to spawn in (setting to means they spawn directly on the actor)." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnRadius = { "spawnRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, spawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnRadius_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnForce_MetaData[] = {
		{ "Category", "CellSpawner" },
		{ "ClampMax", "1000000" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "Cells/CellSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This only applies when cells are spawned using the triggers." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnForce = { "spawnForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellSpawner, spawnForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnForce_MetaData), Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnForce_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACellSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_normalThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_bouncyThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_slipperyThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_hoverThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_stickyThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_thingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_thingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_defaultScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_maxSpawnAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellSpawner_Statics::NewProp_spawnForce,
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
		{ Z_Construct_UClass_ACellSpawner, ACellSpawner::StaticClass, TEXT("ACellSpawner"), &Z_Registration_Info_UClass_ACellSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACellSpawner), 4065541173U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_4092840837(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_CellSpawner_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
