// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidMediaFactory/Public/AndroidMediaSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidMediaSettings() {}
// Cross Module References
	ANDROIDMEDIAFACTORY_API UClass* Z_Construct_UClass_UAndroidMediaSettings_NoRegister();
	ANDROIDMEDIAFACTORY_API UClass* Z_Construct_UClass_UAndroidMediaSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AndroidMediaFactory();
// End Cross Module References
	void UAndroidMediaSettings::StaticRegisterNativesUAndroidMediaSettings()
	{
	}
	UClass* Z_Construct_UClass_UAndroidMediaSettings_NoRegister()
	{
		return UAndroidMediaSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidMediaSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheableVideoSampleBuffers_MetaData[];
#endif
		static void NewProp_CacheableVideoSampleBuffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CacheableVideoSampleBuffers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidMediaSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidMediaFactory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidMediaSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the ImgMedia module.\n */" },
		{ "IncludePath", "AndroidMediaSettings.h" },
		{ "ModuleRelativePath", "Public/AndroidMediaSettings.h" },
		{ "ToolTip", "Settings for the ImgMedia module." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidMediaSettings_Statics::NewProp_CacheableVideoSampleBuffers_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** \n\x09 * Whether video samples should be cacheable (default = off).\n\x09 *\n\x09 * This setting only affects applications that are not compiled against the\n\x09 * Engine. In such applications, the video samples transfer their contents\n\x09 * via a frame buffer. By default, the same frame buffer is reused for every\n\x09 * sample to avoid buffer copies. Every time a new sample is generated, the\n\x09 * previously generated samples are invalidated.\n\x09 *\n\x09 * When enabling this option, video frame buffers are copied into instead of\n\x09 * referenced in video samples. This may be useful for applications that require\n\x09 * access to individual frames, but it may dramatically decrease performance.\n\x09 *\n\x09 * When compiling against the Engine, this setting has no effect as the frame\n\x09 * data is transferred via separate texture resource objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AndroidMediaSettings.h" },
		{ "ToolTip", "Whether video samples should be cacheable (default = off).\n\nThis setting only affects applications that are not compiled against the\nEngine. In such applications, the video samples transfer their contents\nvia a frame buffer. By default, the same frame buffer is reused for every\nsample to avoid buffer copies. Every time a new sample is generated, the\npreviously generated samples are invalidated.\n\nWhen enabling this option, video frame buffers are copied into instead of\nreferenced in video samples. This may be useful for applications that require\naccess to individual frames, but it may dramatically decrease performance.\n\nWhen compiling against the Engine, this setting has no effect as the frame\ndata is transferred via separate texture resource objects." },
	};
#endif
	void Z_Construct_UClass_UAndroidMediaSettings_Statics::NewProp_CacheableVideoSampleBuffers_SetBit(void* Obj)
	{
		((UAndroidMediaSettings*)Obj)->CacheableVideoSampleBuffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidMediaSettings_Statics::NewProp_CacheableVideoSampleBuffers = { "CacheableVideoSampleBuffers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAndroidMediaSettings), &Z_Construct_UClass_UAndroidMediaSettings_Statics::NewProp_CacheableVideoSampleBuffers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidMediaSettings_Statics::NewProp_CacheableVideoSampleBuffers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidMediaSettings_Statics::NewProp_CacheableVideoSampleBuffers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidMediaSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidMediaSettings_Statics::NewProp_CacheableVideoSampleBuffers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidMediaSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidMediaSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAndroidMediaSettings_Statics::ClassParams = {
		&UAndroidMediaSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidMediaSettings_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAndroidMediaSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidMediaSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAndroidMediaSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidMediaSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAndroidMediaSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndroidMediaSettings, 4208620836);
	template<> ANDROIDMEDIAFACTORY_API UClass* StaticClass<UAndroidMediaSettings>()
	{
		return UAndroidMediaSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidMediaSettings(Z_Construct_UClass_UAndroidMediaSettings, &UAndroidMediaSettings::StaticClass, TEXT("/Script/AndroidMediaFactory"), TEXT("UAndroidMediaSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidMediaSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
