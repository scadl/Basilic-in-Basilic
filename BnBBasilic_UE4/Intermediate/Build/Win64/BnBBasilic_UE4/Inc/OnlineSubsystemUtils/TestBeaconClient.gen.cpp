// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/TestBeaconClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBeaconClient() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ATestBeaconClient_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ATestBeaconClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UFunction_ATestBeaconClient_ClientPing();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UFunction_ATestBeaconClient_ServerPong();
// End Cross Module References
	static FName NAME_ATestBeaconClient_ClientPing = FName(TEXT("ClientPing"));
	void ATestBeaconClient::ClientPing()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATestBeaconClient_ClientPing),NULL);
	}
	static FName NAME_ATestBeaconClient_ServerPong = FName(TEXT("ServerPong"));
	void ATestBeaconClient::ServerPong()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATestBeaconClient_ServerPong),NULL);
	}
	void ATestBeaconClient::StaticRegisterNativesATestBeaconClient()
	{
		UClass* Class = ATestBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientPing", &ATestBeaconClient::execClientPing },
			{ "ServerPong", &ATestBeaconClient::execServerPong },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Send a ping RPC to the client */" },
		{ "ModuleRelativePath", "Classes/TestBeaconClient.h" },
		{ "ToolTip", "Send a ping RPC to the client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestBeaconClient, nullptr, "ClientPing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestBeaconClient_ClientPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Send a pong RPC to the host */" },
		{ "ModuleRelativePath", "Classes/TestBeaconClient.h" },
		{ "ToolTip", "Send a pong RPC to the host" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestBeaconClient, nullptr, "ServerPong", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestBeaconClient_ServerPong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATestBeaconClient_NoRegister()
	{
		return ATestBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_ATestBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestBeaconClient_ClientPing, "ClientPing" }, // 2326986706
		{ &Z_Construct_UFunction_ATestBeaconClient_ServerPong, "ServerPong" }, // 1802368332
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon client used for making reservations with an existing game session\n */" },
		{ "IncludePath", "TestBeaconClient.h" },
		{ "ModuleRelativePath", "Classes/TestBeaconClient.h" },
		{ "ToolTip", "A beacon client used for making reservations with an existing game session" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestBeaconClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestBeaconClient_Statics::ClassParams = {
		&ATestBeaconClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestBeaconClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestBeaconClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestBeaconClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestBeaconClient, 852054728);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ATestBeaconClient>()
	{
		return ATestBeaconClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestBeaconClient(Z_Construct_UClass_ATestBeaconClient, &ATestBeaconClient::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("ATestBeaconClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestBeaconClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
