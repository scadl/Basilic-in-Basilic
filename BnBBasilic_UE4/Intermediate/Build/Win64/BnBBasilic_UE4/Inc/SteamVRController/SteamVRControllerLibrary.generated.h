// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamVRTouchDPadMapping : uint8;
#ifdef STEAMVRCONTROLLER_SteamVRControllerLibrary_generated_h
#error "SteamVRControllerLibrary.generated.h already included, missing '#pragma once' in SteamVRControllerLibrary.h"
#endif
#define STEAMVRCONTROLLER_SteamVRControllerLibrary_generated_h

#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTouchDPadMapping) \
	{ \
		P_GET_ENUM(ESteamVRTouchDPadMapping,Z_Param_NewMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USteamVRControllerLibrary::SetTouchDPadMapping(ESteamVRTouchDPadMapping(Z_Param_NewMapping)); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTouchDPadMapping) \
	{ \
		P_GET_ENUM(ESteamVRTouchDPadMapping,Z_Param_NewMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USteamVRControllerLibrary::SetTouchDPadMapping(ESteamVRTouchDPadMapping(Z_Param_NewMapping)); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamVRControllerLibrary(); \
	friend struct Z_Construct_UClass_USteamVRControllerLibrary_Statics; \
public: \
	DECLARE_CLASS(USteamVRControllerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamVRController"), NO_API) \
	DECLARE_SERIALIZER(USteamVRControllerLibrary)


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUSteamVRControllerLibrary(); \
	friend struct Z_Construct_UClass_USteamVRControllerLibrary_Statics; \
public: \
	DECLARE_CLASS(USteamVRControllerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamVRController"), NO_API) \
	DECLARE_SERIALIZER(USteamVRControllerLibrary)


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVRControllerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRControllerLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRControllerLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRControllerLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRControllerLibrary(USteamVRControllerLibrary&&); \
	NO_API USteamVRControllerLibrary(const USteamVRControllerLibrary&); \
public:


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVRControllerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRControllerLibrary(USteamVRControllerLibrary&&); \
	NO_API USteamVRControllerLibrary(const USteamVRControllerLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRControllerLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRControllerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRControllerLibrary)


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_23_PROLOG
#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_INCLASS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMVRCONTROLLER_API UClass* StaticClass<class USteamVRControllerLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRController_Classes_SteamVRControllerLibrary_h


#define FOREACH_ENUM_ESTEAMVRTOUCHDPADMAPPING(op) \
	op(ESteamVRTouchDPadMapping::FaceButtons) \
	op(ESteamVRTouchDPadMapping::ThumbstickDirections) \
	op(ESteamVRTouchDPadMapping::Disabled) 

enum class ESteamVRTouchDPadMapping : uint8;
template<> STEAMVRCONTROLLER_API UEnum* StaticEnum<ESteamVRTouchDPadMapping>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
