// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusMR/Public/OculusMRFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMRFunctionLibrary() {}
// Cross Module References
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMRFunctionLibrary_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMRFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
	OCULUSMR_API UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_Settings_NoRegister();
	OCULUSMR_API UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	OCULUSMR_API UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent();
// End Cross Module References
	void UOculusMRFunctionLibrary::StaticRegisterNativesUOculusMRFunctionLibrary()
	{
		UClass* Class = UOculusMRFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOculusMRSettings", &UOculusMRFunctionLibrary::execGetOculusMRSettings },
			{ "GetTrackingReferenceComponent", &UOculusMRFunctionLibrary::execGetTrackingReferenceComponent },
			{ "SetTrackingReferenceComponent", &UOculusMRFunctionLibrary::execSetTrackingReferenceComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics
	{
		struct OculusMRFunctionLibrary_eventGetOculusMRSettings_Parms
		{
			UOculusMR_Settings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventGetOculusMRSettings_Parms, ReturnValue), Z_Construct_UClass_UOculusMR_Settings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Get the OculusMR settings object\n" },
		{ "DisplayName", "Get Oculus MR Settings" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Get the OculusMR settings object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "GetOculusMRSettings", nullptr, nullptr, sizeof(OculusMRFunctionLibrary_eventGetOculusMRSettings_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics
	{
		struct OculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Get the component that the OculusMR camera is tracking\n" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Get the component that the OculusMR camera is tracking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "GetTrackingReferenceComponent", nullptr, nullptr, sizeof(OculusMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics
	{
		struct OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms
		{
			USceneComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
		{ "Comment", "// Set the component for the OculusMR camera to track\n" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
		{ "ToolTip", "Set the component for the OculusMR camera to track" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMRFunctionLibrary, nullptr, "SetTrackingReferenceComponent", nullptr, nullptr, sizeof(OculusMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms), Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOculusMRFunctionLibrary_NoRegister()
	{
		return UOculusMRFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOculusMRFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_GetOculusMRSettings, "GetOculusMRSettings" }, // 1590539889
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_GetTrackingReferenceComponent, "GetTrackingReferenceComponent" }, // 2478067488
		{ &Z_Construct_UFunction_UOculusMRFunctionLibrary_SetTrackingReferenceComponent, "SetTrackingReferenceComponent" }, // 134501425
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusMRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusMRFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusMRFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::ClassParams = {
		&UOculusMRFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusMRFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOculusMRFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOculusMRFunctionLibrary, 1926484451);
	template<> OCULUSMR_API UClass* StaticClass<UOculusMRFunctionLibrary>()
	{
		return UOculusMRFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOculusMRFunctionLibrary(Z_Construct_UClass_UOculusMRFunctionLibrary, &UOculusMRFunctionLibrary::StaticClass, TEXT("/Script/OculusMR"), TEXT("UOculusMRFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusMRFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
