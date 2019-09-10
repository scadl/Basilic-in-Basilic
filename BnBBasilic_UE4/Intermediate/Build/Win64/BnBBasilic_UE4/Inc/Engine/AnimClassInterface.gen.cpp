// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimClassInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimClassInterface() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPoseIndices();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStructProperty();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
class UScriptStruct* FCachedPoseIndices::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedPoseIndices_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedPoseIndices, Z_Construct_UPackage__Script_Engine(), TEXT("CachedPoseIndices"), sizeof(FCachedPoseIndices), Get_Z_Construct_UScriptStruct_FCachedPoseIndices_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCachedPoseIndices>()
{
	return FCachedPoseIndices::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedPoseIndices(FCachedPoseIndices::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedPoseIndices"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedPoseIndices
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedPoseIndices()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedPoseIndices")),new UScriptStruct::TCppStructOps<FCachedPoseIndices>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedPoseIndices;
	struct Z_Construct_UScriptStruct_FCachedPoseIndices_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderedSavedPoseNodeIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrderedSavedPoseNodeIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OrderedSavedPoseNodeIndices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Wrapper struct as we dont support nested containers */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Wrapper struct as we dont support nested containers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedPoseIndices>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices = { "OrderedSavedPoseNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCachedPoseIndices, OrderedSavedPoseNodeIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_Inner = { "OrderedSavedPoseNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::NewProp_OrderedSavedPoseNodeIndices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedPoseIndices",
		sizeof(FCachedPoseIndices),
		alignof(FCachedPoseIndices),
		Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedPoseIndices()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedPoseIndices_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedPoseIndices"), sizeof(FCachedPoseIndices), Get_Z_Construct_UScriptStruct_FCachedPoseIndices_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedPoseIndices_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedPoseIndices_Hash() { return 1741341997U; }
class UScriptStruct* FAnimBlueprintFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintFunction, Z_Construct_UPackage__Script_Engine(), TEXT("AnimBlueprintFunction"), sizeof(FAnimBlueprintFunction), Get_Z_Construct_UScriptStruct_FAnimBlueprintFunction_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimBlueprintFunction>()
{
	return FAnimBlueprintFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimBlueprintFunction(FAnimBlueprintFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimBlueprintFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimBlueprintFunction")),new UScriptStruct::TCppStructOps<FAnimBlueprintFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintFunction;
	struct Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImplemented_MetaData[];
#endif
		static void NewProp_bImplemented_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImplemented;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoseNodeProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPoseNodeProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPoseNodeProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputPoseNodeProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputPoseNodeProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoseNodeIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPoseNodeIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputPoseNodeIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoseNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPoseNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputPoseNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputPoseNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputPoseNodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes the input and output of an anim blueprint 'function' */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Describes the input and output of an anim blueprint 'function'" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintFunction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_MetaData[] = {
		{ "Comment", "/** Whether this function is actually implemented by this class - it could just be a stub */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Whether this function is actually implemented by this class - it could just be a stub" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_SetBit(void* Obj)
	{
		((FAnimBlueprintFunction*)Obj)->bImplemented = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented = { "bImplemented", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimBlueprintFunction), &Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputProperties_MetaData[] = {
		{ "Comment", "/** The input properties themselves */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The input properties themselves" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputProperties = { "InputProperties", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, InputProperties), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputProperties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputProperties_Inner = { "InputProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeProperties_MetaData[] = {
		{ "Comment", "/** The properties of the input nodes, patched up during link */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The properties of the input nodes, patched up during link" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeProperties = { "InputPoseNodeProperties", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, InputPoseNodeProperties), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeProperties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeProperties_Inner = { "InputPoseNodeProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStructProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeProperty_MetaData[] = {
		{ "Comment", "/** The property of the output node, patched up during link */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The property of the output node, patched up during link" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeProperty = { "OutputPoseNodeProperty", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, OutputPoseNodeProperty), Z_Construct_UClass_UStructProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeProperty_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_MetaData[] = {
		{ "Comment", "/** Indices of the input nodes */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Indices of the input nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices = { "InputPoseNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, InputPoseNodeIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_Inner = { "InputPoseNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_MetaData[] = {
		{ "Comment", "/** The names of the input poses */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The names of the input poses" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames = { "InputPoseNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, InputPoseNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_Inner = { "InputPoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex_MetaData[] = {
		{ "Comment", "/** Index of the output node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "Index of the output node" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex = { "OutputPoseNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, OutputPoseNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group_MetaData[] = {
		{ "Comment", "/** The group of the function */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The group of the function" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, Group), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of the function */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
		{ "ToolTip", "The name of the function" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimBlueprintFunction, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_bImplemented,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNodeIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_InputPoseNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_OutputPoseNodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimBlueprintFunction",
		sizeof(FAnimBlueprintFunction),
		alignof(FAnimBlueprintFunction),
		Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimBlueprintFunction"), sizeof(FAnimBlueprintFunction), Get_Z_Construct_UScriptStruct_FAnimBlueprintFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintFunction_Hash() { return 104904557U; }
	void UAnimClassInterface::StaticRegisterNativesUAnimClassInterface()
	{
	}
	UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister()
	{
		return UAnimClassInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAnimClassInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimClassInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimClassInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimClassInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimClassInterface_Statics::ClassParams = {
		&UAnimClassInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimClassInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimClassInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimClassInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimClassInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimClassInterface, 3010905820);
	template<> ENGINE_API UClass* StaticClass<UAnimClassInterface>()
	{
		return UAnimClassInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimClassInterface(Z_Construct_UClass_UAnimClassInterface, &UAnimClassInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimClassInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimClassInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
