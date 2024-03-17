// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/CubeCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeCore() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCubeSocketInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(ACubeCore::execGetAttachedObjects)
	{
		P_GET_UBOOL(Z_Param_returnAActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAttachedObjects(Z_Param_returnAActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execObjectInSocket)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_socketToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ObjectInSocket(Z_Param_socketToCheck);
		P_NATIVE_END;
	}
	void ACubeCore::StaticRegisterNativesACubeCore()
	{
		UClass* Class = ACubeCore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachedObjects", &ACubeCore::execGetAttachedObjects },
			{ "ObjectInSocket", &ACubeCore::execObjectInSocket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics
	{
		struct CubeCore_eventGetAttachedObjects_Parms
		{
			bool returnAActor;
			TArray<AActor*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_returnAActor_MetaData[];
#endif
		static void NewProp_returnAActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_returnAActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::NewProp_returnAActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::NewProp_returnAActor_SetBit(void* Obj)
	{
		((CubeCore_eventGetAttachedObjects_Parms*)Obj)->returnAActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::NewProp_returnAActor = { "returnAActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CubeCore_eventGetAttachedObjects_Parms), &Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::NewProp_returnAActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::NewProp_returnAActor_MetaData), Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::NewProp_returnAActor_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventGetAttachedObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::NewProp_returnAActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Depending on the given bool.. return the array of AActors or APickupableMasters \n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Depending on the given bool.. return the array of AActors or APickupableMasters" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "GetAttachedObjects", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::CubeCore_eventGetAttachedObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::CubeCore_eventGetAttachedObjects_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_GetAttachedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_GetAttachedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics
	{
		struct CubeCore_eventObjectInSocket_Parms
		{
			FName socketToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_socketToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::NewProp_socketToCheck = { "socketToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventObjectInSocket_Parms, socketToCheck), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CubeCore_eventObjectInSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CubeCore_eventObjectInSocket_Parms), &Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::NewProp_socketToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "ObjectInSocket", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::CubeCore_eventObjectInSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::CubeCore_eventObjectInSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_ObjectInSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_ObjectInSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACubeCore);
	UClass* Z_Construct_UClass_ACubeCore_NoRegister()
	{
		return ACubeCore::StaticClass();
	}
	struct Z_Construct_UClass_ACubeCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_socketInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_socketInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pivot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thingCollector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_thingCollector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thingHomer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_thingHomer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_safeSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_safeSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupableMaster,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACubeCore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACubeCore_GetAttachedObjects, "GetAttachedObjects" }, // 1762743637
		{ &Z_Construct_UFunction_ACubeCore_ObjectInSocket, "ObjectInSocket" }, // 3382861889
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CubeCore.h" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo_MetaData[] = {
		{ "Category", "CubeCore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A data asset that contains an array of things that are attached to each face of the cube.\n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A data asset that contains an array of things that are attached to each face of the cube." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo = { "socketInfo", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, socketInfo), Z_Construct_UClass_UCubeSocketInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_pivot_MetaData[] = {
		{ "Category", "CubeCore" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_pivot = { "pivot", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, pivot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_pivot_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_pivot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector_MetaData[] = {
		{ "Category", "CubeCore" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector = { "thingCollector", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, thingCollector), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer_MetaData[] = {
		{ "Category", "CubeCore" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer = { "thingHomer", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, thingHomer), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_safeSpace_MetaData[] = {
		{ "Category", "CubeCore" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_safeSpace = { "safeSpace", nullptr, (EPropertyFlags)0x0020080000000815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, safeSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_safeSpace_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_safeSpace_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubeCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_safeSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeCore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACubeCore_Statics::ClassParams = {
		&ACubeCore::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACubeCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::Class_MetaDataParams), Z_Construct_UClass_ACubeCore_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACubeCore()
	{
		if (!Z_Registration_Info_UClass_ACubeCore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACubeCore.OuterSingleton, Z_Construct_UClass_ACubeCore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACubeCore.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ACubeCore>()
	{
		return ACubeCore::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeCore);
	ACubeCore::~ACubeCore() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeCore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACubeCore, ACubeCore::StaticClass, TEXT("ACubeCore"), &Z_Registration_Info_UClass_ACubeCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACubeCore), 605992838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeCore_h_1160375041(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeCore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
