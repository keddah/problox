// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/PickupableMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupableMaster() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_ACubeCore_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UAudioManager_NoRegister();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_EAttachmentIcon();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_ECoreSockets();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_EOperations();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttachmentIcon;
	static UEnum* EAttachmentIcon_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttachmentIcon.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttachmentIcon.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_projProblox_EAttachmentIcon, (UObject*)Z_Construct_UPackage__Script_projProblox(), TEXT("EAttachmentIcon"));
		}
		return Z_Registration_Info_UEnum_EAttachmentIcon.OuterSingleton;
	}
	template<> PROJPROBLOX_API UEnum* StaticEnum<EAttachmentIcon>()
	{
		return EAttachmentIcon_StaticEnum();
	}
	struct Z_Construct_UEnum_projProblox_EAttachmentIcon_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_projProblox_EAttachmentIcon_Statics::Enumerators[] = {
		{ "EAttachmentIcon::None", (int64)EAttachmentIcon::None },
		{ "EAttachmentIcon::Balloon", (int64)EAttachmentIcon::Balloon },
		{ "EAttachmentIcon::Glider", (int64)EAttachmentIcon::Glider },
		{ "EAttachmentIcon::Grapple", (int64)EAttachmentIcon::Grapple },
		{ "EAttachmentIcon::Hoverer", (int64)EAttachmentIcon::Hoverer },
		{ "EAttachmentIcon::Magnet", (int64)EAttachmentIcon::Magnet },
		{ "EAttachmentIcon::Propeller", (int64)EAttachmentIcon::Propeller },
		{ "EAttachmentIcon::Spring", (int64)EAttachmentIcon::Spring },
		{ "EAttachmentIcon::Thruster", (int64)EAttachmentIcon::Thruster },
		{ "EAttachmentIcon::Treads", (int64)EAttachmentIcon::Treads },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_projProblox_EAttachmentIcon_Statics::Enum_MetaDataParams[] = {
		{ "Balloon.Name", "EAttachmentIcon::Balloon" },
		{ "BlueprintType", "true" },
		{ "Glider.Name", "EAttachmentIcon::Glider" },
		{ "Grapple.Name", "EAttachmentIcon::Grapple" },
		{ "Hoverer.Name", "EAttachmentIcon::Hoverer" },
		{ "Magnet.Name", "EAttachmentIcon::Magnet" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
		{ "None.Name", "EAttachmentIcon::None" },
		{ "Propeller.Name", "EAttachmentIcon::Propeller" },
		{ "Spring.Name", "EAttachmentIcon::Spring" },
		{ "Thruster.Name", "EAttachmentIcon::Thruster" },
		{ "Treads.Name", "EAttachmentIcon::Treads" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_projProblox_EAttachmentIcon_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_projProblox,
		nullptr,
		"EAttachmentIcon",
		"EAttachmentIcon",
		Z_Construct_UEnum_projProblox_EAttachmentIcon_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_EAttachmentIcon_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_EAttachmentIcon_Statics::Enum_MetaDataParams), Z_Construct_UEnum_projProblox_EAttachmentIcon_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_projProblox_EAttachmentIcon()
	{
		if (!Z_Registration_Info_UEnum_EAttachmentIcon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttachmentIcon.InnerSingleton, Z_Construct_UEnum_projProblox_EAttachmentIcon_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttachmentIcon.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECoreSockets;
	static UEnum* ECoreSockets_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECoreSockets.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECoreSockets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_projProblox_ECoreSockets, (UObject*)Z_Construct_UPackage__Script_projProblox(), TEXT("ECoreSockets"));
		}
		return Z_Registration_Info_UEnum_ECoreSockets.OuterSingleton;
	}
	template<> PROJPROBLOX_API UEnum* StaticEnum<ECoreSockets>()
	{
		return ECoreSockets_StaticEnum();
	}
	struct Z_Construct_UEnum_projProblox_ECoreSockets_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_projProblox_ECoreSockets_Statics::Enumerators[] = {
		{ "ECoreSockets::Front", (int64)ECoreSockets::Front },
		{ "ECoreSockets::Back", (int64)ECoreSockets::Back },
		{ "ECoreSockets::Right", (int64)ECoreSockets::Right },
		{ "ECoreSockets::Left", (int64)ECoreSockets::Left },
		{ "ECoreSockets::Up", (int64)ECoreSockets::Up },
		{ "ECoreSockets::Down", (int64)ECoreSockets::Down },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_projProblox_ECoreSockets_Statics::Enum_MetaDataParams[] = {
		{ "Back.Name", "ECoreSockets::Back" },
		{ "BlueprintType", "true" },
		{ "Down.Name", "ECoreSockets::Down" },
		{ "Front.Comment", "// Same order as socket info...\n" },
		{ "Front.Name", "ECoreSockets::Front" },
		{ "Front.ToolTip", "Same order as socket info..." },
		{ "Left.Name", "ECoreSockets::Left" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
		{ "Right.Name", "ECoreSockets::Right" },
		{ "Up.Name", "ECoreSockets::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_projProblox_ECoreSockets_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_projProblox,
		nullptr,
		"ECoreSockets",
		"ECoreSockets",
		Z_Construct_UEnum_projProblox_ECoreSockets_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_ECoreSockets_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_ECoreSockets_Statics::Enum_MetaDataParams), Z_Construct_UEnum_projProblox_ECoreSockets_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_projProblox_ECoreSockets()
	{
		if (!Z_Registration_Info_UEnum_ECoreSockets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECoreSockets.InnerSingleton, Z_Construct_UEnum_projProblox_ECoreSockets_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECoreSockets.InnerSingleton;
	}
	DEFINE_FUNCTION(APickupableMaster::execSetHideOutlineMesh)
	{
		P_GET_UBOOL(Z_Param_hide);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHideOutlineMesh(Z_Param_hide);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execSetOutlineMaterial)
	{
		P_GET_OBJECT(UMaterialInstance,Z_Param_mat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutlineMaterial(Z_Param_mat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execGetMass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execGetUIIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAttachmentIcon*)Z_Param__Result=P_THIS->GetUIIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execGetUIDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUIDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execIsTimerRequired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTimerRequired();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execSetAbilityActive)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbilityActive(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execSetSelected)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOperations*)Z_Param__Result=P_THIS->SetSelected(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execResetRotation)
	{
		P_GET_UBOOL(Z_Param_resetVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetRotation(Z_Param_resetVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execGhostSnapRotate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_keypress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GhostSnapRotate(Z_Param_keypress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execRotateHori)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rotSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateHori(Z_Param_axis,Z_Param_rotSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execDestroySelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroySelf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execShowOutline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowOutline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickupableMaster::execResetOutline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetOutline();
		P_NATIVE_END;
	}
	void APickupableMaster::StaticRegisterNativesAPickupableMaster()
	{
		UClass* Class = APickupableMaster::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroySelf", &APickupableMaster::execDestroySelf },
			{ "GetMass", &APickupableMaster::execGetMass },
			{ "GetMesh", &APickupableMaster::execGetMesh },
			{ "GetUIDisplayName", &APickupableMaster::execGetUIDisplayName },
			{ "GetUIIcon", &APickupableMaster::execGetUIIcon },
			{ "GhostSnapRotate", &APickupableMaster::execGhostSnapRotate },
			{ "IsTimerRequired", &APickupableMaster::execIsTimerRequired },
			{ "ResetOutline", &APickupableMaster::execResetOutline },
			{ "ResetRotation", &APickupableMaster::execResetRotation },
			{ "RotateHori", &APickupableMaster::execRotateHori },
			{ "SetAbilityActive", &APickupableMaster::execSetAbilityActive },
			{ "SetHideOutlineMesh", &APickupableMaster::execSetHideOutlineMesh },
			{ "SetOutlineMaterial", &APickupableMaster::execSetOutlineMaterial },
			{ "SetSelected", &APickupableMaster::execSetSelected },
			{ "ShowOutline", &APickupableMaster::execShowOutline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupableMaster_DestroySelf_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_DestroySelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_DestroySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "DestroySelf", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_DestroySelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_DestroySelf_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APickupableMaster_DestroySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_DestroySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_GetMass_Statics
	{
		struct PickupableMaster_eventGetMass_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APickupableMaster_GetMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventGetMass_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_GetMass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_GetMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GetMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_GetMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "GetMass", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_GetMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetMass_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_GetMass_Statics::PickupableMaster_eventGetMass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetMass_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_GetMass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetMass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_GetMass_Statics::PickupableMaster_eventGetMass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_GetMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_GetMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_GetMesh_Statics
	{
		struct PickupableMaster_eventGetMesh_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "GetMesh", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PickupableMaster_eventGetMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::PickupableMaster_eventGetMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics
	{
		struct PickupableMaster_eventGetUIDisplayName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventGetUIDisplayName_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "GetUIDisplayName", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::PickupableMaster_eventGetUIDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::PickupableMaster_eventGetUIDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_GetUIDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_GetUIDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics
	{
		struct PickupableMaster_eventGetUIIcon_Parms
		{
			EAttachmentIcon ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventGetUIIcon_Parms, ReturnValue), Z_Construct_UEnum_projProblox_EAttachmentIcon, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::NewProp_ReturnValue_MetaData) }; // 1774899540
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Getters" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "GetUIIcon", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::PickupableMaster_eventGetUIIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::PickupableMaster_eventGetUIIcon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_GetUIIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_GetUIIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics
	{
		struct PickupableMaster_eventGhostSnapRotate_Parms
		{
			FString keypress;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_keypress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_keypress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::NewProp_keypress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::NewProp_keypress = { "keypress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventGhostSnapRotate_Parms, keypress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::NewProp_keypress_MetaData), Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::NewProp_keypress_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::NewProp_keypress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement|Rotating" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quarter parameter = whether of not to rotate in 45 degree intervals... (Recommended for Wedges)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "GhostSnapRotate", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::PickupableMaster_eventGhostSnapRotate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::PickupableMaster_eventGhostSnapRotate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_GhostSnapRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_GhostSnapRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics
	{
		struct PickupableMaster_eventIsTimerRequired_Parms
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
	void Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PickupableMaster_eventIsTimerRequired_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupableMaster_eventIsTimerRequired_Parms), &Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether a dragger UI element is required (does it need to be activated/deactivated)\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether a dragger UI element is required (does it need to be activated/deactivated)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "IsTimerRequired", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::PickupableMaster_eventIsTimerRequired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::PickupableMaster_eventIsTimerRequired_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_IsTimerRequired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_IsTimerRequired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_ResetOutline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_ResetOutline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_ResetOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "ResetOutline", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_ResetOutline_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_ResetOutline_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APickupableMaster_ResetOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_ResetOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics
	{
		struct PickupableMaster_eventResetRotation_Parms
		{
			bool resetVelocity;
		};
		static void NewProp_resetVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_resetVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::NewProp_resetVelocity_SetBit(void* Obj)
	{
		((PickupableMaster_eventResetRotation_Parms*)Obj)->resetVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::NewProp_resetVelocity = { "resetVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupableMaster_eventResetRotation_Parms), &Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::NewProp_resetVelocity_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::NewProp_resetVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement|Rotating" },
		{ "CPP_Default_resetVelocity", "false" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the relative rotation of the mesh and removes all velocity if set." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "ResetRotation", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PickupableMaster_eventResetRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::PickupableMaster_eventResetRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_ResetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_ResetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_RotateHori_Statics
	{
		struct PickupableMaster_eventRotateHori_Parms
		{
			float axis;
			float rotSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rotSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::NewProp_axis = { "axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventRotateHori_Parms, axis), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::NewProp_rotSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::NewProp_rotSpeed = { "rotSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventRotateHori_Parms, rotSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::NewProp_rotSpeed_MetaData), Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::NewProp_rotSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::NewProp_axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::NewProp_rotSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement|Rotating" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Rotations ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotations" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "RotateHori", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::PickupableMaster_eventRotateHori_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::PickupableMaster_eventRotateHori_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_RotateHori()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_RotateHori_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics
	{
		struct PickupableMaster_eventSetAbilityActive_Parms
		{
			bool value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value_SetBit(void* Obj)
	{
		((PickupableMaster_eventSetAbilityActive_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupableMaster_eventSetAbilityActive_Parms), &Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value_MetaData), Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Ability ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "SetAbilityActive", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PickupableMaster_eventSetAbilityActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::PickupableMaster_eventSetAbilityActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_SetAbilityActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_SetAbilityActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics
	{
		struct PickupableMaster_eventSetHideOutlineMesh_Parms
		{
			bool hide;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hide_MetaData[];
#endif
		static void NewProp_hide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::NewProp_hide_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::NewProp_hide_SetBit(void* Obj)
	{
		((PickupableMaster_eventSetHideOutlineMesh_Parms*)Obj)->hide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::NewProp_hide = { "hide", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupableMaster_eventSetHideOutlineMesh_Parms), &Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::NewProp_hide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::NewProp_hide_MetaData), Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::NewProp_hide_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::NewProp_hide,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Also called by the timeline...\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Also called by the timeline..." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "SetHideOutlineMesh", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::PickupableMaster_eventSetHideOutlineMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::PickupableMaster_eventSetHideOutlineMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics
	{
		struct PickupableMaster_eventSetOutlineMaterial_Parms
		{
			UMaterialInstance* mat;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::NewProp_mat = { "mat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventSetOutlineMaterial_Parms, mat), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::NewProp_mat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// To be called by the timeline so that the colour of the outline can be linked to which socket it's in\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To be called by the timeline so that the colour of the outline can be linked to which socket it's in" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "SetOutlineMaterial", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::PickupableMaster_eventSetOutlineMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::PickupableMaster_eventSetOutlineMaterial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_SetSelected_Statics
	{
		struct PickupableMaster_eventSetSelected_Parms
		{
			bool value;
			EOperations ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value_SetBit(void* Obj)
	{
		((PickupableMaster_eventSetSelected_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PickupableMaster_eventSetSelected_Parms), &Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value_MetaData), Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupableMaster_eventSetSelected_Parms, ReturnValue), Z_Construct_UEnum_projProblox_EOperations, METADATA_PARAMS(0, nullptr) }; // 744084594
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Selection / Placement ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selection / Placement" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "SetSelected", nullptr, nullptr, Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PickupableMaster_eventSetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::PickupableMaster_eventSetSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickupableMaster_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupableMaster_ShowOutline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupableMaster_ShowOutline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupableMaster_ShowOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupableMaster, nullptr, "ShowOutline", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickupableMaster_ShowOutline_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickupableMaster_ShowOutline_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APickupableMaster_ShowOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupableMaster_ShowOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupableMaster);
	UClass* Z_Construct_UClass_APickupableMaster_NoRegister()
	{
		return APickupableMaster::StaticClass();
	}
	struct Z_Construct_UClass_APickupableMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_outlineMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outlineMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_silhouette_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_silhouette;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouseDetector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mouseDetector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_centerMass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_centerMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_soundPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_soundPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_selected_MetaData[];
#endif
		static void NewProp_selected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_selected;
		static const UECodeGen_Private::FBytePropertyParams NewProp_favouredSlot_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_favouredSlot_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_favouredSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_placeDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_placeDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_placeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_placeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lockAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lockAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_parentCore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_parentCore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attachOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachedSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_attachedSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_active_MetaData[];
#endif
		static void NewProp_active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_active;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uiName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uiName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_uiIcon_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uiIcon_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_uiIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupableMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupableMaster_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupableMaster_DestroySelf, "DestroySelf" }, // 3977989958
		{ &Z_Construct_UFunction_APickupableMaster_GetMass, "GetMass" }, // 1738982093
		{ &Z_Construct_UFunction_APickupableMaster_GetMesh, "GetMesh" }, // 627417709
		{ &Z_Construct_UFunction_APickupableMaster_GetUIDisplayName, "GetUIDisplayName" }, // 1097727041
		{ &Z_Construct_UFunction_APickupableMaster_GetUIIcon, "GetUIIcon" }, // 3479426233
		{ &Z_Construct_UFunction_APickupableMaster_GhostSnapRotate, "GhostSnapRotate" }, // 3727443394
		{ &Z_Construct_UFunction_APickupableMaster_IsTimerRequired, "IsTimerRequired" }, // 4023912822
		{ &Z_Construct_UFunction_APickupableMaster_ResetOutline, "ResetOutline" }, // 41556477
		{ &Z_Construct_UFunction_APickupableMaster_ResetRotation, "ResetRotation" }, // 3576020610
		{ &Z_Construct_UFunction_APickupableMaster_RotateHori, "RotateHori" }, // 276374098
		{ &Z_Construct_UFunction_APickupableMaster_SetAbilityActive, "SetAbilityActive" }, // 2477835677
		{ &Z_Construct_UFunction_APickupableMaster_SetHideOutlineMesh, "SetHideOutlineMesh" }, // 2212347732
		{ &Z_Construct_UFunction_APickupableMaster_SetOutlineMaterial, "SetOutlineMaterial" }, // 1822419380
		{ &Z_Construct_UFunction_APickupableMaster_SetSelected, "SetSelected" }, // 2755480177
		{ &Z_Construct_UFunction_APickupableMaster_ShowOutline, "ShowOutline" }, // 221526900
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickupables/PickupableMaster.h" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "PickupableMaster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////// PROPERTIES /////////////////////////////\n/////////////// Components ///////////////\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PROPERTIES\nComponents" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x002008000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_mesh_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_outlineMesh_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_outlineMesh = { "outlineMesh", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, outlineMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_outlineMesh_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_outlineMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_silhouette_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_silhouette = { "silhouette", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, silhouette), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_silhouette_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_silhouette_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_mouseDetector_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_mouseDetector = { "mouseDetector", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, mouseDetector), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_mouseDetector_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_mouseDetector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_centerMass_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_centerMass = { "centerMass", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, centerMass), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_centerMass_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_centerMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_soundPlayer_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_soundPlayer = { "soundPlayer", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, soundPlayer), Z_Construct_UClass_UAudioManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_soundPlayer_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_soundPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected_MetaData[] = {
		{ "Category", "PickupableMaster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Selection / Placement ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selection / Placement" },
#endif
	};
#endif
	void Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected_SetBit(void* Obj)
	{
		((APickupableMaster*)Obj)->selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected = { "selected", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APickupableMaster), &Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_favouredSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_favouredSlot_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The slot that will automatically be selected (if availble) when an object is first selected." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_favouredSlot = { "favouredSlot", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, favouredSlot), Z_Construct_UEnum_projProblox_ECoreSockets, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_favouredSlot_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_favouredSlot_MetaData) }; // 1022227656
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeDir_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The direction to place the object from the relative rotation of the 'objMesh'." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeDir = { "placeDir", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, placeDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeDir_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeRange_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "Delta", "1" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeRange = { "placeRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, placeRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeRange_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_lockAxis_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "Delta", "0.250000" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When not snapRotating, lock any of the axis. Set the axis to lock to a value other than 0." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_lockAxis = { "lockAxis", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, lockAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_lockAxis_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_lockAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_parentCore_MetaData[] = {
		{ "Category", "PickupableMaster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Attachments ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attachments" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_parentCore = { "parentCore", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, parentCore), Z_Construct_UClass_ACubeCore_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_parentCore_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_parentCore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_attachOffset_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "Delta", "0.250000" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The positional offset for when objects attach to cores." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_attachOffset = { "attachOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, attachOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_attachOffset_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_attachOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_rotOffset_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "Delta", "0.250000" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rotational offset for when the core attaches itself to the object." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_rotOffset = { "rotOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, rotOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_rotOffset_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_rotOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_attachedSocket_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_attachedSocket = { "attachedSocket", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, attachedSocket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_attachedSocket_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_attachedSocket_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_active_MetaData[] = {
		{ "Category", "PickupableMaster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// Abilities ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities" },
#endif
	};
#endif
	void Z_Construct_UClass_APickupableMaster_Statics::NewProp_active_SetBit(void* Obj)
	{
		((APickupableMaster*)Obj)->active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APickupableMaster), &Z_Construct_UClass_APickupableMaster_Statics::NewProp_active_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_active_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_active_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiName_MetaData[] = {
		{ "Category", "PickupableMaster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////// UI ///////////////\n" },
#endif
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiName = { "uiName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, uiName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiName_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiName_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiIcon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiIcon_MetaData[] = {
		{ "Category", "PickupableMaster" },
		{ "ModuleRelativePath", "Pickupables/PickupableMaster.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiIcon = { "uiIcon", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickupableMaster, uiIcon), Z_Construct_UEnum_projProblox_EAttachmentIcon, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiIcon_MetaData), Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiIcon_MetaData) }; // 1774899540
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupableMaster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_outlineMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_silhouette,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_mouseDetector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_centerMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_soundPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_selected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_favouredSlot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_favouredSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_placeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_lockAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_parentCore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_attachOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_rotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_attachedSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_active,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiIcon_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupableMaster_Statics::NewProp_uiIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupableMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupableMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupableMaster_Statics::ClassParams = {
		&APickupableMaster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupableMaster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::Class_MetaDataParams), Z_Construct_UClass_APickupableMaster_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickupableMaster_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APickupableMaster()
	{
		if (!Z_Registration_Info_UClass_APickupableMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupableMaster.OuterSingleton, Z_Construct_UClass_APickupableMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupableMaster.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<APickupableMaster>()
	{
		return APickupableMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupableMaster);
	APickupableMaster::~APickupableMaster() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_PickupableMaster_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_PickupableMaster_h_Statics::EnumInfo[] = {
		{ EAttachmentIcon_StaticEnum, TEXT("EAttachmentIcon"), &Z_Registration_Info_UEnum_EAttachmentIcon, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1774899540U) },
		{ ECoreSockets_StaticEnum, TEXT("ECoreSockets"), &Z_Registration_Info_UEnum_ECoreSockets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1022227656U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_PickupableMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupableMaster, APickupableMaster::StaticClass, TEXT("APickupableMaster"), &Z_Registration_Info_UClass_APickupableMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupableMaster), 724095138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_PickupableMaster_h_3725380792(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_PickupableMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_PickupableMaster_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_PickupableMaster_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_PickupableMaster_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
