// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoloLensAR/Public/HoloLensARSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoloLensARSystem() {}
// Cross Module References
	HOLOLENSAR_API UClass* Z_Construct_UClass_UWMRARPin_NoRegister();
	HOLOLENSAR_API UClass* Z_Construct_UClass_UWMRARPin();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin();
	UPackage* Z_Construct_UPackage__Script_HoloLensAR();
	HOLOLENSAR_API UFunction* Z_Construct_UFunction_UWMRARPin_GetAnchorId();
	HOLOLENSAR_API UFunction* Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore();
// End Cross Module References
	void UWMRARPin::StaticRegisterNativesUWMRARPin()
	{
		UClass* Class = UWMRARPin::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnchorId", &UWMRARPin::execGetAnchorId },
			{ "GetIsInAnchorStore", &UWMRARPin::execGetIsInAnchorStore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics
	{
		struct WMRARPin_eventGetAnchorId_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WMRARPin_eventGetAnchorId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoloLensAR|ARPin" },
		{ "Keywords", "hololensar wmr pin ar all" },
		{ "ModuleRelativePath", "Public/HoloLensARSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWMRARPin, nullptr, "GetAnchorId", nullptr, nullptr, sizeof(WMRARPin_eventGetAnchorId_Parms), Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWMRARPin_GetAnchorId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWMRARPin_GetAnchorId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics
	{
		struct WMRARPin_eventGetIsInAnchorStore_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WMRARPin_eventGetIsInAnchorStore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WMRARPin_eventGetIsInAnchorStore_Parms), &Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoloLensAR|ARPin" },
		{ "Keywords", "hololensar wmr pin ar all" },
		{ "ModuleRelativePath", "Public/HoloLensARSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWMRARPin, nullptr, "GetIsInAnchorStore", nullptr, nullptr, sizeof(WMRARPin_eventGetIsInAnchorStore_Parms), Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWMRARPin_NoRegister()
	{
		return UWMRARPin::StaticClass();
	}
	struct Z_Construct_UClass_UWMRARPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWMRARPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARPin,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloLensAR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWMRARPin_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWMRARPin_GetAnchorId, "GetAnchorId" }, // 1432941400
		{ &Z_Construct_UFunction_UWMRARPin_GetIsInAnchorStore, "GetIsInAnchorStore" }, // 1607970454
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWMRARPin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoloLensARSystem.h" },
		{ "ModuleRelativePath", "Public/HoloLensARSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWMRARPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWMRARPin>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWMRARPin_Statics::ClassParams = {
		&UWMRARPin::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWMRARPin_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWMRARPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWMRARPin()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWMRARPin_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWMRARPin, 2785146614);
	template<> HOLOLENSAR_API UClass* StaticClass<UWMRARPin>()
	{
		return UWMRARPin::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWMRARPin(Z_Construct_UClass_UWMRARPin, &UWMRARPin::StaticClass, TEXT("/Script/HoloLensAR"), TEXT("UWMRARPin"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWMRARPin);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
