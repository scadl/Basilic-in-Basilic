// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkPreset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPreset() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkPreset_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkPreset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourcePreset();
// End Cross Module References
	void ULiveLinkPreset::StaticRegisterNativesULiveLinkPreset()
	{
		UClass* Class = ULiveLinkPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyToClient", &ULiveLinkPreset::execApplyToClient },
			{ "BuildFromClient", &ULiveLinkPreset::execBuildFromClient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics
	{
		struct LiveLinkPreset_eventApplyToClient_Parms
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
	void Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkPreset_eventApplyToClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkPreset_eventApplyToClient_Parms), &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Remove all previous sources and subjects and add the sources and subjects from this preset.\n\x09 * @return True is all sources and subjects from this preset could be created and added.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
		{ "ToolTip", "Remove all previous sources and subjects and add the sources and subjects from this preset.\n@return True is all sources and subjects from this preset could be created and added." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "ApplyToClient", nullptr, nullptr, sizeof(LiveLinkPreset_eventApplyToClient_Parms), Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Reset this preset and build the list of sources and subjects from the client. */" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
		{ "ToolTip", "Reset this preset and build the list of sources and subjects from the client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "BuildFromClient", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULiveLinkPreset_NoRegister()
	{
		return ULiveLinkPreset::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subjects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sources_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient, "ApplyToClient" }, // 2864042045
		{ &Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient, "BuildFromClient" }, // 505642676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LiveLinkPreset.h" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects = { "Subjects", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkPreset, Subjects), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_Inner = { "Subjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSubjectPreset, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkPreset, Sources), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSourcePreset, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkPreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkPreset_Statics::ClassParams = {
		&ULiveLinkPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkPreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkPreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkPreset, 4134611141);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkPreset>()
	{
		return ULiveLinkPreset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkPreset(Z_Construct_UClass_ULiveLinkPreset, &ULiveLinkPreset::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkPreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkPreset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
