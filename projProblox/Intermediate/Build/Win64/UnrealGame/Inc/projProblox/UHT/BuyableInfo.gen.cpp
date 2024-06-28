// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/Pickupables/BuyableInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuyableInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UBuyableInfo();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UBuyableInfo_NoRegister();
	PROJPROBLOX_API UScriptStruct* Z_Construct_UScriptStruct_FBuyableInfoStruct();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuyableInfoStruct;
class UScriptStruct* FBuyableInfoStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuyableInfoStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuyableInfoStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuyableInfoStruct, (UObject*)Z_Construct_UPackage__Script_projProblox(), TEXT("BuyableInfoStruct"));
	}
	return Z_Registration_Info_UScriptStruct_BuyableInfoStruct.OuterSingleton;
}
template<> PROJPROBLOX_API UScriptStruct* StaticStruct<FBuyableInfoStruct>()
{
	return FBuyableInfoStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_price_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_price;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachmentMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attachmentMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attachmentMats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachmentMats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_attachmentMats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_defaultScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_classToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuyableInfoStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_name_MetaData[] = {
		{ "Category", "BuyableInfoStruct" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuyableInfoStruct, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_description_MetaData[] = {
		{ "Category", "BuyableInfoStruct" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuyableInfoStruct, description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_description_MetaData), Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_price_MetaData[] = {
		{ "Category", "BuyableInfoStruct" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_price = { "price", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuyableInfoStruct, price), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_price_MetaData), Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_price_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMesh_MetaData[] = {
		{ "Category", "BuyableInfoStruct" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMesh = { "attachmentMesh", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuyableInfoStruct, attachmentMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMesh_MetaData), Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMats_Inner = { "attachmentMats", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMats_MetaData[] = {
		{ "Category", "BuyableInfoStruct" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMats = { "attachmentMats", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuyableInfoStruct, attachmentMats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMats_MetaData), Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMats_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_defaultScale_MetaData[] = {
		{ "Category", "BuyableInfoStruct" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_defaultScale = { "defaultScale", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuyableInfoStruct, defaultScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_defaultScale_MetaData), Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_defaultScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_classToSpawn_MetaData[] = {
		{ "Category", "BuyableInfoStruct" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_classToSpawn = { "classToSpawn", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuyableInfoStruct, classToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_classToSpawn_MetaData), Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_classToSpawn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_price,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_attachmentMats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_defaultScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewProp_classToSpawn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
		nullptr,
		&NewStructOps,
		"BuyableInfoStruct",
		Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::PropPointers),
		sizeof(FBuyableInfoStruct),
		alignof(FBuyableInfoStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBuyableInfoStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_BuyableInfoStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuyableInfoStruct.InnerSingleton, Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BuyableInfoStruct.InnerSingleton;
	}
	void UBuyableInfo::StaticRegisterNativesUBuyableInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBuyableInfo);
	UClass* Z_Construct_UClass_UBuyableInfo_NoRegister()
	{
		return UBuyableInfo::StaticClass();
	}
	struct Z_Construct_UClass_UBuyableInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachmentMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attachmentMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attachmentMats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachmentMats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_attachmentMats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_price_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_price;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_defaultScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_classToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_classToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuyableInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuyableInfo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuyableInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pickupables/BuyableInfo.h" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuyableInfo_Statics::NewProp_name_MetaData[] = {
		{ "Category", "BuyableInfo" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuyableInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuyableInfo, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuyableInfo_Statics::NewProp_name_MetaData), Z_Construct_UClass_UBuyableInfo_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMesh_MetaData[] = {
		{ "Category", "BuyableInfo" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMesh = { "attachmentMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuyableInfo, attachmentMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMesh_MetaData), Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMats_Inner = { "attachmentMats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMats_MetaData[] = {
		{ "Category", "BuyableInfo" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMats = { "attachmentMats", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuyableInfo, attachmentMats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMats_MetaData), Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMats_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuyableInfo_Statics::NewProp_description_MetaData[] = {
		{ "Category", "BuyableInfo" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuyableInfo_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuyableInfo, description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuyableInfo_Statics::NewProp_description_MetaData), Z_Construct_UClass_UBuyableInfo_Statics::NewProp_description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuyableInfo_Statics::NewProp_price_MetaData[] = {
		{ "Category", "BuyableInfo" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBuyableInfo_Statics::NewProp_price = { "price", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuyableInfo, price), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuyableInfo_Statics::NewProp_price_MetaData), Z_Construct_UClass_UBuyableInfo_Statics::NewProp_price_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuyableInfo_Statics::NewProp_defaultScale_MetaData[] = {
		{ "Category", "BuyableInfo" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuyableInfo_Statics::NewProp_defaultScale = { "defaultScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuyableInfo, defaultScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuyableInfo_Statics::NewProp_defaultScale_MetaData), Z_Construct_UClass_UBuyableInfo_Statics::NewProp_defaultScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuyableInfo_Statics::NewProp_classToSpawn_MetaData[] = {
		{ "Category", "BuyableInfo" },
		{ "ModuleRelativePath", "Pickupables/BuyableInfo.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBuyableInfo_Statics::NewProp_classToSpawn = { "classToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuyableInfo, classToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuyableInfo_Statics::NewProp_classToSpawn_MetaData), Z_Construct_UClass_UBuyableInfo_Statics::NewProp_classToSpawn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuyableInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuyableInfo_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuyableInfo_Statics::NewProp_attachmentMats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuyableInfo_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuyableInfo_Statics::NewProp_price,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuyableInfo_Statics::NewProp_defaultScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuyableInfo_Statics::NewProp_classToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuyableInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuyableInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuyableInfo_Statics::ClassParams = {
		&UBuyableInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBuyableInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBuyableInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuyableInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuyableInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuyableInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBuyableInfo()
	{
		if (!Z_Registration_Info_UClass_UBuyableInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuyableInfo.OuterSingleton, Z_Construct_UClass_UBuyableInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBuyableInfo.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<UBuyableInfo>()
	{
		return UBuyableInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuyableInfo);
	UBuyableInfo::~UBuyableInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableInfo_h_Statics::ScriptStructInfo[] = {
		{ FBuyableInfoStruct::StaticStruct, Z_Construct_UScriptStruct_FBuyableInfoStruct_Statics::NewStructOps, TEXT("BuyableInfoStruct"), &Z_Registration_Info_UScriptStruct_BuyableInfoStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuyableInfoStruct), 3482332380U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBuyableInfo, UBuyableInfo::StaticClass, TEXT("UBuyableInfo"), &Z_Registration_Info_UClass_UBuyableInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuyableInfo), 2539175680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableInfo_h_2333438187(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableInfo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_Pickupables_BuyableInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
