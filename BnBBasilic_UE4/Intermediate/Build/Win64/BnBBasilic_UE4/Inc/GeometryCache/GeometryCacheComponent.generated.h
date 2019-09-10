// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCache;
#ifdef GEOMETRYCACHE_GeometryCacheComponent_generated_h
#error "GeometryCacheComponent.generated.h already included, missing '#pragma once' in GeometryCacheComponent.h"
#endif
#define GEOMETRYCACHE_GeometryCacheComponent_generated_h

#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackRenderData_Statics; \
	GEOMETRYCACHE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<struct FTrackRenderData>();

#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTickAtThisTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bInIsRunning); \
		P_GET_UBOOL(Z_Param_bInBackwards); \
		P_GET_UBOOL(Z_Param_bInIsLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickAtThisTime(Z_Param_Time,Z_Param_bInIsRunning,Z_Param_bInBackwards,Z_Param_bInIsLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfFrames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfFrames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartTimeOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStartTimeOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartTimeOffset(Z_Param_NewStartTimeOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTimeOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetStartTimeOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGeometryCache) \
	{ \
		P_GET_OBJECT(UGeometryCache,Z_Param_NewGeomCache); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetGeometryCache(Z_Param_NewGeomCache); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackSpeed(Z_Param_NewPlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLooping(Z_Param_bNewLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayingReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReversedFromEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReversedFromEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFromStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFromStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTickAtThisTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_GET_UBOOL(Z_Param_bInIsRunning); \
		P_GET_UBOOL(Z_Param_bInBackwards); \
		P_GET_UBOOL(Z_Param_bInIsLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickAtThisTime(Z_Param_Time,Z_Param_bInIsRunning,Z_Param_bInBackwards,Z_Param_bInIsLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfFrames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfFrames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnimationTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartTimeOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStartTimeOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStartTimeOffset(Z_Param_NewStartTimeOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTimeOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetStartTimeOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGeometryCache) \
	{ \
		P_GET_OBJECT(UGeometryCache,Z_Param_NewGeomCache); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetGeometryCache(Z_Param_NewGeomCache); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackSpeed(Z_Param_NewPlaybackSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLooping(Z_Param_bNewLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayingReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlayingReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReversedFromEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReversedFromEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFromStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFromStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCacheComponent(); \
	friend struct Z_Construct_UClass_UGeometryCacheComponent_Statics; \
public: \
	DECLARE_CLASS(UGeometryCacheComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheComponent)


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCacheComponent(); \
	friend struct Z_Construct_UClass_UGeometryCacheComponent_Statics; \
public: \
	DECLARE_CLASS(UGeometryCacheComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCache"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCacheComponent)


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCacheComponent(UGeometryCacheComponent&&); \
	NO_API UGeometryCacheComponent(const UGeometryCacheComponent&); \
public:


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCacheComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCacheComponent(UGeometryCacheComponent&&); \
	NO_API UGeometryCacheComponent(const UGeometryCacheComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCacheComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCacheComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCacheComponent)


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bRunning() { return STRUCT_OFFSET(UGeometryCacheComponent, bRunning); } \
	FORCEINLINE static uint32 __PPO__bLooping() { return STRUCT_OFFSET(UGeometryCacheComponent, bLooping); } \
	FORCEINLINE static uint32 __PPO__StartTimeOffset() { return STRUCT_OFFSET(UGeometryCacheComponent, StartTimeOffset); } \
	FORCEINLINE static uint32 __PPO__PlaybackSpeed() { return STRUCT_OFFSET(UGeometryCacheComponent, PlaybackSpeed); } \
	FORCEINLINE static uint32 __PPO__NumTracks() { return STRUCT_OFFSET(UGeometryCacheComponent, NumTracks); } \
	FORCEINLINE static uint32 __PPO__ElapsedTime() { return STRUCT_OFFSET(UGeometryCacheComponent, ElapsedTime); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(UGeometryCacheComponent, Duration); } \
	FORCEINLINE static uint32 __PPO__bManualTick() { return STRUCT_OFFSET(UGeometryCacheComponent, bManualTick); }


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_36_PROLOG
#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_RPC_WRAPPERS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_INCLASS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCacheComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCACHE_API UClass* StaticClass<class UGeometryCacheComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
