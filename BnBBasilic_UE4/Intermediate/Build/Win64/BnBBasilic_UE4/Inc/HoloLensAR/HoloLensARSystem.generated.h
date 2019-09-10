// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOLOLENSAR_HoloLensARSystem_generated_h
#error "HoloLensARSystem.generated.h already included, missing '#pragma once' in HoloLensARSystem.h"
#endif
#define HOLOLENSAR_HoloLensARSystem_generated_h

#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsInAnchorStore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInAnchorStore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnchorId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAnchorId(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsInAnchorStore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsInAnchorStore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnchorId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetAnchorId(); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWMRARPin(); \
	friend struct Z_Construct_UClass_UWMRARPin_Statics; \
public: \
	DECLARE_CLASS(UWMRARPin, UARPin, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoloLensAR"), NO_API) \
	DECLARE_SERIALIZER(UWMRARPin)


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUWMRARPin(); \
	friend struct Z_Construct_UClass_UWMRARPin_Statics; \
public: \
	DECLARE_CLASS(UWMRARPin, UARPin, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoloLensAR"), NO_API) \
	DECLARE_SERIALIZER(UWMRARPin)


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWMRARPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWMRARPin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWMRARPin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWMRARPin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWMRARPin(UWMRARPin&&); \
	NO_API UWMRARPin(const UWMRARPin&); \
public:


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWMRARPin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWMRARPin(UWMRARPin&&); \
	NO_API UWMRARPin(const UWMRARPin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWMRARPin); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWMRARPin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWMRARPin)


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_31_PROLOG
#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_INCLASS \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLOLENSAR_API UClass* StaticClass<class UWMRARPin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
