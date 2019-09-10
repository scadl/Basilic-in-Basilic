// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESpatialInputAxisGestureType : uint8;
#ifdef WINDOWSMIXEDREALITYSPATIALINPUT_WindowsMixedRealitySpatialInputFunctionLibrary_generated_h
#error "WindowsMixedRealitySpatialInputFunctionLibrary.generated.h already included, missing '#pragma once' in WindowsMixedRealitySpatialInputFunctionLibrary.h"
#endif
#define WINDOWSMIXEDREALITYSPATIALINPUT_WindowsMixedRealitySpatialInputFunctionLibrary_generated_h

#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCaptureGestures) \
	{ \
		P_GET_UBOOL(Z_Param_Tap); \
		P_GET_UBOOL(Z_Param_Hold); \
		P_GET_ENUM(ESpatialInputAxisGestureType,Z_Param_AxisGesture); \
		P_GET_UBOOL(Z_Param_NavigationAxisX); \
		P_GET_UBOOL(Z_Param_NavigationAxisY); \
		P_GET_UBOOL(Z_Param_NavigationAxisZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsMixedRealitySpatialInputFunctionLibrary::CaptureGestures(Z_Param_Tap,Z_Param_Hold,ESpatialInputAxisGestureType(Z_Param_AxisGesture),Z_Param_NavigationAxisX,Z_Param_NavigationAxisY,Z_Param_NavigationAxisZ); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCaptureGestures) \
	{ \
		P_GET_UBOOL(Z_Param_Tap); \
		P_GET_UBOOL(Z_Param_Hold); \
		P_GET_ENUM(ESpatialInputAxisGestureType,Z_Param_AxisGesture); \
		P_GET_UBOOL(Z_Param_NavigationAxisX); \
		P_GET_UBOOL(Z_Param_NavigationAxisY); \
		P_GET_UBOOL(Z_Param_NavigationAxisZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWindowsMixedRealitySpatialInputFunctionLibrary::CaptureGestures(Z_Param_Tap,Z_Param_Hold,ESpatialInputAxisGestureType(Z_Param_AxisGesture),Z_Param_NavigationAxisX,Z_Param_NavigationAxisY,Z_Param_NavigationAxisZ); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWindowsMixedRealitySpatialInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWindowsMixedRealitySpatialInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsMixedRealitySpatialInput"), NO_API) \
	DECLARE_SERIALIZER(UWindowsMixedRealitySpatialInputFunctionLibrary)


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUWindowsMixedRealitySpatialInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWindowsMixedRealitySpatialInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWindowsMixedRealitySpatialInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WindowsMixedRealitySpatialInput"), NO_API) \
	DECLARE_SERIALIZER(UWindowsMixedRealitySpatialInputFunctionLibrary)


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsMixedRealitySpatialInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsMixedRealitySpatialInputFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsMixedRealitySpatialInputFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsMixedRealitySpatialInputFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsMixedRealitySpatialInputFunctionLibrary(UWindowsMixedRealitySpatialInputFunctionLibrary&&); \
	NO_API UWindowsMixedRealitySpatialInputFunctionLibrary(const UWindowsMixedRealitySpatialInputFunctionLibrary&); \
public:


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWindowsMixedRealitySpatialInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWindowsMixedRealitySpatialInputFunctionLibrary(UWindowsMixedRealitySpatialInputFunctionLibrary&&); \
	NO_API UWindowsMixedRealitySpatialInputFunctionLibrary(const UWindowsMixedRealitySpatialInputFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWindowsMixedRealitySpatialInputFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWindowsMixedRealitySpatialInputFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWindowsMixedRealitySpatialInputFunctionLibrary)


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_21_PROLOG
#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_RPC_WRAPPERS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_INCLASS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WindowsMixedRealitySpatialInputFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINDOWSMIXEDREALITYSPATIALINPUT_API UClass* StaticClass<class UWindowsMixedRealitySpatialInputFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Classes_WindowsMixedRealitySpatialInputFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
