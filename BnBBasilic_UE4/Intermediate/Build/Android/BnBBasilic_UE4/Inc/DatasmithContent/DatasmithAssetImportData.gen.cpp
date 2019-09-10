// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithAssetImportData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithAssetImportData() {}
// Cross Module References
	DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EVREDDataTableType();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetImportData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAdditionalData_NoRegister();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithAssetImportOptions();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithTessellationOptions();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSceneImportData();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithImportBaseOptions();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCADImportSceneData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCADImportSceneData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithIFCSceneImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithIFCSceneImportData();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithStaticMeshIFCImportData();
// End Cross Module References
	static UEnum* EVREDDataTableType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EVREDDataTableType, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EVREDDataTableType"));
		}
		return Singleton;
	}
	template<> DATASMITHCONTENT_API UEnum* StaticEnum<EVREDDataTableType>()
	{
		return EVREDDataTableType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVREDDataTableType(EVREDDataTableType_StaticEnum, TEXT("/Script/DatasmithContent"), TEXT("EVREDDataTableType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DatasmithContent_EVREDDataTableType_Hash() { return 3864979313U; }
	UEnum* Z_Construct_UEnum_DatasmithContent_EVREDDataTableType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVREDDataTableType"), 0, Get_Z_Construct_UEnum_DatasmithContent_EVREDDataTableType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVREDDataTableType::NotDatatable", (int64)EVREDDataTableType::NotDatatable },
				{ "EVREDDataTableType::AnimClips", (int64)EVREDDataTableType::AnimClips },
				{ "EVREDDataTableType::AnimNodes", (int64)EVREDDataTableType::AnimNodes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnimClips.Name", "EVREDDataTableType::AnimClips" },
				{ "AnimNodes.Name", "EVREDDataTableType::AnimNodes" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
				{ "NotDatatable.Name", "EVREDDataTableType::NotDatatable" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
				nullptr,
				"EVREDDataTableType",
				"EVREDDataTableType",
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
	void UDatasmithAssetImportData::StaticRegisterNativesUDatasmithAssetImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithAssetImportData_NoRegister()
	{
		return UDatasmithAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetImportOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010008800000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithAssetImportData, AdditionalData), METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner_MetaData[] = {
		{ "Category", "Asset" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner = { "AdditionalData", nullptr, (EPropertyFlags)0x0002000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDatasmithAdditionalData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions_MetaData[] = {
		{ "Category", "Asset" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions = { "AssetImportOptions", nullptr, (EPropertyFlags)0x0010000800000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithAssetImportData, AssetImportOptions), Z_Construct_UScriptStruct_FDatasmithAssetImportOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithAssetImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AdditionalData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetImportData_Statics::NewProp_AssetImportOptions,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithAssetImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithAssetImportData_Statics::ClassParams = {
		&UDatasmithAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithAssetImportData_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::PropPointers), 0),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithAssetImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithAssetImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithAssetImportData, 4255042557);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithAssetImportData>()
	{
		return UDatasmithAssetImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithAssetImportData(Z_Construct_UClass_UDatasmithAssetImportData, &UDatasmithAssetImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithAssetImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithAssetImportData);
	void UDatasmithStaticMeshImportData::StaticRegisterNativesUDatasmithStaticMeshImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData_NoRegister()
	{
		return UDatasmithStaticMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshImportData, ImportOptions), Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::NewProp_ImportOptions,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::ClassParams = {
		&UDatasmithStaticMeshImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStaticMeshImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithStaticMeshImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithStaticMeshImportData, 4198046320);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshImportData>()
	{
		return UDatasmithStaticMeshImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithStaticMeshImportData(Z_Construct_UClass_UDatasmithStaticMeshImportData, &UDatasmithStaticMeshImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithStaticMeshImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshImportData);
	void UDatasmithStaticMeshCADImportData::StaticRegisterNativesUDatasmithStaticMeshCADImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData_NoRegister()
	{
		return UDatasmithStaticMeshCADImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxiliaryFilenames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AuxiliaryFilenames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxiliaryFilenames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResourceFilename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourcePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResourcePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_ModelTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_ModelUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TessellationOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithStaticMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "InternalProperty" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames = { "AuxiliaryFilenames", nullptr, (EPropertyFlags)0x0020080800030001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, AuxiliaryFilenames), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_Inner = { "AuxiliaryFilenames", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename = { "ResourceFilename", nullptr, (EPropertyFlags)0x0020080800030001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ResourceFilename), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath = { "ResourcePath", nullptr, (EPropertyFlags)0x0020080800030001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ResourcePath), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance = { "ModelTolerance", nullptr, (EPropertyFlags)0x0010000800030001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ModelTolerance), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit = { "ModelUnit", nullptr, (EPropertyFlags)0x0010000800030001, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, ModelUnit), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions = { "TessellationOptions", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshCADImportData, TessellationOptions), Z_Construct_UScriptStruct_FDatasmithTessellationOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_AuxiliaryFilenames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourceFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ResourcePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_ModelUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::NewProp_TessellationOptions,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshCADImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::ClassParams = {
		&UDatasmithStaticMeshCADImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStaticMeshCADImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithStaticMeshCADImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithStaticMeshCADImportData, 3739469157);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshCADImportData>()
	{
		return UDatasmithStaticMeshCADImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithStaticMeshCADImportData(Z_Construct_UClass_UDatasmithStaticMeshCADImportData, &UDatasmithStaticMeshCADImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithStaticMeshCADImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshCADImportData);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithStaticMeshCADImportData)
	void UDatasmithSceneImportData::StaticRegisterNativesUDatasmithSceneImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithSceneImportData_NoRegister()
	{
		return UDatasmithSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for import data and options used when importing any asset from Datasmith\n */" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Base class for import data and options used when importing any asset from Datasmith" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions = { "BaseOptions", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithSceneImportData, BaseOptions), Z_Construct_UScriptStruct_FDatasmithImportBaseOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithSceneImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSceneImportData_Statics::NewProp_BaseOptions,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSceneImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSceneImportData_Statics::ClassParams = {
		&UDatasmithSceneImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithSceneImportData_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneImportData_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithSceneImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithSceneImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithSceneImportData, 601519263);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithSceneImportData>()
	{
		return UDatasmithSceneImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithSceneImportData(Z_Construct_UClass_UDatasmithSceneImportData, &UDatasmithSceneImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithSceneImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSceneImportData);
	void UDatasmithTranslatedSceneImportData::StaticRegisterNativesUDatasmithTranslatedSceneImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData_NoRegister()
	{
		return UDatasmithTranslatedSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OriginFactory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Import data and options specific to Datasmith scenes imported through the translator system\n */" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Import data and options specific to Datasmith scenes imported through the translator system" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_OriginFactory_MetaData[] = {
		{ "Category", "Translation" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_OriginFactory = { "OriginFactory", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithTranslatedSceneImportData, OriginFactory), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_OriginFactory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_OriginFactory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::NewProp_OriginFactory,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithTranslatedSceneImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::ClassParams = {
		&UDatasmithTranslatedSceneImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithTranslatedSceneImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithTranslatedSceneImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithTranslatedSceneImportData, 2521368847);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithTranslatedSceneImportData>()
	{
		return UDatasmithTranslatedSceneImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithTranslatedSceneImportData(Z_Construct_UClass_UDatasmithTranslatedSceneImportData, &UDatasmithTranslatedSceneImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithTranslatedSceneImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithTranslatedSceneImportData);
	void UDatasmithCADImportSceneData::StaticRegisterNativesUDatasmithCADImportSceneData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithCADImportSceneData_NoRegister()
	{
		return UDatasmithCADImportSceneData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithCADImportSceneData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TessellationOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Import data and options specific to tessellated Datasmith scenes\n */" },
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ToolTip", "Import data and options specific to tessellated Datasmith scenes" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions_MetaData[] = {
		{ "Category", "Tessellation" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions = { "TessellationOptions", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithCADImportSceneData, TessellationOptions), Z_Construct_UScriptStruct_FDatasmithTessellationOptions, METADATA_PARAMS(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::NewProp_TessellationOptions,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCADImportSceneData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::ClassParams = {
		&UDatasmithCADImportSceneData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithCADImportSceneData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithCADImportSceneData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithCADImportSceneData, 4216600725);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCADImportSceneData>()
	{
		return UDatasmithCADImportSceneData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithCADImportSceneData(Z_Construct_UClass_UDatasmithCADImportSceneData, &UDatasmithCADImportSceneData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithCADImportSceneData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCADImportSceneData);
	void UDatasmithMDLSceneImportData::StaticRegisterNativesUDatasmithMDLSceneImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData_NoRegister()
	{
		return UDatasmithMDLSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithMDLSceneImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::ClassParams = {
		&UDatasmithMDLSceneImportData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithMDLSceneImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithMDLSceneImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithMDLSceneImportData, 1242930632);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithMDLSceneImportData>()
	{
		return UDatasmithMDLSceneImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithMDLSceneImportData(Z_Construct_UClass_UDatasmithMDLSceneImportData, &UDatasmithMDLSceneImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithMDLSceneImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithMDLSceneImportData);
	void UDatasmithGLTFSceneImportData::StaticRegisterNativesUDatasmithGLTFSceneImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData_NoRegister()
	{
		return UDatasmithGLTFSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_License_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_License;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Source" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Source), METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "License" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License = { "License", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, License), METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Author" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Author), METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Version" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Version), METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator_MetaData[] = {
		{ "Category", "Scene Info" },
		{ "DisplayName", "Generator Name" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithGLTFSceneImportData, Generator), METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_License,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Author,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::NewProp_Generator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithGLTFSceneImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::ClassParams = {
		&UDatasmithGLTFSceneImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithGLTFSceneImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithGLTFSceneImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithGLTFSceneImportData, 3852290531);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithGLTFSceneImportData>()
	{
		return UDatasmithGLTFSceneImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithGLTFSceneImportData(Z_Construct_UClass_UDatasmithGLTFSceneImportData, &UDatasmithGLTFSceneImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithGLTFSceneImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithGLTFSceneImportData);
	void UDatasmithStaticMeshGLTFImportData::StaticRegisterNativesUDatasmithStaticMeshGLTFImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_NoRegister()
	{
		return UDatasmithStaticMeshGLTFImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMeshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceMeshName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithStaticMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName = { "SourceMeshName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshGLTFImportData, SourceMeshName), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::NewProp_SourceMeshName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshGLTFImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::ClassParams = {
		&UDatasmithStaticMeshGLTFImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithStaticMeshGLTFImportData, 2672512046);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshGLTFImportData>()
	{
		return UDatasmithStaticMeshGLTFImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithStaticMeshGLTFImportData(Z_Construct_UClass_UDatasmithStaticMeshGLTFImportData, &UDatasmithStaticMeshGLTFImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithStaticMeshGLTFImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshGLTFImportData);
	void UDatasmithDeltaGenAssetImportData::StaticRegisterNativesUDatasmithDeltaGenAssetImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_NoRegister()
	{
		return UDatasmithDeltaGenAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithDeltaGenAssetImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::ClassParams = {
		&UDatasmithDeltaGenAssetImportData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithDeltaGenAssetImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithDeltaGenAssetImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithDeltaGenAssetImportData, 2735176724);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithDeltaGenAssetImportData>()
	{
		return UDatasmithDeltaGenAssetImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithDeltaGenAssetImportData(Z_Construct_UClass_UDatasmithDeltaGenAssetImportData, &UDatasmithDeltaGenAssetImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithDeltaGenAssetImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithDeltaGenAssetImportData);
	void UDatasmithDeltaGenSceneImportData::StaticRegisterNativesUDatasmithDeltaGenSceneImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_NoRegister()
	{
		return UDatasmithDeltaGenSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithDeltaGenSceneImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::ClassParams = {
		&UDatasmithDeltaGenSceneImportData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithDeltaGenSceneImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithDeltaGenSceneImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithDeltaGenSceneImportData, 944879779);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithDeltaGenSceneImportData>()
	{
		return UDatasmithDeltaGenSceneImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithDeltaGenSceneImportData(Z_Construct_UClass_UDatasmithDeltaGenSceneImportData, &UDatasmithDeltaGenSceneImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithDeltaGenSceneImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithDeltaGenSceneImportData);
	void UDatasmithVREDAssetImportData::StaticRegisterNativesUDatasmithVREDAssetImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData_NoRegister()
	{
		return UDatasmithVREDAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithVREDAssetImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::ClassParams = {
		&UDatasmithVREDAssetImportData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithVREDAssetImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithVREDAssetImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithVREDAssetImportData, 1606861975);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithVREDAssetImportData>()
	{
		return UDatasmithVREDAssetImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithVREDAssetImportData(Z_Construct_UClass_UDatasmithVREDAssetImportData, &UDatasmithVREDAssetImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithVREDAssetImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithVREDAssetImportData);
	void UDatasmithVREDSceneImportData::StaticRegisterNativesUDatasmithVREDSceneImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData_NoRegister()
	{
		return UDatasmithVREDSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithVREDSceneImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::ClassParams = {
		&UDatasmithVREDSceneImportData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithVREDSceneImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithVREDSceneImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithVREDSceneImportData, 496057633);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithVREDSceneImportData>()
	{
		return UDatasmithVREDSceneImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithVREDSceneImportData(Z_Construct_UClass_UDatasmithVREDSceneImportData, &UDatasmithVREDSceneImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithVREDSceneImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithVREDSceneImportData);
	void UDatasmithIFCSceneImportData::StaticRegisterNativesUDatasmithIFCSceneImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithIFCSceneImportData_NoRegister()
	{
		return UDatasmithIFCSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithSceneImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithIFCSceneImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::ClassParams = {
		&UDatasmithIFCSceneImportData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithIFCSceneImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithIFCSceneImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithIFCSceneImportData, 1087572392);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithIFCSceneImportData>()
	{
		return UDatasmithIFCSceneImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithIFCSceneImportData(Z_Construct_UClass_UDatasmithIFCSceneImportData, &UDatasmithIFCSceneImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithIFCSceneImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithIFCSceneImportData);
	void UDatasmithStaticMeshIFCImportData::StaticRegisterNativesUDatasmithStaticMeshIFCImportData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_NoRegister()
	{
		return UDatasmithStaticMeshIFCImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceGlobalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceGlobalId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithStaticMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithAssetImportData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::NewProp_SourceGlobalId_MetaData[] = {
		{ "Category", "InternalProperty" },
		{ "ModuleRelativePath", "Public/DatasmithAssetImportData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::NewProp_SourceGlobalId = { "SourceGlobalId", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithStaticMeshIFCImportData, SourceGlobalId), METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::NewProp_SourceGlobalId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::NewProp_SourceGlobalId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::NewProp_SourceGlobalId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithStaticMeshIFCImportData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::ClassParams = {
		&UDatasmithStaticMeshIFCImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithStaticMeshIFCImportData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithStaticMeshIFCImportData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithStaticMeshIFCImportData, 1609117564);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithStaticMeshIFCImportData>()
	{
		return UDatasmithStaticMeshIFCImportData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithStaticMeshIFCImportData(Z_Construct_UClass_UDatasmithStaticMeshIFCImportData, &UDatasmithStaticMeshIFCImportData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithStaticMeshIFCImportData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithStaticMeshIFCImportData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
