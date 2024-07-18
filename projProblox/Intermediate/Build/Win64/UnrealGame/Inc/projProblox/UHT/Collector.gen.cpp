// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Collector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACollector();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACollector_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(ACollector::execAddThing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddThing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollector::execGetLevel3Collected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevel3Collected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollector::execGetLevel2Collected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevel2Collected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollector::execGetLevel1Collected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevel1Collected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollector::execGetLevel3Count)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevel3Count();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollector::execGetLevel2Count)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevel2Count();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollector::execGetLevel1Count)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevel1Count();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACollector::execCalculateCellCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateCellCount();
		P_NATIVE_END;
	}
	void ACollector::StaticRegisterNativesACollector()
	{
		UClass* Class = ACollector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddThing", &ACollector::execAddThing },
			{ "CalculateCellCount", &ACollector::execCalculateCellCount },
			{ "GetLevel1Collected", &ACollector::execGetLevel1Collected },
			{ "GetLevel1Count", &ACollector::execGetLevel1Count },
			{ "GetLevel2Collected", &ACollector::execGetLevel2Collected },
			{ "GetLevel2Count", &ACollector::execGetLevel2Count },
			{ "GetLevel3Collected", &ACollector::execGetLevel3Collected },
			{ "GetLevel3Count", &ACollector::execGetLevel3Count },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACollector_AddThing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollector_AddThing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollector_AddThing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollector, nullptr, "AddThing", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_AddThing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollector_AddThing_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACollector_AddThing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollector_AddThing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollector_CalculateCellCount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollector_CalculateCellCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollector_CalculateCellCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollector, nullptr, "CalculateCellCount", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_CalculateCellCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollector_CalculateCellCount_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACollector_CalculateCellCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollector_CalculateCellCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics
	{
		struct Collector_eventGetLevel1Collected_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collector_eventGetLevel1Collected_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollector, nullptr, "GetLevel1Collected", nullptr, nullptr, Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::Collector_eventGetLevel1Collected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::Collector_eventGetLevel1Collected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACollector_GetLevel1Collected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollector_GetLevel1Collected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollector_GetLevel1Count_Statics
	{
		struct Collector_eventGetLevel1Count_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collector_eventGetLevel1Count_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollector, nullptr, "GetLevel1Count", nullptr, nullptr, Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::Collector_eventGetLevel1Count_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::Collector_eventGetLevel1Count_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACollector_GetLevel1Count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollector_GetLevel1Count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics
	{
		struct Collector_eventGetLevel2Collected_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collector_eventGetLevel2Collected_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollector, nullptr, "GetLevel2Collected", nullptr, nullptr, Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::Collector_eventGetLevel2Collected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::Collector_eventGetLevel2Collected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACollector_GetLevel2Collected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollector_GetLevel2Collected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollector_GetLevel2Count_Statics
	{
		struct Collector_eventGetLevel2Count_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collector_eventGetLevel2Count_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollector, nullptr, "GetLevel2Count", nullptr, nullptr, Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::Collector_eventGetLevel2Count_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::Collector_eventGetLevel2Count_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACollector_GetLevel2Count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollector_GetLevel2Count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics
	{
		struct Collector_eventGetLevel3Collected_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collector_eventGetLevel3Collected_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollector, nullptr, "GetLevel3Collected", nullptr, nullptr, Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::Collector_eventGetLevel3Collected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::Collector_eventGetLevel3Collected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACollector_GetLevel3Collected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollector_GetLevel3Collected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollector_GetLevel3Count_Statics
	{
		struct Collector_eventGetLevel3Count_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Collector_eventGetLevel3Count_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollector, nullptr, "GetLevel3Count", nullptr, nullptr, Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::Collector_eventGetLevel3Count_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::Collector_eventGetLevel3Count_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACollector_GetLevel3Count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACollector_GetLevel3Count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollector);
	UClass* Z_Construct_UClass_ACollector_NoRegister()
	{
		return ACollector::StaticClass();
	}
	struct Z_Construct_UClass_ACollector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_depoPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_depoPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tube;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_light_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_light;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellsInLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_cellsInLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_cellCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACollector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACollector_AddThing, "AddThing" }, // 2344276729
		{ &Z_Construct_UFunction_ACollector_CalculateCellCount, "CalculateCellCount" }, // 992166689
		{ &Z_Construct_UFunction_ACollector_GetLevel1Collected, "GetLevel1Collected" }, // 557216532
		{ &Z_Construct_UFunction_ACollector_GetLevel1Count, "GetLevel1Count" }, // 1569599822
		{ &Z_Construct_UFunction_ACollector_GetLevel2Collected, "GetLevel2Collected" }, // 3810931290
		{ &Z_Construct_UFunction_ACollector_GetLevel2Count, "GetLevel2Count" }, // 848728290
		{ &Z_Construct_UFunction_ACollector_GetLevel3Collected, "GetLevel3Collected" }, // 758928701
		{ &Z_Construct_UFunction_ACollector_GetLevel3Count, "GetLevel3Count" }, // 252035555
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Collector.h" },
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollector_Statics::NewProp_scene_MetaData[] = {
		{ "Category", "Collector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Components ///////////////\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollector_Statics::NewProp_scene = { "scene", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollector, scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::NewProp_scene_MetaData), Z_Construct_UClass_ACollector_Statics::NewProp_scene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollector_Statics::NewProp_depoPoint_MetaData[] = {
		{ "Category", "Collector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollector_Statics::NewProp_depoPoint = { "depoPoint", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollector, depoPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::NewProp_depoPoint_MetaData), Z_Construct_UClass_ACollector_Statics::NewProp_depoPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollector_Statics::NewProp_tube_MetaData[] = {
		{ "Category", "Collector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollector_Statics::NewProp_tube = { "tube", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollector, tube), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::NewProp_tube_MetaData), Z_Construct_UClass_ACollector_Statics::NewProp_tube_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollector_Statics::NewProp_lid_MetaData[] = {
		{ "Category", "Collector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollector_Statics::NewProp_lid = { "lid", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollector, lid), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::NewProp_lid_MetaData), Z_Construct_UClass_ACollector_Statics::NewProp_lid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollector_Statics::NewProp_light_MetaData[] = {
		{ "Category", "Collector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollector_Statics::NewProp_light = { "light", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollector, light), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::NewProp_light_MetaData), Z_Construct_UClass_ACollector_Statics::NewProp_light_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollector_Statics::NewProp_cellsInLevel_MetaData[] = {
		{ "Category", "Collector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Cells ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Collector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cells" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACollector_Statics::NewProp_cellsInLevel = { "cellsInLevel", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollector, cellsInLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::NewProp_cellsInLevel_MetaData), Z_Construct_UClass_ACollector_Statics::NewProp_cellsInLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollector_Statics::NewProp_cellCount_MetaData[] = {
		{ "Category", "Collector" },
		{ "ModuleRelativePath", "Collector.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACollector_Statics::NewProp_cellCount = { "cellCount", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollector, cellCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::NewProp_cellCount_MetaData), Z_Construct_UClass_ACollector_Statics::NewProp_cellCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollector_Statics::NewProp_player_MetaData[] = {
		{ "Category", "Collector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Other ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Collector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Other" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollector_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollector, player), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::NewProp_player_MetaData), Z_Construct_UClass_ACollector_Statics::NewProp_player_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollector_Statics::NewProp_scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollector_Statics::NewProp_depoPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollector_Statics::NewProp_tube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollector_Statics::NewProp_lid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollector_Statics::NewProp_light,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollector_Statics::NewProp_cellsInLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollector_Statics::NewProp_cellCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollector_Statics::NewProp_player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollector_Statics::ClassParams = {
		&ACollector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACollector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::Class_MetaDataParams), Z_Construct_UClass_ACollector_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollector_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACollector()
	{
		if (!Z_Registration_Info_UClass_ACollector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollector.OuterSingleton, Z_Construct_UClass_ACollector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACollector.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ACollector>()
	{
		return ACollector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollector);
	ACollector::~ACollector() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Collector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Collector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACollector, ACollector::StaticClass, TEXT("ACollector"), &Z_Registration_Info_UClass_ACollector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollector), 276822077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Collector_h_3284981258(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Collector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Collector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
