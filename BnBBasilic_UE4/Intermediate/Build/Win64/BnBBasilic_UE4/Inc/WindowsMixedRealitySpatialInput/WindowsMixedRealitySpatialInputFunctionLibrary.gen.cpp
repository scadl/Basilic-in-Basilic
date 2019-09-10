// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsMixedRealitySpatialInput/Classes/WindowsMixedRealitySpatialInputFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsMixedRealitySpatialInputFunctionLibrary() {}
// Cross Module References
	WINDOWSMIXEDREALITYSPATIALINPUT_API UClass* Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_NoRegister();
	WINDOWSMIXEDREALITYSPATIALINPUT_API UClass* Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput();
	WINDOWSMIXEDREALITYSPATIALINPUT_API UFunction* Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures();
	WINDOWSMIXEDREALITYSPATIALINPUT_API UEnum* Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputAxisGestureType();
// End Cross Module References
	void UWindowsMixedRealitySpatialInputFunctionLibrary::StaticRegisterNativesUWindowsMixedRealitySpatialInputFunctionLibrary()
	{
		UClass* Class = UWindowsMixedRealitySpatialInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureGestures", &UWindowsMixedRealitySpatialInputFunctionLibrary::execCaptureGestures },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics
	{
		struct WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms
		{
			bool Tap;
			bool Hold;
			ESpatialInputAxisGestureType AxisGesture;
			bool NavigationAxisX;
			bool NavigationAxisY;
			bool NavigationAxisZ;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_NavigationAxisZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NavigationAxisZ;
		static void NewProp_NavigationAxisY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NavigationAxisY;
		static void NewProp_NavigationAxisX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NavigationAxisX;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisGesture;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisGesture_Underlying;
		static void NewProp_Hold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hold;
		static void NewProp_Tap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Tap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms), &Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisZ_SetBit(void* Obj)
	{
		((WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms*)Obj)->NavigationAxisZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisZ = { "NavigationAxisZ", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms), &Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisY_SetBit(void* Obj)
	{
		((WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms*)Obj)->NavigationAxisY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisY = { "NavigationAxisY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms), &Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisX_SetBit(void* Obj)
	{
		((WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms*)Obj)->NavigationAxisX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisX = { "NavigationAxisX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms), &Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisX_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_AxisGesture = { "AxisGesture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms, AxisGesture), Z_Construct_UEnum_WindowsMixedRealitySpatialInput_ESpatialInputAxisGestureType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_AxisGesture_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_Hold_SetBit(void* Obj)
	{
		((WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms*)Obj)->Hold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_Hold = { "Hold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms), &Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_Hold_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_Tap_SetBit(void* Obj)
	{
		((WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms*)Obj)->Tap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_Tap = { "Tap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms), &Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_Tap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_NavigationAxisX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_AxisGesture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_AxisGesture_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_Hold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::NewProp_Tap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::Function_MetaDataParams[] = {
		{ "Category", "WindowsMixedRealitySpatialInput" },
		{ "CPP_Default_AxisGesture", "None" },
		{ "CPP_Default_Hold", "false" },
		{ "CPP_Default_NavigationAxisX", "true" },
		{ "CPP_Default_NavigationAxisY", "true" },
		{ "CPP_Default_NavigationAxisZ", "true" },
		{ "CPP_Default_Tap", "false" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealitySpatialInputFunctionLibrary.h" },
		{ "ToolTip", "Specify which gestures to capture." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary, nullptr, "CaptureGestures", nullptr, nullptr, sizeof(WindowsMixedRealitySpatialInputFunctionLibrary_eventCaptureGestures_Parms), Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_NoRegister()
	{
		return UWindowsMixedRealitySpatialInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WindowsMixedRealitySpatialInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowsMixedRealitySpatialInputFunctionLibrary_CaptureGestures, "CaptureGestures" }, // 2785629002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Windows Mixed Reality Spatial Input Extensions Function Library\n*/" },
		{ "IncludePath", "WindowsMixedRealitySpatialInputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/WindowsMixedRealitySpatialInputFunctionLibrary.h" },
		{ "ToolTip", "Windows Mixed Reality Spatial Input Extensions Function Library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsMixedRealitySpatialInputFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_Statics::ClassParams = {
		&UWindowsMixedRealitySpatialInputFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindowsMixedRealitySpatialInputFunctionLibrary, 3880992946);
	template<> WINDOWSMIXEDREALITYSPATIALINPUT_API UClass* StaticClass<UWindowsMixedRealitySpatialInputFunctionLibrary>()
	{
		return UWindowsMixedRealitySpatialInputFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary(Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary, &UWindowsMixedRealitySpatialInputFunctionLibrary::StaticClass, TEXT("/Script/WindowsMixedRealitySpatialInput"), TEXT("UWindowsMixedRealitySpatialInputFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsMixedRealitySpatialInputFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
