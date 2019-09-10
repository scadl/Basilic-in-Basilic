// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WINDOWSMIXEDREALITYSPATIALINPUT_WindowsMixedRealitySpatialInputTypes_generated_h
#error "WindowsMixedRealitySpatialInputTypes.generated.h already included, missing '#pragma once' in WindowsMixedRealitySpatialInputTypes.h"
#endif
#define WINDOWSMIXEDREALITYSPATIALINPUT_WindowsMixedRealitySpatialInputTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_WindowsMixedReality_Source_WindowsMixedRealitySpatialInput_Public_WindowsMixedRealitySpatialInputTypes_h


#define FOREACH_ENUM_EGESTURETYPE(op) \
	op(EGestureType::TapGesture) \
	op(EGestureType::HoldGesture) \
	op(EGestureType::ManipulationGesture) \
	op(EGestureType::NavigationGesture) \
	op(EGestureType::NavigationRailsGesture) \
	op(EGestureType::NavigationGestureX) \
	op(EGestureType::NavigationGestureY) \
	op(EGestureType::NavigationGestureZ) 

enum class EGestureType : uint8;
template<> WINDOWSMIXEDREALITYSPATIALINPUT_API UEnum* StaticEnum<EGestureType>();

#define FOREACH_ENUM_ESPATIALINPUTSOURCEKIND(op) \
	op(ESpatialInputSourceKind::Other) \
	op(ESpatialInputSourceKind::Hand) \
	op(ESpatialInputSourceKind::Voice) \
	op(ESpatialInputSourceKind::Controller) 

enum class ESpatialInputSourceKind;
template<> WINDOWSMIXEDREALITYSPATIALINPUT_API UEnum* StaticEnum<ESpatialInputSourceKind>();

#define FOREACH_ENUM_ESPATIALINPUTAXISGESTURETYPE(op) \
	op(ESpatialInputAxisGestureType::None) \
	op(ESpatialInputAxisGestureType::Manipulation) \
	op(ESpatialInputAxisGestureType::Navigation) \
	op(ESpatialInputAxisGestureType::NavigationRails) 

enum class ESpatialInputAxisGestureType : uint8;
template<> WINDOWSMIXEDREALITYSPATIALINPUT_API UEnum* StaticEnum<ESpatialInputAxisGestureType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
