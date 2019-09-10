// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FLinearColor;
class UPaperTileLayer;
struct FPaperTileInfo;
class UPaperTileMap;
#ifdef PAPER2D_PaperTileMapComponent_generated_h
#error "PaperTileMapComponent.generated.h already included, missing '#pragma once' in PaperTileMapComponent.h"
#endif
#define PAPER2D_PaperTileMapComponent_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRebuildCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLayerCollision) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_GET_UBOOL(Z_Param_bHasCollision); \
		P_GET_UBOOL(Z_Param_bOverrideThickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CustomThickness); \
		P_GET_UBOOL(Z_Param_bOverrideOffset); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CustomOffset); \
		P_GET_UBOOL(Z_Param_bRebuildCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLayerCollision(Z_Param_Layer,Z_Param_bHasCollision,Z_Param_bOverrideThickness,Z_Param_CustomThickness,Z_Param_bOverrideOffset,Z_Param_CustomOffset,Z_Param_bRebuildCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultCollisionThickness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_UBOOL(Z_Param_bRebuildCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultCollisionThickness(Z_Param_Thickness,Z_Param_bRebuildCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTilePolygon) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileY); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LayerIndex); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTilePolygon(Z_Param_TileX,Z_Param_TileY,Z_Param_Out_Points,Z_Param_LayerIndex,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileCenterPosition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileY); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LayerIndex); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTileCenterPosition(Z_Param_TileX,Z_Param_TileY,Z_Param_LayerIndex,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileCornerPosition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileY); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LayerIndex); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTileCornerPosition(Z_Param_TileX,Z_Param_TileY,Z_Param_LayerIndex,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeTileMapEditable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MakeTileMapEditable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLayerColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLayerColor(Z_Param_NewColor,Z_Param_Layer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLayerColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLayerColor(Z_Param_Layer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTileMapColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTileMapColor(Z_Param_NewColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileMapColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetTileMapColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddNewLayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPaperTileLayer**)Z_Param__Result=P_THIS->AddNewLayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResizeMap) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewWidthInTiles); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewHeightInTiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResizeMap(Z_Param_NewWidthInTiles,Z_Param_NewHeightInTiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTile) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTile(Z_Param_X,Z_Param_Y,Z_Param_Layer,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTile) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPaperTileInfo*)Z_Param__Result=P_THIS->GetTile(Z_Param_X,Z_Param_Y,Z_Param_Layer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapSize) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MapWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MapHeight); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumLayers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMapSize(Z_Param_Out_MapWidth,Z_Param_Out_MapHeight,Z_Param_Out_NumLayers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTileMap) \
	{ \
		P_GET_OBJECT(UPaperTileMap,Z_Param_NewTileMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetTileMap(Z_Param_NewTileMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOwnsTileMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OwnsTileMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNewTileMap) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MapWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MapHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PixelsPerUnrealUnit); \
		P_GET_UBOOL(Z_Param_bCreateLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateNewTileMap(Z_Param_MapWidth,Z_Param_MapHeight,Z_Param_TileWidth,Z_Param_TileHeight,Z_Param_PixelsPerUnrealUnit,Z_Param_bCreateLayer); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRebuildCollision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildCollision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLayerCollision) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_GET_UBOOL(Z_Param_bHasCollision); \
		P_GET_UBOOL(Z_Param_bOverrideThickness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CustomThickness); \
		P_GET_UBOOL(Z_Param_bOverrideOffset); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CustomOffset); \
		P_GET_UBOOL(Z_Param_bRebuildCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLayerCollision(Z_Param_Layer,Z_Param_bHasCollision,Z_Param_bOverrideThickness,Z_Param_CustomThickness,Z_Param_bOverrideOffset,Z_Param_CustomOffset,Z_Param_bRebuildCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultCollisionThickness) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Thickness); \
		P_GET_UBOOL(Z_Param_bRebuildCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultCollisionThickness(Z_Param_Thickness,Z_Param_bRebuildCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTilePolygon) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileY); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LayerIndex); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetTilePolygon(Z_Param_TileX,Z_Param_TileY,Z_Param_Out_Points,Z_Param_LayerIndex,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileCenterPosition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileY); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LayerIndex); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTileCenterPosition(Z_Param_TileX,Z_Param_TileY,Z_Param_LayerIndex,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileCornerPosition) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileY); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LayerIndex); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetTileCornerPosition(Z_Param_TileX,Z_Param_TileY,Z_Param_LayerIndex,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeTileMapEditable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MakeTileMapEditable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLayerColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLayerColor(Z_Param_NewColor,Z_Param_Layer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLayerColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetLayerColor(Z_Param_Layer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTileMapColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTileMapColor(Z_Param_NewColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTileMapColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetTileMapColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddNewLayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPaperTileLayer**)Z_Param__Result=P_THIS->AddNewLayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResizeMap) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewWidthInTiles); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewHeightInTiles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResizeMap(Z_Param_NewWidthInTiles,Z_Param_NewHeightInTiles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTile) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_GET_STRUCT(FPaperTileInfo,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTile(Z_Param_X,Z_Param_Y,Z_Param_Layer,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTile) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Y); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPaperTileInfo*)Z_Param__Result=P_THIS->GetTile(Z_Param_X,Z_Param_Y,Z_Param_Layer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapSize) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MapWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_MapHeight); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NumLayers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMapSize(Z_Param_Out_MapWidth,Z_Param_Out_MapHeight,Z_Param_Out_NumLayers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTileMap) \
	{ \
		P_GET_OBJECT(UPaperTileMap,Z_Param_NewTileMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetTileMap(Z_Param_NewTileMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOwnsTileMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OwnsTileMap(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNewTileMap) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_MapWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MapHeight); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileWidth); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TileHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PixelsPerUnrealUnit); \
		P_GET_UBOOL(Z_Param_bCreateLayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateNewTileMap(Z_Param_MapWidth,Z_Param_MapHeight,Z_Param_TileWidth,Z_Param_TileHeight,Z_Param_PixelsPerUnrealUnit,Z_Param_bCreateLayer); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileMapComponent, NO_API)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperTileMapComponent(); \
	friend struct Z_Construct_UClass_UPaperTileMapComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperTileMapComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileMapComponent) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUPaperTileMapComponent(); \
	friend struct Z_Construct_UClass_UPaperTileMapComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperTileMapComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileMapComponent) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_ARCHIVESERIALIZER


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileMapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileMapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileMapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileMapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileMapComponent(UPaperTileMapComponent&&); \
	NO_API UPaperTileMapComponent(const UPaperTileMapComponent&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileMapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileMapComponent(UPaperTileMapComponent&&); \
	NO_API UPaperTileMapComponent(const UPaperTileMapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileMapComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileMapComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileMapComponent)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MapWidth_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, MapWidth_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__MapHeight_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, MapHeight_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TileWidth_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, TileWidth_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TileHeight_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, TileHeight_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__DefaultLayerTileSet_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, DefaultLayerTileSet_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__Material_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, Material_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TileLayers_DEPRECATED() { return STRUCT_OFFSET(UPaperTileMapComponent, TileLayers_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__TileMapColor() { return STRUCT_OFFSET(UPaperTileMapComponent, TileMapColor); } \
	FORCEINLINE static uint32 __PPO__UseSingleLayerIndex() { return STRUCT_OFFSET(UPaperTileMapComponent, UseSingleLayerIndex); } \
	FORCEINLINE static uint32 __PPO__bUseSingleLayer() { return STRUCT_OFFSET(UPaperTileMapComponent, bUseSingleLayer); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_36_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperTileMapComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperTileMapComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
