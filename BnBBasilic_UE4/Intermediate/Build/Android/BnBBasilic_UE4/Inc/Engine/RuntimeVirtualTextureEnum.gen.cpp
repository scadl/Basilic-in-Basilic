// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureEnum() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType();
// End Cross Module References
	static UEnum* ERuntimeVirtualTextureMainPassType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, Z_Construct_UPackage__Script_Engine(), TEXT("ERuntimeVirtualTextureMainPassType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureMainPassType>()
	{
		return ERuntimeVirtualTextureMainPassType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeVirtualTextureMainPassType(ERuntimeVirtualTextureMainPassType_StaticEnum, TEXT("/Script/Engine"), TEXT("ERuntimeVirtualTextureMainPassType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType_Hash() { return 1406808005U; }
	UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeVirtualTextureMainPassType"), 0, Get_Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeVirtualTextureMainPassType::Never", (int64)ERuntimeVirtualTextureMainPassType::Never },
				{ "ERuntimeVirtualTextureMainPassType::Exclusive", (int64)ERuntimeVirtualTextureMainPassType::Exclusive },
				{ "ERuntimeVirtualTextureMainPassType::Always", (int64)ERuntimeVirtualTextureMainPassType::Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Comment", "/** We will render to any valid virtual texture target AND the main pass. Use this for items that need to both read and write the virtual texture. For example, some landscape setups need this. */" },
				{ "Always.DisplayName", "Virtual Texture AND Main Pass" },
				{ "Always.Name", "ERuntimeVirtualTextureMainPassType::Always" },
				{ "Always.ToolTip", "We will render to any valid virtual texture target AND the main pass. Use this for items that need to both read and write the virtual texture. For example, some landscape setups need this." },
				{ "Comment", "/** Enumeration of main pass behaviors when rendering to a runtime virtual texture. */" },
				{ "Exclusive.Comment", "/** If and only if there is no valid virtual texture target we will render to the main pass. Use this for items that we must have whether virtual texture is supported or not. */" },
				{ "Exclusive.DisplayName", "Virtual Texture OR Main Pass" },
				{ "Exclusive.Name", "ERuntimeVirtualTextureMainPassType::Exclusive" },
				{ "Exclusive.ToolTip", "If and only if there is no valid virtual texture target we will render to the main pass. Use this for items that we must have whether virtual texture is supported or not." },
				{ "ModuleRelativePath", "Public/VT/RuntimeVirtualTextureEnum.h" },
				{ "Never.Comment", "/** If there is no valid virtual texture target we will not render at all. Use this for items that we don't mind removing if there is no virtual texture support. */" },
				{ "Never.DisplayName", "Virtual Texture Only" },
				{ "Never.Name", "ERuntimeVirtualTextureMainPassType::Never" },
				{ "Never.ToolTip", "If there is no valid virtual texture target we will not render at all. Use this for items that we don't mind removing if there is no virtual texture support." },
				{ "ToolTip", "Enumeration of main pass behaviors when rendering to a runtime virtual texture." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERuntimeVirtualTextureMainPassType",
				"ERuntimeVirtualTextureMainPassType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERuntimeVirtualTextureMaterialType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType, Z_Construct_UPackage__Script_Engine(), TEXT("ERuntimeVirtualTextureMaterialType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureMaterialType>()
	{
		return ERuntimeVirtualTextureMaterialType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeVirtualTextureMaterialType(ERuntimeVirtualTextureMaterialType_StaticEnum, TEXT("/Script/Engine"), TEXT("ERuntimeVirtualTextureMaterialType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType_Hash() { return 700379754U; }
	UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeVirtualTextureMaterialType"), 0, Get_Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeVirtualTextureMaterialType::BaseColor", (int64)ERuntimeVirtualTextureMaterialType::BaseColor },
				{ "ERuntimeVirtualTextureMaterialType::BaseColor_Normal", (int64)ERuntimeVirtualTextureMaterialType::BaseColor_Normal },
				{ "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular", (int64)ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular },
				{ "ERuntimeVirtualTextureMaterialType::Count", (int64)ERuntimeVirtualTextureMaterialType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BaseColor.DisplayName", "Base Color" },
				{ "BaseColor.Name", "ERuntimeVirtualTextureMaterialType::BaseColor" },
				{ "BaseColor_Normal.DisplayName", "Base Color, Normal" },
				{ "BaseColor_Normal.Name", "ERuntimeVirtualTextureMaterialType::BaseColor_Normal" },
				{ "BaseColor_Normal_Specular.DisplayName", "Base Color, Normal, Roughness, Specular" },
				{ "BaseColor_Normal_Specular.Name", "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular" },
				{ "Comment", "/** \n * Enumeration of virtual texture stack layouts to support. \n * Extend this enumeration with other layouts as required. For example we will probably want to add a displacement texture option.\n * This \"fixed function\" approach will probably break down if we end up needing to support some complex set of attribute combinations but it is OK to begin with.\n */" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "ERuntimeVirtualTextureMaterialType::Count" },
				{ "ModuleRelativePath", "Public/VT/RuntimeVirtualTextureEnum.h" },
				{ "ToolTip", "Enumeration of virtual texture stack layouts to support.\nExtend this enumeration with other layouts as required. For example we will probably want to add a displacement texture option.\nThis \"fixed function\" approach will probably break down if we end up needing to support some complex set of attribute combinations but it is OK to begin with." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ERuntimeVirtualTextureMaterialType",
				"ERuntimeVirtualTextureMaterialType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
