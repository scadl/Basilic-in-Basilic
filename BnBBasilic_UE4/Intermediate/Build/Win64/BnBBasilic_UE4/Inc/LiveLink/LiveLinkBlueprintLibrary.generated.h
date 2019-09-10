// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveLinkSubjectName;
class ULiveLinkRole;
struct FLiveLinkSubjectKey;
struct FLiveLinkSourceHandle;
struct FLiveLinkTransform;
struct FTransform;
struct FSubjectFrameHandle;
struct FLiveLinkBasicBlueprintData;
struct FSubjectMetadata;
 
struct FLiveLinkSubjectRepresentation;
struct FLiveLinkBaseBlueprintData;
struct FTimecode;
#ifdef LIVELINK_LiveLinkBlueprintLibrary_generated_h
#error "LiveLinkBlueprintLibrary.generated.h already included, missing '#pragma once' in LiveLinkBlueprintLibrary.h"
#endif
#define LIVELINK_LiveLinkBlueprintLibrary_generated_h

#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLiveLinkSubjectRole) \
	{ \
		P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_SubjectName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<ULiveLinkRole> *)Z_Param__Result=ULiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(Z_Param_SubjectName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpecificLiveLinkSubjectRole) \
	{ \
		P_GET_STRUCT(FLiveLinkSubjectKey,Z_Param_SubjectKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<ULiveLinkRole> *)Z_Param__Result=ULiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole(Z_Param_SubjectKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLiveLinkSubjectEnabled) \
	{ \
		P_GET_STRUCT(FLiveLinkSubjectKey,Z_Param_SubjectKey); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLiveLinkSubjectEnabled(Z_Param_SubjectKey,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLiveLinkSubjectEnabled) \
	{ \
		P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_SubjectName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLiveLinkSubjectEnabled(Z_Param_SubjectName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpecificLiveLinkSubjectEnabled) \
	{ \
		P_GET_STRUCT(FLiveLinkSubjectKey,Z_Param_SubjectKey); \
		P_GET_UBOOL(Z_Param_bUseSnapshot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSpecificLiveLinkSubjectEnabled(Z_Param_SubjectKey,Z_Param_bUseSnapshot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLiveLinkSubjects) \
	{ \
		P_GET_UBOOL(Z_Param_bIncludeDisabledSubject); \
		P_GET_UBOOL(Z_Param_bIncludeDisal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FLiveLinkSubjectKey>*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetLiveLinkSubjects(Z_Param_bIncludeDisabledSubject,Z_Param_bIncludeDisal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLiveLinkEnabledSubjectNames) \
	{ \
		P_GET_UBOOL(Z_Param_bIncludeVirtualSubject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FLiveLinkSubjectName>*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames(Z_Param_bIncludeVirtualSubject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSourceMachineName) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetSourceMachineName(Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSourceType) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetSourceType(Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSourceStatus) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetSourceStatus(Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSource) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULiveLinkBlueprintLibrary::RemoveSource(Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSourceStillValid) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULiveLinkBlueprintLibrary::IsSourceStillValid(Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildren) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_GET_TARRAY_REF(FLiveLinkTransform,Z_Param_Out_Children); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetChildren(Z_Param_Out_LiveLinkTransform,Z_Param_Out_Children); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChildCount) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ULiveLinkBlueprintLibrary::ChildCount(Z_Param_Out_LiveLinkTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParent) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetParent(Z_Param_Out_LiveLinkTransform,Z_Param_Out_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasParent) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULiveLinkBlueprintLibrary::HasParent(Z_Param_Out_LiveLinkTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComponentSpaceTransform) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::ComponentSpaceTransform(Z_Param_Out_LiveLinkTransform,Z_Param_Out_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParentBoneSpaceTransform) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(Z_Param_Out_LiveLinkTransform,Z_Param_Out_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformName) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::TransformName(Z_Param_Out_LiveLinkTransform,Z_Param_Out_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBasicData) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_STRUCT_REF(FLiveLinkBasicBlueprintData,Z_Param_Out_BasicBlueprintData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetBasicData(Z_Param_Out_SubjectFrameHandle,Z_Param_Out_BasicBlueprintData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetadata) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_STRUCT_REF(FSubjectMetadata,Z_Param_Out_Metadata); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetMetadata(Z_Param_Out_SubjectFrameHandle,Z_Param_Out_Metadata); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformByName) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TransformName); \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetTransformByName(Z_Param_Out_SubjectFrameHandle,Z_Param_TransformName,Z_Param_Out_LiveLinkTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformByIndex) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransformIndex); \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetTransformByIndex(Z_Param_Out_SubjectFrameHandle,Z_Param_TransformIndex,Z_Param_Out_LiveLinkTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRootTransform) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetRootTransform(Z_Param_Out_SubjectFrameHandle,Z_Param_Out_LiveLinkTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformNames) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_TransformNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::TransformNames(Z_Param_Out_SubjectFrameHandle,Z_Param_Out_TransformNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNumberOfTransforms) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ULiveLinkBlueprintLibrary::NumberOfTransforms(Z_Param_Out_SubjectFrameHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurves) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_TMAP_REF(FName,float,Z_Param_Out_Curves); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetCurves(Z_Param_Out_SubjectFrameHandle,Z_Param_Out_Curves); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyValue) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkBasicBlueprintData,Z_Param_Out_BasicData); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetPropertyValue(Z_Param_Out_BasicData,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLiveLinkSubjectRole) \
	{ \
		P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_SubjectName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<ULiveLinkRole> *)Z_Param__Result=ULiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(Z_Param_SubjectName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpecificLiveLinkSubjectRole) \
	{ \
		P_GET_STRUCT(FLiveLinkSubjectKey,Z_Param_SubjectKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<ULiveLinkRole> *)Z_Param__Result=ULiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole(Z_Param_SubjectKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLiveLinkSubjectEnabled) \
	{ \
		P_GET_STRUCT(FLiveLinkSubjectKey,Z_Param_SubjectKey); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLiveLinkSubjectEnabled(Z_Param_SubjectKey,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLiveLinkSubjectEnabled) \
	{ \
		P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_SubjectName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLiveLinkSubjectEnabled(Z_Param_SubjectName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpecificLiveLinkSubjectEnabled) \
	{ \
		P_GET_STRUCT(FLiveLinkSubjectKey,Z_Param_SubjectKey); \
		P_GET_UBOOL(Z_Param_bUseSnapshot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSpecificLiveLinkSubjectEnabled(Z_Param_SubjectKey,Z_Param_bUseSnapshot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLiveLinkSubjects) \
	{ \
		P_GET_UBOOL(Z_Param_bIncludeDisabledSubject); \
		P_GET_UBOOL(Z_Param_bIncludeDisal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FLiveLinkSubjectKey>*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetLiveLinkSubjects(Z_Param_bIncludeDisabledSubject,Z_Param_bIncludeDisal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLiveLinkEnabledSubjectNames) \
	{ \
		P_GET_UBOOL(Z_Param_bIncludeVirtualSubject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FLiveLinkSubjectName>*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames(Z_Param_bIncludeVirtualSubject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSourceMachineName) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetSourceMachineName(Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSourceType) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetSourceType(Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSourceStatus) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetSourceStatus(Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSource) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULiveLinkBlueprintLibrary::RemoveSource(Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSourceStillValid) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULiveLinkBlueprintLibrary::IsSourceStillValid(Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChildren) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_GET_TARRAY_REF(FLiveLinkTransform,Z_Param_Out_Children); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetChildren(Z_Param_Out_LiveLinkTransform,Z_Param_Out_Children); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChildCount) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ULiveLinkBlueprintLibrary::ChildCount(Z_Param_Out_LiveLinkTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParent) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_Parent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetParent(Z_Param_Out_LiveLinkTransform,Z_Param_Out_Parent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasParent) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULiveLinkBlueprintLibrary::HasParent(Z_Param_Out_LiveLinkTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComponentSpaceTransform) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::ComponentSpaceTransform(Z_Param_Out_LiveLinkTransform,Z_Param_Out_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParentBoneSpaceTransform) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(Z_Param_Out_LiveLinkTransform,Z_Param_Out_Transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformName) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::TransformName(Z_Param_Out_LiveLinkTransform,Z_Param_Out_Name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBasicData) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_STRUCT_REF(FLiveLinkBasicBlueprintData,Z_Param_Out_BasicBlueprintData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetBasicData(Z_Param_Out_SubjectFrameHandle,Z_Param_Out_BasicBlueprintData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetadata) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_STRUCT_REF(FSubjectMetadata,Z_Param_Out_Metadata); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetMetadata(Z_Param_Out_SubjectFrameHandle,Z_Param_Out_Metadata); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformByName) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TransformName); \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetTransformByName(Z_Param_Out_SubjectFrameHandle,Z_Param_TransformName,Z_Param_Out_LiveLinkTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTransformByIndex) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TransformIndex); \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetTransformByIndex(Z_Param_Out_SubjectFrameHandle,Z_Param_TransformIndex,Z_Param_Out_LiveLinkTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRootTransform) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_STRUCT_REF(FLiveLinkTransform,Z_Param_Out_LiveLinkTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetRootTransform(Z_Param_Out_SubjectFrameHandle,Z_Param_Out_LiveLinkTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTransformNames) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_TARRAY_REF(FName,Z_Param_Out_TransformNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::TransformNames(Z_Param_Out_SubjectFrameHandle,Z_Param_Out_TransformNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNumberOfTransforms) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=ULiveLinkBlueprintLibrary::NumberOfTransforms(Z_Param_Out_SubjectFrameHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurves) \
	{ \
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle); \
		P_GET_TMAP_REF(FName,float,Z_Param_Out_Curves); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkBlueprintLibrary::GetCurves(Z_Param_Out_SubjectFrameHandle,Z_Param_Out_Curves); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPropertyValue) \
	{ \
		P_GET_STRUCT_REF(FLiveLinkBasicBlueprintData,Z_Param_Out_BasicData); \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULiveLinkBlueprintLibrary::GetPropertyValue(Z_Param_Out_BasicData,Z_Param_PropertyName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkBlueprintLibrary)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkBlueprintLibrary)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkBlueprintLibrary(ULiveLinkBlueprintLibrary&&); \
	NO_API ULiveLinkBlueprintLibrary(const ULiveLinkBlueprintLibrary&); \
public:


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkBlueprintLibrary(ULiveLinkBlueprintLibrary&&); \
	NO_API ULiveLinkBlueprintLibrary(const ULiveLinkBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkBlueprintLibrary)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_14_PROLOG
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_RPC_WRAPPERS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_INCLASS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
