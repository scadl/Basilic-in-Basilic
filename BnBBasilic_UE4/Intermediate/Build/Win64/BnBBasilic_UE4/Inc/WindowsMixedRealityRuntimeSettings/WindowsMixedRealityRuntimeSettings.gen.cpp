// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsMixedRealityRuntimeSettings/Classes/WindowsMixedRealityRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsMixedRealityRuntimeSettings() {}
// Cross Module References
	WINDOWSMIXEDREALITYRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_NoRegister();
	WINDOWSMIXEDREALITYRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WindowsMixedRealityRuntimeSettings();
// End Cross Module References
	void UWindowsMixedRealityRuntimeSettings::StaticRegisterNativesUWindowsMixedRealityRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_NoRegister()
	{
		return UWindowsMixedRealityRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoloLens1Remoting_MetaData[];
#endif
		static void NewProp_IsHoloLens1Remoting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoloLens1Remoting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBitrate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedUIntPropertyParams NewProp_MaxBitrate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteHoloLensIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoteHoloLensIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRemotingForEditor_MetaData[];
#endif
		static void NewProp_bEnableRemotingForEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRemotingForEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WindowsMixedRealityRuntimeSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the WindowsMixedReality runtime platform.\n */" },
		{ "IncludePath", "WindowsMixedRealityRuntimeSettings.h" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the WindowsMixedReality runtime platform." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_IsHoloLens1Remoting_MetaData[] = {
		{ "Category", "Holographic Remoting" },
		{ "DisplayName", "HoloLens 1 Remoting" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityRuntimeSettings.h" },
		{ "Tooltip", "If True remoting connect will assume the device being connected is a HL1, if False HL2 is assumed.  If you chose wrong remoting will fail to connect." },
	};
#endif
	void Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_IsHoloLens1Remoting_SetBit(void* Obj)
	{
		((UWindowsMixedRealityRuntimeSettings*)Obj)->IsHoloLens1Remoting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_IsHoloLens1Remoting = { "IsHoloLens1Remoting", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWindowsMixedRealityRuntimeSettings), &Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_IsHoloLens1Remoting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_IsHoloLens1Remoting_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_IsHoloLens1Remoting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_MaxBitrate_MetaData[] = {
		{ "Category", "Holographic Remoting" },
		{ "DisplayName", "Max network transfer rate (kb/s)" },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedUIntPropertyParams Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_MaxBitrate = { "MaxBitrate", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindowsMixedRealityRuntimeSettings, MaxBitrate), METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_MaxBitrate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_MaxBitrate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_RemoteHoloLensIP_MetaData[] = {
		{ "Category", "Holographic Remoting" },
		{ "Comment", "/** The IP of the HoloLens to remote to. */" },
		{ "DisplayName", "IP of HoloLens to remote to." },
		{ "EditCondition", "bEnableRemotingForEditor" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityRuntimeSettings.h" },
		{ "ToolTip", "The IP of the HoloLens to remote to." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_RemoteHoloLensIP = { "RemoteHoloLensIP", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindowsMixedRealityRuntimeSettings, RemoteHoloLensIP), METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_RemoteHoloLensIP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_RemoteHoloLensIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_MetaData[] = {
		{ "Category", "Holographic Remoting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable Remoting For Editor (Requires Restart)" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityRuntimeSettings.h" },
		{ "Tooltip", "If true WMR is a valid HMD even if none is connected so that one could connect via remoting.  Editor restart required." },
	};
#endif
	void Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_SetBit(void* Obj)
	{
		((UWindowsMixedRealityRuntimeSettings*)Obj)->bEnableRemotingForEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor = { "bEnableRemotingForEditor", nullptr, (EPropertyFlags)0x0010000000044001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWindowsMixedRealityRuntimeSettings), &Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_IsHoloLens1Remoting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_MaxBitrate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_RemoteHoloLensIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::NewProp_bEnableRemotingForEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsMixedRealityRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::ClassParams = {
		&UWindowsMixedRealityRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindowsMixedRealityRuntimeSettings, 2741394169);
	template<> WINDOWSMIXEDREALITYRUNTIMESETTINGS_API UClass* StaticClass<UWindowsMixedRealityRuntimeSettings>()
	{
		return UWindowsMixedRealityRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowsMixedRealityRuntimeSettings(Z_Construct_UClass_UWindowsMixedRealityRuntimeSettings, &UWindowsMixedRealityRuntimeSettings::StaticClass, TEXT("/Script/WindowsMixedRealityRuntimeSettings"), TEXT("UWindowsMixedRealityRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsMixedRealityRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
