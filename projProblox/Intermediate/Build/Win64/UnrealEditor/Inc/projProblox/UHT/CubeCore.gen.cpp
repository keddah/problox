// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/Cores/CubeCore.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeCore() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACollector_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCubeSocketInfo_NoRegister();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_EGameMode();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnSpawnedCells__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnTurnStarted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_projProblox_OnTurnStarted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnTurnStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnTurnStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnTurnStarted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnTurnStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnTurnStarted__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnTurnStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnTurnStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTurnStarted_DelegateWrapper(const FMulticastScriptDelegate& OnTurnStarted)
{
	OnTurnStarted.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_projProblox_OnSpawnedCells__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnSpawnedCells__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be broadcast whenever more cells are spawned in after the game has already started.\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be broadcast whenever more cells are spawned in after the game has already started." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnSpawnedCells__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnSpawnedCells__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnSpawnedCells__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnSpawnedCells__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnSpawnedCells__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnSpawnedCells__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSpawnedCells_DelegateWrapper(const FMulticastScriptDelegate& OnSpawnedCells)
{
	OnSpawnedCells.ProcessMulticastDelegate<UObject>(NULL);
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
		{ "Comment", "// Should be broadcast whenever an object is added/removed from this cube.\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be broadcast whenever an object is added/removed from this cube." },
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
	struct Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be broadcast when the reset timer has elapsed.. \n" },
#endif
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be broadcast when the reset timer has elapsed.." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_projProblox, nullptr, "OnReset__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReset_DelegateWrapper(const FMulticastScriptDelegate& OnReset)
{
	OnReset.ProcessMulticastDelegate<UObject>(NULL);
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
		{ "Comment", "// Should be broadcast when a \"Thing\" collides with any of the things that are attached to the cube.\n// This has been declared so that a Blueprint function can be called.\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be broadcast when a \"Thing\" collides with any of the things that are attached to the cube.\nThis has been declared so that a Blueprint function can be called." },
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
	DEFINE_FUNCTION(ACubeCore::execBroadcastNewCells)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastNewCells();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execGetGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameMode*)Z_Param__Result=P_THIS->GetGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execGetCloseAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APickupableMaster*>*)Z_Param__Result=P_THIS->GetCloseAttachments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execEjectObject)
	{
		P_GET_OBJECT(APickupableMaster,Z_Param_toEject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EjectObject(Z_Param_toEject);
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
		*(TArray<APickupableMaster*>*)Z_Param__Result=P_THIS->DetachAll(Z_Param_push);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execPlayCollectSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayCollectSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execAddMoney)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMoney(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execStartStoryGame)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_delays);
		P_GET_TARRAY_REF(int32,Z_Param_Out_durations);
		P_GET_PROPERTY(FFloatProperty,Z_Param_longestDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartStoryGame(Z_Param_Out_delays,Z_Param_Out_durations,Z_Param_longestDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACubeCore::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	void ACubeCore::StaticRegisterNativesACubeCore()
	{
		UClass* Class = ACubeCore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMoney", &ACubeCore::execAddMoney },
			{ "BroadcastNewCells", &ACubeCore::execBroadcastNewCells },
			{ "DetachAll", &ACubeCore::execDetachAll },
			{ "EjectObject", &ACubeCore::execEjectObject },
			{ "GetCloseAttachments", &ACubeCore::execGetCloseAttachments },
			{ "GetGameMode", &ACubeCore::execGetGameMode },
			{ "ObjectInSocket", &ACubeCore::execObjectInSocket },
			{ "PlayCollectSound", &ACubeCore::execPlayCollectSound },
			{ "Start", &ACubeCore::execStart },
			{ "StartGame", &ACubeCore::execStartGame },
			{ "StartStoryGame", &ACubeCore::execStartStoryGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACubeCore_AddMoney_Statics
	{
		struct CubeCore_eventAddMoney_Parms
		{
			int32 amount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_AddMoney_Statics::NewProp_amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACubeCore_AddMoney_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventAddMoney_Parms, amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_AddMoney_Statics::NewProp_amount_MetaData), Z_Construct_UFunction_ACubeCore_AddMoney_Statics::NewProp_amount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_AddMoney_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_AddMoney_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_AddMoney_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Other ///////////////\n" },
#endif
		{ "CPP_Default_amount", "10" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Other" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_AddMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "AddMoney", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_AddMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_AddMoney_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_AddMoney_Statics::CubeCore_eventAddMoney_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_AddMoney_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_AddMoney_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_AddMoney_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_AddMoney_Statics::CubeCore_eventAddMoney_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_AddMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_AddMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_BroadcastNewCells_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_BroadcastNewCells_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_BroadcastNewCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "BroadcastNewCells", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_BroadcastNewCells_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_BroadcastNewCells_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACubeCore_BroadcastNewCells()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_BroadcastNewCells_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_DetachAll_Statics
	{
		struct CubeCore_eventDetachAll_Parms
		{
			bool push;
			TArray<APickupableMaster*> ReturnValue;
		};
		static void NewProp_push_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_push;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventDetachAll_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_DetachAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_push,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_DetachAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_DetachAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Socket" },
		{ "CPP_Default_push", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an array of all the attachments that were detached." },
#endif
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
	struct Z_Construct_UFunction_ACubeCore_EjectObject_Statics
	{
		struct CubeCore_eventEjectObject_Parms
		{
			APickupableMaster* toEject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_toEject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACubeCore_EjectObject_Statics::NewProp_toEject = { "toEject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventEjectObject_Parms, toEject), Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_EjectObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_EjectObject_Statics::NewProp_toEject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_EjectObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_EjectObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "EjectObject", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_EjectObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_EjectObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_EjectObject_Statics::CubeCore_eventEjectObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_EjectObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_EjectObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_EjectObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_EjectObject_Statics::CubeCore_eventEjectObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_EjectObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_EjectObject_Statics::FuncParams);
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
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
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
	struct Z_Construct_UFunction_ACubeCore_GetGameMode_Statics
	{
		struct CubeCore_eventGetGameMode_Parms
		{
			EGameMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventGetGameMode_Parms, ReturnValue), Z_Construct_UEnum_projProblox_EGameMode, METADATA_PARAMS(0, nullptr) }; // 1877747702
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "GetGameMode", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::CubeCore_eventGetGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::CubeCore_eventGetGameMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_GetGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_GetGameMode_Statics::FuncParams);
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
		{ "Category", "Socket" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
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
	struct Z_Construct_UFunction_ACubeCore_PlayCollectSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_PlayCollectSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_PlayCollectSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "PlayCollectSound", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_PlayCollectSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_PlayCollectSound_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACubeCore_PlayCollectSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_PlayCollectSound_Statics::FuncParams);
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Game States ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game States" },
#endif
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
	struct Z_Construct_UFunction_ACubeCore_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Calls the delegate that initiates the game." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_StartGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACubeCore_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics
	{
		struct CubeCore_eventStartStoryGame_Parms
		{
			TArray<int32> delays;
			TArray<int32> durations;
			float longestDuration;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_longestDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_longestDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_delays_Inner = { "delays", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_delays_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_delays = { "delays", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventStartStoryGame_Parms, delays), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_delays_MetaData), Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_delays_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_durations_Inner = { "durations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_durations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_durations = { "durations", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventStartStoryGame_Parms, durations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_durations_MetaData), Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_durations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_longestDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_longestDuration = { "longestDuration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeCore_eventStartStoryGame_Parms, longestDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_longestDuration_MetaData), Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_longestDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_delays_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_delays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_durations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_durations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::NewProp_longestDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Gives the core the delay's / durations and calls the start game delegate." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACubeCore, nullptr, "StartStoryGame", nullptr, nullptr, Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::CubeCore_eventStartStoryGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::CubeCore_eventStartStoryGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACubeCore_StartStoryGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACubeCore_StartStoryGame_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canCollect_MetaData[];
#endif
		static void NewProp_canCollect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canCollect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thingAttraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_thingAttraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onAddedThing_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onAddedThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onChangeAttachments_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onChangeAttachments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_resetTimer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_resetTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultAngularDrag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_defaultAngularDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_heavyAngularDrag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_heavyAngularDrag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_currentMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_currentMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onTurnStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onTurnStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onReset_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onReset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onCellsSpawned_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onCellsSpawned;
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
		{ &Z_Construct_UFunction_ACubeCore_AddMoney, "AddMoney" }, // 2622269313
		{ &Z_Construct_UFunction_ACubeCore_BroadcastNewCells, "BroadcastNewCells" }, // 666054514
		{ &Z_Construct_UFunction_ACubeCore_DetachAll, "DetachAll" }, // 1080256491
		{ &Z_Construct_UFunction_ACubeCore_EjectObject, "EjectObject" }, // 4071214313
		{ &Z_Construct_UFunction_ACubeCore_GetCloseAttachments, "GetCloseAttachments" }, // 3455939932
		{ &Z_Construct_UFunction_ACubeCore_GetGameMode, "GetGameMode" }, // 3068884137
		{ &Z_Construct_UFunction_ACubeCore_ObjectInSocket, "ObjectInSocket" }, // 3391374434
		{ &Z_Construct_UFunction_ACubeCore_PlayCollectSound, "PlayCollectSound" }, // 2315332400
		{ &Z_Construct_UFunction_ACubeCore_Start, "Start" }, // 761297033
		{ &Z_Construct_UFunction_ACubeCore_StartGame, "StartGame" }, // 3000747638
		{ &Z_Construct_UFunction_ACubeCore_StartStoryGame, "StartStoryGame" }, // 3732795223
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/Cores/CubeCore.h" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo_MetaData[] = {
		{ "Category", "CubeCore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////// PROPERTIES /////////////////////////////\n/////////////// Components ///////////////\n// A data asset that contains an array of things that are attached to each face of the cube.\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PROPERTIES\nComponents\nA data asset that contains an array of things that are attached to each face of the cube." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo = { "socketInfo", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, socketInfo), Z_Construct_UClass_UCubeSocketInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector_MetaData[] = {
		{ "Category", "Collection" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector = { "thingCollector", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, thingCollector), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer_MetaData[] = {
		{ "Category", "Collection" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer = { "thingHomer", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, thingHomer), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_fairBounds_MetaData[] = {
		{ "Category", "Collection" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_fairBounds = { "fairBounds", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, fairBounds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_fairBounds_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_fairBounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_collector_MetaData[] = {
		{ "Category", "Collection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Collection ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collection" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, collector), Z_Construct_UClass_ACollector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_collector_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_collector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_canCollect_MetaData[] = {
		{ "Category", "Colletion" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_thingAttraction_MetaData[] = {
		{ "Category", "CubeCore" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The time that has to elapse in order for the game to end once the minimum amount of cells has been collected" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_thingAttraction = { "thingAttraction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, thingAttraction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_thingAttraction_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_thingAttraction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Delegates ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing = { "onAddedThing", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onAddedThing), Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing_MetaData) }; // 658641168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onChangeAttachments_MetaData[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be fired when an attachment has been added or removed from this core." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onChangeAttachments = { "onChangeAttachments", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onChangeAttachments), Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onChangeAttachments_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onChangeAttachments_MetaData) }; // 3734686826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_resetTimer_MetaData[] = {
		{ "Category", "CubeCore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Turn System ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn System" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_resetTimer = { "resetTimer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, resetTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_resetTimer_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_resetTimer_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_defaultAngularDrag_MetaData[] = {
		{ "Category", "Angular Drag" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The angular drag that the mesh should have when a turn is active." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_defaultAngularDrag = { "defaultAngularDrag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, defaultAngularDrag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_defaultAngularDrag_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_defaultAngularDrag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_heavyAngularDrag_MetaData[] = {
		{ "Category", "Angular Drag" },
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The angular drag that the mesh should have at the end of a turn." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_heavyAngularDrag = { "heavyAngularDrag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, heavyAngularDrag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_heavyAngularDrag_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_heavyAngularDrag_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_currentMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_currentMode_MetaData[] = {
		{ "Category", "CubeCore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Game States ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game States" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_currentMode = { "currentMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, currentMode), Z_Construct_UEnum_projProblox_EGameMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_currentMode_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_currentMode_MetaData) }; // 1877747702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onTurnStarted_MetaData[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be fired once the game has started (when the play button is pressed)." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onTurnStarted = { "onTurnStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onTurnStarted), Z_Construct_UDelegateFunction_projProblox_OnTurnStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onTurnStarted_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onTurnStarted_MetaData) }; // 141716612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onReset_MetaData[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be fired once x seconds have passed after the last attachment deactivates." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onReset = { "onReset", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onReset), Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onReset_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onReset_MetaData) }; // 3931098124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeCore_Statics::NewProp_onCellsSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Pickupables/Cores/CubeCore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will be fired when more cells are spawned in whilst the game has already started." },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACubeCore_Statics::NewProp_onCellsSpawned = { "onCellsSpawned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubeCore, onCellsSpawned), Z_Construct_UDelegateFunction_projProblox_OnSpawnedCells__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubeCore_Statics::NewProp_onCellsSpawned_MetaData), Z_Construct_UClass_ACubeCore_Statics::NewProp_onCellsSpawned_MetaData) }; // 1125928620
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubeCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_socketInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_thingCollector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_thingHomer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_fairBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_collector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_canCollect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_thingAttraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onAddedThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onChangeAttachments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_resetTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_defaultAngularDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_heavyAngularDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_currentMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_currentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onTurnStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeCore_Statics::NewProp_onCellsSpawned,
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
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACubeCore, ACubeCore::StaticClass, TEXT("ACubeCore"), &Z_Registration_Info_UClass_ACubeCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACubeCore), 1720598814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_849611729(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_Cores_CubeCore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
