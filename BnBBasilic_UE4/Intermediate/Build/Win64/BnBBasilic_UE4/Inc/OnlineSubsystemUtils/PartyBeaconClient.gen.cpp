// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/PartyBeaconClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyBeaconClient() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconClient_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse();
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPartyReservation();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest();
// End Cross Module References
	static UEnum* EClientRequestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EClientRequestType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EClientRequestType>()
	{
		return EClientRequestType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClientRequestType(EClientRequestType_StaticEnum, TEXT("/Script/OnlineSubsystemUtils"), TEXT("EClientRequestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Hash() { return 617204933U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClientRequestType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClientRequestType::NonePending", (int64)EClientRequestType::NonePending },
				{ "EClientRequestType::ExistingSessionReservation", (int64)EClientRequestType::ExistingSessionReservation },
				{ "EClientRequestType::ReservationUpdate", (int64)EClientRequestType::ReservationUpdate },
				{ "EClientRequestType::EmptyServerReservation", (int64)EClientRequestType::EmptyServerReservation },
				{ "EClientRequestType::Reconnect", (int64)EClientRequestType::Reconnect },
				{ "EClientRequestType::Abandon", (int64)EClientRequestType::Abandon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abandon.Comment", "/** Abandon the reservation beacon (game specific handling)*/" },
				{ "Abandon.Name", "EClientRequestType::Abandon" },
				{ "Abandon.ToolTip", "Abandon the reservation beacon (game specific handling)" },
				{ "Comment", "/**\n * Types of reservation requests that can be made by this beacon\n */" },
				{ "EmptyServerReservation.Comment", "/** Reservation to configure an empty server  */" },
				{ "EmptyServerReservation.Name", "EClientRequestType::EmptyServerReservation" },
				{ "EmptyServerReservation.ToolTip", "Reservation to configure an empty server" },
				{ "ExistingSessionReservation.Comment", "/** Make a reservation with an existing session */" },
				{ "ExistingSessionReservation.Name", "EClientRequestType::ExistingSessionReservation" },
				{ "ExistingSessionReservation.ToolTip", "Make a reservation with an existing session" },
				{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
				{ "NonePending.Comment", "/** None pending */" },
				{ "NonePending.Name", "EClientRequestType::NonePending" },
				{ "NonePending.ToolTip", "None pending" },
				{ "Reconnect.Comment", "/** Simple reconnect (checks for existing reservation) */" },
				{ "Reconnect.Name", "EClientRequestType::Reconnect" },
				{ "Reconnect.ToolTip", "Simple reconnect (checks for existing reservation)" },
				{ "ReservationUpdate.Comment", "/** Make an update to an existing reservation */" },
				{ "ReservationUpdate.Name", "EClientRequestType::ReservationUpdate" },
				{ "ReservationUpdate.ToolTip", "Make an update to an existing reservation" },
				{ "ToolTip", "Types of reservation requests that can be made by this beacon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
				nullptr,
				"EClientRequestType",
				"EClientRequestType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_APartyBeaconClient_ClientCancelReservationResponse = FName(TEXT("ClientCancelReservationResponse"));
	void APartyBeaconClient::ClientCancelReservationResponse(EPartyReservationResult::Type ReservationResponse)
	{
		PartyBeaconClient_eventClientCancelReservationResponse_Parms Parms;
		Parms.ReservationResponse=ReservationResponse;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientCancelReservationResponse),&Parms);
	}
	static FName NAME_APartyBeaconClient_ClientReservationResponse = FName(TEXT("ClientReservationResponse"));
	void APartyBeaconClient::ClientReservationResponse(EPartyReservationResult::Type ReservationResponse)
	{
		PartyBeaconClient_eventClientReservationResponse_Parms Parms;
		Parms.ReservationResponse=ReservationResponse;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientReservationResponse),&Parms);
	}
	static FName NAME_APartyBeaconClient_ClientSendReservationFull = FName(TEXT("ClientSendReservationFull"));
	void APartyBeaconClient::ClientSendReservationFull()
	{
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientSendReservationFull),NULL);
	}
	static FName NAME_APartyBeaconClient_ClientSendReservationUpdates = FName(TEXT("ClientSendReservationUpdates"));
	void APartyBeaconClient::ClientSendReservationUpdates(int32 NumRemainingReservations)
	{
		PartyBeaconClient_eventClientSendReservationUpdates_Parms Parms;
		Parms.NumRemainingReservations=NumRemainingReservations;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ClientSendReservationUpdates),&Parms);
	}
	static FName NAME_APartyBeaconClient_ServerCancelReservationRequest = FName(TEXT("ServerCancelReservationRequest"));
	void APartyBeaconClient::ServerCancelReservationRequest(FUniqueNetIdRepl const& PartyLeader)
	{
		PartyBeaconClient_eventServerCancelReservationRequest_Parms Parms;
		Parms.PartyLeader=PartyLeader;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerCancelReservationRequest),&Parms);
	}
	static FName NAME_APartyBeaconClient_ServerReservationRequest = FName(TEXT("ServerReservationRequest"));
	void APartyBeaconClient::ServerReservationRequest(const FString& SessionId, FPartyReservation const& Reservation)
	{
		PartyBeaconClient_eventServerReservationRequest_Parms Parms;
		Parms.SessionId=SessionId;
		Parms.Reservation=Reservation;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerReservationRequest),&Parms);
	}
	static FName NAME_APartyBeaconClient_ServerUpdateReservationRequest = FName(TEXT("ServerUpdateReservationRequest"));
	void APartyBeaconClient::ServerUpdateReservationRequest(const FString& SessionId, FPartyReservation const& ReservationUpdate)
	{
		PartyBeaconClient_eventServerUpdateReservationRequest_Parms Parms;
		Parms.SessionId=SessionId;
		Parms.ReservationUpdate=ReservationUpdate;
		ProcessEvent(FindFunctionChecked(NAME_APartyBeaconClient_ServerUpdateReservationRequest),&Parms);
	}
	void APartyBeaconClient::StaticRegisterNativesAPartyBeaconClient()
	{
		UClass* Class = APartyBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientCancelReservationResponse", &APartyBeaconClient::execClientCancelReservationResponse },
			{ "ClientReservationResponse", &APartyBeaconClient::execClientReservationResponse },
			{ "ClientSendReservationFull", &APartyBeaconClient::execClientSendReservationFull },
			{ "ClientSendReservationUpdates", &APartyBeaconClient::execClientSendReservationUpdates },
			{ "ServerCancelReservationRequest", &APartyBeaconClient::execServerCancelReservationRequest },
			{ "ServerReservationRequest", &APartyBeaconClient::execServerReservationRequest },
			{ "ServerUpdateReservationRequest", &APartyBeaconClient::execServerUpdateReservationRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReservationResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::NewProp_ReservationResponse = { "ReservationResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyBeaconClient_eventClientCancelReservationResponse_Parms, ReservationResponse), Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::NewProp_ReservationResponse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Response from the host session after making a cancellation request\n\x09 *\n\x09 * @param ReservationResponse response from server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session after making a cancellation request\n\n@param ReservationResponse response from server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientCancelReservationResponse", nullptr, nullptr, sizeof(PartyBeaconClient_eventClientCancelReservationResponse_Parms), Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReservationResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::NewProp_ReservationResponse = { "ReservationResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyBeaconClient_eventClientReservationResponse_Parms, ReservationResponse), Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::NewProp_ReservationResponse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Response from the host session after making a reservation request\n\x09 *\n\x09 * @param ReservationResponse response from server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session after making a reservation request\n\n@param ReservationResponse response from server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientReservationResponse", nullptr, nullptr, sizeof(PartyBeaconClient_eventClientReservationResponse_Parms), Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Response from the host session that the reservation is full */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session that the reservation is full" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientSendReservationFull", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumRemainingReservations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::NewProp_NumRemainingReservations = { "NumRemainingReservations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyBeaconClient_eventClientSendReservationUpdates_Parms, NumRemainingReservations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::NewProp_NumRemainingReservations,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Response from the host session that the reservation count has changed\n\x09 *\n\x09 * @param NumRemainingReservations number of slots remaining until a full session\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Response from the host session that the reservation count has changed\n\n@param NumRemainingReservations number of slots remaining until a full session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ClientSendReservationUpdates", nullptr, nullptr, sizeof(PartyBeaconClient_eventClientSendReservationUpdates_Parms), Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyLeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyLeader;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader = { "PartyLeader", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerCancelReservationRequest_Parms, PartyLeader), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::NewProp_PartyLeader,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server to cancel a pending or existing reservation\n\x09 *\n\x09 * @param PartyLeader id of the party leader for the reservation to cancel\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server to cancel a pending or existing reservation\n\n@param PartyLeader id of the party leader for the reservation to cancel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerCancelReservationRequest", nullptr, nullptr, sizeof(PartyBeaconClient_eventServerCancelReservationRequest_Parms), Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reservation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reservation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation = { "Reservation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerReservationRequest_Parms, Reservation), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerReservationRequest_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server about the reservation request being made\n\x09 *\n\x09 * @param SessionId expected session id on the other end (must match)\n\x09 * @param Reservation pending reservation request to make with server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server about the reservation request being made\n\n@param SessionId expected session id on the other end (must match)\n@param Reservation pending reservation request to make with server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerReservationRequest", nullptr, nullptr, sizeof(PartyBeaconClient_eventServerReservationRequest_Parms), Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservationUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReservationUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate = { "ReservationUpdate", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerUpdateReservationRequest_Parms, ReservationUpdate), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PartyBeaconClient_eventServerUpdateReservationRequest_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_ReservationUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::NewProp_SessionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server about the reservation update request being made\n\x09 *\n\x09 * @param SessionId expected session id on the other end (must match)\n\x09 * @param ReservationUpdate pending reservation request to make with server\n\x09 */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Tell the server about the reservation update request being made\n\n@param SessionId expected session id on the other end (must match)\n@param ReservationUpdate pending reservation request to make with server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APartyBeaconClient, nullptr, "ServerUpdateReservationRequest", nullptr, nullptr, sizeof(PartyBeaconClient_eventServerUpdateReservationRequest_Parms), Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APartyBeaconClient_NoRegister()
	{
		return APartyBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_APartyBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCancelReservation_MetaData[];
#endif
		static void NewProp_bCancelReservation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCancelReservation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingReservationSent_MetaData[];
#endif
		static void NewProp_bPendingReservationSent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingReservationSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequestType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequestType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingReservation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingReservation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestSessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APartyBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APartyBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientCancelReservationResponse, "ClientCancelReservationResponse" }, // 1424899979
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientReservationResponse, "ClientReservationResponse" }, // 3016080395
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationFull, "ClientSendReservationFull" }, // 2398794529
		{ &Z_Construct_UFunction_APartyBeaconClient_ClientSendReservationUpdates, "ClientSendReservationUpdates" }, // 791101776
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerCancelReservationRequest, "ServerCancelReservationRequest" }, // 414161076
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerReservationRequest, "ServerReservationRequest" }, // 1506573763
		{ &Z_Construct_UFunction_APartyBeaconClient_ServerUpdateReservationRequest, "ServerUpdateReservationRequest" }, // 2780600609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon client used for making reservations with an existing game session\n */" },
		{ "IncludePath", "PartyBeaconClient.h" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "A beacon client used for making reservations with an existing game session" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_MetaData[] = {
		{ "Comment", "/** Has the reservation request been canceled */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Has the reservation request been canceled" },
	};
#endif
	void Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_SetBit(void* Obj)
	{
		((APartyBeaconClient*)Obj)->bCancelReservation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation = { "bCancelReservation", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APartyBeaconClient), &Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_SetBit, METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_MetaData, ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_MetaData[] = {
		{ "Comment", "/** Has the reservation request been delivered */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Has the reservation request been delivered" },
	};
#endif
	void Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit(void* Obj)
	{
		((APartyBeaconClient*)Obj)->bPendingReservationSent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent = { "bPendingReservationSent", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APartyBeaconClient), &Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit, METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_MetaData[] = {
		{ "Comment", "/** Type of request currently being handled by this client beacon */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Type of request currently being handled by this client beacon" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType = { "RequestType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyBeaconClient, RequestType), Z_Construct_UEnum_OnlineSubsystemUtils_EClientRequestType, METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_MetaData, ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation_MetaData[] = {
		{ "Comment", "/** Pending reservation that will be sent upon connection with the intended host */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Pending reservation that will be sent upon connection with the intended host" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation = { "PendingReservation", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyBeaconClient, PendingReservation), Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation_MetaData, ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId_MetaData[] = {
		{ "Comment", "/** Session Id of the destination host */" },
		{ "ModuleRelativePath", "Public/PartyBeaconClient.h" },
		{ "ToolTip", "Session Id of the destination host" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId = { "DestSessionId", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APartyBeaconClient, DestSessionId), METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId_MetaData, ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartyBeaconClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bCancelReservation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_bPendingReservationSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_RequestType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_PendingReservation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyBeaconClient_Statics::NewProp_DestSessionId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APartyBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartyBeaconClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APartyBeaconClient_Statics::ClassParams = {
		&APartyBeaconClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APartyBeaconClient_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APartyBeaconClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APartyBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APartyBeaconClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APartyBeaconClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APartyBeaconClient, 2588119930);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<APartyBeaconClient>()
	{
		return APartyBeaconClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APartyBeaconClient(Z_Construct_UClass_APartyBeaconClient, &APartyBeaconClient::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("APartyBeaconClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APartyBeaconClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
