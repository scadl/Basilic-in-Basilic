// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoloLensAR/Private/HoloLensCameraImageTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoloLensCameraImageTexture() {}
// Cross Module References
	HOLOLENSAR_API UClass* Z_Construct_UClass_UHoloLensCameraImageTexture_NoRegister();
	HOLOLENSAR_API UClass* Z_Construct_UClass_UHoloLensCameraImageTexture();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraImage();
	UPackage* Z_Construct_UPackage__Script_HoloLensAR();
// End Cross Module References
	void UHoloLensCameraImageTexture::StaticRegisterNativesUHoloLensCameraImageTexture()
	{
	}
	UClass* Z_Construct_UClass_UHoloLensCameraImageTexture_NoRegister()
	{
		return UHoloLensCameraImageTexture::StaticClass();
	}
	struct Z_Construct_UClass_UHoloLensCameraImageTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoloLensCameraImageTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTextureCameraImage,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloLensAR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloLensCameraImageTexture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides access to the camera's image data as a texture\n */" },
		{ "IncludePath", "HoloLensCameraImageTexture.h" },
		{ "ModuleRelativePath", "Private/HoloLensCameraImageTexture.h" },
		{ "ToolTip", "Provides access to the camera's image data as a texture" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoloLensCameraImageTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoloLensCameraImageTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoloLensCameraImageTexture_Statics::ClassParams = {
		&UHoloLensCameraImageTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoloLensCameraImageTexture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHoloLensCameraImageTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoloLensCameraImageTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoloLensCameraImageTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoloLensCameraImageTexture, 3502876968);
	template<> HOLOLENSAR_API UClass* StaticClass<UHoloLensCameraImageTexture>()
	{
		return UHoloLensCameraImageTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoloLensCameraImageTexture(Z_Construct_UClass_UHoloLensCameraImageTexture, &UHoloLensCameraImageTexture::StaticClass, TEXT("/Script/HoloLensAR"), TEXT("UHoloLensCameraImageTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoloLensCameraImageTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
