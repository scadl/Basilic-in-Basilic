// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSettings() {}
// Cross Module References
	LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkSettings_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
class UScriptStruct* FLiveLinkRoleProjectSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting, Z_Construct_UPackage__Script_LiveLink(), TEXT("LiveLinkRoleProjectSetting"), sizeof(FLiveLinkRoleProjectSetting), Get_Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Hash());
	}
	return Singleton;
}
template<> LIVELINK_API UScriptStruct* StaticStruct<FLiveLinkRoleProjectSetting>()
{
	return FLiveLinkRoleProjectSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLiveLinkRoleProjectSetting(FLiveLinkRoleProjectSetting::StaticStruct, TEXT("/Script/LiveLink"), TEXT("LiveLinkRoleProjectSetting"), false, nullptr, nullptr);
static struct FScriptStruct_LiveLink_StaticRegisterNativesFLiveLinkRoleProjectSetting
{
	FScriptStruct_LiveLink_StaticRegisterNativesFLiveLinkRoleProjectSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LiveLinkRoleProjectSetting")),new UScriptStruct::TCppStructOps<FLiveLinkRoleProjectSetting>);
	}
} ScriptStruct_LiveLink_StaticRegisterNativesFLiveLinkRoleProjectSetting;
	struct Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramePreProcessors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FramePreProcessors;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FramePreProcessors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameInterpolationProcessor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FrameInterpolationProcessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLinkRole.\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Settings for LiveLinkRole." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkRoleProjectSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The pre processors to use for the subject. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The pre processors to use for the subject." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors = { "FramePreProcessors", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, FramePreProcessors), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_Inner = { "FramePreProcessors", nullptr, (EPropertyFlags)0x0004000000004000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The interpolation to use for the subject. If null, no interpolation will be performed. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The interpolation to use for the subject. If null, no interpolation will be performed." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor = { "FrameInterpolationProcessor", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, FrameInterpolationProcessor), Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The settings class to use for the subject. If null, LiveLinkSubjectSettings will be used by default. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The settings class to use for the subject. If null, LiveLinkSubjectSettings will be used by default." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass = { "SettingClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, SettingClass), Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The role of the current setting. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The role of the current setting." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, Role), Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
		nullptr,
		&NewStructOps,
		"LiveLinkRoleProjectSetting",
		sizeof(FLiveLinkRoleProjectSetting),
		alignof(FLiveLinkRoleProjectSetting),
		Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LiveLinkRoleProjectSetting"), sizeof(FLiveLinkRoleProjectSetting), Get_Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Hash() { return 3063418752U; }
	void ULiveLinkSettings::StaticRegisterNativesULiveLinkSettings()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkSettings_NoRegister()
	{
		return ULiveLinkSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvalidColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValidColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeWithoutFrameToBeConsiderAsInvalid_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_TimeWithoutFrameToBeConsiderAsInvalid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageBusHeartbeatTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MessageBusHeartbeatTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageBusHeartbeatFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MessageBusHeartbeatFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageBusPingRequestFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MessageBusPingRequestFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetSaveDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PresetSaveDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRoleSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultRoleSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultRoleSettings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLink.\n */" },
		{ "IncludePath", "LiveLinkSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Settings for LiveLink." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor_MetaData[] = {
		{ "Category", "LiveLink|UI" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor = { "InvalidColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSettings, InvalidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor_MetaData[] = {
		{ "Category", "LiveLink|UI" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor = { "ValidColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSettings, ValidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid_MetaData[] = {
		{ "Category", "LiveLink|UI" },
		{ "Comment", "/**\n\x09 * A source may still exist but do not send frames for a subject.\n\x09 * Time before considering the subject as \"invalid\".\n\x09 * The subject still exist and can still be evaluated.\n\x09 * An invalid subject is shown as yellow in the LiveLink UI.\n\x09 */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "A source may still exist but do not send frames for a subject.\nTime before considering the subject as \"invalid\".\nThe subject still exist and can still be evaluated.\nAn invalid subject is shown as yellow in the LiveLink UI." },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid = { "TimeWithoutFrameToBeConsiderAsInvalid", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSettings, TimeWithoutFrameToBeConsiderAsInvalid), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** How long we should wait before a provider become unresponsive. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "How long we should wait before a provider become unresponsive." },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout = { "MessageBusHeartbeatTimeout", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSettings, MessageBusHeartbeatTimeout), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The refresh frequency of the heartbeat when a provider didn't send us an updated. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The refresh frequency of the heartbeat when a provider didn't send us an updated." },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency = { "MessageBusHeartbeatFrequency", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSettings, MessageBusHeartbeatFrequency), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The refresh frequency of the list of message bus provider (when discovery is requested). */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The refresh frequency of the list of message bus provider (when discovery is requested)." },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency = { "MessageBusPingRequestFrequency", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSettings, MessageBusPingRequestFrequency), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The default location in which to save take presets */" },
		{ "DisplayName", "Preset Save Location" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The default location in which to save take presets" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir = { "PresetSaveDir", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSettings, PresetSaveDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings = { "DefaultRoleSettings", nullptr, (EPropertyFlags)0x0020080000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkSettings, DefaultRoleSettings), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_Inner = { "DefaultRoleSettings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSettings_Statics::ClassParams = {
		&ULiveLinkSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkSettings, 2220051477);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkSettings>()
	{
		return ULiveLinkSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkSettings(Z_Construct_UClass_ULiveLinkSettings, &ULiveLinkSettings::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
