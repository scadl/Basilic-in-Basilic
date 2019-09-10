// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidDeviceProfileSelector/Public/AndroidJavaSurfaceViewDevices.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidJavaSurfaceViewDevices() {}
// Cross Module References
	ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FJavaSurfaceViewDevice();
	UPackage* Z_Construct_UPackage__Script_AndroidDeviceProfileSelector();
	ANDROIDDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_NoRegister();
	ANDROIDDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UAndroidJavaSurfaceViewDevices();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FJavaSurfaceViewDevice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANDROIDDEVICEPROFILESELECTOR_API uint32 Get_Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice, Z_Construct_UPackage__Script_AndroidDeviceProfileSelector(), TEXT("JavaSurfaceViewDevice"), sizeof(FJavaSurfaceViewDevice), Get_Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Hash());
	}
	return Singleton;
}
template<> ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* StaticStruct<FJavaSurfaceViewDevice>()
{
	return FJavaSurfaceViewDevice::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJavaSurfaceViewDevice(FJavaSurfaceViewDevice::StaticStruct, TEXT("/Script/AndroidDeviceProfileSelector"), TEXT("JavaSurfaceViewDevice"), false, nullptr, nullptr);
static struct FScriptStruct_AndroidDeviceProfileSelector_StaticRegisterNativesFJavaSurfaceViewDevice
{
	FScriptStruct_AndroidDeviceProfileSelector_StaticRegisterNativesFJavaSurfaceViewDevice()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("JavaSurfaceViewDevice")),new UScriptStruct::TCppStructOps<FJavaSurfaceViewDevice>);
	}
} ScriptStruct_AndroidDeviceProfileSelector_StaticRegisterNativesFJavaSurfaceViewDevice;
	struct Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manufacturer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Manufacturer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidJavaSurfaceViewDevices.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJavaSurfaceViewDevice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Model_MetaData[] = {
		{ "ModuleRelativePath", "Public/AndroidJavaSurfaceViewDevices.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJavaSurfaceViewDevice, Model), METADATA_PARAMS(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Model_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Model_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Manufacturer_MetaData[] = {
		{ "ModuleRelativePath", "Public/AndroidJavaSurfaceViewDevices.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Manufacturer = { "Manufacturer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJavaSurfaceViewDevice, Manufacturer), METADATA_PARAMS(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Manufacturer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Manufacturer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Model,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Manufacturer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
		nullptr,
		&NewStructOps,
		"JavaSurfaceViewDevice",
		sizeof(FJavaSurfaceViewDevice),
		alignof(FJavaSurfaceViewDevice),
		Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJavaSurfaceViewDevice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AndroidDeviceProfileSelector();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JavaSurfaceViewDevice"), sizeof(FJavaSurfaceViewDevice), Get_Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Hash() { return 2717790129U; }
	void UAndroidJavaSurfaceViewDevices::StaticRegisterNativesUAndroidJavaSurfaceViewDevices()
	{
	}
	UClass* Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_NoRegister()
	{
		return UAndroidJavaSurfaceViewDevices::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceViewDevices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SurfaceViewDevices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfaceViewDevices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidJavaSurfaceViewDevices.h" },
		{ "ModuleRelativePath", "Public/AndroidJavaSurfaceViewDevices.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices_MetaData[] = {
		{ "Category", "Matching Rules" },
		{ "Comment", "/** Array of devices that require the java view scaling workaround */" },
		{ "ModuleRelativePath", "Public/AndroidJavaSurfaceViewDevices.h" },
		{ "ToolTip", "Array of devices that require the java view scaling workaround" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices = { "SurfaceViewDevices", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAndroidJavaSurfaceViewDevices, SurfaceViewDevices), METADATA_PARAMS(Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices_Inner = { "SurfaceViewDevices", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJavaSurfaceViewDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidJavaSurfaceViewDevices>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::ClassParams = {
		&UAndroidJavaSurfaceViewDevices::StaticClass,
		"DeviceProfiles",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidJavaSurfaceViewDevices()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndroidJavaSurfaceViewDevices, 1145845734);
	template<> ANDROIDDEVICEPROFILESELECTOR_API UClass* StaticClass<UAndroidJavaSurfaceViewDevices>()
	{
		return UAndroidJavaSurfaceViewDevices::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidJavaSurfaceViewDevices(Z_Construct_UClass_UAndroidJavaSurfaceViewDevices, &UAndroidJavaSurfaceViewDevices::StaticClass, TEXT("/Script/AndroidDeviceProfileSelector"), TEXT("UAndroidJavaSurfaceViewDevices"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidJavaSurfaceViewDevices);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
