// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFieldSystemMetaData;
class UFieldNodeBase;
struct FVector;
#ifdef FIELDSYSTEMENGINE_FieldSystemComponent_generated_h
#error "FieldSystemComponent.generated.h already included, missing '#pragma once' in FieldSystemComponent.h"
#endif
#define FIELDSYSTEMENGINE_FieldSystemComponent_generated_h

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddFieldCommand) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Target); \
		P_GET_OBJECT(UFieldSystemMetaData,Z_Param_MetaData); \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_Field); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddFieldCommand(Z_Param_Enabled,EFieldPhysicsType(Z_Param_Target),Z_Param_MetaData,Z_Param_Field); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetFieldSystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetFieldSystem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyPhysicsField) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Target); \
		P_GET_OBJECT(UFieldSystemMetaData,Z_Param_MetaData); \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_Field); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyPhysicsField(Z_Param_Enabled,EFieldPhysicsType(Z_Param_Target),Z_Param_MetaData,Z_Param_Field); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyStrainField) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Iterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyStrainField(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_Magnitude,Z_Param_Iterations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyUniformVectorFalloffForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyUniformVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Direction,Z_Param_Radius,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialVectorFalloffForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRadialVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRadialForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyStayDynamicField) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyStayDynamicField(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyLinearForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyLinearForce(Z_Param_Enabled,Z_Param_Direction,Z_Param_Magnitude); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddFieldCommand) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Target); \
		P_GET_OBJECT(UFieldSystemMetaData,Z_Param_MetaData); \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_Field); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddFieldCommand(Z_Param_Enabled,EFieldPhysicsType(Z_Param_Target),Z_Param_MetaData,Z_Param_Field); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetFieldSystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetFieldSystem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyPhysicsField) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Target); \
		P_GET_OBJECT(UFieldSystemMetaData,Z_Param_MetaData); \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_Field); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyPhysicsField(Z_Param_Enabled,EFieldPhysicsType(Z_Param_Target),Z_Param_MetaData,Z_Param_Field); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyStrainField) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Iterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyStrainField(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_Magnitude,Z_Param_Iterations); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyUniformVectorFalloffForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyUniformVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Direction,Z_Param_Radius,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialVectorFalloffForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRadialVectorFalloffForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyRadialForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyRadialForce(Z_Param_Enabled,Z_Param_Position,Z_Param_Magnitude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyStayDynamicField) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyStayDynamicField(Z_Param_Enabled,Z_Param_Position,Z_Param_Radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyLinearForce) \
	{ \
		P_GET_UBOOL(Z_Param_Enabled); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyLinearForce(Z_Param_Enabled,Z_Param_Direction,Z_Param_Magnitude); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldSystemComponent(); \
	friend struct Z_Construct_UClass_UFieldSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldSystemComponent)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUFieldSystemComponent(); \
	friend struct Z_Construct_UClass_UFieldSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldSystemComponent)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldSystemComponent(UFieldSystemComponent&&); \
	NO_API UFieldSystemComponent(const UFieldSystemComponent&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldSystemComponent(UFieldSystemComponent&&); \
	NO_API UFieldSystemComponent(const UFieldSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemComponent)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_21_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FieldSystemComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UFieldSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
