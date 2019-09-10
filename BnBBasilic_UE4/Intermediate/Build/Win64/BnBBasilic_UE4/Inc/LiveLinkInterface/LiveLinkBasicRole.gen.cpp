// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkBasicRole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBasicRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor();
// End Cross Module References
	void ULiveLinkBasicRole::StaticRegisterNativesULiveLinkBasicRole()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkBasicRole_NoRegister()
	{
		return ULiveLinkBasicRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkBasicRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkBasicRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBasicRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for no specific role data.\n */" },
		{ "DisplayName", "Basic Role" },
		{ "IncludePath", "Roles/LiveLinkBasicRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicRole.h" },
		{ "ToolTip", "Role associated for no specific role data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkBasicRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkBasicRole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkBasicRole_Statics::ClassParams = {
		&ULiveLinkBasicRole::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBasicRole_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkBasicRole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkBasicRole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkBasicRole, 3527303548);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkBasicRole>()
	{
		return ULiveLinkBasicRole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkBasicRole(Z_Construct_UClass_ULiveLinkBasicRole, &ULiveLinkBasicRole::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkBasicRole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkBasicRole);
	void ULiveLinkBasicFrameInterpolateProcessor::StaticRegisterNativesULiveLinkBasicFrameInterpolateProcessor()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_NoRegister()
	{
		return ULiveLinkBasicFrameInterpolateProcessor::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpolatePropertyValues_MetaData[];
#endif
		static void NewProp_bInterpolatePropertyValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpolatePropertyValues;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default blending method for any type of frames.\n * It will interpolate numerical properties that are mark with \"Interp\".\n */" },
		{ "DisplayName", "Base Interpolation" },
		{ "IncludePath", "Roles/LiveLinkBasicRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicRole.h" },
		{ "ToolTip", "Default blending method for any type of frames.\nIt will interpolate numerical properties that are mark with \"Interp\"." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::NewProp_bInterpolatePropertyValues_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicRole.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::NewProp_bInterpolatePropertyValues_SetBit(void* Obj)
	{
		((ULiveLinkBasicFrameInterpolateProcessor*)Obj)->bInterpolatePropertyValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::NewProp_bInterpolatePropertyValues = { "bInterpolatePropertyValues", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveLinkBasicFrameInterpolateProcessor), &Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::NewProp_bInterpolatePropertyValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::NewProp_bInterpolatePropertyValues_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::NewProp_bInterpolatePropertyValues_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::NewProp_bInterpolatePropertyValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkBasicFrameInterpolateProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::ClassParams = {
		&ULiveLinkBasicFrameInterpolateProcessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkBasicFrameInterpolateProcessor, 1552309774);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkBasicFrameInterpolateProcessor>()
	{
		return ULiveLinkBasicFrameInterpolateProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkBasicFrameInterpolateProcessor(Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor, &ULiveLinkBasicFrameInterpolateProcessor::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkBasicFrameInterpolateProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkBasicFrameInterpolateProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
