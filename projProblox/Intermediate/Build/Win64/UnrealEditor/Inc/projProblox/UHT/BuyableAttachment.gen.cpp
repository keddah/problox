// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/BuyableAttachment.h"
#include "projProblox/Pickupables/BuyableInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuyableAttachment() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABuyableAttachment();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ABuyableAttachment_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UBuyableInfo_NoRegister();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature();
	PROJPROBLOX_API UScriptStruct* Z_Construct_UScriptStruct_FBuyableInfoStruct();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnBoughtAttachment__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnBoughtAttachment__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBoughtAttachment_DelegateWrapper(const FMulticastScriptDelegate& OnBoughtAttachment)
{
	OnBoughtAttachment.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics
	{
		struct _Script_projProblox_eventOnShowDisplay_Parms
		{
			const ABuyableAttachment* checker;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_checker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_checker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::NewProp_checker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::NewProp_checker = { "checker", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_projProblox_eventOnShowDisplay_Parms, checker), Z_Construct_UClass_ABuyableAttachment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::NewProp_checker_MetaData), Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::NewProp_checker_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::NewProp_checker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnShowDisplay__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::_Script_projProblox_eventOnShowDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::_Script_projProblox_eventOnShowDisplay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnShowDisplay_DelegateWrapper(const FMulticastScriptDelegate& OnShowDisplay, const ABuyableAttachment* checker)
{
	struct _Script_projProblox_eventOnShowDisplay_Parms
	{
		const ABuyableAttachment* checker;
	};
	_Script_projProblox_eventOnShowDisplay_Parms Parms;
	Parms.checker=checker;
	OnShowDisplay.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics
	{
		struct _Script_projProblox_eventOnHideDisplay_Parms
		{
			const ABuyableAttachment* checker;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_checker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_checker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::NewProp_checker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::NewProp_checker = { "checker", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_projProblox_eventOnHideDisplay_Parms, checker), Z_Construct_UClass_ABuyableAttachment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::NewProp_checker_MetaData), Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::NewProp_checker_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::NewProp_checker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnHideDisplay__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::_Script_projProblox_eventOnHideDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::_Script_projProblox_eventOnHideDisplay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHideDisplay_DelegateWrapper(const FMulticastScriptDelegate& OnHideDisplay, const ABuyableAttachment* checker)
{
	struct _Script_projProblox_eventOnHideDisplay_Parms
	{
		const ABuyableAttachment* checker;
	};
	_Script_projProblox_eventOnHideDisplay_Parms Parms;
	Parms.checker=checker;
	OnHideDisplay.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ABuyableAttachment::execIsUnlocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUnlocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuyableAttachment::execGetInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBuyableInfoStruct*)Z_Param__Result=P_THIS->GetInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuyableAttachment::execUseInfoMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseInfoMesh();
		P_NATIVE_END;
	}
	void ABuyableAttachment::StaticRegisterNativesABuyableAttachment()
	{
		UClass* Class = ABuyableAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInfo", &ABuyableAttachment::execGetInfo },
			{ "IsUnlocked", &ABuyableAttachment::execIsUnlocked },
			{ "UseInfoMesh", &ABuyableAttachment::execUseInfoMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics
	{
		struct BuyableAttachment_eventGetInfo_Parms
		{
			FBuyableInfoStruct ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuyableAttachment_eventGetInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FBuyableInfoStruct, METADATA_PARAMS(0, nullptr) }; // 975805931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuyableAttachment, nullptr, "GetInfo", nullptr, nullptr, Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::BuyableAttachment_eventGetInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::BuyableAttachment_eventGetInfo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABuyableAttachment_GetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuyableAttachment_GetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics
	{
		struct BuyableAttachment_eventIsUnlocked_Parms
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
	void Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BuyableAttachment_eventIsUnlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BuyableAttachment_eventIsUnlocked_Parms), &Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuyableAttachment, nullptr, "IsUnlocked", nullptr, nullptr, Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::BuyableAttachment_eventIsUnlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::BuyableAttachment_eventIsUnlocked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABuyableAttachment_IsUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuyableAttachment_IsUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call this in the construction script so that changes are updated whenever they need to be." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuyableAttachment, nullptr, "UseInfoMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuyableAttachment);
	UClass* Z_Construct_UClass_ABuyableAttachment_NoRegister()
	{
		return ABuyableAttachment::StaticClass();
	}
	struct Z_Construct_UClass_ABuyableAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_infoWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_infoWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseDetector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mouseDetector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_info;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lockedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lockedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onShow_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onShow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onHide_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onHide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuyableAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuyableAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuyableAttachment_GetInfo, "GetInfo" }, // 3529197808
		{ &Z_Construct_UFunction_ABuyableAttachment_IsUnlocked, "IsUnlocked" }, // 1858993600
		{ &Z_Construct_UFunction_ABuyableAttachment_UseInfoMesh, "UseInfoMesh" }, // 427336234
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/BuyableAttachment.h" },
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "BuyableAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuyableAttachment, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_meshComp_MetaData), Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_meshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_infoWidget_MetaData[] = {
		{ "Category", "BuyableAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_infoWidget = { "infoWidget", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuyableAttachment, infoWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_infoWidget_MetaData), Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_infoWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_mouseDetector_MetaData[] = {
		{ "Category", "BuyableAttachment" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_mouseDetector = { "mouseDetector", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuyableAttachment, mouseDetector), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_mouseDetector_MetaData), Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_mouseDetector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_info_MetaData[] = {
		{ "Category", "BuyableAttachment" },
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuyableAttachment, info), Z_Construct_UClass_UBuyableInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_info_MetaData), Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_info_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_lockedMaterial_MetaData[] = {
		{ "Category", "BuyableAttachment" },
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_lockedMaterial = { "lockedMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuyableAttachment, lockedMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_lockedMaterial_MetaData), Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_lockedMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_onShow_MetaData[] = {
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_onShow = { "onShow", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuyableAttachment, onShow), Z_Construct_UDelegateFunction_projProblox_OnShowDisplay__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_onShow_MetaData), Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_onShow_MetaData) }; // 3944317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_onHide_MetaData[] = {
		{ "ModuleRelativePath", "Pickupables/BuyableAttachment.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_onHide = { "onHide", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuyableAttachment, onHide), Z_Construct_UDelegateFunction_projProblox_OnHideDisplay__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_onHide_MetaData), Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_onHide_MetaData) }; // 642030590
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuyableAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_meshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_infoWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_mouseDetector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_lockedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_onShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuyableAttachment_Statics::NewProp_onHide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuyableAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuyableAttachment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuyableAttachment_Statics::ClassParams = {
		&ABuyableAttachment::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuyableAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuyableAttachment_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuyableAttachment_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABuyableAttachment()
	{
		if (!Z_Registration_Info_UClass_ABuyableAttachment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuyableAttachment.OuterSingleton, Z_Construct_UClass_ABuyableAttachment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuyableAttachment.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<ABuyableAttachment>()
	{
		return ABuyableAttachment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuyableAttachment);
	ABuyableAttachment::~ABuyableAttachment() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuyableAttachment, ABuyableAttachment::StaticClass, TEXT("ABuyableAttachment"), &Z_Registration_Info_UClass_ABuyableAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuyableAttachment), 1589640883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_638944700(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableAttachment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
