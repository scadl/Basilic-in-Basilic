// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsMixedRealityHandTracking/Private/WindowsMixedRealityHandTrackingLiveLinkRemapAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsMixedRealityHandTrackingLiveLinkRemapAsset() {}
// Cross Module References
	WINDOWSMIXEDREALITYHANDTRACKING_API UEnum* Z_Construct_UEnum_WindowsMixedRealityHandTracking_EQuatSwizzleAxis();
	UPackage* Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking();
	WINDOWSMIXEDREALITYHANDTRACKING_API UClass* Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_NoRegister();
	WINDOWSMIXEDREALITYHANDTRACKING_API UClass* Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
// End Cross Module References
	static UEnum* EQuatSwizzleAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WindowsMixedRealityHandTracking_EQuatSwizzleAxis, Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking(), TEXT("EQuatSwizzleAxis"));
		}
		return Singleton;
	}
	template<> WINDOWSMIXEDREALITYHANDTRACKING_API UEnum* StaticEnum<EQuatSwizzleAxis>()
	{
		return EQuatSwizzleAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuatSwizzleAxis(EQuatSwizzleAxis_StaticEnum, TEXT("/Script/WindowsMixedRealityHandTracking"), TEXT("EQuatSwizzleAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WindowsMixedRealityHandTracking_EQuatSwizzleAxis_Hash() { return 4067224704U; }
	UEnum* Z_Construct_UEnum_WindowsMixedRealityHandTracking_EQuatSwizzleAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuatSwizzleAxis"), 0, Get_Z_Construct_UEnum_WindowsMixedRealityHandTracking_EQuatSwizzleAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuatSwizzleAxis::X", (int64)EQuatSwizzleAxis::X },
				{ "EQuatSwizzleAxis::Y", (int64)EQuatSwizzleAxis::Y },
				{ "EQuatSwizzleAxis::Z", (int64)EQuatSwizzleAxis::Z },
				{ "EQuatSwizzleAxis::W", (int64)EQuatSwizzleAxis::W },
				{ "EQuatSwizzleAxis::MinusX", (int64)EQuatSwizzleAxis::MinusX },
				{ "EQuatSwizzleAxis::MinusY", (int64)EQuatSwizzleAxis::MinusY },
				{ "EQuatSwizzleAxis::MinusZ", (int64)EQuatSwizzleAxis::MinusZ },
				{ "EQuatSwizzleAxis::MinusW", (int64)EQuatSwizzleAxis::MinusW },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MinusW.DisplayName", "-W" },
				{ "MinusW.Name", "EQuatSwizzleAxis::MinusW" },
				{ "MinusX.DisplayName", "-X" },
				{ "MinusX.Name", "EQuatSwizzleAxis::MinusX" },
				{ "MinusY.DisplayName", "-Y" },
				{ "MinusY.Name", "EQuatSwizzleAxis::MinusY" },
				{ "MinusZ.DisplayName", "-Z" },
				{ "MinusZ.Name", "EQuatSwizzleAxis::MinusZ" },
				{ "ModuleRelativePath", "Private/WindowsMixedRealityHandTrackingLiveLinkRemapAsset.h" },
				{ "W.DisplayName", "W" },
				{ "W.Name", "EQuatSwizzleAxis::W" },
				{ "X.DisplayName", "X" },
				{ "X.Name", "EQuatSwizzleAxis::X" },
				{ "Y.DisplayName", "Y" },
				{ "Y.Name", "EQuatSwizzleAxis::Y" },
				{ "Z.DisplayName", "Z" },
				{ "Z.Name", "EQuatSwizzleAxis::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking,
				nullptr,
				"EQuatSwizzleAxis",
				"EQuatSwizzleAxis",
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
	void UWindowsMixedRealityHandTrackingLiveLinkRemapAsset::StaticRegisterNativesUWindowsMixedRealityHandTrackingLiveLinkRemapAsset()
	{
	}
	UClass* Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_NoRegister()
	{
		return UWindowsMixedRealityHandTrackingLiveLinkRemapAsset::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandTrackingBoneNameMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HandTrackingBoneNameMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandTrackingBoneNameMap_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HandTrackingBoneNameMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwizzleW_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SwizzleW;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwizzleW_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwizzleZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SwizzleZ;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwizzleZ_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwizzleY_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SwizzleY;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwizzleY_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwizzleX_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SwizzleX;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwizzleX_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRetargetRotationOnly_MetaData[];
#endif
		static void NewProp_bRetargetRotationOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRetargetRotationOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasMetacarpals_MetaData[];
#endif
		static void NewProp_bHasMetacarpals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasMetacarpals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * WindowsMixedReality HandTracking LiveLink remapping asset\n  */" },
		{ "IncludePath", "WindowsMixedRealityHandTrackingLiveLinkRemapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/WindowsMixedRealityHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "WindowsMixedReality HandTracking LiveLink remapping asset" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/WindowsMixedRealityHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap = { "HandTrackingBoneNameMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindowsMixedRealityHandTrackingLiveLinkRemapAsset, HandTrackingBoneNameMap), METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_Key_KeyProp = { "HandTrackingBoneNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_ValueProp = { "HandTrackingBoneNameMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/WindowsMixedRealityHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW = { "SwizzleW", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindowsMixedRealityHandTrackingLiveLinkRemapAsset, SwizzleW), Z_Construct_UEnum_WindowsMixedRealityHandTracking_EQuatSwizzleAxis, METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/WindowsMixedRealityHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ = { "SwizzleZ", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindowsMixedRealityHandTrackingLiveLinkRemapAsset, SwizzleZ), Z_Construct_UEnum_WindowsMixedRealityHandTracking_EQuatSwizzleAxis, METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/WindowsMixedRealityHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY = { "SwizzleY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindowsMixedRealityHandTrackingLiveLinkRemapAsset, SwizzleY), Z_Construct_UEnum_WindowsMixedRealityHandTracking_EQuatSwizzleAxis, METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Reorient the skeleton (swizzle the quaternion) to adjust for base skeleton and incoming skeleton differences */" },
		{ "ModuleRelativePath", "Private/WindowsMixedRealityHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "Reorient the skeleton (swizzle the quaternion) to adjust for base skeleton and incoming skeleton differences" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX = { "SwizzleX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWindowsMixedRealityHandTrackingLiveLinkRemapAsset, SwizzleX), Z_Construct_UEnum_WindowsMixedRealityHandTracking_EQuatSwizzleAxis, METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Only apply the orientation to each bone */" },
		{ "ModuleRelativePath", "Private/WindowsMixedRealityHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "Only apply the orientation to each bone" },
	};
#endif
	void Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_SetBit(void* Obj)
	{
		((UWindowsMixedRealityHandTrackingLiveLinkRemapAsset*)Obj)->bRetargetRotationOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly = { "bRetargetRotationOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWindowsMixedRealityHandTrackingLiveLinkRemapAsset), &Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** If true, remap the full human hand skeleton including metacarpals */" },
		{ "ModuleRelativePath", "Private/WindowsMixedRealityHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "If true, remap the full human hand skeleton including metacarpals" },
	};
#endif
	void Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_SetBit(void* Obj)
	{
		((UWindowsMixedRealityHandTrackingLiveLinkRemapAsset*)Obj)->bHasMetacarpals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals = { "bHasMetacarpals", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWindowsMixedRealityHandTrackingLiveLinkRemapAsset), &Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsMixedRealityHandTrackingLiveLinkRemapAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::ClassParams = {
		&UWindowsMixedRealityHandTrackingLiveLinkRemapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindowsMixedRealityHandTrackingLiveLinkRemapAsset, 4192783328);
	template<> WINDOWSMIXEDREALITYHANDTRACKING_API UClass* StaticClass<UWindowsMixedRealityHandTrackingLiveLinkRemapAsset>()
	{
		return UWindowsMixedRealityHandTrackingLiveLinkRemapAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset(Z_Construct_UClass_UWindowsMixedRealityHandTrackingLiveLinkRemapAsset, &UWindowsMixedRealityHandTrackingLiveLinkRemapAsset::StaticClass, TEXT("/Script/WindowsMixedRealityHandTracking"), TEXT("UWindowsMixedRealityHandTrackingLiveLinkRemapAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsMixedRealityHandTrackingLiveLinkRemapAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
