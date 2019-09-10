// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_SubInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SubInput() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SubInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_SubInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SubInput, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SubInput"), sizeof(FAnimNode_SubInput), Get_Z_Construct_UScriptStruct_FAnimNode_SubInput_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SubInput>()
{
	return FAnimNode_SubInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SubInput(FAnimNode_SubInput::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_SubInput"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInput
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SubInput")),new UScriptStruct::TCppStructOps<FAnimNode_SubInput>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInput;
	struct Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SubInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_InputPose_MetaData[] = {
		{ "Comment", "/** Input pose, optionally linked dynamically to another graph */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInput.h" },
		{ "ToolTip", "Input pose, optionally linked dynamically to another graph" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInput, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_InputPose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_InputPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_Graph_MetaData[] = {
		{ "Comment", "/** The graph that this sub-input node is in, filled in by the compiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInput.h" },
		{ "ToolTip", "The graph that this sub-input node is in, filled in by the compiler" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInput, Graph), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_Graph_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_Graph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** The name of this sub input node's pose, used to identify the input of this graph. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInput.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The name of this sub input node's pose, used to identify the input of this graph." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInput, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_InputPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_Graph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SubInput",
		sizeof(FAnimNode_SubInput),
		alignof(FAnimNode_SubInput),
		Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SubInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SubInput"), sizeof(FAnimNode_SubInput), Get_Z_Construct_UScriptStruct_FAnimNode_SubInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SubInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInput_Hash() { return 1911300856U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
