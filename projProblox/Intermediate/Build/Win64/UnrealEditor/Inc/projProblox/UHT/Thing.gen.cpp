// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Thing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThing() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABouncyThing();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABouncyThing_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AHoverThing();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AHoverThing_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AThing();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AThing_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(AThing::execIsSafe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSafe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThing::execDeactivateHoming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateHoming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThing::execSetHoming)
	{
		P_GET_UBOOL(Z_Param_home);
		P_GET_PROPERTY(FFloatProperty,Z_Param_attraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHoming(Z_Param_home,Z_Param_attraction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThing::execTeleport)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_pos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Teleport(Z_Param_Out_pos);
		P_NATIVE_END;
	}
	void AThing::StaticRegisterNativesAThing()
	{
		UClass* Class = AThing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeactivateHoming", &AThing::execDeactivateHoming },
			{ "IsSafe", &AThing::execIsSafe },
			{ "SetHoming", &AThing::execSetHoming },
			{ "Teleport", &AThing::execTeleport },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThing_DeactivateHoming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThing_DeactivateHoming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Thing.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThing_DeactivateHoming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThing, nullptr, "DeactivateHoming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_DeactivateHoming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThing_DeactivateHoming_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AThing_DeactivateHoming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThing_DeactivateHoming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThing_IsSafe_Statics
	{
		struct Thing_eventIsSafe_Parms
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
	void Z_Construct_UFunction_AThing_IsSafe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Thing_eventIsSafe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThing_IsSafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Thing_eventIsSafe_Parms), &Z_Construct_UFunction_AThing_IsSafe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThing_IsSafe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThing_IsSafe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThing_IsSafe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Thing.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThing_IsSafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThing, nullptr, "IsSafe", nullptr, nullptr, Z_Construct_UFunction_AThing_IsSafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_IsSafe_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThing_IsSafe_Statics::Thing_eventIsSafe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_IsSafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThing_IsSafe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_IsSafe_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThing_IsSafe_Statics::Thing_eventIsSafe_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThing_IsSafe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThing_IsSafe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThing_SetHoming_Statics
	{
		struct Thing_eventSetHoming_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_home_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_home_SetBit(void* Obj)
	{
		((Thing_eventSetHoming_Parms*)Obj)->home = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_home = { "home", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Thing_eventSetHoming_Parms), &Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_home_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_home_MetaData), Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_home_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_attraction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_attraction = { "attraction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Thing_eventSetHoming_Parms, attraction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_attraction_MetaData), Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_attraction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThing_SetHoming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_home,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThing_SetHoming_Statics::NewProp_attraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThing_SetHoming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collection" },
		{ "ModuleRelativePath", "Thing.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThing_SetHoming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThing, nullptr, "SetHoming", nullptr, nullptr, Z_Construct_UFunction_AThing_SetHoming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_SetHoming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThing_SetHoming_Statics::Thing_eventSetHoming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_SetHoming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThing_SetHoming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_SetHoming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThing_SetHoming_Statics::Thing_eventSetHoming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThing_SetHoming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThing_SetHoming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThing_Teleport_Statics
	{
		struct Thing_eventTeleport_Parms
		{
			FVector pos;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThing_Teleport_Statics::NewProp_pos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AThing_Teleport_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Thing_eventTeleport_Parms, pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_Teleport_Statics::NewProp_pos_MetaData), Z_Construct_UFunction_AThing_Teleport_Statics::NewProp_pos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThing_Teleport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThing_Teleport_Statics::NewProp_pos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThing_Teleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets default values for this actor's properties\n" },
#endif
		{ "ModuleRelativePath", "Thing.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets default values for this actor's properties" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThing_Teleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThing, nullptr, "Teleport", nullptr, nullptr, Z_Construct_UFunction_AThing_Teleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_Teleport_Statics::PropPointers), sizeof(Z_Construct_UFunction_AThing_Teleport_Statics::Thing_eventTeleport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_Teleport_Statics::Function_MetaDataParams), Z_Construct_UFunction_AThing_Teleport_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AThing_Teleport_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AThing_Teleport_Statics::Thing_eventTeleport_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AThing_Teleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThing_Teleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThing);
	UClass* Z_Construct_UClass_AThing_NoRegister()
	{
		return AThing::StaticClass();
	}
	struct Z_Construct_UClass_AThing_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attractionForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attractionForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThing_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AThing_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThing_DeactivateHoming, "DeactivateHoming" }, // 2619689621
		{ &Z_Construct_UFunction_AThing_IsSafe, "IsSafe" }, // 2608591578
		{ &Z_Construct_UFunction_AThing_SetHoming, "SetHoming" }, // 3442748117
		{ &Z_Construct_UFunction_AThing_Teleport, "Teleport" }, // 1493629200
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThing_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Thing.h" },
		{ "ModuleRelativePath", "Thing.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThing_Statics::NewProp_body_MetaData[] = {
		{ "Category", "Thing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Thing.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThing_Statics::NewProp_body = { "body", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThing, body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThing_Statics::NewProp_body_MetaData), Z_Construct_UClass_AThing_Statics::NewProp_body_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThing_Statics::NewProp_attractionForce_MetaData[] = {
		{ "Category", "Collection" },
		{ "ModuleRelativePath", "Thing.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThing_Statics::NewProp_attractionForce = { "attractionForce", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThing, attractionForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThing_Statics::NewProp_attractionForce_MetaData), Z_Construct_UClass_AThing_Statics::NewProp_attractionForce_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThing_Statics::NewProp_body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThing_Statics::NewProp_attractionForce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThing_Statics::ClassParams = {
		&AThing::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThing_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThing_Statics::Class_MetaDataParams), Z_Construct_UClass_AThing_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThing_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AThing()
	{
		if (!Z_Registration_Info_UClass_AThing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThing.OuterSingleton, Z_Construct_UClass_AThing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThing.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AThing>()
	{
		return AThing::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThing);
	AThing::~AThing() {}
	void ABouncyThing::StaticRegisterNativesABouncyThing()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABouncyThing);
	UClass* Z_Construct_UClass_ABouncyThing_NoRegister()
	{
		return ABouncyThing::StaticClass();
	}
	struct Z_Construct_UClass_ABouncyThing_Statics
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
	UObject* (*const Z_Construct_UClass_ABouncyThing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AThing,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABouncyThing_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABouncyThing_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The bouncy variant of the Thing\n" },
#endif
		{ "IncludePath", "Thing.h" },
		{ "ModuleRelativePath", "Thing.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The bouncy variant of the Thing" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABouncyThing_Statics::NewProp_bounciness_MetaData[] = {
		{ "Category", "BouncyThing" },
		{ "ModuleRelativePath", "Thing.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABouncyThing_Statics::NewProp_bounciness = { "bounciness", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABouncyThing, bounciness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABouncyThing_Statics::NewProp_bounciness_MetaData), Z_Construct_UClass_ABouncyThing_Statics::NewProp_bounciness_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABouncyThing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABouncyThing_Statics::NewProp_bounciness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABouncyThing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABouncyThing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABouncyThing_Statics::ClassParams = {
		&ABouncyThing::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABouncyThing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABouncyThing_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABouncyThing_Statics::Class_MetaDataParams), Z_Construct_UClass_ABouncyThing_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABouncyThing_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABouncyThing()
	{
		if (!Z_Registration_Info_UClass_ABouncyThing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABouncyThing.OuterSingleton, Z_Construct_UClass_ABouncyThing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABouncyThing.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ABouncyThing>()
	{
		return ABouncyThing::StaticClass();
	}
	ABouncyThing::ABouncyThing() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABouncyThing);
	ABouncyThing::~ABouncyThing() {}
	void AHoverThing::StaticRegisterNativesAHoverThing()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoverThing);
	UClass* Z_Construct_UClass_AHoverThing_NoRegister()
	{
		return AHoverThing::StaticClass();
	}
	struct Z_Construct_UClass_AHoverThing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoverThing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AThing,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverThing_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverThing_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Thing.h" },
		{ "ModuleRelativePath", "Thing.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoverThing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoverThing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoverThing_Statics::ClassParams = {
		&AHoverThing::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverThing_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoverThing_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHoverThing()
	{
		if (!Z_Registration_Info_UClass_AHoverThing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoverThing.OuterSingleton, Z_Construct_UClass_AHoverThing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHoverThing.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AHoverThing>()
	{
		return AHoverThing::StaticClass();
	}
	AHoverThing::AHoverThing() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoverThing);
	AHoverThing::~AHoverThing() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Thing_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Thing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThing, AThing::StaticClass, TEXT("AThing"), &Z_Registration_Info_UClass_AThing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThing), 2087417035U) },
		{ Z_Construct_UClass_ABouncyThing, ABouncyThing::StaticClass, TEXT("ABouncyThing"), &Z_Registration_Info_UClass_ABouncyThing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABouncyThing), 4236447517U) },
		{ Z_Construct_UClass_AHoverThing, AHoverThing::StaticClass, TEXT("AHoverThing"), &Z_Registration_Info_UClass_AHoverThing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoverThing), 2425925738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Thing_h_2917775962(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Thing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Thing_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
