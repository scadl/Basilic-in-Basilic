// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponents/Public/Controllers/LiveLinkLightController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkLightController() {}
// Cross Module References
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkLightController_NoRegister();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkLightController();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase();
	UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
	LIVELINKCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformControllerData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
	void ULiveLinkLightController::StaticRegisterNativesULiveLinkLightController()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkLightController_NoRegister()
	{
		return ULiveLinkLightController::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkLightController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentToControl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkLightController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkLightController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Controller that uses LiveLink light data to drive a light component. \n * UPointLightComponent and USpotLightComponent are supported for specific properties\n */" },
		{ "IncludePath", "Controllers/LiveLinkLightController.h" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkLightController.h" },
		{ "ToolTip", "Controller that uses LiveLink light data to drive a light component.\nUPointLightComponent and USpotLightComponent are supported for specific properties" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_TransformData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkLightController.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_TransformData = { "TransformData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkLightController, TransformData), Z_Construct_UScriptStruct_FLiveLinkTransformControllerData, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_TransformData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_TransformData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_ComponentToControl_MetaData[] = {
		{ "AllowedClasses", "LightComponent" },
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Controllers/LiveLinkLightController.h" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_ComponentToControl = { "ComponentToControl", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkLightController, ComponentToControl), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_ComponentToControl_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_ComponentToControl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkLightController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_TransformData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkLightController_Statics::NewProp_ComponentToControl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkLightController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkLightController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkLightController_Statics::ClassParams = {
		&ULiveLinkLightController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkLightController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLightController_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkLightController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkLightController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkLightController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkLightController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkLightController, 807599984);
	template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkLightController>()
	{
		return ULiveLinkLightController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkLightController(Z_Construct_UClass_ULiveLinkLightController, &ULiveLinkLightController::StaticClass, TEXT("/Script/LiveLinkComponents"), TEXT("ULiveLinkLightController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkLightController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
