// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VT/RuntimeVirtualTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType();
// End Cross Module References
	void URuntimeVirtualTexture::StaticRegisterNativesURuntimeVirtualTexture()
	{
	}
	UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister()
	{
		return URuntimeVirtualTexture::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeVirtualTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveLowMips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemoveLowMips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileBorderSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileBorderSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompressTextures_MetaData[];
#endif
		static void NewProp_bCompressTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompressTextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaterialType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeVirtualTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Runtime virtual texture UObject */" },
		{ "IncludePath", "VT/RuntimeVirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Runtime virtual texture UObject" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Enable usage of the virtual texture. This option is intended only for debugging and visualization of the scene without virtual textures. It isn't serialized. */" },
		{ "DisplayName", "Enable virtual texture" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Enable usage of the virtual texture. This option is intended only for debugging and visualization of the scene without virtual textures. It isn't serialized." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((URuntimeVirtualTexture*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0020080000002015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTexture), &Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bEnable_MetaData, ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_RemoveLowMips_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** Number of low mips to cut from the virtual texture. This can reduce peak virtual texture update cost but will also increase the probability of mip shimmering. */" },
		{ "DisplayName", "Number of low mips to remove from the virtual texture" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Number of low mips to cut from the virtual texture. This can reduce peak virtual texture update cost but will also increase the probability of mip shimmering." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_RemoveLowMips = { "RemoveLowMips", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTexture, RemoveLowMips), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_RemoveLowMips_MetaData, ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_RemoveLowMips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileBorderSize_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** Page tile border size divided by 2 (Actual values increase in multiples of 2). */" },
		{ "DisplayName", "Border padding for each virtual texture tile" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Page tile border size divided by 2 (Actual values increase in multiples of 2)." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileBorderSize = { "TileBorderSize", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTexture, TileBorderSize), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileBorderSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileBorderSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** Page tile size. (Actual values increase in powers of 2) */" },
		{ "DisplayName", "Size of each virtual texture tile" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Page tile size. (Actual values increase in powers of 2)" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTexture, TileSize), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Size" },
		{ "Comment", "/** Size of virtual texture along the largest axis. (Actual values increase in powers of 2) */" },
		{ "DisplayName", "Size of the virtual texture" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Size of virtual texture along the largest axis. (Actual values increase in powers of 2)" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTexture, Size), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Enable storing the virtual texture in GPU supported compression formats. Using uncompressed is only recommended for debugging and quality comparisons. */" },
		{ "DisplayName", "Enable BC texture compression" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Enable storing the virtual texture in GPU supported compression formats. Using uncompressed is only recommended for debugging and quality comparisons." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures_SetBit(void* Obj)
	{
		((URuntimeVirtualTexture*)Obj)->bCompressTextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures = { "bCompressTextures", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeVirtualTexture), &Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures_MetaData, ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Contents of virtual texture. */" },
		{ "DisplayName", "Virtual texture content" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Contents of virtual texture." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0020090000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URuntimeVirtualTexture, MaterialType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType_MetaData, ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeVirtualTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_RemoveLowMips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileBorderSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeVirtualTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::ClassParams = {
		&URuntimeVirtualTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URuntimeVirtualTexture_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeVirtualTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeVirtualTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeVirtualTexture, 3198120435);
	template<> ENGINE_API UClass* StaticClass<URuntimeVirtualTexture>()
	{
		return URuntimeVirtualTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeVirtualTexture(Z_Construct_UClass_URuntimeVirtualTexture, &URuntimeVirtualTexture::StaticClass, TEXT("/Script/Engine"), TEXT("URuntimeVirtualTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
