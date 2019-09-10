// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class USceneComponent;
class AActor;
#ifdef CABLECOMPONENT_CableComponent_generated_h
#error "CableComponent.generated.h already included, missing '#pragma once' in CableComponent.h"
#endif
#define CABLECOMPONENT_CableComponent_generated_h

#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCableParticleLocations) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCableParticleLocations(Z_Param_Out_Locations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachedComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=P_THIS->GetAttachedComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetAttachedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachEndTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ComponentProperty); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttachEndTo(Z_Param_Actor,Z_Param_ComponentProperty,Z_Param_SocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachEndToComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttachEndToComponent(Z_Param_Component,Z_Param_SocketName); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCableParticleLocations) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCableParticleLocations(Z_Param_Out_Locations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachedComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=P_THIS->GetAttachedComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetAttachedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachEndTo) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ComponentProperty); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttachEndTo(Z_Param_Actor,Z_Param_ComponentProperty,Z_Param_SocketName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttachEndToComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_GET_PROPERTY(UNameProperty,Z_Param_SocketName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttachEndToComponent(Z_Param_Component,Z_Param_SocketName); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCableComponent(); \
	friend struct Z_Construct_UClass_UCableComponent_Statics; \
public: \
	DECLARE_CLASS(UCableComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CableComponent"), NO_API) \
	DECLARE_SERIALIZER(UCableComponent)


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUCableComponent(); \
	friend struct Z_Construct_UClass_UCableComponent_Statics; \
public: \
	DECLARE_CLASS(UCableComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CableComponent"), NO_API) \
	DECLARE_SERIALIZER(UCableComponent)


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCableComponent(UCableComponent&&); \
	NO_API UCableComponent(const UCableComponent&); \
public:


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCableComponent(UCableComponent&&); \
	NO_API UCableComponent(const UCableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCableComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCableComponent)


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_31_PROLOG
#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_RPC_WRAPPERS \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_INCLASS \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CableComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CABLECOMPONENT_API UClass* StaticClass<class UCableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_CableComponent_Source_CableComponent_Classes_CableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
