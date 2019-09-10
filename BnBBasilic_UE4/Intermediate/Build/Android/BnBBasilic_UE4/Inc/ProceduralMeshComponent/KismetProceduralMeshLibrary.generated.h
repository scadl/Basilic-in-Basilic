// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UProceduralMeshComponent;
struct FVector;
enum class EProcMeshSliceCapOption : uint8;
class UMaterialInterface;
struct FVector2D;
struct FProcMeshTangent;
class UStaticMeshComponent;
class UStaticMesh;
#ifdef PROCEDURALMESHCOMPONENT_KismetProceduralMeshLibrary_generated_h
#error "KismetProceduralMeshLibrary.generated.h already included, missing '#pragma once' in KismetProceduralMeshLibrary.h"
#endif
#define PROCEDURALMESHCOMPONENT_KismetProceduralMeshLibrary_generated_h

#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSliceProceduralMesh) \
	{ \
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_InProcMesh); \
		P_GET_STRUCT(FVector,Z_Param_PlanePosition); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_UBOOL(Z_Param_bCreateOtherHalf); \
		P_GET_OBJECT_REF(UProceduralMeshComponent,Z_Param_Out_OutOtherHalfProcMesh); \
		P_GET_ENUM(EProcMeshSliceCapOption,Z_Param_CapOption); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::SliceProceduralMesh(Z_Param_InProcMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_bCreateOtherHalf,Z_Param_Out_OutOtherHalfProcMesh,EProcMeshSliceCapOption(Z_Param_CapOption),Z_Param_CapMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionFromProceduralMesh) \
	{ \
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_InProcMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(Z_Param_InProcMesh,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyProceduralMeshFromStaticMeshComponent) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProcMeshComponent); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(Z_Param_StaticMeshComponent,Z_Param_LODIndex,Z_Param_ProcMeshComponent,Z_Param_bCreateCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionFromStaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(Z_Param_InMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMeshSplit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumY); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1s); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GridSpacing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::CreateGridMeshSplit(Z_Param_NumX,Z_Param_NumY,Z_Param_Out_Triangles,Z_Param_Out_Vertices,Z_Param_Out_UVs,Z_Param_Out_UV1s,Z_Param_GridSpacing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMeshWelded) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumY); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GridSpacing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::CreateGridMeshWelded(Z_Param_NumX,Z_Param_NumY,Z_Param_Out_Triangles,Z_Param_Out_Vertices,Z_Param_Out_UVs,Z_Param_GridSpacing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMeshTriangles) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumY); \
		P_GET_UBOOL(Z_Param_bWinding); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::CreateGridMeshTriangles(Z_Param_NumX,Z_Param_NumY,Z_Param_bWinding,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertQuadToTriangles) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert0); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert2); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::ConvertQuadToTriangles(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateTangentsForMesh) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::CalculateTangentsForMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UVs,Z_Param_Out_Normals,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateBoxMesh) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_BoxRadius); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::GenerateBoxMesh(Z_Param_BoxRadius,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSliceProceduralMesh) \
	{ \
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_InProcMesh); \
		P_GET_STRUCT(FVector,Z_Param_PlanePosition); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_UBOOL(Z_Param_bCreateOtherHalf); \
		P_GET_OBJECT_REF(UProceduralMeshComponent,Z_Param_Out_OutOtherHalfProcMesh); \
		P_GET_ENUM(EProcMeshSliceCapOption,Z_Param_CapOption); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::SliceProceduralMesh(Z_Param_InProcMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_bCreateOtherHalf,Z_Param_Out_OutOtherHalfProcMesh,EProcMeshSliceCapOption(Z_Param_CapOption),Z_Param_CapMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionFromProceduralMesh) \
	{ \
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_InProcMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(Z_Param_InProcMesh,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyProceduralMeshFromStaticMeshComponent) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProcMeshComponent); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(Z_Param_StaticMeshComponent,Z_Param_LODIndex,Z_Param_ProcMeshComponent,Z_Param_bCreateCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionFromStaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(Z_Param_InMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMeshSplit) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumY); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1s); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GridSpacing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::CreateGridMeshSplit(Z_Param_NumX,Z_Param_NumY,Z_Param_Out_Triangles,Z_Param_Out_Vertices,Z_Param_Out_UVs,Z_Param_Out_UV1s,Z_Param_GridSpacing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMeshWelded) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumY); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GridSpacing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::CreateGridMeshWelded(Z_Param_NumX,Z_Param_NumY,Z_Param_Out_Triangles,Z_Param_Out_Vertices,Z_Param_Out_UVs,Z_Param_GridSpacing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMeshTriangles) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumY); \
		P_GET_UBOOL(Z_Param_bWinding); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::CreateGridMeshTriangles(Z_Param_NumX,Z_Param_NumY,Z_Param_bWinding,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertQuadToTriangles) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert0); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert2); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::ConvertQuadToTriangles(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateTangentsForMesh) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::CalculateTangentsForMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UVs,Z_Param_Out_Normals,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateBoxMesh) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_BoxRadius); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetProceduralMeshLibrary::GenerateBoxMesh(Z_Param_BoxRadius,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetProceduralMeshLibrary(); \
	friend struct Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetProceduralMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UKismetProceduralMeshLibrary)


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUKismetProceduralMeshLibrary(); \
	friend struct Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetProceduralMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UKismetProceduralMeshLibrary)


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetProceduralMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetProceduralMeshLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetProceduralMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetProceduralMeshLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetProceduralMeshLibrary(UKismetProceduralMeshLibrary&&); \
	NO_API UKismetProceduralMeshLibrary(const UKismetProceduralMeshLibrary&); \
public:


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetProceduralMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetProceduralMeshLibrary(UKismetProceduralMeshLibrary&&); \
	NO_API UKismetProceduralMeshLibrary(const UKismetProceduralMeshLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetProceduralMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetProceduralMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetProceduralMeshLibrary)


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_26_PROLOG
#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_RPC_WRAPPERS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_INCLASS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetProceduralMeshLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALMESHCOMPONENT_API UClass* StaticClass<class UKismetProceduralMeshLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h


#define FOREACH_ENUM_EPROCMESHSLICECAPOPTION(op) \
	op(EProcMeshSliceCapOption::NoCap) \
	op(EProcMeshSliceCapOption::CreateNewSectionForCap) \
	op(EProcMeshSliceCapOption::UseLastSectionForCap) 

enum class EProcMeshSliceCapOption : uint8;
template<> PROCEDURALMESHCOMPONENT_API UEnum* StaticEnum<EProcMeshSliceCapOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
