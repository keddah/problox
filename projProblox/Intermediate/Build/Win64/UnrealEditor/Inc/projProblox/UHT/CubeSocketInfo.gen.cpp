// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "projProblox/CubeSocketInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeSocketInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	PROJPROBLOX_API UClass* Z_Construct_UClass_APickupableMaster_NoRegister();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCubeSocketInfo();
	PROJPROBLOX_API UClass* Z_Construct_UClass_UCubeSocketInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_projProblox();
// End Cross Module References
	DEFINE_FUNCTION(UCubeSocketInfo::execGetAttachments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APickupableMaster*>*)Z_Param__Result=P_THIS->GetAttachments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCubeSocketInfo::execGetAttachmentActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetAttachmentActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCubeSocketInfo::execRemoveAttachment)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAttachment(Z_Param_socket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCubeSocketInfo::execAddAttachment)
	{
		P_GET_OBJECT(APickupableMaster,Z_Param_attachment);
		P_GET_PROPERTY(FNameProperty,Z_Param_socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAttachment(Z_Param_attachment,Z_Param_socket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCubeSocketInfo::execObjectInSocket)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ObjectInSocket(Z_Param_Out_socket);
		P_NATIVE_END;
	}
	void UCubeSocketInfo::StaticRegisterNativesUCubeSocketInfo()
	{
		UClass* Class = UCubeSocketInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAttachment", &UCubeSocketInfo::execAddAttachment },
			{ "GetAttachmentActors", &UCubeSocketInfo::execGetAttachmentActors },
			{ "GetAttachments", &UCubeSocketInfo::execGetAttachments },
			{ "ObjectInSocket", &UCubeSocketInfo::execObjectInSocket },
			{ "RemoveAttachment", &UCubeSocketInfo::execRemoveAttachment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics
	{
		struct CubeSocketInfo_eventAddAttachment_Parms
		{
			APickupableMaster* attachment;
			FName socket;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attachment;
		static const UECodeGen_Private::FNamePropertyParams NewProp_socket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::NewProp_attachment = { "attachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeSocketInfo_eventAddAttachment_Parms, attachment), Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::NewProp_socket = { "socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeSocketInfo_eventAddAttachment_Parms, socket), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::NewProp_attachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::NewProp_socket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeSocketInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeSocketInfo, nullptr, "AddAttachment", nullptr, nullptr, Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::CubeSocketInfo_eventAddAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::CubeSocketInfo_eventAddAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCubeSocketInfo_AddAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeSocketInfo_AddAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics
	{
		struct CubeSocketInfo_eventGetAttachmentActors_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeSocketInfo_eventGetAttachmentActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeSocketInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeSocketInfo, nullptr, "GetAttachmentActors", nullptr, nullptr, Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::CubeSocketInfo_eventGetAttachmentActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::CubeSocketInfo_eventGetAttachmentActors_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics
	{
		struct CubeSocketInfo_eventGetAttachments_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeSocketInfo_eventGetAttachments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeSocketInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeSocketInfo, nullptr, "GetAttachments", nullptr, nullptr, Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::CubeSocketInfo_eventGetAttachments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::CubeSocketInfo_eventGetAttachments_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCubeSocketInfo_GetAttachments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeSocketInfo_GetAttachments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics
	{
		struct CubeSocketInfo_eventObjectInSocket_Parms
		{
			FName socket;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_socket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_socket;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::NewProp_socket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::NewProp_socket = { "socket", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeSocketInfo_eventObjectInSocket_Parms, socket), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::NewProp_socket_MetaData), Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::NewProp_socket_MetaData) };
	void Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CubeSocketInfo_eventObjectInSocket_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CubeSocketInfo_eventObjectInSocket_Parms), &Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::NewProp_socket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeSocketInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeSocketInfo, nullptr, "ObjectInSocket", nullptr, nullptr, Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::CubeSocketInfo_eventObjectInSocket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::CubeSocketInfo_eventObjectInSocket_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics
	{
		struct CubeSocketInfo_eventRemoveAttachment_Parms
		{
			FName socket;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_socket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::NewProp_socket = { "socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CubeSocketInfo_eventRemoveAttachment_Parms, socket), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::NewProp_socket,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CubeSocketInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeSocketInfo, nullptr, "RemoveAttachment", nullptr, nullptr, Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::CubeSocketInfo_eventRemoveAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::CubeSocketInfo_eventRemoveAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeSocketInfo);
	UClass* Z_Construct_UClass_UCubeSocketInfo_NoRegister()
	{
		return UCubeSocketInfo::StaticClass();
	}
	struct Z_Construct_UClass_UCubeSocketInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_sockets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sockets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_sockets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_socketObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_socketObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_socketObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubeSocketInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_projProblox,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCubeSocketInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCubeSocketInfo_AddAttachment, "AddAttachment" }, // 193658722
		{ &Z_Construct_UFunction_UCubeSocketInfo_GetAttachmentActors, "GetAttachmentActors" }, // 328770665
		{ &Z_Construct_UFunction_UCubeSocketInfo_GetAttachments, "GetAttachments" }, // 3202279542
		{ &Z_Construct_UFunction_UCubeSocketInfo_ObjectInSocket, "ObjectInSocket" }, // 3975000146
		{ &Z_Construct_UFunction_UCubeSocketInfo_RemoveAttachment, "RemoveAttachment" }, // 4271172243
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeSocketInfo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CubeSocketInfo.h" },
		{ "ModuleRelativePath", "CubeSocketInfo.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets_Inner = { "sockets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets_MetaData[] = {
		{ "Category", "CubeSocketInfo" },
		{ "ModuleRelativePath", "CubeSocketInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets = { "sockets", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubeSocketInfo, sockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets_MetaData), Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects_Inner = { "socketObjects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APickupableMaster_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects_MetaData[] = {
		{ "ArrayClamp", "sockets" },
		{ "Category", "CubeSocketInfo" },
		{ "ModuleRelativePath", "CubeSocketInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects = { "socketObjects", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCubeSocketInfo, socketObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects_MetaData), Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubeSocketInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_sockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeSocketInfo_Statics::NewProp_socketObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubeSocketInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeSocketInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeSocketInfo_Statics::ClassParams = {
		&UCubeSocketInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCubeSocketInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCubeSocketInfo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCubeSocketInfo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCubeSocketInfo()
	{
		if (!Z_Registration_Info_UClass_UCubeSocketInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeSocketInfo.OuterSingleton, Z_Construct_UClass_UCubeSocketInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCubeSocketInfo.OuterSingleton;
	}
	template<> PROJPROBLOX_API UClass* StaticClass<UCubeSocketInfo>()
	{
		return UCubeSocketInfo::StaticClass();
	}
	UCubeSocketInfo::UCubeSocketInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeSocketInfo);
	UCubeSocketInfo::~UCubeSocketInfo() {}
	struct Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeSocketInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeSocketInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCubeSocketInfo, UCubeSocketInfo::StaticClass, TEXT("UCubeSocketInfo"), &Z_Registration_Info_UClass_UCubeSocketInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeSocketInfo), 1428527932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeSocketInfo_h_747882380(TEXT("/Script/projProblox"),
		Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeSocketInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Deany_Documents_GitHub_problox_projProblox_Source_projProblox_CubeSocketInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
