// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsMixedRealityHandTracking/Private/LiveLinkWindowsMixedRealityHandTrackingSourceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkWindowsMixedRealityHandTrackingSourceFactory() {}
// Cross Module References
	WINDOWSMIXEDREALITYHANDTRACKING_API UClass* Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory_NoRegister();
	WINDOWSMIXEDREALITYHANDTRACKING_API UClass* Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking();
// End Cross Module References
	void ULiveLinkWindowsMixedRealityHandTrackingSourceFactory::StaticRegisterNativesULiveLinkWindowsMixedRealityHandTrackingSourceFactory()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory_NoRegister()
	{
		return ULiveLinkWindowsMixedRealityHandTrackingSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkWindowsMixedRealityHandTrackingSourceFactory.h" },
		{ "ModuleRelativePath", "Private/LiveLinkWindowsMixedRealityHandTrackingSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkWindowsMixedRealityHandTrackingSourceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory_Statics::ClassParams = {
		&ULiveLinkWindowsMixedRealityHandTrackingSourceFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkWindowsMixedRealityHandTrackingSourceFactory, 2934362941);
	template<> WINDOWSMIXEDREALITYHANDTRACKING_API UClass* StaticClass<ULiveLinkWindowsMixedRealityHandTrackingSourceFactory>()
	{
		return ULiveLinkWindowsMixedRealityHandTrackingSourceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory(Z_Construct_UClass_ULiveLinkWindowsMixedRealityHandTrackingSourceFactory, &ULiveLinkWindowsMixedRealityHandTrackingSourceFactory::StaticClass, TEXT("/Script/WindowsMixedRealityHandTracking"), TEXT("ULiveLinkWindowsMixedRealityHandTrackingSourceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkWindowsMixedRealityHandTrackingSourceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
