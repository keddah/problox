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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACollector_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCubeSocketInfo_NoRegister();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be broadcasted when the cube goes too far away from the container.\n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be broadcasted when the cube goes too far away from the container." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnOutOfRange__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnOutOfRange_DelegateWrapper(const FMulticastScriptDelegate& OnOutOfRange)
{
	OnOutOfRange.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics
	{
		struct _Script_projProblox_eventOnAddedThing_Parms
		{
			AActor* thing;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_thing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::NewProp_thing = { "thing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_projProblox_eventOnAddedThing_Parms, thing), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::NewProp_thing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be broadcasted when a \"Thing\" collides with any of the things that are attached to the cube.\n// This has been declared so that a Blueprint function can be called.\n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be broadcasted when a \"Thing\" collides with any of the things that are attached to the cube.\nThis has been declared so that a Blueprint function can be called." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnAddedThing__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::_Script_projProblox_eventOnAddedThing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::_Script_projProblox_eventOnAddedThing_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAddedThing_DelegateWrapper(const FMulticastScriptDelegate& OnAddedThing, AActor* thing)
{
	struct _Script_projProblox_eventOnAddedThing_Parms
	{
		AActor* thing;
	};
	_Script_projProblox_eventOnAddedThing_Parms Parms;
	Parms.thing=thing;
	OnAddedThing.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ACubeCore::execGetAttachedObjActors)
	{
		P_GET_UBOOL(Z_Param_deepGet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAttachedObjActors(Z_Param_deepGet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execDetachAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetachAll();
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
			{ "DetachAll", &ACubeCore::execDetachAll },
			{ "GetAttachedObjActors", &ACubeCore::execGetAttachedObjActors },
			{ "ObjectInSocket", &ACubeCore::execObjectInSocket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACubeCore_DetachAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_DetachAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_DetachAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "DetachAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_DetachAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_DetachAll_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACubeCore_DetachAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_DetachAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics
	{
		struct CubeCore_eventGetAttachedObjActors_Parms
		{
			bool deepGet;
			TArray<AActor*> ReturnValue;
		};
		static void NewProp_deepGet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_deepGet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_deepGet_SetBit(void* Obj)
	{
		((CubeCore_eventGetAttachedObjActors_Parms*)Obj)->deepGet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_deepGet = { "deepGet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CubeCore_eventGetAttachedObjActors_Parms), &Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_deepGet_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventGetAttachedObjActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_deepGet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Depending on the given bool.. return the array of AActors or APickupableMasters \n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Depending on the given bool.. return the array of AActors or APickupableMasters" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "GetAttachedObjActors", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::CubeCore_eventGetAttachedObjActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::CubeCore_eventGetAttachedObjActors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_GetAttachedObjActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thingCollector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_thingCollector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thingHomer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_thingHomer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fairBounds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fairBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onAddedThing_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onAddedThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collector;
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
		{ &Z_Construct_UFunction_ACubeCore_DetachAll, "DetachAll" }, // 2906583123
		{ &Z_Construct_UFunction_ACubeCore_GetAttachedObjActors, "GetAttachedObjActors" }, // 2625471992
		{ &Z_Construct_UFunction_ACubeCore_ObjectInSocket, "ObjectInSocket" }, // 3382861889
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::Class_MetaDataParams[] = {
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector_MetaData[] = {
		{ "Category", "Collection" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector = { "thingCollector", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, thingCollector), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer_MetaData[] = {
		{ "Category", "Collection" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer = { "thingHomer", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, thingHomer), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_fairBounds_MetaData[] = {
		{ "Category", "Collection" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_fairBounds = { "fairBounds", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, fairBounds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_fairBounds_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_fairBounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing_MetaData[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing = { "onAddedThing", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onAddedThing), Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing_MetaData) }; // 1631994422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_collector_MetaData[] = {
		{ "Category", "CubeCore" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, collector), Z_Construct_UClass_ACollector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_collector_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_collector_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubeCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_fairBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_collector,
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
		{ Z_Construct_UClass_ACubeCore, ACubeCore::StaticClass, TEXT("ACubeCore"), &Z_Registration_Info_UClass_ACubeCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACubeCore), 3707942965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeCore_h_3081917923(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeCore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
