// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/ThingSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThingSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AThing_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AThingSpawner();
	PROJPROBLOX_API UClass* Z_Construct_UClass_AThingSpawner_NoRegister();
	PROJPROBLOX_API UEnum* Z_Construct_UEnum_projProblox_EThingType();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThingType;
	static UEnum* EThingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EThingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EThingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_projProblox_EThingType, (UObject*)Z_Construct_UPackage__Script_projProblox(), TEXT("EThingType"));
		}
		return Z_Registration_Info_UEnum_EThingType.OuterSingleton;
	}
	template<> PROJPROBLOX_API UEnum* StaticEnum<EThingType>()
	{
		return EThingType_StaticEnum();
	}
	struct Z_Construct_UEnum_projProblox_EThingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_projProblox_EThingType_Statics::Enumerators[] = {
		{ "EThingType::Normal", (int64)EThingType::Normal },
		{ "EThingType::Bouncy", (int64)EThingType::Bouncy },
		{ "EThingType::Slippery", (int64)EThingType::Slippery },
		{ "EThingType::Hover", (int64)EThingType::Hover },
		{ "EThingType::Sticky", (int64)EThingType::Sticky },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_projProblox_EThingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bouncy.Name", "EThingType::Bouncy" },
		{ "Hover.Name", "EThingType::Hover" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
		{ "Normal.Name", "EThingType::Normal" },
		{ "Slippery.Name", "EThingType::Slippery" },
		{ "Sticky.Name", "EThingType::Sticky" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_projProblox_EThingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_projProblox,
		nullptr,
		"EThingType",
		"EThingType",
		Z_Construct_UEnum_projProblox_EThingType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_EThingType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_projProblox_EThingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_projProblox_EThingType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_projProblox_EThingType()
	{
		if (!Z_Registration_Info_UEnum_EThingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThingType.InnerSingleton, Z_Construct_UEnum_projProblox_EThingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EThingType.InnerSingleton;
	}
	void AThingSpawner::StaticRegisterNativesAThingSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThingSpawner);
	UClass* Z_Construct_UClass_AThingSpawner_NoRegister()
	{
		return AThingSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AThingSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_normalThing_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_normalThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bouncyThing_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_bouncyThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slipperyThing_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_slipperyThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hoverThing_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_hoverThing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stickyThing_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_stickyThing;
		static const UECodeGen_Private::FBytePropertyParams NewProp_thingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_thingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnAmounts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_spawnAmounts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThingSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThingSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThingSpawner.h" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThingSpawner_Statics::NewProp_normalThing_MetaData[] = {
		{ "Category", "ThingSpawner" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThingSpawner_Statics::NewProp_normalThing = { "normalThing", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThingSpawner, normalThing), Z_Construct_UClass_UClass, Z_Construct_UClass_AThing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::NewProp_normalThing_MetaData), Z_Construct_UClass_AThingSpawner_Statics::NewProp_normalThing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThingSpawner_Statics::NewProp_bouncyThing_MetaData[] = {
		{ "Category", "ThingSpawner" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThingSpawner_Statics::NewProp_bouncyThing = { "bouncyThing", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThingSpawner, bouncyThing), Z_Construct_UClass_UClass, Z_Construct_UClass_AThing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::NewProp_bouncyThing_MetaData), Z_Construct_UClass_AThingSpawner_Statics::NewProp_bouncyThing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThingSpawner_Statics::NewProp_slipperyThing_MetaData[] = {
		{ "Category", "ThingSpawner" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThingSpawner_Statics::NewProp_slipperyThing = { "slipperyThing", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThingSpawner, slipperyThing), Z_Construct_UClass_UClass, Z_Construct_UClass_AThing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::NewProp_slipperyThing_MetaData), Z_Construct_UClass_AThingSpawner_Statics::NewProp_slipperyThing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThingSpawner_Statics::NewProp_hoverThing_MetaData[] = {
		{ "Category", "ThingSpawner" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThingSpawner_Statics::NewProp_hoverThing = { "hoverThing", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThingSpawner, hoverThing), Z_Construct_UClass_UClass, Z_Construct_UClass_AThing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::NewProp_hoverThing_MetaData), Z_Construct_UClass_AThingSpawner_Statics::NewProp_hoverThing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThingSpawner_Statics::NewProp_stickyThing_MetaData[] = {
		{ "Category", "ThingSpawner" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThingSpawner_Statics::NewProp_stickyThing = { "stickyThing", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThingSpawner, stickyThing), Z_Construct_UClass_UClass, Z_Construct_UClass_AThing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::NewProp_stickyThing_MetaData), Z_Construct_UClass_AThingSpawner_Statics::NewProp_stickyThing_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingType_MetaData[] = {
		{ "Category", "ThingSpawner" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of thing to spawn." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingType = { "thingType", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThingSpawner, thingType), Z_Construct_UEnum_projProblox_EThingType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingType_MetaData), Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingType_MetaData) }; // 2125780328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThingSpawner_Statics::NewProp_spawnAmounts_MetaData[] = {
		{ "Category", "ThingSpawner" },
		{ "EditInlineNew", "" },
		{ "ModuleRelativePath", "ThingSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index corresponds with the index of the spawn locations..." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AThingSpawner_Statics::NewProp_spawnAmounts = { "spawnAmounts", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThingSpawner, spawnAmounts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::NewProp_spawnAmounts_MetaData), Z_Construct_UClass_AThingSpawner_Statics::NewProp_spawnAmounts_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThingSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThingSpawner_Statics::NewProp_normalThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThingSpawner_Statics::NewProp_bouncyThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThingSpawner_Statics::NewProp_slipperyThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThingSpawner_Statics::NewProp_hoverThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThingSpawner_Statics::NewProp_stickyThing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThingSpawner_Statics::NewProp_thingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThingSpawner_Statics::NewProp_spawnAmounts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThingSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThingSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThingSpawner_Statics::ClassParams = {
		&AThingSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThingSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AThingSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThingSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AThingSpawner()
	{
		if (!Z_Registration_Info_UClass_AThingSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThingSpawner.OuterSingleton, Z_Construct_UClass_AThingSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThingSpawner.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<AThingSpawner>()
	{
		return AThingSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThingSpawner);
	AThingSpawner::~AThingSpawner() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_Statics::EnumInfo[] = {
		{ EThingType_StaticEnum, TEXT("EThingType"), &Z_Registration_Info_UEnum_EThingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2125780328U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThingSpawner, AThingSpawner::StaticClass, TEXT("AThingSpawner"), &Z_Registration_Info_UClass_AThingSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThingSpawner), 1654484738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_1566713766(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_ThingSpawner_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
