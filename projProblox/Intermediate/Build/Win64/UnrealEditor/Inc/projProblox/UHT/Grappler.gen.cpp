// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Grappler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappler() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AGrappler();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AGrappler_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(AGrappler::execGetSpawnLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSpawnLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrappler::execPull)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pull(Z_Param_Out_direction,Z_Param_speed);
		P_NATIVE_END;
	}
	void AGrappler::StaticRegisterNativesAGrappler()
	{
		UClass* Class = AGrappler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnLocation", &AGrappler::execGetSpawnLocation },
			{ "Pull", &AGrappler::execPull },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics
	{
		struct Grappler_eventGetSpawnLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grappler_eventGetSpawnLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Grappler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrappler, nullptr, "GetSpawnLocation", nullptr, nullptr, Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::Grappler_eventGetSpawnLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::Grappler_eventGetSpawnLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGrappler_GetSpawnLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappler_GetSpawnLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrappler_Pull_Statics
	{
		struct Grappler_eventPull_Parms
		{
			FVector direction;
			float speed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrappler_Pull_Statics::NewProp_direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGrappler_Pull_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grappler_eventPull_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappler_Pull_Statics::NewProp_direction_MetaData), Z_Construct_UFunction_AGrappler_Pull_Statics::NewProp_direction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrappler_Pull_Statics::NewProp_speed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGrappler_Pull_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grappler_eventPull_Parms, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappler_Pull_Statics::NewProp_speed_MetaData), Z_Construct_UFunction_AGrappler_Pull_Statics::NewProp_speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGrappler_Pull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappler_Pull_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGrappler_Pull_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrappler_Pull_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Grappler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrappler_Pull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrappler, nullptr, "Pull", nullptr, nullptr, Z_Construct_UFunction_AGrappler_Pull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappler_Pull_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGrappler_Pull_Statics::Grappler_eventPull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappler_Pull_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrappler_Pull_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrappler_Pull_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGrappler_Pull_Statics::Grappler_eventPull_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGrappler_Pull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrappler_Pull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrappler);
	UClass* Z_Construct_UClass_AGrappler_NoRegister()
	{
		return AGrappler::StaticClass();
	}
	struct Z_Construct_UClass_AGrappler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grappleSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grappleSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grappleLine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grappleLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grappleHeadClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_grappleHeadClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrappler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGrappler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrappler_GetSpawnLocation, "GetSpawnLocation" }, // 247225446
		{ &Z_Construct_UFunction_AGrappler_Pull, "Pull" }, // 1671866370
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappler_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Grappler.h" },
		{ "ModuleRelativePath", "Grappler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappler_Statics::NewProp_grappleSpawn_MetaData[] = {
		{ "Category", "Grappler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grappler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappler_Statics::NewProp_grappleSpawn = { "grappleSpawn", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappler, grappleSpawn), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::NewProp_grappleSpawn_MetaData), Z_Construct_UClass_AGrappler_Statics::NewProp_grappleSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappler_Statics::NewProp_grappleLine_MetaData[] = {
		{ "Category", "Grappler" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grappler.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrappler_Statics::NewProp_grappleLine = { "grappleLine", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappler, grappleLine), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::NewProp_grappleLine_MetaData), Z_Construct_UClass_AGrappler_Statics::NewProp_grappleLine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappler_Statics::NewProp_grappleHeadClass_MetaData[] = {
		{ "Category", "Grappler" },
		{ "ModuleRelativePath", "Grappler.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGrappler_Statics::NewProp_grappleHeadClass = { "grappleHeadClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrappler, grappleHeadClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::NewProp_grappleHeadClass_MetaData), Z_Construct_UClass_AGrappler_Statics::NewProp_grappleHeadClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrappler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappler_Statics::NewProp_grappleSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappler_Statics::NewProp_grappleLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrappler_Statics::NewProp_grappleHeadClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrappler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrappler_Statics::ClassParams = {
		&AGrappler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGrappler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrappler_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrappler_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGrappler()
	{
		if (!Z_Registration_Info_UClass_AGrappler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrappler.OuterSingleton, Z_Construct_UClass_AGrappler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrappler.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AGrappler>()
	{
		return AGrappler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappler);
	AGrappler::~AGrappler() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Grappler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Grappler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrappler, AGrappler::StaticClass, TEXT("AGrappler"), &Z_Registration_Info_UClass_AGrappler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrappler), 3453028236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Grappler_h_1015742798(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Grappler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_Grappler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
