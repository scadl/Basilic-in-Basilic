// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFieldSystemMetaDataIteration;
class UFieldSystemMetaDataProcessingResolution;
class UUniformInteger;
struct FVector;
class URadialIntMask;
class UUniformScalar;
class URadialFalloff;
class UPlaneFalloff;
struct FTransform;
class UBoxFalloff;
class UNoiseField;
class UUniformVector;
class URadialVector;
class URandomVector;
class UFieldNodeBase;
class UOperatorField;
class UFieldNodeFloat;
class UToIntegerField;
class UFieldNodeInt;
class UToFloatField;
class UCullingField;
class UReturnResultsTerminal;
#ifdef FIELDSYSTEMENGINE_FieldSystemObjects_generated_h
#error "FieldSystemObjects.generated.h already included, missing '#pragma once' in FieldSystemObjects.h"
#endif
#define FIELDSYSTEMENGINE_FieldSystemObjects_generated_h

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldSystemMetaData(); \
	friend struct Z_Construct_UClass_UFieldSystemMetaData_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemMetaData, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldSystemMetaData)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUFieldSystemMetaData(); \
	friend struct Z_Construct_UClass_UFieldSystemMetaData_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemMetaData, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldSystemMetaData)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemMetaData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemMetaData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemMetaData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldSystemMetaData(UFieldSystemMetaData&&); \
	NO_API UFieldSystemMetaData(const UFieldSystemMetaData&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldSystemMetaData(UFieldSystemMetaData&&); \
	NO_API UFieldSystemMetaData(const UFieldSystemMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemMetaData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemMetaData)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_21_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UFieldSystemMetaData>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMetaDataIteration) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Iterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFieldSystemMetaDataIteration**)Z_Param__Result=P_THIS->SetMetaDataIteration(Z_Param_Iterations); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMetaDataIteration) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Iterations); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFieldSystemMetaDataIteration**)Z_Param__Result=P_THIS->SetMetaDataIteration(Z_Param_Iterations); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldSystemMetaDataIteration(); \
	friend struct Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemMetaDataIteration, UFieldSystemMetaData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldSystemMetaDataIteration)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUFieldSystemMetaDataIteration(); \
	friend struct Z_Construct_UClass_UFieldSystemMetaDataIteration_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemMetaDataIteration, UFieldSystemMetaData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldSystemMetaDataIteration)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemMetaDataIteration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemMetaDataIteration) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemMetaDataIteration); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemMetaDataIteration); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldSystemMetaDataIteration(UFieldSystemMetaDataIteration&&); \
	NO_API UFieldSystemMetaDataIteration(const UFieldSystemMetaDataIteration&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemMetaDataIteration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldSystemMetaDataIteration(UFieldSystemMetaDataIteration&&); \
	NO_API UFieldSystemMetaDataIteration(const UFieldSystemMetaDataIteration&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemMetaDataIteration); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemMetaDataIteration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemMetaDataIteration)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_37_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UFieldSystemMetaDataIteration>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMetaDataaProcessingResolutionType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ResolutionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFieldSystemMetaDataProcessingResolution**)Z_Param__Result=P_THIS->SetMetaDataaProcessingResolutionType(EFieldResolutionType(Z_Param_ResolutionType)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMetaDataaProcessingResolutionType) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ResolutionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFieldSystemMetaDataProcessingResolution**)Z_Param__Result=P_THIS->SetMetaDataaProcessingResolutionType(EFieldResolutionType(Z_Param_ResolutionType)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldSystemMetaDataProcessingResolution(); \
	friend struct Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemMetaDataProcessingResolution, UFieldSystemMetaData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldSystemMetaDataProcessingResolution)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUFieldSystemMetaDataProcessingResolution(); \
	friend struct Z_Construct_UClass_UFieldSystemMetaDataProcessingResolution_Statics; \
public: \
	DECLARE_CLASS(UFieldSystemMetaDataProcessingResolution, UFieldSystemMetaData, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldSystemMetaDataProcessingResolution)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemMetaDataProcessingResolution(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemMetaDataProcessingResolution) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemMetaDataProcessingResolution); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemMetaDataProcessingResolution); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldSystemMetaDataProcessingResolution(UFieldSystemMetaDataProcessingResolution&&); \
	NO_API UFieldSystemMetaDataProcessingResolution(const UFieldSystemMetaDataProcessingResolution&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldSystemMetaDataProcessingResolution(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldSystemMetaDataProcessingResolution(UFieldSystemMetaDataProcessingResolution&&); \
	NO_API UFieldSystemMetaDataProcessingResolution(const UFieldSystemMetaDataProcessingResolution&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldSystemMetaDataProcessingResolution); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldSystemMetaDataProcessingResolution); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldSystemMetaDataProcessingResolution)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_60_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UFieldSystemMetaDataProcessingResolution>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldNodeBase(); \
	friend struct Z_Construct_UClass_UFieldNodeBase_Statics; \
public: \
	DECLARE_CLASS(UFieldNodeBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldNodeBase)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUFieldNodeBase(); \
	friend struct Z_Construct_UClass_UFieldNodeBase_Statics; \
public: \
	DECLARE_CLASS(UFieldNodeBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldNodeBase)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldNodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldNodeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldNodeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldNodeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldNodeBase(UFieldNodeBase&&); \
	NO_API UFieldNodeBase(const UFieldNodeBase&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldNodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldNodeBase(UFieldNodeBase&&); \
	NO_API UFieldNodeBase(const UFieldNodeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldNodeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldNodeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldNodeBase)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_83_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UFieldNodeBase>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldNodeInt(); \
	friend struct Z_Construct_UClass_UFieldNodeInt_Statics; \
public: \
	DECLARE_CLASS(UFieldNodeInt, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldNodeInt)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUFieldNodeInt(); \
	friend struct Z_Construct_UClass_UFieldNodeInt_Statics; \
public: \
	DECLARE_CLASS(UFieldNodeInt, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldNodeInt)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldNodeInt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldNodeInt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldNodeInt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldNodeInt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldNodeInt(UFieldNodeInt&&); \
	NO_API UFieldNodeInt(const UFieldNodeInt&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldNodeInt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldNodeInt(UFieldNodeInt&&); \
	NO_API UFieldNodeInt(const UFieldNodeInt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldNodeInt); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldNodeInt); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldNodeInt)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_99_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UFieldNodeInt>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldNodeFloat(); \
	friend struct Z_Construct_UClass_UFieldNodeFloat_Statics; \
public: \
	DECLARE_CLASS(UFieldNodeFloat, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldNodeFloat)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUFieldNodeFloat(); \
	friend struct Z_Construct_UClass_UFieldNodeFloat_Statics; \
public: \
	DECLARE_CLASS(UFieldNodeFloat, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldNodeFloat)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldNodeFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldNodeFloat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldNodeFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldNodeFloat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldNodeFloat(UFieldNodeFloat&&); \
	NO_API UFieldNodeFloat(const UFieldNodeFloat&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldNodeFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldNodeFloat(UFieldNodeFloat&&); \
	NO_API UFieldNodeFloat(const UFieldNodeFloat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldNodeFloat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldNodeFloat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldNodeFloat)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_112_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UFieldNodeFloat>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFieldNodeVector(); \
	friend struct Z_Construct_UClass_UFieldNodeVector_Statics; \
public: \
	DECLARE_CLASS(UFieldNodeVector, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldNodeVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUFieldNodeVector(); \
	friend struct Z_Construct_UClass_UFieldNodeVector_Statics; \
public: \
	DECLARE_CLASS(UFieldNodeVector, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UFieldNodeVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldNodeVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldNodeVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldNodeVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldNodeVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldNodeVector(UFieldNodeVector&&); \
	NO_API UFieldNodeVector(const UFieldNodeVector&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFieldNodeVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFieldNodeVector(UFieldNodeVector&&); \
	NO_API UFieldNodeVector(const UFieldNodeVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFieldNodeVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFieldNodeVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFieldNodeVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_125_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_128_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UFieldNodeVector>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUniformInteger) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUniformInteger**)Z_Param__Result=P_THIS->SetUniformInteger(Z_Param_Magnitude); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUniformInteger) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUniformInteger**)Z_Param__Result=P_THIS->SetUniformInteger(Z_Param_Magnitude); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUniformInteger(); \
	friend struct Z_Construct_UClass_UUniformInteger_Statics; \
public: \
	DECLARE_CLASS(UUniformInteger, UFieldNodeInt, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UUniformInteger)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_INCLASS \
private: \
	static void StaticRegisterNativesUUniformInteger(); \
	friend struct Z_Construct_UClass_UUniformInteger_Statics; \
public: \
	DECLARE_CLASS(UUniformInteger, UFieldNodeInt, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UUniformInteger)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformInteger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformInteger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformInteger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformInteger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformInteger(UUniformInteger&&); \
	NO_API UUniformInteger(const UUniformInteger&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformInteger(UUniformInteger&&); \
	NO_API UUniformInteger(const UUniformInteger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformInteger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformInteger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUniformInteger)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_138_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_141_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UUniformInteger>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRadialIntMask) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InteriorValue); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ExteriorValue); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SetMaskConditionIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URadialIntMask**)Z_Param__Result=P_THIS->SetRadialIntMask(Z_Param_Radius,Z_Param_Position,Z_Param_InteriorValue,Z_Param_ExteriorValue,ESetMaskConditionType(Z_Param_SetMaskConditionIn)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRadialIntMask) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InteriorValue); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ExteriorValue); \
		P_GET_PROPERTY(UByteProperty,Z_Param_SetMaskConditionIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URadialIntMask**)Z_Param__Result=P_THIS->SetRadialIntMask(Z_Param_Radius,Z_Param_Position,Z_Param_InteriorValue,Z_Param_ExteriorValue,ESetMaskConditionType(Z_Param_SetMaskConditionIn)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURadialIntMask(); \
	friend struct Z_Construct_UClass_URadialIntMask_Statics; \
public: \
	DECLARE_CLASS(URadialIntMask, UFieldNodeInt, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(URadialIntMask)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_INCLASS \
private: \
	static void StaticRegisterNativesURadialIntMask(); \
	friend struct Z_Construct_UClass_URadialIntMask_Statics; \
public: \
	DECLARE_CLASS(URadialIntMask, UFieldNodeInt, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(URadialIntMask)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadialIntMask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadialIntMask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadialIntMask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadialIntMask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadialIntMask(URadialIntMask&&); \
	NO_API URadialIntMask(const URadialIntMask&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadialIntMask(URadialIntMask&&); \
	NO_API URadialIntMask(const URadialIntMask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadialIntMask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadialIntMask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URadialIntMask)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_164_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_167_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class URadialIntMask>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUniformScalar) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUniformScalar**)Z_Param__Result=P_THIS->SetUniformScalar(Z_Param_Magnitude); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUniformScalar) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUniformScalar**)Z_Param__Result=P_THIS->SetUniformScalar(Z_Param_Magnitude); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUniformScalar(); \
	friend struct Z_Construct_UClass_UUniformScalar_Statics; \
public: \
	DECLARE_CLASS(UUniformScalar, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UUniformScalar)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_INCLASS \
private: \
	static void StaticRegisterNativesUUniformScalar(); \
	friend struct Z_Construct_UClass_UUniformScalar_Statics; \
public: \
	DECLARE_CLASS(UUniformScalar, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UUniformScalar)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformScalar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformScalar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformScalar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformScalar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformScalar(UUniformScalar&&); \
	NO_API UUniformScalar(const UUniformScalar&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformScalar(UUniformScalar&&); \
	NO_API UUniformScalar(const UUniformScalar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformScalar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformScalar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUniformScalar)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_205_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_208_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UUniformScalar>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRadialFalloff) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Default); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URadialFalloff**)Z_Param__Result=P_THIS->SetRadialFalloff(Z_Param_Magnitude,Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Default,Z_Param_Radius,Z_Param_Position,EFieldFalloffType(Z_Param_Falloff)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRadialFalloff) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Default); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Radius); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URadialFalloff**)Z_Param__Result=P_THIS->SetRadialFalloff(Z_Param_Magnitude,Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Default,Z_Param_Radius,Z_Param_Position,EFieldFalloffType(Z_Param_Falloff)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURadialFalloff(); \
	friend struct Z_Construct_UClass_URadialFalloff_Statics; \
public: \
	DECLARE_CLASS(URadialFalloff, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(URadialFalloff)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_INCLASS \
private: \
	static void StaticRegisterNativesURadialFalloff(); \
	friend struct Z_Construct_UClass_URadialFalloff_Statics; \
public: \
	DECLARE_CLASS(URadialFalloff, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(URadialFalloff)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadialFalloff(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadialFalloff) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadialFalloff); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadialFalloff); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadialFalloff(URadialFalloff&&); \
	NO_API URadialFalloff(const URadialFalloff&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadialFalloff(URadialFalloff&&); \
	NO_API URadialFalloff(const URadialFalloff&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadialFalloff); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadialFalloff); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URadialFalloff)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_232_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_235_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class URadialFalloff>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPlaneFalloff) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Default); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPlaneFalloff**)Z_Param__Result=P_THIS->SetPlaneFalloff(Z_Param_Magnitude,Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Default,Z_Param_Distance,Z_Param_Position,Z_Param_Normal,EFieldFalloffType(Z_Param_Falloff)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPlaneFalloff) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Default); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Distance); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_GET_STRUCT(FVector,Z_Param_Normal); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPlaneFalloff**)Z_Param__Result=P_THIS->SetPlaneFalloff(Z_Param_Magnitude,Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Default,Z_Param_Distance,Z_Param_Position,Z_Param_Normal,EFieldFalloffType(Z_Param_Falloff)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlaneFalloff(); \
	friend struct Z_Construct_UClass_UPlaneFalloff_Statics; \
public: \
	DECLARE_CLASS(UPlaneFalloff, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UPlaneFalloff)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_INCLASS \
private: \
	static void StaticRegisterNativesUPlaneFalloff(); \
	friend struct Z_Construct_UClass_UPlaneFalloff_Statics; \
public: \
	DECLARE_CLASS(UPlaneFalloff, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UPlaneFalloff)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlaneFalloff(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlaneFalloff) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlaneFalloff); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlaneFalloff); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlaneFalloff(UPlaneFalloff&&); \
	NO_API UPlaneFalloff(const UPlaneFalloff&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlaneFalloff(UPlaneFalloff&&); \
	NO_API UPlaneFalloff(const UPlaneFalloff&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlaneFalloff); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlaneFalloff); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlaneFalloff)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_281_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_284_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UPlaneFalloff>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBoxFalloff) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Default); \
		P_GET_STRUCT(FTransform,Z_Param_Transform); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBoxFalloff**)Z_Param__Result=P_THIS->SetBoxFalloff(Z_Param_Magnitude,Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Default,Z_Param_Transform,EFieldFalloffType(Z_Param_Falloff)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBoxFalloff) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Default); \
		P_GET_STRUCT(FTransform,Z_Param_Transform); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Falloff); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBoxFalloff**)Z_Param__Result=P_THIS->SetBoxFalloff(Z_Param_Magnitude,Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Default,Z_Param_Transform,EFieldFalloffType(Z_Param_Falloff)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoxFalloff(); \
	friend struct Z_Construct_UClass_UBoxFalloff_Statics; \
public: \
	DECLARE_CLASS(UBoxFalloff, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UBoxFalloff)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_INCLASS \
private: \
	static void StaticRegisterNativesUBoxFalloff(); \
	friend struct Z_Construct_UClass_UBoxFalloff_Statics; \
public: \
	DECLARE_CLASS(UBoxFalloff, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UBoxFalloff)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoxFalloff(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoxFalloff) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoxFalloff); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoxFalloff); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoxFalloff(UBoxFalloff&&); \
	NO_API UBoxFalloff(const UBoxFalloff&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoxFalloff(UBoxFalloff&&); \
	NO_API UBoxFalloff(const UBoxFalloff&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoxFalloff); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoxFalloff); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBoxFalloff)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_335_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_338_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UBoxFalloff>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNoiseField) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_STRUCT(FTransform,Z_Param_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNoiseField**)Z_Param__Result=P_THIS->SetNoiseField(Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Transform); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNoiseField) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinRange); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_STRUCT(FTransform,Z_Param_Transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UNoiseField**)Z_Param__Result=P_THIS->SetNoiseField(Z_Param_MinRange,Z_Param_MaxRange,Z_Param_Transform); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNoiseField(); \
	friend struct Z_Construct_UClass_UNoiseField_Statics; \
public: \
	DECLARE_CLASS(UNoiseField, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UNoiseField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_INCLASS \
private: \
	static void StaticRegisterNativesUNoiseField(); \
	friend struct Z_Construct_UClass_UNoiseField_Statics; \
public: \
	DECLARE_CLASS(UNoiseField, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UNoiseField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoiseField(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoiseField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoiseField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoiseField); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoiseField(UNoiseField&&); \
	NO_API UNoiseField(const UNoiseField&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoiseField(UNoiseField&&); \
	NO_API UNoiseField(const UNoiseField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoiseField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoiseField); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNoiseField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_382_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_385_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UNoiseField>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUniformVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUniformVector**)Z_Param__Result=P_THIS->SetUniformVector(Z_Param_Magnitude,Z_Param_Direction); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUniformVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_STRUCT(FVector,Z_Param_Direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUniformVector**)Z_Param__Result=P_THIS->SetUniformVector(Z_Param_Magnitude,Z_Param_Direction); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUniformVector(); \
	friend struct Z_Construct_UClass_UUniformVector_Statics; \
public: \
	DECLARE_CLASS(UUniformVector, UFieldNodeVector, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UUniformVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_INCLASS \
private: \
	static void StaticRegisterNativesUUniformVector(); \
	friend struct Z_Construct_UClass_UUniformVector_Statics; \
public: \
	DECLARE_CLASS(UUniformVector, UFieldNodeVector, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UUniformVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformVector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformVector(UUniformVector&&); \
	NO_API UUniformVector(const UUniformVector&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformVector(UUniformVector&&); \
	NO_API UUniformVector(const UUniformVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformVector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUniformVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_418_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_421_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UUniformVector>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRadialVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URadialVector**)Z_Param__Result=P_THIS->SetRadialVector(Z_Param_Magnitude,Z_Param_Position); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRadialVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_STRUCT(FVector,Z_Param_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URadialVector**)Z_Param__Result=P_THIS->SetRadialVector(Z_Param_Magnitude,Z_Param_Position); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURadialVector(); \
	friend struct Z_Construct_UClass_URadialVector_Statics; \
public: \
	DECLARE_CLASS(URadialVector, UFieldNodeVector, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(URadialVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_INCLASS \
private: \
	static void StaticRegisterNativesURadialVector(); \
	friend struct Z_Construct_UClass_URadialVector_Statics; \
public: \
	DECLARE_CLASS(URadialVector, UFieldNodeVector, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(URadialVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URadialVector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URadialVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadialVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadialVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadialVector(URadialVector&&); \
	NO_API URadialVector(const URadialVector&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URadialVector(URadialVector&&); \
	NO_API URadialVector(const URadialVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URadialVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URadialVector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URadialVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_448_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_451_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class URadialVector>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRandomVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URandomVector**)Z_Param__Result=P_THIS->SetRandomVector(Z_Param_Magnitude); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRandomVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URandomVector**)Z_Param__Result=P_THIS->SetRandomVector(Z_Param_Magnitude); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURandomVector(); \
	friend struct Z_Construct_UClass_URandomVector_Statics; \
public: \
	DECLARE_CLASS(URandomVector, UFieldNodeVector, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(URandomVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_INCLASS \
private: \
	static void StaticRegisterNativesURandomVector(); \
	friend struct Z_Construct_UClass_URandomVector_Statics; \
public: \
	DECLARE_CLASS(URandomVector, UFieldNodeVector, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(URandomVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URandomVector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URandomVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URandomVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URandomVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URandomVector(URandomVector&&); \
	NO_API URandomVector(const URandomVector&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URandomVector(URandomVector&&); \
	NO_API URandomVector(const URandomVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URandomVector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URandomVector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URandomVector)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_477_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_480_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class URandomVector>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOperatorField) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_RightField); \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_LeftField); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Operation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOperatorField**)Z_Param__Result=P_THIS->SetOperatorField(Z_Param_Magnitude,Z_Param_RightField,Z_Param_LeftField,EFieldOperationType(Z_Param_Operation)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOperatorField) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Magnitude); \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_RightField); \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_LeftField); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Operation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UOperatorField**)Z_Param__Result=P_THIS->SetOperatorField(Z_Param_Magnitude,Z_Param_RightField,Z_Param_LeftField,EFieldOperationType(Z_Param_Operation)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOperatorField(); \
	friend struct Z_Construct_UClass_UOperatorField_Statics; \
public: \
	DECLARE_CLASS(UOperatorField, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UOperatorField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_INCLASS \
private: \
	static void StaticRegisterNativesUOperatorField(); \
	friend struct Z_Construct_UClass_UOperatorField_Statics; \
public: \
	DECLARE_CLASS(UOperatorField, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UOperatorField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOperatorField(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOperatorField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperatorField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperatorField); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOperatorField(UOperatorField&&); \
	NO_API UOperatorField(const UOperatorField&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOperatorField(UOperatorField&&); \
	NO_API UOperatorField(const UOperatorField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperatorField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperatorField); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOperatorField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_503_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_506_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UOperatorField>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetToIntegerField) \
	{ \
		P_GET_OBJECT(UFieldNodeFloat,Z_Param_FloatField); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UToIntegerField**)Z_Param__Result=P_THIS->SetToIntegerField(Z_Param_FloatField); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetToIntegerField) \
	{ \
		P_GET_OBJECT(UFieldNodeFloat,Z_Param_FloatField); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UToIntegerField**)Z_Param__Result=P_THIS->SetToIntegerField(Z_Param_FloatField); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToIntegerField(); \
	friend struct Z_Construct_UClass_UToIntegerField_Statics; \
public: \
	DECLARE_CLASS(UToIntegerField, UFieldNodeInt, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UToIntegerField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_INCLASS \
private: \
	static void StaticRegisterNativesUToIntegerField(); \
	friend struct Z_Construct_UClass_UToIntegerField_Statics; \
public: \
	DECLARE_CLASS(UToIntegerField, UFieldNodeInt, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UToIntegerField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToIntegerField(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToIntegerField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToIntegerField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToIntegerField); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToIntegerField(UToIntegerField&&); \
	NO_API UToIntegerField(const UToIntegerField&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToIntegerField(UToIntegerField&&); \
	NO_API UToIntegerField(const UToIntegerField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToIntegerField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToIntegerField); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToIntegerField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_544_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_547_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UToIntegerField>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetToFloatField) \
	{ \
		P_GET_OBJECT(UFieldNodeInt,Z_Param_IntegerField); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UToFloatField**)Z_Param__Result=P_THIS->SetToFloatField(Z_Param_IntegerField); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetToFloatField) \
	{ \
		P_GET_OBJECT(UFieldNodeInt,Z_Param_IntegerField); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UToFloatField**)Z_Param__Result=P_THIS->SetToFloatField(Z_Param_IntegerField); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToFloatField(); \
	friend struct Z_Construct_UClass_UToFloatField_Statics; \
public: \
	DECLARE_CLASS(UToFloatField, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UToFloatField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_INCLASS \
private: \
	static void StaticRegisterNativesUToFloatField(); \
	friend struct Z_Construct_UClass_UToFloatField_Statics; \
public: \
	DECLARE_CLASS(UToFloatField, UFieldNodeFloat, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UToFloatField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToFloatField(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToFloatField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToFloatField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToFloatField); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToFloatField(UToFloatField&&); \
	NO_API UToFloatField(const UToFloatField&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToFloatField(UToFloatField&&); \
	NO_API UToFloatField(const UToFloatField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToFloatField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToFloatField); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToFloatField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_569_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_572_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UToFloatField>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCullingField) \
	{ \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_Culling); \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_Field); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Operation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCullingField**)Z_Param__Result=P_THIS->SetCullingField(Z_Param_Culling,Z_Param_Field,EFieldCullingOperationType(Z_Param_Operation)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCullingField) \
	{ \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_Culling); \
		P_GET_OBJECT(UFieldNodeBase,Z_Param_Field); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Operation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCullingField**)Z_Param__Result=P_THIS->SetCullingField(Z_Param_Culling,Z_Param_Field,EFieldCullingOperationType(Z_Param_Operation)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCullingField(); \
	friend struct Z_Construct_UClass_UCullingField_Statics; \
public: \
	DECLARE_CLASS(UCullingField, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UCullingField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_INCLASS \
private: \
	static void StaticRegisterNativesUCullingField(); \
	friend struct Z_Construct_UClass_UCullingField_Statics; \
public: \
	DECLARE_CLASS(UCullingField, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UCullingField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCullingField(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCullingField) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCullingField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCullingField); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCullingField(UCullingField&&); \
	NO_API UCullingField(const UCullingField&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCullingField(UCullingField&&); \
	NO_API UCullingField(const UCullingField&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCullingField); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCullingField); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCullingField)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_594_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_597_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UCullingField>();

#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetReturnResultsTerminal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UReturnResultsTerminal**)Z_Param__Result=P_THIS->SetReturnResultsTerminal(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetReturnResultsTerminal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UReturnResultsTerminal**)Z_Param__Result=P_THIS->SetReturnResultsTerminal(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReturnResultsTerminal(); \
	friend struct Z_Construct_UClass_UReturnResultsTerminal_Statics; \
public: \
	DECLARE_CLASS(UReturnResultsTerminal, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UReturnResultsTerminal)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_INCLASS \
private: \
	static void StaticRegisterNativesUReturnResultsTerminal(); \
	friend struct Z_Construct_UClass_UReturnResultsTerminal_Statics; \
public: \
	DECLARE_CLASS(UReturnResultsTerminal, UFieldNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FieldSystemEngine"), NO_API) \
	DECLARE_SERIALIZER(UReturnResultsTerminal)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReturnResultsTerminal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReturnResultsTerminal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReturnResultsTerminal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReturnResultsTerminal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReturnResultsTerminal(UReturnResultsTerminal&&); \
	NO_API UReturnResultsTerminal(const UReturnResultsTerminal&); \
public:


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReturnResultsTerminal(UReturnResultsTerminal&&); \
	NO_API UReturnResultsTerminal(const UReturnResultsTerminal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReturnResultsTerminal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReturnResultsTerminal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReturnResultsTerminal)


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_628_PROLOG
#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_INCLASS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h_631_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIELDSYSTEMENGINE_API UClass* StaticClass<class UReturnResultsTerminal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_FieldSystem_Source_FieldSystemEngine_Public_Field_FieldSystemObjects_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
