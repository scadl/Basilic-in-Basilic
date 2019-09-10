// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkAnimationVirtualSubject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationVirtualSubject() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkAnimationVirtualSubject::StaticRegisterNativesULiveLinkAnimationVirtualSubject()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_NoRegister()
	{
		return ULiveLinkAnimationVirtualSubject::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkVirtualSubject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A Skeleton virtual subject is an assembly of different subjects supporting the animation role\n" },
		{ "DisplayName", "Animation Virtual Subject" },
		{ "IncludePath", "LiveLinkAnimationVirtualSubject.h" },
		{ "ModuleRelativePath", "Public/LiveLinkAnimationVirtualSubject.h" },
		{ "ToolTip", "A Skeleton virtual subject is an assembly of different subjects supporting the animation role" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationVirtualSubject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::ClassParams = {
		&ULiveLinkAnimationVirtualSubject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAnimationVirtualSubject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkAnimationVirtualSubject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkAnimationVirtualSubject, 4014636180);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkAnimationVirtualSubject>()
	{
		return ULiveLinkAnimationVirtualSubject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkAnimationVirtualSubject(Z_Construct_UClass_ULiveLinkAnimationVirtualSubject, &ULiveLinkAnimationVirtualSubject::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkAnimationVirtualSubject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationVirtualSubject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
