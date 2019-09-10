// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOculusMR_DepthQuality : uint8;
enum class EOculusMR_CameraDeviceEnum : uint8;
enum class EOculusMR_CompositionMethod : uint8;
#ifdef OCULUSMR_OculusMR_Settings_generated_h
#error "OculusMR_Settings.generated.h already included, missing '#pragma once' in OculusMR_Settings.h"
#endif
#define OCULUSMR_OculusMR_Settings_generated_h

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSaveToIni) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveToIni(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFromIni) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadFromIni(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBindToTrackedCameraIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetBindToTrackedCameraIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindToTrackedCameraIndexIfAvailable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InTrackedCameraIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToTrackedCameraIndexIfAvailable(Z_Param_InTrackedCameraIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDepthQuality) \
	{ \
		P_GET_ENUM(EOculusMR_DepthQuality,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDepthQuality(EOculusMR_DepthQuality(Z_Param_val)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDepthQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EOculusMR_DepthQuality*)Z_Param__Result=P_THIS->GetDepthQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseDynamicLighting) \
	{ \
		P_GET_UBOOL(Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseDynamicLighting(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUseDynamicLighting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetUseDynamicLighting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsCasting) \
	{ \
		P_GET_UBOOL(Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsCasting(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsCasting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsCasting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapturingCamera) \
	{ \
		P_GET_ENUM(EOculusMR_CameraDeviceEnum,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCapturingCamera(EOculusMR_CameraDeviceEnum(Z_Param_val)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCapturingCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EOculusMR_CameraDeviceEnum*)Z_Param__Result=P_THIS->GetCapturingCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCompositionMethod) \
	{ \
		P_GET_ENUM(EOculusMR_CompositionMethod,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCompositionMethod(EOculusMR_CompositionMethod(Z_Param_val)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompositionMethod) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EOculusMR_CompositionMethod*)Z_Param__Result=P_THIS->GetCompositionMethod(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveToIni) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveToIni(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFromIni) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadFromIni(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBindToTrackedCameraIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetBindToTrackedCameraIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindToTrackedCameraIndexIfAvailable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InTrackedCameraIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToTrackedCameraIndexIfAvailable(Z_Param_InTrackedCameraIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDepthQuality) \
	{ \
		P_GET_ENUM(EOculusMR_DepthQuality,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDepthQuality(EOculusMR_DepthQuality(Z_Param_val)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDepthQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EOculusMR_DepthQuality*)Z_Param__Result=P_THIS->GetDepthQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseDynamicLighting) \
	{ \
		P_GET_UBOOL(Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseDynamicLighting(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUseDynamicLighting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetUseDynamicLighting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsCasting) \
	{ \
		P_GET_UBOOL(Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsCasting(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsCasting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsCasting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCapturingCamera) \
	{ \
		P_GET_ENUM(EOculusMR_CameraDeviceEnum,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCapturingCamera(EOculusMR_CameraDeviceEnum(Z_Param_val)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCapturingCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EOculusMR_CameraDeviceEnum*)Z_Param__Result=P_THIS->GetCapturingCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCompositionMethod) \
	{ \
		P_GET_ENUM(EOculusMR_CompositionMethod,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCompositionMethod(EOculusMR_CompositionMethod(Z_Param_val)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCompositionMethod) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EOculusMR_CompositionMethod*)Z_Param__Result=P_THIS->GetCompositionMethod(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusMR_Settings(); \
	friend struct Z_Construct_UClass_UOculusMR_Settings_Statics; \
public: \
	DECLARE_CLASS(UOculusMR_Settings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusMR_Settings)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUOculusMR_Settings(); \
	friend struct Z_Construct_UClass_UOculusMR_Settings_Statics; \
public: \
	DECLARE_CLASS(UOculusMR_Settings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusMR_Settings)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusMR_Settings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusMR_Settings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusMR_Settings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusMR_Settings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusMR_Settings(UOculusMR_Settings&&); \
	NO_API UOculusMR_Settings(const UOculusMR_Settings&); \
public:


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusMR_Settings(UOculusMR_Settings&&); \
	NO_API UOculusMR_Settings(const UOculusMR_Settings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusMR_Settings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusMR_Settings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusMR_Settings)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsCasting() { return STRUCT_OFFSET(UOculusMR_Settings, bIsCasting); } \
	FORCEINLINE static uint32 __PPO__CompositionMethod() { return STRUCT_OFFSET(UOculusMR_Settings, CompositionMethod); } \
	FORCEINLINE static uint32 __PPO__CapturingCamera() { return STRUCT_OFFSET(UOculusMR_Settings, CapturingCamera); } \
	FORCEINLINE static uint32 __PPO__bUseDynamicLighting() { return STRUCT_OFFSET(UOculusMR_Settings, bUseDynamicLighting); } \
	FORCEINLINE static uint32 __PPO__DepthQuality() { return STRUCT_OFFSET(UOculusMR_Settings, DepthQuality); }


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_56_PROLOG
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_INCLASS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSMR_API UClass* StaticClass<class UOculusMR_Settings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMR_Settings_h


#define FOREACH_ENUM_EOCULUSMR_COMPOSITIONMETHOD(op) \
	op(EOculusMR_CompositionMethod::ExternalComposition) \
	op(EOculusMR_CompositionMethod::DirectComposition) 

enum class EOculusMR_CompositionMethod : uint8;
template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_CompositionMethod>();

#define FOREACH_ENUM_EOCULUSMR_DEPTHQUALITY(op) \
	op(EOculusMR_DepthQuality::DQ_Low) \
	op(EOculusMR_DepthQuality::DQ_Medium) \
	op(EOculusMR_DepthQuality::DQ_High) 

enum class EOculusMR_DepthQuality : uint8;
template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_DepthQuality>();

#define FOREACH_ENUM_EOCULUSMR_POSTPROCESSEFFECTS(op) \
	op(EOculusMR_PostProcessEffects::PPE_Off) \
	op(EOculusMR_PostProcessEffects::PPE_On) 

enum class EOculusMR_PostProcessEffects : uint8;
template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_PostProcessEffects>();

#define FOREACH_ENUM_EOCULUSMR_VIRTUALGREENSCREENTYPE(op) \
	op(EOculusMR_VirtualGreenScreenType::VGS_Off) \
	op(EOculusMR_VirtualGreenScreenType::VGS_OuterBoundary) \
	op(EOculusMR_VirtualGreenScreenType::VGS_PlayArea) 

enum class EOculusMR_VirtualGreenScreenType : uint8;
template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_VirtualGreenScreenType>();

#define FOREACH_ENUM_EOCULUSMR_CLIPPINGREFERENCE(op) \
	op(EOculusMR_ClippingReference::CR_TrackingReference) \
	op(EOculusMR_ClippingReference::CR_Head) 

enum class EOculusMR_ClippingReference : uint8;
template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_ClippingReference>();

#define FOREACH_ENUM_EOCULUSMR_CAMERADEVICEENUM(op) \
	op(EOculusMR_CameraDeviceEnum::CD_None) \
	op(EOculusMR_CameraDeviceEnum::CD_WebCamera0) \
	op(EOculusMR_CameraDeviceEnum::CD_WebCamera1) \
	op(EOculusMR_CameraDeviceEnum::CD_ZEDCamera) 

enum class EOculusMR_CameraDeviceEnum : uint8;
template<> OCULUSMR_API UEnum* StaticEnum<EOculusMR_CameraDeviceEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
