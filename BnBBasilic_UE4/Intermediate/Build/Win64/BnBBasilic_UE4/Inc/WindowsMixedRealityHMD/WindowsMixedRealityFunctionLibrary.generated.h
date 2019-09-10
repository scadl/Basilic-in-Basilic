// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHMDSpatialLocatability : uint8;
enum class EControllerHand : uint8;
struct FPointerPoseInfo;
#ifdef WINDOWSMIXEDREALITYHMD_WindowsMixedRealityFunctionLibrary_generated_h
#error "WindowsMixedRealityFunctionLibrary.generated.h already included, missing '#pragma once' in WindowsMixedRealityFunctionLibrary.h"
#endif
#define WINDOWSMIXEDREALITYHMD_WindowsMixedRealityFunctionLibrary_generated_h

#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointerPoseInfo_Statics; \
	WINDOWSMIXEDREALITYHMD_API static class UScriptStruct* StaticStruct();


template<> WINDOWSMIXEDREALITYHMD_API UScriptStruct* StaticStruct<struct FPointerPoseInfo>();

#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_44_DELEGATE \
struct _Script_WindowsMixedRealityHMD_eventTrackingChangeCallback_Parms \
{ \
	EHMDSpatialLocatability locatability; \
}; \
static inline void FTrackingChangeCallback_DelegateWrapper(const FScriptDelegate& TrackingChangeCallback, EHMDSpatialLocatability locatability) \
{ \
	_Script_WindowsMixedRealityHMD_eventTrackingChangeCallback_Parms Parms; \
	Parms.locatability=locatability; \
	TrackingChangeCallback.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPointerPoseInfo) \
	{ \
		P_GET_ENUM(EControllerHand,Z_Param_hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPointerPoseInfo*)Z_Param__Result=UWindowsMixedRealityFunctionLibrary::GetPointerPoseInfo(EControllerHand(Z_Param_hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTrackingAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsMixedRealityFunctionLibrary::IsTrackingAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockMouseToCenter) \
	{ \
		P_GET_UBOOL(Z_Param_locked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWindowsMixedRealityFunctionLibrary::LockMouseToCenter(Z_Param_locked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDisplayOpaque) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsMixedRealityFunctionLibrary::IsDisplayOpaque(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCurrentlyImmersive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsMixedRealityFunctionLibrary::IsCurrentlyImmersive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleImmersive) \
	{ \
		P_GET_UBOOL(Z_Param_immersive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWindowsMixedRealityFunctionLibrary::ToggleImmersive(Z_Param_immersive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UWindowsMixedRealityFunctionLibrary::GetVersionString(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPointerPoseInfo) \
	{ \
		P_GET_ENUM(EControllerHand,Z_Param_hand); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPointerPoseInfo*)Z_Param__Result=UWindowsMixedRealityFunctionLibrary::GetPointerPoseInfo(EControllerHand(Z_Param_hand)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTrackingAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsMixedRealityFunctionLibrary::IsTrackingAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockMouseToCenter) \
	{ \
		P_GET_UBOOL(Z_Param_locked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWindowsMixedRealityFunctionLibrary::LockMouseToCenter(Z_Param_locked); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDisplayOpaque) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsMixedRealityFunctionLibrary::IsDisplayOpaque(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCurrentlyImmersive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsMixedRealityFunctionLibrary::IsCurrentlyImmersive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleImmersive) \
	{ \
		P_GET_UBOOL(Z_Param_immersive); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWindowsMixedRealityFunctionLibrary::ToggleImmersive(Z_Param_immersive); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UWindowsMixedRealityFunctionLibrary::GetVersionString(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowsMixedRealityFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWindowsMixedRealityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsMixedRealityHMD"), NO_API) \
	DECLARE_SERIALIZER(UWindowsMixedRealityFunctionLibrary)


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUWindowsMixedRealityFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWindowsMixedRealityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWindowsMixedRealityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsMixedRealityHMD"), NO_API) \
	DECLARE_SERIALIZER(UWindowsMixedRealityFunctionLibrary)


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsMixedRealityFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsMixedRealityFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsMixedRealityFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsMixedRealityFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsMixedRealityFunctionLibrary(UWindowsMixedRealityFunctionLibrary&&); \
	NO_API UWindowsMixedRealityFunctionLibrary(const UWindowsMixedRealityFunctionLibrary&); \
public:


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsMixedRealityFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsMixedRealityFunctionLibrary(UWindowsMixedRealityFunctionLibrary&&); \
	NO_API UWindowsMixedRealityFunctionLibrary(const UWindowsMixedRealityFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsMixedRealityFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsMixedRealityFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsMixedRealityFunctionLibrary)


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_49_PROLOG
#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_RPC_WRAPPERS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_INCLASS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WindowsMixedRealityFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINDOWSMIXEDREALITYHMD_API UClass* StaticClass<class UWindowsMixedRealityFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHMD_Classes_WindowsMixedRealityFunctionLibrary_h


#define FOREACH_ENUM_EHMDSPATIALLOCATABILITY(op) \
	op(EHMDSpatialLocatability::Unavailable) \
	op(EHMDSpatialLocatability::OrientationOnly) \
	op(EHMDSpatialLocatability::PositionalTrackingActivating) \
	op(EHMDSpatialLocatability::PositionalTrackingActive) \
	op(EHMDSpatialLocatability::PositionalTrackingInhibited) 

enum class EHMDSpatialLocatability : uint8;
template<> WINDOWSMIXEDREALITYHMD_API UEnum* StaticEnum<EHMDSpatialLocatability>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
