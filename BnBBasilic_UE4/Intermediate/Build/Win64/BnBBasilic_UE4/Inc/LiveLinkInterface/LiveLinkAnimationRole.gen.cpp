// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkAnimationRole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator();
// End Cross Module References
	void ULiveLinkAnimationRole::StaticRegisterNativesULiveLinkAnimationRole()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister()
	{
		return ULiveLinkAnimationRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAnimationRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAnimationRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Animation / Skeleton data.\n */" },
		{ "DisplayName", "Animation Role" },
		{ "IncludePath", "Roles/LiveLinkAnimationRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationRole.h" },
		{ "ToolTip", "Role associated for Animation / Skeleton data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAnimationRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationRole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationRole_Statics::ClassParams = {
		&ULiveLinkAnimationRole::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationRole_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAnimationRole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkAnimationRole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkAnimationRole, 4284479846);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkAnimationRole>()
	{
		return ULiveLinkAnimationRole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkAnimationRole(Z_Construct_UClass_ULiveLinkAnimationRole, &ULiveLinkAnimationRole::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkAnimationRole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationRole);
	void ULiveLinkAnimationFrameInterpolateProcessor::StaticRegisterNativesULiveLinkAnimationFrameInterpolateProcessor()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor_NoRegister()
	{
		return ULiveLinkAnimationFrameInterpolateProcessor::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicFrameInterpolateProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default blending method for animation frames\n */" },
		{ "DisplayName", "Animation Interpolation" },
		{ "IncludePath", "Roles/LiveLinkAnimationRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationRole.h" },
		{ "ToolTip", "Default blending method for animation frames" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationFrameInterpolateProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor_Statics::ClassParams = {
		&ULiveLinkAnimationFrameInterpolateProcessor::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkAnimationFrameInterpolateProcessor, 994811629);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkAnimationFrameInterpolateProcessor>()
	{
		return ULiveLinkAnimationFrameInterpolateProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkAnimationFrameInterpolateProcessor(Z_Construct_UClass_ULiveLinkAnimationFrameInterpolateProcessor, &ULiveLinkAnimationFrameInterpolateProcessor::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkAnimationFrameInterpolateProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationFrameInterpolateProcessor);
	void ULiveLinkAnimationRoleToTransform::StaticRegisterNativesULiveLinkAnimationRoleToTransform()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_NoRegister()
	{
		return ULiveLinkAnimationRoleToTransform::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkFrameTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic object to translate data from one role to another\n */" },
		{ "DisplayName", "Animation To Transform" },
		{ "IncludePath", "Roles/LiveLinkAnimationRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationRole.h" },
		{ "ToolTip", "Basic object to translate data from one role to another" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkAnimationRole.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkAnimationRoleToTransform, BoneName), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationRoleToTransform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::ClassParams = {
		&ULiveLinkAnimationRoleToTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkAnimationRoleToTransform, 2165982487);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkAnimationRoleToTransform>()
	{
		return ULiveLinkAnimationRoleToTransform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkAnimationRoleToTransform(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform, &ULiveLinkAnimationRoleToTransform::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkAnimationRoleToTransform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationRoleToTransform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
