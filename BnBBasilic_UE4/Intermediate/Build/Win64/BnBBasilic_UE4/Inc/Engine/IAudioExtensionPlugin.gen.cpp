// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/IAudioExtensionPlugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioExtensionPlugin() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulation();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundModulationPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundModulationPluginSourceSettingsBase();
	ENGINE_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase();
// End Cross Module References
class UScriptStruct* FSoundModulation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundModulation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulation, Z_Construct_UPackage__Script_Engine(), TEXT("SoundModulation"), sizeof(FSoundModulation), Get_Z_Construct_UScriptStruct_FSoundModulation_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundModulation>()
{
	return FSoundModulation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundModulation(FSoundModulation::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundModulation"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundModulation
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundModulation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundModulation")),new UScriptStruct::TCppStructOps<FSoundModulation>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundModulation;
	struct Z_Construct_UScriptStruct_FSoundModulation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Collection of settings available on sound objects */" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "Collection of settings available on sound objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundModulation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulation_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundModulation_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundModulation, Settings), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulation_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulation_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundModulation_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundModulationPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundModulation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulation_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulation_Statics::NewProp_Settings_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundModulation",
		sizeof(FSoundModulation),
		alignof(FSoundModulation),
		Z_Construct_UScriptStruct_FSoundModulation_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundModulation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundModulation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundModulation"), sizeof(FSoundModulation), Get_Z_Construct_UScriptStruct_FSoundModulation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundModulation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundModulation_Hash() { return 1348549572U; }
	void USpatializationPluginSourceSettingsBase::StaticRegisterNativesUSpatializationPluginSourceSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister()
	{
		return USpatializationPluginSourceSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This is a class which should be overridden to provide users with settings to use for individual sounds */" },
		{ "IncludePath", "IAudioExtensionPlugin.h" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatializationPluginSourceSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::ClassParams = {
		&USpatializationPluginSourceSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatializationPluginSourceSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatializationPluginSourceSettingsBase, 785271858);
	template<> ENGINE_API UClass* StaticClass<USpatializationPluginSourceSettingsBase>()
	{
		return USpatializationPluginSourceSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatializationPluginSourceSettingsBase(Z_Construct_UClass_USpatializationPluginSourceSettingsBase, &USpatializationPluginSourceSettingsBase::StaticClass, TEXT("/Script/Engine"), TEXT("USpatializationPluginSourceSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatializationPluginSourceSettingsBase);
	void UOcclusionPluginSourceSettingsBase::StaticRegisterNativesUOcclusionPluginSourceSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister()
	{
		return UOcclusionPluginSourceSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This is a class which should be overridden to provide users with settings to use for individual sounds */" },
		{ "IncludePath", "IAudioExtensionPlugin.h" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOcclusionPluginSourceSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::ClassParams = {
		&UOcclusionPluginSourceSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOcclusionPluginSourceSettingsBase, 2605411641);
	template<> ENGINE_API UClass* StaticClass<UOcclusionPluginSourceSettingsBase>()
	{
		return UOcclusionPluginSourceSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOcclusionPluginSourceSettingsBase(Z_Construct_UClass_UOcclusionPluginSourceSettingsBase, &UOcclusionPluginSourceSettingsBase::StaticClass, TEXT("/Script/Engine"), TEXT("UOcclusionPluginSourceSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOcclusionPluginSourceSettingsBase);
	void USoundModulationPluginSourceSettingsBase::StaticRegisterNativesUSoundModulationPluginSourceSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_USoundModulationPluginSourceSettingsBase_NoRegister()
	{
		return USoundModulationPluginSourceSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationPluginSourceSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationPluginSourceSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationPluginSourceSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Override to provide users with modulation settings custom to individual sounds */" },
		{ "IncludePath", "IAudioExtensionPlugin.h" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "Override to provide users with modulation settings custom to individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationPluginSourceSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationPluginSourceSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationPluginSourceSettingsBase_Statics::ClassParams = {
		&USoundModulationPluginSourceSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationPluginSourceSettingsBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundModulationPluginSourceSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationPluginSourceSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundModulationPluginSourceSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundModulationPluginSourceSettingsBase, 3739832938);
	template<> ENGINE_API UClass* StaticClass<USoundModulationPluginSourceSettingsBase>()
	{
		return USoundModulationPluginSourceSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundModulationPluginSourceSettingsBase(Z_Construct_UClass_USoundModulationPluginSourceSettingsBase, &USoundModulationPluginSourceSettingsBase::StaticClass, TEXT("/Script/Engine"), TEXT("USoundModulationPluginSourceSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationPluginSourceSettingsBase);
	void UReverbPluginSourceSettingsBase::StaticRegisterNativesUReverbPluginSourceSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister()
	{
		return UReverbPluginSourceSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** This is a class which should be overridden to provide users with settings to use for individual sounds */" },
		{ "IncludePath", "IAudioExtensionPlugin.h" },
		{ "ModuleRelativePath", "Public/IAudioExtensionPlugin.h" },
		{ "ToolTip", "This is a class which should be overridden to provide users with settings to use for individual sounds" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReverbPluginSourceSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::ClassParams = {
		&UReverbPluginSourceSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReverbPluginSourceSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReverbPluginSourceSettingsBase, 2499276306);
	template<> ENGINE_API UClass* StaticClass<UReverbPluginSourceSettingsBase>()
	{
		return UReverbPluginSourceSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReverbPluginSourceSettingsBase(Z_Construct_UClass_UReverbPluginSourceSettingsBase, &UReverbPluginSourceSettingsBase::StaticClass, TEXT("/Script/Engine"), TEXT("UReverbPluginSourceSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReverbPluginSourceSettingsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
