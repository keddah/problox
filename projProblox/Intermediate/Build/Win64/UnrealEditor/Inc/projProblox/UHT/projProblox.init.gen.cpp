// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprojProblox_init() {}
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnAttemptEnding__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnEndingGame__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnGameEnd__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnNewWave__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature();
	PROJPROBLOX_API UFunction* Z_Construct_UDelegateFunction_projProblox_OnStartGame__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_projProblox;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_projProblox()
	{
		if (!Z_Registration_Info_UPackage__Script_projProblox.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_projProblox_OnAddedThing__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_projProblox_OnAttachmentChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_projProblox_OnAttemptEnding__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_projProblox_OnEndingGame__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_projProblox_OnGameEnd__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_projProblox_OnNewWave__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_projProblox_OnOutOfRange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_projProblox_OnReset__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_projProblox_OnStartGame__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/projProblox",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAE1623B1,
				0x8B578E55,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_projProblox.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_projProblox.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_projProblox(Z_Construct_UPackage__Script_projProblox, TEXT("/Script/projProblox"), Z_Registration_Info_UPackage__Script_projProblox, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAE1623B1, 0x8B578E55));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
