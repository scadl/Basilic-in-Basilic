// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
enum class EWMRHandKeypoint : uint8;
struct FTransform;
#ifdef WINDOWSMIXEDREALITYHANDTRACKING_WindowsMixedRealityHandTrackingFunctionLibrary_generated_h
#error "WindowsMixedRealityHandTrackingFunctionLibrary.generated.h already included, missing '#pragma once' in WindowsMixedRealityHandTrackingFunctionLibrary.h"
#endif
#define WINDOWSMIXEDREALITYHANDTRACKING_WindowsMixedRealityHandTrackingFunctionLibrary_generated_h

#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHandJointTransform) \
	{ \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_GET_ENUM(EWMRHandKeypoint,Z_Param_Keypoint); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsMixedRealityHandTrackingFunctionLibrary::GetHandJointTransform(EControllerHand(Z_Param_Hand),EWMRHandKeypoint(Z_Param_Keypoint),Z_Param_Out_Transform); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHandJointTransform) \
	{ \
		P_GET_ENUM(EControllerHand,Z_Param_Hand); \
		P_GET_ENUM(EWMRHandKeypoint,Z_Param_Keypoint); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsMixedRealityHandTrackingFunctionLibrary::GetHandJointTransform(EControllerHand(Z_Param_Hand),EWMRHandKeypoint(Z_Param_Keypoint),Z_Param_Out_Transform); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowsMixedRealityHandTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWindowsMixedRealityHandTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsMixedRealityHandTracking"), NO_API) \
	DECLARE_SERIALIZER(UWindowsMixedRealityHandTrackingFunctionLibrary)


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUWindowsMixedRealityHandTrackingFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWindowsMixedRealityHandTrackingFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWindowsMixedRealityHandTrackingFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsMixedRealityHandTracking"), NO_API) \
	DECLARE_SERIALIZER(UWindowsMixedRealityHandTrackingFunctionLibrary)


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsMixedRealityHandTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsMixedRealityHandTrackingFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsMixedRealityHandTrackingFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsMixedRealityHandTrackingFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsMixedRealityHandTrackingFunctionLibrary(UWindowsMixedRealityHandTrackingFunctionLibrary&&); \
	NO_API UWindowsMixedRealityHandTrackingFunctionLibrary(const UWindowsMixedRealityHandTrackingFunctionLibrary&); \
public:


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsMixedRealityHandTrackingFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsMixedRealityHandTrackingFunctionLibrary(UWindowsMixedRealityHandTrackingFunctionLibrary&&); \
	NO_API UWindowsMixedRealityHandTrackingFunctionLibrary(const UWindowsMixedRealityHandTrackingFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsMixedRealityHandTrackingFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsMixedRealityHandTrackingFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsMixedRealityHandTrackingFunctionLibrary)


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_13_PROLOG
#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_RPC_WRAPPERS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_INCLASS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINDOWSMIXEDREALITYHANDTRACKING_API UClass* StaticClass<class UWindowsMixedRealityHandTrackingFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealityHandTracking_Public_WindowsMixedRealityHandTrackingFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
