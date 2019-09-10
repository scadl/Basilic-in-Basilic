// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsMixedRealityHandTracking/Public/WindowsMixedRealityHandTrackingTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsMixedRealityHandTrackingTypes() {}
// Cross Module References
	WINDOWSMIXEDREALITYHANDTRACKING_API UEnum* Z_Construct_UEnum_WindowsMixedRealityHandTracking_EWMRHandKeypoint();
	UPackage* Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking();
// End Cross Module References
	static UEnum* EWMRHandKeypoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WindowsMixedRealityHandTracking_EWMRHandKeypoint, Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking(), TEXT("EWMRHandKeypoint"));
		}
		return Singleton;
	}
	template<> WINDOWSMIXEDREALITYHANDTRACKING_API UEnum* StaticEnum<EWMRHandKeypoint>()
	{
		return EWMRHandKeypoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWMRHandKeypoint(EWMRHandKeypoint_StaticEnum, TEXT("/Script/WindowsMixedRealityHandTracking"), TEXT("EWMRHandKeypoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WindowsMixedRealityHandTracking_EWMRHandKeypoint_Hash() { return 896707220U; }
	UEnum* Z_Construct_UEnum_WindowsMixedRealityHandTracking_EWMRHandKeypoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWMRHandKeypoint"), 0, Get_Z_Construct_UEnum_WindowsMixedRealityHandTracking_EWMRHandKeypoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWMRHandKeypoint::Palm", (int64)EWMRHandKeypoint::Palm },
				{ "EWMRHandKeypoint::Wrist", (int64)EWMRHandKeypoint::Wrist },
				{ "EWMRHandKeypoint::ThumbMetacarpal", (int64)EWMRHandKeypoint::ThumbMetacarpal },
				{ "EWMRHandKeypoint::ThumbProximal", (int64)EWMRHandKeypoint::ThumbProximal },
				{ "EWMRHandKeypoint::ThumbDistal", (int64)EWMRHandKeypoint::ThumbDistal },
				{ "EWMRHandKeypoint::ThumbTip", (int64)EWMRHandKeypoint::ThumbTip },
				{ "EWMRHandKeypoint::IndexMetacarpal", (int64)EWMRHandKeypoint::IndexMetacarpal },
				{ "EWMRHandKeypoint::IndexProximal", (int64)EWMRHandKeypoint::IndexProximal },
				{ "EWMRHandKeypoint::IndexIntermediate", (int64)EWMRHandKeypoint::IndexIntermediate },
				{ "EWMRHandKeypoint::IndexDistal", (int64)EWMRHandKeypoint::IndexDistal },
				{ "EWMRHandKeypoint::IndexTip", (int64)EWMRHandKeypoint::IndexTip },
				{ "EWMRHandKeypoint::MiddleMetacarpal", (int64)EWMRHandKeypoint::MiddleMetacarpal },
				{ "EWMRHandKeypoint::MiddleProximal", (int64)EWMRHandKeypoint::MiddleProximal },
				{ "EWMRHandKeypoint::MiddleIntermediate", (int64)EWMRHandKeypoint::MiddleIntermediate },
				{ "EWMRHandKeypoint::MiddleDistal", (int64)EWMRHandKeypoint::MiddleDistal },
				{ "EWMRHandKeypoint::MiddleTip", (int64)EWMRHandKeypoint::MiddleTip },
				{ "EWMRHandKeypoint::RingMetacarpal", (int64)EWMRHandKeypoint::RingMetacarpal },
				{ "EWMRHandKeypoint::RingProximal", (int64)EWMRHandKeypoint::RingProximal },
				{ "EWMRHandKeypoint::RingIntermediate", (int64)EWMRHandKeypoint::RingIntermediate },
				{ "EWMRHandKeypoint::RingDistal", (int64)EWMRHandKeypoint::RingDistal },
				{ "EWMRHandKeypoint::RingTip", (int64)EWMRHandKeypoint::RingTip },
				{ "EWMRHandKeypoint::LittleMetacarpal", (int64)EWMRHandKeypoint::LittleMetacarpal },
				{ "EWMRHandKeypoint::LittleProximal", (int64)EWMRHandKeypoint::LittleProximal },
				{ "EWMRHandKeypoint::LittleIntermediate", (int64)EWMRHandKeypoint::LittleIntermediate },
				{ "EWMRHandKeypoint::LittleDistal", (int64)EWMRHandKeypoint::LittleDistal },
				{ "EWMRHandKeypoint::LittleTip", (int64)EWMRHandKeypoint::LittleTip },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * Transforms that are tracked on the hand.\n * Matches the enums from Windows.Perception.People.h to make it a direct mapping\n */" },
				{ "IndexDistal.Name", "EWMRHandKeypoint::IndexDistal" },
				{ "IndexIntermediate.Name", "EWMRHandKeypoint::IndexIntermediate" },
				{ "IndexMetacarpal.Name", "EWMRHandKeypoint::IndexMetacarpal" },
				{ "IndexProximal.Name", "EWMRHandKeypoint::IndexProximal" },
				{ "IndexTip.Name", "EWMRHandKeypoint::IndexTip" },
				{ "LittleDistal.Name", "EWMRHandKeypoint::LittleDistal" },
				{ "LittleIntermediate.Name", "EWMRHandKeypoint::LittleIntermediate" },
				{ "LittleMetacarpal.Name", "EWMRHandKeypoint::LittleMetacarpal" },
				{ "LittleProximal.Name", "EWMRHandKeypoint::LittleProximal" },
				{ "LittleTip.Name", "EWMRHandKeypoint::LittleTip" },
				{ "MiddleDistal.Name", "EWMRHandKeypoint::MiddleDistal" },
				{ "MiddleIntermediate.Name", "EWMRHandKeypoint::MiddleIntermediate" },
				{ "MiddleMetacarpal.Name", "EWMRHandKeypoint::MiddleMetacarpal" },
				{ "MiddleProximal.Name", "EWMRHandKeypoint::MiddleProximal" },
				{ "MiddleTip.Name", "EWMRHandKeypoint::MiddleTip" },
				{ "ModuleRelativePath", "Public/WindowsMixedRealityHandTrackingTypes.h" },
				{ "Palm.Name", "EWMRHandKeypoint::Palm" },
				{ "RingDistal.Name", "EWMRHandKeypoint::RingDistal" },
				{ "RingIntermediate.Name", "EWMRHandKeypoint::RingIntermediate" },
				{ "RingMetacarpal.Name", "EWMRHandKeypoint::RingMetacarpal" },
				{ "RingProximal.Name", "EWMRHandKeypoint::RingProximal" },
				{ "RingTip.Name", "EWMRHandKeypoint::RingTip" },
				{ "ThumbDistal.Name", "EWMRHandKeypoint::ThumbDistal" },
				{ "ThumbMetacarpal.Name", "EWMRHandKeypoint::ThumbMetacarpal" },
				{ "ThumbProximal.Name", "EWMRHandKeypoint::ThumbProximal" },
				{ "ThumbTip.Name", "EWMRHandKeypoint::ThumbTip" },
				{ "ToolTip", "Transforms that are tracked on the hand.\nMatches the enums from Windows.Perception.People.h to make it a direct mapping" },
				{ "Wrist.Name", "EWMRHandKeypoint::Wrist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking,
				nullptr,
				"EWMRHandKeypoint",
				"EWMRHandKeypoint",
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
