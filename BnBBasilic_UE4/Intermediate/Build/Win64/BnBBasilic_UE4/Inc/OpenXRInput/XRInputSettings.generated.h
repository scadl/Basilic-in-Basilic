// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENXRINPUT_XRInputSettings_generated_h
#error "XRInputSettings.generated.h already included, missing '#pragma once' in XRInputSettings.h"
#endif
#define OPENXRINPUT_XRInputSettings_generated_h

#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FXRInteractionProfileSettings_Statics; \
	OPENXRINPUT_API static class UScriptStruct* StaticStruct();


template<> OPENXRINPUT_API UScriptStruct* StaticStruct<struct FXRInteractionProfileSettings>();

#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FXRSuggestedBinding_Statics; \
	OPENXRINPUT_API static class UScriptStruct* StaticStruct();


template<> OPENXRINPUT_API UScriptStruct* StaticStruct<struct FXRSuggestedBinding>();

#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_RPC_WRAPPERS
#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRInputSettings(); \
	friend struct Z_Construct_UClass_UXRInputSettings_Statics; \
public: \
	DECLARE_CLASS(UXRInputSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenXRInput"), NO_API) \
	DECLARE_SERIALIZER(UXRInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUXRInputSettings(); \
	friend struct Z_Construct_UClass_UXRInputSettings_Statics; \
public: \
	DECLARE_CLASS(UXRInputSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OpenXRInput"), NO_API) \
	DECLARE_SERIALIZER(UXRInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRInputSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRInputSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRInputSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRInputSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRInputSettings(UXRInputSettings&&); \
	NO_API UXRInputSettings(const UXRInputSettings&); \
public:


#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRInputSettings(UXRInputSettings&&); \
	NO_API UXRInputSettings(const UXRInputSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRInputSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRInputSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UXRInputSettings)


#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_48_PROLOG
#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_RPC_WRAPPERS \
	Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_INCLASS \
	Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h_52_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENXRINPUT_API UClass* StaticClass<class UXRInputSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Classes_XRInputSettings_h


#define FOREACH_ENUM_EXRCONTROLLERPOSE(op) \
	op(GripPose) \
	op(AimPose) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
