// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/LevelObjectives.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelObjectives() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ULevelObjectives();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ULevelObjectives_NoRegister();
	PROJPROBLOX_API UScriptStruct* Z_Construct_UScriptStruct_FObjective();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Objective;
class UScriptStruct* FObjective::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Objective.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Objective.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjective, (UObject*)Z_Construct_UPackage__Script_projProblox(), TEXT("Objective"));
	}
	return Z_Registration_Info_UScriptStruct_Objective.OuterSingleton;
}
template<> PROJPROBLOX_API UScriptStruct* StaticStruct<FObjective>()
{
	return FObjective::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjective_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjective_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "LevelObjectives.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjective_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjective>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjective_Statics::NewProp_description_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "LevelObjectives.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FObjective_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjective, description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjective_Statics::NewProp_description_MetaData), Z_Construct_UScriptStruct_FObjective_Statics::NewProp_description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjective_Statics::NewProp_completed_MetaData[] = {
		{ "Category", "Objective" },
		{ "ModuleRelativePath", "LevelObjectives.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FObjective_Statics::NewProp_completed_SetBit(void* Obj)
	{
		((FObjective*)Obj)->completed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FObjective_Statics::NewProp_completed = { "completed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FObjective), &Z_Construct_UScriptStruct_FObjective_Statics::NewProp_completed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjective_Statics::NewProp_completed_MetaData), Z_Construct_UScriptStruct_FObjective_Statics::NewProp_completed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjective_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjective_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjective_Statics::NewProp_completed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjective_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
		nullptr,
		&NewStructOps,
		"Objective",
		Z_Construct_UScriptStruct_FObjective_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjective_Statics::PropPointers),
		sizeof(FObjective),
		alignof(FObjective),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjective_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjective_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjective_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FObjective()
	{
		if (!Z_Registration_Info_UScriptStruct_Objective.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Objective.InnerSingleton, Z_Construct_UScriptStruct_FObjective_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Objective.InnerSingleton;
	}
	DEFINE_FUNCTION(ULevelObjectives::execGetObjectives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FObjective>*)Z_Param__Result=P_THIS->GetObjectives();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelObjectives::execGetLevelName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetLevelName();
		P_NATIVE_END;
	}
	void ULevelObjectives::StaticRegisterNativesULevelObjectives()
	{
		UClass* Class = ULevelObjectives::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevelName", &ULevelObjectives::execGetLevelName },
			{ "GetObjectives", &ULevelObjectives::execGetObjectives },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics
	{
		struct LevelObjectives_eventGetLevelName_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelObjectives_eventGetLevelName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelObjectives.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelObjectives, nullptr, "GetLevelName", nullptr, nullptr, Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::LevelObjectives_eventGetLevelName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::LevelObjectives_eventGetLevelName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelObjectives_GetLevelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelObjectives_GetLevelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics
	{
		struct LevelObjectives_eventGetObjectives_Parms
		{
			TArray<FObjective> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObjective, METADATA_PARAMS(0, nullptr) }; // 1619856185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelObjectives_eventGetObjectives_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::NewProp_ReturnValue_MetaData) }; // 1619856185
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelObjectives.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelObjectives, nullptr, "GetObjectives", nullptr, nullptr, Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::LevelObjectives_eventGetObjectives_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::LevelObjectives_eventGetObjectives_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULevelObjectives_GetObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelObjectives_GetObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelObjectives);
	UClass* Z_Construct_UClass_ULevelObjectives_NoRegister()
	{
		return ULevelObjectives::StaticClass();
	}
	struct Z_Construct_UClass_ULevelObjectives_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_levelName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_levelName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_objectives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_objectives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_objectives;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelObjectives_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjectives_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelObjectives_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelObjectives_GetLevelName, "GetLevelName" }, // 898028414
		{ &Z_Construct_UFunction_ULevelObjectives_GetObjectives, "GetObjectives" }, // 3909686001
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjectives_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelObjectives_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelObjectives.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "LevelObjectives.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelObjectives_Statics::NewProp_levelName_MetaData[] = {
		{ "Category", "LevelObjectives" },
		{ "ModuleRelativePath", "LevelObjectives.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULevelObjectives_Statics::NewProp_levelName = { "levelName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelObjectives, levelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjectives_Statics::NewProp_levelName_MetaData), Z_Construct_UClass_ULevelObjectives_Statics::NewProp_levelName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelObjectives_Statics::NewProp_objectives_Inner = { "objectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FObjective, METADATA_PARAMS(0, nullptr) }; // 1619856185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelObjectives_Statics::NewProp_objectives_MetaData[] = {
		{ "Category", "LevelObjectives" },
		{ "ModuleRelativePath", "LevelObjectives.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelObjectives_Statics::NewProp_objectives = { "objectives", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelObjectives, objectives), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjectives_Statics::NewProp_objectives_MetaData), Z_Construct_UClass_ULevelObjectives_Statics::NewProp_objectives_MetaData) }; // 1619856185
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelObjectives_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelObjectives_Statics::NewProp_levelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelObjectives_Statics::NewProp_objectives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelObjectives_Statics::NewProp_objectives,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelObjectives_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelObjectives>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelObjectives_Statics::ClassParams = {
		&ULevelObjectives::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelObjectives_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjectives_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjectives_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelObjectives_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelObjectives_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULevelObjectives()
	{
		if (!Z_Registration_Info_UClass_ULevelObjectives.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelObjectives.OuterSingleton, Z_Construct_UClass_ULevelObjectives_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelObjectives.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ULevelObjectives>()
	{
		return ULevelObjectives::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelObjectives);
	ULevelObjectives::~ULevelObjectives() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelObjectives_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelObjectives_h_Statics::ScriptStructInfo[] = {
		{ FObjective::StaticStruct, Z_Construct_UScriptStruct_FObjective_Statics::NewStructOps, TEXT("Objective"), &Z_Registration_Info_UScriptStruct_Objective, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjective), 1619856185U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelObjectives_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelObjectives, ULevelObjectives::StaticClass, TEXT("ULevelObjectives"), &Z_Registration_Info_UClass_ULevelObjectives, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelObjectives), 449737380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelObjectives_h_1313013187(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelObjectives_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelObjectives_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelObjectives_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_LevelObjectives_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
