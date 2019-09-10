// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlane;
struct FPolygonID;
struct FEdgeID;
enum class ETriangleTessellationMode : uint8;
struct FVertexID;
struct FPolygonGroupForPolygon;
struct FPolygonGroupID;
struct FPolygonGroupToCreate;
struct FVertexAndAttributes;
struct FVerticesForEdge;
enum class EInsetPolygonsMode : uint8;
struct FVector;
struct FChangeVertexInstancesForPolygon;
struct FVertexAttributesForPolygon;
struct FAttributesForEdge;
struct FAttributesForVertexInstance;
struct FAttributesForVertex;
struct FPolygonToCreate;
struct FEdgeToCreate;
struct FVertexInstanceToCreate;
struct FVertexInstanceID;
struct FVertexToCreate;
struct FPolygonToSplit;
struct FVertexToMove;
struct FMeshTriangle;
struct FSubdivisionLimitData;
struct FBoxSphereBounds;
struct FBox;
class UEditableMesh;
class UPrimitiveComponent;
enum class EMeshModificationType : uint8;
enum class EMeshTopologyChange : uint8;
#ifdef EDITABLEMESH_EditableMesh_generated_h
#error "EditableMesh.generated.h already included, missing '#pragma once' in EditableMesh.h"
#endif
#define EDITABLEMESH_EditableMesh_generated_h

#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSplitPolygonalMesh) \
	{ \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_InPlane); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs1); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs2); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_BoundaryIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SplitPolygonalMesh(Z_Param_Out_InPlane,Z_Param_Out_PolygonIDs1,Z_Param_Out_PolygonIDs2,Z_Param_Out_BoundaryIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGeneratePolygonTangentsAndNormals) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GeneratePolygonTangentsAndNormals(Z_Param_Out_PolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuadrangulateMesh) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewPolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->QuadrangulateMesh(Z_Param_Out_OutNewPolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextureCoordinateCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumTexCoords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextureCoordinateCount(Z_Param_NumTexCoords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTessellatePolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_GET_ENUM(ETriangleTessellationMode,Z_Param_TriangleTessellationMode); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewPolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TessellatePolygons(Z_Param_Out_PolygonIDs,ETriangleTessellationMode(Z_Param_TriangleTessellationMode),Z_Param_Out_OutNewPolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWeldVertices) \
	{ \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_VertexIDs); \
		P_GET_STRUCT_REF(FVertexID,Z_Param_Out_OutNewVertexID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WeldVertices(Z_Param_Out_VertexIDs,Z_Param_Out_OutNewVertexID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignPolygonsToPolygonGroups) \
	{ \
		P_GET_TARRAY_REF(FPolygonGroupForPolygon,Z_Param_Out_PolygonGroupForPolygons); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedPolygonGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignPolygonsToPolygonGroups(Z_Param_Out_PolygonGroupForPolygons,Z_Param_bDeleteOrphanedPolygonGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeletePolygonGroups) \
	{ \
		P_GET_TARRAY_REF(FPolygonGroupID,Z_Param_Out_PolygonGroupIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeletePolygonGroups(Z_Param_Out_PolygonGroupIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePolygonGroups) \
	{ \
		P_GET_TARRAY_REF(FPolygonGroupToCreate,Z_Param_Out_PolygonGroupsToCreate); \
		P_GET_TARRAY_REF(FPolygonGroupID,Z_Param_Out_OutNewPolygonGroupIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreatePolygonGroups(Z_Param_Out_PolygonGroupsToCreate,Z_Param_Out_OutNewPolygonGroupIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriangulatePolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewTrianglePolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriangulatePolygons(Z_Param_Out_PolygonIDs,Z_Param_Out_OutNewTrianglePolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipPolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipPolygons(Z_Param_Out_PolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemovePolygonPerimeterVertices) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FirstVertexNumberToRemove); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumVerticesToRemove); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertexInstances); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemovePolygonPerimeterVertices(Z_Param_PolygonID,Z_Param_FirstVertexNumberToRemove,Z_Param_NumVerticesToRemove,Z_Param_bDeleteOrphanedVertexInstances); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsertPolygonPerimeterVertices) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InsertBeforeVertexNumber); \
		P_GET_TARRAY_REF(FVertexAndAttributes,Z_Param_Out_VerticesToInsert); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InsertPolygonPerimeterVertices(Z_Param_PolygonID,Z_Param_InsertBeforeVertexNumber,Z_Param_Out_VerticesToInsert); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEdgesVertices) \
	{ \
		P_GET_TARRAY_REF(FVerticesForEdge,Z_Param_Out_VerticesForEdges); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEdgesVertices(Z_Param_Out_VerticesForEdges); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEdgesHardnessAutomatically) \
	{ \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeIDs); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDotProductForSoftEdge); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEdgesHardnessAutomatically(Z_Param_Out_EdgeIDs,Z_Param_MaxDotProductForSoftEdge); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEdgesHardness) \
	{ \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeIDs); \
		P_GET_TARRAY_REF(bool,Z_Param_Out_EdgesNewIsHard); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEdgesHardness(Z_Param_Out_EdgeIDs,Z_Param_Out_EdgesNewIsHard); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEdgesCreaseSharpness) \
	{ \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeIDs); \
		P_GET_TARRAY_REF(float,Z_Param_Out_EdgesNewCreaseSharpness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEdgesCreaseSharpness(Z_Param_Out_EdgeIDs,Z_Param_Out_EdgesNewCreaseSharpness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticesCornerSharpness) \
	{ \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_VertexIDs); \
		P_GET_TARRAY_REF(float,Z_Param_Out_VerticesNewCornerSharpness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticesCornerSharpness(Z_Param_Out_VertexIDs,Z_Param_Out_VerticesNewCornerSharpness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBevelPolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BevelFixedDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BevelProgressTowardCenter); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewCenterPolygonIDs); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewSidePolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BevelPolygons(Z_Param_Out_PolygonIDs,Z_Param_BevelFixedDistance,Z_Param_BevelProgressTowardCenter,Z_Param_Out_OutNewCenterPolygonIDs,Z_Param_Out_OutNewSidePolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsetPolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InsetFixedDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InsetProgressTowardCenter); \
		P_GET_ENUM(EInsetPolygonsMode,Z_Param_Mode); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewCenterPolygonIDs); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewSidePolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InsetPolygons(Z_Param_Out_PolygonIDs,Z_Param_InsetFixedDistance,Z_Param_InsetProgressTowardCenter,EInsetPolygonsMode(Z_Param_Mode),Z_Param_Out_OutNewCenterPolygonIDs,Z_Param_Out_OutNewSidePolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtendVertices) \
	{ \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_VertexIDs); \
		P_GET_UBOOL(Z_Param_bOnlyExtendClosestEdge); \
		P_GET_STRUCT(FVector,Z_Param_ReferencePosition); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutNewExtendedVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExtendVertices(Z_Param_Out_VertexIDs,Z_Param_bOnlyExtendClosestEdge,Z_Param_ReferencePosition,Z_Param_Out_OutNewExtendedVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtendEdges) \
	{ \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeIDs); \
		P_GET_UBOOL(Z_Param_bWeldNeighbors); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewExtendedEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExtendEdges(Z_Param_Out_EdgeIDs,Z_Param_bWeldNeighbors,Z_Param_Out_OutNewExtendedEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtrudePolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_Polygons); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExtrudeDistance); \
		P_GET_UBOOL(Z_Param_bKeepNeighborsTogether); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewExtrudedFrontPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExtrudePolygons(Z_Param_Out_Polygons,Z_Param_ExtrudeDistance,Z_Param_bKeepNeighborsTogether,Z_Param_Out_OutNewExtrudedFrontPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToRemoveVertex) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutWasVertexRemoved); \
		P_GET_STRUCT_REF(FEdgeID,Z_Param_Out_OutNewEdgeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryToRemoveVertex(Z_Param_VertexID,Z_Param_Out_bOutWasVertexRemoved,Z_Param_Out_OutNewEdgeID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToRemovePolygonEdge) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutWasEdgeRemoved); \
		P_GET_STRUCT_REF(FPolygonID,Z_Param_Out_OutNewPolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryToRemovePolygonEdge(Z_Param_EdgeID,Z_Param_Out_bOutWasEdgeRemoved,Z_Param_Out_OutNewPolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangePolygonsVertexInstances) \
	{ \
		P_GET_TARRAY_REF(FChangeVertexInstancesForPolygon,Z_Param_Out_VertexInstancesForPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangePolygonsVertexInstances(Z_Param_Out_VertexInstancesForPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPolygonsVertexAttributes) \
	{ \
		P_GET_TARRAY_REF(FVertexAttributesForPolygon,Z_Param_Out_VertexAttributesForPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPolygonsVertexAttributes(Z_Param_Out_VertexAttributesForPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEdgesAttributes) \
	{ \
		P_GET_TARRAY_REF(FAttributesForEdge,Z_Param_Out_AttributesForEdges); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEdgesAttributes(Z_Param_Out_AttributesForEdges); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVertexInstancesAttributes) \
	{ \
		P_GET_TARRAY_REF(FAttributesForVertexInstance,Z_Param_Out_AttributesForVertexInstances); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVertexInstancesAttributes(Z_Param_Out_AttributesForVertexInstances); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticesAttributes) \
	{ \
		P_GET_TARRAY_REF(FAttributesForVertex,Z_Param_Out_AttributesForVertices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticesAttributes(Z_Param_Out_AttributesForVertices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeletePolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDsToDelete); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedEdges); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertices); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertexInstances); \
		P_GET_UBOOL(Z_Param_bDeleteEmptyPolygonGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeletePolygons(Z_Param_Out_PolygonIDsToDelete,Z_Param_bDeleteOrphanedEdges,Z_Param_bDeleteOrphanedVertices,Z_Param_bDeleteOrphanedVertexInstances,Z_Param_bDeleteEmptyPolygonGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonToCreate,Z_Param_Out_PolygonsToCreate); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewPolygonIDs); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreatePolygons(Z_Param_Out_PolygonsToCreate,Z_Param_Out_OutNewPolygonIDs,Z_Param_Out_OutNewEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateEdges) \
	{ \
		P_GET_TARRAY_REF(FEdgeToCreate,Z_Param_Out_EdgesToCreate); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateEdges(Z_Param_Out_EdgesToCreate,Z_Param_Out_OutNewEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVertexInstances) \
	{ \
		P_GET_TARRAY_REF(FVertexInstanceToCreate,Z_Param_Out_VertexInstancesToCreate); \
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OutNewVertexInstanceIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateVertexInstances(Z_Param_Out_VertexInstancesToCreate,Z_Param_Out_OutNewVertexInstanceIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVertices) \
	{ \
		P_GET_TARRAY_REF(FVertexToCreate,Z_Param_Out_VerticesToCreate); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutNewVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateVertices(Z_Param_Out_VerticesToCreate,Z_Param_Out_OutNewVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateEmptyVertexRange) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumVerticesToCreate); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutNewVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateEmptyVertexRange(Z_Param_NumVerticesToCreate,Z_Param_Out_OutNewVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteEdges) \
	{ \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeIDsToDelete); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteEdges(Z_Param_Out_EdgeIDsToDelete,Z_Param_bDeleteOrphanedVertices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteVertexInstances) \
	{ \
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_VertexInstanceIDsToDelete); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteVertexInstances(Z_Param_Out_VertexInstanceIDsToDelete,Z_Param_bDeleteOrphanedVertices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteOrphanVertices) \
	{ \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_VertexIDsToDelete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteOrphanVertices(Z_Param_Out_VertexIDsToDelete); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteVertexAndConnectedEdgesAndPolygons) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedEdges); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertices); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertexInstances); \
		P_GET_UBOOL(Z_Param_bDeleteEmptyPolygonGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteVertexAndConnectedEdgesAndPolygons(Z_Param_VertexID,Z_Param_bDeleteOrphanedEdges,Z_Param_bDeleteOrphanedVertices,Z_Param_bDeleteOrphanedVertexInstances,Z_Param_bDeleteEmptyPolygonGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteEdgeAndConnectedPolygons) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedEdges); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertices); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertexInstances); \
		P_GET_UBOOL(Z_Param_bDeleteEmptyPolygonGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteEdgeAndConnectedPolygons(Z_Param_EdgeID,Z_Param_bDeleteOrphanedEdges,Z_Param_bDeleteOrphanedVertices,Z_Param_bDeleteOrphanedVertexInstances,Z_Param_bDeleteEmptyPolygonGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitPolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonToSplit,Z_Param_Out_PolygonsToSplit); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SplitPolygons(Z_Param_Out_PolygonsToSplit,Z_Param_Out_OutNewEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsertEdgeLoop) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Splits); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InsertEdgeLoop(Z_Param_EdgeID,Z_Param_Out_Splits,Z_Param_Out_OutNewEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitEdge) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Splits); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutNewVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SplitEdge(Z_Param_EdgeID,Z_Param_Out_Splits,Z_Param_Out_OutNewVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMissingPolygonPerimeterEdges) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMissingPolygonPerimeterEdges(Z_Param_PolygonID,Z_Param_Out_OutNewEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveVertices) \
	{ \
		P_GET_TARRAY_REF(FVertexToMove,Z_Param_Out_VerticesToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveVertices(Z_Param_Out_VerticesToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubdivisionCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewSubdivisionCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSubdivisionCount(Z_Param_NewSubdivisionCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane) \
	{ \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_InPlane); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(Z_Param_Out_InPlane,Z_Param_Out_OutPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsInVolume) \
	{ \
		P_GET_TARRAY_REF(FPlane,Z_Param_Out_Planes); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SearchSpatialDatabaseForPolygonsInVolume(Z_Param_Out_Planes,Z_Param_Out_OutPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LineSegmentStart); \
		P_GET_STRUCT(FVector,Z_Param_LineSegmentEnd); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(Z_Param_LineSegmentStart,Z_Param_LineSegmentEnd,Z_Param_Out_OutPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPolygonLoop) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutEdgeLoopEdgeIDs); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutFlippedEdgeIDs); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutReversedEdgeIDPathToTake); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygonIDsToSplit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindPolygonLoop(Z_Param_EdgeID,Z_Param_Out_OutEdgeLoopEdgeIDs,Z_Param_Out_OutFlippedEdgeIDs,Z_Param_Out_OutReversedEdgeIDPathToTake,Z_Param_Out_OutPolygonIDsToSplit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePolygonsSharedEdges) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutSharedEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ComputePolygonsSharedEdges(Z_Param_Out_PolygonIDs,Z_Param_Out_OutSharedEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeBarycentricWeightForPointOnPolygon) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_STRUCT(FVector,Z_Param_PointOnPolygon); \
		P_GET_STRUCT_REF(FMeshTriangle,Z_Param_Out_OutTriangle); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTriangleVertexWeights); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ComputeBarycentricWeightForPointOnPolygon(Z_Param_PolygonID,Z_Param_PointOnPolygon,Z_Param_Out_OutTriangle,Z_Param_Out_OutTriangleVertexWeights); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePolygonTriangulation) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FMeshTriangle,Z_Param_Out_OutTriangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ComputePolygonTriangulation(Z_Param_PolygonID,Z_Param_Out_OutTriangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubdivisionLimitData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubdivisionLimitData*)Z_Param__Result=P_THIS->GetSubdivisionLimitData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePolygonNormal) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ComputePolygonNormal(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePolygonPlane) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPlane*)Z_Param__Result=P_THIS->ComputePolygonPlane(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePolygonCenter) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ComputePolygonCenter(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeBoundingBoxAndSphere) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->ComputeBoundingBoxAndSphere(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=P_THIS->ComputeBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPolygonPerimeterEdgeNumberForVertices) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_STRUCT(FVertexID,Z_Param_EdgeVertexID0); \
		P_GET_STRUCT(FVertexID,Z_Param_EdgeVertexID1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindPolygonPerimeterEdgeNumberForVertices(Z_Param_PolygonID,Z_Param_EdgeVertexID0,Z_Param_EdgeVertexID1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPolygonPerimeterVertexNumberForVertex) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindPolygonPerimeterVertexNumberForVertex(Z_Param_PolygonID,Z_Param_VertexID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonAdjacentPolygons) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutAdjacentPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPolygonAdjacentPolygons(Z_Param_PolygonID,Z_Param_Out_OutAdjacentPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdges) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutPolygonPerimeterEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPolygonPerimeterEdges(Z_Param_PolygonID,Z_Param_Out_OutPolygonPerimeterEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdge) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PerimeterEdgeNumber); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutEdgeWindingIsReversedForPolygon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=P_THIS->GetPolygonPerimeterEdge(Z_Param_PolygonID,Z_Param_PerimeterEdgeNumber,Z_Param_Out_bOutEdgeWindingIsReversedForPolygon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexInstances) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OutPolygonPerimeterVertexInstanceIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPolygonPerimeterVertexInstances(Z_Param_PolygonID,Z_Param_Out_OutPolygonPerimeterVertexInstanceIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertices) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutPolygonPerimeterVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPolygonPerimeterVertices(Z_Param_PolygonID,Z_Param_Out_OutPolygonPerimeterVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdgeCount) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonPerimeterEdgeCount(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeThatConnectsVertices) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID0); \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=P_THIS->GetEdgeThatConnectsVertices(Z_Param_VertexID0,Z_Param_VertexID1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeLoopElements) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeLoopIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEdgeLoopElements(Z_Param_EdgeID,Z_Param_Out_EdgeLoopIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygons) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEdgeConnectedPolygons(Z_Param_EdgeID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeVertices) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_STRUCT_REF(FVertexID,Z_Param_Out_OutEdgeVertexID0); \
		P_GET_STRUCT_REF(FVertexID,Z_Param_Out_OutEdgeVertexID1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEdgeVertices(Z_Param_EdgeID,Z_Param_Out_OutEdgeVertexID0,Z_Param_Out_OutEdgeVertexID1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexPairEdge) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_STRUCT(FVertexID,Z_Param_NextVertexID); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutEdgeWindingIsReversed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=P_THIS->GetVertexPairEdge(Z_Param_VertexID,Z_Param_NextVertexID,Z_Param_Out_bOutEdgeWindingIsReversed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexAdjacentVertices) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutAdjacentVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVertexAdjacentVertices(Z_Param_VertexID,Z_Param_Out_OutAdjacentVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygons) \
	{ \
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVertexInstanceConnectedPolygons(Z_Param_VertexInstanceID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexConnectedPolygons) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVertexConnectedPolygons(Z_Param_VertexID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexConnectedEdges) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutConnectedEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVertexConnectedEdges(Z_Param_VertexID,Z_Param_Out_OutConnectedEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPreviewingSubdivisions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPreviewingSubdivisions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubdivisionCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSubdivisionCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextureCoordinateCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTextureCoordinateCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstValidPolygonGroup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonGroupID*)Z_Param__Result=P_THIS->GetFirstValidPolygonGroup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePolygonID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonID*)Z_Param__Result=UEditableMesh::MakePolygonID(Z_Param_PolygonIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePolygonGroupID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonGroupIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonGroupID*)Z_Param__Result=UEditableMesh::MakePolygonGroupID(Z_Param_PolygonGroupIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeEdgeID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EdgeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=UEditableMesh::MakeEdgeID(Z_Param_EdgeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeVertexID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_VertexIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexID*)Z_Param__Result=UEditableMesh::MakeVertexID(Z_Param_VertexIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidPolygonID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonID*)Z_Param__Result=UEditableMesh::InvalidPolygonID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidPolygonGroupID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonGroupID*)Z_Param__Result=UEditableMesh::InvalidPolygonGroupID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidEdgeID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=UEditableMesh::InvalidEdgeID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidVertexID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexID*)Z_Param__Result=UEditableMesh::InvalidVertexID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowCompact) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllowCompact); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowCompact(Z_Param_bInAllowCompact); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCompactAllowed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCompactAllowed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnyChangesToUndo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AnyChangesToUndo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowSpatialDatabase) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllowSpatialDatabase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowSpatialDatabase(Z_Param_bInAllowSpatialDatabase); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpatialDatabaseAllowed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSpatialDatabaseAllowed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowUndo) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllowUndo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowUndo(Z_Param_bInAllowUndo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUndoAllowed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUndoAllowed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBeingModified) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBeingModified(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonTriangulatedTriangle) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonTriangleNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMeshTriangle*)Z_Param__Result=P_THIS->GetPolygonTriangulatedTriangle(Z_Param_PolygonID,Z_Param_PolygonTriangleNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonTriangulatedTriangleCount) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonTriangulatedTriangleCount(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexInstance) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonVertexNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexInstanceID*)Z_Param__Result=P_THIS->GetPolygonPerimeterVertexInstance(Z_Param_PolygonID,Z_Param_PolygonVertexNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertex) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonVertexNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexID*)Z_Param__Result=P_THIS->GetPolygonPerimeterVertex(Z_Param_PolygonID,Z_Param_PolygonVertexNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexCount) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonPerimeterVertexCount(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroupForPolygon) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonGroupID*)Z_Param__Result=P_THIS->GetGroupForPolygon(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidPolygon) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidPolygon(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonInGroup) \
	{ \
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonID*)Z_Param__Result=P_THIS->GetPolygonInGroup(Z_Param_PolygonGroupID,Z_Param_PolygonNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonCountInGroup) \
	{ \
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonCountInGroup(Z_Param_PolygonGroupID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidPolygonGroup) \
	{ \
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidPolygonGroup(Z_Param_PolygonGroupID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonGroupCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonGroupCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygon) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConnectedPolygonNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonID*)Z_Param__Result=P_THIS->GetEdgeConnectedPolygon(Z_Param_EdgeID,Z_Param_ConnectedPolygonNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygonCount) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetEdgeConnectedPolygonCount(Z_Param_EdgeID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeVertex) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EdgeVertexNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexID*)Z_Param__Result=P_THIS->GetEdgeVertex(Z_Param_EdgeID,Z_Param_EdgeVertexNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidEdge) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidEdge(Z_Param_EdgeID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetEdgeCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygon) \
	{ \
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConnectedPolygonNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonID*)Z_Param__Result=P_THIS->GetVertexInstanceConnectedPolygon(Z_Param_VertexInstanceID,Z_Param_ConnectedPolygonNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygonCount) \
	{ \
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVertexInstanceConnectedPolygonCount(Z_Param_VertexInstanceID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexInstanceVertex) \
	{ \
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexID*)Z_Param__Result=P_THIS->GetVertexInstanceVertex(Z_Param_VertexInstanceID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexInstanceCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVertexInstanceCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexConnectedEdge) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConnectedEdgeNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=P_THIS->GetVertexConnectedEdge(Z_Param_VertexID,Z_Param_ConnectedEdgeNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexConnectedEdgeCount) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVertexConnectedEdgeCount(Z_Param_VertexID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOrphanedVertex) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOrphanedVertex(Z_Param_VertexID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidVertex) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidVertex(Z_Param_VertexID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVertexCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPropagateInstanceChanges) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PropagateInstanceChanges(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRevertInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEditableMesh**)Z_Param__Result=P_THIS->RevertInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRevert) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Revert(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCommitInstance) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToInstanceTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEditableMesh**)Z_Param__Result=P_THIS->CommitInstance(Z_Param_ComponentToInstanceTo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCommit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Commit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCommittedAsInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCommittedAsInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCommitted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCommitted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndModification) \
	{ \
		P_GET_UBOOL(Z_Param_bFromUndo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndModification(Z_Param_bFromUndo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartModification) \
	{ \
		P_GET_ENUM(EMeshModificationType,Z_Param_MeshModificationType); \
		P_GET_ENUM(EMeshTopologyChange,Z_Param_MeshTopologyChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartModification(EMeshModificationType(Z_Param_MeshModificationType),EMeshTopologyChange(Z_Param_MeshTopologyChange)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildRenderMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildRenderMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeAdapters) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeAdapters(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSplitPolygonalMesh) \
	{ \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_InPlane); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs1); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs2); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_BoundaryIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SplitPolygonalMesh(Z_Param_Out_InPlane,Z_Param_Out_PolygonIDs1,Z_Param_Out_PolygonIDs2,Z_Param_Out_BoundaryIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGeneratePolygonTangentsAndNormals) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GeneratePolygonTangentsAndNormals(Z_Param_Out_PolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execQuadrangulateMesh) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewPolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->QuadrangulateMesh(Z_Param_Out_OutNewPolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextureCoordinateCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumTexCoords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextureCoordinateCount(Z_Param_NumTexCoords); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTessellatePolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_GET_ENUM(ETriangleTessellationMode,Z_Param_TriangleTessellationMode); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewPolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TessellatePolygons(Z_Param_Out_PolygonIDs,ETriangleTessellationMode(Z_Param_TriangleTessellationMode),Z_Param_Out_OutNewPolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWeldVertices) \
	{ \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_VertexIDs); \
		P_GET_STRUCT_REF(FVertexID,Z_Param_Out_OutNewVertexID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WeldVertices(Z_Param_Out_VertexIDs,Z_Param_Out_OutNewVertexID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAssignPolygonsToPolygonGroups) \
	{ \
		P_GET_TARRAY_REF(FPolygonGroupForPolygon,Z_Param_Out_PolygonGroupForPolygons); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedPolygonGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignPolygonsToPolygonGroups(Z_Param_Out_PolygonGroupForPolygons,Z_Param_bDeleteOrphanedPolygonGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeletePolygonGroups) \
	{ \
		P_GET_TARRAY_REF(FPolygonGroupID,Z_Param_Out_PolygonGroupIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeletePolygonGroups(Z_Param_Out_PolygonGroupIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePolygonGroups) \
	{ \
		P_GET_TARRAY_REF(FPolygonGroupToCreate,Z_Param_Out_PolygonGroupsToCreate); \
		P_GET_TARRAY_REF(FPolygonGroupID,Z_Param_Out_OutNewPolygonGroupIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreatePolygonGroups(Z_Param_Out_PolygonGroupsToCreate,Z_Param_Out_OutNewPolygonGroupIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriangulatePolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewTrianglePolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriangulatePolygons(Z_Param_Out_PolygonIDs,Z_Param_Out_OutNewTrianglePolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlipPolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlipPolygons(Z_Param_Out_PolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemovePolygonPerimeterVertices) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FirstVertexNumberToRemove); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumVerticesToRemove); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertexInstances); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemovePolygonPerimeterVertices(Z_Param_PolygonID,Z_Param_FirstVertexNumberToRemove,Z_Param_NumVerticesToRemove,Z_Param_bDeleteOrphanedVertexInstances); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsertPolygonPerimeterVertices) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InsertBeforeVertexNumber); \
		P_GET_TARRAY_REF(FVertexAndAttributes,Z_Param_Out_VerticesToInsert); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InsertPolygonPerimeterVertices(Z_Param_PolygonID,Z_Param_InsertBeforeVertexNumber,Z_Param_Out_VerticesToInsert); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEdgesVertices) \
	{ \
		P_GET_TARRAY_REF(FVerticesForEdge,Z_Param_Out_VerticesForEdges); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEdgesVertices(Z_Param_Out_VerticesForEdges); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEdgesHardnessAutomatically) \
	{ \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeIDs); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDotProductForSoftEdge); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEdgesHardnessAutomatically(Z_Param_Out_EdgeIDs,Z_Param_MaxDotProductForSoftEdge); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEdgesHardness) \
	{ \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeIDs); \
		P_GET_TARRAY_REF(bool,Z_Param_Out_EdgesNewIsHard); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEdgesHardness(Z_Param_Out_EdgeIDs,Z_Param_Out_EdgesNewIsHard); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEdgesCreaseSharpness) \
	{ \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeIDs); \
		P_GET_TARRAY_REF(float,Z_Param_Out_EdgesNewCreaseSharpness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEdgesCreaseSharpness(Z_Param_Out_EdgeIDs,Z_Param_Out_EdgesNewCreaseSharpness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticesCornerSharpness) \
	{ \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_VertexIDs); \
		P_GET_TARRAY_REF(float,Z_Param_Out_VerticesNewCornerSharpness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticesCornerSharpness(Z_Param_Out_VertexIDs,Z_Param_Out_VerticesNewCornerSharpness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBevelPolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BevelFixedDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BevelProgressTowardCenter); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewCenterPolygonIDs); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewSidePolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BevelPolygons(Z_Param_Out_PolygonIDs,Z_Param_BevelFixedDistance,Z_Param_BevelProgressTowardCenter,Z_Param_Out_OutNewCenterPolygonIDs,Z_Param_Out_OutNewSidePolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsetPolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InsetFixedDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InsetProgressTowardCenter); \
		P_GET_ENUM(EInsetPolygonsMode,Z_Param_Mode); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewCenterPolygonIDs); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewSidePolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InsetPolygons(Z_Param_Out_PolygonIDs,Z_Param_InsetFixedDistance,Z_Param_InsetProgressTowardCenter,EInsetPolygonsMode(Z_Param_Mode),Z_Param_Out_OutNewCenterPolygonIDs,Z_Param_Out_OutNewSidePolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtendVertices) \
	{ \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_VertexIDs); \
		P_GET_UBOOL(Z_Param_bOnlyExtendClosestEdge); \
		P_GET_STRUCT(FVector,Z_Param_ReferencePosition); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutNewExtendedVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExtendVertices(Z_Param_Out_VertexIDs,Z_Param_bOnlyExtendClosestEdge,Z_Param_ReferencePosition,Z_Param_Out_OutNewExtendedVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtendEdges) \
	{ \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeIDs); \
		P_GET_UBOOL(Z_Param_bWeldNeighbors); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewExtendedEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExtendEdges(Z_Param_Out_EdgeIDs,Z_Param_bWeldNeighbors,Z_Param_Out_OutNewExtendedEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExtrudePolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_Polygons); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ExtrudeDistance); \
		P_GET_UBOOL(Z_Param_bKeepNeighborsTogether); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewExtrudedFrontPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExtrudePolygons(Z_Param_Out_Polygons,Z_Param_ExtrudeDistance,Z_Param_bKeepNeighborsTogether,Z_Param_Out_OutNewExtrudedFrontPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToRemoveVertex) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutWasVertexRemoved); \
		P_GET_STRUCT_REF(FEdgeID,Z_Param_Out_OutNewEdgeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryToRemoveVertex(Z_Param_VertexID,Z_Param_Out_bOutWasVertexRemoved,Z_Param_Out_OutNewEdgeID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryToRemovePolygonEdge) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutWasEdgeRemoved); \
		P_GET_STRUCT_REF(FPolygonID,Z_Param_Out_OutNewPolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TryToRemovePolygonEdge(Z_Param_EdgeID,Z_Param_Out_bOutWasEdgeRemoved,Z_Param_Out_OutNewPolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangePolygonsVertexInstances) \
	{ \
		P_GET_TARRAY_REF(FChangeVertexInstancesForPolygon,Z_Param_Out_VertexInstancesForPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangePolygonsVertexInstances(Z_Param_Out_VertexInstancesForPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPolygonsVertexAttributes) \
	{ \
		P_GET_TARRAY_REF(FVertexAttributesForPolygon,Z_Param_Out_VertexAttributesForPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPolygonsVertexAttributes(Z_Param_Out_VertexAttributesForPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEdgesAttributes) \
	{ \
		P_GET_TARRAY_REF(FAttributesForEdge,Z_Param_Out_AttributesForEdges); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEdgesAttributes(Z_Param_Out_AttributesForEdges); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVertexInstancesAttributes) \
	{ \
		P_GET_TARRAY_REF(FAttributesForVertexInstance,Z_Param_Out_AttributesForVertexInstances); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVertexInstancesAttributes(Z_Param_Out_AttributesForVertexInstances); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerticesAttributes) \
	{ \
		P_GET_TARRAY_REF(FAttributesForVertex,Z_Param_Out_AttributesForVertices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVerticesAttributes(Z_Param_Out_AttributesForVertices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeletePolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDsToDelete); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedEdges); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertices); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertexInstances); \
		P_GET_UBOOL(Z_Param_bDeleteEmptyPolygonGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeletePolygons(Z_Param_Out_PolygonIDsToDelete,Z_Param_bDeleteOrphanedEdges,Z_Param_bDeleteOrphanedVertices,Z_Param_bDeleteOrphanedVertexInstances,Z_Param_bDeleteEmptyPolygonGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreatePolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonToCreate,Z_Param_Out_PolygonsToCreate); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutNewPolygonIDs); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreatePolygons(Z_Param_Out_PolygonsToCreate,Z_Param_Out_OutNewPolygonIDs,Z_Param_Out_OutNewEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateEdges) \
	{ \
		P_GET_TARRAY_REF(FEdgeToCreate,Z_Param_Out_EdgesToCreate); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateEdges(Z_Param_Out_EdgesToCreate,Z_Param_Out_OutNewEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVertexInstances) \
	{ \
		P_GET_TARRAY_REF(FVertexInstanceToCreate,Z_Param_Out_VertexInstancesToCreate); \
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OutNewVertexInstanceIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateVertexInstances(Z_Param_Out_VertexInstancesToCreate,Z_Param_Out_OutNewVertexInstanceIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateVertices) \
	{ \
		P_GET_TARRAY_REF(FVertexToCreate,Z_Param_Out_VerticesToCreate); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutNewVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateVertices(Z_Param_Out_VerticesToCreate,Z_Param_Out_OutNewVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateEmptyVertexRange) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumVerticesToCreate); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutNewVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateEmptyVertexRange(Z_Param_NumVerticesToCreate,Z_Param_Out_OutNewVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteEdges) \
	{ \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeIDsToDelete); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteEdges(Z_Param_Out_EdgeIDsToDelete,Z_Param_bDeleteOrphanedVertices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteVertexInstances) \
	{ \
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_VertexInstanceIDsToDelete); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertices); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteVertexInstances(Z_Param_Out_VertexInstanceIDsToDelete,Z_Param_bDeleteOrphanedVertices); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteOrphanVertices) \
	{ \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_VertexIDsToDelete); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteOrphanVertices(Z_Param_Out_VertexIDsToDelete); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteVertexAndConnectedEdgesAndPolygons) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedEdges); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertices); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertexInstances); \
		P_GET_UBOOL(Z_Param_bDeleteEmptyPolygonGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteVertexAndConnectedEdgesAndPolygons(Z_Param_VertexID,Z_Param_bDeleteOrphanedEdges,Z_Param_bDeleteOrphanedVertices,Z_Param_bDeleteOrphanedVertexInstances,Z_Param_bDeleteEmptyPolygonGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteEdgeAndConnectedPolygons) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedEdges); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertices); \
		P_GET_UBOOL(Z_Param_bDeleteOrphanedVertexInstances); \
		P_GET_UBOOL(Z_Param_bDeleteEmptyPolygonGroups); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteEdgeAndConnectedPolygons(Z_Param_EdgeID,Z_Param_bDeleteOrphanedEdges,Z_Param_bDeleteOrphanedVertices,Z_Param_bDeleteOrphanedVertexInstances,Z_Param_bDeleteEmptyPolygonGroups); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitPolygons) \
	{ \
		P_GET_TARRAY_REF(FPolygonToSplit,Z_Param_Out_PolygonsToSplit); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SplitPolygons(Z_Param_Out_PolygonsToSplit,Z_Param_Out_OutNewEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInsertEdgeLoop) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Splits); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InsertEdgeLoop(Z_Param_EdgeID,Z_Param_Out_Splits,Z_Param_Out_OutNewEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSplitEdge) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_TARRAY_REF(float,Z_Param_Out_Splits); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutNewVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SplitEdge(Z_Param_EdgeID,Z_Param_Out_Splits,Z_Param_Out_OutNewVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMissingPolygonPerimeterEdges) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutNewEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMissingPolygonPerimeterEdges(Z_Param_PolygonID,Z_Param_Out_OutNewEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveVertices) \
	{ \
		P_GET_TARRAY_REF(FVertexToMove,Z_Param_Out_VerticesToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveVertices(Z_Param_Out_VerticesToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSubdivisionCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewSubdivisionCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSubdivisionCount(Z_Param_NewSubdivisionCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane) \
	{ \
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_InPlane); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(Z_Param_Out_InPlane,Z_Param_Out_OutPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsInVolume) \
	{ \
		P_GET_TARRAY_REF(FPlane,Z_Param_Out_Planes); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SearchSpatialDatabaseForPolygonsInVolume(Z_Param_Out_Planes,Z_Param_Out_OutPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_LineSegmentStart); \
		P_GET_STRUCT(FVector,Z_Param_LineSegmentEnd); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(Z_Param_LineSegmentStart,Z_Param_LineSegmentEnd,Z_Param_Out_OutPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPolygonLoop) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutEdgeLoopEdgeIDs); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutFlippedEdgeIDs); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutReversedEdgeIDPathToTake); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutPolygonIDsToSplit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindPolygonLoop(Z_Param_EdgeID,Z_Param_Out_OutEdgeLoopEdgeIDs,Z_Param_Out_OutFlippedEdgeIDs,Z_Param_Out_OutReversedEdgeIDPathToTake,Z_Param_Out_OutPolygonIDsToSplit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePolygonsSharedEdges) \
	{ \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_PolygonIDs); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutSharedEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ComputePolygonsSharedEdges(Z_Param_Out_PolygonIDs,Z_Param_Out_OutSharedEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeBarycentricWeightForPointOnPolygon) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_STRUCT(FVector,Z_Param_PointOnPolygon); \
		P_GET_STRUCT_REF(FMeshTriangle,Z_Param_Out_OutTriangle); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTriangleVertexWeights); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ComputeBarycentricWeightForPointOnPolygon(Z_Param_PolygonID,Z_Param_PointOnPolygon,Z_Param_Out_OutTriangle,Z_Param_Out_OutTriangleVertexWeights); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePolygonTriangulation) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FMeshTriangle,Z_Param_Out_OutTriangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ComputePolygonTriangulation(Z_Param_PolygonID,Z_Param_Out_OutTriangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubdivisionLimitData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSubdivisionLimitData*)Z_Param__Result=P_THIS->GetSubdivisionLimitData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePolygonNormal) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ComputePolygonNormal(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePolygonPlane) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPlane*)Z_Param__Result=P_THIS->ComputePolygonPlane(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePolygonCenter) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->ComputePolygonCenter(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeBoundingBoxAndSphere) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->ComputeBoundingBoxAndSphere(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputeBoundingBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=P_THIS->ComputeBoundingBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPolygonPerimeterEdgeNumberForVertices) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_STRUCT(FVertexID,Z_Param_EdgeVertexID0); \
		P_GET_STRUCT(FVertexID,Z_Param_EdgeVertexID1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindPolygonPerimeterEdgeNumberForVertices(Z_Param_PolygonID,Z_Param_EdgeVertexID0,Z_Param_EdgeVertexID1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPolygonPerimeterVertexNumberForVertex) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->FindPolygonPerimeterVertexNumberForVertex(Z_Param_PolygonID,Z_Param_VertexID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonAdjacentPolygons) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutAdjacentPolygons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPolygonAdjacentPolygons(Z_Param_PolygonID,Z_Param_Out_OutAdjacentPolygons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdges) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutPolygonPerimeterEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPolygonPerimeterEdges(Z_Param_PolygonID,Z_Param_Out_OutPolygonPerimeterEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdge) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PerimeterEdgeNumber); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutEdgeWindingIsReversedForPolygon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=P_THIS->GetPolygonPerimeterEdge(Z_Param_PolygonID,Z_Param_PerimeterEdgeNumber,Z_Param_Out_bOutEdgeWindingIsReversedForPolygon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexInstances) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FVertexInstanceID,Z_Param_Out_OutPolygonPerimeterVertexInstanceIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPolygonPerimeterVertexInstances(Z_Param_PolygonID,Z_Param_Out_OutPolygonPerimeterVertexInstanceIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertices) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutPolygonPerimeterVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetPolygonPerimeterVertices(Z_Param_PolygonID,Z_Param_Out_OutPolygonPerimeterVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterEdgeCount) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonPerimeterEdgeCount(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeThatConnectsVertices) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID0); \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=P_THIS->GetEdgeThatConnectsVertices(Z_Param_VertexID0,Z_Param_VertexID1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeLoopElements) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_EdgeLoopIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEdgeLoopElements(Z_Param_EdgeID,Z_Param_Out_EdgeLoopIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygons) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEdgeConnectedPolygons(Z_Param_EdgeID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeVertices) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_STRUCT_REF(FVertexID,Z_Param_Out_OutEdgeVertexID0); \
		P_GET_STRUCT_REF(FVertexID,Z_Param_Out_OutEdgeVertexID1); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetEdgeVertices(Z_Param_EdgeID,Z_Param_Out_OutEdgeVertexID0,Z_Param_Out_OutEdgeVertexID1); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexPairEdge) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_STRUCT(FVertexID,Z_Param_NextVertexID); \
		P_GET_UBOOL_REF(Z_Param_Out_bOutEdgeWindingIsReversed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=P_THIS->GetVertexPairEdge(Z_Param_VertexID,Z_Param_NextVertexID,Z_Param_Out_bOutEdgeWindingIsReversed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexAdjacentVertices) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_TARRAY_REF(FVertexID,Z_Param_Out_OutAdjacentVertexIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVertexAdjacentVertices(Z_Param_VertexID,Z_Param_Out_OutAdjacentVertexIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygons) \
	{ \
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVertexInstanceConnectedPolygons(Z_Param_VertexInstanceID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexConnectedPolygons) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_TARRAY_REF(FPolygonID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVertexConnectedPolygons(Z_Param_VertexID,Z_Param_Out_OutConnectedPolygonIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexConnectedEdges) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_TARRAY_REF(FEdgeID,Z_Param_Out_OutConnectedEdgeIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetVertexConnectedEdges(Z_Param_VertexID,Z_Param_Out_OutConnectedEdgeIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPreviewingSubdivisions) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPreviewingSubdivisions(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubdivisionCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSubdivisionCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextureCoordinateCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTextureCoordinateCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstValidPolygonGroup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonGroupID*)Z_Param__Result=P_THIS->GetFirstValidPolygonGroup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePolygonID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonID*)Z_Param__Result=UEditableMesh::MakePolygonID(Z_Param_PolygonIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakePolygonGroupID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonGroupIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonGroupID*)Z_Param__Result=UEditableMesh::MakePolygonGroupID(Z_Param_PolygonGroupIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeEdgeID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EdgeIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=UEditableMesh::MakeEdgeID(Z_Param_EdgeIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeVertexID) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_VertexIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexID*)Z_Param__Result=UEditableMesh::MakeVertexID(Z_Param_VertexIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidPolygonID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonID*)Z_Param__Result=UEditableMesh::InvalidPolygonID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidPolygonGroupID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonGroupID*)Z_Param__Result=UEditableMesh::InvalidPolygonGroupID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidEdgeID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=UEditableMesh::InvalidEdgeID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInvalidVertexID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexID*)Z_Param__Result=UEditableMesh::InvalidVertexID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowCompact) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllowCompact); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowCompact(Z_Param_bInAllowCompact); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCompactAllowed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCompactAllowed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnyChangesToUndo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AnyChangesToUndo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowSpatialDatabase) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllowSpatialDatabase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowSpatialDatabase(Z_Param_bInAllowSpatialDatabase); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSpatialDatabaseAllowed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSpatialDatabaseAllowed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAllowUndo) \
	{ \
		P_GET_UBOOL(Z_Param_bInAllowUndo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAllowUndo(Z_Param_bInAllowUndo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsUndoAllowed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsUndoAllowed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsBeingModified) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsBeingModified(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonTriangulatedTriangle) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonTriangleNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMeshTriangle*)Z_Param__Result=P_THIS->GetPolygonTriangulatedTriangle(Z_Param_PolygonID,Z_Param_PolygonTriangleNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonTriangulatedTriangleCount) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonTriangulatedTriangleCount(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexInstance) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonVertexNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexInstanceID*)Z_Param__Result=P_THIS->GetPolygonPerimeterVertexInstance(Z_Param_PolygonID,Z_Param_PolygonVertexNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertex) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonVertexNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexID*)Z_Param__Result=P_THIS->GetPolygonPerimeterVertex(Z_Param_PolygonID,Z_Param_PolygonVertexNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonPerimeterVertexCount) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonPerimeterVertexCount(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGroupForPolygon) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonGroupID*)Z_Param__Result=P_THIS->GetGroupForPolygon(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidPolygon) \
	{ \
		P_GET_STRUCT(FPolygonID,Z_Param_PolygonID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidPolygon(Z_Param_PolygonID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonInGroup) \
	{ \
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PolygonNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonID*)Z_Param__Result=P_THIS->GetPolygonInGroup(Z_Param_PolygonGroupID,Z_Param_PolygonNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonCountInGroup) \
	{ \
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonCountInGroup(Z_Param_PolygonGroupID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidPolygonGroup) \
	{ \
		P_GET_STRUCT(FPolygonGroupID,Z_Param_PolygonGroupID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidPolygonGroup(Z_Param_PolygonGroupID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPolygonGroupCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPolygonGroupCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygon) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConnectedPolygonNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonID*)Z_Param__Result=P_THIS->GetEdgeConnectedPolygon(Z_Param_EdgeID,Z_Param_ConnectedPolygonNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeConnectedPolygonCount) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetEdgeConnectedPolygonCount(Z_Param_EdgeID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeVertex) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EdgeVertexNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexID*)Z_Param__Result=P_THIS->GetEdgeVertex(Z_Param_EdgeID,Z_Param_EdgeVertexNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidEdge) \
	{ \
		P_GET_STRUCT(FEdgeID,Z_Param_EdgeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidEdge(Z_Param_EdgeID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEdgeCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetEdgeCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygon) \
	{ \
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConnectedPolygonNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPolygonID*)Z_Param__Result=P_THIS->GetVertexInstanceConnectedPolygon(Z_Param_VertexInstanceID,Z_Param_ConnectedPolygonNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexInstanceConnectedPolygonCount) \
	{ \
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVertexInstanceConnectedPolygonCount(Z_Param_VertexInstanceID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexInstanceVertex) \
	{ \
		P_GET_STRUCT(FVertexInstanceID,Z_Param_VertexInstanceID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVertexID*)Z_Param__Result=P_THIS->GetVertexInstanceVertex(Z_Param_VertexInstanceID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexInstanceCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVertexInstanceCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexConnectedEdge) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConnectedEdgeNumber); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FEdgeID*)Z_Param__Result=P_THIS->GetVertexConnectedEdge(Z_Param_VertexID,Z_Param_ConnectedEdgeNumber); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexConnectedEdgeCount) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVertexConnectedEdgeCount(Z_Param_VertexID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOrphanedVertex) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOrphanedVertex(Z_Param_VertexID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidVertex) \
	{ \
		P_GET_STRUCT(FVertexID,Z_Param_VertexID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidVertex(Z_Param_VertexID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVertexCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVertexCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPropagateInstanceChanges) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PropagateInstanceChanges(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRevertInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEditableMesh**)Z_Param__Result=P_THIS->RevertInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRevert) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Revert(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCommitInstance) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToInstanceTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UEditableMesh**)Z_Param__Result=P_THIS->CommitInstance(Z_Param_ComponentToInstanceTo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCommit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Commit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCommittedAsInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCommittedAsInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCommitted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCommitted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndModification) \
	{ \
		P_GET_UBOOL(Z_Param_bFromUndo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndModification(Z_Param_bFromUndo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartModification) \
	{ \
		P_GET_ENUM(EMeshModificationType,Z_Param_MeshModificationType); \
		P_GET_ENUM(EMeshTopologyChange,Z_Param_MeshTopologyChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartModification(EMeshModificationType(Z_Param_MeshModificationType),EMeshTopologyChange(Z_Param_MeshTopologyChange)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebuildRenderMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RebuildRenderMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitializeAdapters) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeAdapters(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEditableMesh, NO_API)


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableMesh(); \
	friend struct Z_Construct_UClass_UEditableMesh_Statics; \
public: \
	DECLARE_CLASS(UEditableMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditableMesh"), NO_API) \
	DECLARE_SERIALIZER(UEditableMesh) \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_ARCHIVESERIALIZER


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUEditableMesh(); \
	friend struct Z_Construct_UClass_UEditableMesh_Statics; \
public: \
	DECLARE_CLASS(UEditableMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditableMesh"), NO_API) \
	DECLARE_SERIALIZER(UEditableMesh) \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_ARCHIVESERIALIZER


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableMesh(UEditableMesh&&); \
	NO_API UEditableMesh(const UEditableMesh&); \
public:


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableMesh(UEditableMesh&&); \
	NO_API UEditableMesh(const UEditableMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditableMesh)


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_82_PROLOG
#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_RPC_WRAPPERS \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_INCLASS \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITABLEMESH_API UClass* StaticClass<class UEditableMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_EditableMesh_Source_EditableMesh_Public_EditableMesh_h


#define FOREACH_ENUM_ETRIANGLETESSELLATIONMODE(op) \
	op(ETriangleTessellationMode::ThreeTriangles) \
	op(ETriangleTessellationMode::FourTriangles) 

enum class ETriangleTessellationMode : uint8;
template<> EDITABLEMESH_API UEnum* StaticEnum<ETriangleTessellationMode>();

#define FOREACH_ENUM_EINSETPOLYGONSMODE(op) \
	op(EInsetPolygonsMode::All) \
	op(EInsetPolygonsMode::CenterPolygonOnly) \
	op(EInsetPolygonsMode::SidePolygonsOnly) 

enum class EInsetPolygonsMode : uint8;
template<> EDITABLEMESH_API UEnum* StaticEnum<EInsetPolygonsMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
