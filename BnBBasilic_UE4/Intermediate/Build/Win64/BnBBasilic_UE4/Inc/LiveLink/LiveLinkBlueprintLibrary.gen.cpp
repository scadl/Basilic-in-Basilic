// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBlueprintLibrary() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBlueprintLibrary_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransform();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectMetadata();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames();
// End Cross Module References
	void ULiveLinkBlueprintLibrary::StaticRegisterNativesULiveLinkBlueprintLibrary()
	{
		UClass* Class = ULiveLinkBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChildCount", &ULiveLinkBlueprintLibrary::execChildCount },
			{ "ComponentSpaceTransform", &ULiveLinkBlueprintLibrary::execComponentSpaceTransform },
			{ "EvaluateLiveLinkFrame", &ULiveLinkBlueprintLibrary::execEvaluateLiveLinkFrame },
			{ "EvaluateLiveLinkFrameAtSceneTime", &ULiveLinkBlueprintLibrary::execEvaluateLiveLinkFrameAtSceneTime },
			{ "EvaluateLiveLinkFrameAtWorldTimeOffset", &ULiveLinkBlueprintLibrary::execEvaluateLiveLinkFrameAtWorldTimeOffset },
			{ "EvaluateLiveLinkFrameWithSpecificRole", &ULiveLinkBlueprintLibrary::execEvaluateLiveLinkFrameWithSpecificRole },
			{ "GetBasicData", &ULiveLinkBlueprintLibrary::execGetBasicData },
			{ "GetChildren", &ULiveLinkBlueprintLibrary::execGetChildren },
			{ "GetCurves", &ULiveLinkBlueprintLibrary::execGetCurves },
			{ "GetLiveLinkEnabledSubjectNames", &ULiveLinkBlueprintLibrary::execGetLiveLinkEnabledSubjectNames },
			{ "GetLiveLinkSubjectRole", &ULiveLinkBlueprintLibrary::execGetLiveLinkSubjectRole },
			{ "GetLiveLinkSubjects", &ULiveLinkBlueprintLibrary::execGetLiveLinkSubjects },
			{ "GetMetadata", &ULiveLinkBlueprintLibrary::execGetMetadata },
			{ "GetParent", &ULiveLinkBlueprintLibrary::execGetParent },
			{ "GetPropertyValue", &ULiveLinkBlueprintLibrary::execGetPropertyValue },
			{ "GetRootTransform", &ULiveLinkBlueprintLibrary::execGetRootTransform },
			{ "GetSourceMachineName", &ULiveLinkBlueprintLibrary::execGetSourceMachineName },
			{ "GetSourceStatus", &ULiveLinkBlueprintLibrary::execGetSourceStatus },
			{ "GetSourceType", &ULiveLinkBlueprintLibrary::execGetSourceType },
			{ "GetSpecificLiveLinkSubjectRole", &ULiveLinkBlueprintLibrary::execGetSpecificLiveLinkSubjectRole },
			{ "GetTransformByIndex", &ULiveLinkBlueprintLibrary::execGetTransformByIndex },
			{ "GetTransformByName", &ULiveLinkBlueprintLibrary::execGetTransformByName },
			{ "HasParent", &ULiveLinkBlueprintLibrary::execHasParent },
			{ "IsLiveLinkSubjectEnabled", &ULiveLinkBlueprintLibrary::execIsLiveLinkSubjectEnabled },
			{ "IsSourceStillValid", &ULiveLinkBlueprintLibrary::execIsSourceStillValid },
			{ "IsSpecificLiveLinkSubjectEnabled", &ULiveLinkBlueprintLibrary::execIsSpecificLiveLinkSubjectEnabled },
			{ "NumberOfTransforms", &ULiveLinkBlueprintLibrary::execNumberOfTransforms },
			{ "ParentBoneSpaceTransform", &ULiveLinkBlueprintLibrary::execParentBoneSpaceTransform },
			{ "RemoveSource", &ULiveLinkBlueprintLibrary::execRemoveSource },
			{ "SetLiveLinkSubjectEnabled", &ULiveLinkBlueprintLibrary::execSetLiveLinkSubjectEnabled },
			{ "TransformName", &ULiveLinkBlueprintLibrary::execTransformName },
			{ "TransformNames", &ULiveLinkBlueprintLibrary::execTransformNames },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics
	{
		struct LiveLinkBlueprintLibrary_eventChildCount_Parms
		{
			FLiveLinkTransform LiveLinkTransform;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventChildCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::NewProp_LiveLinkTransform = { "LiveLinkTransform", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventChildCount_Parms, LiveLinkTransform), Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::NewProp_LiveLinkTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Returns the number of Children for a given LiveLink Transform\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the number of Children for a given LiveLink Transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "ChildCount", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventChildCount_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics
	{
		struct LiveLinkBlueprintLibrary_eventComponentSpaceTransform_Parms
		{
			FLiveLinkTransform LiveLinkTransform;
			FTransform Transform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventComponentSpaceTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::NewProp_LiveLinkTransform = { "LiveLinkTransform", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventComponentSpaceTransform_Parms, LiveLinkTransform), Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::NewProp_LiveLinkTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Returns the Transform value in Root Space for a given LiveLink Transform\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the Transform value in Root Space for a given LiveLink Transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "ComponentSpaceTransform", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventComponentSpaceTransform_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics
	{
		struct LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrame_Parms
		{
			FLiveLinkSubjectRepresentation SubjectRepresentation;
			FLiveLinkBaseBlueprintData OutBlueprintData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutBlueprintData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrame_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::NewProp_OutBlueprintData = { "OutBlueprintData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrame_Parms, OutBlueprintData), Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::NewProp_SubjectRepresentation = { "SubjectRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrame_Parms, SubjectRepresentation), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::NewProp_OutBlueprintData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::NewProp_SubjectRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LiveLink" },
		{ "CustomStructureParam", "OutBlueprintData" },
		{ "CustomThunk", "true" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "EvaluateLiveLinkFrame", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrame_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtSceneTime_Parms
		{
			FLiveLinkSubjectName SubjectName;
			TSubclassOf<ULiveLinkRole>  Role;
			FTimecode SceneTime;
			FLiveLinkBaseBlueprintData OutBlueprintData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutBlueprintData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SceneTime;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtSceneTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtSceneTime_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_OutBlueprintData = { "OutBlueprintData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtSceneTime_Parms, OutBlueprintData), Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_SceneTime = { "SceneTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtSceneTime_Parms, SceneTime), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtSceneTime_Parms, Role), Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtSceneTime_Parms, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_OutBlueprintData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_SceneTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LiveLink" },
		{ "Comment", "/** Fetches a frame on a subject for a specific role at a specified scene time (timecode). Output is evaluated based on the role */" },
		{ "CustomStructureParam", "OutBlueprintData" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Fetches a frame on a subject for a specific role at a specified scene time (timecode). Output is evaluated based on the role" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "EvaluateLiveLinkFrameAtSceneTime", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtSceneTime_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics
	{
		struct LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtWorldTimeOffset_Parms
		{
			FLiveLinkSubjectName SubjectName;
			TSubclassOf<ULiveLinkRole>  Role;
			float WorldTimeOffset;
			FLiveLinkBaseBlueprintData OutBlueprintData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutBlueprintData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTimeOffset;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtWorldTimeOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtWorldTimeOffset_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_OutBlueprintData = { "OutBlueprintData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtWorldTimeOffset_Parms, OutBlueprintData), Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_WorldTimeOffset = { "WorldTimeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtWorldTimeOffset_Parms, WorldTimeOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtWorldTimeOffset_Parms, Role), Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtWorldTimeOffset_Parms, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_OutBlueprintData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_WorldTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LiveLink" },
		{ "Comment", "/** Fetches a frame on a subject for a specific role at an offset from the application current time. Output is evaluated based on the role */" },
		{ "CustomStructureParam", "OutBlueprintData" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Fetches a frame on a subject for a specific role at an offset from the application current time. Output is evaluated based on the role" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "EvaluateLiveLinkFrameAtWorldTimeOffset", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameAtWorldTimeOffset_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics
	{
		struct LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameWithSpecificRole_Parms
		{
			FLiveLinkSubjectName SubjectName;
			TSubclassOf<ULiveLinkRole>  Role;
			FLiveLinkBaseBlueprintData OutBlueprintData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutBlueprintData;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameWithSpecificRole_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameWithSpecificRole_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::NewProp_OutBlueprintData = { "OutBlueprintData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameWithSpecificRole_Parms, OutBlueprintData), Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameWithSpecificRole_Parms, Role), Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameWithSpecificRole_Parms, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::NewProp_OutBlueprintData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LiveLink" },
		{ "Comment", "/** Fetches a frame on a subject for a specific role. Output is evaluated based on the role */" },
		{ "CustomStructureParam", "OutBlueprintData" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "EvaluateLiveLinkFrame" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Fetches a frame on a subject for a specific role. Output is evaluated based on the role" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "EvaluateLiveLinkFrameWithSpecificRole", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventEvaluateLiveLinkFrameWithSpecificRole_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetBasicData_Parms
		{
			FSubjectFrameHandle SubjectFrameHandle;
			FLiveLinkBasicBlueprintData BasicBlueprintData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasicBlueprintData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::NewProp_BasicBlueprintData = { "BasicBlueprintData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetBasicData_Parms, BasicBlueprintData), Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetBasicData_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::NewProp_BasicBlueprintData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::NewProp_SubjectFrameHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink|Animation" },
		{ "Comment", "// Returns the Subject base structure stored in the Subject Frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the Subject base structure stored in the Subject Frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetBasicData", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetBasicData_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetChildren_Parms
		{
			FLiveLinkTransform LiveLinkTransform;
			TArray<FLiveLinkTransform> Children;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetChildren_Parms, Children), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::NewProp_LiveLinkTransform = { "LiveLinkTransform", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetChildren_Parms, LiveLinkTransform), Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::NewProp_LiveLinkTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Returns an array of Child LiveLink Transforms for a given LiveLink Transform\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns an array of Child LiveLink Transforms for a given LiveLink Transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetChildren", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetChildren_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetCurves_Parms
		{
			FSubjectFrameHandle SubjectFrameHandle;
			TMap<FName,float> Curves;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Curves;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Curves_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Curves_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetCurves_Parms, Curves), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::NewProp_Curves_Key_KeyProp = { "Curves_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::NewProp_Curves_ValueProp = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetCurves_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::NewProp_Curves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::NewProp_Curves_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::NewProp_Curves_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::NewProp_SubjectFrameHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink|Animation" },
		{ "Comment", "// Returns the float curves stored in the Subject Frame as a map\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the float curves stored in the Subject Frame as a map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetCurves", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetCurves_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetLiveLinkEnabledSubjectNames_Parms
		{
			bool bIncludeVirtualSubject;
			TArray<FLiveLinkSubjectName> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bIncludeVirtualSubject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeVirtualSubject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetLiveLinkEnabledSubjectNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::NewProp_bIncludeVirtualSubject_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventGetLiveLinkEnabledSubjectNames_Parms*)Obj)->bIncludeVirtualSubject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::NewProp_bIncludeVirtualSubject = { "bIncludeVirtualSubject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventGetLiveLinkEnabledSubjectNames_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::NewProp_bIncludeVirtualSubject_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::NewProp_bIncludeVirtualSubject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Get a list of all enabled subject names */" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Get a list of all enabled subject names" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetLiveLinkEnabledSubjectNames", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetLiveLinkEnabledSubjectNames_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetLiveLinkSubjectRole_Parms
		{
			FLiveLinkSubjectName SubjectName;
			TSubclassOf<ULiveLinkRole>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetLiveLinkSubjectRole_Parms, ReturnValue), Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::NewProp_SubjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetLiveLinkSubjectRole_Parms, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::NewProp_SubjectName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::NewProp_SubjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Get the role of the subject with this name */" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Get the role of the subject with this name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetLiveLinkSubjectRole", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetLiveLinkSubjectRole_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetLiveLinkSubjects_Parms
		{
			bool bIncludeDisabledSubject;
			bool bIncludeDisal;
			TArray<FLiveLinkSubjectKey> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bIncludeDisal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeDisal;
		static void NewProp_bIncludeDisabledSubject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeDisabledSubject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetLiveLinkSubjects_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLiveLinkSubjectKey, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_bIncludeDisal_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventGetLiveLinkSubjects_Parms*)Obj)->bIncludeDisal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_bIncludeDisal = { "bIncludeDisal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventGetLiveLinkSubjects_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_bIncludeDisal_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_bIncludeDisabledSubject_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventGetLiveLinkSubjects_Parms*)Obj)->bIncludeDisabledSubject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_bIncludeDisabledSubject = { "bIncludeDisabledSubject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventGetLiveLinkSubjects_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_bIncludeDisabledSubject_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_bIncludeDisal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::NewProp_bIncludeDisabledSubject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Get a list of all subjects */" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Get a list of all subjects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetLiveLinkSubjects", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetLiveLinkSubjects_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetMetadata_Parms
		{
			FSubjectFrameHandle SubjectFrameHandle;
			FSubjectMetadata Metadata;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Metadata;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetMetadata_Parms, Metadata), Z_Construct_UScriptStruct_FSubjectMetadata, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetMetadata_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::NewProp_Metadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::NewProp_SubjectFrameHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink|Animation" },
		{ "Comment", "// Returns the Subject Metadata structure stored in the Subject Frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the Subject Metadata structure stored in the Subject Frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetMetadata", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetMetadata_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetParent_Parms
		{
			FLiveLinkTransform LiveLinkTransform;
			FLiveLinkTransform Parent;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetParent_Parms, Parent), Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::NewProp_LiveLinkTransform = { "LiveLinkTransform", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetParent_Parms, LiveLinkTransform), Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::NewProp_LiveLinkTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Returns the Parent LiveLink Transform if one exists or an Identity transform if no parent exists\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the Parent LiveLink Transform if one exists or an Identity transform if no parent exists" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetParent", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetParent_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetPropertyValue_Parms
		{
			FLiveLinkBasicBlueprintData BasicData;
			FName PropertyName;
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasicData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventGetPropertyValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventGetPropertyValue_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetPropertyValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetPropertyValue_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::NewProp_BasicData = { "BasicData", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetPropertyValue_Parms, BasicData), Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::NewProp_BasicData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Returns the value of a property stored in the Subject Frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the value of a property stored in the Subject Frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetPropertyValue", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetPropertyValue_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetRootTransform_Parms
		{
			FSubjectFrameHandle SubjectFrameHandle;
			FLiveLinkTransform LiveLinkTransform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::NewProp_LiveLinkTransform = { "LiveLinkTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetRootTransform_Parms, LiveLinkTransform), Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetRootTransform_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::NewProp_LiveLinkTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::NewProp_SubjectFrameHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink|Animation" },
		{ "Comment", "// Returns the Root Transform for the Subject Frame as a LiveLink Transform or the Identity if there are no transforms.\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the Root Transform for the Subject Frame as a LiveLink Transform or the Identity if there are no transforms." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetRootTransform", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetRootTransform_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetSourceMachineName_Parms
		{
			FLiveLinkSourceHandle SourceHandle;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetSourceMachineName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::NewProp_SourceHandle = { "SourceHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetSourceMachineName_Parms, SourceHandle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::NewProp_SourceHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Get the machine name of a LiveLink Source via its handle\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Get the machine name of a LiveLink Source via its handle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetSourceMachineName", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetSourceMachineName_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetSourceStatus_Parms
		{
			FLiveLinkSourceHandle SourceHandle;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetSourceStatus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::NewProp_SourceHandle = { "SourceHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetSourceStatus_Parms, SourceHandle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::NewProp_SourceHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Get the text status of a LiveLink Source via its handle\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Get the text status of a LiveLink Source via its handle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetSourceStatus", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetSourceStatus_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetSourceType_Parms
		{
			FLiveLinkSourceHandle SourceHandle;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetSourceType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::NewProp_SourceHandle = { "SourceHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetSourceType_Parms, SourceHandle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::NewProp_SourceHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Get the type of a LiveLink Source via its handle\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Get the type of a LiveLink Source via its handle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetSourceType", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetSourceType_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetSpecificLiveLinkSubjectRole_Parms
		{
			FLiveLinkSubjectKey SubjectKey;
			TSubclassOf<ULiveLinkRole>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetSpecificLiveLinkSubjectRole_Parms, ReturnValue), Z_Construct_UClass_ULiveLinkRole_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::NewProp_SubjectKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::NewProp_SubjectKey = { "SubjectKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetSpecificLiveLinkSubjectRole_Parms, SubjectKey), Z_Construct_UScriptStruct_FLiveLinkSubjectKey, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::NewProp_SubjectKey_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::NewProp_SubjectKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::NewProp_SubjectKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Get the role of a subject from a specific source */" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Get the role of a subject from a specific source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetSpecificLiveLinkSubjectRole", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetSpecificLiveLinkSubjectRole_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetTransformByIndex_Parms
		{
			FSubjectFrameHandle SubjectFrameHandle;
			int32 TransformIndex;
			FLiveLinkTransform LiveLinkTransform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkTransform;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TransformIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::NewProp_LiveLinkTransform = { "LiveLinkTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetTransformByIndex_Parms, LiveLinkTransform), Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::NewProp_TransformIndex = { "TransformIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetTransformByIndex_Parms, TransformIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetTransformByIndex_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::NewProp_LiveLinkTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::NewProp_TransformIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::NewProp_SubjectFrameHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink|Animation" },
		{ "Comment", "// Returns the LiveLink Transform stored in a Subject Frame at a given index. Returns an Identity transform if Transform Index is invalid.\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the LiveLink Transform stored in a Subject Frame at a given index. Returns an Identity transform if Transform Index is invalid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetTransformByIndex", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetTransformByIndex_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics
	{
		struct LiveLinkBlueprintLibrary_eventGetTransformByName_Parms
		{
			FSubjectFrameHandle SubjectFrameHandle;
			FName TransformName;
			FLiveLinkTransform LiveLinkTransform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TransformName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::NewProp_LiveLinkTransform = { "LiveLinkTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetTransformByName_Parms, LiveLinkTransform), Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::NewProp_TransformName = { "TransformName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetTransformByName_Parms, TransformName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventGetTransformByName_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::NewProp_LiveLinkTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::NewProp_TransformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::NewProp_SubjectFrameHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink|Animation" },
		{ "Comment", "// Returns the LiveLink Transform stored in a Subject Frame with a given name. Returns an Identity transform if Transform Name is invalid.\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the LiveLink Transform stored in a Subject Frame with a given name. Returns an Identity transform if Transform Name is invalid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "GetTransformByName", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventGetTransformByName_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics
	{
		struct LiveLinkBlueprintLibrary_eventHasParent_Parms
		{
			FLiveLinkTransform LiveLinkTransform;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventHasParent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventHasParent_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::NewProp_LiveLinkTransform = { "LiveLinkTransform", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventHasParent_Parms, LiveLinkTransform), Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::NewProp_LiveLinkTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Returns whether a given LiveLink Transform has a parent transform\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns whether a given LiveLink Transform has a parent transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "HasParent", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventHasParent_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics
	{
		struct LiveLinkBlueprintLibrary_eventIsLiveLinkSubjectEnabled_Parms
		{
			FLiveLinkSubjectName SubjectName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventIsLiveLinkSubjectEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventIsLiveLinkSubjectEnabled_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::NewProp_SubjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventIsLiveLinkSubjectEnabled_Parms, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::NewProp_SubjectName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::NewProp_SubjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Whether or not the client has a subject with this name enabled\n\x09 * Only 1 subject with the same name can be enabled.\n\x09 * At the start of the frame, a snapshot of the enabled subjects will be made.\n\x09 * That snapshot dictate which subject will be used for the duration of that frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Whether or not the client has a subject with this name enabled\nOnly 1 subject with the same name can be enabled.\nAt the start of the frame, a snapshot of the enabled subjects will be made.\nThat snapshot dictate which subject will be used for the duration of that frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "IsLiveLinkSubjectEnabled", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventIsLiveLinkSubjectEnabled_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics
	{
		struct LiveLinkBlueprintLibrary_eventIsSourceStillValid_Parms
		{
			FLiveLinkSourceHandle SourceHandle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventIsSourceStillValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventIsSourceStillValid_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::NewProp_SourceHandle = { "SourceHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventIsSourceStillValid_Parms, SourceHandle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::NewProp_SourceHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Checks whether the LiveLink Source is valid via its handle\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Checks whether the LiveLink Source is valid via its handle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "IsSourceStillValid", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventIsSourceStillValid_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics
	{
		struct LiveLinkBlueprintLibrary_eventIsSpecificLiveLinkSubjectEnabled_Parms
		{
			FLiveLinkSubjectKey SubjectKey;
			bool bUseSnapshot;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseSnapshot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSnapshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventIsSpecificLiveLinkSubjectEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventIsSpecificLiveLinkSubjectEnabled_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_bUseSnapshot_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventIsSpecificLiveLinkSubjectEnabled_Parms*)Obj)->bUseSnapshot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_bUseSnapshot = { "bUseSnapshot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventIsSpecificLiveLinkSubjectEnabled_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_bUseSnapshot_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_SubjectKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_SubjectKey = { "SubjectKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventIsSpecificLiveLinkSubjectEnabled_Parms, SubjectKey), Z_Construct_UScriptStruct_FLiveLinkSubjectKey, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_SubjectKey_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_SubjectKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_bUseSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::NewProp_SubjectKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Whether or not a subject from the specific source is the enabled subject.\n\x09 * Only 1 subject with the same name can be enabled.\n\x09 * At the start of the frame, a snapshot of the enabled subjects will be made.\n\x09 * That snapshot dictate which subject will be used for the duration of that frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Whether or not a subject from the specific source is the enabled subject.\nOnly 1 subject with the same name can be enabled.\nAt the start of the frame, a snapshot of the enabled subjects will be made.\nThat snapshot dictate which subject will be used for the duration of that frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "IsSpecificLiveLinkSubjectEnabled", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventIsSpecificLiveLinkSubjectEnabled_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics
	{
		struct LiveLinkBlueprintLibrary_eventNumberOfTransforms_Parms
		{
			FSubjectFrameHandle SubjectFrameHandle;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventNumberOfTransforms_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventNumberOfTransforms_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::NewProp_SubjectFrameHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink|Animation" },
		{ "Comment", "// Returns the number of Transforms stored in the Subject Frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the number of Transforms stored in the Subject Frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "NumberOfTransforms", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventNumberOfTransforms_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics
	{
		struct LiveLinkBlueprintLibrary_eventParentBoneSpaceTransform_Parms
		{
			FLiveLinkTransform LiveLinkTransform;
			FTransform Transform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventParentBoneSpaceTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::NewProp_LiveLinkTransform = { "LiveLinkTransform", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventParentBoneSpaceTransform_Parms, LiveLinkTransform), Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::NewProp_LiveLinkTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Returns the Transform value in Parent Space for a given LiveLink Transform\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the Transform value in Parent Space for a given LiveLink Transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "ParentBoneSpaceTransform", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventParentBoneSpaceTransform_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics
	{
		struct LiveLinkBlueprintLibrary_eventRemoveSource_Parms
		{
			FLiveLinkSourceHandle SourceHandle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventRemoveSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventRemoveSource_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::NewProp_SourceHandle = { "SourceHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventRemoveSource_Parms, SourceHandle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::NewProp_SourceHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Requests the given LiveLink Source to shut down via its handle\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Requests the given LiveLink Source to shut down via its handle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "RemoveSource", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventRemoveSource_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics
	{
		struct LiveLinkBlueprintLibrary_eventSetLiveLinkSubjectEnabled_Parms
		{
			FLiveLinkSubjectKey SubjectKey;
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((LiveLinkBlueprintLibrary_eventSetLiveLinkSubjectEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkBlueprintLibrary_eventSetLiveLinkSubjectEnabled_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::NewProp_SubjectKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::NewProp_SubjectKey = { "SubjectKey", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventSetLiveLinkSubjectEnabled_Parms, SubjectKey), Z_Construct_UScriptStruct_FLiveLinkSubjectKey, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::NewProp_SubjectKey_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::NewProp_SubjectKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::NewProp_SubjectKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** \n\x09 * Set the subject's from a specific source to enabled, disabling the other in the process.\n\x09 * Only 1 subject with the same name can be enabled.\n\x09 * At the start of the frame, a snapshot of the enabled subjects will be made.\n\x09 * That snapshot dictate which subject will be used for the duration of that frame.\n\x09 * SetSubjectEnabled will take effect on the next frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Set the subject's from a specific source to enabled, disabling the other in the process.\nOnly 1 subject with the same name can be enabled.\nAt the start of the frame, a snapshot of the enabled subjects will be made.\nThat snapshot dictate which subject will be used for the duration of that frame.\nSetSubjectEnabled will take effect on the next frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "SetLiveLinkSubjectEnabled", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventSetLiveLinkSubjectEnabled_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics
	{
		struct LiveLinkBlueprintLibrary_eventTransformName_Parms
		{
			FLiveLinkTransform LiveLinkTransform;
			FName Name;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiveLinkTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventTransformName_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::NewProp_LiveLinkTransform = { "LiveLinkTransform", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventTransformName_Parms, LiveLinkTransform), Z_Construct_UScriptStruct_FLiveLinkTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::NewProp_LiveLinkTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Returns the Name of a given LiveLink Transform\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns the Name of a given LiveLink Transform" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "TransformName", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventTransformName_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics
	{
		struct LiveLinkBlueprintLibrary_eventTransformNames_Parms
		{
			FSubjectFrameHandle SubjectFrameHandle;
			TArray<FName> TransformNames;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransformNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TransformNames_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::NewProp_TransformNames = { "TransformNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventTransformNames_Parms, TransformNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::NewProp_TransformNames_Inner = { "TransformNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkBlueprintLibrary_eventTransformNames_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::NewProp_TransformNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::NewProp_TransformNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::NewProp_SubjectFrameHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink|Animation" },
		{ "Comment", "// Returns an array of Transform Names stored in the Subject Frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
		{ "ToolTip", "Returns an array of Transform Names stored in the Subject Frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintLibrary, nullptr, "TransformNames", nullptr, nullptr, sizeof(LiveLinkBlueprintLibrary_eventTransformNames_Parms), Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULiveLinkBlueprintLibrary_NoRegister()
	{
		return ULiveLinkBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ChildCount, "ChildCount" }, // 3460075104
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ComponentSpaceTransform, "ComponentSpaceTransform" }, // 3769133496
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame, "EvaluateLiveLinkFrame" }, // 3551062320
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime, "EvaluateLiveLinkFrameAtSceneTime" }, // 2372188716
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset, "EvaluateLiveLinkFrameAtWorldTimeOffset" }, // 2199280270
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole, "EvaluateLiveLinkFrameWithSpecificRole" }, // 1336573170
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetBasicData, "GetBasicData" }, // 2824623729
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetChildren, "GetChildren" }, // 3729794898
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetCurves, "GetCurves" }, // 1641299368
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames, "GetLiveLinkEnabledSubjectNames" }, // 1688893864
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole, "GetLiveLinkSubjectRole" }, // 1522170208
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetLiveLinkSubjects, "GetLiveLinkSubjects" }, // 2520867930
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetMetadata, "GetMetadata" }, // 949940454
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetParent, "GetParent" }, // 2770727079
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetPropertyValue, "GetPropertyValue" }, // 3769261881
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetRootTransform, "GetRootTransform" }, // 1099542235
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceMachineName, "GetSourceMachineName" }, // 3958895575
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceStatus, "GetSourceStatus" }, // 1138045291
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSourceType, "GetSourceType" }, // 1167097982
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole, "GetSpecificLiveLinkSubjectRole" }, // 458075789
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByIndex, "GetTransformByIndex" }, // 1306502111
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_GetTransformByName, "GetTransformByName" }, // 3521342321
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_HasParent, "HasParent" }, // 3274343074
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled, "IsLiveLinkSubjectEnabled" }, // 1884811762
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSourceStillValid, "IsSourceStillValid" }, // 1478579306
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled, "IsSpecificLiveLinkSubjectEnabled" }, // 1865555552
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_NumberOfTransforms, "NumberOfTransforms" }, // 3735544155
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform, "ParentBoneSpaceTransform" }, // 674856914
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_RemoveSource, "RemoveSource" }, // 1862137816
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled, "SetLiveLinkSubjectEnabled" }, // 123794685
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformName, "TransformName" }, // 998371433
		{ &Z_Construct_UFunction_ULiveLinkBlueprintLibrary_TransformNames, "TransformNames" }, // 2621954049
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/LiveLinkBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics::ClassParams = {
		&ULiveLinkBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkBlueprintLibrary, 1847675554);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkBlueprintLibrary>()
	{
		return ULiveLinkBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkBlueprintLibrary(Z_Construct_UClass_ULiveLinkBlueprintLibrary, &ULiveLinkBlueprintLibrary::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
