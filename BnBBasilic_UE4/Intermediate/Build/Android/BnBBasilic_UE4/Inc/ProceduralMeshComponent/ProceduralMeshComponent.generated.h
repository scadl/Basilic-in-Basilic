// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
struct FLinearColor;
struct FProcMeshTangent;
struct FColor;
#ifdef PROCEDURALMESHCOMPONENT_ProceduralMeshComponent_generated_h
#error "ProceduralMeshComponent.generated.h already included, missing '#pragma once' in ProceduralMeshComponent.h"
#endif
#define PROCEDURALMESHCOMPONENT_ProceduralMeshComponent_generated_h

#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProcMeshSection_Statics; \
	PROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FProcMeshSection>();

#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProcMeshVertex_Statics; \
	PROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FProcMeshVertex>();

#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProcMeshTangent_Statics; \
	PROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FProcMeshTangent>();

#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCollisionConvexMeshes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCollisionConvexMesh) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_ConvexVerts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCollisionConvexMesh(Z_Param_ConvexVerts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionVisible(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMeshSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllMeshSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMeshSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMeshSection(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV2); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV3); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMeshSection_LinearColor(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_VertexColors); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMeshSection(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_VertexColors,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV2); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV3); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMeshSection_LinearColor(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,Z_Param_bCreateCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMeshSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_VertexColors); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMeshSection(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,Z_Param_bCreateCollision); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCollisionConvexMeshes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCollisionConvexMesh) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_ConvexVerts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCollisionConvexMesh(Z_Param_ConvexVerts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionVisible(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMeshSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllMeshSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMeshSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMeshSection(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV2); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV3); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMeshSection_LinearColor(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_VertexColors); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMeshSection(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_VertexColors,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV2); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV3); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMeshSection_LinearColor(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,Z_Param_bCreateCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMeshSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_VertexColors); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMeshSection(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,Z_Param_bCreateCollision); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UProceduralMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UProceduralMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UProceduralMeshComponent*>(this); }


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UProceduralMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UProceduralMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UProceduralMeshComponent*>(this); }


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralMeshComponent(UProceduralMeshComponent&&); \
	NO_API UProceduralMeshComponent(const UProceduralMeshComponent&); \
public:


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralMeshComponent(UProceduralMeshComponent&&); \
	NO_API UProceduralMeshComponent(const UProceduralMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralMeshComponent)


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProcMeshSections() { return STRUCT_OFFSET(UProceduralMeshComponent, ProcMeshSections); } \
	FORCEINLINE static uint32 __PPO__CollisionConvexElems() { return STRUCT_OFFSET(UProceduralMeshComponent, CollisionConvexElems); } \
	FORCEINLINE static uint32 __PPO__LocalBounds() { return STRUCT_OFFSET(UProceduralMeshComponent, LocalBounds); } \
	FORCEINLINE static uint32 __PPO__AsyncBodySetupQueue() { return STRUCT_OFFSET(UProceduralMeshComponent, AsyncBodySetupQueue); }


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_144_PROLOG
#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_RPC_WRAPPERS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_INCLASS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProceduralMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALMESHCOMPONENT_API UClass* StaticClass<class UProceduralMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
