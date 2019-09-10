// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_RigidBody_Chaos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RigidBody_Chaos() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum();
	GEOMETRYCOLLECTIONSIMULATIONCORE_API UEnum* Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectStateTypeEnum();
	ENGINE_API UClass* Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_RigidBody_Chaos::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RigidBody_Chaos"), sizeof(FAnimNode_RigidBody_Chaos), Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Hash());
	}
	return Singleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RigidBody_Chaos>()
{
	return FAnimNode_RigidBody_Chaos::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RigidBody_Chaos(FAnimNode_RigidBody_Chaos::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_RigidBody_Chaos"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RigidBody_Chaos
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RigidBody_Chaos()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RigidBody_Chaos")),new UScriptStruct::TCppStructOps<FAnimNode_RigidBody_Chaos>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RigidBody_Chaos;
	struct Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampLinearTranslationLimitToRefPose_MetaData[];
#endif
		static void NewProp_bClampLinearTranslationLimitToRefPose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampLinearTranslationLimitToRefPose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFreezeIncomingPoseOnStart_MetaData[];
#endif
		static void NewProp_bFreezeIncomingPoseOnStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFreezeIncomingPoseOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTransferBoneVelocities_MetaData[];
#endif
		static void NewProp_bTransferBoneVelocities_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTransferBoneVelocities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideWorldGravity_MetaData[];
#endif
		static void NewProp_bOverrideWorldGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideWorldGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldGeometry_MetaData[];
#endif
		static void NewProp_bEnableWorldGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData[];
#endif
		static void NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceDisableCollisionBetweenConstraintBodies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimulationSpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimulationSpace_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverlapChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseBoneRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseBoneRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBoundsScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedBoundsScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentAppliedLinearAccClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentAppliedLinearAccClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearVelScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentLinearVelScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearAccScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentLinearAccScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideWorldGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OverrideWorldGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLinearVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialLinearVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialVelocityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitialVelocityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialVelocityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLevelSetResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLevelSetResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplicitShapeMaxNumParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ImplicitShapeMaxNumParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplicitShapeMinNumParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ImplicitShapeMinNumParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImplicitShapeParticlesPerUnitArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImplicitShapeParticlesPerUnitArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyCollisions_MetaData[];
#endif
		static void NewProp_bNotifyCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulating_MetaData[];
#endif
		static void NewProp_bSimulating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverridePhysicsAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Controller that simulates physics based on the physics asset of the skeletal mesh component\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Controller that simulates physics based on the physics asset of the skeletal mesh component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RigidBody_Chaos>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09""Correct for linear tearing on bodies with all axes Locked.\n\x09\x09This only works if all axes linear translation are locked\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Correct for linear tearing on bodies with all axes Locked.\nThis only works if all axes linear translation are locked" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bClampLinearTranslationLimitToRefPose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose = { "bClampLinearTranslationLimitToRefPose", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09When simulation starts, freeze incoming pose.\n\x09\x09This is useful for ragdolls, when we want the simulation to take over.\n\x09\x09It prevents non simulated bones from animating.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "When simulation starts, freeze incoming pose.\nThis is useful for ragdolls, when we want the simulation to take over.\nIt prevents non simulated bones from animating." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bFreezeIncomingPoseOnStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart = { "bFreezeIncomingPoseOnStart", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09\x09When simulation starts, transfer previous bone velocities (from animation)\n\x09\x09to make transition into simulation seamless.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When simulation starts, transfer previous bone velocities (from animation)\nto make transition into simulation seamless." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bTransferBoneVelocities = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities = { "bTransferBoneVelocities", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bOverrideWorldGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity = { "bOverrideWorldGravity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bEnableWorldGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry = { "bEnableWorldGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to allow collisions between two bodies joined by a constraint  */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Whether to allow collisions between two bodies joined by a constraint" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bForceDisableCollisionBetweenConstraintBodies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies = { "bForceDisableCollisionBetweenConstraintBodies", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What space to simulate the bodies in. This affects how velocities are generated */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "What space to simulate the bodies in. This affects how velocities are generated" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace = { "SimulationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, SimulationSpace), Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverlapChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The channel we use to find static geometry to collide with */" },
		{ "editcondition", "bEnableWorldGeometry" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "The channel we use to find static geometry to collide with" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverlapChannel = { "OverlapChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, OverlapChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverlapChannel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverlapChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_BaseBoneRef_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Matters if SimulationSpace is BaseBone */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Matters if SimulationSpace is BaseBone" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_BaseBoneRef = { "BaseBoneRef", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, BaseBoneRef), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_BaseBoneRef_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_BaseBoneRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CachedBoundsScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/**\n\x09 * Scale of cached bounds (vs. actual bounds).\n\x09 * Increasing this may improve performance, but overlaps may not work as well.\n\x09 * (A value of 1.0 effectively disables cached bounds).\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Scale of cached bounds (vs. actual bounds).\nIncreasing this may improve performance, but overlaps may not work as well.\n(A value of 1.0 effectively disables cached bounds)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CachedBoundsScale = { "CachedBoundsScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, CachedBoundsScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CachedBoundsScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CachedBoundsScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentAppliedLinearAccClamp = { "ComponentAppliedLinearAccClamp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ComponentAppliedLinearAccClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearVelScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearVelScale = { "ComponentLinearVelScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ComponentLinearVelScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearVelScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearVelScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearAccScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearAccScale = { "ComponentLinearAccScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ComponentLinearAccScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearAccScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearAccScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ExternalForce_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Applies a uniform external force in world space. This allows for easily faking inertia of movement while still simulating in component space for example */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Applies a uniform external force in world space. This allows for easily faking inertia of movement while still simulating in component space for example" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ExternalForce = { "ExternalForce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ExternalForce_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ExternalForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideWorldGravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Override gravity*/" },
		{ "editcondition", "bOverrideWorldGravity" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Override gravity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideWorldGravity = { "OverrideWorldGravity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, OverrideWorldGravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideWorldGravity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideWorldGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialAngularVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** Initial angular velocity. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Initial angular velocity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialAngularVelocity = { "InitialAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, InitialAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialAngularVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialLinearVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** Initial linear velocity. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Initial linear velocity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialLinearVelocity = { "InitialLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, InitialLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialLinearVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialVelocityType_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** Where to pull initial velocity from - user defined or animation. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Where to pull initial velocity from - user defined or animation." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialVelocityType = { "InitialVelocityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, InitialVelocityType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EInitialVelocityTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialVelocityType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialVelocityType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialVelocityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionGroup_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Collision group - 0 = collides with all, -1 = none */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Collision group - 0 = collides with all, -1 = none" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionGroup = { "CollisionGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, CollisionGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionGroup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MaxLevelSetResolution_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Resolution on the smallest axes for the level set. (def: 10) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Resolution on the smallest axes for the level set. (def: 10)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MaxLevelSetResolution = { "MaxLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, MaxLevelSetResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MaxLevelSetResolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MaxLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MinLevelSetResolution_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Resolution on the smallest axes for the level set. (def: 5) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Resolution on the smallest axes for the level set. (def: 5)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MinLevelSetResolution = { "MinLevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, MinLevelSetResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MinLevelSetResolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MinLevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeMaxNumParticles_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Maximum number of particles for each implicit shape. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Maximum number of particles for each implicit shape." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeMaxNumParticles = { "ImplicitShapeMaxNumParticles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ImplicitShapeMaxNumParticles), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeMaxNumParticles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeMaxNumParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeMinNumParticles_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Minimum number of particles for each implicit shape. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Minimum number of particles for each implicit shape." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeMinNumParticles = { "ImplicitShapeMinNumParticles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ImplicitShapeMinNumParticles), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeMinNumParticles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeMinNumParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeParticlesPerUnitArea_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Number of particles to generate per unit area (square cm). 0.1 would generate 1 collision particle per 10 cm^2. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Number of particles to generate per unit area (square cm). 0.1 would generate 1 collision particle per 10 cm^2." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeParticlesPerUnitArea = { "ImplicitShapeParticlesPerUnitArea", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ImplicitShapeParticlesPerUnitArea), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeParticlesPerUnitArea_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeParticlesPerUnitArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** CollisionType defines how to initialize the rigid collision structures.  */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "CollisionType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, CollisionType), Z_Construct_UEnum_GeometryCollectionSimulationCore_ECollisionTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MaxMass_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MaxMass = { "MaxMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, MaxMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MaxMass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MaxMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MinMass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** Density / mass.\n\x09 *\n\x09 * Common densities in g/cm^3:\n\x09 *     gold: 19.3\n\x09 *     lead: 11.3\n\x09 *     copper: 8.3 - 9.0\n\x09 *     steel: 8.03\n\x09 *     iron: 7.8\n\x09 *     aluminum: 2.7\n\x09 *     glass: 2.4 - 2.8\n\x09 *     brick: 1.4 - 2.4\n\x09 *     concrete: 0.45 - 2.4\n\x09 *     bone: 1.7 - 2.0\n\x09 *     muscle: 1.06\n\x09 *     water: 1.0\n\x09 *     fat: 0.9196\n\x09 *     gasoline: 0.7\n\x09 *     wood: 0.67\n\x09 *     tree bark: 0.24\n\x09 *     air: 0.001293\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Density / mass.\n\nCommon densities in g/cm^3:\n   gold: 19.3\n   lead: 11.3\n   copper: 8.3 - 9.0\n   steel: 8.03\n   iron: 7.8\n   aluminum: 2.7\n   glass: 2.4 - 2.8\n   brick: 1.4 - 2.4\n   concrete: 0.45 - 2.4\n   bone: 1.7 - 2.0\n   muscle: 1.06\n   water: 1.0\n   fat: 0.9196\n   gasoline: 0.7\n   wood: 0.67\n   tree bark: 0.24\n   air: 0.001293" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, Density), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_Density_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** ObjectType defines how to initialize the rigid collision structures. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "ObjectType defines how to initialize the rigid collision structures." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, ObjectType), Z_Construct_UEnum_GeometryCollectionSimulationCore_EObjectStateTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ObjectType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ObjectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bNotifyCollisions_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** If true, this component will get collision notification events (@see IChaosNotifyHandlerInterface) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "If true, this component will get collision notification events (@see IChaosNotifyHandlerInterface)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bNotifyCollisions_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bNotifyCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bNotifyCollisions = { "bNotifyCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bNotifyCollisions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bNotifyCollisions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bNotifyCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_NumIterations_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** Number of solver interations. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Number of solver interations." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, NumIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_NumIterations_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_NumIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bSimulating_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** When Simulating is enabled the Component will initialize its rigid bodies within the solver. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "When Simulating is enabled the Component will initialize its rigid bodies within the solver." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bSimulating_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody_Chaos*)Obj)->bSimulating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bSimulating = { "bSimulating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_RigidBody_Chaos), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bSimulating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bSimulating_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bSimulating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Physical Properties */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "NativeConst", "" },
		{ "ToolTip", "Physical Properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, PhysicalMaterial), Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_PhysicalMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_PhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverridePhysicsAsset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Physics asset to use. If empty use the skeletal mesh's default physics asset */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody_Chaos.h" },
		{ "ToolTip", "Physics asset to use. If empty use the skeletal mesh's default physics asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverridePhysicsAsset = { "OverridePhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_RigidBody_Chaos, OverridePhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverridePhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverridePhysicsAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bClampLinearTranslationLimitToRefPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bFreezeIncomingPoseOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bTransferBoneVelocities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bOverrideWorldGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bEnableWorldGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_SimulationSpace_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverlapChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_BaseBoneRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CachedBoundsScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentAppliedLinearAccClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearVelScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ComponentLinearAccScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ExternalForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverrideWorldGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialLinearVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialVelocityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_InitialVelocityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MaxLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MinLevelSetResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeMaxNumParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeMinNumParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ImplicitShapeParticlesPerUnitArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_CollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MaxMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_MinMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ObjectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_ObjectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bNotifyCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_NumIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_bSimulating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_PhysicalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::NewProp_OverridePhysicsAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_RigidBody_Chaos",
		sizeof(FAnimNode_RigidBody_Chaos),
		alignof(FAnimNode_RigidBody_Chaos),
		Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RigidBody_Chaos"), sizeof(FAnimNode_RigidBody_Chaos), Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RigidBody_Chaos_Hash() { return 3338555695U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
