// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/AnimCompressionTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompressionTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationKeyFormat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompressedSegment();
// End Cross Module References
	static UEnum* AnimationKeyFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimationKeyFormat, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationKeyFormat"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<AnimationKeyFormat>()
	{
		return AnimationKeyFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AnimationKeyFormat(AnimationKeyFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("AnimationKeyFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_AnimationKeyFormat_Hash() { return 4005191330U; }
	UEnum* Z_Construct_UEnum_Engine_AnimationKeyFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AnimationKeyFormat"), 0, Get_Z_Construct_UEnum_Engine_AnimationKeyFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AKF_ConstantKeyLerp", (int64)AKF_ConstantKeyLerp },
				{ "AKF_VariableKeyLerp", (int64)AKF_VariableKeyLerp },
				{ "AKF_PerTrackCompression", (int64)AKF_PerTrackCompression },
				{ "AKF_MAX", (int64)AKF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AKF_ConstantKeyLerp.Name", "AKF_ConstantKeyLerp" },
				{ "AKF_MAX.Name", "AKF_MAX" },
				{ "AKF_PerTrackCompression.Name", "AKF_PerTrackCompression" },
				{ "AKF_VariableKeyLerp.Name", "AKF_VariableKeyLerp" },
				{ "Comment", "/**\n * Indicates animation data key format.\n */" },
				{ "ModuleRelativePath", "Public/Animation/AnimCompressionTypes.h" },
				{ "ToolTip", "Indicates animation data key format." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"AnimationKeyFormat",
				"AnimationKeyFormat",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCompressedSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCompressedSegment_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompressedSegment, Z_Construct_UPackage__Script_Engine(), TEXT("CompressedSegment"), sizeof(FCompressedSegment), Get_Z_Construct_UScriptStruct_FCompressedSegment_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCompressedSegment>()
{
	return FCompressedSegment::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompressedSegment(FCompressedSegment::StaticStruct, TEXT("/Script/Engine"), TEXT("CompressedSegment"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCompressedSegment
{
	FScriptStruct_Engine_StaticRegisterNativesFCompressedSegment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompressedSegment")),new UScriptStruct::TCppStructOps<FCompressedSegment>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCompressedSegment;
	struct Z_Construct_UScriptStruct_FCompressedSegment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompressedSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a segment of the anim sequence that is compressed.\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCompressionTypes.h" },
		{ "ToolTip", "Represents a segment of the anim sequence that is compressed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompressedSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompressedSegment>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompressedSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CompressedSegment",
		sizeof(FCompressedSegment),
		alignof(FCompressedSegment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompressedSegment_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompressedSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompressedSegment_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompressedSegment"), sizeof(FCompressedSegment), Get_Z_Construct_UScriptStruct_FCompressedSegment_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCompressedSegment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompressedSegment_Hash() { return 1569847068U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
