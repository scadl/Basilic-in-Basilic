// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RuntimeVirtualTextureEnum_generated_h
#error "RuntimeVirtualTextureEnum.generated.h already included, missing '#pragma once' in RuntimeVirtualTextureEnum.h"
#endif
#define ENGINE_RuntimeVirtualTextureEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_VT_RuntimeVirtualTextureEnum_h


#define FOREACH_ENUM_ERUNTIMEVIRTUALTEXTUREMAINPASSTYPE(op) \
	op(ERuntimeVirtualTextureMainPassType::Never) \
	op(ERuntimeVirtualTextureMainPassType::Exclusive) \
	op(ERuntimeVirtualTextureMainPassType::Always) 

enum class ERuntimeVirtualTextureMainPassType;
template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureMainPassType>();

#define FOREACH_ENUM_ERUNTIMEVIRTUALTEXTUREMATERIALTYPE(op) \
	op(ERuntimeVirtualTextureMaterialType::BaseColor) \
	op(ERuntimeVirtualTextureMaterialType::BaseColor_Normal) \
	op(ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular) \
	op(ERuntimeVirtualTextureMaterialType::Count) 

enum class ERuntimeVirtualTextureMaterialType;
template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureMaterialType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
