// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidDeviceProfileSelector/Private/AndroidDeviceProfileMatchingRules.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidDeviceProfileMatchingRules() {}
// Cross Module References
	ANDROIDDEVICEPROFILESELECTOR_API UEnum* Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType();
	UPackage* Z_Construct_UPackage__Script_AndroidDeviceProfileSelector();
	ANDROIDDEVICEPROFILESELECTOR_API UEnum* Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType();
	ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FProfileMatch();
	ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FProfileMatchItem();
	ANDROIDDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_NoRegister();
	ANDROIDDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UAndroidDeviceProfileMatchingRules();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECompareType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType, Z_Construct_UPackage__Script_AndroidDeviceProfileSelector(), TEXT("ECompareType"));
		}
		return Singleton;
	}
	template<> ANDROIDDEVICEPROFILESELECTOR_API UEnum* StaticEnum<ECompareType>()
	{
		return ECompareType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECompareType(ECompareType_StaticEnum, TEXT("/Script/AndroidDeviceProfileSelector"), TEXT("ECompareType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType_Hash() { return 602474764U; }
	UEnum* Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidDeviceProfileSelector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECompareType"), 0, Get_Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CMP_Equal", (int64)CMP_Equal },
				{ "CMP_Less", (int64)CMP_Less },
				{ "CMP_LessEqual", (int64)CMP_LessEqual },
				{ "CMP_Greater", (int64)CMP_Greater },
				{ "CMP_GreaterEqual", (int64)CMP_GreaterEqual },
				{ "CMP_NotEqual", (int64)CMP_NotEqual },
				{ "CMP_Regex", (int64)CMP_Regex },
				{ "CMP_EqualIgnore", (int64)CMP_EqualIgnore },
				{ "CMP_LessIgnore", (int64)CMP_LessIgnore },
				{ "CMP_LessEqualIgnore", (int64)CMP_LessEqualIgnore },
				{ "CMP_GreaterIgnore", (int64)CMP_GreaterIgnore },
				{ "CMP_GreaterEqualIgnore", (int64)CMP_GreaterEqualIgnore },
				{ "CMP_NotEqualIgnore", (int64)CMP_NotEqualIgnore },
				{ "CMP_Hash", (int64)CMP_Hash },
				{ "CMP_MAX", (int64)CMP_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CMP_Equal.Name", "CMP_Equal" },
				{ "CMP_EqualIgnore.Name", "CMP_EqualIgnore" },
				{ "CMP_Greater.Name", "CMP_Greater" },
				{ "CMP_GreaterEqual.Name", "CMP_GreaterEqual" },
				{ "CMP_GreaterEqualIgnore.Name", "CMP_GreaterEqualIgnore" },
				{ "CMP_GreaterIgnore.Name", "CMP_GreaterIgnore" },
				{ "CMP_Hash.Name", "CMP_Hash" },
				{ "CMP_Less.Name", "CMP_Less" },
				{ "CMP_LessEqual.Name", "CMP_LessEqual" },
				{ "CMP_LessEqualIgnore.Name", "CMP_LessEqualIgnore" },
				{ "CMP_LessIgnore.Name", "CMP_LessIgnore" },
				{ "CMP_MAX.Name", "CMP_MAX" },
				{ "CMP_NotEqual.Name", "CMP_NotEqual" },
				{ "CMP_NotEqualIgnore.Name", "CMP_NotEqualIgnore" },
				{ "CMP_Regex.Name", "CMP_Regex" },
				{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
				nullptr,
				"ECompareType",
				"ECompareType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType, Z_Construct_UPackage__Script_AndroidDeviceProfileSelector(), TEXT("ESourceType"));
		}
		return Singleton;
	}
	template<> ANDROIDDEVICEPROFILESELECTOR_API UEnum* StaticEnum<ESourceType>()
	{
		return ESourceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESourceType(ESourceType_StaticEnum, TEXT("/Script/AndroidDeviceProfileSelector"), TEXT("ESourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType_Hash() { return 2199997175U; }
	UEnum* Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidDeviceProfileSelector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESourceType"), 0, Get_Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SRC_PreviousRegexMatch", (int64)SRC_PreviousRegexMatch },
				{ "SRC_GpuFamily", (int64)SRC_GpuFamily },
				{ "SRC_GlVersion", (int64)SRC_GlVersion },
				{ "SRC_AndroidVersion", (int64)SRC_AndroidVersion },
				{ "SRC_DeviceMake", (int64)SRC_DeviceMake },
				{ "SRC_DeviceModel", (int64)SRC_DeviceModel },
				{ "SRC_DeviceBuildNumber", (int64)SRC_DeviceBuildNumber },
				{ "SRC_VulkanVersion", (int64)SRC_VulkanVersion },
				{ "SRC_UsingHoudini", (int64)SRC_UsingHoudini },
				{ "SRC_VulkanAvailable", (int64)SRC_VulkanAvailable },
				{ "SRC_CommandLine", (int64)SRC_CommandLine },
				{ "SRC_Hardware", (int64)SRC_Hardware },
				{ "SRC_Chipset", (int64)SRC_Chipset },
				{ "SRC_MAX", (int64)SRC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
				{ "SRC_AndroidVersion.Name", "SRC_AndroidVersion" },
				{ "SRC_Chipset.Name", "SRC_Chipset" },
				{ "SRC_CommandLine.Name", "SRC_CommandLine" },
				{ "SRC_DeviceBuildNumber.Name", "SRC_DeviceBuildNumber" },
				{ "SRC_DeviceMake.Name", "SRC_DeviceMake" },
				{ "SRC_DeviceModel.Name", "SRC_DeviceModel" },
				{ "SRC_GlVersion.Name", "SRC_GlVersion" },
				{ "SRC_GpuFamily.Name", "SRC_GpuFamily" },
				{ "SRC_Hardware.Name", "SRC_Hardware" },
				{ "SRC_MAX.Name", "SRC_MAX" },
				{ "SRC_PreviousRegexMatch.Name", "SRC_PreviousRegexMatch" },
				{ "SRC_UsingHoudini.Name", "SRC_UsingHoudini" },
				{ "SRC_VulkanAvailable.Name", "SRC_VulkanAvailable" },
				{ "SRC_VulkanVersion.Name", "SRC_VulkanVersion" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
				nullptr,
				"ESourceType",
				"ESourceType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FProfileMatch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANDROIDDEVICEPROFILESELECTOR_API uint32 Get_Z_Construct_UScriptStruct_FProfileMatch_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfileMatch, Z_Construct_UPackage__Script_AndroidDeviceProfileSelector(), TEXT("ProfileMatch"), sizeof(FProfileMatch), Get_Z_Construct_UScriptStruct_FProfileMatch_Hash());
	}
	return Singleton;
}
template<> ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* StaticStruct<FProfileMatch>()
{
	return FProfileMatch::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfileMatch(FProfileMatch::StaticStruct, TEXT("/Script/AndroidDeviceProfileSelector"), TEXT("ProfileMatch"), false, nullptr, nullptr);
static struct FScriptStruct_AndroidDeviceProfileSelector_StaticRegisterNativesFProfileMatch
{
	FScriptStruct_AndroidDeviceProfileSelector_StaticRegisterNativesFProfileMatch()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfileMatch")),new UScriptStruct::TCppStructOps<FProfileMatch>);
	}
} ScriptStruct_AndroidDeviceProfileSelector_StaticRegisterNativesFProfileMatch;
	struct Z_Construct_UScriptStruct_FProfileMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Match;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Match_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Profile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatch_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfileMatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfileMatch>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match_MetaData[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfileMatch, Match), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match_Inner = { "Match", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProfileMatchItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Profile_MetaData[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfileMatch, Profile), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Profile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Profile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfileMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Profile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfileMatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
		nullptr,
		&NewStructOps,
		"ProfileMatch",
		sizeof(FProfileMatch),
		alignof(FProfileMatch),
		Z_Construct_UScriptStruct_FProfileMatch_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatch_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfileMatch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfileMatch_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidDeviceProfileSelector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfileMatch"), sizeof(FProfileMatch), Get_Z_Construct_UScriptStruct_FProfileMatch_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfileMatch_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfileMatch_Hash() { return 3936426996U; }
class UScriptStruct* FProfileMatchItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANDROIDDEVICEPROFILESELECTOR_API uint32 Get_Z_Construct_UScriptStruct_FProfileMatchItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfileMatchItem, Z_Construct_UPackage__Script_AndroidDeviceProfileSelector(), TEXT("ProfileMatchItem"), sizeof(FProfileMatchItem), Get_Z_Construct_UScriptStruct_FProfileMatchItem_Hash());
	}
	return Singleton;
}
template<> ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* StaticStruct<FProfileMatchItem>()
{
	return FProfileMatchItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfileMatchItem(FProfileMatchItem::StaticStruct, TEXT("/Script/AndroidDeviceProfileSelector"), TEXT("ProfileMatchItem"), false, nullptr, nullptr);
static struct FScriptStruct_AndroidDeviceProfileSelector_StaticRegisterNativesFProfileMatchItem
{
	FScriptStruct_AndroidDeviceProfileSelector_StaticRegisterNativesFProfileMatchItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfileMatchItem")),new UScriptStruct::TCppStructOps<FProfileMatchItem>);
	}
} ScriptStruct_AndroidDeviceProfileSelector_StaticRegisterNativesFProfileMatchItem;
	struct Z_Construct_UScriptStruct_FProfileMatchItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompareType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompareType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatchItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfileMatchItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_MatchString_MetaData[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_MatchString = { "MatchString", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfileMatchItem, MatchString), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_MatchString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_MatchString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_CompareType_MetaData[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_CompareType = { "CompareType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfileMatchItem, CompareType), Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_CompareType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_CompareType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_SourceType_MetaData[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfileMatchItem, SourceType), Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_SourceType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_SourceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfileMatchItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_MatchString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_CompareType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_SourceType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfileMatchItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
		nullptr,
		&NewStructOps,
		"ProfileMatchItem",
		sizeof(FProfileMatchItem),
		alignof(FProfileMatchItem),
		Z_Construct_UScriptStruct_FProfileMatchItem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfileMatchItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfileMatchItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidDeviceProfileSelector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfileMatchItem"), sizeof(FProfileMatchItem), Get_Z_Construct_UScriptStruct_FProfileMatchItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfileMatchItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfileMatchItem_Hash() { return 591018432U; }
	void UAndroidDeviceProfileMatchingRules::StaticRegisterNativesUAndroidDeviceProfileMatchingRules()
	{
	}
	UClass* Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_NoRegister()
	{
		return UAndroidDeviceProfileMatchingRules::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MatchProfile;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchProfile_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidDeviceProfileMatchingRules.h" },
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile_MetaData[] = {
		{ "Category", "Matching Rules" },
		{ "Comment", "/** Array of rules to match */" },
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
		{ "ToolTip", "Array of rules to match" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile = { "MatchProfile", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidDeviceProfileMatchingRules, MatchProfile), METADATA_PARAMS(Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile_Inner = { "MatchProfile", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProfileMatch, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidDeviceProfileMatchingRules>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::ClassParams = {
		&UAndroidDeviceProfileMatchingRules::StaticClass,
		"DeviceProfiles",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidDeviceProfileMatchingRules()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndroidDeviceProfileMatchingRules, 2820721351);
	template<> ANDROIDDEVICEPROFILESELECTOR_API UClass* StaticClass<UAndroidDeviceProfileMatchingRules>()
	{
		return UAndroidDeviceProfileMatchingRules::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidDeviceProfileMatchingRules(Z_Construct_UClass_UAndroidDeviceProfileMatchingRules, &UAndroidDeviceProfileMatchingRules::StaticClass, TEXT("/Script/AndroidDeviceProfileSelector"), TEXT("UAndroidDeviceProfileMatchingRules"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidDeviceProfileMatchingRules);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
