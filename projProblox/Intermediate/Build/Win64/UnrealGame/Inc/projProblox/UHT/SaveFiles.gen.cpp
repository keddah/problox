// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/SaveFiles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveFiles() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UBoughtAttachments();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UBoughtAttachments_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UMoneySave();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UMoneySave_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_USettingsSave();
	PROJPROBLOX_API UClass* Z_Construct_UClass_USettingsSave_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_USpawnSaves();
	PROJPROBLOX_API UClass* Z_Construct_UClass_USpawnSaves_NoRegister();
	PROJPROBLOX_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSettings();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	void USpawnSaves::StaticRegisterNativesUSpawnSaves()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnSaves);
	UClass* Z_Construct_UClass_USpawnSaves_NoRegister()
	{
		return USpawnSaves::StaticClass();
	}
	struct Z_Construct_UClass_USpawnSaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnSaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnSaves_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnSaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveFiles.h" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnSaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnSaves>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnSaves_Statics::ClassParams = {
		&USpawnSaves::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpawnSaves_Statics::Class_MetaDataParams), Z_Construct_UClass_USpawnSaves_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpawnSaves()
	{
		if (!Z_Registration_Info_UClass_USpawnSaves.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnSaves.OuterSingleton, Z_Construct_UClass_USpawnSaves_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnSaves.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<USpawnSaves>()
	{
		return USpawnSaves::StaticClass();
	}
	USpawnSaves::USpawnSaves(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnSaves);
	USpawnSaves::~USpawnSaves() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerSettings;
class UScriptStruct* FPlayerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerSettings, (UObject*)Z_Construct_UPackage__Script_projProblox(), TEXT("PlayerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerSettings.OuterSingleton;
}
template<> PROJPROBLOX_API UScriptStruct* StaticStruct<FPlayerSettings>()
{
	return FPlayerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerSettings>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
		nullptr,
		&NewStructOps,
		"PlayerSettings",
		nullptr,
		0,
		sizeof(FPlayerSettings),
		alignof(FPlayerSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerSettings_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerSettings.InnerSingleton, Z_Construct_UScriptStruct_FPlayerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USettingsSave::execGetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlayerSettings*)Z_Param__Result=P_THIS->GetSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsSave::execSetSfxMuted)
	{
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSfxMuted(Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsSave::execSetSfxVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSfxVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsSave::execSetMusicMuted)
	{
		P_GET_UBOOL(Z_Param_mute);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMusicMuted(Z_Param_mute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsSave::execSetMusicVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMusicVolume(Z_Param_volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsSave::execSetSensitivityY)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSensitivityY(Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsSave::execSetSensitivityX)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSensitivityX(Z_Param_x);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsSave::execSetAttachOnRelease)
	{
		P_GET_UBOOL(Z_Param_on);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachOnRelease(Z_Param_on);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsSave::execSetToggleSelection)
	{
		P_GET_UBOOL(Z_Param_toggle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToggleSelection(Z_Param_toggle);
		P_NATIVE_END;
	}
	void USettingsSave::StaticRegisterNativesUSettingsSave()
	{
		UClass* Class = USettingsSave::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSettings", &USettingsSave::execGetSettings },
			{ "SetAttachOnRelease", &USettingsSave::execSetAttachOnRelease },
			{ "SetMusicMuted", &USettingsSave::execSetMusicMuted },
			{ "SetMusicVolume", &USettingsSave::execSetMusicVolume },
			{ "SetSensitivityX", &USettingsSave::execSetSensitivityX },
			{ "SetSensitivityY", &USettingsSave::execSetSensitivityY },
			{ "SetSfxMuted", &USettingsSave::execSetSfxMuted },
			{ "SetSfxVolume", &USettingsSave::execSetSfxVolume },
			{ "SetToggleSelection", &USettingsSave::execSetToggleSelection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingsSave_GetSettings_Statics
	{
		struct SettingsSave_eventGetSettings_Parms
		{
			FPlayerSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_GetSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettingsSave_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsSave_eventGetSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_GetSettings_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USettingsSave_GetSettings_Statics::NewProp_ReturnValue_MetaData) }; // 2911587900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsSave_GetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsSave_GetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_GetSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSave_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSave, nullptr, "GetSettings", nullptr, nullptr, Z_Construct_UFunction_USettingsSave_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_GetSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsSave_GetSettings_Statics::SettingsSave_eventGetSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_GetSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsSave_GetSettings_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_GetSettings_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USettingsSave_GetSettings_Statics::SettingsSave_eventGetSettings_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USettingsSave_GetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSave_GetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics
	{
		struct SettingsSave_eventSetAttachOnRelease_Parms
		{
			bool on;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_on_MetaData[];
#endif
		static void NewProp_on_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_on;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::NewProp_on_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::NewProp_on_SetBit(void* Obj)
	{
		((SettingsSave_eventSetAttachOnRelease_Parms*)Obj)->on = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::NewProp_on = { "on", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsSave_eventSetAttachOnRelease_Parms), &Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::NewProp_on_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::NewProp_on_MetaData), Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::NewProp_on_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::NewProp_on,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls|Building" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSave, nullptr, "SetAttachOnRelease", nullptr, nullptr, Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::SettingsSave_eventSetAttachOnRelease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::SettingsSave_eventSetAttachOnRelease_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USettingsSave_SetAttachOnRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSave_SetAttachOnRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics
	{
		struct SettingsSave_eventSetMusicMuted_Parms
		{
			bool mute;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mute_MetaData[];
#endif
		static void NewProp_mute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::NewProp_mute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((SettingsSave_eventSetMusicMuted_Parms*)Obj)->mute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsSave_eventSetMusicMuted_Parms), &Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::NewProp_mute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::NewProp_mute_MetaData), Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::NewProp_mute_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::NewProp_mute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Music" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSave, nullptr, "SetMusicMuted", nullptr, nullptr, Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::SettingsSave_eventSetMusicMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::SettingsSave_eventSetMusicMuted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USettingsSave_SetMusicMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSave_SetMusicMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics
	{
		struct SettingsSave_eventSetMusicVolume_Parms
		{
			float volume;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::NewProp_volume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsSave_eventSetMusicVolume_Parms, volume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::NewProp_volume_MetaData), Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::NewProp_volume_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Music" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSave, nullptr, "SetMusicVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::SettingsSave_eventSetMusicVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::SettingsSave_eventSetMusicVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USettingsSave_SetMusicVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSave_SetMusicVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics
	{
		struct SettingsSave_eventSetSensitivityX_Parms
		{
			float x;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsSave_eventSetSensitivityX_Parms, x), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::NewProp_x_MetaData), Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::NewProp_x_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls|Building|Sensitivity" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSave, nullptr, "SetSensitivityX", nullptr, nullptr, Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::SettingsSave_eventSetSensitivityX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::SettingsSave_eventSetSensitivityX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USettingsSave_SetSensitivityX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSave_SetSensitivityX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics
	{
		struct SettingsSave_eventSetSensitivityY_Parms
		{
			float y;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsSave_eventSetSensitivityY_Parms, y), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::NewProp_y_MetaData), Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::NewProp_y_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls|Building|Sensitivity" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSave, nullptr, "SetSensitivityY", nullptr, nullptr, Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::SettingsSave_eventSetSensitivityY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::SettingsSave_eventSetSensitivityY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USettingsSave_SetSensitivityY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSave_SetSensitivityY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics
	{
		struct SettingsSave_eventSetSfxMuted_Parms
		{
			bool mute;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mute_MetaData[];
#endif
		static void NewProp_mute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_mute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::NewProp_mute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::NewProp_mute_SetBit(void* Obj)
	{
		((SettingsSave_eventSetSfxMuted_Parms*)Obj)->mute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsSave_eventSetSfxMuted_Parms), &Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::NewProp_mute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::NewProp_mute_MetaData), Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::NewProp_mute_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::NewProp_mute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|SFX" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSave, nullptr, "SetSfxMuted", nullptr, nullptr, Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::SettingsSave_eventSetSfxMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::SettingsSave_eventSetSfxMuted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USettingsSave_SetSfxMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSave_SetSfxMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics
	{
		struct SettingsSave_eventSetSfxVolume_Parms
		{
			float volume;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::NewProp_volume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SettingsSave_eventSetSfxVolume_Parms, volume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::NewProp_volume_MetaData), Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::NewProp_volume_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::NewProp_volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|SFX" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSave, nullptr, "SetSfxVolume", nullptr, nullptr, Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::SettingsSave_eventSetSfxVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::SettingsSave_eventSetSfxVolume_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USettingsSave_SetSfxVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSave_SetSfxVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics
	{
		struct SettingsSave_eventSetToggleSelection_Parms
		{
			bool toggle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_toggle_MetaData[];
#endif
		static void NewProp_toggle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_toggle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::NewProp_toggle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::NewProp_toggle_SetBit(void* Obj)
	{
		((SettingsSave_eventSetToggleSelection_Parms*)Obj)->toggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::NewProp_toggle = { "toggle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SettingsSave_eventSetToggleSelection_Parms), &Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::NewProp_toggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::NewProp_toggle_MetaData), Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::NewProp_toggle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::NewProp_toggle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsSave, nullptr, "SetToggleSelection", nullptr, nullptr, Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::SettingsSave_eventSetToggleSelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::SettingsSave_eventSetToggleSelection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USettingsSave_SetToggleSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USettingsSave_SetToggleSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USettingsSave);
	UClass* Z_Construct_UClass_USettingsSave_NoRegister()
	{
		return USettingsSave::StaticClass();
	}
	struct Z_Construct_UClass_USettingsSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSave_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingsSave_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingsSave_GetSettings, "GetSettings" }, // 3106584759
		{ &Z_Construct_UFunction_USettingsSave_SetAttachOnRelease, "SetAttachOnRelease" }, // 4028532894
		{ &Z_Construct_UFunction_USettingsSave_SetMusicMuted, "SetMusicMuted" }, // 3423545929
		{ &Z_Construct_UFunction_USettingsSave_SetMusicVolume, "SetMusicVolume" }, // 2481185840
		{ &Z_Construct_UFunction_USettingsSave_SetSensitivityX, "SetSensitivityX" }, // 1855909064
		{ &Z_Construct_UFunction_USettingsSave_SetSensitivityY, "SetSensitivityY" }, // 2878631930
		{ &Z_Construct_UFunction_USettingsSave_SetSfxMuted, "SetSfxMuted" }, // 1609557871
		{ &Z_Construct_UFunction_USettingsSave_SetSfxVolume, "SetSfxVolume" }, // 490672103
		{ &Z_Construct_UFunction_USettingsSave_SetToggleSelection, "SetToggleSelection" }, // 142373988
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSave_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsSave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveFiles.h" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsSave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USettingsSave_Statics::ClassParams = {
		&USettingsSave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USettingsSave_Statics::Class_MetaDataParams), Z_Construct_UClass_USettingsSave_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USettingsSave()
	{
		if (!Z_Registration_Info_UClass_USettingsSave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USettingsSave.OuterSingleton, Z_Construct_UClass_USettingsSave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USettingsSave.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<USettingsSave>()
	{
		return USettingsSave::StaticClass();
	}
	USettingsSave::USettingsSave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsSave);
	USettingsSave::~USettingsSave() {}
	void UBoughtAttachments::StaticRegisterNativesUBoughtAttachments()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoughtAttachments);
	UClass* Z_Construct_UClass_UBoughtAttachments_NoRegister()
	{
		return UBoughtAttachments::StaticClass();
	}
	struct Z_Construct_UClass_UBoughtAttachments_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoughtAttachments_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBoughtAttachments_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoughtAttachments_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveFiles.h" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoughtAttachments_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoughtAttachments>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoughtAttachments_Statics::ClassParams = {
		&UBoughtAttachments::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBoughtAttachments_Statics::Class_MetaDataParams), Z_Construct_UClass_UBoughtAttachments_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBoughtAttachments()
	{
		if (!Z_Registration_Info_UClass_UBoughtAttachments.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoughtAttachments.OuterSingleton, Z_Construct_UClass_UBoughtAttachments_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoughtAttachments.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<UBoughtAttachments>()
	{
		return UBoughtAttachments::StaticClass();
	}
	UBoughtAttachments::UBoughtAttachments(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoughtAttachments);
	UBoughtAttachments::~UBoughtAttachments() {}
	void UMoneySave::StaticRegisterNativesUMoneySave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoneySave);
	UClass* Z_Construct_UClass_UMoneySave_NoRegister()
	{
		return UMoneySave::StaticClass();
	}
	struct Z_Construct_UClass_UMoneySave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoneySave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoneySave_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoneySave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveFiles.h" },
		{ "ModuleRelativePath", "SaveFiles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoneySave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoneySave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoneySave_Statics::ClassParams = {
		&UMoneySave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoneySave_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoneySave_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMoneySave()
	{
		if (!Z_Registration_Info_UClass_UMoneySave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoneySave.OuterSingleton, Z_Construct_UClass_UMoneySave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoneySave.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<UMoneySave>()
	{
		return UMoneySave::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoneySave);
	UMoneySave::~UMoneySave() {}
	struct Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_Statics::ScriptStructInfo[] = {
		{ FPlayerSettings::StaticStruct, Z_Construct_UScriptStruct_FPlayerSettings_Statics::NewStructOps, TEXT("PlayerSettings"), &Z_Registration_Info_UScriptStruct_PlayerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerSettings), 2911587900U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnSaves, USpawnSaves::StaticClass, TEXT("USpawnSaves"), &Z_Registration_Info_UClass_USpawnSaves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnSaves), 3410300512U) },
		{ Z_Construct_UClass_USettingsSave, USettingsSave::StaticClass, TEXT("USettingsSave"), &Z_Registration_Info_UClass_USettingsSave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USettingsSave), 85721330U) },
		{ Z_Construct_UClass_UBoughtAttachments, UBoughtAttachments::StaticClass, TEXT("UBoughtAttachments"), &Z_Registration_Info_UClass_UBoughtAttachments, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoughtAttachments), 2320845843U) },
		{ Z_Construct_UClass_UMoneySave, UMoneySave::StaticClass, TEXT("UMoneySave"), &Z_Registration_Info_UClass_UMoneySave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoneySave), 1978584357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_292390149(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FMP_problox_projProblox_Source_projProblox_SaveFiles_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
