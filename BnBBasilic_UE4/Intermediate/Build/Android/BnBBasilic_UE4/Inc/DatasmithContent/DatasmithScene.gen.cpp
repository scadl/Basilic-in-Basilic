// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithScene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithScene() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithScene();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
// End Cross Module References
	void UDatasmithScene::StaticRegisterNativesUDatasmithScene()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithScene_NoRegister()
	{
		return UDatasmithScene::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LevelSequences;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelSequences_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LevelSequences_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Materials_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Materials_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Textures;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Textures_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Textures_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StaticMeshes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StaticMeshes_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMeshes_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulkDataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BulkDataVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataprepRecipeBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataprepRecipeBP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithScene.h" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the level sequences related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the level sequences related to this Datasmith Scene" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences = { "LevelSequences", nullptr, (EPropertyFlags)0x0014040800020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithScene, LevelSequences), METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_Key_KeyProp = { "LevelSequences_Key", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_ValueProp = { "LevelSequences", nullptr, (EPropertyFlags)0x0004000800020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the materials related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the materials related to this Datasmith Scene" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014040800020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithScene, Materials), METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_Key_KeyProp = { "Materials_Key", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_ValueProp = { "Materials", nullptr, (EPropertyFlags)0x0004000800020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the textures related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the textures related to this Datasmith Scene" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0014040800020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithScene, Textures), METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_Key_KeyProp = { "Textures_Key", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_ValueProp = { "Textures", nullptr, (EPropertyFlags)0x0004000800020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_MetaData[] = {
		{ "Category", "Datasmith" },
		{ "Comment", "/** Map of all the static meshes related to this Datasmith Scene */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Map of all the static meshes related to this Datasmith Scene" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0014040800020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithScene, StaticMeshes), METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_Key_KeyProp = { "StaticMeshes_Key", nullptr, (EPropertyFlags)0x0000000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_ValueProp = { "StaticMeshes", nullptr, (EPropertyFlags)0x0004000800020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion = { "BulkDataVersion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithScene, BulkDataVersion), METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this Datasmith scene */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Importing data and options used for this Datasmith scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0012000800080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithScene, AssetImportData), Z_Construct_UClass_UDatasmithSceneImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithScene_Statics::NewProp_DataprepRecipeBP_MetaData[] = {
		{ "Comment", "/** Pointer to data preparation pipeline blueprint used to process input data */" },
		{ "ModuleRelativePath", "Public/DatasmithScene.h" },
		{ "ToolTip", "Pointer to data preparation pipeline blueprint used to process input data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithScene_Statics::NewProp_DataprepRecipeBP = { "DataprepRecipeBP", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithScene, DataprepRecipeBP), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_DataprepRecipeBP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::NewProp_DataprepRecipeBP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithScene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_LevelSequences_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Materials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_Textures_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_StaticMeshes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_BulkDataVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_AssetImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithScene_Statics::NewProp_DataprepRecipeBP,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithScene>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithScene_Statics::ClassParams = {
		&UDatasmithScene::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithScene_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::PropPointers), 0),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithScene_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithScene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithScene_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithScene, 2246487040);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithScene>()
	{
		return UDatasmithScene::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithScene(Z_Construct_UClass_UDatasmithScene, &UDatasmithScene::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithScene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithScene);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithScene)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
