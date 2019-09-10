// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOculusMR_PlaneMeshTriangle;
#ifdef OCULUSMR_OculusMR_PlaneMeshComponent_generated_h
#error "OculusMR_PlaneMeshComponent.generated.h already included, missing '#pragma once' in OculusMR_PlaneMeshComponent.h"
#endif
#define OCULUSMR_OculusMR_PlaneMeshComponent_generated_h

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics; \
	OCULUSMR_API static class UScriptStruct* StaticStruct();


template<> OCULUSMR_API UScriptStruct* StaticStruct<struct FOculusMR_PlaneMeshTriangle>();

#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCustomMeshTriangles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCustomMeshTriangles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCustomMeshTriangles) \
	{ \
		P_GET_TARRAY_REF(FOculusMR_PlaneMeshTriangle,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCustomMeshTriangles(Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomMeshTriangles) \
	{ \
		P_GET_TARRAY_REF(FOculusMR_PlaneMeshTriangle,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetCustomMeshTriangles(Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCustomMeshTriangles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCustomMeshTriangles(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCustomMeshTriangles) \
	{ \
		P_GET_TARRAY_REF(FOculusMR_PlaneMeshTriangle,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCustomMeshTriangles(Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomMeshTriangles) \
	{ \
		P_GET_TARRAY_REF(FOculusMR_PlaneMeshTriangle,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetCustomMeshTriangles(Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusMR_PlaneMeshComponent(); \
	friend struct Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusMR_PlaneMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusMR_PlaneMeshComponent)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUOculusMR_PlaneMeshComponent(); \
	friend struct Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusMR_PlaneMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusMR_PlaneMeshComponent)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusMR_PlaneMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusMR_PlaneMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusMR_PlaneMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusMR_PlaneMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusMR_PlaneMeshComponent(UOculusMR_PlaneMeshComponent&&); \
	NO_API UOculusMR_PlaneMeshComponent(const UOculusMR_PlaneMeshComponent&); \
public:


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusMR_PlaneMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusMR_PlaneMeshComponent(UOculusMR_PlaneMeshComponent&&); \
	NO_API UOculusMR_PlaneMeshComponent(const UOculusMR_PlaneMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusMR_PlaneMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusMR_PlaneMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusMR_PlaneMeshComponent)


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_37_PROLOG
#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_INCLASS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusMR_PlaneMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSMR_API UClass* StaticClass<class UOculusMR_PlaneMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
