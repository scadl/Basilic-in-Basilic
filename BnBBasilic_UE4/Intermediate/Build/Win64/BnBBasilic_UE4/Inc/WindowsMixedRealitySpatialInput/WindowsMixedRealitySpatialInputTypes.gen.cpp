// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsMixedRealitySpatialInput/Public/WindowsMixedRealitySpatialInputTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsMixedRealitySpatialInputTypes() {}
// Cross Module References
	WINDOWSMIXEDREALITYSPATIALINPUT_API UEnum* Z_Construct_UEnum_WindowsMixedRealitySpatialInput_EGestureType();
	UPackage* Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput();
	WINDOWSMIXEDREALITYSPATIALINPUT_API UEnum* Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputSourceKind();
	WINDOWSMIXEDREALITYSPATIALINPUT_API UEnum* Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputAxisGestureType();
// End Cross Module References
	static UEnum* EGestureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WindowsMixedRealitySpatialInput_EGestureType, Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput(), TEXT("EGestureType"));
		}
		return Singleton;
	}
	template<> WINDOWSMIXEDREALITYSPATIALINPUT_API UEnum* StaticEnum<EGestureType>()
	{
		return EGestureType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGestureType(EGestureType_StaticEnum, TEXT("/Script/WindowsMixedRealitySpatialInput"), TEXT("EGestureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WindowsMixedRealitySpatialInput_EGestureType_Hash() { return 2749466907U; }
	UEnum* Z_Construct_UEnum_WindowsMixedRealitySpatialInput_EGestureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGestureType"), 0, Get_Z_Construct_UEnum_WindowsMixedRealitySpatialInput_EGestureType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGestureType::TapGesture", (int64)EGestureType::TapGesture },
				{ "EGestureType::HoldGesture", (int64)EGestureType::HoldGesture },
				{ "EGestureType::ManipulationGesture", (int64)EGestureType::ManipulationGesture },
				{ "EGestureType::NavigationGesture", (int64)EGestureType::NavigationGesture },
				{ "EGestureType::NavigationRailsGesture", (int64)EGestureType::NavigationRailsGesture },
				{ "EGestureType::NavigationGestureX", (int64)EGestureType::NavigationGestureX },
				{ "EGestureType::NavigationGestureY", (int64)EGestureType::NavigationGestureY },
				{ "EGestureType::NavigationGestureZ", (int64)EGestureType::NavigationGestureZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HoldGesture.Name", "EGestureType::HoldGesture" },
				{ "ManipulationGesture.Name", "EGestureType::ManipulationGesture" },
				{ "ModuleRelativePath", "Public/WindowsMixedRealitySpatialInputTypes.h" },
				{ "NavigationGesture.Name", "EGestureType::NavigationGesture" },
				{ "NavigationGestureX.Name", "EGestureType::NavigationGestureX" },
				{ "NavigationGestureY.Name", "EGestureType::NavigationGestureY" },
				{ "NavigationGestureZ.Name", "EGestureType::NavigationGestureZ" },
				{ "NavigationRailsGesture.Name", "EGestureType::NavigationRailsGesture" },
				{ "TapGesture.Name", "EGestureType::TapGesture" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput,
				nullptr,
				"EGestureType",
				"EGestureType",
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
	static UEnum* ESpatialInputSourceKind_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputSourceKind, Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput(), TEXT("ESpatialInputSourceKind"));
		}
		return Singleton;
	}
	template<> WINDOWSMIXEDREALITYSPATIALINPUT_API UEnum* StaticEnum<ESpatialInputSourceKind>()
	{
		return ESpatialInputSourceKind_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpatialInputSourceKind(ESpatialInputSourceKind_StaticEnum, TEXT("/Script/WindowsMixedRealitySpatialInput"), TEXT("ESpatialInputSourceKind"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputSourceKind_Hash() { return 2692239061U; }
	UEnum* Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputSourceKind()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpatialInputSourceKind"), 0, Get_Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputSourceKind_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpatialInputSourceKind::Other", (int64)ESpatialInputSourceKind::Other },
				{ "ESpatialInputSourceKind::Hand", (int64)ESpatialInputSourceKind::Hand },
				{ "ESpatialInputSourceKind::Voice", (int64)ESpatialInputSourceKind::Voice },
				{ "ESpatialInputSourceKind::Controller", (int64)ESpatialInputSourceKind::Controller },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Controller.Name", "ESpatialInputSourceKind::Controller" },
				{ "Hand.Name", "ESpatialInputSourceKind::Hand" },
				{ "ModuleRelativePath", "Public/WindowsMixedRealitySpatialInputTypes.h" },
				{ "Other.Name", "ESpatialInputSourceKind::Other" },
				{ "Voice.Name", "ESpatialInputSourceKind::Voice" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput,
				nullptr,
				"ESpatialInputSourceKind",
				"ESpatialInputSourceKind",
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
	static UEnum* ESpatialInputAxisGestureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputAxisGestureType, Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput(), TEXT("ESpatialInputAxisGestureType"));
		}
		return Singleton;
	}
	template<> WINDOWSMIXEDREALITYSPATIALINPUT_API UEnum* StaticEnum<ESpatialInputAxisGestureType>()
	{
		return ESpatialInputAxisGestureType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpatialInputAxisGestureType(ESpatialInputAxisGestureType_StaticEnum, TEXT("/Script/WindowsMixedRealitySpatialInput"), TEXT("ESpatialInputAxisGestureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputAxisGestureType_Hash() { return 3900781771U; }
	UEnum* Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputAxisGestureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpatialInputAxisGestureType"), 0, Get_Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputAxisGestureType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpatialInputAxisGestureType::None", (int64)ESpatialInputAxisGestureType::None },
				{ "ESpatialInputAxisGestureType::Manipulation", (int64)ESpatialInputAxisGestureType::Manipulation },
				{ "ESpatialInputAxisGestureType::Navigation", (int64)ESpatialInputAxisGestureType::Navigation },
				{ "ESpatialInputAxisGestureType::NavigationRails", (int64)ESpatialInputAxisGestureType::NavigationRails },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Manipulation.Name", "ESpatialInputAxisGestureType::Manipulation" },
				{ "ModuleRelativePath", "Public/WindowsMixedRealitySpatialInputTypes.h" },
				{ "Navigation.Name", "ESpatialInputAxisGestureType::Navigation" },
				{ "NavigationRails.Name", "ESpatialInputAxisGestureType::NavigationRails" },
				{ "None.Name", "ESpatialInputAxisGestureType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput,
				nullptr,
				"ESpatialInputAxisGestureType",
				"ESpatialInputAxisGestureType",
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
