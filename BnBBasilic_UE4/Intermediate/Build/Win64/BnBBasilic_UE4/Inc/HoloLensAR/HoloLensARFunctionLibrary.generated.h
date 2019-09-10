// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UARPin;
class UWMRARPin;
class USceneComponent;
struct FTransform;
#ifdef HOLOLENSAR_HoloLensARFunctionLibrary_generated_h
#error "HoloLensARFunctionLibrary.generated.h already included, missing '#pragma once' in HoloLensARFunctionLibrary.h"
#endif
#define HOLOLENSAR_HoloLensARFunctionLibrary_generated_h

#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAllARPinsFromWMRAnchorStore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHoloLensARFunctionLibrary::RemoveAllARPinsFromWMRAnchorStore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveARPinFromWMRAnchorStore) \
	{ \
		P_GET_OBJECT(UARPin,Z_Param_InPin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHoloLensARFunctionLibrary::RemoveARPinFromWMRAnchorStore(Z_Param_InPin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveARPinToWMRAnchorStore) \
	{ \
		P_GET_OBJECT(UARPin,Z_Param_InPin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHoloLensARFunctionLibrary::SaveARPinToWMRAnchorStore(Z_Param_InPin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadWMRAnchorStoreARPins) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UWMRARPin*>*)Z_Param__Result=UHoloLensARFunctionLibrary::LoadWMRAnchorStoreARPins(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWMRAnchorStoreReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHoloLensARFunctionLibrary::IsWMRAnchorStoreReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPinComponentToARPin) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin); \
		P_GET_OBJECT(UWMRARPin,Z_Param_Pin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHoloLensARFunctionLibrary::PinComponentToARPin(Z_Param_ComponentToPin,Z_Param_Pin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNamedARPin) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PinToWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWMRARPin**)Z_Param__Result=UHoloLensARFunctionLibrary::CreateNamedARPin(Z_Param_Name,Z_Param_Out_PinToWorldTransform); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAllARPinsFromWMRAnchorStore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHoloLensARFunctionLibrary::RemoveAllARPinsFromWMRAnchorStore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveARPinFromWMRAnchorStore) \
	{ \
		P_GET_OBJECT(UARPin,Z_Param_InPin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UHoloLensARFunctionLibrary::RemoveARPinFromWMRAnchorStore(Z_Param_InPin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveARPinToWMRAnchorStore) \
	{ \
		P_GET_OBJECT(UARPin,Z_Param_InPin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHoloLensARFunctionLibrary::SaveARPinToWMRAnchorStore(Z_Param_InPin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadWMRAnchorStoreARPins) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UWMRARPin*>*)Z_Param__Result=UHoloLensARFunctionLibrary::LoadWMRAnchorStoreARPins(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWMRAnchorStoreReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHoloLensARFunctionLibrary::IsWMRAnchorStoreReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPinComponentToARPin) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToPin); \
		P_GET_OBJECT(UWMRARPin,Z_Param_Pin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UHoloLensARFunctionLibrary::PinComponentToARPin(Z_Param_ComponentToPin,Z_Param_Pin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateNamedARPin) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Name); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_PinToWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWMRARPin**)Z_Param__Result=UHoloLensARFunctionLibrary::CreateNamedARPin(Z_Param_Name,Z_Param_Out_PinToWorldTransform); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoloLensARFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHoloLensARFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHoloLensARFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoloLensAR"), NO_API) \
	DECLARE_SERIALIZER(UHoloLensARFunctionLibrary)


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHoloLensARFunctionLibrary(); \
	friend struct Z_Construct_UClass_UHoloLensARFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UHoloLensARFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoloLensAR"), NO_API) \
	DECLARE_SERIALIZER(UHoloLensARFunctionLibrary)


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoloLensARFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoloLensARFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoloLensARFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoloLensARFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoloLensARFunctionLibrary(UHoloLensARFunctionLibrary&&); \
	NO_API UHoloLensARFunctionLibrary(const UHoloLensARFunctionLibrary&); \
public:


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoloLensARFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoloLensARFunctionLibrary(UHoloLensARFunctionLibrary&&); \
	NO_API UHoloLensARFunctionLibrary(const UHoloLensARFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoloLensARFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoloLensARFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoloLensARFunctionLibrary)


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_13_PROLOG
#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_RPC_WRAPPERS \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_INCLASS \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOLOLENSAR_API UClass* StaticClass<class UHoloLensARFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_AR_Microsoft_HoloLensAR_Source_HoloLensAR_Public_HoloLensARFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
