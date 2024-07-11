// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/GameModes/Modes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Assault();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Assault_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Build();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Build_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Creative();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Creative_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Story();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Story_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Wave();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AMode_Wave_NoRegister();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void AMode_Story::StaticRegisterNativesAMode_Story()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMode_Story);
	UClass* Z_Construct_UClass_AMode_Story_NoRegister()
	{
		return AMode_Story::StaticClass();
	}
	struct Z_Construct_UClass_AMode_Story_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMode_Story_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Story_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMode_Story_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/Modes.h" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMode_Story_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMode_Story>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMode_Story_Statics::ClassParams = {
		&AMode_Story::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Story_Statics::Class_MetaDataParams), Z_Construct_UClass_AMode_Story_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMode_Story()
	{
		if (!Z_Registration_Info_UClass_AMode_Story.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMode_Story.OuterSingleton, Z_Construct_UClass_AMode_Story_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMode_Story.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AMode_Story>()
	{
		return AMode_Story::StaticClass();
	}
	AMode_Story::AMode_Story(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMode_Story);
	AMode_Story::~AMode_Story() {}
	struct Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics
	{
		struct _Script_projProblox_eventOnCoreChanged_Parms
		{
			ACubeCore* newCore;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newCore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::NewProp_newCore = { "newCore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_projProblox_eventOnCoreChanged_Parms, newCore), Z_Construct_UClass_ACubeCore_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::NewProp_newCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/Modes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnCoreChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::_Script_projProblox_eventOnCoreChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::_Script_projProblox_eventOnCoreChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnCoreChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCoreChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCoreChanged, ACubeCore* newCore)
{
	struct _Script_projProblox_eventOnCoreChanged_Parms
	{
		ACubeCore* newCore;
	};
	_Script_projProblox_eventOnCoreChanged_Parms Parms;
	Parms.newCore=newCore;
	OnCoreChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AMode_Wave::execDeductAvailability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeductAvailability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMode_Wave::execGetAvailability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAvailability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMode_Wave::execGetWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMode_Wave::execIncreaseSpawns)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__wave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncreaseSpawns(Z_Param__wave);
		P_NATIVE_END;
	}
	void AMode_Wave::StaticRegisterNativesAMode_Wave()
	{
		UClass* Class = AMode_Wave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeductAvailability", &AMode_Wave::execDeductAvailability },
			{ "GetAvailability", &AMode_Wave::execGetAvailability },
			{ "GetWave", &AMode_Wave::execGetWave },
			{ "IncreaseSpawns", &AMode_Wave::execIncreaseSpawns },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMode_Wave_DeductAvailability_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMode_Wave_DeductAvailability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/Modes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMode_Wave_DeductAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMode_Wave, nullptr, "DeductAvailability", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMode_Wave_DeductAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMode_Wave_DeductAvailability_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMode_Wave_DeductAvailability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMode_Wave_DeductAvailability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics
	{
		struct Mode_Wave_eventGetAvailability_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Mode_Wave_eventGetAvailability_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/Modes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the amount of attachments the player is allowed to get." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMode_Wave, nullptr, "GetAvailability", nullptr, nullptr, Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::Mode_Wave_eventGetAvailability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::Mode_Wave_eventGetAvailability_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMode_Wave_GetAvailability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMode_Wave_GetAvailability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMode_Wave_GetWave_Statics
	{
		struct Mode_Wave_eventGetWave_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMode_Wave_GetWave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Mode_Wave_eventGetWave_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMode_Wave_GetWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMode_Wave_GetWave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMode_Wave_GetWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMode_Wave_GetWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMode_Wave, nullptr, "GetWave", nullptr, nullptr, Z_Construct_UFunction_AMode_Wave_GetWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMode_Wave_GetWave_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMode_Wave_GetWave_Statics::Mode_Wave_eventGetWave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMode_Wave_GetWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMode_Wave_GetWave_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMode_Wave_GetWave_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMode_Wave_GetWave_Statics::Mode_Wave_eventGetWave_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMode_Wave_GetWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMode_Wave_GetWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics
	{
		struct Mode_Wave_eventIncreaseSpawns_Parms
		{
			int32 _wave;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp__wave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::NewProp__wave = { "_wave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Mode_Wave_eventIncreaseSpawns_Parms, _wave), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::NewProp__wave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::Function_MetaDataParams[] = {
		{ "Category", "Waves" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The parameter is just there so that the delegate works. It doesn't do anything." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMode_Wave, nullptr, "IncreaseSpawns", nullptr, nullptr, Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::Mode_Wave_eventIncreaseSpawns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::Mode_Wave_eventIncreaseSpawns_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMode_Wave_IncreaseSpawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMode_Wave_IncreaseSpawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMode_Wave);
	UClass* Z_Construct_UClass_AMode_Wave_NoRegister()
	{
		return AMode_Wave::StaticClass();
	}
	struct Z_Construct_UClass_AMode_Wave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachmentsAvailable_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_attachmentsAvailable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waveAdditions_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_waveAdditions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waveFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_waveFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_waveAdditionIncrease_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_waveAdditionIncrease;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMode_Wave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Wave_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMode_Wave_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMode_Wave_DeductAvailability, "DeductAvailability" }, // 3902470427
		{ &Z_Construct_UFunction_AMode_Wave_GetAvailability, "GetAvailability" }, // 3008202845
		{ &Z_Construct_UFunction_AMode_Wave_GetWave, "GetWave" }, // 852838331
		{ &Z_Construct_UFunction_AMode_Wave_IncreaseSpawns, "IncreaseSpawns" }, // 1443754994
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Wave_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMode_Wave_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/Modes.h" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMode_Wave_Statics::NewProp_attachmentsAvailable_MetaData[] = {
		{ "Category", "Mode_Wave" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of attachments the player is allowed to choose..." },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMode_Wave_Statics::NewProp_attachmentsAvailable = { "attachmentsAvailable", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMode_Wave, attachmentsAvailable), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Wave_Statics::NewProp_attachmentsAvailable_MetaData), Z_Construct_UClass_AMode_Wave_Statics::NewProp_attachmentsAvailable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveAdditions_MetaData[] = {
		{ "Category", "Waves" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many MORE cells should be spawned in at the end of the wave" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveAdditions = { "waveAdditions", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMode_Wave, waveAdditions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveAdditions_MetaData), Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveAdditions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveFrequency_MetaData[] = {
		{ "Category", "Waves" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many waves need to pass in order for the game to change (the additions increase or new cell types)" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveFrequency = { "waveFrequency", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMode_Wave, waveFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveFrequency_MetaData), Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveAdditionIncrease_MetaData[] = {
		{ "Category", "Waves" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much should the wave additions increase by every x waves (5 waves)" },
#endif
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveAdditionIncrease = { "waveAdditionIncrease", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMode_Wave, waveAdditionIncrease), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveAdditionIncrease_MetaData), Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveAdditionIncrease_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMode_Wave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMode_Wave_Statics::NewProp_attachmentsAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveAdditions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMode_Wave_Statics::NewProp_waveAdditionIncrease,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMode_Wave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMode_Wave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMode_Wave_Statics::ClassParams = {
		&AMode_Wave::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMode_Wave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Wave_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Wave_Statics::Class_MetaDataParams), Z_Construct_UClass_AMode_Wave_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Wave_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMode_Wave()
	{
		if (!Z_Registration_Info_UClass_AMode_Wave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMode_Wave.OuterSingleton, Z_Construct_UClass_AMode_Wave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMode_Wave.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AMode_Wave>()
	{
		return AMode_Wave::StaticClass();
	}
	AMode_Wave::AMode_Wave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMode_Wave);
	AMode_Wave::~AMode_Wave() {}
	void AMode_Assault::StaticRegisterNativesAMode_Assault()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMode_Assault);
	UClass* Z_Construct_UClass_AMode_Assault_NoRegister()
	{
		return AMode_Assault::StaticClass();
	}
	struct Z_Construct_UClass_AMode_Assault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMode_Assault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Assault_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMode_Assault_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/Modes.h" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMode_Assault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMode_Assault>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMode_Assault_Statics::ClassParams = {
		&AMode_Assault::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Assault_Statics::Class_MetaDataParams), Z_Construct_UClass_AMode_Assault_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMode_Assault()
	{
		if (!Z_Registration_Info_UClass_AMode_Assault.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMode_Assault.OuterSingleton, Z_Construct_UClass_AMode_Assault_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMode_Assault.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AMode_Assault>()
	{
		return AMode_Assault::StaticClass();
	}
	AMode_Assault::AMode_Assault(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMode_Assault);
	AMode_Assault::~AMode_Assault() {}
	void AMode_Creative::StaticRegisterNativesAMode_Creative()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMode_Creative);
	UClass* Z_Construct_UClass_AMode_Creative_NoRegister()
	{
		return AMode_Creative::StaticClass();
	}
	struct Z_Construct_UClass_AMode_Creative_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMode_Creative_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Creative_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMode_Creative_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/Modes.h" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMode_Creative_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMode_Creative>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMode_Creative_Statics::ClassParams = {
		&AMode_Creative::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Creative_Statics::Class_MetaDataParams), Z_Construct_UClass_AMode_Creative_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMode_Creative()
	{
		if (!Z_Registration_Info_UClass_AMode_Creative.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMode_Creative.OuterSingleton, Z_Construct_UClass_AMode_Creative_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMode_Creative.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AMode_Creative>()
	{
		return AMode_Creative::StaticClass();
	}
	AMode_Creative::AMode_Creative(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMode_Creative);
	AMode_Creative::~AMode_Creative() {}
	void AMode_Build::StaticRegisterNativesAMode_Build()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMode_Build);
	UClass* Z_Construct_UClass_AMode_Build_NoRegister()
	{
		return AMode_Build::StaticClass();
	}
	struct Z_Construct_UClass_AMode_Build_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMode_Build_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Build_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMode_Build_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/Modes.h" },
		{ "ModuleRelativePath", "GameModes/Modes.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMode_Build_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMode_Build>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMode_Build_Statics::ClassParams = {
		&AMode_Build::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMode_Build_Statics::Class_MetaDataParams), Z_Construct_UClass_AMode_Build_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMode_Build()
	{
		if (!Z_Registration_Info_UClass_AMode_Build.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMode_Build.OuterSingleton, Z_Construct_UClass_AMode_Build_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMode_Build.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AMode_Build>()
	{
		return AMode_Build::StaticClass();
	}
	AMode_Build::AMode_Build(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMode_Build);
	AMode_Build::~AMode_Build() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_GameModes_Modes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_GameModes_Modes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMode_Story, AMode_Story::StaticClass, TEXT("AMode_Story"), &Z_Registration_Info_UClass_AMode_Story, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMode_Story), 2900308758U) },
		{ Z_Construct_UClass_AMode_Wave, AMode_Wave::StaticClass, TEXT("AMode_Wave"), &Z_Registration_Info_UClass_AMode_Wave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMode_Wave), 2659252905U) },
		{ Z_Construct_UClass_AMode_Assault, AMode_Assault::StaticClass, TEXT("AMode_Assault"), &Z_Registration_Info_UClass_AMode_Assault, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMode_Assault), 875086127U) },
		{ Z_Construct_UClass_AMode_Creative, AMode_Creative::StaticClass, TEXT("AMode_Creative"), &Z_Registration_Info_UClass_AMode_Creative, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMode_Creative), 1613074281U) },
		{ Z_Construct_UClass_AMode_Build, AMode_Build::StaticClass, TEXT("AMode_Build"), &Z_Registration_Info_UClass_AMode_Build, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMode_Build), 2849129638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_GameModes_Modes_h_1595263407(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_GameModes_Modes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_GameModes_Modes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
