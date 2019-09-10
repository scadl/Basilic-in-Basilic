// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETrackedDeviceType : uint8;
enum class EBoundaryType : uint8;
struct FGuardianTestResult;
struct FVector;
struct FTransform;
struct FLinearColor;
enum class ETiledMultiResLevel : uint8;
struct FVector2D;
class UTexture2D;
struct FRotator;
struct FHmdUserProfile;
#ifdef OCULUSHMD_OculusFunctionLibrary_generated_h
#error "OculusFunctionLibrary.generated.h already included, missing '#pragma once' in OculusFunctionLibrary.h"
#endif
#define OCULUSHMD_OculusFunctionLibrary_generated_h

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGuardianTestResult_Statics; \
	OCULUSHMD_API static class UScriptStruct* StaticStruct();


template<> OCULUSHMD_API UScriptStruct* StaticStruct<struct FGuardianTestResult>();

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHmdUserProfile_Statics; \
	OCULUSHMD_API static class UScriptStruct* StaticStruct();


template<> OCULUSHMD_API UScriptStruct* StaticStruct<struct FHmdUserProfile>();

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHmdUserProfileField_Statics; \
	OCULUSHMD_API static class UScriptStruct* StaticStruct();


template<> OCULUSHMD_API UScriptStruct* StaticStruct<struct FHmdUserProfileField>();

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGuardianVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_GuardianVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetGuardianVisibility(Z_Param_GuardianVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeGuardianIntersection) \
	{ \
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType); \
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuardianTestResult*)Z_Param__Result=UOculusFunctionLibrary::GetNodeGuardianIntersection(ETrackedDeviceType(Z_Param_DeviceType),EBoundaryType(Z_Param_BoundaryType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointGuardianIntersection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuardianTestResult*)Z_Param__Result=UOculusFunctionLibrary::GetPointGuardianIntersection(Z_Param_Point,EBoundaryType(Z_Param_BoundaryType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayAreaTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UOculusFunctionLibrary::GetPlayAreaTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGuardianDimensions) \
	{ \
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UOculusFunctionLibrary::GetGuardianDimensions(EBoundaryType(Z_Param_BoundaryType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGuardianPoints) \
	{ \
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType); \
		P_GET_UBOOL(Z_Param_UsePawnSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UOculusFunctionLibrary::GetGuardianPoints(EBoundaryType(Z_Param_BoundaryType),Z_Param_UsePawnSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGuardianConfigured) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsGuardianConfigured(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGuardianDisplayed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsGuardianDisplayed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorScaleAndOffset) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_ColorScale); \
		P_GET_STRUCT(FLinearColor,Z_Param_ColorOffset); \
		P_GET_UBOOL(Z_Param_bApplyToAllLayers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetColorScaleAndOffset(Z_Param_ColorScale,Z_Param_ColorOffset,Z_Param_bApplyToAllLayers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableOrientationTracking) \
	{ \
		P_GET_UBOOL(Z_Param_bOrientationTracking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::EnableOrientationTracking(Z_Param_bOrientationTracking); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnablePositionTracking) \
	{ \
		P_GET_UBOOL(Z_Param_bPositionTracking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::EnablePositionTracking(Z_Param_bPositionTracking); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisplayFrequency) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RequestedFrequency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetDisplayFrequency(Z_Param_RequestedFrequency); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDisplayFrequency) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOculusFunctionLibrary::GetCurrentDisplayFrequency(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableDisplayFrequencies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=UOculusFunctionLibrary::GetAvailableDisplayFrequencies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UOculusFunctionLibrary::GetDeviceName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTiledMultiresLevel) \
	{ \
		P_GET_ENUM(ETiledMultiResLevel,Z_Param_level); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetTiledMultiresLevel(ETiledMultiResLevel(Z_Param_level)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTiledMultiresLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETiledMultiResLevel*)Z_Param__Result=UOculusFunctionLibrary::GetTiledMultiresLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGPUFrameTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOculusFunctionLibrary::GetGPUFrameTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGPUUtilization) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_IsGPUAvailable); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_GPUUtilization); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetGPUUtilization(Z_Param_Out_IsGPUAvailable,Z_Param_Out_GPUUtilization); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSystemOverlayPresent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::HasSystemOverlayPresent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasInputFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::HasInputFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoadingSplashParams) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_TexturePath); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DistanceInMeters); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SizeInMeters); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RotationAxis); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_RotationDeltaInDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetLoadingSplashParams(Z_Param_Out_TexturePath,Z_Param_Out_DistanceInMeters,Z_Param_Out_SizeInMeters,Z_Param_Out_RotationAxis,Z_Param_Out_RotationDeltaInDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoadingSplashParams) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TexturePath); \
		P_GET_STRUCT(FVector,Z_Param_DistanceInMeters); \
		P_GET_STRUCT(FVector2D,Z_Param_SizeInMeters); \
		P_GET_STRUCT(FVector,Z_Param_RotationAxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RotationDeltaInDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetLoadingSplashParams(Z_Param_TexturePath,Z_Param_DistanceInMeters,Z_Param_SizeInMeters,Z_Param_RotationAxis,Z_Param_RotationDeltaInDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoadingIconEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsLoadingIconEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideLoadingIcon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::HideLoadingIcon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowLoadingIcon) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::ShowLoadingIcon(Z_Param_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAutoLoadingSplashScreenEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsAutoLoadingSplashScreenEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableAutoLoadingSplashScreen) \
	{ \
		P_GET_UBOOL(Z_Param_bAutoShowEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::EnableAutoLoadingSplashScreen(Z_Param_bAutoShowEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideLoadingSplashScreen) \
	{ \
		P_GET_UBOOL(Z_Param_bClear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::HideLoadingSplashScreen(Z_Param_bClear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowLoadingSplashScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::ShowLoadingSplashScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearLoadingSplashScreens) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::ClearLoadingSplashScreens(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLoadingSplashScreen) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_STRUCT(FVector,Z_Param_TranslationInMeters); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_SizeInMeters); \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bClearBeforeAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::AddLoadingSplashScreen(Z_Param_Texture,Z_Param_TranslationInMeters,Z_Param_Rotation,Z_Param_SizeInMeters,Z_Param_DeltaRotation,Z_Param_bClearBeforeAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseRotationAndPositionOffset) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRot); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetBaseRotationAndPositionOffset(Z_Param_Out_OutRot,Z_Param_Out_OutPosOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseRotationAndPositionOffset) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_BaseRot); \
		P_GET_STRUCT(FVector,Z_Param_PosOffset); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetBaseRotationAndPositionOffset(Z_Param_BaseRot,Z_Param_PosOffset,EOrientPositionSelector::Type(Z_Param_Options)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPositionScale3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_PosScale3D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetPositionScale3D(Z_Param_PosScale3D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseRotationAndBaseOffsetInMeters) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutBaseOffsetInMeters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(Z_Param_Out_OutRotation,Z_Param_Out_OutBaseOffsetInMeters); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseRotationAndBaseOffsetInMeters) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_BaseOffsetInMeters); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(Z_Param_Rotation,Z_Param_BaseOffsetInMeters,EOrientPositionSelector::Type(Z_Param_Options)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserProfile) \
	{ \
		P_GET_STRUCT_REF(FHmdUserProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::GetUserProfile(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReorientHMDOnControllerRecenter) \
	{ \
		P_GET_UBOOL(Z_Param_recenterMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetReorientHMDOnControllerRecenter(Z_Param_recenterMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCPUAndGPULevels) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CPULevel); \
		P_GET_PROPERTY(UIntProperty,Z_Param_GPULevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetCPUAndGPULevels(Z_Param_CPULevel,Z_Param_GPULevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDeviceTracked) \
	{ \
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsDeviceTracked(ETrackedDeviceType(Z_Param_DeviceType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawSensorData) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularAcceleration); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearAcceleration); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TimeInSeconds); \
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetRawSensorData(Z_Param_Out_AngularAcceleration,Z_Param_Out_LinearAcceleration,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity,Z_Param_Out_TimeInSeconds,ETrackedDeviceType(Z_Param_DeviceType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPose) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NeckPosition); \
		P_GET_UBOOL(Z_Param_bUseOrienationForPlayerCamera); \
		P_GET_UBOOL(Z_Param_bUsePositionForPlayerCamera); \
		P_GET_STRUCT(FVector,Z_Param_PositionScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetPose(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition,Z_Param_Out_NeckPosition,Z_Param_bUseOrienationForPlayerCamera,Z_Param_bUsePositionForPlayerCamera,Z_Param_PositionScale); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGuardianVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_GuardianVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetGuardianVisibility(Z_Param_GuardianVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeGuardianIntersection) \
	{ \
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType); \
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuardianTestResult*)Z_Param__Result=UOculusFunctionLibrary::GetNodeGuardianIntersection(ETrackedDeviceType(Z_Param_DeviceType),EBoundaryType(Z_Param_BoundaryType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPointGuardianIntersection) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Point); \
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FGuardianTestResult*)Z_Param__Result=UOculusFunctionLibrary::GetPointGuardianIntersection(Z_Param_Point,EBoundaryType(Z_Param_BoundaryType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayAreaTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UOculusFunctionLibrary::GetPlayAreaTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGuardianDimensions) \
	{ \
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UOculusFunctionLibrary::GetGuardianDimensions(EBoundaryType(Z_Param_BoundaryType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGuardianPoints) \
	{ \
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType); \
		P_GET_UBOOL(Z_Param_UsePawnSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=UOculusFunctionLibrary::GetGuardianPoints(EBoundaryType(Z_Param_BoundaryType),Z_Param_UsePawnSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGuardianConfigured) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsGuardianConfigured(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsGuardianDisplayed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsGuardianDisplayed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorScaleAndOffset) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_ColorScale); \
		P_GET_STRUCT(FLinearColor,Z_Param_ColorOffset); \
		P_GET_UBOOL(Z_Param_bApplyToAllLayers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetColorScaleAndOffset(Z_Param_ColorScale,Z_Param_ColorOffset,Z_Param_bApplyToAllLayers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableOrientationTracking) \
	{ \
		P_GET_UBOOL(Z_Param_bOrientationTracking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::EnableOrientationTracking(Z_Param_bOrientationTracking); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnablePositionTracking) \
	{ \
		P_GET_UBOOL(Z_Param_bPositionTracking); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::EnablePositionTracking(Z_Param_bPositionTracking); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisplayFrequency) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RequestedFrequency); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetDisplayFrequency(Z_Param_RequestedFrequency); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDisplayFrequency) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOculusFunctionLibrary::GetCurrentDisplayFrequency(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableDisplayFrequencies) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=UOculusFunctionLibrary::GetAvailableDisplayFrequencies(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDeviceName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UOculusFunctionLibrary::GetDeviceName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTiledMultiresLevel) \
	{ \
		P_GET_ENUM(ETiledMultiResLevel,Z_Param_level); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetTiledMultiresLevel(ETiledMultiResLevel(Z_Param_level)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTiledMultiresLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ETiledMultiResLevel*)Z_Param__Result=UOculusFunctionLibrary::GetTiledMultiresLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGPUFrameTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOculusFunctionLibrary::GetGPUFrameTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGPUUtilization) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_IsGPUAvailable); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_GPUUtilization); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetGPUUtilization(Z_Param_Out_IsGPUAvailable,Z_Param_Out_GPUUtilization); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSystemOverlayPresent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::HasSystemOverlayPresent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasInputFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::HasInputFocus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLoadingSplashParams) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_TexturePath); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DistanceInMeters); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SizeInMeters); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RotationAxis); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_RotationDeltaInDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetLoadingSplashParams(Z_Param_Out_TexturePath,Z_Param_Out_DistanceInMeters,Z_Param_Out_SizeInMeters,Z_Param_Out_RotationAxis,Z_Param_Out_RotationDeltaInDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLoadingSplashParams) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TexturePath); \
		P_GET_STRUCT(FVector,Z_Param_DistanceInMeters); \
		P_GET_STRUCT(FVector2D,Z_Param_SizeInMeters); \
		P_GET_STRUCT(FVector,Z_Param_RotationAxis); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RotationDeltaInDeg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetLoadingSplashParams(Z_Param_TexturePath,Z_Param_DistanceInMeters,Z_Param_SizeInMeters,Z_Param_RotationAxis,Z_Param_RotationDeltaInDeg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLoadingIconEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsLoadingIconEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideLoadingIcon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::HideLoadingIcon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowLoadingIcon) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::ShowLoadingIcon(Z_Param_Texture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAutoLoadingSplashScreenEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsAutoLoadingSplashScreenEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableAutoLoadingSplashScreen) \
	{ \
		P_GET_UBOOL(Z_Param_bAutoShowEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::EnableAutoLoadingSplashScreen(Z_Param_bAutoShowEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideLoadingSplashScreen) \
	{ \
		P_GET_UBOOL(Z_Param_bClear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::HideLoadingSplashScreen(Z_Param_bClear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowLoadingSplashScreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::ShowLoadingSplashScreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearLoadingSplashScreens) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::ClearLoadingSplashScreens(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLoadingSplashScreen) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_Texture); \
		P_GET_STRUCT(FVector,Z_Param_TranslationInMeters); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_SizeInMeters); \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation); \
		P_GET_UBOOL(Z_Param_bClearBeforeAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::AddLoadingSplashScreen(Z_Param_Texture,Z_Param_TranslationInMeters,Z_Param_Rotation,Z_Param_SizeInMeters,Z_Param_DeltaRotation,Z_Param_bClearBeforeAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseRotationAndPositionOffset) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRot); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetBaseRotationAndPositionOffset(Z_Param_Out_OutRot,Z_Param_Out_OutPosOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseRotationAndPositionOffset) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_BaseRot); \
		P_GET_STRUCT(FVector,Z_Param_PosOffset); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetBaseRotationAndPositionOffset(Z_Param_BaseRot,Z_Param_PosOffset,EOrientPositionSelector::Type(Z_Param_Options)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPositionScale3D) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_PosScale3D); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetPositionScale3D(Z_Param_PosScale3D); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseRotationAndBaseOffsetInMeters) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutBaseOffsetInMeters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(Z_Param_Out_OutRotation,Z_Param_Out_OutBaseOffsetInMeters); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseRotationAndBaseOffsetInMeters) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_BaseOffsetInMeters); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Options); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(Z_Param_Rotation,Z_Param_BaseOffsetInMeters,EOrientPositionSelector::Type(Z_Param_Options)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserProfile) \
	{ \
		P_GET_STRUCT_REF(FHmdUserProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::GetUserProfile(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetReorientHMDOnControllerRecenter) \
	{ \
		P_GET_UBOOL(Z_Param_recenterMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetReorientHMDOnControllerRecenter(Z_Param_recenterMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCPUAndGPULevels) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CPULevel); \
		P_GET_PROPERTY(UIntProperty,Z_Param_GPULevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::SetCPUAndGPULevels(Z_Param_CPULevel,Z_Param_GPULevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDeviceTracked) \
	{ \
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOculusFunctionLibrary::IsDeviceTracked(ETrackedDeviceType(Z_Param_DeviceType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRawSensorData) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularAcceleration); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearAcceleration); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_TimeInSeconds); \
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetRawSensorData(Z_Param_Out_AngularAcceleration,Z_Param_Out_LinearAcceleration,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity,Z_Param_Out_TimeInSeconds,ETrackedDeviceType(Z_Param_DeviceType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPose) \
	{ \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NeckPosition); \
		P_GET_UBOOL(Z_Param_bUseOrienationForPlayerCamera); \
		P_GET_UBOOL(Z_Param_bUsePositionForPlayerCamera); \
		P_GET_STRUCT(FVector,Z_Param_PositionScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOculusFunctionLibrary::GetPose(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition,Z_Param_Out_NeckPosition,Z_Param_bUseOrienationForPlayerCamera,Z_Param_bUsePositionForPlayerCamera,Z_Param_PositionScale); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusHMD"), NO_API) \
	DECLARE_SERIALIZER(UOculusFunctionLibrary)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUOculusFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOculusFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusHMD"), NO_API) \
	DECLARE_SERIALIZER(UOculusFunctionLibrary)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusFunctionLibrary(UOculusFunctionLibrary&&); \
	NO_API UOculusFunctionLibrary(const UOculusFunctionLibrary&); \
public:


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusFunctionLibrary(UOculusFunctionLibrary&&); \
	NO_API UOculusFunctionLibrary(const UOculusFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusFunctionLibrary)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_131_PROLOG
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_INCLASS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_134_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSHMD_API UClass* StaticClass<class UOculusFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h


#define FOREACH_ENUM_EBOUNDARYTYPE(op) \
	op(EBoundaryType::Boundary_Outer) \
	op(EBoundaryType::Boundary_PlayArea) 

enum class EBoundaryType : uint8;
template<> OCULUSHMD_API UEnum* StaticEnum<EBoundaryType>();

#define FOREACH_ENUM_ETILEDMULTIRESLEVEL(op) \
	op(ETiledMultiResLevel::ETiledMultiResLevel_Off) \
	op(ETiledMultiResLevel::ETiledMultiResLevel_LMSLow) \
	op(ETiledMultiResLevel::ETiledMultiResLevel_LMSMedium) \
	op(ETiledMultiResLevel::ETiledMultiResLevel_LMSHigh) \
	op(ETiledMultiResLevel::ETiledMultiResLevel_LMSHighTop) 

enum class ETiledMultiResLevel : uint8;
template<> OCULUSHMD_API UEnum* StaticEnum<ETiledMultiResLevel>();

#define FOREACH_ENUM_ETRACKEDDEVICETYPE(op) \
	op(ETrackedDeviceType::None) \
	op(ETrackedDeviceType::HMD) \
	op(ETrackedDeviceType::LTouch) \
	op(ETrackedDeviceType::RTouch) \
	op(ETrackedDeviceType::Touch) \
	op(ETrackedDeviceType::DeviceObjectZero) \
	op(ETrackedDeviceType::All) 

enum class ETrackedDeviceType : uint8;
template<> OCULUSHMD_API UEnum* StaticEnum<ETrackedDeviceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
