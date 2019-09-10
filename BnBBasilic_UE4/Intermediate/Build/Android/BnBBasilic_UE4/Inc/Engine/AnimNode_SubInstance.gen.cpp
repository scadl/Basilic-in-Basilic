// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNode_SubInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SubInstance() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SubInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_SubInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SubInstance, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SubInstance"), sizeof(FAnimNode_SubInstance), Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SubInstance>()
{
	return FAnimNode_SubInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SubInstance(FAnimNode_SubInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_SubInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SubInstance")),new UScriptStruct::TCppStructOps<FAnimNode_SubInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_SubInstance;
	struct Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InstanceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoseNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPoseNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputPoseNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputPoses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPoses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SubInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Optional tag used to identify this sub-instance */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "Optional tag used to identify this sub-instance" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_Tag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The class spawned for this sub-instance */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "The class spawned for this sub-instance" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceClass = { "InstanceClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, InstanceClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoseNames_MetaData[] = {
		{ "Comment", "/** List of input pose names, 1-1 with pose links about, built by the compiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "List of input pose names, 1-1 with pose links about, built by the compiler" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoseNames = { "InputPoseNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, InputPoseNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoseNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoseNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoseNames_Inner = { "InputPoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoses_MetaData[] = {
		{ "Comment", "/** \n\x09 *  Input poses for the node, intentionally not accessible because if there's no input\n\x09 *  nodes in the target class we don't want to show these as pins\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_SubInstance.h" },
		{ "ToolTip", "Input poses for the node, intentionally not accessible because if there's no input\nnodes in the target class we don't want to show these as pins" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoses = { "InputPoses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_SubInstance, InputPoses), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoses_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoses_Inner = { "InputPoses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InstanceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoseNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoseNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::NewProp_InputPoses_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_CustomProperty,
		&NewStructOps,
		"AnimNode_SubInstance",
		sizeof(FAnimNode_SubInstance),
		alignof(FAnimNode_SubInstance),
		Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SubInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SubInstance"), sizeof(FAnimNode_SubInstance), Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SubInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SubInstance_Hash() { return 38360864U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
