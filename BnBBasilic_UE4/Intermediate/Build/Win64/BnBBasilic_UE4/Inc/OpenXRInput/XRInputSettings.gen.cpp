// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRInput/Classes/XRInputSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRInputSettings() {}
// Cross Module References
	OPENXRINPUT_API UEnum* Z_Construct_UEnum_OpenXRInput_EXRControllerPose();
	UPackage* Z_Construct_UPackage__Script_OpenXRInput();
	OPENXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FXRInteractionProfileSettings();
	OPENXRINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FXRSuggestedBinding();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	OPENXRINPUT_API UClass* Z_Construct_UClass_UXRInputSettings_NoRegister();
	OPENXRINPUT_API UClass* Z_Construct_UClass_UXRInputSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EXRControllerPose_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenXRInput_EXRControllerPose, Z_Construct_UPackage__Script_OpenXRInput(), TEXT("EXRControllerPose"));
		}
		return Singleton;
	}
	template<> OPENXRINPUT_API UEnum* StaticEnum<EXRControllerPose>()
	{
		return EXRControllerPose_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EXRControllerPose(EXRControllerPose_StaticEnum, TEXT("/Script/OpenXRInput"), TEXT("EXRControllerPose"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenXRInput_EXRControllerPose_Hash() { return 4091474467U; }
	UEnum* Z_Construct_UEnum_OpenXRInput_EXRControllerPose()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EXRControllerPose"), 0, Get_Z_Construct_UEnum_OpenXRInput_EXRControllerPose_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GripPose", (int64)GripPose },
				{ "AimPose", (int64)AimPose },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AimPose.Name", "AimPose" },
				{ "GripPose.Name", "GripPose" },
				{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenXRInput,
				nullptr,
				"EXRControllerPose",
				"EXRControllerPose",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FXRInteractionProfileSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRInteractionProfileSettings, Z_Construct_UPackage__Script_OpenXRInput(), TEXT("XRInteractionProfileSettings"), sizeof(FXRInteractionProfileSettings), Get_Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Hash());
	}
	return Singleton;
}
template<> OPENXRINPUT_API UScriptStruct* StaticStruct<FXRInteractionProfileSettings>()
{
	return FXRInteractionProfileSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXRInteractionProfileSettings(FXRInteractionProfileSettings::StaticStruct, TEXT("/Script/OpenXRInput"), TEXT("XRInteractionProfileSettings"), false, nullptr, nullptr);
static struct FScriptStruct_OpenXRInput_StaticRegisterNativesFXRInteractionProfileSettings
{
	FScriptStruct_OpenXRInput_StaticRegisterNativesFXRInteractionProfileSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("XRInteractionProfileSettings")),new UScriptStruct::TCppStructOps<FXRInteractionProfileSettings>);
	}
} ScriptStruct_OpenXRInput_StaticRegisterNativesFXRInteractionProfileSettings;
	struct Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Supported_MetaData[];
#endif
		static void NewProp_Supported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Supported;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRInteractionProfileSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_ControllerPose_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Indicates whether the controller is held in a grip or aim pose. */" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
		{ "ToolTip", "Indicates whether the controller is held in a grip or aim pose." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_ControllerPose = { "ControllerPose", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRInteractionProfileSettings, ControllerPose), Z_Construct_UEnum_OpenXRInput_EXRControllerPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_ControllerPose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_ControllerPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_Supported_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Indicates whether this profile is supported by the application. */" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
		{ "ToolTip", "Indicates whether this profile is supported by the application." },
	};
#endif
	void Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_Supported_SetBit(void* Obj)
	{
		((FXRInteractionProfileSettings*)Obj)->Supported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_Supported = { "Supported", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FXRInteractionProfileSettings), &Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_Supported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_Supported_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_Supported_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_ControllerPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::NewProp_Supported,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRInput,
		nullptr,
		&NewStructOps,
		"XRInteractionProfileSettings",
		sizeof(FXRInteractionProfileSettings),
		alignof(FXRInteractionProfileSettings),
		Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXRInteractionProfileSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XRInteractionProfileSettings"), sizeof(FXRInteractionProfileSettings), Get_Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Hash() { return 188441758U; }
class UScriptStruct* FXRSuggestedBinding::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENXRINPUT_API uint32 Get_Z_Construct_UScriptStruct_FXRSuggestedBinding_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRSuggestedBinding, Z_Construct_UPackage__Script_OpenXRInput(), TEXT("XRSuggestedBinding"), sizeof(FXRSuggestedBinding), Get_Z_Construct_UScriptStruct_FXRSuggestedBinding_Hash());
	}
	return Singleton;
}
template<> OPENXRINPUT_API UScriptStruct* StaticStruct<FXRSuggestedBinding>()
{
	return FXRSuggestedBinding::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FXRSuggestedBinding(FXRSuggestedBinding::StaticStruct, TEXT("/Script/OpenXRInput"), TEXT("XRSuggestedBinding"), false, nullptr, nullptr);
static struct FScriptStruct_OpenXRInput_StaticRegisterNativesFXRSuggestedBinding
{
	FScriptStruct_OpenXRInput_StaticRegisterNativesFXRSuggestedBinding()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("XRSuggestedBinding")),new UScriptStruct::TCppStructOps<FXRSuggestedBinding>);
	}
} ScriptStruct_OpenXRInput_StaticRegisterNativesFXRSuggestedBinding;
	struct Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRSuggestedBinding>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRSuggestedBinding, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FXRSuggestedBinding, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::NewProp_Path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRInput,
		nullptr,
		&NewStructOps,
		"XRSuggestedBinding",
		sizeof(FXRSuggestedBinding),
		alignof(FXRSuggestedBinding),
		Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXRSuggestedBinding()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FXRSuggestedBinding_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenXRInput();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("XRSuggestedBinding"), sizeof(FXRSuggestedBinding), Get_Z_Construct_UScriptStruct_FXRSuggestedBinding_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FXRSuggestedBinding_Hash() { return 3269548531U; }
	void UXRInputSettings::StaticRegisterNativesUXRInputSettings()
	{
	}
	UClass* Z_Construct_UClass_UXRInputSettings_NoRegister()
	{
		return UXRInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UXRInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValveIndexBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValveIndexBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValveIndexBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValveIndexController_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ValveIndexController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OculusTouchBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OculusTouchBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OculusTouchBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OculusTouchController_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OculusTouchController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OculusGoBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OculusGoBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OculusGoBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OculusGoController_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OculusGoController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MixedRealityBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MixedRealityBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MixedRealityBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MixedRealityController_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MixedRealityController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViveProBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ViveProBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViveProBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViveProHeadset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViveProHeadset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViveBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ViveBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViveBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViveController_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViveController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DaydreamBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DaydreamBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DaydreamBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DaydreamController_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DaydreamController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SimpleBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimpleBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleController_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SimpleController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for OpenXR input.\n*/" },
		{ "IncludePath", "XRInputSettings.h" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
		{ "ToolTip", "Implements the settings for OpenXR input." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexBindings_MetaData[] = {
		{ "Category", "Suggested Bindings" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexBindings = { "ValveIndexBindings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, ValveIndexBindings), METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexBindings_Inner = { "ValveIndexBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXRSuggestedBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexController_MetaData[] = {
		{ "Category", "Interaction Profiles" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexController = { "ValveIndexController", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, ValveIndexController), Z_Construct_UScriptStruct_FXRInteractionProfileSettings, METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchBindings_MetaData[] = {
		{ "Category", "Suggested Bindings" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchBindings = { "OculusTouchBindings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, OculusTouchBindings), METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchBindings_Inner = { "OculusTouchBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXRSuggestedBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchController_MetaData[] = {
		{ "Category", "Interaction Profiles" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchController = { "OculusTouchController", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, OculusTouchController), Z_Construct_UScriptStruct_FXRInteractionProfileSettings, METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoBindings_MetaData[] = {
		{ "Category", "Suggested Bindings" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoBindings = { "OculusGoBindings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, OculusGoBindings), METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoBindings_Inner = { "OculusGoBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXRSuggestedBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoController_MetaData[] = {
		{ "Category", "Interaction Profiles" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoController = { "OculusGoController", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, OculusGoController), Z_Construct_UScriptStruct_FXRInteractionProfileSettings, METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityBindings_MetaData[] = {
		{ "Category", "Suggested Bindings" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityBindings = { "MixedRealityBindings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, MixedRealityBindings), METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityBindings_Inner = { "MixedRealityBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXRSuggestedBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityController_MetaData[] = {
		{ "Category", "Interaction Profiles" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityController = { "MixedRealityController", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, MixedRealityController), Z_Construct_UScriptStruct_FXRInteractionProfileSettings, METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProBindings_MetaData[] = {
		{ "Category", "Suggested Bindings" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProBindings = { "ViveProBindings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, ViveProBindings), METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProBindings_Inner = { "ViveProBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXRSuggestedBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProHeadset_MetaData[] = {
		{ "Category", "Interaction Profiles" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProHeadset = { "ViveProHeadset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, ViveProHeadset), Z_Construct_UScriptStruct_FXRInteractionProfileSettings, METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProHeadset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProHeadset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveBindings_MetaData[] = {
		{ "Category", "Suggested Bindings" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveBindings = { "ViveBindings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, ViveBindings), METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveBindings_Inner = { "ViveBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXRSuggestedBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveController_MetaData[] = {
		{ "Category", "Interaction Profiles" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveController = { "ViveController", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, ViveController), Z_Construct_UScriptStruct_FXRInteractionProfileSettings, METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamBindings_MetaData[] = {
		{ "Category", "Suggested Bindings" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamBindings = { "DaydreamBindings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, DaydreamBindings), METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamBindings_Inner = { "DaydreamBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXRSuggestedBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamController_MetaData[] = {
		{ "Category", "Interaction Profiles" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamController = { "DaydreamController", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, DaydreamController), Z_Construct_UScriptStruct_FXRInteractionProfileSettings, METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleBindings_MetaData[] = {
		{ "Category", "Suggested Bindings" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleBindings = { "SimpleBindings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, SimpleBindings), METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleBindings_Inner = { "SimpleBindings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXRSuggestedBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleController_MetaData[] = {
		{ "Category", "Interaction Profiles" },
		{ "ModuleRelativePath", "Classes/XRInputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleController = { "SimpleController", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXRInputSettings, SimpleController), Z_Construct_UScriptStruct_FXRInteractionProfileSettings, METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRInputSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ValveIndexController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusTouchController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_OculusGoController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_MixedRealityController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveProHeadset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_ViveController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_DaydreamController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRInputSettings_Statics::NewProp_SimpleController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRInputSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXRInputSettings_Statics::ClassParams = {
		&UXRInputSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXRInputSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UXRInputSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UXRInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRInputSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXRInputSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXRInputSettings, 2326420600);
	template<> OPENXRINPUT_API UClass* StaticClass<UXRInputSettings>()
	{
		return UXRInputSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXRInputSettings(Z_Construct_UClass_UXRInputSettings, &UXRInputSettings::StaticClass, TEXT("/Script/OpenXRInput"), TEXT("UXRInputSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRInputSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
