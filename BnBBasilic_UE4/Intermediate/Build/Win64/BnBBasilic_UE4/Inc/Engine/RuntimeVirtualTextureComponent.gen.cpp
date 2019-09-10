// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/RuntimeVirtualTextureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
// End Cross Module References
	void URuntimeVirtualTextureComponent::StaticRegisterNativesURuntimeVirtualTextureComponent()
	{
	}
	UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister()
	{
		return URuntimeVirtualTextureComponent::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsSourceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundsSourceActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component used to place a URuntimeVirtualTexture in the world. */" },
		{ "HideCategories", "Activation Collision Cooking Mobility LOD Object Physics Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "Components/RuntimeVirtualTextureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Component used to place a URuntimeVirtualTexture in the world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsSourceActor_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Actor to copy the bounds from to set up the transform. */" },
		{ "DisplayName", "Source Actor" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Actor to copy the bounds from to set up the transform." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsSourceActor = { "BoundsSourceActor", nullptr, (EPropertyFlags)0x0040000000200001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, BoundsSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsSourceActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsSourceActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** The virtual texture object to use. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "The virtual texture object to use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture = { "VirtualTexture", nullptr, (EPropertyFlags)0x0040000000200001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTextureComponent, VirtualTexture), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsSourceActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTextureComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::ClassParams = {
		&URuntimeVirtualTextureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeVirtualTextureComponent, 4032010136);
	template<> ENGINE_API UClass* StaticClass<URuntimeVirtualTextureComponent>()
	{
		return URuntimeVirtualTextureComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeVirtualTextureComponent(Z_Construct_UClass_URuntimeVirtualTextureComponent, &URuntimeVirtualTextureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("URuntimeVirtualTextureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTextureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
