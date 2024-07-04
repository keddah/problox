// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Cores/Connectors/CubeConnector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeConnector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeConnector();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeConnector_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(ACubeConnector::execCycleRaySocket)
	{
		P_GET_UBOOL(Z_Param_next);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CycleRaySocket(Z_Param_next);
		P_NATIVE_END;
	}
	void ACubeConnector::StaticRegisterNativesACubeConnector()
	{
		UClass* Class = ACubeConnector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CycleRaySocket", &ACubeConnector::execCycleRaySocket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics
	{
		struct CubeConnector_eventCycleRaySocket_Parms
		{
			bool next;
		};
		static void NewProp_next_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_next;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::NewProp_next_SetBit(void* Obj)
	{
		((CubeConnector_eventCycleRaySocket_Parms*)Obj)->next = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::NewProp_next = { "next", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CubeConnector_eventCycleRaySocket_Parms), &Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::NewProp_next_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::NewProp_next,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CubeConnector.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeConnector, nullptr, "CycleRaySocket", nullptr, nullptr, Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::CubeConnector_eventCycleRaySocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::CubeConnector_eventCycleRaySocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeConnector_CycleRaySocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeConnector_CycleRaySocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACubeConnector);
	UClass* Z_Construct_UClass_ACubeConnector_NoRegister()
	{
		return ACubeConnector::StaticClass();
	}
	struct Z_Construct_UClass_ACubeConnector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftArrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leftArrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightArrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rightArrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_upArrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_upArrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_backArrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_backArrow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_downArrow_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_downArrow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeConnector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACubeCore,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACubeConnector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACubeConnector_CycleRaySocket, "CycleRaySocket" }, // 1297001547
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeConnector_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * //\n */" },
#endif
		{ "IncludePath", "Pickupables/Cores/Connectors/CubeConnector.h" },
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CubeConnector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeConnector_Statics::NewProp_leftArrow_MetaData[] = {
		{ "Category", "CubeConnector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CubeConnector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeConnector_Statics::NewProp_leftArrow = { "leftArrow", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeConnector, leftArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::NewProp_leftArrow_MetaData), Z_Construct_UClass_ACubeConnector_Statics::NewProp_leftArrow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeConnector_Statics::NewProp_rightArrow_MetaData[] = {
		{ "Category", "CubeConnector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CubeConnector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeConnector_Statics::NewProp_rightArrow = { "rightArrow", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeConnector, rightArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::NewProp_rightArrow_MetaData), Z_Construct_UClass_ACubeConnector_Statics::NewProp_rightArrow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeConnector_Statics::NewProp_upArrow_MetaData[] = {
		{ "Category", "CubeConnector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CubeConnector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeConnector_Statics::NewProp_upArrow = { "upArrow", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeConnector, upArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::NewProp_upArrow_MetaData), Z_Construct_UClass_ACubeConnector_Statics::NewProp_upArrow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeConnector_Statics::NewProp_backArrow_MetaData[] = {
		{ "Category", "CubeConnector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CubeConnector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeConnector_Statics::NewProp_backArrow = { "backArrow", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeConnector, backArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::NewProp_backArrow_MetaData), Z_Construct_UClass_ACubeConnector_Statics::NewProp_backArrow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeConnector_Statics::NewProp_downArrow_MetaData[] = {
		{ "Category", "CubeConnector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/Connectors/CubeConnector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeConnector_Statics::NewProp_downArrow = { "downArrow", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeConnector, downArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::NewProp_downArrow_MetaData), Z_Construct_UClass_ACubeConnector_Statics::NewProp_downArrow_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubeConnector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeConnector_Statics::NewProp_leftArrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeConnector_Statics::NewProp_rightArrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeConnector_Statics::NewProp_upArrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeConnector_Statics::NewProp_backArrow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeConnector_Statics::NewProp_downArrow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeConnector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeConnector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACubeConnector_Statics::ClassParams = {
		&ACubeConnector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACubeConnector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::Class_MetaDataParams), Z_Construct_UClass_ACubeConnector_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeConnector_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACubeConnector()
	{
		if (!Z_Registration_Info_UClass_ACubeConnector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACubeConnector.OuterSingleton, Z_Construct_UClass_ACubeConnector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACubeConnector.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ACubeConnector>()
	{
		return ACubeConnector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeConnector);
	ACubeConnector::~ACubeConnector() {}
	struct Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Cores_Connectors_CubeConnector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Cores_Connectors_CubeConnector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACubeConnector, ACubeConnector::StaticClass, TEXT("ACubeConnector"), &Z_Registration_Info_UClass_ACubeConnector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACubeConnector), 4183375228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Cores_Connectors_CubeConnector_h_244776379(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Cores_Connectors_CubeConnector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projProblox_Source_projProblox_Pickupables_Cores_Connectors_CubeConnector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
