// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/SpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnPoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ASpawnPoint();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ASpawnPoint_NoRegister();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_ELevel();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnNewSpawn__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_projProblox_OnNewSpawn__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnNewSpawn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnNewSpawn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnNewSpawn__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnNewSpawn__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnNewSpawn__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnNewSpawn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnNewSpawn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNewSpawn_DelegateWrapper(const FMulticastScriptDelegate& OnNewSpawn)
{
	OnNewSpawn.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevel;
	static UEnum* ELevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_projProblox_ELevel, (UObject*)Z_Construct_UPackage__Script_projProblox(), TEXT("ELevel"));
		}
		return Z_Registration_Info_UEnum_ELevel.OuterSingleton;
	}
	template<> PROJPROBLOX_API UEnum* StaticEnum<ELevel>()
	{
		return ELevel_StaticEnum();
	}
	struct Z_Construct_UEnum_projProblox_ELevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_projProblox_ELevel_Statics::Enumerators[] = {
		{ "ELevel::BuildArea", (int64)ELevel::BuildArea },
		{ "ELevel::Bedroom", (int64)ELevel::Bedroom },
		{ "ELevel::Kitchen", (int64)ELevel::Kitchen },
		{ "ELevel::Bathroom", (int64)ELevel::Bathroom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_projProblox_ELevel_Statics::Enum_MetaDataParams[] = {
		{ "Bathroom.Name", "ELevel::Bathroom" },
		{ "Bedroom.Name", "ELevel::Bedroom" },
		{ "BlueprintType", "true" },
		{ "BuildArea.Name", "ELevel::BuildArea" },
		{ "Kitchen.Name", "ELevel::Kitchen" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_projProblox_ELevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_projProblox,
		nullptr,
		"ELevel",
		"ELevel",
		Z_Construct_UEnum_projProblox_ELevel_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_ELevel_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_ELevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_projProblox_ELevel_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_projProblox_ELevel()
	{
		if (!Z_Registration_Info_UEnum_ELevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevel.InnerSingleton, Z_Construct_UEnum_projProblox_ELevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELevel.InnerSingleton;
	}
	DEFINE_FUNCTION(ASpawnPoint::execGetLevelIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevelIndex();
		P_NATIVE_END;
	}
	void ASpawnPoint::StaticRegisterNativesASpawnPoint()
	{
		UClass* Class = ASpawnPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevelIndex", &ASpawnPoint::execGetLevelIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics
	{
		struct SpawnPoint_eventGetLevelIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnPoint_eventGetLevelIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnPoint, nullptr, "GetLevelIndex", nullptr, nullptr, Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::SpawnPoint_eventGetLevelIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::SpawnPoint_eventGetLevelIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASpawnPoint_GetLevelIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnPoint_GetLevelIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnPoint);
	UClass* Z_Construct_UClass_ASpawnPoint_NoRegister()
	{
		return ASpawnPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_defaultScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unlockTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_unlockTrigger;
		static const UECodeGen_Private::FBytePropertyParams NewProp_level_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_level_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawnPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnPoint_GetLevelIndex, "GetLevelIndex" }, // 3193090826
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnPoint.h" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::NewProp_defaultScene_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_defaultScene = { "defaultScene", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnPoint, defaultScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_defaultScene_MetaData), Z_Construct_UClass_ASpawnPoint_Statics::NewProp_defaultScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::NewProp_unlockTrigger_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_unlockTrigger = { "unlockTrigger", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnPoint, unlockTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_unlockTrigger_MetaData), Z_Construct_UClass_ASpawnPoint_Statics::NewProp_unlockTrigger_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPoint_Statics::NewProp_level_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "ModuleRelativePath", "SpawnPoint.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The level that the spawn point should be valid for." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASpawnPoint_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnPoint, level), Z_Construct_UEnum_projProblox_ELevel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::NewProp_level_MetaData), Z_Construct_UClass_ASpawnPoint_Statics::NewProp_level_MetaData) }; // 1235914906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_defaultScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_unlockTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_level_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPoint_Statics::NewProp_level,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnPoint_Statics::ClassParams = {
		&ASpawnPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawnPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpawnPoint()
	{
		if (!Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton, Z_Construct_UClass_ASpawnPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnPoint.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ASpawnPoint>()
	{
		return ASpawnPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnPoint);
	ASpawnPoint::~ASpawnPoint() {}
	struct Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_SpawnPoint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_SpawnPoint_h_Statics::EnumInfo[] = {
		{ ELevel_StaticEnum, TEXT("ELevel"), &Z_Registration_Info_UEnum_ELevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1235914906U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_SpawnPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnPoint, ASpawnPoint::StaticClass, TEXT("ASpawnPoint"), &Z_Registration_Info_UClass_ASpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnPoint), 1693058136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_SpawnPoint_h_2892863932(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_SpawnPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_SpawnPoint_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_SpawnPoint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_SpawnPoint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
