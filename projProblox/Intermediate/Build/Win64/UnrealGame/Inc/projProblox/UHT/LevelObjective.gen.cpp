// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/LevelObjective.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelObjective() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACellSpawner_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ULevelObjective();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ULevelObjective_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(ULevelObjective::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const ACellSpawner**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelObjective::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelObjective::execIsCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelObjective::execGetLevelName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLevelName();
		P_NATIVE_END;
	}
	void ULevelObjective::StaticRegisterNativesULevelObjective()
	{
		UClass* Class = ULevelObjective::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDescription", &ULevelObjective::execGetDescription },
			{ "GetLevelName", &ULevelObjective::execGetLevelName },
			{ "GetOwner", &ULevelObjective::execGetOwner },
			{ "IsCompleted", &ULevelObjective::execIsCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelObjective_GetDescription_Statics
	{
		struct LevelObjective_eventGetDescription_Parms
		{
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelObjective_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelObjective.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelObjective, nullptr, "GetDescription", nullptr, nullptr, Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::LevelObjective_eventGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::LevelObjective_eventGetDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelObjective_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelObjective_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics
	{
		struct LevelObjective_eventGetLevelName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelObjective_eventGetLevelName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelObjective.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelObjective, nullptr, "GetLevelName", nullptr, nullptr, Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::LevelObjective_eventGetLevelName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::LevelObjective_eventGetLevelName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelObjective_GetLevelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelObjective_GetLevelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelObjective_GetOwner_Statics
	{
		struct LevelObjective_eventGetOwner_Parms
		{
			const ACellSpawner* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelObjective_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_ACellSpawner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelObjective.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelObjective, nullptr, "GetOwner", nullptr, nullptr, Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::LevelObjective_eventGetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::LevelObjective_eventGetOwner_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelObjective_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelObjective_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics
	{
		struct LevelObjective_eventIsCompleted_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelObjective_eventIsCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LevelObjective_eventIsCompleted_Parms), &Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelObjective.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelObjective, nullptr, "IsCompleted", nullptr, nullptr, Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::LevelObjective_eventIsCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::LevelObjective_eventIsCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelObjective_IsCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelObjective_IsCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelObjective);
	UClass* Z_Construct_UClass_ULevelObjective_NoRegister()
	{
		return ULevelObjective::StaticClass();
	}
	struct Z_Construct_UClass_ULevelObjective_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_levelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_completed_MetaData[];
#endif
		static void NewProp_completed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelObjective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjective_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelObjective_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelObjective_GetDescription, "GetDescription" }, // 2639988139
		{ &Z_Construct_UFunction_ULevelObjective_GetLevelName, "GetLevelName" }, // 3341198349
		{ &Z_Construct_UFunction_ULevelObjective_GetOwner, "GetOwner" }, // 732663586
		{ &Z_Construct_UFunction_ULevelObjective_IsCompleted, "IsCompleted" }, // 3891244867
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjective_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelObjective_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// When naming the file use the level name then a clue to what the objective is... like 'Bedroom_Bed'. Doing this ensures the level name is correct (The level name needs to match in order\n// for the UI to understand...)\n" },
#endif
		{ "IncludePath", "LevelObjective.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LevelObjective.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When naming the file use the level name then a clue to what the objective is... like 'Bedroom_Bed'. Doing this ensures the level name is correct (The level name needs to match in order\nfor the UI to understand...)" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelObjective_Statics::NewProp_levelName_MetaData[] = {
		{ "Category", "LevelObjective" },
		{ "ModuleRelativePath", "LevelObjective.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelObjective_Statics::NewProp_levelName = { "levelName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelObjective, levelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjective_Statics::NewProp_levelName_MetaData), Z_Construct_UClass_ULevelObjective_Statics::NewProp_levelName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelObjective_Statics::NewProp_description_MetaData[] = {
		{ "Category", "LevelObjective" },
		{ "ModuleRelativePath", "LevelObjective.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULevelObjective_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelObjective, description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjective_Statics::NewProp_description_MetaData), Z_Construct_UClass_ULevelObjective_Statics::NewProp_description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelObjective_Statics::NewProp_completed_MetaData[] = {
		{ "Category", "LevelObjective" },
		{ "ModuleRelativePath", "LevelObjective.h" },
	};
#endif
	void Z_Construct_UClass_ULevelObjective_Statics::NewProp_completed_SetBit(void* Obj)
	{
		((ULevelObjective*)Obj)->completed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelObjective_Statics::NewProp_completed = { "completed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULevelObjective), &Z_Construct_UClass_ULevelObjective_Statics::NewProp_completed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjective_Statics::NewProp_completed_MetaData), Z_Construct_UClass_ULevelObjective_Statics::NewProp_completed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelObjective_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelObjective_Statics::NewProp_levelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelObjective_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelObjective_Statics::NewProp_completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelObjective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelObjective>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelObjective_Statics::ClassParams = {
		&ULevelObjective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelObjective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjective_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjective_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelObjective_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjective_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelObjective()
	{
		if (!Z_Registration_Info_UClass_ULevelObjective.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelObjective.OuterSingleton, Z_Construct_UClass_ULevelObjective_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelObjective.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ULevelObjective>()
	{
		return ULevelObjective::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelObjective);
	ULevelObjective::~ULevelObjective() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_LevelObjective_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_LevelObjective_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelObjective, ULevelObjective::StaticClass, TEXT("ULevelObjective"), &Z_Registration_Info_UClass_ULevelObjective, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelObjective), 3766448764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_LevelObjective_h_4180815343(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_LevelObjective_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_LevelObjective_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
