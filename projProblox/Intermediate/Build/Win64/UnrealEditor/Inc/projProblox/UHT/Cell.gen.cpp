// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Cells/Cell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCell() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABouncyCell();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABouncyCell_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACell();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACell_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AHoverCell();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AHoverCell_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AStickyCell();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AStickyCell_NoRegister();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnCollected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_projProblox_OnCollected__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnCollected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cells/Cell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnCollected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnCollected__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnCollected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnCollected__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnCollected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnCollected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCollected_DelegateWrapper(const FMulticastScriptDelegate& OnCollected)
{
	OnCollected.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ACell::execDeactivateHoming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateHoming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACell::execSetHoming)
	{
		P_GET_UBOOL(Z_Param_home);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHoming(Z_Param_home,Z_Param_attraction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACell::execUnCollected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnCollected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACell::execToCollector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_depoPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToCollector(Z_Param_Out_depoPoint);
		P_NATIVE_END;
	}
	void ACell::StaticRegisterNativesACell()
	{
		UClass* Class = ACell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeactivateHoming", &ACell::execDeactivateHoming },
			{ "SetHoming", &ACell::execSetHoming },
			{ "ToCollector", &ACell::execToCollector },
			{ "UnCollected", &ACell::execUnCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACell_DeactivateHoming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACell_DeactivateHoming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Cells/Cell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACell_DeactivateHoming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACell, nullptr, "DeactivateHoming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_DeactivateHoming_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACell_DeactivateHoming_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACell_DeactivateHoming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACell_DeactivateHoming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACell_SetHoming_Statics
	{
		struct Cell_eventSetHoming_Parms
		{
			bool home;
			float attraction;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_home_MetaData[];
#endif
		static void NewProp_home_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_home;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_home_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_home_SetBit(void* Obj)
	{
		((Cell_eventSetHoming_Parms*)Obj)->home = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_home = { "home", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cell_eventSetHoming_Parms), &Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_home_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_home_MetaData), Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_home_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_attraction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_attraction = { "attraction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cell_eventSetHoming_Parms, attraction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_attraction_MetaData), Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_attraction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACell_SetHoming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_home,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACell_SetHoming_Statics::NewProp_attraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACell_SetHoming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collection" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACell_SetHoming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACell, nullptr, "SetHoming", nullptr, nullptr, Z_Construct_UFunction_ACell_SetHoming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_SetHoming_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACell_SetHoming_Statics::Cell_eventSetHoming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_SetHoming_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACell_SetHoming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_SetHoming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACell_SetHoming_Statics::Cell_eventSetHoming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACell_SetHoming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACell_SetHoming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACell_ToCollector_Statics
	{
		struct Cell_eventToCollector_Parms
		{
			FVector depoPoint;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_depoPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_depoPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACell_ToCollector_Statics::NewProp_depoPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACell_ToCollector_Statics::NewProp_depoPoint = { "depoPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cell_eventToCollector_Parms, depoPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_ToCollector_Statics::NewProp_depoPoint_MetaData), Z_Construct_UFunction_ACell_ToCollector_Statics::NewProp_depoPoint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACell_ToCollector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACell_ToCollector_Statics::NewProp_depoPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACell_ToCollector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collection" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACell_ToCollector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACell, nullptr, "ToCollector", nullptr, nullptr, Z_Construct_UFunction_ACell_ToCollector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_ToCollector_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACell_ToCollector_Statics::Cell_eventToCollector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_ToCollector_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACell_ToCollector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_ToCollector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACell_ToCollector_Statics::Cell_eventToCollector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACell_ToCollector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACell_ToCollector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACell_UnCollected_Statics
	{
		struct Cell_eventUnCollected_Parms
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
	void Z_Construct_UFunction_ACell_UnCollected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Cell_eventUnCollected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACell_UnCollected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cell_eventUnCollected_Parms), &Z_Construct_UFunction_ACell_UnCollected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACell_UnCollected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACell_UnCollected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACell_UnCollected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collection" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACell_UnCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACell, nullptr, "UnCollected", nullptr, nullptr, Z_Construct_UFunction_ACell_UnCollected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_UnCollected_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACell_UnCollected_Statics::Cell_eventUnCollected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_UnCollected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACell_UnCollected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACell_UnCollected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACell_UnCollected_Statics::Cell_eventUnCollected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACell_UnCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACell_UnCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACell);
	UClass* Z_Construct_UClass_ACell_NoRegister()
	{
		return ACell::StaticClass();
	}
	struct Z_Construct_UClass_ACell_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_body_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fx_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACell_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACell_DeactivateHoming, "DeactivateHoming" }, // 403852407
		{ &Z_Construct_UFunction_ACell_SetHoming, "SetHoming" }, // 3000311673
		{ &Z_Construct_UFunction_ACell_ToCollector, "ToCollector" }, // 3357477116
		{ &Z_Construct_UFunction_ACell_UnCollected, "UnCollected" }, // 4142306342
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cells/Cell.h" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACell_Statics::NewProp_body_MetaData[] = {
		{ "Category", "Cell" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACell_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACell, body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::NewProp_body_MetaData), Z_Construct_UClass_ACell_Statics::NewProp_body_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACell_Statics::NewProp_hitBox_MetaData[] = {
		{ "Category", "Cell" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACell_Statics::NewProp_hitBox = { "hitBox", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACell, hitBox), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::NewProp_hitBox_MetaData), Z_Construct_UClass_ACell_Statics::NewProp_hitBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACell_Statics::NewProp_fx_MetaData[] = {
		{ "Category", "Cell" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACell_Statics::NewProp_fx = { "fx", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACell, fx), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::NewProp_fx_MetaData), Z_Construct_UClass_ACell_Statics::NewProp_fx_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACell_Statics::NewProp_body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACell_Statics::NewProp_hitBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACell_Statics::NewProp_fx,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACell_Statics::ClassParams = {
		&ACell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::Class_MetaDataParams), Z_Construct_UClass_ACell_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACell()
	{
		if (!Z_Registration_Info_UClass_ACell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACell.OuterSingleton, Z_Construct_UClass_ACell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACell.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ACell>()
	{
		return ACell::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACell);
	ACell::~ACell() {}
	void ABouncyCell::StaticRegisterNativesABouncyCell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABouncyCell);
	UClass* Z_Construct_UClass_ABouncyCell_NoRegister()
	{
		return ABouncyCell::StaticClass();
	}
	struct Z_Construct_UClass_ABouncyCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bounciness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bounciness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABouncyCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACell,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABouncyCell_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABouncyCell_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// BOUNCE ///////////////\n" },
#endif
		{ "IncludePath", "Cells/Cell.h" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BOUNCE" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABouncyCell_Statics::NewProp_bounciness_MetaData[] = {
		{ "Category", "BouncyCell" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABouncyCell_Statics::NewProp_bounciness = { "bounciness", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABouncyCell, bounciness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABouncyCell_Statics::NewProp_bounciness_MetaData), Z_Construct_UClass_ABouncyCell_Statics::NewProp_bounciness_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABouncyCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncyCell_Statics::NewProp_bounciness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABouncyCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABouncyCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABouncyCell_Statics::ClassParams = {
		&ABouncyCell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABouncyCell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABouncyCell_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABouncyCell_Statics::Class_MetaDataParams), Z_Construct_UClass_ABouncyCell_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABouncyCell_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABouncyCell()
	{
		if (!Z_Registration_Info_UClass_ABouncyCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABouncyCell.OuterSingleton, Z_Construct_UClass_ABouncyCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABouncyCell.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ABouncyCell>()
	{
		return ABouncyCell::StaticClass();
	}
	ABouncyCell::ABouncyCell() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABouncyCell);
	ABouncyCell::~ABouncyCell() {}
	void AHoverCell::StaticRegisterNativesAHoverCell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoverCell);
	UClass* Z_Construct_UClass_AHoverCell_NoRegister()
	{
		return AHoverCell::StaticClass();
	}
	struct Z_Construct_UClass_AHoverCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoverCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACell,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverCell_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverCell_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// HOVER ///////////////\n" },
#endif
		{ "IncludePath", "Cells/Cell.h" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HOVER" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoverCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoverCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoverCell_Statics::ClassParams = {
		&AHoverCell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverCell_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoverCell_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHoverCell()
	{
		if (!Z_Registration_Info_UClass_AHoverCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoverCell.OuterSingleton, Z_Construct_UClass_AHoverCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHoverCell.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AHoverCell>()
	{
		return AHoverCell::StaticClass();
	}
	AHoverCell::AHoverCell() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoverCell);
	AHoverCell::~AHoverCell() {}
	void AStickyCell::StaticRegisterNativesAStickyCell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStickyCell);
	UClass* Z_Construct_UClass_AStickyCell_NoRegister()
	{
		return AStickyCell::StaticClass();
	}
	struct Z_Construct_UClass_AStickyCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stickThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stickThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStickyCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACell,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStickyCell_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickyCell_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// STICKY ///////////////\n" },
#endif
		{ "IncludePath", "Cells/Cell.h" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "STICKY" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStickyCell_Statics::NewProp_stickThreshold_MetaData[] = {
		{ "Category", "StickyCell" },
		{ "ModuleRelativePath", "Cells/Cell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of force required to make the Thing unstick." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStickyCell_Statics::NewProp_stickThreshold = { "stickThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStickyCell, stickThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStickyCell_Statics::NewProp_stickThreshold_MetaData), Z_Construct_UClass_AStickyCell_Statics::NewProp_stickThreshold_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStickyCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStickyCell_Statics::NewProp_stickThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStickyCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStickyCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStickyCell_Statics::ClassParams = {
		&AStickyCell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStickyCell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStickyCell_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStickyCell_Statics::Class_MetaDataParams), Z_Construct_UClass_AStickyCell_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStickyCell_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AStickyCell()
	{
		if (!Z_Registration_Info_UClass_AStickyCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStickyCell.OuterSingleton, Z_Construct_UClass_AStickyCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStickyCell.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AStickyCell>()
	{
		return AStickyCell::StaticClass();
	}
	AStickyCell::AStickyCell() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStickyCell);
	AStickyCell::~AStickyCell() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_Cell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_Cell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACell, ACell::StaticClass, TEXT("ACell"), &Z_Registration_Info_UClass_ACell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACell), 1180080439U) },
		{ Z_Construct_UClass_ABouncyCell, ABouncyCell::StaticClass, TEXT("ABouncyCell"), &Z_Registration_Info_UClass_ABouncyCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABouncyCell), 870566971U) },
		{ Z_Construct_UClass_AHoverCell, AHoverCell::StaticClass, TEXT("AHoverCell"), &Z_Registration_Info_UClass_AHoverCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoverCell), 306028912U) },
		{ Z_Construct_UClass_AStickyCell, AStickyCell::StaticClass, TEXT("AStickyCell"), &Z_Registration_Info_UClass_AStickyCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStickyCell), 2867671676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_Cell_h_1414460456(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_Cell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Cells_Cell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
