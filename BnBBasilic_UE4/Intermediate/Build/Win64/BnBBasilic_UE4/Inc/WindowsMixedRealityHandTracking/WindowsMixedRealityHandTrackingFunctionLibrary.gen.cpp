// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsMixedRealityHandTracking/Public/WindowsMixedRealityHandTrackingFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsMixedRealityHandTrackingFunctionLibrary() {}
// Cross Module References
	WINDOWSMIXEDREALITYHANDTRACKING_API UClass* Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_NoRegister();
	WINDOWSMIXEDREALITYHANDTRACKING_API UClass* Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking();
	WINDOWSMIXEDREALITYHANDTRACKING_API UFunction* Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	WINDOWSMIXEDREALITYHANDTRACKING_API UEnum* Z_Construct_UEnum_WindowsMixedRealityHandTracking_EWMRHandKeypoint();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
// End Cross Module References
	void UWindowsMixedRealityHandTrackingFunctionLibrary::StaticRegisterNativesUWindowsMixedRealityHandTrackingFunctionLibrary()
	{
		UClass* Class = UWindowsMixedRealityHandTrackingFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandJointTransform", &UWindowsMixedRealityHandTrackingFunctionLibrary::execGetHandJointTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics
	{
		struct WindowsMixedRealityHandTrackingFunctionLibrary_eventGetHandJointTransform_Parms
		{
			EControllerHand Hand;
			EWMRHandKeypoint Keypoint;
			FTransform Transform;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Keypoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Keypoint_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WindowsMixedRealityHandTrackingFunctionLibrary_eventGetHandJointTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealityHandTrackingFunctionLibrary_eventGetHandJointTransform_Parms), &Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsMixedRealityHandTrackingFunctionLibrary_eventGetHandJointTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_Keypoint = { "Keypoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsMixedRealityHandTrackingFunctionLibrary_eventGetHandJointTransform_Parms, Keypoint), Z_Construct_UEnum_WindowsMixedRealityHandTracking_EWMRHandKeypoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_Keypoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsMixedRealityHandTrackingFunctionLibrary_eventGetHandJointTransform_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_Keypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_Keypoint_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "HandTracking|WindowsMixedReality" },
		{ "Comment", "/**\n\x09Get Transform for a point on the hand.\n\n\x09@param Hand\n\x09@param Keypoint the specific joint or wrist point to fetch.\n\x09@param Transform Output parameter to write the data to.\n\x09@return true if the output param was populated with a valid value, false means that is is either unchanged or populated with a stale value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WindowsMixedRealityHandTrackingFunctionLibrary.h" },
		{ "ToolTip", "Get Transform for a point on the hand.\n\n@param Hand\n@param Keypoint the specific joint or wrist point to fetch.\n@param Transform Output parameter to write the data to.\n@return true if the output param was populated with a valid value, false means that is is either unchanged or populated with a stale value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary, nullptr, "GetHandJointTransform", nullptr, nullptr, sizeof(WindowsMixedRealityHandTrackingFunctionLibrary_eventGetHandJointTransform_Parms), Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_NoRegister()
	{
		return UWindowsMixedRealityHandTrackingFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WindowsMixedRealityHandTracking,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowsMixedRealityHandTrackingFunctionLibrary_GetHandJointTransform, "GetHandJointTransform" }, // 1390975444
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "WindowsMixedReality" },
		{ "IncludePath", "WindowsMixedRealityHandTrackingFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/WindowsMixedRealityHandTrackingFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsMixedRealityHandTrackingFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_Statics::ClassParams = {
		&UWindowsMixedRealityHandTrackingFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindowsMixedRealityHandTrackingFunctionLibrary, 1550465910);
	template<> WINDOWSMIXEDREALITYHANDTRACKING_API UClass* StaticClass<UWindowsMixedRealityHandTrackingFunctionLibrary>()
	{
		return UWindowsMixedRealityHandTrackingFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary(Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary, &UWindowsMixedRealityHandTrackingFunctionLibrary::StaticClass, TEXT("/Script/WindowsMixedRealityHandTracking"), TEXT("UWindowsMixedRealityHandTrackingFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsMixedRealityHandTrackingFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
