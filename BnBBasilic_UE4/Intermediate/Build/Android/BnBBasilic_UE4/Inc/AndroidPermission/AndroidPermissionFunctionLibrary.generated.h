// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAndroidPermissionCallbackProxy;
#ifdef ANDROIDPERMISSION_AndroidPermissionFunctionLibrary_generated_h
#error "AndroidPermissionFunctionLibrary.generated.h already included, missing '#pragma once' in AndroidPermissionFunctionLibrary.h"
#endif
#define ANDROIDPERMISSION_AndroidPermissionFunctionLibrary_generated_h

#define Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcquirePermissions) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_permissions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAndroidPermissionCallbackProxy**)Z_Param__Result=UAndroidPermissionFunctionLibrary::AcquirePermissions(Z_Param_Out_permissions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckPermission) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_permission); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAndroidPermissionFunctionLibrary::CheckPermission(Z_Param_permission); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcquirePermissions) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_permissions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAndroidPermissionCallbackProxy**)Z_Param__Result=UAndroidPermissionFunctionLibrary::AcquirePermissions(Z_Param_Out_permissions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckPermission) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_permission); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAndroidPermissionFunctionLibrary::CheckPermission(Z_Param_permission); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidPermissionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAndroidPermissionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidPermission"), NO_API) \
	DECLARE_SERIALIZER(UAndroidPermissionFunctionLibrary)


#define Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidPermissionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAndroidPermissionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAndroidPermissionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidPermission"), NO_API) \
	DECLARE_SERIALIZER(UAndroidPermissionFunctionLibrary)


#define Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidPermissionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidPermissionFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidPermissionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidPermissionFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidPermissionFunctionLibrary(UAndroidPermissionFunctionLibrary&&); \
	NO_API UAndroidPermissionFunctionLibrary(const UAndroidPermissionFunctionLibrary&); \
public:


#define Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidPermissionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidPermissionFunctionLibrary(UAndroidPermissionFunctionLibrary&&); \
	NO_API UAndroidPermissionFunctionLibrary(const UAndroidPermissionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidPermissionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidPermissionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidPermissionFunctionLibrary)


#define Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_9_PROLOG
#define Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_INCLASS \
	Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDROIDPERMISSION_API UClass* StaticClass<class UAndroidPermissionFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
