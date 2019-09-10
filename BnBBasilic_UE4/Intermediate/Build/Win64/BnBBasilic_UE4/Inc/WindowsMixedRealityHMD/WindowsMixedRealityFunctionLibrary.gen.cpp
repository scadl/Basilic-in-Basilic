// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsMixedRealityHMD/Classes/WindowsMixedRealityFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsMixedRealityFunctionLibrary() {}
// Cross Module References
	WINDOWSMIXEDREALITYHMD_API UFunction* Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_WindowsMixedRealityHMD();
	WINDOWSMIXEDREALITYHMD_API UEnum* Z_Construct_UEnum_WindowsMixedRealityHMD_EHMDSpatialLocatability();
	WINDOWSMIXEDREALITYHMD_API UScriptStruct* Z_Construct_UScriptStruct_FPointerPoseInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	WINDOWSMIXEDREALITYHMD_API UClass* Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_NoRegister();
	WINDOWSMIXEDREALITYHMD_API UClass* Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	WINDOWSMIXEDREALITYHMD_API UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	WINDOWSMIXEDREALITYHMD_API UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString();
	WINDOWSMIXEDREALITYHMD_API UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive();
	WINDOWSMIXEDREALITYHMD_API UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque();
	WINDOWSMIXEDREALITYHMD_API UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable();
	WINDOWSMIXEDREALITYHMD_API UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter();
	WINDOWSMIXEDREALITYHMD_API UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics
	{
		struct _Script_WindowsMixedRealityHMD_eventTrackingChangeCallback_Parms
		{
			EHMDSpatialLocatability locatability;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_locatability;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_locatability_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::NewProp_locatability = { "locatability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_WindowsMixedRealityHMD_eventTrackingChangeCallback_Parms, locatability), Z_Construct_UEnum_WindowsMixedRealityHMD_EHMDSpatialLocatability, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::NewProp_locatability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::NewProp_locatability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::NewProp_locatability_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WindowsMixedRealityHMD, nullptr, "TrackingChangeCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_WindowsMixedRealityHMD_eventTrackingChangeCallback_Parms), Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_WindowsMixedRealityHMD_TrackingChangeCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EHMDSpatialLocatability_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WindowsMixedRealityHMD_EHMDSpatialLocatability, Z_Construct_UPackage__Script_WindowsMixedRealityHMD(), TEXT("EHMDSpatialLocatability"));
		}
		return Singleton;
	}
	template<> WINDOWSMIXEDREALITYHMD_API UEnum* StaticEnum<EHMDSpatialLocatability>()
	{
		return EHMDSpatialLocatability_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHMDSpatialLocatability(EHMDSpatialLocatability_StaticEnum, TEXT("/Script/WindowsMixedRealityHMD"), TEXT("EHMDSpatialLocatability"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WindowsMixedRealityHMD_EHMDSpatialLocatability_Hash() { return 3453246511U; }
	UEnum* Z_Construct_UEnum_WindowsMixedRealityHMD_EHMDSpatialLocatability()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WindowsMixedRealityHMD();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHMDSpatialLocatability"), 0, Get_Z_Construct_UEnum_WindowsMixedRealityHMD_EHMDSpatialLocatability_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHMDSpatialLocatability::Unavailable", (int64)EHMDSpatialLocatability::Unavailable },
				{ "EHMDSpatialLocatability::OrientationOnly", (int64)EHMDSpatialLocatability::OrientationOnly },
				{ "EHMDSpatialLocatability::PositionalTrackingActivating", (int64)EHMDSpatialLocatability::PositionalTrackingActivating },
				{ "EHMDSpatialLocatability::PositionalTrackingActive", (int64)EHMDSpatialLocatability::PositionalTrackingActive },
				{ "EHMDSpatialLocatability::PositionalTrackingInhibited", (int64)EHMDSpatialLocatability::PositionalTrackingInhibited },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
				{ "OrientationOnly.Name", "EHMDSpatialLocatability::OrientationOnly" },
				{ "PositionalTrackingActivating.Name", "EHMDSpatialLocatability::PositionalTrackingActivating" },
				{ "PositionalTrackingActive.Name", "EHMDSpatialLocatability::PositionalTrackingActive" },
				{ "PositionalTrackingInhibited.Name", "EHMDSpatialLocatability::PositionalTrackingInhibited" },
				{ "Unavailable.Name", "EHMDSpatialLocatability::Unavailable" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WindowsMixedRealityHMD,
				nullptr,
				"EHMDSpatialLocatability",
				"EHMDSpatialLocatability",
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
class UScriptStruct* FPointerPoseInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WINDOWSMIXEDREALITYHMD_API uint32 Get_Z_Construct_UScriptStruct_FPointerPoseInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointerPoseInfo, Z_Construct_UPackage__Script_WindowsMixedRealityHMD(), TEXT("PointerPoseInfo"), sizeof(FPointerPoseInfo), Get_Z_Construct_UScriptStruct_FPointerPoseInfo_Hash());
	}
	return Singleton;
}
template<> WINDOWSMIXEDREALITYHMD_API UScriptStruct* StaticStruct<FPointerPoseInfo>()
{
	return FPointerPoseInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointerPoseInfo(FPointerPoseInfo::StaticStruct, TEXT("/Script/WindowsMixedRealityHMD"), TEXT("PointerPoseInfo"), false, nullptr, nullptr);
static struct FScriptStruct_WindowsMixedRealityHMD_StaticRegisterNativesFPointerPoseInfo
{
	FScriptStruct_WindowsMixedRealityHMD_StaticRegisterNativesFPointerPoseInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointerPoseInfo")),new UScriptStruct::TCppStructOps<FPointerPoseInfo>);
	}
} ScriptStruct_WindowsMixedRealityHMD_StaticRegisterNativesFPointerPoseInfo;
	struct Z_Construct_UScriptStruct_FPointerPoseInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Up;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointerPoseInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "WindowsMixedRealityHMD" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointerPoseInfo, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Orientation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Up_MetaData[] = {
		{ "Category", "WindowsMixedRealityHMD" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointerPoseInfo, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Up_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Up_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "WindowsMixedRealityHMD" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointerPoseInfo, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Direction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "WindowsMixedRealityHMD" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointerPoseInfo, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Origin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Up,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::NewProp_Origin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WindowsMixedRealityHMD,
		nullptr,
		&NewStructOps,
		"PointerPoseInfo",
		sizeof(FPointerPoseInfo),
		alignof(FPointerPoseInfo),
		Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointerPoseInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointerPoseInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WindowsMixedRealityHMD();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointerPoseInfo"), sizeof(FPointerPoseInfo), Get_Z_Construct_UScriptStruct_FPointerPoseInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointerPoseInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointerPoseInfo_Hash() { return 3175980672U; }
	void UWindowsMixedRealityFunctionLibrary::StaticRegisterNativesUWindowsMixedRealityFunctionLibrary()
	{
		UClass* Class = UWindowsMixedRealityFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPointerPoseInfo", &UWindowsMixedRealityFunctionLibrary::execGetPointerPoseInfo },
			{ "GetVersionString", &UWindowsMixedRealityFunctionLibrary::execGetVersionString },
			{ "IsCurrentlyImmersive", &UWindowsMixedRealityFunctionLibrary::execIsCurrentlyImmersive },
			{ "IsDisplayOpaque", &UWindowsMixedRealityFunctionLibrary::execIsDisplayOpaque },
			{ "IsTrackingAvailable", &UWindowsMixedRealityFunctionLibrary::execIsTrackingAvailable },
			{ "LockMouseToCenter", &UWindowsMixedRealityFunctionLibrary::execLockMouseToCenter },
			{ "ToggleImmersive", &UWindowsMixedRealityFunctionLibrary::execToggleImmersive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics
	{
		struct WindowsMixedRealityFunctionLibrary_eventGetPointerPoseInfo_Parms
		{
			EControllerHand hand;
			FPointerPoseInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsMixedRealityFunctionLibrary_eventGetPointerPoseInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FPointerPoseInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::NewProp_hand = { "hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsMixedRealityFunctionLibrary_eventGetPointerPoseInfo_Parms, hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::NewProp_hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::NewProp_hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::NewProp_hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowsMixedRealityHMD" },
		{ "Comment", "/**\n\x09 * Returns the pose information to determine what a WMR device is pointing at.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
		{ "ToolTip", "Returns the pose information to determine what a WMR device is pointing at." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary, nullptr, "GetPointerPoseInfo", nullptr, nullptr, sizeof(WindowsMixedRealityFunctionLibrary_eventGetPointerPoseInfo_Parms), Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString_Statics
	{
		struct WindowsMixedRealityFunctionLibrary_eventGetVersionString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsMixedRealityFunctionLibrary_eventGetVersionString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowsMixedRealityHMD" },
		{ "Comment", "/**\n\x09* Returns name of WindowsMR device type.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
		{ "ToolTip", "Returns name of WindowsMR device type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary, nullptr, "GetVersionString", nullptr, nullptr, sizeof(WindowsMixedRealityFunctionLibrary_eventGetVersionString_Parms), Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics
	{
		struct WindowsMixedRealityFunctionLibrary_eventIsCurrentlyImmersive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WindowsMixedRealityFunctionLibrary_eventIsCurrentlyImmersive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealityFunctionLibrary_eventIsCurrentlyImmersive_Parms), &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowsMixedRealityHMD" },
		{ "Comment", "/**\n\x09* Returns true if currently rendering immersive, or false if rendering as a slate.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
		{ "ToolTip", "Returns true if currently rendering immersive, or false if rendering as a slate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary, nullptr, "IsCurrentlyImmersive", nullptr, nullptr, sizeof(WindowsMixedRealityFunctionLibrary_eventIsCurrentlyImmersive_Parms), Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics
	{
		struct WindowsMixedRealityFunctionLibrary_eventIsDisplayOpaque_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WindowsMixedRealityFunctionLibrary_eventIsDisplayOpaque_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealityFunctionLibrary_eventIsDisplayOpaque_Parms), &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowsMixedRealityHMD" },
		{ "Comment", "/**\n\x09* Returns true if running on a WMR VR device, false if running on HoloLens.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
		{ "ToolTip", "Returns true if running on a WMR VR device, false if running on HoloLens." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary, nullptr, "IsDisplayOpaque", nullptr, nullptr, sizeof(WindowsMixedRealityFunctionLibrary_eventIsDisplayOpaque_Parms), Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics
	{
		struct WindowsMixedRealityFunctionLibrary_eventIsTrackingAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WindowsMixedRealityFunctionLibrary_eventIsTrackingAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealityFunctionLibrary_eventIsTrackingAvailable_Parms), &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowsMixedRealityHMD" },
		{ "Comment", "/**\n\x09 * Returns true if a WMR VR device or HoloLens are tracking the environment.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
		{ "ToolTip", "Returns true if a WMR VR device or HoloLens are tracking the environment." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary, nullptr, "IsTrackingAvailable", nullptr, nullptr, sizeof(WindowsMixedRealityFunctionLibrary_eventIsTrackingAvailable_Parms), Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics
	{
		struct WindowsMixedRealityFunctionLibrary_eventLockMouseToCenter_Parms
		{
			bool locked;
		};
		static void NewProp_locked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_locked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::NewProp_locked_SetBit(void* Obj)
	{
		((WindowsMixedRealityFunctionLibrary_eventLockMouseToCenter_Parms*)Obj)->locked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::NewProp_locked = { "locked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealityFunctionLibrary_eventLockMouseToCenter_Parms), &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::NewProp_locked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::NewProp_locked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowsMixedRealityHMD" },
		{ "Comment", "/**\n\x09* Locks the mouse cursor to the center of the screen if the hmd is worn.\n\x09* Default is true to help guarantee mouse focus when the hmd is worn.\n\x09* Set this to false to override the default behavior if your application requires free mouse movement.\n\x09* locked: true to lock to center, false to not lock.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
		{ "ToolTip", "Locks the mouse cursor to the center of the screen if the hmd is worn.\nDefault is true to help guarantee mouse focus when the hmd is worn.\nSet this to false to override the default behavior if your application requires free mouse movement.\nlocked: true to lock to center, false to not lock." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary, nullptr, "LockMouseToCenter", nullptr, nullptr, sizeof(WindowsMixedRealityFunctionLibrary_eventLockMouseToCenter_Parms), Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics
	{
		struct WindowsMixedRealityFunctionLibrary_eventToggleImmersive_Parms
		{
			bool immersive;
		};
		static void NewProp_immersive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_immersive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::NewProp_immersive_SetBit(void* Obj)
	{
		((WindowsMixedRealityFunctionLibrary_eventToggleImmersive_Parms*)Obj)->immersive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::NewProp_immersive = { "immersive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealityFunctionLibrary_eventToggleImmersive_Parms), &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::NewProp_immersive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::NewProp_immersive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowsMixedRealityHMD" },
		{ "Comment", "/**\n\x09* Sets game context to immersive or slate.\n\x09* immersive: true for immersive context, false for slate.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
		{ "ToolTip", "Sets game context to immersive or slate.\nimmersive: true for immersive context, false for slate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary, nullptr, "ToggleImmersive", nullptr, nullptr, sizeof(WindowsMixedRealityFunctionLibrary_eventToggleImmersive_Parms), Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_NoRegister()
	{
		return UWindowsMixedRealityFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WindowsMixedRealityHMD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetPointerPoseInfo, "GetPointerPoseInfo" }, // 1447145911
		{ &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_GetVersionString, "GetVersionString" }, // 56678595
		{ &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsCurrentlyImmersive, "IsCurrentlyImmersive" }, // 3875529468
		{ &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsDisplayOpaque, "IsDisplayOpaque" }, // 3416956040
		{ &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_IsTrackingAvailable, "IsTrackingAvailable" }, // 3712061466
		{ &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_LockMouseToCenter, "LockMouseToCenter" }, // 1838341730
		{ &Z_Construct_UFunction_UWindowsMixedRealityFunctionLibrary_ToggleImmersive, "ToggleImmersive" }, // 462953803
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Windows Mixed Reality Extensions Function Library\n*/" },
		{ "IncludePath", "WindowsMixedRealityFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealityFunctionLibrary.h" },
		{ "ToolTip", "Windows Mixed Reality Extensions Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsMixedRealityFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_Statics::ClassParams = {
		&UWindowsMixedRealityFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindowsMixedRealityFunctionLibrary, 4025548154);
	template<> WINDOWSMIXEDREALITYHMD_API UClass* StaticClass<UWindowsMixedRealityFunctionLibrary>()
	{
		return UWindowsMixedRealityFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowsMixedRealityFunctionLibrary(Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary, &UWindowsMixedRealityFunctionLibrary::StaticClass, TEXT("/Script/WindowsMixedRealityHMD"), TEXT("UWindowsMixedRealityFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsMixedRealityFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
