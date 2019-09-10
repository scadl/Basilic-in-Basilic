// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UdpMessaging/Private/Shared/UdpMessagingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdpMessagingSettings() {}
// Cross Module References
	UDPMESSAGING_API UClass* Z_Construct_UClass_UUdpMessagingSettings_NoRegister();
	UDPMESSAGING_API UClass* Z_Construct_UClass_UUdpMessagingSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UdpMessaging();
// End Cross Module References
	void UUdpMessagingSettings::StaticRegisterNativesUUdpMessagingSettings()
	{
	}
	UClass* Z_Construct_UClass_UUdpMessagingSettings_NoRegister()
	{
		return UUdpMessagingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUdpMessagingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteTunnelEndpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoteTunnelEndpoints;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoteTunnelEndpoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TunnelMulticastEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TunnelMulticastEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TunnelUnicastEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TunnelUnicastEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableTunnel_MetaData[];
#endif
		static void NewProp_EnableTunnel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableTunnel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticEndpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticEndpoints;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StaticEndpoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MulticastTimeToLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MulticastTimeToLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MulticastEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MulticastEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnicastEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnicastEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableTransport_MetaData[];
#endif
		static void NewProp_EnableTransport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableTransport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUdpMessagingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UdpMessaging,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shared/UdpMessagingSettings.h" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The IP endpoints of remote tunnel nodes.\n\x09 *\n\x09 * Use this setting to connect to remote tunnel services.\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoints of remote tunnel nodes.\n\nUse this setting to connect to remote tunnel services.\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints = { "RemoteTunnelEndpoints", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, RemoteTunnelEndpoints), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_Inner = { "RemoteTunnelEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The IP endpoint to send multicast packets to.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * The multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to send multicast packets to.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\nThe multicast IP address must be in the range 224.0.0.0 to 239.255.255.255." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint = { "TunnelMulticastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, TunnelMulticastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The local IP endpoint to listen to and send packets from.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The local IP endpoint to listen to and send packets from.\n\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint = { "TunnelUnicastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, TunnelUnicastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/** Whether the UDP tunnel is enabled. */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether the UDP tunnel is enabled." },
	};
#endif
	void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_SetBit(void* Obj)
	{
		((UUdpMessagingSettings*)Obj)->EnableTunnel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel = { "EnableTunnel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoints of static devices.\n\x09 *\n\x09 * Use this setting to list devices on other subnets, such as mobile phones on a WiFi network.\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoints of static devices.\n\nUse this setting to list devices on other subnets, such as mobile phones on a WiFi network.\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints = { "StaticEndpoints", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, StaticEndpoints), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_Inner = { "StaticEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** The time-to-live (TTL) for sent multicast packets. */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The time-to-live (TTL) for sent multicast packets." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive = { "MulticastTimeToLive", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, MulticastTimeToLive), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoint to send multicast packets to.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * The multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_MULTICAST=`\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to send multicast packets to.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\nThe multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_MULTICAST=`" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint = { "MulticastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, MulticastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoint to listen to and send packets from.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * 0.0.0.0:0 will bind to the default network adapter on Windows,\n\x09 * and all available network adapters on other operating systems.\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_UNICAST=`\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to listen to and send packets from.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\n0.0.0.0:0 will bind to the default network adapter on Windows,\nand all available network adapters on other operating systems.\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_UNICAST=`" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint = { "UnicastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, UnicastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Whether the UDP transport channel is enabled.\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_ENABLE=`\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether the UDP transport channel is enabled.\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_ENABLE=`" },
	};
#endif
	void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_SetBit(void* Obj)
	{
		((UUdpMessagingSettings*)Obj)->EnableTransport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport = { "EnableTransport", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUdpMessagingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUdpMessagingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUdpMessagingSettings_Statics::ClassParams = {
		&UUdpMessagingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUdpMessagingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUdpMessagingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUdpMessagingSettings, 2408136976);
	template<> UDPMESSAGING_API UClass* StaticClass<UUdpMessagingSettings>()
	{
		return UUdpMessagingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUdpMessagingSettings(Z_Construct_UClass_UUdpMessagingSettings, &UUdpMessagingSettings::StaticClass, TEXT("/Script/UdpMessaging"), TEXT("UUdpMessagingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUdpMessagingSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
