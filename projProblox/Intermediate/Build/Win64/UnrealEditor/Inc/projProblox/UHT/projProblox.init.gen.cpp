// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprojProblox_init() {}
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_projProblox;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_projProblox()
	{
		if (!Z_Registration_Info_UPackage__Script_projProblox.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/projProblox",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x20A255F5,
				0x4C85F63B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_projProblox.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_projProblox.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_projProblox(Z_Construct_UPackage__Script_projProblox, TEXT("/Script/projProblox"), Z_Registration_Info_UPackage__Script_projProblox, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x20A255F5, 0x4C85F63B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
