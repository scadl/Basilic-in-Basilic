// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/Variant.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariant() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariant_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariant();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UFunction* Z_Construct_UFunction_UVariant_GetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VARIANTMANAGERCONTENT_API UFunction* Z_Construct_UFunction_UVariant_GetDisplayText();
	VARIANTMANAGERCONTENT_API UFunction* Z_Construct_UFunction_UVariant_GetNumActors();
	VARIANTMANAGERCONTENT_API UFunction* Z_Construct_UFunction_UVariant_SetDisplayText();
	VARIANTMANAGERCONTENT_API UFunction* Z_Construct_UFunction_UVariant_SwitchOn();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantObjectBinding_NoRegister();
// End Cross Module References
	void UVariant::StaticRegisterNativesUVariant()
	{
		UClass* Class = UVariant::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActor", &UVariant::execGetActor },
			{ "GetDisplayText", &UVariant::execGetDisplayText },
			{ "GetNumActors", &UVariant::execGetNumActors },
			{ "SetDisplayText", &UVariant::execSetDisplayText },
			{ "SwitchOn", &UVariant::execSwitchOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVariant_GetActor_Statics
	{
		struct Variant_eventGetActor_Parms
		{
			int32 ActorIndex;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActorIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Variant_eventGetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ActorIndex = { "ActorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Variant_eventGetActor_Parms, ActorIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetActor_Statics::NewProp_ActorIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_GetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetActor", nullptr, nullptr, sizeof(Variant_eventGetActor_Parms), Z_Construct_UFunction_UVariant_GetActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_GetActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_GetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_GetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariant_GetDisplayText_Statics
	{
		struct Variant_eventGetDisplayText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVariant_GetDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Variant_eventGetDisplayText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetDisplayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_GetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetDisplayText", nullptr, nullptr, sizeof(Variant_eventGetDisplayText_Parms), Z_Construct_UFunction_UVariant_GetDisplayText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_GetDisplayText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_GetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_GetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariant_GetNumActors_Statics
	{
		struct Variant_eventGetNumActors_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariant_GetNumActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Variant_eventGetNumActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_GetNumActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_GetNumActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_GetNumActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_GetNumActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "GetNumActors", nullptr, nullptr, sizeof(Variant_eventGetNumActors_Parms), Z_Construct_UFunction_UVariant_GetNumActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetNumActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_GetNumActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVariant_GetNumActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_GetNumActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_GetNumActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariant_SetDisplayText_Statics
	{
		struct Variant_eventSetDisplayText_Parms
		{
			FText NewDisplayText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewDisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText = { "NewDisplayText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Variant_eventSetDisplayText_Parms, NewDisplayText), METADATA_PARAMS(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariant_SetDisplayText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariant_SetDisplayText_Statics::NewProp_NewDisplayText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_SetDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "Comment", "//~ End UObject Interface\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_SetDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "SetDisplayText", nullptr, nullptr, sizeof(Variant_eventSetDisplayText_Parms), Z_Construct_UFunction_UVariant_SetDisplayText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVariant_SetDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_SetDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_SetDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariant_SwitchOn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariant_SwitchOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Variant" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariant_SwitchOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariant, nullptr, "SwitchOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariant_SwitchOn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVariant_SwitchOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariant_SwitchOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVariant_SwitchOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVariant_NoRegister()
	{
		return UVariant::StaticClass();
	}
	struct Z_Construct_UClass_UVariant_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectBindings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVariant_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariant_GetActor, "GetActor" }, // 623095305
		{ &Z_Construct_UFunction_UVariant_GetDisplayText, "GetDisplayText" }, // 2648030851
		{ &Z_Construct_UFunction_UVariant_GetNumActors, "GetNumActors" }, // 692908702
		{ &Z_Construct_UFunction_UVariant_SetDisplayText, "SetDisplayText" }, // 2878611564
		{ &Z_Construct_UFunction_UVariant_SwitchOn, "SwitchOn" }, // 3199718949
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariant_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Variant.h" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Variant.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings = { "ObjectBindings", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariant, ObjectBindings), METADATA_PARAMS(Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_Inner = { "ObjectBindings", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVariantObjectBinding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText_MetaData[] = {
		{ "Comment", "// The display name used to be a property. Use the non-deprecated, non-property version from now on\n" },
		{ "ModuleRelativePath", "Public/Variant.h" },
		{ "ToolTip", "The display name used to be a property. Use the non-deprecated, non-property version from now on" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0040000020000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVariant, DisplayText_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_ObjectBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVariant_Statics::NewProp_DisplayText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVariant_Statics::ClassParams = {
		&UVariant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVariant_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVariant_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVariant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVariant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVariant, 2732563041);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UVariant>()
	{
		return UVariant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVariant(Z_Construct_UClass_UVariant, &UVariant::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("UVariant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariant);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVariant)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
