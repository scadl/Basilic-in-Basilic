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
struct FTransform;
class UPaperSprite;
#ifdef PAPER2D_PaperGroupedSpriteComponent_generated_h
#error "PaperGroupedSpriteComponent.generated.h already included, missing '#pragma once' in PaperGroupedSpriteComponent.h"
#endif
#define PAPER2D_PaperGroupedSpriteComponent_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpriteInstanceData_Statics; \
	PAPER2D_API static class UScriptStruct* StaticStruct();


template<> PAPER2D_API UScriptStruct* StaticStruct<struct FSpriteInstanceData>();

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSortInstancesAlongAxis) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldSpaceSortAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortInstancesAlongAxis(Z_Param_WorldSpaceSortAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInstanceCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearInstances) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearInstances(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInstance) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveInstance(Z_Param_InstanceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInstanceColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_GET_STRUCT(FLinearColor,Z_Param_NewInstanceColor); \
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UpdateInstanceColor(Z_Param_InstanceIndex,Z_Param_NewInstanceColor,Z_Param_bMarkRenderStateDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInstanceTransform) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewInstanceTransform); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UpdateInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_NewInstanceTransform,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransform) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutInstanceTransform); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_OutInstanceTransform,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInstance) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_GET_OBJECT(UPaperSprite,Z_Param_Sprite); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddInstance(Z_Param_Out_Transform,Z_Param_Sprite,Z_Param_bWorldSpace,Z_Param_Color); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSortInstancesAlongAxis) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_WorldSpaceSortAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortInstancesAlongAxis(Z_Param_WorldSpaceSortAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetInstanceCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearInstances) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearInstances(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInstance) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveInstance(Z_Param_InstanceIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInstanceColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_GET_STRUCT(FLinearColor,Z_Param_NewInstanceColor); \
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UpdateInstanceColor(Z_Param_InstanceIndex,Z_Param_NewInstanceColor,Z_Param_bMarkRenderStateDirty); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInstanceTransform) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewInstanceTransform); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty); \
		P_GET_UBOOL(Z_Param_bTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UpdateInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_NewInstanceTransform,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstanceTransform) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InstanceIndex); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutInstanceTransform); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_OutInstanceTransform,Z_Param_bWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddInstance) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform); \
		P_GET_OBJECT(UPaperSprite,Z_Param_Sprite); \
		P_GET_UBOOL(Z_Param_bWorldSpace); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddInstance(Z_Param_Out_Transform,Z_Param_Sprite,Z_Param_bWorldSpace,Z_Param_Color); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperGroupedSpriteComponent(); \
	friend struct Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperGroupedSpriteComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperGroupedSpriteComponent)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUPaperGroupedSpriteComponent(); \
	friend struct Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperGroupedSpriteComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperGroupedSpriteComponent)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperGroupedSpriteComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperGroupedSpriteComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperGroupedSpriteComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperGroupedSpriteComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperGroupedSpriteComponent(UPaperGroupedSpriteComponent&&); \
	NO_API UPaperGroupedSpriteComponent(const UPaperGroupedSpriteComponent&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperGroupedSpriteComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperGroupedSpriteComponent(UPaperGroupedSpriteComponent&&); \
	NO_API UPaperGroupedSpriteComponent(const UPaperGroupedSpriteComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperGroupedSpriteComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperGroupedSpriteComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperGroupedSpriteComponent)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstanceMaterials() { return STRUCT_OFFSET(UPaperGroupedSpriteComponent, InstanceMaterials); } \
	FORCEINLINE static uint32 __PPO__PerInstanceSpriteData() { return STRUCT_OFFSET(UPaperGroupedSpriteComponent, PerInstanceSpriteData); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_58_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_61_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperGroupedSpriteComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperGroupedSpriteComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
