// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/CubeCore.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeCore() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACollector_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCubeSocketInfo_NoRegister();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnAttemptEnding__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnEndingGame__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnGameEnd__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnStartGame__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_projProblox_OnStartGame__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnStartGame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnStartGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnStartGame__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnStartGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnStartGame__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnStartGame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnStartGame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnStartGame_DelegateWrapper(const FMulticastScriptDelegate& OnStartGame)
{
	OnStartGame.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be broadcasted whenever an object is added/removed from this cube\n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be broadcasted whenever an object is added/removed from this cube" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnAttachmentChange__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttachmentChange_DelegateWrapper(const FMulticastScriptDelegate& OnAttachmentChange)
{
	OnAttachmentChange.ProcessMulticastDelegate<UObject>(NULL);
}
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
	struct Z_Construct_UDelegateFunction_projProblox_OnGameEnd__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnGameEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnGameEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnGameEnd__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnGameEnd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnGameEnd__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnGameEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnGameEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGameEnd_DelegateWrapper(const FMulticastScriptDelegate& OnGameEnd)
{
	OnGameEnd.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_projProblox_OnEndingGame__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnEndingGame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnEndingGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnEndingGame__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnEndingGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnEndingGame__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnEndingGame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnEndingGame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEndingGame_DelegateWrapper(const FMulticastScriptDelegate& OnEndingGame)
{
	OnEndingGame.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_projProblox_OnAttemptEnding__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnAttemptEnding__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be broadcasted when the reset delay + longest duration has elapsed.. \n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be broadcasted when the reset delay + longest duration has elapsed.." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnAttemptEnding__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnAttemptEnding__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnAttemptEnding__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnAttemptEnding__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnAttemptEnding__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnAttemptEnding__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAttemptEnding_DelegateWrapper(const FMulticastScriptDelegate& OnAttemptEnding)
{
	OnAttemptEnding.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics
	{
		struct _Script_projProblox_eventOnReset_Parms
		{
			int32 tries;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_tries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::NewProp_tries = { "tries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_projProblox_eventOnReset_Parms, tries), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::NewProp_tries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be broadcasted when the reset timer has elapsed.. \n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be broadcasted when the reset timer has elapsed.." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnReset__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::_Script_projProblox_eventOnReset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::_Script_projProblox_eventOnReset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReset_DelegateWrapper(const FMulticastScriptDelegate& OnReset, int32 tries)
{
	struct _Script_projProblox_eventOnReset_Parms
	{
		int32 tries;
	};
	_Script_projProblox_eventOnReset_Parms Parms;
	Parms.tries=tries;
	OnReset.ProcessMulticastDelegate<UObject>(&Parms);
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
	DEFINE_FUNCTION(ACubeCore::execSelectSocket)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SelectSocket(Z_Param_socket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execGetRating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRating();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execGetAttempts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAttempts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execGetCloseAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APickupableMaster*>*)Z_Param__Result=P_THIS->GetCloseAttachments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execSetAllAbilityActive)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllAbilityActive(Z_Param_value);
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
	DEFINE_FUNCTION(ACubeCore::execDetachAll)
	{
		P_GET_UBOOL(Z_Param_push);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DetachAll(Z_Param_push);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execGetAttachedObjActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAttachedObjActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execStartGame)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_delays);
		P_GET_TARRAY_REF(int32,Z_Param_Out_durations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame(Z_Param_Out_delays,Z_Param_Out_durations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execEndGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execStartEndingGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEndingGame();
		P_NATIVE_END;
	}
	void ACubeCore::StaticRegisterNativesACubeCore()
	{
		UClass* Class = ACubeCore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DetachAll", &ACubeCore::execDetachAll },
			{ "EndGame", &ACubeCore::execEndGame },
			{ "GetAttachedObjActors", &ACubeCore::execGetAttachedObjActors },
			{ "GetAttempts", &ACubeCore::execGetAttempts },
			{ "GetCloseAttachments", &ACubeCore::execGetCloseAttachments },
			{ "GetRating", &ACubeCore::execGetRating },
			{ "ObjectInSocket", &ACubeCore::execObjectInSocket },
			{ "SelectSocket", &ACubeCore::execSelectSocket },
			{ "SetAllAbilityActive", &ACubeCore::execSetAllAbilityActive },
			{ "Start", &ACubeCore::execStart },
			{ "StartEndingGame", &ACubeCore::execStartEndingGame },
			{ "StartGame", &ACubeCore::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACubeCore_DetachAll_Statics
	{
		struct CubeCore_eventDetachAll_Parms
		{
			bool push;
			bool ReturnValue;
		};
		static void NewProp_push_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_push;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_push_SetBit(void* Obj)
	{
		((CubeCore_eventDetachAll_Parms*)Obj)->push = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_push = { "push", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CubeCore_eventDetachAll_Parms), &Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_push_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CubeCore_eventDetachAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CubeCore_eventDetachAll_Parms), &Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_DetachAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_push,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_DetachAll_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_push", "true" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_DetachAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "DetachAll", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_DetachAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_DetachAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_DetachAll_Statics::CubeCore_eventDetachAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_DetachAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_DetachAll_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_DetachAll_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_DetachAll_Statics::CubeCore_eventDetachAll_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_DetachAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_DetachAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_EndGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_EndGame_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Game States ///////////////\n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game States" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "EndGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_EndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_EndGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACubeCore_EndGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_EndGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics
	{
		struct CubeCore_eventGetAttachedObjActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventGetAttachedObjActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "GetAttachedObjActors", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::CubeCore_eventGetAttachedObjActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_GetAttachedObjActors_Statics::Function_MetaDataParams) };
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
	struct Z_Construct_UFunction_ACubeCore_GetAttempts_Statics
	{
		struct CubeCore_eventGetAttempts_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventGetAttempts_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "GetAttempts", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::CubeCore_eventGetAttempts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::CubeCore_eventGetAttempts_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_GetAttempts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_GetAttempts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics
	{
		struct CubeCore_eventGetCloseAttachments_Parms
		{
			TArray<APickupableMaster*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventGetCloseAttachments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the attachments that are directly attached to this cube." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "GetCloseAttachments", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::CubeCore_eventGetCloseAttachments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::CubeCore_eventGetCloseAttachments_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_GetCloseAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_GetCloseAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_GetRating_Statics
	{
		struct CubeCore_eventGetRating_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACubeCore_GetRating_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventGetRating_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_GetRating_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetRating_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_GetRating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_GetRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "GetRating", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_GetRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_GetRating_Statics::CubeCore_eventGetRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_GetRating_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetRating_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_GetRating_Statics::CubeCore_eventGetRating_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_GetRating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_GetRating_Statics::FuncParams);
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
	struct Z_Construct_UFunction_ACubeCore_SelectSocket_Statics
	{
		struct CubeCore_eventSelectSocket_Parms
		{
			int32 socket;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_socket;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::NewProp_socket = { "socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventSelectSocket_Parms, socket), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventSelectSocket_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::NewProp_socket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "SelectSocket", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::CubeCore_eventSelectSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::CubeCore_eventSelectSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_SelectSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_SelectSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics
	{
		struct CubeCore_eventSetAllAbilityActive_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::NewProp_value_SetBit(void* Obj)
	{
		((CubeCore_eventSetAllAbilityActive_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CubeCore_eventSetAllAbilityActive_Parms), &Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ablility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Abilities ///////////////\n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "SetAllAbilityActive", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::CubeCore_eventSetAllAbilityActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::CubeCore_eventSetAllAbilityActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_SetAllAbilityActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_SetAllAbilityActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_Start_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_Start_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "Start", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_Start_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_Start_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACubeCore_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_StartEndingGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_StartEndingGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_StartEndingGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "StartEndingGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartEndingGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_StartEndingGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACubeCore_StartEndingGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_StartEndingGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_StartGame_Statics
	{
		struct CubeCore_eventStartGame_Parms
		{
			TArray<int32> delays;
			TArray<int32> durations;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_delays_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_delays_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_delays;
		static const UECodeGen_Private::FIntPropertyParams NewProp_durations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_durations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_durations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_delays_Inner = { "delays", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_delays_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_delays = { "delays", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventStartGame_Parms, delays), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_delays_MetaData), Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_delays_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_durations_Inner = { "durations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_durations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_durations = { "durations", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventStartGame_Parms, durations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_durations_MetaData), Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_durations_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_StartGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_delays_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_delays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_durations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_StartGame_Statics::NewProp_durations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Calls the delegate that initiates the game." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "StartGame", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_StartGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_StartGame_Statics::CubeCore_eventStartGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_StartGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_StartGame_Statics::CubeCore_eventStartGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_StartGame_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_resetTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_resetTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_resetDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_resetDelay;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_moveRatings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveRatings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_moveRatings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_socketInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_socketInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inactiveMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inactiveMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_selectedMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_selectedMat;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_distanceLine_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_distanceLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canCollect_MetaData[];
#endif
		static void NewProp_canCollect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canCollect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onAddedThing_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onAddedThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onChangeAttachments_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onChangeAttachments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onStartGame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onStartGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onEndingGame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onEndingGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onAttemptEnding_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onAttemptEnding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onReset_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onReset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onGameEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onGameEnd;
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
		{ &Z_Construct_UFunction_ACubeCore_DetachAll, "DetachAll" }, // 3660857692
		{ &Z_Construct_UFunction_ACubeCore_EndGame, "EndGame" }, // 151726495
		{ &Z_Construct_UFunction_ACubeCore_GetAttachedObjActors, "GetAttachedObjActors" }, // 626994401
		{ &Z_Construct_UFunction_ACubeCore_GetAttempts, "GetAttempts" }, // 2686898909
		{ &Z_Construct_UFunction_ACubeCore_GetCloseAttachments, "GetCloseAttachments" }, // 2453982587
		{ &Z_Construct_UFunction_ACubeCore_GetRating, "GetRating" }, // 1508871511
		{ &Z_Construct_UFunction_ACubeCore_ObjectInSocket, "ObjectInSocket" }, // 3382861889
		{ &Z_Construct_UFunction_ACubeCore_SelectSocket, "SelectSocket" }, // 3328171643
		{ &Z_Construct_UFunction_ACubeCore_SetAllAbilityActive, "SetAllAbilityActive" }, // 2351950642
		{ &Z_Construct_UFunction_ACubeCore_Start, "Start" }, // 1184988946
		{ &Z_Construct_UFunction_ACubeCore_StartEndingGame, "StartEndingGame" }, // 1270518088
		{ &Z_Construct_UFunction_ACubeCore_StartGame, "StartGame" }, // 30573329
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubeCore.h" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_resetTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CubeCore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Turn System ///////////////\n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn System" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_resetTimer = { "resetTimer", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, resetTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_resetTimer_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_resetTimer_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_resetDelay_MetaData[] = {
		{ "Category", "CubeCore" },
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time in seconds before the attempt is reset (This timer starts after the highest intiation delay + duration)." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_resetDelay = { "resetDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, resetDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_resetDelay_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_resetDelay_MetaData) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_moveRatings_Inner = { "moveRatings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_moveRatings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CubeCore" },
		{ "ModuleRelativePath", "CubeCore.h" },
		{ "TitleProperty", "Soimets" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index 0 = no stars.\n index 3 = three stars." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_moveRatings = { "moveRatings", nullptr, (EPropertyFlags)0x0040000000000841, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, moveRatings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_moveRatings_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_moveRatings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo_MetaData[] = {
		{ "Category", "CubeCore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////// PROPERTIES /////////////////////////////\n/////////////// Components ///////////////\n// A data asset that contains an array of things that are attached to each face of the cube.\n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PROPERTIES\nComponents\nA data asset that contains an array of things that are attached to each face of the cube." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo = { "socketInfo", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, socketInfo), Z_Construct_UClass_UCubeSocketInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_inactiveMat_MetaData[] = {
		{ "Category", "Collection" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_inactiveMat = { "inactiveMat", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, inactiveMat), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_inactiveMat_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_inactiveMat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_selectedMat_MetaData[] = {
		{ "Category", "Collection" },
		{ "ModuleRelativePath", "CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_selectedMat = { "selectedMat", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, selectedMat), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_selectedMat_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_selectedMat_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_distanceLine_MetaData[] = {
		{ "Category", "Collection" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This arrow should be shown when the cube is too far away from the collector" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_distanceLine = { "distanceLine", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, distanceLine), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_distanceLine_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_distanceLine_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_collector_MetaData[] = {
		{ "Category", "Collection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Collection ///////////////\n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, collector), Z_Construct_UClass_ACollector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_collector_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_collector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_canCollect_MetaData[] = {
		{ "Category", "Colletion" },
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not 'Things' are allowed to be collected (pairs with canPickup)..." },
#endif
	};
#endif
	void Z_Construct_UClass_ACubeCore_Statics::NewProp_canCollect_SetBit(void* Obj)
	{
		((ACubeCore*)Obj)->canCollect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_canCollect = { "canCollect", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACubeCore), &Z_Construct_UClass_ACubeCore_Statics::NewProp_canCollect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_canCollect_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_canCollect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Delegates ///////////////\n" },
#endif
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing = { "onAddedThing", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onAddedThing), Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing_MetaData) }; // 1631994422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onChangeAttachments_MetaData[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be fired when an attachment has been added or removed from this core." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onChangeAttachments = { "onChangeAttachments", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onChangeAttachments), Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onChangeAttachments_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onChangeAttachments_MetaData) }; // 2659535253
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onStartGame_MetaData[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be fired once the game has started (when the play button is pressed)." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onStartGame = { "onStartGame", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onStartGame), Z_Construct_UDelegateFunction_projProblox_OnStartGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onStartGame_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onStartGame_MetaData) }; // 1333778977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onEndingGame_MetaData[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be fired once the min percentage of Things has been collected." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onEndingGame = { "onEndingGame", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onEndingGame), Z_Construct_UDelegateFunction_projProblox_OnEndingGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onEndingGame_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onEndingGame_MetaData) }; // 3241867572
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onAttemptEnding_MetaData[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be fired once x seconds have passed after the last attachment deactivates." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onAttemptEnding = { "onAttemptEnding", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onAttemptEnding), Z_Construct_UDelegateFunction_projProblox_OnAttemptEnding__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onAttemptEnding_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onAttemptEnding_MetaData) }; // 1882290377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onReset_MetaData[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be fired once x seconds have passed after the last attachment deactivates." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onReset = { "onReset", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onReset), Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onReset_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onReset_MetaData) }; // 3673695132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onGameEnd_MetaData[] = {
		{ "ModuleRelativePath", "CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be fired once the countdown has finished it completely ends the level." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onGameEnd = { "onGameEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onGameEnd), Z_Construct_UDelegateFunction_projProblox_OnGameEnd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onGameEnd_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onGameEnd_MetaData) }; // 1384874795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubeCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_resetTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_resetDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_moveRatings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_moveRatings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_inactiveMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_selectedMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_fairBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_distanceLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_collector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_canCollect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onChangeAttachments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onStartGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onEndingGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onAttemptEnding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onGameEnd,
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
		{ Z_Construct_UClass_ACubeCore, ACubeCore::StaticClass, TEXT("ACubeCore"), &Z_Registration_Info_UClass_ACubeCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACubeCore), 2702029563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeCore_h_369145490(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeCore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
