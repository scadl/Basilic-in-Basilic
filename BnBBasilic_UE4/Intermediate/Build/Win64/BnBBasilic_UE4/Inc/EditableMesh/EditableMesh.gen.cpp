// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditableMesh/Public/EditableMesh.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableMesh() {}
// Cross Module References
	EDITABLEMESH_API UEnum* Z_Construct_UEnum_EditableMesh_ETriangleTessellationMode();
	UPackage* Z_Construct_UPackage__Script_EditableMesh();
	EDITABLEMESH_API UEnum* Z_Construct_UEnum_EditableMesh_EInsetPolygonsMode();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableMesh_NoRegister();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableMesh();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupForPolygon();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_BevelPolygons();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonID();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_Commit();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_CommitInstance();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FMeshTriangle();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FEdgeID();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_CreateEdges();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FEdgeToCreate();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexID();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupID();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupToCreate();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_CreatePolygons();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonToCreate();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_CreateVertexInstances();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceID();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceToCreate();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_CreateVertices();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexToCreate();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_DeleteEdges();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_DeletePolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_EndModification();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ExtendEdges();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ExtendVertices();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_ExtrudePolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_FindPolygonLoop();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_FlipPolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeVertex();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeVertices();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FSubdivisionLimitData();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_InitializeAdapters();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexAndAttributes();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_InsetPolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_InvalidEdgeID();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_InvalidPolygonID();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_InvalidVertexID();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsBeingModified();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsCommitted();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsCompactAllowed();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsUndoAllowed();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsValidEdge();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsValidPolygon();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_IsValidVertex();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_MakeEdgeID();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_MakePolygonID();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_MakeVertexID();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_MoveVertices();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexToMove();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_PropagateInstanceChanges();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_RebuildRenderMesh();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_Revert();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_RevertInstance();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetAllowCompact();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetAllowUndo();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesForEdge();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetEdgesHardness();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetEdgesVertices();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVerticesForEdge();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FVertexAttributesForPolygon();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesForVertexInstance();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesForVertex();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SplitEdge();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_SplitPolygons();
	EDITABLEMESH_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonToSplit();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_StartModification();
	EDITABLEMESH_API UEnum* Z_Construct_UEnum_EditableMesh_EMeshTopologyChange();
	EDITABLEMESH_API UEnum* Z_Construct_UEnum_EditableMesh_EMeshModificationType();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_TessellatePolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_TriangulatePolygons();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex();
	EDITABLEMESH_API UFunction* Z_Construct_UFunction_UEditableMesh_WeldVertices();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableMeshAdapter_NoRegister();
// End Cross Module References
	static UEnum* ETriangleTessellationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditableMesh_ETriangleTessellationMode, Z_Construct_UPackage__Script_EditableMesh(), TEXT("ETriangleTessellationMode"));
		}
		return Singleton;
	}
	template<> EDITABLEMESH_API UEnum* StaticEnum<ETriangleTessellationMode>()
	{
		return ETriangleTessellationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETriangleTessellationMode(ETriangleTessellationMode_StaticEnum, TEXT("/Script/EditableMesh"), TEXT("ETriangleTessellationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditableMesh_ETriangleTessellationMode_Hash() { return 1930671854U; }
	UEnum* Z_Construct_UEnum_EditableMesh_ETriangleTessellationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETriangleTessellationMode"), 0, Get_Z_Construct_UEnum_EditableMesh_ETriangleTessellationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETriangleTessellationMode::ThreeTriangles", (int64)ETriangleTessellationMode::ThreeTriangles },
				{ "ETriangleTessellationMode::FourTriangles", (int64)ETriangleTessellationMode::FourTriangles },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FourTriangles.Comment", "/** Split each edge and create a center polygon that connects those new vertices, then three additional polygons for each original corner */" },
				{ "FourTriangles.Name", "ETriangleTessellationMode::FourTriangles" },
				{ "FourTriangles.ToolTip", "Split each edge and create a center polygon that connects those new vertices, then three additional polygons for each original corner" },
				{ "ModuleRelativePath", "Public/EditableMesh.h" },
				{ "ThreeTriangles.Comment", "/** Connect each vertex to a new center vertex, forming three triangles */" },
				{ "ThreeTriangles.Name", "ETriangleTessellationMode::ThreeTriangles" },
				{ "ThreeTriangles.ToolTip", "Connect each vertex to a new center vertex, forming three triangles" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditableMesh,
				nullptr,
				"ETriangleTessellationMode",
				"ETriangleTessellationMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EInsetPolygonsMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EditableMesh_EInsetPolygonsMode, Z_Construct_UPackage__Script_EditableMesh(), TEXT("EInsetPolygonsMode"));
		}
		return Singleton;
	}
	template<> EDITABLEMESH_API UEnum* StaticEnum<EInsetPolygonsMode>()
	{
		return EInsetPolygonsMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInsetPolygonsMode(EInsetPolygonsMode_StaticEnum, TEXT("/Script/EditableMesh"), TEXT("EInsetPolygonsMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EditableMesh_EInsetPolygonsMode_Hash() { return 2267507518U; }
	UEnum* Z_Construct_UEnum_EditableMesh_EInsetPolygonsMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EditableMesh();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInsetPolygonsMode"), 0, Get_Z_Construct_UEnum_EditableMesh_EInsetPolygonsMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInsetPolygonsMode::All", (int64)EInsetPolygonsMode::All },
				{ "EInsetPolygonsMode::CenterPolygonOnly", (int64)EInsetPolygonsMode::CenterPolygonOnly },
				{ "EInsetPolygonsMode::SidePolygonsOnly", (int64)EInsetPolygonsMode::SidePolygonsOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "EInsetPolygonsMode::All" },
				{ "BlueprintType", "true" },
				{ "CenterPolygonOnly.Name", "EInsetPolygonsMode::CenterPolygonOnly" },
				{ "ModuleRelativePath", "Public/EditableMesh.h" },
				{ "SidePolygonsOnly.Name", "EInsetPolygonsMode::SidePolygonsOnly" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EditableMesh,
				nullptr,
				"EInsetPolygonsMode",
				"EInsetPolygonsMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEditableMesh::StaticRegisterNativesUEditableMesh()
	{
		UClass* Class = UEditableMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnyChangesToUndo", &UEditableMesh::execAnyChangesToUndo },
			{ "AssignPolygonsToPolygonGroups", &UEditableMesh::execAssignPolygonsToPolygonGroups },
			{ "BevelPolygons", &UEditableMesh::execBevelPolygons },
			{ "ChangePolygonsVertexInstances", &UEditableMesh::execChangePolygonsVertexInstances },
			{ "Commit", &UEditableMesh::execCommit },
			{ "CommitInstance", &UEditableMesh::execCommitInstance },
			{ "ComputeBarycentricWeightForPointOnPolygon", &UEditableMesh::execComputeBarycentricWeightForPointOnPolygon },
			{ "ComputeBoundingBox", &UEditableMesh::execComputeBoundingBox },
			{ "ComputeBoundingBoxAndSphere", &UEditableMesh::execComputeBoundingBoxAndSphere },
			{ "ComputePolygonCenter", &UEditableMesh::execComputePolygonCenter },
			{ "ComputePolygonNormal", &UEditableMesh::execComputePolygonNormal },
			{ "ComputePolygonPlane", &UEditableMesh::execComputePolygonPlane },
			{ "ComputePolygonsSharedEdges", &UEditableMesh::execComputePolygonsSharedEdges },
			{ "ComputePolygonTriangulation", &UEditableMesh::execComputePolygonTriangulation },
			{ "CreateEdges", &UEditableMesh::execCreateEdges },
			{ "CreateEmptyVertexRange", &UEditableMesh::execCreateEmptyVertexRange },
			{ "CreateMissingPolygonPerimeterEdges", &UEditableMesh::execCreateMissingPolygonPerimeterEdges },
			{ "CreatePolygonGroups", &UEditableMesh::execCreatePolygonGroups },
			{ "CreatePolygons", &UEditableMesh::execCreatePolygons },
			{ "CreateVertexInstances", &UEditableMesh::execCreateVertexInstances },
			{ "CreateVertices", &UEditableMesh::execCreateVertices },
			{ "DeleteEdgeAndConnectedPolygons", &UEditableMesh::execDeleteEdgeAndConnectedPolygons },
			{ "DeleteEdges", &UEditableMesh::execDeleteEdges },
			{ "DeleteOrphanVertices", &UEditableMesh::execDeleteOrphanVertices },
			{ "DeletePolygonGroups", &UEditableMesh::execDeletePolygonGroups },
			{ "DeletePolygons", &UEditableMesh::execDeletePolygons },
			{ "DeleteVertexAndConnectedEdgesAndPolygons", &UEditableMesh::execDeleteVertexAndConnectedEdgesAndPolygons },
			{ "DeleteVertexInstances", &UEditableMesh::execDeleteVertexInstances },
			{ "EndModification", &UEditableMesh::execEndModification },
			{ "ExtendEdges", &UEditableMesh::execExtendEdges },
			{ "ExtendVertices", &UEditableMesh::execExtendVertices },
			{ "ExtrudePolygons", &UEditableMesh::execExtrudePolygons },
			{ "FindPolygonLoop", &UEditableMesh::execFindPolygonLoop },
			{ "FindPolygonPerimeterEdgeNumberForVertices", &UEditableMesh::execFindPolygonPerimeterEdgeNumberForVertices },
			{ "FindPolygonPerimeterVertexNumberForVertex", &UEditableMesh::execFindPolygonPerimeterVertexNumberForVertex },
			{ "FlipPolygons", &UEditableMesh::execFlipPolygons },
			{ "GeneratePolygonTangentsAndNormals", &UEditableMesh::execGeneratePolygonTangentsAndNormals },
			{ "GetEdgeConnectedPolygon", &UEditableMesh::execGetEdgeConnectedPolygon },
			{ "GetEdgeConnectedPolygonCount", &UEditableMesh::execGetEdgeConnectedPolygonCount },
			{ "GetEdgeConnectedPolygons", &UEditableMesh::execGetEdgeConnectedPolygons },
			{ "GetEdgeCount", &UEditableMesh::execGetEdgeCount },
			{ "GetEdgeLoopElements", &UEditableMesh::execGetEdgeLoopElements },
			{ "GetEdgeThatConnectsVertices", &UEditableMesh::execGetEdgeThatConnectsVertices },
			{ "GetEdgeVertex", &UEditableMesh::execGetEdgeVertex },
			{ "GetEdgeVertices", &UEditableMesh::execGetEdgeVertices },
			{ "GetFirstValidPolygonGroup", &UEditableMesh::execGetFirstValidPolygonGroup },
			{ "GetGroupForPolygon", &UEditableMesh::execGetGroupForPolygon },
			{ "GetPolygonAdjacentPolygons", &UEditableMesh::execGetPolygonAdjacentPolygons },
			{ "GetPolygonCount", &UEditableMesh::execGetPolygonCount },
			{ "GetPolygonCountInGroup", &UEditableMesh::execGetPolygonCountInGroup },
			{ "GetPolygonGroupCount", &UEditableMesh::execGetPolygonGroupCount },
			{ "GetPolygonInGroup", &UEditableMesh::execGetPolygonInGroup },
			{ "GetPolygonPerimeterEdge", &UEditableMesh::execGetPolygonPerimeterEdge },
			{ "GetPolygonPerimeterEdgeCount", &UEditableMesh::execGetPolygonPerimeterEdgeCount },
			{ "GetPolygonPerimeterEdges", &UEditableMesh::execGetPolygonPerimeterEdges },
			{ "GetPolygonPerimeterVertex", &UEditableMesh::execGetPolygonPerimeterVertex },
			{ "GetPolygonPerimeterVertexCount", &UEditableMesh::execGetPolygonPerimeterVertexCount },
			{ "GetPolygonPerimeterVertexInstance", &UEditableMesh::execGetPolygonPerimeterVertexInstance },
			{ "GetPolygonPerimeterVertexInstances", &UEditableMesh::execGetPolygonPerimeterVertexInstances },
			{ "GetPolygonPerimeterVertices", &UEditableMesh::execGetPolygonPerimeterVertices },
			{ "GetPolygonTriangulatedTriangle", &UEditableMesh::execGetPolygonTriangulatedTriangle },
			{ "GetPolygonTriangulatedTriangleCount", &UEditableMesh::execGetPolygonTriangulatedTriangleCount },
			{ "GetSubdivisionCount", &UEditableMesh::execGetSubdivisionCount },
			{ "GetSubdivisionLimitData", &UEditableMesh::execGetSubdivisionLimitData },
			{ "GetTextureCoordinateCount", &UEditableMesh::execGetTextureCoordinateCount },
			{ "GetVertexAdjacentVertices", &UEditableMesh::execGetVertexAdjacentVertices },
			{ "GetVertexConnectedEdge", &UEditableMesh::execGetVertexConnectedEdge },
			{ "GetVertexConnectedEdgeCount", &UEditableMesh::execGetVertexConnectedEdgeCount },
			{ "GetVertexConnectedEdges", &UEditableMesh::execGetVertexConnectedEdges },
			{ "GetVertexConnectedPolygons", &UEditableMesh::execGetVertexConnectedPolygons },
			{ "GetVertexCount", &UEditableMesh::execGetVertexCount },
			{ "GetVertexInstanceConnectedPolygon", &UEditableMesh::execGetVertexInstanceConnectedPolygon },
			{ "GetVertexInstanceConnectedPolygonCount", &UEditableMesh::execGetVertexInstanceConnectedPolygonCount },
			{ "GetVertexInstanceConnectedPolygons", &UEditableMesh::execGetVertexInstanceConnectedPolygons },
			{ "GetVertexInstanceCount", &UEditableMesh::execGetVertexInstanceCount },
			{ "GetVertexInstanceVertex", &UEditableMesh::execGetVertexInstanceVertex },
			{ "GetVertexPairEdge", &UEditableMesh::execGetVertexPairEdge },
			{ "InitializeAdapters", &UEditableMesh::execInitializeAdapters },
			{ "InsertEdgeLoop", &UEditableMesh::execInsertEdgeLoop },
			{ "InsertPolygonPerimeterVertices", &UEditableMesh::execInsertPolygonPerimeterVertices },
			{ "InsetPolygons", &UEditableMesh::execInsetPolygons },
			{ "InvalidEdgeID", &UEditableMesh::execInvalidEdgeID },
			{ "InvalidPolygonGroupID", &UEditableMesh::execInvalidPolygonGroupID },
			{ "InvalidPolygonID", &UEditableMesh::execInvalidPolygonID },
			{ "InvalidVertexID", &UEditableMesh::execInvalidVertexID },
			{ "IsBeingModified", &UEditableMesh::execIsBeingModified },
			{ "IsCommitted", &UEditableMesh::execIsCommitted },
			{ "IsCommittedAsInstance", &UEditableMesh::execIsCommittedAsInstance },
			{ "IsCompactAllowed", &UEditableMesh::execIsCompactAllowed },
			{ "IsOrphanedVertex", &UEditableMesh::execIsOrphanedVertex },
			{ "IsPreviewingSubdivisions", &UEditableMesh::execIsPreviewingSubdivisions },
			{ "IsSpatialDatabaseAllowed", &UEditableMesh::execIsSpatialDatabaseAllowed },
			{ "IsUndoAllowed", &UEditableMesh::execIsUndoAllowed },
			{ "IsValidEdge", &UEditableMesh::execIsValidEdge },
			{ "IsValidPolygon", &UEditableMesh::execIsValidPolygon },
			{ "IsValidPolygonGroup", &UEditableMesh::execIsValidPolygonGroup },
			{ "IsValidVertex", &UEditableMesh::execIsValidVertex },
			{ "MakeEdgeID", &UEditableMesh::execMakeEdgeID },
			{ "MakePolygonGroupID", &UEditableMesh::execMakePolygonGroupID },
			{ "MakePolygonID", &UEditableMesh::execMakePolygonID },
			{ "MakeVertexID", &UEditableMesh::execMakeVertexID },
			{ "MoveVertices", &UEditableMesh::execMoveVertices },
			{ "PropagateInstanceChanges", &UEditableMesh::execPropagateInstanceChanges },
			{ "QuadrangulateMesh", &UEditableMesh::execQuadrangulateMesh },
			{ "RebuildRenderMesh", &UEditableMesh::execRebuildRenderMesh },
			{ "RemovePolygonPerimeterVertices", &UEditableMesh::execRemovePolygonPerimeterVertices },
			{ "Revert", &UEditableMesh::execRevert },
			{ "RevertInstance", &UEditableMesh::execRevertInstance },
			{ "SearchSpatialDatabaseForPolygonsInVolume", &UEditableMesh::execSearchSpatialDatabaseForPolygonsInVolume },
			{ "SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment", &UEditableMesh::execSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment },
			{ "SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane", &UEditableMesh::execSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane },
			{ "SetAllowCompact", &UEditableMesh::execSetAllowCompact },
			{ "SetAllowSpatialDatabase", &UEditableMesh::execSetAllowSpatialDatabase },
			{ "SetAllowUndo", &UEditableMesh::execSetAllowUndo },
			{ "SetEdgesAttributes", &UEditableMesh::execSetEdgesAttributes },
			{ "SetEdgesCreaseSharpness", &UEditableMesh::execSetEdgesCreaseSharpness },
			{ "SetEdgesHardness", &UEditableMesh::execSetEdgesHardness },
			{ "SetEdgesHardnessAutomatically", &UEditableMesh::execSetEdgesHardnessAutomatically },
			{ "SetEdgesVertices", &UEditableMesh::execSetEdgesVertices },
			{ "SetPolygonsVertexAttributes", &UEditableMesh::execSetPolygonsVertexAttributes },
			{ "SetSubdivisionCount", &UEditableMesh::execSetSubdivisionCount },
			{ "SetTextureCoordinateCount", &UEditableMesh::execSetTextureCoordinateCount },
			{ "SetVertexInstancesAttributes", &UEditableMesh::execSetVertexInstancesAttributes },
			{ "SetVerticesAttributes", &UEditableMesh::execSetVerticesAttributes },
			{ "SetVerticesCornerSharpness", &UEditableMesh::execSetVerticesCornerSharpness },
			{ "SplitEdge", &UEditableMesh::execSplitEdge },
			{ "SplitPolygonalMesh", &UEditableMesh::execSplitPolygonalMesh },
			{ "SplitPolygons", &UEditableMesh::execSplitPolygons },
			{ "StartModification", &UEditableMesh::execStartModification },
			{ "TessellatePolygons", &UEditableMesh::execTessellatePolygons },
			{ "TriangulatePolygons", &UEditableMesh::execTriangulatePolygons },
			{ "TryToRemovePolygonEdge", &UEditableMesh::execTryToRemovePolygonEdge },
			{ "TryToRemoveVertex", &UEditableMesh::execTryToRemoveVertex },
			{ "WeldVertices", &UEditableMesh::execWeldVertices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics
	{
		struct EditableMesh_eventAnyChangesToUndo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventAnyChangesToUndo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventAnyChangesToUndo_Parms), &Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/**\n\x09 * @return\x09Returns true if there are any existing tracked changes that can be undo right now\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "@return      Returns true if there are any existing tracked changes that can be undo right now" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "AnyChangesToUndo", nullptr, nullptr, sizeof(EditableMesh_eventAnyChangesToUndo_Parms), Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics
	{
		struct EditableMesh_eventAssignPolygonsToPolygonGroups_Parms
		{
			TArray<FPolygonGroupForPolygon> PolygonGroupForPolygons;
			bool bDeleteOrphanedPolygonGroups;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedPolygonGroups_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedPolygonGroups_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedPolygonGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupForPolygons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonGroupForPolygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupForPolygons_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_bDeleteOrphanedPolygonGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_bDeleteOrphanedPolygonGroups_SetBit(void* Obj)
	{
		((EditableMesh_eventAssignPolygonsToPolygonGroups_Parms*)Obj)->bDeleteOrphanedPolygonGroups = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_bDeleteOrphanedPolygonGroups = { "bDeleteOrphanedPolygonGroups", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventAssignPolygonsToPolygonGroups_Parms), &Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_bDeleteOrphanedPolygonGroups_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_bDeleteOrphanedPolygonGroups_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_bDeleteOrphanedPolygonGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_PolygonGroupForPolygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_PolygonGroupForPolygons = { "PolygonGroupForPolygons", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventAssignPolygonsToPolygonGroups_Parms, PolygonGroupForPolygons), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_PolygonGroupForPolygons_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_PolygonGroupForPolygons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_PolygonGroupForPolygons_Inner = { "PolygonGroupForPolygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonGroupForPolygon, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_bDeleteOrphanedPolygonGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_PolygonGroupForPolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::NewProp_PolygonGroupForPolygons_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "AssignPolygonsToPolygonGroups", nullptr, nullptr, sizeof(EditableMesh_eventAssignPolygonsToPolygonGroups_Parms), Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics
	{
		struct EditableMesh_eventBevelPolygons_Parms
		{
			TArray<FPolygonID> PolygonIDs;
			float BevelFixedDistance;
			float BevelProgressTowardCenter;
			TArray<FPolygonID> OutNewCenterPolygonIDs;
			TArray<FPolygonID> OutNewSidePolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewSidePolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewSidePolygonIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewCenterPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewCenterPolygonIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BevelProgressTowardCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BevelProgressTowardCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BevelFixedDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BevelFixedDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_OutNewSidePolygonIDs = { "OutNewSidePolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventBevelPolygons_Parms, OutNewSidePolygonIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_OutNewSidePolygonIDs_Inner = { "OutNewSidePolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_OutNewCenterPolygonIDs = { "OutNewCenterPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventBevelPolygons_Parms, OutNewCenterPolygonIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_OutNewCenterPolygonIDs_Inner = { "OutNewCenterPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_BevelProgressTowardCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_BevelProgressTowardCenter = { "BevelProgressTowardCenter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventBevelPolygons_Parms, BevelProgressTowardCenter), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_BevelProgressTowardCenter_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_BevelProgressTowardCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_BevelFixedDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_BevelFixedDistance = { "BevelFixedDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventBevelPolygons_Parms, BevelFixedDistance), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_BevelFixedDistance_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_BevelFixedDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_PolygonIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_PolygonIDs = { "PolygonIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventBevelPolygons_Parms, PolygonIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_PolygonIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_PolygonIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_PolygonIDs_Inner = { "PolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_OutNewSidePolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_OutNewSidePolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_OutNewCenterPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_OutNewCenterPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_BevelProgressTowardCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_BevelFixedDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_PolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::NewProp_PolygonIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "BevelPolygons", nullptr, nullptr, sizeof(EditableMesh_eventBevelPolygons_Parms), Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_BevelPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_BevelPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics
	{
		struct EditableMesh_eventChangePolygonsVertexInstances_Parms
		{
			TArray<FChangeVertexInstancesForPolygon> VertexInstancesForPolygons;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstancesForPolygons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstancesForPolygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstancesForPolygons_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::NewProp_VertexInstancesForPolygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::NewProp_VertexInstancesForPolygons = { "VertexInstancesForPolygons", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventChangePolygonsVertexInstances_Parms, VertexInstancesForPolygons), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::NewProp_VertexInstancesForPolygons_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::NewProp_VertexInstancesForPolygons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::NewProp_VertexInstancesForPolygons_Inner = { "VertexInstancesForPolygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChangeVertexInstancesForPolygon, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::NewProp_VertexInstancesForPolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::NewProp_VertexInstancesForPolygons_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ChangePolygonsVertexInstances", nullptr, nullptr, sizeof(EditableMesh_eventChangePolygonsVertexInstances_Parms), Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_Commit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_Commit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_Commit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "Commit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_Commit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_Commit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_Commit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_Commit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics
	{
		struct EditableMesh_eventCommitInstance_Parms
		{
			UPrimitiveComponent* ComponentToInstanceTo;
			UEditableMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToInstanceTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToInstanceTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCommitInstance_Parms, ReturnValue), Z_Construct_UClass_UEditableMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::NewProp_ComponentToInstanceTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::NewProp_ComponentToInstanceTo = { "ComponentToInstanceTo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCommitInstance_Parms, ComponentToInstanceTo), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::NewProp_ComponentToInstanceTo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::NewProp_ComponentToInstanceTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::NewProp_ComponentToInstanceTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "CommitInstance", nullptr, nullptr, sizeof(EditableMesh_eventCommitInstance_Parms), Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_CommitInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_CommitInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics
	{
		struct EditableMesh_eventComputeBarycentricWeightForPointOnPolygon_Parms
		{
			FPolygonID PolygonID;
			FVector PointOnPolygon;
			FMeshTriangle OutTriangle;
			FVector OutTriangleVertexWeights;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTriangleVertexWeights;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTriangle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointOnPolygon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointOnPolygon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventComputeBarycentricWeightForPointOnPolygon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventComputeBarycentricWeightForPointOnPolygon_Parms), &Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_OutTriangleVertexWeights = { "OutTriangleVertexWeights", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputeBarycentricWeightForPointOnPolygon_Parms, OutTriangleVertexWeights), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_OutTriangle = { "OutTriangle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputeBarycentricWeightForPointOnPolygon_Parms, OutTriangle), Z_Construct_UScriptStruct_FMeshTriangle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_PointOnPolygon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_PointOnPolygon = { "PointOnPolygon", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputeBarycentricWeightForPointOnPolygon_Parms, PointOnPolygon), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_PointOnPolygon_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_PointOnPolygon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputeBarycentricWeightForPointOnPolygon_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_OutTriangleVertexWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_OutTriangle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_PointOnPolygon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ComputeBarycentricWeightForPointOnPolygon", nullptr, nullptr, sizeof(EditableMesh_eventComputeBarycentricWeightForPointOnPolygon_Parms), Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox_Statics
	{
		struct EditableMesh_eventComputeBoundingBox_Parms
		{
			FBox ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputeBoundingBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ComputeBoundingBox", nullptr, nullptr, sizeof(EditableMesh_eventComputeBoundingBox_Parms), Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere_Statics
	{
		struct EditableMesh_eventComputeBoundingBoxAndSphere_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputeBoundingBoxAndSphere_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ComputeBoundingBoxAndSphere", nullptr, nullptr, sizeof(EditableMesh_eventComputeBoundingBoxAndSphere_Parms), Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics
	{
		struct EditableMesh_eventComputePolygonCenter_Parms
		{
			FPolygonID PolygonID;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputePolygonCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputePolygonCenter_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ComputePolygonCenter", nullptr, nullptr, sizeof(EditableMesh_eventComputePolygonCenter_Parms), Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics
	{
		struct EditableMesh_eventComputePolygonNormal_Parms
		{
			FPolygonID PolygonID;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputePolygonNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputePolygonNormal_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ComputePolygonNormal", nullptr, nullptr, sizeof(EditableMesh_eventComputePolygonNormal_Parms), Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics
	{
		struct EditableMesh_eventComputePolygonPlane_Parms
		{
			FPolygonID PolygonID;
			FPlane ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputePolygonPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputePolygonPlane_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ComputePolygonPlane", nullptr, nullptr, sizeof(EditableMesh_eventComputePolygonPlane_Parms), Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics
	{
		struct EditableMesh_eventComputePolygonsSharedEdges_Parms
		{
			TArray<FPolygonID> PolygonIDs;
			TArray<FEdgeID> OutSharedEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutSharedEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSharedEdgeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::NewProp_OutSharedEdgeIDs = { "OutSharedEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputePolygonsSharedEdges_Parms, OutSharedEdgeIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::NewProp_OutSharedEdgeIDs_Inner = { "OutSharedEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::NewProp_PolygonIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::NewProp_PolygonIDs = { "PolygonIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputePolygonsSharedEdges_Parms, PolygonIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::NewProp_PolygonIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::NewProp_PolygonIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::NewProp_PolygonIDs_Inner = { "PolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::NewProp_OutSharedEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::NewProp_OutSharedEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::NewProp_PolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::NewProp_PolygonIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ComputePolygonsSharedEdges", nullptr, nullptr, sizeof(EditableMesh_eventComputePolygonsSharedEdges_Parms), Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics
	{
		struct EditableMesh_eventComputePolygonTriangulation_Parms
		{
			FPolygonID PolygonID;
			TArray<FMeshTriangle> OutTriangles;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTriangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTriangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::NewProp_OutTriangles = { "OutTriangles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputePolygonTriangulation_Parms, OutTriangles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::NewProp_OutTriangles_Inner = { "OutTriangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeshTriangle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventComputePolygonTriangulation_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::NewProp_OutTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::NewProp_OutTriangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ComputePolygonTriangulation", nullptr, nullptr, sizeof(EditableMesh_eventComputePolygonTriangulation_Parms), Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics
	{
		struct EditableMesh_eventCreateEdges_Parms
		{
			TArray<FEdgeToCreate> EdgesToCreate;
			TArray<FEdgeID> OutNewEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewEdgeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgesToCreate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EdgesToCreate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgesToCreate_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::NewProp_OutNewEdgeIDs = { "OutNewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreateEdges_Parms, OutNewEdgeIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::NewProp_OutNewEdgeIDs_Inner = { "OutNewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::NewProp_EdgesToCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::NewProp_EdgesToCreate = { "EdgesToCreate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreateEdges_Parms, EdgesToCreate), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::NewProp_EdgesToCreate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::NewProp_EdgesToCreate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::NewProp_EdgesToCreate_Inner = { "EdgesToCreate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeToCreate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::NewProp_OutNewEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::NewProp_OutNewEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::NewProp_EdgesToCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::NewProp_EdgesToCreate_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "CreateEdges", nullptr, nullptr, sizeof(EditableMesh_eventCreateEdges_Parms), Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_CreateEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_CreateEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics
	{
		struct EditableMesh_eventCreateEmptyVertexRange_Parms
		{
			int32 NumVerticesToCreate;
			TArray<FVertexID> OutNewVertexIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewVertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewVertexIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumVerticesToCreate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumVerticesToCreate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::NewProp_OutNewVertexIDs = { "OutNewVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreateEmptyVertexRange_Parms, OutNewVertexIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::NewProp_OutNewVertexIDs_Inner = { "OutNewVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::NewProp_NumVerticesToCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::NewProp_NumVerticesToCreate = { "NumVerticesToCreate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreateEmptyVertexRange_Parms, NumVerticesToCreate), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::NewProp_NumVerticesToCreate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::NewProp_NumVerticesToCreate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::NewProp_OutNewVertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::NewProp_OutNewVertexIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::NewProp_NumVerticesToCreate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "CreateEmptyVertexRange", nullptr, nullptr, sizeof(EditableMesh_eventCreateEmptyVertexRange_Parms), Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics
	{
		struct EditableMesh_eventCreateMissingPolygonPerimeterEdges_Parms
		{
			FPolygonID PolygonID;
			TArray<FEdgeID> OutNewEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewEdgeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::NewProp_OutNewEdgeIDs = { "OutNewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreateMissingPolygonPerimeterEdges_Parms, OutNewEdgeIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::NewProp_OutNewEdgeIDs_Inner = { "OutNewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreateMissingPolygonPerimeterEdges_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::NewProp_OutNewEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::NewProp_OutNewEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "CreateMissingPolygonPerimeterEdges", nullptr, nullptr, sizeof(EditableMesh_eventCreateMissingPolygonPerimeterEdges_Parms), Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics
	{
		struct EditableMesh_eventCreatePolygonGroups_Parms
		{
			TArray<FPolygonGroupToCreate> PolygonGroupsToCreate;
			TArray<FPolygonGroupID> OutNewPolygonGroupIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewPolygonGroupIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewPolygonGroupIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupsToCreate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonGroupsToCreate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupsToCreate_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::NewProp_OutNewPolygonGroupIDs = { "OutNewPolygonGroupIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreatePolygonGroups_Parms, OutNewPolygonGroupIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::NewProp_OutNewPolygonGroupIDs_Inner = { "OutNewPolygonGroupIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::NewProp_PolygonGroupsToCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::NewProp_PolygonGroupsToCreate = { "PolygonGroupsToCreate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreatePolygonGroups_Parms, PolygonGroupsToCreate), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::NewProp_PolygonGroupsToCreate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::NewProp_PolygonGroupsToCreate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::NewProp_PolygonGroupsToCreate_Inner = { "PolygonGroupsToCreate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonGroupToCreate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::NewProp_OutNewPolygonGroupIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::NewProp_OutNewPolygonGroupIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::NewProp_PolygonGroupsToCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::NewProp_PolygonGroupsToCreate_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "CreatePolygonGroups", nullptr, nullptr, sizeof(EditableMesh_eventCreatePolygonGroups_Parms), Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics
	{
		struct EditableMesh_eventCreatePolygons_Parms
		{
			TArray<FPolygonToCreate> PolygonsToCreate;
			TArray<FPolygonID> OutNewPolygonIDs;
			TArray<FEdgeID> OutNewEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewEdgeIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewPolygonIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonsToCreate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonsToCreate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonsToCreate_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_OutNewEdgeIDs = { "OutNewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreatePolygons_Parms, OutNewEdgeIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_OutNewEdgeIDs_Inner = { "OutNewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_OutNewPolygonIDs = { "OutNewPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreatePolygons_Parms, OutNewPolygonIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_OutNewPolygonIDs_Inner = { "OutNewPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_PolygonsToCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_PolygonsToCreate = { "PolygonsToCreate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreatePolygons_Parms, PolygonsToCreate), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_PolygonsToCreate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_PolygonsToCreate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_PolygonsToCreate_Inner = { "PolygonsToCreate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonToCreate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_OutNewEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_OutNewEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_OutNewPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_OutNewPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_PolygonsToCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::NewProp_PolygonsToCreate_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "CreatePolygons", nullptr, nullptr, sizeof(EditableMesh_eventCreatePolygons_Parms), Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_CreatePolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_CreatePolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics
	{
		struct EditableMesh_eventCreateVertexInstances_Parms
		{
			TArray<FVertexInstanceToCreate> VertexInstancesToCreate;
			TArray<FVertexInstanceID> OutNewVertexInstanceIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewVertexInstanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewVertexInstanceIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstancesToCreate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstancesToCreate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstancesToCreate_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::NewProp_OutNewVertexInstanceIDs = { "OutNewVertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreateVertexInstances_Parms, OutNewVertexInstanceIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::NewProp_OutNewVertexInstanceIDs_Inner = { "OutNewVertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::NewProp_VertexInstancesToCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::NewProp_VertexInstancesToCreate = { "VertexInstancesToCreate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreateVertexInstances_Parms, VertexInstancesToCreate), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::NewProp_VertexInstancesToCreate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::NewProp_VertexInstancesToCreate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::NewProp_VertexInstancesToCreate_Inner = { "VertexInstancesToCreate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceToCreate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::NewProp_OutNewVertexInstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::NewProp_OutNewVertexInstanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::NewProp_VertexInstancesToCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::NewProp_VertexInstancesToCreate_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "CreateVertexInstances", nullptr, nullptr, sizeof(EditableMesh_eventCreateVertexInstances_Parms), Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_CreateVertexInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_CreateVertexInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics
	{
		struct EditableMesh_eventCreateVertices_Parms
		{
			TArray<FVertexToCreate> VerticesToCreate;
			TArray<FVertexID> OutNewVertexIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewVertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewVertexIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticesToCreate_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VerticesToCreate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticesToCreate_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::NewProp_OutNewVertexIDs = { "OutNewVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreateVertices_Parms, OutNewVertexIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::NewProp_OutNewVertexIDs_Inner = { "OutNewVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::NewProp_VerticesToCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::NewProp_VerticesToCreate = { "VerticesToCreate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventCreateVertices_Parms, VerticesToCreate), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::NewProp_VerticesToCreate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::NewProp_VerticesToCreate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::NewProp_VerticesToCreate_Inner = { "VerticesToCreate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexToCreate, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::NewProp_OutNewVertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::NewProp_OutNewVertexIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::NewProp_VerticesToCreate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::NewProp_VerticesToCreate_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "CreateVertices", nullptr, nullptr, sizeof(EditableMesh_eventCreateVertices_Parms), Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_CreateVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_CreateVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics
	{
		struct EditableMesh_eventDeleteEdgeAndConnectedPolygons_Parms
		{
			FEdgeID EdgeID;
			bool bDeleteOrphanedEdges;
			bool bDeleteOrphanedVertices;
			bool bDeleteOrphanedVertexInstances;
			bool bDeleteEmptyPolygonGroups;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteEmptyPolygonGroups_MetaData[];
#endif
		static void NewProp_bDeleteEmptyPolygonGroups_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteEmptyPolygonGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedVertexInstances_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedVertexInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedVertexInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedVertices_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedVertices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedVertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedEdges_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_SetBit(void* Obj)
	{
		((EditableMesh_eventDeleteEdgeAndConnectedPolygons_Parms*)Obj)->bDeleteEmptyPolygonGroups = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups = { "bDeleteEmptyPolygonGroups", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeleteEdgeAndConnectedPolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_SetBit(void* Obj)
	{
		((EditableMesh_eventDeleteEdgeAndConnectedPolygons_Parms*)Obj)->bDeleteOrphanedVertexInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances = { "bDeleteOrphanedVertexInstances", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeleteEdgeAndConnectedPolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertices_SetBit(void* Obj)
	{
		((EditableMesh_eventDeleteEdgeAndConnectedPolygons_Parms*)Obj)->bDeleteOrphanedVertices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertices = { "bDeleteOrphanedVertices", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeleteEdgeAndConnectedPolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertices_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertices_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedEdges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedEdges_SetBit(void* Obj)
	{
		((EditableMesh_eventDeleteEdgeAndConnectedPolygons_Parms*)Obj)->bDeleteOrphanedEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedEdges = { "bDeleteOrphanedEdges", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeleteEdgeAndConnectedPolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedEdges_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedEdges_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventDeleteEdgeAndConnectedPolygons_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_bDeleteOrphanedEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "DeleteEdgeAndConnectedPolygons", nullptr, nullptr, sizeof(EditableMesh_eventDeleteEdgeAndConnectedPolygons_Parms), Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics
	{
		struct EditableMesh_eventDeleteEdges_Parms
		{
			TArray<FEdgeID> EdgeIDsToDelete;
			bool bDeleteOrphanedVertices;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedVertices_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedVertices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedVertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeIDsToDelete_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EdgeIDsToDelete;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeIDsToDelete_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_bDeleteOrphanedVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_bDeleteOrphanedVertices_SetBit(void* Obj)
	{
		((EditableMesh_eventDeleteEdges_Parms*)Obj)->bDeleteOrphanedVertices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_bDeleteOrphanedVertices = { "bDeleteOrphanedVertices", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeleteEdges_Parms), &Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_bDeleteOrphanedVertices_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_bDeleteOrphanedVertices_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_bDeleteOrphanedVertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_EdgeIDsToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_EdgeIDsToDelete = { "EdgeIDsToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventDeleteEdges_Parms, EdgeIDsToDelete), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_EdgeIDsToDelete_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_EdgeIDsToDelete_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_EdgeIDsToDelete_Inner = { "EdgeIDsToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_bDeleteOrphanedVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_EdgeIDsToDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::NewProp_EdgeIDsToDelete_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "DeleteEdges", nullptr, nullptr, sizeof(EditableMesh_eventDeleteEdges_Parms), Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_DeleteEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_DeleteEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics
	{
		struct EditableMesh_eventDeleteOrphanVertices_Parms
		{
			TArray<FVertexID> VertexIDsToDelete;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexIDsToDelete_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexIDsToDelete;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexIDsToDelete_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::NewProp_VertexIDsToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::NewProp_VertexIDsToDelete = { "VertexIDsToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventDeleteOrphanVertices_Parms, VertexIDsToDelete), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::NewProp_VertexIDsToDelete_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::NewProp_VertexIDsToDelete_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::NewProp_VertexIDsToDelete_Inner = { "VertexIDsToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::NewProp_VertexIDsToDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::NewProp_VertexIDsToDelete_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "DeleteOrphanVertices", nullptr, nullptr, sizeof(EditableMesh_eventDeleteOrphanVertices_Parms), Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics
	{
		struct EditableMesh_eventDeletePolygonGroups_Parms
		{
			TArray<FPolygonGroupID> PolygonGroupIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonGroupIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::NewProp_PolygonGroupIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::NewProp_PolygonGroupIDs = { "PolygonGroupIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventDeletePolygonGroups_Parms, PolygonGroupIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::NewProp_PolygonGroupIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::NewProp_PolygonGroupIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::NewProp_PolygonGroupIDs_Inner = { "PolygonGroupIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::NewProp_PolygonGroupIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::NewProp_PolygonGroupIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "DeletePolygonGroups", nullptr, nullptr, sizeof(EditableMesh_eventDeletePolygonGroups_Parms), Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics
	{
		struct EditableMesh_eventDeletePolygons_Parms
		{
			TArray<FPolygonID> PolygonIDsToDelete;
			bool bDeleteOrphanedEdges;
			bool bDeleteOrphanedVertices;
			bool bDeleteOrphanedVertexInstances;
			bool bDeleteEmptyPolygonGroups;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteEmptyPolygonGroups_MetaData[];
#endif
		static void NewProp_bDeleteEmptyPolygonGroups_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteEmptyPolygonGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedVertexInstances_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedVertexInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedVertexInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedVertices_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedVertices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedVertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedEdges_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonIDsToDelete_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonIDsToDelete;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonIDsToDelete_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_SetBit(void* Obj)
	{
		((EditableMesh_eventDeletePolygons_Parms*)Obj)->bDeleteEmptyPolygonGroups = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteEmptyPolygonGroups = { "bDeleteEmptyPolygonGroups", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeletePolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_SetBit(void* Obj)
	{
		((EditableMesh_eventDeletePolygons_Parms*)Obj)->bDeleteOrphanedVertexInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertexInstances = { "bDeleteOrphanedVertexInstances", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeletePolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertices_SetBit(void* Obj)
	{
		((EditableMesh_eventDeletePolygons_Parms*)Obj)->bDeleteOrphanedVertices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertices = { "bDeleteOrphanedVertices", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeletePolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertices_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertices_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedEdges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedEdges_SetBit(void* Obj)
	{
		((EditableMesh_eventDeletePolygons_Parms*)Obj)->bDeleteOrphanedEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedEdges = { "bDeleteOrphanedEdges", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeletePolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedEdges_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedEdges_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_PolygonIDsToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_PolygonIDsToDelete = { "PolygonIDsToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventDeletePolygons_Parms, PolygonIDsToDelete), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_PolygonIDsToDelete_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_PolygonIDsToDelete_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_PolygonIDsToDelete_Inner = { "PolygonIDsToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteEmptyPolygonGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertexInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_bDeleteOrphanedEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_PolygonIDsToDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::NewProp_PolygonIDsToDelete_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "DeletePolygons", nullptr, nullptr, sizeof(EditableMesh_eventDeletePolygons_Parms), Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_DeletePolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_DeletePolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics
	{
		struct EditableMesh_eventDeleteVertexAndConnectedEdgesAndPolygons_Parms
		{
			FVertexID VertexID;
			bool bDeleteOrphanedEdges;
			bool bDeleteOrphanedVertices;
			bool bDeleteOrphanedVertexInstances;
			bool bDeleteEmptyPolygonGroups;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteEmptyPolygonGroups_MetaData[];
#endif
		static void NewProp_bDeleteEmptyPolygonGroups_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteEmptyPolygonGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedVertexInstances_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedVertexInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedVertexInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedVertices_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedVertices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedVertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedEdges_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_SetBit(void* Obj)
	{
		((EditableMesh_eventDeleteVertexAndConnectedEdgesAndPolygons_Parms*)Obj)->bDeleteEmptyPolygonGroups = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups = { "bDeleteEmptyPolygonGroups", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeleteVertexAndConnectedEdgesAndPolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_SetBit(void* Obj)
	{
		((EditableMesh_eventDeleteVertexAndConnectedEdgesAndPolygons_Parms*)Obj)->bDeleteOrphanedVertexInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances = { "bDeleteOrphanedVertexInstances", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeleteVertexAndConnectedEdgesAndPolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertices_SetBit(void* Obj)
	{
		((EditableMesh_eventDeleteVertexAndConnectedEdgesAndPolygons_Parms*)Obj)->bDeleteOrphanedVertices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertices = { "bDeleteOrphanedVertices", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeleteVertexAndConnectedEdgesAndPolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertices_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertices_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedEdges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedEdges_SetBit(void* Obj)
	{
		((EditableMesh_eventDeleteVertexAndConnectedEdgesAndPolygons_Parms*)Obj)->bDeleteOrphanedEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedEdges = { "bDeleteOrphanedEdges", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeleteVertexAndConnectedEdgesAndPolygons_Parms), &Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedEdges_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedEdges_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_VertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventDeleteVertexAndConnectedEdgesAndPolygons_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_VertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteEmptyPolygonGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertexInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_bDeleteOrphanedEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "DeleteVertexAndConnectedEdgesAndPolygons", nullptr, nullptr, sizeof(EditableMesh_eventDeleteVertexAndConnectedEdgesAndPolygons_Parms), Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics
	{
		struct EditableMesh_eventDeleteVertexInstances_Parms
		{
			TArray<FVertexInstanceID> VertexInstanceIDsToDelete;
			bool bDeleteOrphanedVertices;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedVertices_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedVertices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedVertices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceIDsToDelete_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexInstanceIDsToDelete;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceIDsToDelete_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_bDeleteOrphanedVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_bDeleteOrphanedVertices_SetBit(void* Obj)
	{
		((EditableMesh_eventDeleteVertexInstances_Parms*)Obj)->bDeleteOrphanedVertices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_bDeleteOrphanedVertices = { "bDeleteOrphanedVertices", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventDeleteVertexInstances_Parms), &Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_bDeleteOrphanedVertices_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_bDeleteOrphanedVertices_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_bDeleteOrphanedVertices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_VertexInstanceIDsToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_VertexInstanceIDsToDelete = { "VertexInstanceIDsToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventDeleteVertexInstances_Parms, VertexInstanceIDsToDelete), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_VertexInstanceIDsToDelete_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_VertexInstanceIDsToDelete_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_VertexInstanceIDsToDelete_Inner = { "VertexInstanceIDsToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_bDeleteOrphanedVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_VertexInstanceIDsToDelete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::NewProp_VertexInstanceIDsToDelete_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "DeleteVertexInstances", nullptr, nullptr, sizeof(EditableMesh_eventDeleteVertexInstances_Parms), Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_EndModification_Statics
	{
		struct EditableMesh_eventEndModification_Parms
		{
			bool bFromUndo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFromUndo_MetaData[];
#endif
		static void NewProp_bFromUndo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromUndo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_EndModification_Statics::NewProp_bFromUndo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_EndModification_Statics::NewProp_bFromUndo_SetBit(void* Obj)
	{
		((EditableMesh_eventEndModification_Parms*)Obj)->bFromUndo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_EndModification_Statics::NewProp_bFromUndo = { "bFromUndo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventEndModification_Parms), &Z_Construct_UFunction_UEditableMesh_EndModification_Statics::NewProp_bFromUndo_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_EndModification_Statics::NewProp_bFromUndo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_EndModification_Statics::NewProp_bFromUndo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_EndModification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_EndModification_Statics::NewProp_bFromUndo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_EndModification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "CPP_Default_bFromUndo", "false" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_EndModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "EndModification", nullptr, nullptr, sizeof(EditableMesh_eventEndModification_Parms), Z_Construct_UFunction_UEditableMesh_EndModification_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_EndModification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_EndModification_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_EndModification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_EndModification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_EndModification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics
	{
		struct EditableMesh_eventExtendEdges_Parms
		{
			TArray<FEdgeID> EdgeIDs;
			bool bWeldNeighbors;
			TArray<FEdgeID> OutNewExtendedEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewExtendedEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewExtendedEdgeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWeldNeighbors_MetaData[];
#endif
		static void NewProp_bWeldNeighbors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeldNeighbors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_OutNewExtendedEdgeIDs = { "OutNewExtendedEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventExtendEdges_Parms, OutNewExtendedEdgeIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_OutNewExtendedEdgeIDs_Inner = { "OutNewExtendedEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_bWeldNeighbors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_bWeldNeighbors_SetBit(void* Obj)
	{
		((EditableMesh_eventExtendEdges_Parms*)Obj)->bWeldNeighbors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_bWeldNeighbors = { "bWeldNeighbors", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventExtendEdges_Parms), &Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_bWeldNeighbors_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_bWeldNeighbors_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_bWeldNeighbors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_EdgeIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_EdgeIDs = { "EdgeIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventExtendEdges_Parms, EdgeIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_EdgeIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_EdgeIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_EdgeIDs_Inner = { "EdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_OutNewExtendedEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_OutNewExtendedEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_bWeldNeighbors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_EdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::NewProp_EdgeIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ExtendEdges", nullptr, nullptr, sizeof(EditableMesh_eventExtendEdges_Parms), Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ExtendEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ExtendEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics
	{
		struct EditableMesh_eventExtendVertices_Parms
		{
			TArray<FVertexID> VertexIDs;
			bool bOnlyExtendClosestEdge;
			FVector ReferencePosition;
			TArray<FVertexID> OutNewExtendedVertexIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewExtendedVertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewExtendedVertexIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferencePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReferencePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyExtendClosestEdge_MetaData[];
#endif
		static void NewProp_bOnlyExtendClosestEdge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyExtendClosestEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_OutNewExtendedVertexIDs = { "OutNewExtendedVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventExtendVertices_Parms, OutNewExtendedVertexIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_OutNewExtendedVertexIDs_Inner = { "OutNewExtendedVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_ReferencePosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_ReferencePosition = { "ReferencePosition", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventExtendVertices_Parms, ReferencePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_ReferencePosition_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_ReferencePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_bOnlyExtendClosestEdge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_bOnlyExtendClosestEdge_SetBit(void* Obj)
	{
		((EditableMesh_eventExtendVertices_Parms*)Obj)->bOnlyExtendClosestEdge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_bOnlyExtendClosestEdge = { "bOnlyExtendClosestEdge", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventExtendVertices_Parms), &Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_bOnlyExtendClosestEdge_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_bOnlyExtendClosestEdge_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_bOnlyExtendClosestEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_VertexIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_VertexIDs = { "VertexIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventExtendVertices_Parms, VertexIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_VertexIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_VertexIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_VertexIDs_Inner = { "VertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_OutNewExtendedVertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_OutNewExtendedVertexIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_ReferencePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_bOnlyExtendClosestEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_VertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::NewProp_VertexIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ExtendVertices", nullptr, nullptr, sizeof(EditableMesh_eventExtendVertices_Parms), Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ExtendVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ExtendVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics
	{
		struct EditableMesh_eventExtrudePolygons_Parms
		{
			TArray<FPolygonID> Polygons;
			float ExtrudeDistance;
			bool bKeepNeighborsTogether;
			TArray<FPolygonID> OutNewExtrudedFrontPolygons;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewExtrudedFrontPolygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewExtrudedFrontPolygons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepNeighborsTogether_MetaData[];
#endif
		static void NewProp_bKeepNeighborsTogether_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepNeighborsTogether;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtrudeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExtrudeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Polygons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Polygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Polygons_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_OutNewExtrudedFrontPolygons = { "OutNewExtrudedFrontPolygons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventExtrudePolygons_Parms, OutNewExtrudedFrontPolygons), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_OutNewExtrudedFrontPolygons_Inner = { "OutNewExtrudedFrontPolygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_bKeepNeighborsTogether_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_bKeepNeighborsTogether_SetBit(void* Obj)
	{
		((EditableMesh_eventExtrudePolygons_Parms*)Obj)->bKeepNeighborsTogether = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_bKeepNeighborsTogether = { "bKeepNeighborsTogether", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventExtrudePolygons_Parms), &Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_bKeepNeighborsTogether_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_bKeepNeighborsTogether_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_bKeepNeighborsTogether_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_ExtrudeDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_ExtrudeDistance = { "ExtrudeDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventExtrudePolygons_Parms, ExtrudeDistance), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_ExtrudeDistance_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_ExtrudeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_Polygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_Polygons = { "Polygons", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventExtrudePolygons_Parms, Polygons), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_Polygons_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_Polygons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_Polygons_Inner = { "Polygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_OutNewExtrudedFrontPolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_OutNewExtrudedFrontPolygons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_bKeepNeighborsTogether,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_ExtrudeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_Polygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::NewProp_Polygons_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "ExtrudePolygons", nullptr, nullptr, sizeof(EditableMesh_eventExtrudePolygons_Parms), Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_ExtrudePolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_ExtrudePolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics
	{
		struct EditableMesh_eventFindPolygonLoop_Parms
		{
			FEdgeID EdgeID;
			TArray<FEdgeID> OutEdgeLoopEdgeIDs;
			TArray<FEdgeID> OutFlippedEdgeIDs;
			TArray<FEdgeID> OutReversedEdgeIDPathToTake;
			TArray<FPolygonID> OutPolygonIDsToSplit;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPolygonIDsToSplit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPolygonIDsToSplit_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutReversedEdgeIDPathToTake;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutReversedEdgeIDPathToTake_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFlippedEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFlippedEdgeIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutEdgeLoopEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEdgeLoopEdgeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutPolygonIDsToSplit = { "OutPolygonIDsToSplit", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonLoop_Parms, OutPolygonIDsToSplit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutPolygonIDsToSplit_Inner = { "OutPolygonIDsToSplit", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutReversedEdgeIDPathToTake = { "OutReversedEdgeIDPathToTake", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonLoop_Parms, OutReversedEdgeIDPathToTake), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutReversedEdgeIDPathToTake_Inner = { "OutReversedEdgeIDPathToTake", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutFlippedEdgeIDs = { "OutFlippedEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonLoop_Parms, OutFlippedEdgeIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutFlippedEdgeIDs_Inner = { "OutFlippedEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutEdgeLoopEdgeIDs = { "OutEdgeLoopEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonLoop_Parms, OutEdgeLoopEdgeIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutEdgeLoopEdgeIDs_Inner = { "OutEdgeLoopEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonLoop_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutPolygonIDsToSplit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutPolygonIDsToSplit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutReversedEdgeIDPathToTake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutReversedEdgeIDPathToTake_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutFlippedEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutFlippedEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutEdgeLoopEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_OutEdgeLoopEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "FindPolygonLoop", nullptr, nullptr, sizeof(EditableMesh_eventFindPolygonLoop_Parms), Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_FindPolygonLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_FindPolygonLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics
	{
		struct EditableMesh_eventFindPolygonPerimeterEdgeNumberForVertices_Parms
		{
			FPolygonID PolygonID;
			FVertexID EdgeVertexID0;
			FVertexID EdgeVertexID1;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeVertexID1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeVertexID1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeVertexID0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeVertexID0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonPerimeterEdgeNumberForVertices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_EdgeVertexID1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_EdgeVertexID1 = { "EdgeVertexID1", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonPerimeterEdgeNumberForVertices_Parms, EdgeVertexID1), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_EdgeVertexID1_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_EdgeVertexID1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_EdgeVertexID0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_EdgeVertexID0 = { "EdgeVertexID0", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonPerimeterEdgeNumberForVertices_Parms, EdgeVertexID0), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_EdgeVertexID0_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_EdgeVertexID0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonPerimeterEdgeNumberForVertices_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_EdgeVertexID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_EdgeVertexID0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "FindPolygonPerimeterEdgeNumberForVertices", nullptr, nullptr, sizeof(EditableMesh_eventFindPolygonPerimeterEdgeNumberForVertices_Parms), Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics
	{
		struct EditableMesh_eventFindPolygonPerimeterVertexNumberForVertex_Parms
		{
			FPolygonID PolygonID;
			FVertexID VertexID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonPerimeterVertexNumberForVertex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_VertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonPerimeterVertexNumberForVertex_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_VertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_VertexID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFindPolygonPerimeterVertexNumberForVertex_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_VertexID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "FindPolygonPerimeterVertexNumberForVertex", nullptr, nullptr, sizeof(EditableMesh_eventFindPolygonPerimeterVertexNumberForVertex_Parms), Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics
	{
		struct EditableMesh_eventFlipPolygons_Parms
		{
			TArray<FPolygonID> PolygonIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::NewProp_PolygonIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::NewProp_PolygonIDs = { "PolygonIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventFlipPolygons_Parms, PolygonIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::NewProp_PolygonIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::NewProp_PolygonIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::NewProp_PolygonIDs_Inner = { "PolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::NewProp_PolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::NewProp_PolygonIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "FlipPolygons", nullptr, nullptr, sizeof(EditableMesh_eventFlipPolygons_Parms), Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_FlipPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_FlipPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics
	{
		struct EditableMesh_eventGeneratePolygonTangentsAndNormals_Parms
		{
			TArray<FPolygonID> PolygonIDs;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::NewProp_PolygonIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::NewProp_PolygonIDs = { "PolygonIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGeneratePolygonTangentsAndNormals_Parms, PolygonIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::NewProp_PolygonIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::NewProp_PolygonIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::NewProp_PolygonIDs_Inner = { "PolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::NewProp_PolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::NewProp_PolygonIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GeneratePolygonTangentsAndNormals", nullptr, nullptr, sizeof(EditableMesh_eventGeneratePolygonTangentsAndNormals_Parms), Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics
	{
		struct EditableMesh_eventGetEdgeConnectedPolygon_Parms
		{
			FEdgeID EdgeID;
			int32 ConnectedPolygonNumber;
			FPolygonID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedPolygonNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectedPolygonNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeConnectedPolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_ConnectedPolygonNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_ConnectedPolygonNumber = { "ConnectedPolygonNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeConnectedPolygon_Parms, ConnectedPolygonNumber), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_ConnectedPolygonNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_ConnectedPolygonNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeConnectedPolygon_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_ConnectedPolygonNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the indexed polygon connected to this edge */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the indexed polygon connected to this edge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetEdgeConnectedPolygon", nullptr, nullptr, sizeof(EditableMesh_eventGetEdgeConnectedPolygon_Parms), Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics
	{
		struct EditableMesh_eventGetEdgeConnectedPolygonCount_Parms
		{
			FEdgeID EdgeID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeConnectedPolygonCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeConnectedPolygonCount_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the number of polygons connected to this edge */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the number of polygons connected to this edge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetEdgeConnectedPolygonCount", nullptr, nullptr, sizeof(EditableMesh_eventGetEdgeConnectedPolygonCount_Parms), Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics
	{
		struct EditableMesh_eventGetEdgeConnectedPolygons_Parms
		{
			FEdgeID EdgeID;
			TArray<FPolygonID> OutConnectedPolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutConnectedPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutConnectedPolygonIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeConnectedPolygons_Parms, OutConnectedPolygonIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeConnectedPolygons_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetEdgeConnectedPolygons", nullptr, nullptr, sizeof(EditableMesh_eventGetEdgeConnectedPolygons_Parms), Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetEdgeCount_Statics
	{
		struct EditableMesh_eventGetEdgeCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetEdgeCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the number of edges in this mesh */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the number of edges in this mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetEdgeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetEdgeCount", nullptr, nullptr, sizeof(EditableMesh_eventGetEdgeCount_Parms), Z_Construct_UFunction_UEditableMesh_GetEdgeCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetEdgeCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics
	{
		struct EditableMesh_eventGetEdgeLoopElements_Parms
		{
			FEdgeID EdgeID;
			TArray<FEdgeID> EdgeLoopIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EdgeLoopIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeLoopIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::NewProp_EdgeLoopIDs = { "EdgeLoopIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeLoopElements_Parms, EdgeLoopIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::NewProp_EdgeLoopIDs_Inner = { "EdgeLoopIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeLoopElements_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::NewProp_EdgeLoopIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::NewProp_EdgeLoopIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetEdgeLoopElements", nullptr, nullptr, sizeof(EditableMesh_eventGetEdgeLoopElements_Parms), Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics
	{
		struct EditableMesh_eventGetEdgeThatConnectsVertices_Parms
		{
			FVertexID VertexID0;
			FVertexID VertexID1;
			FEdgeID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeThatConnectsVertices_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_VertexID1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_VertexID1 = { "VertexID1", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeThatConnectsVertices_Parms, VertexID1), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_VertexID1_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_VertexID1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_VertexID0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_VertexID0 = { "VertexID0", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeThatConnectsVertices_Parms, VertexID0), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_VertexID0_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_VertexID0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_VertexID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::NewProp_VertexID0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetEdgeThatConnectsVertices", nullptr, nullptr, sizeof(EditableMesh_eventGetEdgeThatConnectsVertices_Parms), Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics
	{
		struct EditableMesh_eventGetEdgeVertex_Parms
		{
			FEdgeID EdgeID;
			int32 EdgeVertexNumber;
			FVertexID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeVertexNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EdgeVertexNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_EdgeVertexNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_EdgeVertexNumber = { "EdgeVertexNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeVertex_Parms, EdgeVertexNumber), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_EdgeVertexNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_EdgeVertexNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeVertex_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_EdgeVertexNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the given indexed vertex for this edge. EdgeVertexNumber must be 0 or 1. */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the given indexed vertex for this edge. EdgeVertexNumber must be 0 or 1." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetEdgeVertex", nullptr, nullptr, sizeof(EditableMesh_eventGetEdgeVertex_Parms), Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetEdgeVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics
	{
		struct EditableMesh_eventGetEdgeVertices_Parms
		{
			FEdgeID EdgeID;
			FVertexID OutEdgeVertexID0;
			FVertexID OutEdgeVertexID1;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEdgeVertexID1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutEdgeVertexID0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::NewProp_OutEdgeVertexID1 = { "OutEdgeVertexID1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeVertices_Parms, OutEdgeVertexID1), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::NewProp_OutEdgeVertexID0 = { "OutEdgeVertexID0", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeVertices_Parms, OutEdgeVertexID0), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetEdgeVertices_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::NewProp_OutEdgeVertexID1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::NewProp_OutEdgeVertexID0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetEdgeVertices", nullptr, nullptr, sizeof(EditableMesh_eventGetEdgeVertices_Parms), Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetEdgeVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetEdgeVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup_Statics
	{
		struct EditableMesh_eventGetFirstValidPolygonGroup_Parms
		{
			FPolygonGroupID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetFirstValidPolygonGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetFirstValidPolygonGroup", nullptr, nullptr, sizeof(EditableMesh_eventGetFirstValidPolygonGroup_Parms), Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics
	{
		struct EditableMesh_eventGetGroupForPolygon_Parms
		{
			FPolygonID PolygonID;
			FPolygonGroupID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetGroupForPolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetGroupForPolygon_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the polygon group this polygon is assigned to */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the polygon group this polygon is assigned to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetGroupForPolygon", nullptr, nullptr, sizeof(EditableMesh_eventGetGroupForPolygon_Parms), Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics
	{
		struct EditableMesh_eventGetPolygonAdjacentPolygons_Parms
		{
			FPolygonID PolygonID;
			TArray<FPolygonID> OutAdjacentPolygons;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAdjacentPolygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAdjacentPolygons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::NewProp_OutAdjacentPolygons = { "OutAdjacentPolygons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonAdjacentPolygons_Parms, OutAdjacentPolygons), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::NewProp_OutAdjacentPolygons_Inner = { "OutAdjacentPolygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonAdjacentPolygons_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::NewProp_OutAdjacentPolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::NewProp_OutAdjacentPolygons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonAdjacentPolygons", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonAdjacentPolygons_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonCount_Statics
	{
		struct EditableMesh_eventGetPolygonCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the number of polygons in this mesh */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the number of polygons in this mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonCount", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonCount_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics
	{
		struct EditableMesh_eventGetPolygonCountInGroup_Parms
		{
			FPolygonGroupID PolygonGroupID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonCountInGroup_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::NewProp_PolygonGroupID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonCountInGroup_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::NewProp_PolygonGroupID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::NewProp_PolygonGroupID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::NewProp_PolygonGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the number of polygons in this polygon group */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the number of polygons in this polygon group" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonCountInGroup", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonCountInGroup_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount_Statics
	{
		struct EditableMesh_eventGetPolygonGroupCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonGroupCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the number of polygon groups in this mesh */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the number of polygon groups in this mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonGroupCount", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonGroupCount_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics
	{
		struct EditableMesh_eventGetPolygonInGroup_Parms
		{
			FPolygonGroupID PolygonGroupID;
			int32 PolygonNumber;
			FPolygonID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolygonNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonInGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_PolygonNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_PolygonNumber = { "PolygonNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonInGroup_Parms, PolygonNumber), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_PolygonNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_PolygonNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_PolygonGroupID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonInGroup_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_PolygonGroupID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_PolygonGroupID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_PolygonNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::NewProp_PolygonGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the given indexed polygon in this polygon group */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the given indexed polygon in this polygon group" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonInGroup", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonInGroup_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics
	{
		struct EditableMesh_eventGetPolygonPerimeterEdge_Parms
		{
			FPolygonID PolygonID;
			int32 PerimeterEdgeNumber;
			bool bOutEdgeWindingIsReversedForPolygon;
			FEdgeID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bOutEdgeWindingIsReversedForPolygon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutEdgeWindingIsReversedForPolygon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerimeterEdgeNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerimeterEdgeNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterEdge_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_bOutEdgeWindingIsReversedForPolygon_SetBit(void* Obj)
	{
		((EditableMesh_eventGetPolygonPerimeterEdge_Parms*)Obj)->bOutEdgeWindingIsReversedForPolygon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_bOutEdgeWindingIsReversedForPolygon = { "bOutEdgeWindingIsReversedForPolygon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventGetPolygonPerimeterEdge_Parms), &Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_bOutEdgeWindingIsReversedForPolygon_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_PerimeterEdgeNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_PerimeterEdgeNumber = { "PerimeterEdgeNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterEdge_Parms, PerimeterEdgeNumber), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_PerimeterEdgeNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_PerimeterEdgeNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterEdge_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_bOutEdgeWindingIsReversedForPolygon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_PerimeterEdgeNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonPerimeterEdge", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonPerimeterEdge_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics
	{
		struct EditableMesh_eventGetPolygonPerimeterEdgeCount_Parms
		{
			FPolygonID PolygonID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterEdgeCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterEdgeCount_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonPerimeterEdgeCount", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonPerimeterEdgeCount_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics
	{
		struct EditableMesh_eventGetPolygonPerimeterEdges_Parms
		{
			FPolygonID PolygonID;
			TArray<FEdgeID> OutPolygonPerimeterEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPolygonPerimeterEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPolygonPerimeterEdgeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::NewProp_OutPolygonPerimeterEdgeIDs = { "OutPolygonPerimeterEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterEdges_Parms, OutPolygonPerimeterEdgeIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::NewProp_OutPolygonPerimeterEdgeIDs_Inner = { "OutPolygonPerimeterEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterEdges_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::NewProp_OutPolygonPerimeterEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::NewProp_OutPolygonPerimeterEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonPerimeterEdges", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonPerimeterEdges_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics
	{
		struct EditableMesh_eventGetPolygonPerimeterVertex_Parms
		{
			FPolygonID PolygonID;
			int32 PolygonVertexNumber;
			FVertexID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonVertexNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolygonVertexNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_PolygonVertexNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_PolygonVertexNumber = { "PolygonVertexNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertex_Parms, PolygonVertexNumber), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_PolygonVertexNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_PolygonVertexNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertex_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_PolygonVertexNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the indexed vertex on this polygon's perimeter */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the indexed vertex on this polygon's perimeter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonPerimeterVertex", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonPerimeterVertex_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics
	{
		struct EditableMesh_eventGetPolygonPerimeterVertexCount_Parms
		{
			FPolygonID PolygonID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertexCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertexCount_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the number of vertices on this polygon's perimeter */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the number of vertices on this polygon's perimeter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonPerimeterVertexCount", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonPerimeterVertexCount_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics
	{
		struct EditableMesh_eventGetPolygonPerimeterVertexInstance_Parms
		{
			FPolygonID PolygonID;
			int32 PolygonVertexNumber;
			FVertexInstanceID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonVertexNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolygonVertexNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertexInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_PolygonVertexNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_PolygonVertexNumber = { "PolygonVertexNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertexInstance_Parms, PolygonVertexNumber), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_PolygonVertexNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_PolygonVertexNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertexInstance_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_PolygonVertexNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the indexed vertex instance on this polygon's perimeter */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the indexed vertex instance on this polygon's perimeter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonPerimeterVertexInstance", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonPerimeterVertexInstance_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics
	{
		struct EditableMesh_eventGetPolygonPerimeterVertexInstances_Parms
		{
			FPolygonID PolygonID;
			TArray<FVertexInstanceID> OutPolygonPerimeterVertexInstanceIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPolygonPerimeterVertexInstanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPolygonPerimeterVertexInstanceIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::NewProp_OutPolygonPerimeterVertexInstanceIDs = { "OutPolygonPerimeterVertexInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertexInstances_Parms, OutPolygonPerimeterVertexInstanceIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::NewProp_OutPolygonPerimeterVertexInstanceIDs_Inner = { "OutPolygonPerimeterVertexInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertexInstances_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::NewProp_OutPolygonPerimeterVertexInstanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::NewProp_OutPolygonPerimeterVertexInstanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonPerimeterVertexInstances", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonPerimeterVertexInstances_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics
	{
		struct EditableMesh_eventGetPolygonPerimeterVertices_Parms
		{
			FPolygonID PolygonID;
			TArray<FVertexID> OutPolygonPerimeterVertexIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPolygonPerimeterVertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPolygonPerimeterVertexIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::NewProp_OutPolygonPerimeterVertexIDs = { "OutPolygonPerimeterVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertices_Parms, OutPolygonPerimeterVertexIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::NewProp_OutPolygonPerimeterVertexIDs_Inner = { "OutPolygonPerimeterVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonPerimeterVertices_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::NewProp_OutPolygonPerimeterVertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::NewProp_OutPolygonPerimeterVertexIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonPerimeterVertices", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonPerimeterVertices_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics
	{
		struct EditableMesh_eventGetPolygonTriangulatedTriangle_Parms
		{
			FPolygonID PolygonID;
			int32 PolygonTriangleNumber;
			FMeshTriangle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolygonTriangleNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonTriangulatedTriangle_Parms, ReturnValue), Z_Construct_UScriptStruct_FMeshTriangle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::NewProp_PolygonTriangleNumber = { "PolygonTriangleNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonTriangulatedTriangle_Parms, PolygonTriangleNumber), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonTriangulatedTriangle_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::NewProp_PolygonTriangleNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the indexed triangle of the triangulated polygon */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the indexed triangle of the triangulated polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonTriangulatedTriangle", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonTriangulatedTriangle_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics
	{
		struct EditableMesh_eventGetPolygonTriangulatedTriangleCount_Parms
		{
			FPolygonID PolygonID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonTriangulatedTriangleCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetPolygonTriangulatedTriangleCount_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the number of triangles which make up this polygon */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the number of triangles which make up this polygon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetPolygonTriangulatedTriangleCount", nullptr, nullptr, sizeof(EditableMesh_eventGetPolygonTriangulatedTriangleCount_Parms), Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount_Statics
	{
		struct EditableMesh_eventGetSubdivisionCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetSubdivisionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetSubdivisionCount", nullptr, nullptr, sizeof(EditableMesh_eventGetSubdivisionCount_Parms), Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics
	{
		struct EditableMesh_eventGetSubdivisionLimitData_Parms
		{
			FSubdivisionLimitData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetSubdivisionLimitData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubdivisionLimitData, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetSubdivisionLimitData", nullptr, nullptr, sizeof(EditableMesh_eventGetSubdivisionLimitData_Parms), Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount_Statics
	{
		struct EditableMesh_eventGetTextureCoordinateCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetTextureCoordinateCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetTextureCoordinateCount", nullptr, nullptr, sizeof(EditableMesh_eventGetTextureCoordinateCount_Parms), Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics
	{
		struct EditableMesh_eventGetVertexAdjacentVertices_Parms
		{
			FVertexID VertexID;
			TArray<FVertexID> OutAdjacentVertexIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutAdjacentVertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAdjacentVertexIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs = { "OutAdjacentVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexAdjacentVertices_Parms, OutAdjacentVertexIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs_Inner = { "OutAdjacentVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::NewProp_VertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexAdjacentVertices_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::NewProp_VertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::NewProp_OutAdjacentVertexIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexAdjacentVertices", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexAdjacentVertices_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics
	{
		struct EditableMesh_eventGetVertexConnectedEdge_Parms
		{
			FVertexID VertexID;
			int32 ConnectedEdgeNumber;
			FEdgeID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedEdgeNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectedEdgeNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexConnectedEdge_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_ConnectedEdgeNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_ConnectedEdgeNumber = { "ConnectedEdgeNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexConnectedEdge_Parms, ConnectedEdgeNumber), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_ConnectedEdgeNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_ConnectedEdgeNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_VertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexConnectedEdge_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_VertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_ConnectedEdgeNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the requested edge connected to this vertex */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the requested edge connected to this vertex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexConnectedEdge", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexConnectedEdge_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics
	{
		struct EditableMesh_eventGetVertexConnectedEdgeCount_Parms
		{
			FVertexID VertexID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexConnectedEdgeCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::NewProp_VertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexConnectedEdgeCount_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::NewProp_VertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the number of edges connected to this vertex */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the number of edges connected to this vertex" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexConnectedEdgeCount", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexConnectedEdgeCount_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics
	{
		struct EditableMesh_eventGetVertexConnectedEdges_Parms
		{
			FVertexID VertexID;
			TArray<FEdgeID> OutConnectedEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutConnectedEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutConnectedEdgeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::NewProp_OutConnectedEdgeIDs = { "OutConnectedEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexConnectedEdges_Parms, OutConnectedEdgeIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::NewProp_OutConnectedEdgeIDs_Inner = { "OutConnectedEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::NewProp_VertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexConnectedEdges_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::NewProp_VertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::NewProp_OutConnectedEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::NewProp_OutConnectedEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexConnectedEdges", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexConnectedEdges_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics
	{
		struct EditableMesh_eventGetVertexConnectedPolygons_Parms
		{
			FVertexID VertexID;
			TArray<FPolygonID> OutConnectedPolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutConnectedPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutConnectedPolygonIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexConnectedPolygons_Parms, OutConnectedPolygonIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::NewProp_VertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexConnectedPolygons_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::NewProp_VertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexConnectedPolygons", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexConnectedPolygons_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexCount_Statics
	{
		struct EditableMesh_eventGetVertexCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the number of vertices in this mesh */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the number of vertices in this mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexCount", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexCount_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics
	{
		struct EditableMesh_eventGetVertexInstanceConnectedPolygon_Parms
		{
			FVertexInstanceID VertexInstanceID;
			int32 ConnectedPolygonNumber;
			FPolygonID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedPolygonNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectedPolygonNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexInstanceConnectedPolygon_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_ConnectedPolygonNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_ConnectedPolygonNumber = { "ConnectedPolygonNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexInstanceConnectedPolygon_Parms, ConnectedPolygonNumber), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_ConnectedPolygonNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_ConnectedPolygonNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_VertexInstanceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexInstanceConnectedPolygon_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_VertexInstanceID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_VertexInstanceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_ConnectedPolygonNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the indexed polygon connected to this vertex instance */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the indexed polygon connected to this vertex instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexInstanceConnectedPolygon", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexInstanceConnectedPolygon_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics
	{
		struct EditableMesh_eventGetVertexInstanceConnectedPolygonCount_Parms
		{
			FVertexInstanceID VertexInstanceID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexInstanceConnectedPolygonCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::NewProp_VertexInstanceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexInstanceConnectedPolygonCount_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::NewProp_VertexInstanceID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::NewProp_VertexInstanceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the number of polygons connected to this vertex instance */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the number of polygons connected to this vertex instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexInstanceConnectedPolygonCount", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexInstanceConnectedPolygonCount_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics
	{
		struct EditableMesh_eventGetVertexInstanceConnectedPolygons_Parms
		{
			FVertexInstanceID VertexInstanceID;
			TArray<FPolygonID> OutConnectedPolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutConnectedPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutConnectedPolygonIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexInstanceConnectedPolygons_Parms, OutConnectedPolygonIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner = { "OutConnectedPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexInstanceConnectedPolygons_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::NewProp_OutConnectedPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexInstanceConnectedPolygons", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexInstanceConnectedPolygons_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount_Statics
	{
		struct EditableMesh_eventGetVertexInstanceCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexInstanceCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the number of vertex instances in this mesh */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the number of vertex instances in this mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexInstanceCount", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexInstanceCount_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics
	{
		struct EditableMesh_eventGetVertexInstanceVertex_Parms
		{
			FVertexInstanceID VertexInstanceID;
			FVertexID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexInstanceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexInstanceID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexInstanceVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::NewProp_VertexInstanceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::NewProp_VertexInstanceID = { "VertexInstanceID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexInstanceVertex_Parms, VertexInstanceID), Z_Construct_UScriptStruct_FVertexInstanceID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::NewProp_VertexInstanceID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::NewProp_VertexInstanceID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::NewProp_VertexInstanceID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns the vertex ID which the given vertex instance is instancing */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns the vertex ID which the given vertex instance is instancing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexInstanceVertex", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexInstanceVertex_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics
	{
		struct EditableMesh_eventGetVertexPairEdge_Parms
		{
			FVertexID VertexID;
			FVertexID NextVertexID;
			bool bOutEdgeWindingIsReversed;
			FEdgeID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bOutEdgeWindingIsReversed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutEdgeWindingIsReversed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextVertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextVertexID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexPairEdge_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_bOutEdgeWindingIsReversed_SetBit(void* Obj)
	{
		((EditableMesh_eventGetVertexPairEdge_Parms*)Obj)->bOutEdgeWindingIsReversed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_bOutEdgeWindingIsReversed = { "bOutEdgeWindingIsReversed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventGetVertexPairEdge_Parms), &Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_bOutEdgeWindingIsReversed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_NextVertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_NextVertexID = { "NextVertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexPairEdge_Parms, NextVertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_NextVertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_NextVertexID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_VertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventGetVertexPairEdge_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_VertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_bOutEdgeWindingIsReversed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_NextVertexID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "GetVertexPairEdge", nullptr, nullptr, sizeof(EditableMesh_eventGetVertexPairEdge_Parms), Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_InitializeAdapters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InitializeAdapters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_InitializeAdapters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "InitializeAdapters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InitializeAdapters_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InitializeAdapters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_InitializeAdapters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_InitializeAdapters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics
	{
		struct EditableMesh_eventInsertEdgeLoop_Parms
		{
			FEdgeID EdgeID;
			TArray<float> Splits;
			TArray<FEdgeID> OutNewEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewEdgeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Splits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Splits;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Splits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_OutNewEdgeIDs = { "OutNewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsertEdgeLoop_Parms, OutNewEdgeIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_OutNewEdgeIDs_Inner = { "OutNewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_Splits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_Splits = { "Splits", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsertEdgeLoop_Parms, Splits), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_Splits_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_Splits_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_Splits_Inner = { "Splits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsertEdgeLoop_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_OutNewEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_OutNewEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_Splits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_Splits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "InsertEdgeLoop", nullptr, nullptr, sizeof(EditableMesh_eventInsertEdgeLoop_Parms), Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics
	{
		struct EditableMesh_eventInsertPolygonPerimeterVertices_Parms
		{
			FPolygonID PolygonID;
			int32 InsertBeforeVertexNumber;
			TArray<FVertexAndAttributes> VerticesToInsert;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticesToInsert_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VerticesToInsert;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticesToInsert_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsertBeforeVertexNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InsertBeforeVertexNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_VerticesToInsert_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_VerticesToInsert = { "VerticesToInsert", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsertPolygonPerimeterVertices_Parms, VerticesToInsert), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_VerticesToInsert_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_VerticesToInsert_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_VerticesToInsert_Inner = { "VerticesToInsert", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexAndAttributes, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_InsertBeforeVertexNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_InsertBeforeVertexNumber = { "InsertBeforeVertexNumber", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsertPolygonPerimeterVertices_Parms, InsertBeforeVertexNumber), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_InsertBeforeVertexNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_InsertBeforeVertexNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsertPolygonPerimeterVertices_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_VerticesToInsert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_VerticesToInsert_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_InsertBeforeVertexNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "InsertPolygonPerimeterVertices", nullptr, nullptr, sizeof(EditableMesh_eventInsertPolygonPerimeterVertices_Parms), Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics
	{
		struct EditableMesh_eventInsetPolygons_Parms
		{
			TArray<FPolygonID> PolygonIDs;
			float InsetFixedDistance;
			float InsetProgressTowardCenter;
			EInsetPolygonsMode Mode;
			TArray<FPolygonID> OutNewCenterPolygonIDs;
			TArray<FPolygonID> OutNewSidePolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewSidePolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewSidePolygonIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewCenterPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewCenterPolygonIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsetProgressTowardCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InsetProgressTowardCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InsetFixedDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InsetFixedDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_OutNewSidePolygonIDs = { "OutNewSidePolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsetPolygons_Parms, OutNewSidePolygonIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_OutNewSidePolygonIDs_Inner = { "OutNewSidePolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_OutNewCenterPolygonIDs = { "OutNewCenterPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsetPolygons_Parms, OutNewCenterPolygonIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_OutNewCenterPolygonIDs_Inner = { "OutNewCenterPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_Mode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsetPolygons_Parms, Mode), Z_Construct_UEnum_EditableMesh_EInsetPolygonsMode, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_Mode_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_InsetProgressTowardCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_InsetProgressTowardCenter = { "InsetProgressTowardCenter", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsetPolygons_Parms, InsetProgressTowardCenter), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_InsetProgressTowardCenter_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_InsetProgressTowardCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_InsetFixedDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_InsetFixedDistance = { "InsetFixedDistance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsetPolygons_Parms, InsetFixedDistance), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_InsetFixedDistance_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_InsetFixedDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_PolygonIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_PolygonIDs = { "PolygonIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInsetPolygons_Parms, PolygonIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_PolygonIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_PolygonIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_PolygonIDs_Inner = { "PolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_OutNewSidePolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_OutNewSidePolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_OutNewCenterPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_OutNewCenterPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_InsetProgressTowardCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_InsetFixedDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_PolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::NewProp_PolygonIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "InsetPolygons", nullptr, nullptr, sizeof(EditableMesh_eventInsetPolygons_Parms), Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_InsetPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_InsetPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_InvalidEdgeID_Statics
	{
		struct EditableMesh_eventInvalidEdgeID_Parms
		{
			FEdgeID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_InvalidEdgeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInvalidEdgeID_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_InvalidEdgeID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InvalidEdgeID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InvalidEdgeID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_InvalidEdgeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "InvalidEdgeID", nullptr, nullptr, sizeof(EditableMesh_eventInvalidEdgeID_Parms), Z_Construct_UFunction_UEditableMesh_InvalidEdgeID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InvalidEdgeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InvalidEdgeID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InvalidEdgeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_InvalidEdgeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_InvalidEdgeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID_Statics
	{
		struct EditableMesh_eventInvalidPolygonGroupID_Parms
		{
			FPolygonGroupID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInvalidPolygonGroupID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "InvalidPolygonGroupID", nullptr, nullptr, sizeof(EditableMesh_eventInvalidPolygonGroupID_Parms), Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_InvalidPolygonID_Statics
	{
		struct EditableMesh_eventInvalidPolygonID_Parms
		{
			FPolygonID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_InvalidPolygonID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInvalidPolygonID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_InvalidPolygonID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InvalidPolygonID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InvalidPolygonID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_InvalidPolygonID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "InvalidPolygonID", nullptr, nullptr, sizeof(EditableMesh_eventInvalidPolygonID_Parms), Z_Construct_UFunction_UEditableMesh_InvalidPolygonID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InvalidPolygonID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InvalidPolygonID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InvalidPolygonID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_InvalidPolygonID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_InvalidPolygonID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_InvalidVertexID_Statics
	{
		struct EditableMesh_eventInvalidVertexID_Parms
		{
			FVertexID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_InvalidVertexID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventInvalidVertexID_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_InvalidVertexID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_InvalidVertexID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_InvalidVertexID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/**\n\x09 * Statics\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Statics" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_InvalidVertexID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "InvalidVertexID", nullptr, nullptr, sizeof(EditableMesh_eventInvalidVertexID_Parms), Z_Construct_UFunction_UEditableMesh_InvalidVertexID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InvalidVertexID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_InvalidVertexID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_InvalidVertexID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_InvalidVertexID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_InvalidVertexID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics
	{
		struct EditableMesh_eventIsBeingModified_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsBeingModified_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsBeingModified_Parms), &Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/**\n\x09 * @return\x09Returns true if StartModification() was called and the mesh is able to be modified currently.  Remember to call EndModification() when finished.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "@return      Returns true if StartModification() was called and the mesh is able to be modified currently.  Remember to call EndModification() when finished." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsBeingModified", nullptr, nullptr, sizeof(EditableMesh_eventIsBeingModified_Parms), Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsBeingModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsBeingModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics
	{
		struct EditableMesh_eventIsCommitted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsCommitted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsCommitted_Parms), &Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsCommitted", nullptr, nullptr, sizeof(EditableMesh_eventIsCommitted_Parms), Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsCommitted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsCommitted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics
	{
		struct EditableMesh_eventIsCommittedAsInstance_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsCommittedAsInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsCommittedAsInstance_Parms), &Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsCommittedAsInstance", nullptr, nullptr, sizeof(EditableMesh_eventIsCommittedAsInstance_Parms), Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics
	{
		struct EditableMesh_eventIsCompactAllowed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsCompactAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsCompactAllowed_Parms), &Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/**\n\x09 * @return\x09Returns true if compaction is enabled on this mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "@return      Returns true if compaction is enabled on this mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsCompactAllowed", nullptr, nullptr, sizeof(EditableMesh_eventIsCompactAllowed_Parms), Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsCompactAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsCompactAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics
	{
		struct EditableMesh_eventIsOrphanedVertex_Parms
		{
			FVertexID VertexID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsOrphanedVertex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsOrphanedVertex_Parms), &Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::NewProp_VertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventIsOrphanedVertex_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::NewProp_VertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns whether the given vertex ID is orphaned */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns whether the given vertex ID is orphaned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsOrphanedVertex", nullptr, nullptr, sizeof(EditableMesh_eventIsOrphanedVertex_Parms), Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics
	{
		struct EditableMesh_eventIsPreviewingSubdivisions_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsPreviewingSubdivisions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsPreviewingSubdivisions_Parms), &Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsPreviewingSubdivisions", nullptr, nullptr, sizeof(EditableMesh_eventIsPreviewingSubdivisions_Parms), Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics
	{
		struct EditableMesh_eventIsSpatialDatabaseAllowed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsSpatialDatabaseAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsSpatialDatabaseAllowed_Parms), &Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/**\n\x09 * @return\x09Returns true if our octree spatial database is enabled for this mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "@return      Returns true if our octree spatial database is enabled for this mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsSpatialDatabaseAllowed", nullptr, nullptr, sizeof(EditableMesh_eventIsSpatialDatabaseAllowed_Parms), Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics
	{
		struct EditableMesh_eventIsUndoAllowed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsUndoAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsUndoAllowed_Parms), &Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/**\n\x09 * @return\x09Returns true if undo tracking is enabled on this mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "@return      Returns true if undo tracking is enabled on this mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsUndoAllowed", nullptr, nullptr, sizeof(EditableMesh_eventIsUndoAllowed_Parms), Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsUndoAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsUndoAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics
	{
		struct EditableMesh_eventIsValidEdge_Parms
		{
			FEdgeID EdgeID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsValidEdge_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsValidEdge_Parms), &Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventIsValidEdge_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns whether the given edge ID is valid */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns whether the given edge ID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsValidEdge", nullptr, nullptr, sizeof(EditableMesh_eventIsValidEdge_Parms), Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsValidEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsValidEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics
	{
		struct EditableMesh_eventIsValidPolygon_Parms
		{
			FPolygonID PolygonID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsValidPolygon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsValidPolygon_Parms), &Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventIsValidPolygon_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns whether the given polygon ID is valid */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns whether the given polygon ID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsValidPolygon", nullptr, nullptr, sizeof(EditableMesh_eventIsValidPolygon_Parms), Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsValidPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsValidPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics
	{
		struct EditableMesh_eventIsValidPolygonGroup_Parms
		{
			FPolygonGroupID PolygonGroupID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsValidPolygonGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsValidPolygonGroup_Parms), &Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::NewProp_PolygonGroupID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::NewProp_PolygonGroupID = { "PolygonGroupID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventIsValidPolygonGroup_Parms, PolygonGroupID), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::NewProp_PolygonGroupID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::NewProp_PolygonGroupID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::NewProp_PolygonGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns whether the given polygon group ID is valid */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns whether the given polygon group ID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsValidPolygonGroup", nullptr, nullptr, sizeof(EditableMesh_eventIsValidPolygonGroup_Parms), Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics
	{
		struct EditableMesh_eventIsValidVertex_Parms
		{
			FVertexID VertexID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditableMesh_eventIsValidVertex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventIsValidVertex_Parms), &Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::NewProp_VertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventIsValidVertex_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::NewProp_VertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** Returns whether the given vertex ID is valid */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Returns whether the given vertex ID is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "IsValidVertex", nullptr, nullptr, sizeof(EditableMesh_eventIsValidVertex_Parms), Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_IsValidVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_IsValidVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics
	{
		struct EditableMesh_eventMakeEdgeID_Parms
		{
			int32 EdgeIndex;
			FEdgeID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EdgeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventMakeEdgeID_Parms, ReturnValue), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::NewProp_EdgeIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::NewProp_EdgeIndex = { "EdgeIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventMakeEdgeID_Parms, EdgeIndex), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::NewProp_EdgeIndex_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::NewProp_EdgeIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::NewProp_EdgeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "MakeEdgeID", nullptr, nullptr, sizeof(EditableMesh_eventMakeEdgeID_Parms), Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_MakeEdgeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_MakeEdgeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics
	{
		struct EditableMesh_eventMakePolygonGroupID_Parms
		{
			int32 PolygonGroupIndex;
			FPolygonGroupID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonGroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolygonGroupIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventMakePolygonGroupID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonGroupID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::NewProp_PolygonGroupIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::NewProp_PolygonGroupIndex = { "PolygonGroupIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventMakePolygonGroupID_Parms, PolygonGroupIndex), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::NewProp_PolygonGroupIndex_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::NewProp_PolygonGroupIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::NewProp_PolygonGroupIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "MakePolygonGroupID", nullptr, nullptr, sizeof(EditableMesh_eventMakePolygonGroupID_Parms), Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics
	{
		struct EditableMesh_eventMakePolygonID_Parms
		{
			int32 PolygonIndex;
			FPolygonID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PolygonIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventMakePolygonID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::NewProp_PolygonIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::NewProp_PolygonIndex = { "PolygonIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventMakePolygonID_Parms, PolygonIndex), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::NewProp_PolygonIndex_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::NewProp_PolygonIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::NewProp_PolygonIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "MakePolygonID", nullptr, nullptr, sizeof(EditableMesh_eventMakePolygonID_Parms), Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_MakePolygonID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_MakePolygonID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics
	{
		struct EditableMesh_eventMakeVertexID_Parms
		{
			int32 VertexIndex;
			FVertexID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VertexIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventMakeVertexID_Parms, ReturnValue), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::NewProp_VertexIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::NewProp_VertexIndex = { "VertexIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventMakeVertexID_Parms, VertexIndex), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::NewProp_VertexIndex_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::NewProp_VertexIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::NewProp_VertexIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "MakeVertexID", nullptr, nullptr, sizeof(EditableMesh_eventMakeVertexID_Parms), Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_MakeVertexID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_MakeVertexID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics
	{
		struct EditableMesh_eventMoveVertices_Parms
		{
			TArray<FVertexToMove> VerticesToMove;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticesToMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VerticesToMove;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticesToMove_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::NewProp_VerticesToMove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::NewProp_VerticesToMove = { "VerticesToMove", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventMoveVertices_Parms, VerticesToMove), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::NewProp_VerticesToMove_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::NewProp_VerticesToMove_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::NewProp_VerticesToMove_Inner = { "VerticesToMove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexToMove, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::NewProp_VerticesToMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::NewProp_VerticesToMove_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "MoveVertices", nullptr, nullptr, sizeof(EditableMesh_eventMoveVertices_Parms), Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_MoveVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_MoveVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_PropagateInstanceChanges_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_PropagateInstanceChanges_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_PropagateInstanceChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "PropagateInstanceChanges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_PropagateInstanceChanges_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_PropagateInstanceChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_PropagateInstanceChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_PropagateInstanceChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics
	{
		struct EditableMesh_eventQuadrangulateMesh_Parms
		{
			TArray<FPolygonID> OutNewPolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewPolygonIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::NewProp_OutNewPolygonIDs = { "OutNewPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventQuadrangulateMesh_Parms, OutNewPolygonIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::NewProp_OutNewPolygonIDs_Inner = { "OutNewPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::NewProp_OutNewPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::NewProp_OutNewPolygonIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "QuadrangulateMesh", nullptr, nullptr, sizeof(EditableMesh_eventQuadrangulateMesh_Parms), Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_RebuildRenderMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_RebuildRenderMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_RebuildRenderMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "RebuildRenderMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_RebuildRenderMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_RebuildRenderMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_RebuildRenderMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_RebuildRenderMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics
	{
		struct EditableMesh_eventRemovePolygonPerimeterVertices_Parms
		{
			FPolygonID PolygonID;
			int32 FirstVertexNumberToRemove;
			int32 NumVerticesToRemove;
			bool bDeleteOrphanedVertexInstances;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteOrphanedVertexInstances_MetaData[];
#endif
		static void NewProp_bDeleteOrphanedVertexInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteOrphanedVertexInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumVerticesToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumVerticesToRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstVertexNumberToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstVertexNumberToRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_bDeleteOrphanedVertexInstances_SetBit(void* Obj)
	{
		((EditableMesh_eventRemovePolygonPerimeterVertices_Parms*)Obj)->bDeleteOrphanedVertexInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_bDeleteOrphanedVertexInstances = { "bDeleteOrphanedVertexInstances", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventRemovePolygonPerimeterVertices_Parms), &Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_bDeleteOrphanedVertexInstances_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_bDeleteOrphanedVertexInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_NumVerticesToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_NumVerticesToRemove = { "NumVerticesToRemove", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventRemovePolygonPerimeterVertices_Parms, NumVerticesToRemove), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_NumVerticesToRemove_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_NumVerticesToRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_FirstVertexNumberToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_FirstVertexNumberToRemove = { "FirstVertexNumberToRemove", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventRemovePolygonPerimeterVertices_Parms, FirstVertexNumberToRemove), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_FirstVertexNumberToRemove_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_FirstVertexNumberToRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_PolygonID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_PolygonID = { "PolygonID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventRemovePolygonPerimeterVertices_Parms, PolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_PolygonID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_PolygonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_bDeleteOrphanedVertexInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_NumVerticesToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_FirstVertexNumberToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::NewProp_PolygonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "RemovePolygonPerimeterVertices", nullptr, nullptr, sizeof(EditableMesh_eventRemovePolygonPerimeterVertices_Parms), Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_Revert_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_Revert_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_Revert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "Revert", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_Revert_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_Revert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_Revert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_Revert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_RevertInstance_Statics
	{
		struct EditableMesh_eventRevertInstance_Parms
		{
			UEditableMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditableMesh_RevertInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventRevertInstance_Parms, ReturnValue), Z_Construct_UClass_UEditableMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_RevertInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_RevertInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_RevertInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_RevertInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "RevertInstance", nullptr, nullptr, sizeof(EditableMesh_eventRevertInstance_Parms), Z_Construct_UFunction_UEditableMesh_RevertInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_RevertInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_RevertInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_RevertInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_RevertInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_RevertInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics
	{
		struct EditableMesh_eventSearchSpatialDatabaseForPolygonsInVolume_Parms
		{
			TArray<FPlane> Planes;
			TArray<FPolygonID> OutPolygons;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPolygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPolygons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Planes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Planes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Planes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::NewProp_OutPolygons = { "OutPolygons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSearchSpatialDatabaseForPolygonsInVolume_Parms, OutPolygons), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::NewProp_OutPolygons_Inner = { "OutPolygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::NewProp_Planes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::NewProp_Planes = { "Planes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSearchSpatialDatabaseForPolygonsInVolume_Parms, Planes), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::NewProp_Planes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::NewProp_Planes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::NewProp_Planes_Inner = { "Planes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::NewProp_OutPolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::NewProp_OutPolygons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::NewProp_Planes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::NewProp_Planes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SearchSpatialDatabaseForPolygonsInVolume", nullptr, nullptr, sizeof(EditableMesh_eventSearchSpatialDatabaseForPolygonsInVolume_Parms), Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics
	{
		struct EditableMesh_eventSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Parms
		{
			FVector LineSegmentStart;
			FVector LineSegmentEnd;
			TArray<FPolygonID> OutPolygons;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPolygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPolygons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineSegmentEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineSegmentEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineSegmentStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineSegmentStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_OutPolygons = { "OutPolygons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Parms, OutPolygons), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_OutPolygons_Inner = { "OutPolygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_LineSegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_LineSegmentEnd = { "LineSegmentEnd", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Parms, LineSegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_LineSegmentEnd_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_LineSegmentEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_LineSegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_LineSegmentStart = { "LineSegmentStart", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Parms, LineSegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_LineSegmentStart_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_LineSegmentStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_OutPolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_OutPolygons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_LineSegmentEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::NewProp_LineSegmentStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment", nullptr, nullptr, sizeof(EditableMesh_eventSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Parms), Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics
	{
		struct EditableMesh_eventSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Parms
		{
			FPlane InPlane;
			TArray<FPolygonID> OutPolygons;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutPolygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutPolygons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::NewProp_OutPolygons = { "OutPolygons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Parms, OutPolygons), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::NewProp_OutPolygons_Inner = { "OutPolygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::NewProp_InPlane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::NewProp_InPlane = { "InPlane", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Parms, InPlane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::NewProp_InPlane_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::NewProp_InPlane_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::NewProp_OutPolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::NewProp_OutPolygons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::NewProp_InPlane,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane", nullptr, nullptr, sizeof(EditableMesh_eventSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Parms), Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics
	{
		struct EditableMesh_eventSetAllowCompact_Parms
		{
			bool bInAllowCompact;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInAllowCompact_MetaData[];
#endif
		static void NewProp_bInAllowCompact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAllowCompact;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::NewProp_bInAllowCompact_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::NewProp_bInAllowCompact_SetBit(void* Obj)
	{
		((EditableMesh_eventSetAllowCompact_Parms*)Obj)->bInAllowCompact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::NewProp_bInAllowCompact = { "bInAllowCompact", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventSetAllowCompact_Parms), &Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::NewProp_bInAllowCompact_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::NewProp_bInAllowCompact_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::NewProp_bInAllowCompact_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::NewProp_bInAllowCompact,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/**\n\x09 * Sets whether the mesh can be sporadically compacted as modifications are performed\n\x09 *\n\x09 * @param\x09""bInAllowCompact\x09\x09True if compaction is enabled on this mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Sets whether the mesh can be sporadically compacted as modifications are performed\n\n@param       bInAllowCompact         True if compaction is enabled on this mesh." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetAllowCompact", nullptr, nullptr, sizeof(EditableMesh_eventSetAllowCompact_Parms), Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetAllowCompact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetAllowCompact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics
	{
		struct EditableMesh_eventSetAllowSpatialDatabase_Parms
		{
			bool bInAllowSpatialDatabase;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInAllowSpatialDatabase_MetaData[];
#endif
		static void NewProp_bInAllowSpatialDatabase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAllowSpatialDatabase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::NewProp_bInAllowSpatialDatabase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::NewProp_bInAllowSpatialDatabase_SetBit(void* Obj)
	{
		((EditableMesh_eventSetAllowSpatialDatabase_Parms*)Obj)->bInAllowSpatialDatabase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::NewProp_bInAllowSpatialDatabase = { "bInAllowSpatialDatabase", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventSetAllowSpatialDatabase_Parms), &Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::NewProp_bInAllowSpatialDatabase_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::NewProp_bInAllowSpatialDatabase_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::NewProp_bInAllowSpatialDatabase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::NewProp_bInAllowSpatialDatabase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/**\n\x09 * Sets whether this mesh should automatically generate and maintain an octree spatial database.  Certain queries may only be\n\x09 * supported when the mesh has an octree generated.  The octree is never saved or loaded, and always generated on demand.  This\n\x09 * feature adds significant overhead to editable mesh initialization and modification, so only use it if you really need to.\n\x09 *\n\x09 * @param\x09""bInAllowSpatialDatabase\x09\x09True if an octree should be generated and maintained for this mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Sets whether this mesh should automatically generate and maintain an octree spatial database.  Certain queries may only be\nsupported when the mesh has an octree generated.  The octree is never saved or loaded, and always generated on demand.  This\nfeature adds significant overhead to editable mesh initialization and modification, so only use it if you really need to.\n\n@param       bInAllowSpatialDatabase         True if an octree should be generated and maintained for this mesh." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetAllowSpatialDatabase", nullptr, nullptr, sizeof(EditableMesh_eventSetAllowSpatialDatabase_Parms), Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics
	{
		struct EditableMesh_eventSetAllowUndo_Parms
		{
			bool bInAllowUndo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInAllowUndo_MetaData[];
#endif
		static void NewProp_bInAllowUndo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInAllowUndo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::NewProp_bInAllowUndo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::NewProp_bInAllowUndo_SetBit(void* Obj)
	{
		((EditableMesh_eventSetAllowUndo_Parms*)Obj)->bInAllowUndo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::NewProp_bInAllowUndo = { "bInAllowUndo", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventSetAllowUndo_Parms), &Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::NewProp_bInAllowUndo_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::NewProp_bInAllowUndo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::NewProp_bInAllowUndo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::NewProp_bInAllowUndo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/**\n\x09 * Sets whether undo is allowed on this mesh\n\x09 *\n\x09 * @param\x09""bInAllowUndo\x09True if undo features are enabled on this mesh.  You're only allowed to call MakeUndo() if this is set to true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Sets whether undo is allowed on this mesh\n\n@param       bInAllowUndo    True if undo features are enabled on this mesh.  You're only allowed to call MakeUndo() if this is set to true." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetAllowUndo", nullptr, nullptr, sizeof(EditableMesh_eventSetAllowUndo_Parms), Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetAllowUndo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetAllowUndo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics
	{
		struct EditableMesh_eventSetEdgesAttributes_Parms
		{
			TArray<FAttributesForEdge> AttributesForEdges;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributesForEdges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributesForEdges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributesForEdges_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::NewProp_AttributesForEdges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::NewProp_AttributesForEdges = { "AttributesForEdges", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetEdgesAttributes_Parms, AttributesForEdges), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::NewProp_AttributesForEdges_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::NewProp_AttributesForEdges_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::NewProp_AttributesForEdges_Inner = { "AttributesForEdges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttributesForEdge, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::NewProp_AttributesForEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::NewProp_AttributesForEdges_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetEdgesAttributes", nullptr, nullptr, sizeof(EditableMesh_eventSetEdgesAttributes_Parms), Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics
	{
		struct EditableMesh_eventSetEdgesCreaseSharpness_Parms
		{
			TArray<FEdgeID> EdgeIDs;
			TArray<float> EdgesNewCreaseSharpness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgesNewCreaseSharpness_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EdgesNewCreaseSharpness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EdgesNewCreaseSharpness_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgesNewCreaseSharpness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgesNewCreaseSharpness = { "EdgesNewCreaseSharpness", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetEdgesCreaseSharpness_Parms, EdgesNewCreaseSharpness), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgesNewCreaseSharpness_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgesNewCreaseSharpness_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgesNewCreaseSharpness_Inner = { "EdgesNewCreaseSharpness", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgeIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgeIDs = { "EdgeIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetEdgesCreaseSharpness_Parms, EdgeIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgeIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgeIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgeIDs_Inner = { "EdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgesNewCreaseSharpness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgesNewCreaseSharpness_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::NewProp_EdgeIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetEdgesCreaseSharpness", nullptr, nullptr, sizeof(EditableMesh_eventSetEdgesCreaseSharpness_Parms), Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics
	{
		struct EditableMesh_eventSetEdgesHardness_Parms
		{
			TArray<FEdgeID> EdgeIDs;
			TArray<bool> EdgesNewIsHard;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgesNewIsHard_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EdgesNewIsHard;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EdgesNewIsHard_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgesNewIsHard_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgesNewIsHard = { "EdgesNewIsHard", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetEdgesHardness_Parms, EdgesNewIsHard), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgesNewIsHard_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgesNewIsHard_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgesNewIsHard_Inner = { "EdgesNewIsHard", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgeIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgeIDs = { "EdgeIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetEdgesHardness_Parms, EdgeIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgeIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgeIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgeIDs_Inner = { "EdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgesNewIsHard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgesNewIsHard_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::NewProp_EdgeIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetEdgesHardness", nullptr, nullptr, sizeof(EditableMesh_eventSetEdgesHardness_Parms), Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetEdgesHardness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetEdgesHardness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics
	{
		struct EditableMesh_eventSetEdgesHardnessAutomatically_Parms
		{
			TArray<FEdgeID> EdgeIDs;
			float MaxDotProductForSoftEdge;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDotProductForSoftEdge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDotProductForSoftEdge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_MaxDotProductForSoftEdge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_MaxDotProductForSoftEdge = { "MaxDotProductForSoftEdge", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetEdgesHardnessAutomatically_Parms, MaxDotProductForSoftEdge), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_MaxDotProductForSoftEdge_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_MaxDotProductForSoftEdge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_EdgeIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_EdgeIDs = { "EdgeIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetEdgesHardnessAutomatically_Parms, EdgeIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_EdgeIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_EdgeIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_EdgeIDs_Inner = { "EdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_MaxDotProductForSoftEdge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_EdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::NewProp_EdgeIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetEdgesHardnessAutomatically", nullptr, nullptr, sizeof(EditableMesh_eventSetEdgesHardnessAutomatically_Parms), Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics
	{
		struct EditableMesh_eventSetEdgesVertices_Parms
		{
			TArray<FVerticesForEdge> VerticesForEdges;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticesForEdges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VerticesForEdges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VerticesForEdges_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::NewProp_VerticesForEdges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::NewProp_VerticesForEdges = { "VerticesForEdges", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetEdgesVertices_Parms, VerticesForEdges), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::NewProp_VerticesForEdges_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::NewProp_VerticesForEdges_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::NewProp_VerticesForEdges_Inner = { "VerticesForEdges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVerticesForEdge, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::NewProp_VerticesForEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::NewProp_VerticesForEdges_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "// @todo mesheditor: Not used for anything yet.  Remove it?  Use it during import/convert?\n" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "@todo mesheditor: Not used for anything yet.  Remove it?  Use it during import/convert?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetEdgesVertices", nullptr, nullptr, sizeof(EditableMesh_eventSetEdgesVertices_Parms), Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetEdgesVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetEdgesVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics
	{
		struct EditableMesh_eventSetPolygonsVertexAttributes_Parms
		{
			TArray<FVertexAttributesForPolygon> VertexAttributesForPolygons;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexAttributesForPolygons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexAttributesForPolygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexAttributesForPolygons_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::NewProp_VertexAttributesForPolygons_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::NewProp_VertexAttributesForPolygons = { "VertexAttributesForPolygons", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetPolygonsVertexAttributes_Parms, VertexAttributesForPolygons), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::NewProp_VertexAttributesForPolygons_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::NewProp_VertexAttributesForPolygons_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::NewProp_VertexAttributesForPolygons_Inner = { "VertexAttributesForPolygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexAttributesForPolygon, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::NewProp_VertexAttributesForPolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::NewProp_VertexAttributesForPolygons_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetPolygonsVertexAttributes", nullptr, nullptr, sizeof(EditableMesh_eventSetPolygonsVertexAttributes_Parms), Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics
	{
		struct EditableMesh_eventSetSubdivisionCount_Parms
		{
			int32 NewSubdivisionCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSubdivisionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewSubdivisionCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::NewProp_NewSubdivisionCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::NewProp_NewSubdivisionCount = { "NewSubdivisionCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetSubdivisionCount_Parms, NewSubdivisionCount), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::NewProp_NewSubdivisionCount_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::NewProp_NewSubdivisionCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::NewProp_NewSubdivisionCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetSubdivisionCount", nullptr, nullptr, sizeof(EditableMesh_eventSetSubdivisionCount_Parms), Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics
	{
		struct EditableMesh_eventSetTextureCoordinateCount_Parms
		{
			int32 NumTexCoords;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTexCoords_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTexCoords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::NewProp_NumTexCoords_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::NewProp_NumTexCoords = { "NumTexCoords", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetTextureCoordinateCount_Parms, NumTexCoords), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::NewProp_NumTexCoords_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::NewProp_NumTexCoords_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::NewProp_NumTexCoords,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetTextureCoordinateCount", nullptr, nullptr, sizeof(EditableMesh_eventSetTextureCoordinateCount_Parms), Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics
	{
		struct EditableMesh_eventSetVertexInstancesAttributes_Parms
		{
			TArray<FAttributesForVertexInstance> AttributesForVertexInstances;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributesForVertexInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributesForVertexInstances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributesForVertexInstances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::NewProp_AttributesForVertexInstances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::NewProp_AttributesForVertexInstances = { "AttributesForVertexInstances", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetVertexInstancesAttributes_Parms, AttributesForVertexInstances), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::NewProp_AttributesForVertexInstances_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::NewProp_AttributesForVertexInstances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::NewProp_AttributesForVertexInstances_Inner = { "AttributesForVertexInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttributesForVertexInstance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::NewProp_AttributesForVertexInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::NewProp_AttributesForVertexInstances_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetVertexInstancesAttributes", nullptr, nullptr, sizeof(EditableMesh_eventSetVertexInstancesAttributes_Parms), Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics
	{
		struct EditableMesh_eventSetVerticesAttributes_Parms
		{
			TArray<FAttributesForVertex> AttributesForVertices;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributesForVertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributesForVertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributesForVertices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::NewProp_AttributesForVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::NewProp_AttributesForVertices = { "AttributesForVertices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetVerticesAttributes_Parms, AttributesForVertices), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::NewProp_AttributesForVertices_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::NewProp_AttributesForVertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::NewProp_AttributesForVertices_Inner = { "AttributesForVertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttributesForVertex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::NewProp_AttributesForVertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::NewProp_AttributesForVertices_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetVerticesAttributes", nullptr, nullptr, sizeof(EditableMesh_eventSetVerticesAttributes_Parms), Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics
	{
		struct EditableMesh_eventSetVerticesCornerSharpness_Parms
		{
			TArray<FVertexID> VertexIDs;
			TArray<float> VerticesNewCornerSharpness;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticesNewCornerSharpness_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VerticesNewCornerSharpness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticesNewCornerSharpness_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VerticesNewCornerSharpness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VerticesNewCornerSharpness = { "VerticesNewCornerSharpness", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetVerticesCornerSharpness_Parms, VerticesNewCornerSharpness), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VerticesNewCornerSharpness_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VerticesNewCornerSharpness_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VerticesNewCornerSharpness_Inner = { "VerticesNewCornerSharpness", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VertexIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VertexIDs = { "VertexIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSetVerticesCornerSharpness_Parms, VertexIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VertexIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VertexIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VertexIDs_Inner = { "VertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VerticesNewCornerSharpness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VerticesNewCornerSharpness_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::NewProp_VertexIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SetVerticesCornerSharpness", nullptr, nullptr, sizeof(EditableMesh_eventSetVerticesCornerSharpness_Parms), Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics
	{
		struct EditableMesh_eventSplitEdge_Parms
		{
			FEdgeID EdgeID;
			TArray<float> Splits;
			TArray<FVertexID> OutNewVertexIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewVertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewVertexIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Splits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Splits;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Splits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_OutNewVertexIDs = { "OutNewVertexIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSplitEdge_Parms, OutNewVertexIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_OutNewVertexIDs_Inner = { "OutNewVertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_Splits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_Splits = { "Splits", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSplitEdge_Parms, Splits), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_Splits_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_Splits_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_Splits_Inner = { "Splits", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSplitEdge_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_OutNewVertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_OutNewVertexIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_Splits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_Splits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SplitEdge", nullptr, nullptr, sizeof(EditableMesh_eventSplitEdge_Parms), Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SplitEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SplitEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics
	{
		struct EditableMesh_eventSplitPolygonalMesh_Parms
		{
			FPlane InPlane;
			TArray<FPolygonID> PolygonIDs1;
			TArray<FPolygonID> PolygonIDs2;
			TArray<FEdgeID> BoundaryIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoundaryIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundaryIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonIDs2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonIDs2_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonIDs1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonIDs1_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPlane_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPlane;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_BoundaryIDs = { "BoundaryIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSplitPolygonalMesh_Parms, BoundaryIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_BoundaryIDs_Inner = { "BoundaryIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_PolygonIDs2 = { "PolygonIDs2", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSplitPolygonalMesh_Parms, PolygonIDs2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_PolygonIDs2_Inner = { "PolygonIDs2", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_PolygonIDs1 = { "PolygonIDs1", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSplitPolygonalMesh_Parms, PolygonIDs1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_PolygonIDs1_Inner = { "PolygonIDs1", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_InPlane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_InPlane = { "InPlane", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSplitPolygonalMesh_Parms, InPlane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_InPlane_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_InPlane_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_BoundaryIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_BoundaryIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_PolygonIDs2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_PolygonIDs2_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_PolygonIDs1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_PolygonIDs1_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::NewProp_InPlane,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SplitPolygonalMesh", nullptr, nullptr, sizeof(EditableMesh_eventSplitPolygonalMesh_Parms), Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics
	{
		struct EditableMesh_eventSplitPolygons_Parms
		{
			TArray<FPolygonToSplit> PolygonsToSplit;
			TArray<FEdgeID> OutNewEdgeIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewEdgeIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewEdgeIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonsToSplit_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonsToSplit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonsToSplit_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::NewProp_OutNewEdgeIDs = { "OutNewEdgeIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSplitPolygons_Parms, OutNewEdgeIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::NewProp_OutNewEdgeIDs_Inner = { "OutNewEdgeIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::NewProp_PolygonsToSplit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::NewProp_PolygonsToSplit = { "PolygonsToSplit", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventSplitPolygons_Parms, PolygonsToSplit), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::NewProp_PolygonsToSplit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::NewProp_PolygonsToSplit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::NewProp_PolygonsToSplit_Inner = { "PolygonsToSplit", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonToSplit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::NewProp_OutNewEdgeIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::NewProp_OutNewEdgeIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::NewProp_PolygonsToSplit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::NewProp_PolygonsToSplit_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "SplitPolygons", nullptr, nullptr, sizeof(EditableMesh_eventSplitPolygons_Parms), Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_SplitPolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_SplitPolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_StartModification_Statics
	{
		struct EditableMesh_eventStartModification_Parms
		{
			EMeshModificationType MeshModificationType;
			EMeshTopologyChange MeshTopologyChange;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshTopologyChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshTopologyChange;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshTopologyChange_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshModificationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshModificationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshModificationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshTopologyChange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshTopologyChange = { "MeshTopologyChange", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventStartModification_Parms, MeshTopologyChange), Z_Construct_UEnum_EditableMesh_EMeshTopologyChange, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshTopologyChange_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshTopologyChange_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshTopologyChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshModificationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshModificationType = { "MeshModificationType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventStartModification_Parms, MeshModificationType), Z_Construct_UEnum_EditableMesh_EMeshModificationType, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshModificationType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshModificationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshModificationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_StartModification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshTopologyChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshTopologyChange_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshModificationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_StartModification_Statics::NewProp_MeshModificationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_StartModification_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_StartModification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "StartModification", nullptr, nullptr, sizeof(EditableMesh_eventStartModification_Parms), Z_Construct_UFunction_UEditableMesh_StartModification_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_StartModification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_StartModification_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_StartModification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_StartModification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_StartModification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics
	{
		struct EditableMesh_eventTessellatePolygons_Parms
		{
			TArray<FPolygonID> PolygonIDs;
			ETriangleTessellationMode TriangleTessellationMode;
			TArray<FPolygonID> OutNewPolygonIDs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewPolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewPolygonIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriangleTessellationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TriangleTessellationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TriangleTessellationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_OutNewPolygonIDs = { "OutNewPolygonIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventTessellatePolygons_Parms, OutNewPolygonIDs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_OutNewPolygonIDs_Inner = { "OutNewPolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_TriangleTessellationMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_TriangleTessellationMode = { "TriangleTessellationMode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventTessellatePolygons_Parms, TriangleTessellationMode), Z_Construct_UEnum_EditableMesh_ETriangleTessellationMode, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_TriangleTessellationMode_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_TriangleTessellationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_TriangleTessellationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_PolygonIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_PolygonIDs = { "PolygonIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventTessellatePolygons_Parms, PolygonIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_PolygonIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_PolygonIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_PolygonIDs_Inner = { "PolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_OutNewPolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_OutNewPolygonIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_TriangleTessellationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_TriangleTessellationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_PolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::NewProp_PolygonIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "TessellatePolygons", nullptr, nullptr, sizeof(EditableMesh_eventTessellatePolygons_Parms), Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_TessellatePolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_TessellatePolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics
	{
		struct EditableMesh_eventTriangulatePolygons_Parms
		{
			TArray<FPolygonID> PolygonIDs;
			TArray<FPolygonID> OutNewTrianglePolygons;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutNewTrianglePolygons;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewTrianglePolygons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolygonIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PolygonIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolygonIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::NewProp_OutNewTrianglePolygons = { "OutNewTrianglePolygons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventTriangulatePolygons_Parms, OutNewTrianglePolygons), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::NewProp_OutNewTrianglePolygons_Inner = { "OutNewTrianglePolygons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::NewProp_PolygonIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::NewProp_PolygonIDs = { "PolygonIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventTriangulatePolygons_Parms, PolygonIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::NewProp_PolygonIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::NewProp_PolygonIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::NewProp_PolygonIDs_Inner = { "PolygonIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::NewProp_OutNewTrianglePolygons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::NewProp_OutNewTrianglePolygons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::NewProp_PolygonIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::NewProp_PolygonIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "TriangulatePolygons", nullptr, nullptr, sizeof(EditableMesh_eventTriangulatePolygons_Parms), Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_TriangulatePolygons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_TriangulatePolygons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics
	{
		struct EditableMesh_eventTryToRemovePolygonEdge_Parms
		{
			FEdgeID EdgeID;
			bool bOutWasEdgeRemoved;
			FPolygonID OutNewPolygonID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewPolygonID;
		static void NewProp_bOutWasEdgeRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutWasEdgeRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdgeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EdgeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::NewProp_OutNewPolygonID = { "OutNewPolygonID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventTryToRemovePolygonEdge_Parms, OutNewPolygonID), Z_Construct_UScriptStruct_FPolygonID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::NewProp_bOutWasEdgeRemoved_SetBit(void* Obj)
	{
		((EditableMesh_eventTryToRemovePolygonEdge_Parms*)Obj)->bOutWasEdgeRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::NewProp_bOutWasEdgeRemoved = { "bOutWasEdgeRemoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventTryToRemovePolygonEdge_Parms), &Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::NewProp_bOutWasEdgeRemoved_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::NewProp_EdgeID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::NewProp_EdgeID = { "EdgeID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventTryToRemovePolygonEdge_Parms, EdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::NewProp_EdgeID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::NewProp_EdgeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::NewProp_OutNewPolygonID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::NewProp_bOutWasEdgeRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::NewProp_EdgeID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "TryToRemovePolygonEdge", nullptr, nullptr, sizeof(EditableMesh_eventTryToRemovePolygonEdge_Parms), Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics
	{
		struct EditableMesh_eventTryToRemoveVertex_Parms
		{
			FVertexID VertexID;
			bool bOutWasVertexRemoved;
			FEdgeID OutNewEdgeID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewEdgeID;
		static void NewProp_bOutWasVertexRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutWasVertexRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::NewProp_OutNewEdgeID = { "OutNewEdgeID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventTryToRemoveVertex_Parms, OutNewEdgeID), Z_Construct_UScriptStruct_FEdgeID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::NewProp_bOutWasVertexRemoved_SetBit(void* Obj)
	{
		((EditableMesh_eventTryToRemoveVertex_Parms*)Obj)->bOutWasVertexRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::NewProp_bOutWasVertexRemoved = { "bOutWasVertexRemoved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EditableMesh_eventTryToRemoveVertex_Parms), &Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::NewProp_bOutWasVertexRemoved_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::NewProp_VertexID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::NewProp_VertexID = { "VertexID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventTryToRemoveVertex_Parms, VertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::NewProp_VertexID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::NewProp_VertexID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::NewProp_OutNewEdgeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::NewProp_bOutWasVertexRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::NewProp_VertexID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "TryToRemoveVertex", nullptr, nullptr, sizeof(EditableMesh_eventTryToRemoveVertex_Parms), Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics
	{
		struct EditableMesh_eventWeldVertices_Parms
		{
			TArray<FVertexID> VertexIDs;
			FVertexID OutNewVertexID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutNewVertexID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexIDs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::NewProp_OutNewVertexID = { "OutNewVertexID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventWeldVertices_Parms, OutNewVertexID), Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::NewProp_VertexIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::NewProp_VertexIDs = { "VertexIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMesh_eventWeldVertices_Parms, VertexIDs), METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::NewProp_VertexIDs_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::NewProp_VertexIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::NewProp_VertexIDs_Inner = { "VertexIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVertexID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::NewProp_OutNewVertexID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::NewProp_VertexIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::NewProp_VertexIDs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMesh, nullptr, "WeldVertices", nullptr, nullptr, sizeof(EditableMesh_eventWeldVertices_Parms), Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMesh_WeldVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMesh_WeldVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditableMesh_NoRegister()
	{
		return UEditableMesh::StaticClass();
	}
	struct Z_Construct_UClass_UEditableMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubdivisionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubdivisionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingCompactCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PendingCompactCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureCoordinateCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureCoordinateCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Adapters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Adapters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Adapters_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditableMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditableMesh_AnyChangesToUndo, "AnyChangesToUndo" }, // 3852024549
		{ &Z_Construct_UFunction_UEditableMesh_AssignPolygonsToPolygonGroups, "AssignPolygonsToPolygonGroups" }, // 163646269
		{ &Z_Construct_UFunction_UEditableMesh_BevelPolygons, "BevelPolygons" }, // 3124217897
		{ &Z_Construct_UFunction_UEditableMesh_ChangePolygonsVertexInstances, "ChangePolygonsVertexInstances" }, // 2571347416
		{ &Z_Construct_UFunction_UEditableMesh_Commit, "Commit" }, // 775303217
		{ &Z_Construct_UFunction_UEditableMesh_CommitInstance, "CommitInstance" }, // 96297340
		{ &Z_Construct_UFunction_UEditableMesh_ComputeBarycentricWeightForPointOnPolygon, "ComputeBarycentricWeightForPointOnPolygon" }, // 4029427715
		{ &Z_Construct_UFunction_UEditableMesh_ComputeBoundingBox, "ComputeBoundingBox" }, // 1472453708
		{ &Z_Construct_UFunction_UEditableMesh_ComputeBoundingBoxAndSphere, "ComputeBoundingBoxAndSphere" }, // 2477951946
		{ &Z_Construct_UFunction_UEditableMesh_ComputePolygonCenter, "ComputePolygonCenter" }, // 999376771
		{ &Z_Construct_UFunction_UEditableMesh_ComputePolygonNormal, "ComputePolygonNormal" }, // 4185996877
		{ &Z_Construct_UFunction_UEditableMesh_ComputePolygonPlane, "ComputePolygonPlane" }, // 1186137028
		{ &Z_Construct_UFunction_UEditableMesh_ComputePolygonsSharedEdges, "ComputePolygonsSharedEdges" }, // 79496246
		{ &Z_Construct_UFunction_UEditableMesh_ComputePolygonTriangulation, "ComputePolygonTriangulation" }, // 1470903947
		{ &Z_Construct_UFunction_UEditableMesh_CreateEdges, "CreateEdges" }, // 2607361374
		{ &Z_Construct_UFunction_UEditableMesh_CreateEmptyVertexRange, "CreateEmptyVertexRange" }, // 3775559384
		{ &Z_Construct_UFunction_UEditableMesh_CreateMissingPolygonPerimeterEdges, "CreateMissingPolygonPerimeterEdges" }, // 3642958506
		{ &Z_Construct_UFunction_UEditableMesh_CreatePolygonGroups, "CreatePolygonGroups" }, // 3557774766
		{ &Z_Construct_UFunction_UEditableMesh_CreatePolygons, "CreatePolygons" }, // 3920543014
		{ &Z_Construct_UFunction_UEditableMesh_CreateVertexInstances, "CreateVertexInstances" }, // 2316970602
		{ &Z_Construct_UFunction_UEditableMesh_CreateVertices, "CreateVertices" }, // 1887355914
		{ &Z_Construct_UFunction_UEditableMesh_DeleteEdgeAndConnectedPolygons, "DeleteEdgeAndConnectedPolygons" }, // 356912988
		{ &Z_Construct_UFunction_UEditableMesh_DeleteEdges, "DeleteEdges" }, // 3481487104
		{ &Z_Construct_UFunction_UEditableMesh_DeleteOrphanVertices, "DeleteOrphanVertices" }, // 2967775227
		{ &Z_Construct_UFunction_UEditableMesh_DeletePolygonGroups, "DeletePolygonGroups" }, // 1355115780
		{ &Z_Construct_UFunction_UEditableMesh_DeletePolygons, "DeletePolygons" }, // 3368384462
		{ &Z_Construct_UFunction_UEditableMesh_DeleteVertexAndConnectedEdgesAndPolygons, "DeleteVertexAndConnectedEdgesAndPolygons" }, // 946091547
		{ &Z_Construct_UFunction_UEditableMesh_DeleteVertexInstances, "DeleteVertexInstances" }, // 618625892
		{ &Z_Construct_UFunction_UEditableMesh_EndModification, "EndModification" }, // 1804120823
		{ &Z_Construct_UFunction_UEditableMesh_ExtendEdges, "ExtendEdges" }, // 4234668395
		{ &Z_Construct_UFunction_UEditableMesh_ExtendVertices, "ExtendVertices" }, // 3413940060
		{ &Z_Construct_UFunction_UEditableMesh_ExtrudePolygons, "ExtrudePolygons" }, // 2052423227
		{ &Z_Construct_UFunction_UEditableMesh_FindPolygonLoop, "FindPolygonLoop" }, // 364201013
		{ &Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterEdgeNumberForVertices, "FindPolygonPerimeterEdgeNumberForVertices" }, // 2690630570
		{ &Z_Construct_UFunction_UEditableMesh_FindPolygonPerimeterVertexNumberForVertex, "FindPolygonPerimeterVertexNumberForVertex" }, // 4272280891
		{ &Z_Construct_UFunction_UEditableMesh_FlipPolygons, "FlipPolygons" }, // 2412055001
		{ &Z_Construct_UFunction_UEditableMesh_GeneratePolygonTangentsAndNormals, "GeneratePolygonTangentsAndNormals" }, // 2533940490
		{ &Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygon, "GetEdgeConnectedPolygon" }, // 566797125
		{ &Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygonCount, "GetEdgeConnectedPolygonCount" }, // 2708800112
		{ &Z_Construct_UFunction_UEditableMesh_GetEdgeConnectedPolygons, "GetEdgeConnectedPolygons" }, // 603430497
		{ &Z_Construct_UFunction_UEditableMesh_GetEdgeCount, "GetEdgeCount" }, // 2619711458
		{ &Z_Construct_UFunction_UEditableMesh_GetEdgeLoopElements, "GetEdgeLoopElements" }, // 3065318227
		{ &Z_Construct_UFunction_UEditableMesh_GetEdgeThatConnectsVertices, "GetEdgeThatConnectsVertices" }, // 1424854128
		{ &Z_Construct_UFunction_UEditableMesh_GetEdgeVertex, "GetEdgeVertex" }, // 2100896818
		{ &Z_Construct_UFunction_UEditableMesh_GetEdgeVertices, "GetEdgeVertices" }, // 1327388869
		{ &Z_Construct_UFunction_UEditableMesh_GetFirstValidPolygonGroup, "GetFirstValidPolygonGroup" }, // 1383464655
		{ &Z_Construct_UFunction_UEditableMesh_GetGroupForPolygon, "GetGroupForPolygon" }, // 2028827753
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonAdjacentPolygons, "GetPolygonAdjacentPolygons" }, // 284851057
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonCount, "GetPolygonCount" }, // 1534480486
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonCountInGroup, "GetPolygonCountInGroup" }, // 417293088
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonGroupCount, "GetPolygonGroupCount" }, // 1098081081
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonInGroup, "GetPolygonInGroup" }, // 623004605
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdge, "GetPolygonPerimeterEdge" }, // 3471253809
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdgeCount, "GetPolygonPerimeterEdgeCount" }, // 503116130
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterEdges, "GetPolygonPerimeterEdges" }, // 1472364184
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertex, "GetPolygonPerimeterVertex" }, // 3544440999
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexCount, "GetPolygonPerimeterVertexCount" }, // 1844610396
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstance, "GetPolygonPerimeterVertexInstance" }, // 3149650026
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertexInstances, "GetPolygonPerimeterVertexInstances" }, // 3852374002
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonPerimeterVertices, "GetPolygonPerimeterVertices" }, // 4120998977
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangle, "GetPolygonTriangulatedTriangle" }, // 1132624097
		{ &Z_Construct_UFunction_UEditableMesh_GetPolygonTriangulatedTriangleCount, "GetPolygonTriangulatedTriangleCount" }, // 435616400
		{ &Z_Construct_UFunction_UEditableMesh_GetSubdivisionCount, "GetSubdivisionCount" }, // 1557091100
		{ &Z_Construct_UFunction_UEditableMesh_GetSubdivisionLimitData, "GetSubdivisionLimitData" }, // 1692395559
		{ &Z_Construct_UFunction_UEditableMesh_GetTextureCoordinateCount, "GetTextureCoordinateCount" }, // 734752331
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexAdjacentVertices, "GetVertexAdjacentVertices" }, // 93913968
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdge, "GetVertexConnectedEdge" }, // 2630466646
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdgeCount, "GetVertexConnectedEdgeCount" }, // 3266970691
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexConnectedEdges, "GetVertexConnectedEdges" }, // 3696569236
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexConnectedPolygons, "GetVertexConnectedPolygons" }, // 2093830185
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexCount, "GetVertexCount" }, // 2787960066
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygon, "GetVertexInstanceConnectedPolygon" }, // 3989051440
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygonCount, "GetVertexInstanceConnectedPolygonCount" }, // 1795336534
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexInstanceConnectedPolygons, "GetVertexInstanceConnectedPolygons" }, // 4207760311
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexInstanceCount, "GetVertexInstanceCount" }, // 938563158
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexInstanceVertex, "GetVertexInstanceVertex" }, // 1330125215
		{ &Z_Construct_UFunction_UEditableMesh_GetVertexPairEdge, "GetVertexPairEdge" }, // 1203312117
		{ &Z_Construct_UFunction_UEditableMesh_InitializeAdapters, "InitializeAdapters" }, // 2576290212
		{ &Z_Construct_UFunction_UEditableMesh_InsertEdgeLoop, "InsertEdgeLoop" }, // 966079099
		{ &Z_Construct_UFunction_UEditableMesh_InsertPolygonPerimeterVertices, "InsertPolygonPerimeterVertices" }, // 3141800766
		{ &Z_Construct_UFunction_UEditableMesh_InsetPolygons, "InsetPolygons" }, // 2468013148
		{ &Z_Construct_UFunction_UEditableMesh_InvalidEdgeID, "InvalidEdgeID" }, // 1824043643
		{ &Z_Construct_UFunction_UEditableMesh_InvalidPolygonGroupID, "InvalidPolygonGroupID" }, // 3247566473
		{ &Z_Construct_UFunction_UEditableMesh_InvalidPolygonID, "InvalidPolygonID" }, // 2752930047
		{ &Z_Construct_UFunction_UEditableMesh_InvalidVertexID, "InvalidVertexID" }, // 3917539652
		{ &Z_Construct_UFunction_UEditableMesh_IsBeingModified, "IsBeingModified" }, // 1624290086
		{ &Z_Construct_UFunction_UEditableMesh_IsCommitted, "IsCommitted" }, // 914555273
		{ &Z_Construct_UFunction_UEditableMesh_IsCommittedAsInstance, "IsCommittedAsInstance" }, // 1039204125
		{ &Z_Construct_UFunction_UEditableMesh_IsCompactAllowed, "IsCompactAllowed" }, // 2238282376
		{ &Z_Construct_UFunction_UEditableMesh_IsOrphanedVertex, "IsOrphanedVertex" }, // 2704070919
		{ &Z_Construct_UFunction_UEditableMesh_IsPreviewingSubdivisions, "IsPreviewingSubdivisions" }, // 3033488738
		{ &Z_Construct_UFunction_UEditableMesh_IsSpatialDatabaseAllowed, "IsSpatialDatabaseAllowed" }, // 1680579291
		{ &Z_Construct_UFunction_UEditableMesh_IsUndoAllowed, "IsUndoAllowed" }, // 3572168437
		{ &Z_Construct_UFunction_UEditableMesh_IsValidEdge, "IsValidEdge" }, // 3352441784
		{ &Z_Construct_UFunction_UEditableMesh_IsValidPolygon, "IsValidPolygon" }, // 2801746235
		{ &Z_Construct_UFunction_UEditableMesh_IsValidPolygonGroup, "IsValidPolygonGroup" }, // 2033161010
		{ &Z_Construct_UFunction_UEditableMesh_IsValidVertex, "IsValidVertex" }, // 1862701662
		{ &Z_Construct_UFunction_UEditableMesh_MakeEdgeID, "MakeEdgeID" }, // 2677057276
		{ &Z_Construct_UFunction_UEditableMesh_MakePolygonGroupID, "MakePolygonGroupID" }, // 3133886791
		{ &Z_Construct_UFunction_UEditableMesh_MakePolygonID, "MakePolygonID" }, // 783122985
		{ &Z_Construct_UFunction_UEditableMesh_MakeVertexID, "MakeVertexID" }, // 1680278223
		{ &Z_Construct_UFunction_UEditableMesh_MoveVertices, "MoveVertices" }, // 1488627171
		{ &Z_Construct_UFunction_UEditableMesh_PropagateInstanceChanges, "PropagateInstanceChanges" }, // 3150356909
		{ &Z_Construct_UFunction_UEditableMesh_QuadrangulateMesh, "QuadrangulateMesh" }, // 1218650599
		{ &Z_Construct_UFunction_UEditableMesh_RebuildRenderMesh, "RebuildRenderMesh" }, // 3359179709
		{ &Z_Construct_UFunction_UEditableMesh_RemovePolygonPerimeterVertices, "RemovePolygonPerimeterVertices" }, // 3160159046
		{ &Z_Construct_UFunction_UEditableMesh_Revert, "Revert" }, // 3594969696
		{ &Z_Construct_UFunction_UEditableMesh_RevertInstance, "RevertInstance" }, // 1144490668
		{ &Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsInVolume, "SearchSpatialDatabaseForPolygonsInVolume" }, // 2904954313
		{ &Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment, "SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment" }, // 2496386897
		{ &Z_Construct_UFunction_UEditableMesh_SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane, "SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane" }, // 1379431832
		{ &Z_Construct_UFunction_UEditableMesh_SetAllowCompact, "SetAllowCompact" }, // 2396065184
		{ &Z_Construct_UFunction_UEditableMesh_SetAllowSpatialDatabase, "SetAllowSpatialDatabase" }, // 1460641510
		{ &Z_Construct_UFunction_UEditableMesh_SetAllowUndo, "SetAllowUndo" }, // 4255943966
		{ &Z_Construct_UFunction_UEditableMesh_SetEdgesAttributes, "SetEdgesAttributes" }, // 2007335196
		{ &Z_Construct_UFunction_UEditableMesh_SetEdgesCreaseSharpness, "SetEdgesCreaseSharpness" }, // 3079074215
		{ &Z_Construct_UFunction_UEditableMesh_SetEdgesHardness, "SetEdgesHardness" }, // 975496889
		{ &Z_Construct_UFunction_UEditableMesh_SetEdgesHardnessAutomatically, "SetEdgesHardnessAutomatically" }, // 1850919946
		{ &Z_Construct_UFunction_UEditableMesh_SetEdgesVertices, "SetEdgesVertices" }, // 3855648936
		{ &Z_Construct_UFunction_UEditableMesh_SetPolygonsVertexAttributes, "SetPolygonsVertexAttributes" }, // 3307525440
		{ &Z_Construct_UFunction_UEditableMesh_SetSubdivisionCount, "SetSubdivisionCount" }, // 283978505
		{ &Z_Construct_UFunction_UEditableMesh_SetTextureCoordinateCount, "SetTextureCoordinateCount" }, // 4130247791
		{ &Z_Construct_UFunction_UEditableMesh_SetVertexInstancesAttributes, "SetVertexInstancesAttributes" }, // 2861137968
		{ &Z_Construct_UFunction_UEditableMesh_SetVerticesAttributes, "SetVerticesAttributes" }, // 3837382405
		{ &Z_Construct_UFunction_UEditableMesh_SetVerticesCornerSharpness, "SetVerticesCornerSharpness" }, // 3974194001
		{ &Z_Construct_UFunction_UEditableMesh_SplitEdge, "SplitEdge" }, // 1146151924
		{ &Z_Construct_UFunction_UEditableMesh_SplitPolygonalMesh, "SplitPolygonalMesh" }, // 1365420226
		{ &Z_Construct_UFunction_UEditableMesh_SplitPolygons, "SplitPolygons" }, // 598799161
		{ &Z_Construct_UFunction_UEditableMesh_StartModification, "StartModification" }, // 2632886506
		{ &Z_Construct_UFunction_UEditableMesh_TessellatePolygons, "TessellatePolygons" }, // 643099542
		{ &Z_Construct_UFunction_UEditableMesh_TriangulatePolygons, "TriangulatePolygons" }, // 4155805259
		{ &Z_Construct_UFunction_UEditableMesh_TryToRemovePolygonEdge, "TryToRemovePolygonEdge" }, // 684865244
		{ &Z_Construct_UFunction_UEditableMesh_TryToRemoveVertex, "TryToRemoveVertex" }, // 2734458816
		{ &Z_Construct_UFunction_UEditableMesh_WeldVertices, "WeldVertices" }, // 1407648462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditableMesh.h" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableMesh_Statics::NewProp_SubdivisionCount_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** How many levels to subdivide this mesh.  Zero will turn off subdivisions */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "How many levels to subdivide this mesh.  Zero will turn off subdivisions" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditableMesh_Statics::NewProp_SubdivisionCount = { "SubdivisionCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableMesh, SubdivisionCount), METADATA_PARAMS(Z_Construct_UClass_UEditableMesh_Statics::NewProp_SubdivisionCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableMesh_Statics::NewProp_SubdivisionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableMesh_Statics::NewProp_PendingCompactCounter_MetaData[] = {
		{ "Comment", "/** Counter to determine when we should compact data */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Counter to determine when we should compact data" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditableMesh_Statics::NewProp_PendingCompactCounter = { "PendingCompactCounter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableMesh, PendingCompactCounter), METADATA_PARAMS(Z_Construct_UClass_UEditableMesh_Statics::NewProp_PendingCompactCounter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableMesh_Statics::NewProp_PendingCompactCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableMesh_Statics::NewProp_TextureCoordinateCount_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The number of texture coordinates stored on the vertices of this mesh */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "The number of texture coordinates stored on the vertices of this mesh" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditableMesh_Statics::NewProp_TextureCoordinateCount = { "TextureCoordinateCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableMesh, TextureCoordinateCount), METADATA_PARAMS(Z_Construct_UClass_UEditableMesh_Statics::NewProp_TextureCoordinateCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableMesh_Statics::NewProp_TextureCoordinateCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableMesh_Statics::NewProp_Adapters_MetaData[] = {
		{ "Comment", "/** Adapters registered with this editable mesh */" },
		{ "ModuleRelativePath", "Public/EditableMesh.h" },
		{ "ToolTip", "Adapters registered with this editable mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditableMesh_Statics::NewProp_Adapters = { "Adapters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEditableMesh, Adapters), METADATA_PARAMS(Z_Construct_UClass_UEditableMesh_Statics::NewProp_Adapters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableMesh_Statics::NewProp_Adapters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableMesh_Statics::NewProp_Adapters_Inner = { "Adapters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEditableMeshAdapter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableMesh_Statics::NewProp_SubdivisionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableMesh_Statics::NewProp_PendingCompactCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableMesh_Statics::NewProp_TextureCoordinateCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableMesh_Statics::NewProp_Adapters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableMesh_Statics::NewProp_Adapters_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableMesh_Statics::ClassParams = {
		&UEditableMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditableMesh_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UEditableMesh_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableMesh_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditableMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableMesh, 1575315526);
	template<> EDITABLEMESH_API UClass* StaticClass<UEditableMesh>()
	{
		return UEditableMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableMesh(Z_Construct_UClass_UEditableMesh, &UEditableMesh::StaticClass, TEXT("/Script/EditableMesh"), TEXT("UEditableMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableMesh);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEditableMesh)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
