// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/UndoRedo/ActionHistory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionHistory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UActionHistory();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UActionHistory_NoRegister();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_EOperations();
	PROJPROBLOX_API UScriptStruct* Z_Construct_UScriptStruct_FTask();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOperations;
	static UEnum* EOperations_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOperations.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOperations.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_projProblox_EOperations, (UObject*)Z_Construct_UPackage__Script_projProblox(), TEXT("EOperations"));
		}
		return Z_Registration_Info_UEnum_EOperations.OuterSingleton;
	}
	template<> PROJPROBLOX_API UEnum* StaticEnum<EOperations>()
	{
		return EOperations_StaticEnum();
	}
	struct Z_Construct_UEnum_projProblox_EOperations_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_projProblox_EOperations_Statics::Enumerators[] = {
		{ "EOperations::Attach", (int64)EOperations::Attach },
		{ "EOperations::Detach", (int64)EOperations::Detach },
		{ "EOperations::Move", (int64)EOperations::Move },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_projProblox_EOperations_Statics::Enum_MetaDataParams[] = {
		{ "Attach.Name", "EOperations::Attach" },
		{ "BlueprintType", "true" },
		{ "Detach.Name", "EOperations::Detach" },
		{ "ModuleRelativePath", "UndoRedo/ActionHistory.h" },
		{ "Move.Name", "EOperations::Move" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_projProblox_EOperations_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_projProblox,
		nullptr,
		"EOperations",
		"EOperations",
		Z_Construct_UEnum_projProblox_EOperations_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_EOperations_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_EOperations_Statics::Enum_MetaDataParams), Z_Construct_UEnum_projProblox_EOperations_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_projProblox_EOperations()
	{
		if (!Z_Registration_Info_UEnum_EOperations.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOperations.InnerSingleton, Z_Construct_UEnum_projProblox_EOperations_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOperations.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Task;
class UScriptStruct* FTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Task.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Task.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTask, (UObject*)Z_Construct_UPackage__Script_projProblox(), TEXT("Task"));
	}
	return Z_Registration_Info_UScriptStruct_Task.OuterSingleton;
}
template<> PROJPROBLOX_API UScriptStruct* StaticStruct<FTask>()
{
	return FTask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_taskName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_taskName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_modifiedObjs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_modifiedObjs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_modifiedObjs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_startTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_endTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_endTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_operation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UndoRedo/ActionHistory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTask_Statics::NewProp_taskName_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "UndoRedo/ActionHistory.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_taskName = { "taskName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask, taskName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::NewProp_taskName_MetaData), Z_Construct_UScriptStruct_FTask_Statics::NewProp_taskName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_modifiedObjs_Inner = { "modifiedObjs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTask_Statics::NewProp_modifiedObjs_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "UndoRedo/ActionHistory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Made to be an array just for detaching from cores (when detaching all)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_modifiedObjs = { "modifiedObjs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask, modifiedObjs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::NewProp_modifiedObjs_MetaData), Z_Construct_UScriptStruct_FTask_Statics::NewProp_modifiedObjs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTask_Statics::NewProp_startTransform_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "UndoRedo/ActionHistory.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_startTransform = { "startTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask, startTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::NewProp_startTransform_MetaData), Z_Construct_UScriptStruct_FTask_Statics::NewProp_startTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTask_Statics::NewProp_endTransform_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "UndoRedo/ActionHistory.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_endTransform = { "endTransform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask, endTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::NewProp_endTransform_MetaData), Z_Construct_UScriptStruct_FTask_Statics::NewProp_endTransform_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTask_Statics::NewProp_operation_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "UndoRedo/ActionHistory.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTask_Statics::NewProp_operation = { "operation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTask, operation), Z_Construct_UEnum_projProblox_EOperations, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::NewProp_operation_MetaData), Z_Construct_UScriptStruct_FTask_Statics::NewProp_operation_MetaData) }; // 3289855557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_taskName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_modifiedObjs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_modifiedObjs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_startTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_endTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTask_Statics::NewProp_operation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
		nullptr,
		&NewStructOps,
		"Task",
		Z_Construct_UScriptStruct_FTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::PropPointers),
		sizeof(FTask),
		alignof(FTask),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTask_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTask_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTask()
	{
		if (!Z_Registration_Info_UScriptStruct_Task.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Task.InnerSingleton, Z_Construct_UScriptStruct_FTask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Task.InnerSingleton;
	}
	void UActionHistory::StaticRegisterNativesUActionHistory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionHistory);
	UClass* Z_Construct_UClass_UActionHistory_NoRegister()
	{
		return UActionHistory::StaticClass();
	}
	struct Z_Construct_UClass_UActionHistory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tasks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionHistory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionHistory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionHistory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UndoRedo/ActionHistory.h" },
		{ "ModuleRelativePath", "UndoRedo/ActionHistory.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActionHistory_Statics::NewProp_tasks_Inner = { "tasks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTask, METADATA_PARAMS(0, nullptr) }; // 1631608919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionHistory_Statics::NewProp_tasks_MetaData[] = {
		{ "Category", "ActionHistory" },
		{ "ModuleRelativePath", "UndoRedo/ActionHistory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of things that the player has done.\n The max number of tasks is 25 - includes moving, attaching and detaching." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActionHistory_Statics::NewProp_tasks = { "tasks", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionHistory, tasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionHistory_Statics::NewProp_tasks_MetaData), Z_Construct_UClass_UActionHistory_Statics::NewProp_tasks_MetaData) }; // 1631608919
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionHistory_Statics::NewProp_tasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionHistory_Statics::NewProp_tasks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionHistory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionHistory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionHistory_Statics::ClassParams = {
		&UActionHistory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActionHistory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionHistory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionHistory_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionHistory_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionHistory_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UActionHistory()
	{
		if (!Z_Registration_Info_UClass_UActionHistory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionHistory.OuterSingleton, Z_Construct_UClass_UActionHistory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActionHistory.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<UActionHistory>()
	{
		return UActionHistory::StaticClass();
	}
	UActionHistory::UActionHistory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionHistory);
	UActionHistory::~UActionHistory() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_Statics::EnumInfo[] = {
		{ EOperations_StaticEnum, TEXT("EOperations"), &Z_Registration_Info_UEnum_EOperations, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3289855557U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_Statics::ScriptStructInfo[] = {
		{ FTask::StaticStruct, Z_Construct_UScriptStruct_FTask_Statics::NewStructOps, TEXT("Task"), &Z_Registration_Info_UScriptStruct_Task, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTask), 1631608919U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActionHistory, UActionHistory::StaticClass, TEXT("UActionHistory"), &Z_Registration_Info_UClass_UActionHistory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionHistory), 2126072901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_3250128366(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_UndoRedo_ActionHistory_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
