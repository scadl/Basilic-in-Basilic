// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChaosTrailingEventData;
struct FChaosBreakingEventData;
struct FChaosCollisionEventData;
enum class EChaosTrailingSortMethod : uint8;
enum class EChaosBreakingSortMethod : uint8;
enum class EChaosCollisionSortMethod : uint8;
struct FChaosTrailingEventRequestSettings;
struct FChaosBreakingEventRequestSettings;
struct FChaosCollisionEventRequestSettings;
class AGeometryCollectionActor;
class AChaosSolverActor;
#ifdef GEOMETRYCOLLECTIONENGINE_ChaosBlueprint_generated_h
#error "ChaosBlueprint.generated.h already included, missing '#pragma once' in ChaosBlueprint.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_ChaosBlueprint_generated_h

#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_31_DELEGATE \
struct _Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms \
{ \
	TArray<FChaosTrailingEventData> TrailingEvents; \
}; \
static inline void FOnChaosTrailingEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosTrailingEvents, TArray<FChaosTrailingEventData> const& TrailingEvents) \
{ \
	_Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms Parms; \
	Parms.TrailingEvents=TrailingEvents; \
	OnChaosTrailingEvents.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_26_DELEGATE \
struct _Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms \
{ \
	TArray<FChaosBreakingEventData> BreakingEvents; \
}; \
static inline void FOnChaosBreakingEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosBreakingEvents, TArray<FChaosBreakingEventData> const& BreakingEvents) \
{ \
	_Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms Parms; \
	Parms.BreakingEvents=BreakingEvents; \
	OnChaosBreakingEvents.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_21_DELEGATE \
struct _Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms \
{ \
	TArray<FChaosCollisionEventData> CollisionEvents; \
}; \
static inline void FOnChaosCollisionEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosCollisionEvents, TArray<FChaosCollisionEventData> const& CollisionEvents) \
{ \
	_Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms Parms; \
	Parms.CollisionEvents=CollisionEvents; \
	OnChaosCollisionEvents.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSortTrailingEvents) \
	{ \
		P_GET_TARRAY_REF(FChaosTrailingEventData,Z_Param_Out_TrailingEvents); \
		P_GET_ENUM(EChaosTrailingSortMethod,Z_Param_SortMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortTrailingEvents(Z_Param_Out_TrailingEvents,EChaosTrailingSortMethod(Z_Param_SortMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortBreakingEvents) \
	{ \
		P_GET_TARRAY_REF(FChaosBreakingEventData,Z_Param_Out_BreakingEvents); \
		P_GET_ENUM(EChaosBreakingSortMethod,Z_Param_SortMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortBreakingEvents(Z_Param_Out_BreakingEvents,EChaosBreakingSortMethod(Z_Param_SortMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortCollisionEvents) \
	{ \
		P_GET_TARRAY_REF(FChaosCollisionEventData,Z_Param_Out_CollisionEvents); \
		P_GET_ENUM(EChaosCollisionSortMethod,Z_Param_SortMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortCollisionEvents(Z_Param_Out_CollisionEvents,EChaosCollisionSortMethod(Z_Param_SortMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEventListening) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEventListening(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrailingEventEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrailingEventEnabled(Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBreakingEventEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBreakingEventEnabled(Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionEventEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionEventEnabled(Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrailingEventRequestSettings) \
	{ \
		P_GET_STRUCT_REF(FChaosTrailingEventRequestSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrailingEventRequestSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBreakingEventRequestSettings) \
	{ \
		P_GET_STRUCT_REF(FChaosBreakingEventRequestSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBreakingEventRequestSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionEventRequestSettings) \
	{ \
		P_GET_STRUCT_REF(FChaosCollisionEventRequestSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionEventRequestSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGeometryCollectionActor) \
	{ \
		P_GET_OBJECT(AGeometryCollectionActor,Z_Param_GeometryCollectionActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGeometryCollectionActor(Z_Param_GeometryCollectionActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGeometryCollectionActor) \
	{ \
		P_GET_OBJECT(AGeometryCollectionActor,Z_Param_GeometryCollectionActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGeometryCollectionActor(Z_Param_GeometryCollectionActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveChaosSolverActor) \
	{ \
		P_GET_OBJECT(AChaosSolverActor,Z_Param_ChaosSolverActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveChaosSolverActor(Z_Param_ChaosSolverActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddChaosSolverActor) \
	{ \
		P_GET_OBJECT(AChaosSolverActor,Z_Param_ChaosSolverActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddChaosSolverActor(Z_Param_ChaosSolverActor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSortTrailingEvents) \
	{ \
		P_GET_TARRAY_REF(FChaosTrailingEventData,Z_Param_Out_TrailingEvents); \
		P_GET_ENUM(EChaosTrailingSortMethod,Z_Param_SortMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortTrailingEvents(Z_Param_Out_TrailingEvents,EChaosTrailingSortMethod(Z_Param_SortMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortBreakingEvents) \
	{ \
		P_GET_TARRAY_REF(FChaosBreakingEventData,Z_Param_Out_BreakingEvents); \
		P_GET_ENUM(EChaosBreakingSortMethod,Z_Param_SortMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortBreakingEvents(Z_Param_Out_BreakingEvents,EChaosBreakingSortMethod(Z_Param_SortMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortCollisionEvents) \
	{ \
		P_GET_TARRAY_REF(FChaosCollisionEventData,Z_Param_Out_CollisionEvents); \
		P_GET_ENUM(EChaosCollisionSortMethod,Z_Param_SortMethod); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SortCollisionEvents(Z_Param_Out_CollisionEvents,EChaosCollisionSortMethod(Z_Param_SortMethod)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEventListening) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsEventListening(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrailingEventEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrailingEventEnabled(Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBreakingEventEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBreakingEventEnabled(Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionEventEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bIsEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionEventEnabled(Z_Param_bIsEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTrailingEventRequestSettings) \
	{ \
		P_GET_STRUCT_REF(FChaosTrailingEventRequestSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTrailingEventRequestSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBreakingEventRequestSettings) \
	{ \
		P_GET_STRUCT_REF(FChaosBreakingEventRequestSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBreakingEventRequestSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionEventRequestSettings) \
	{ \
		P_GET_STRUCT_REF(FChaosCollisionEventRequestSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionEventRequestSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGeometryCollectionActor) \
	{ \
		P_GET_OBJECT(AGeometryCollectionActor,Z_Param_GeometryCollectionActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGeometryCollectionActor(Z_Param_GeometryCollectionActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddGeometryCollectionActor) \
	{ \
		P_GET_OBJECT(AGeometryCollectionActor,Z_Param_GeometryCollectionActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddGeometryCollectionActor(Z_Param_GeometryCollectionActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveChaosSolverActor) \
	{ \
		P_GET_OBJECT(AChaosSolverActor,Z_Param_ChaosSolverActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveChaosSolverActor(Z_Param_ChaosSolverActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddChaosSolverActor) \
	{ \
		P_GET_OBJECT(AChaosSolverActor,Z_Param_ChaosSolverActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddChaosSolverActor(Z_Param_ChaosSolverActor); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosDestructionListener(); \
	friend struct Z_Construct_UClass_UChaosDestructionListener_Statics; \
public: \
	DECLARE_CLASS(UChaosDestructionListener, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosDestructionListener)


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUChaosDestructionListener(); \
	friend struct Z_Construct_UClass_UChaosDestructionListener_Statics; \
public: \
	DECLARE_CLASS(UChaosDestructionListener, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosDestructionListener)


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosDestructionListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosDestructionListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosDestructionListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosDestructionListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosDestructionListener(UChaosDestructionListener&&); \
	NO_API UChaosDestructionListener(const UChaosDestructionListener&); \
public:


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosDestructionListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosDestructionListener(UChaosDestructionListener&&); \
	NO_API UChaosDestructionListener(const UChaosDestructionListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosDestructionListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosDestructionListener); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosDestructionListener)


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_35_PROLOG
#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_INCLASS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ChaosDestructionListener."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class UChaosDestructionListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
