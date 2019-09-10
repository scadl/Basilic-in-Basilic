// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelVariantSets;
#ifdef VARIANTMANAGERCONTENT_LevelVariantSetsActor_generated_h
#error "LevelVariantSetsActor.generated.h already included, missing '#pragma once' in LevelVariantSetsActor.h"
#endif
#define VARIANTMANAGERCONTENT_LevelVariantSetsActor_generated_h

#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwitchOnVariantByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_VariantSetIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_VariantIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SwitchOnVariantByIndex(Z_Param_VariantSetIndex,Z_Param_VariantIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchOnVariantByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariantSetName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariantName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SwitchOnVariantByName(Z_Param_VariantSetName,Z_Param_VariantName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLevelVariantSets) \
	{ \
		P_GET_OBJECT(ULevelVariantSets,Z_Param_InVariantSets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLevelVariantSets(Z_Param_InVariantSets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelVariantSets) \
	{ \
		P_GET_UBOOL(Z_Param_bLoad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelVariantSets**)Z_Param__Result=P_THIS->GetLevelVariantSets(Z_Param_bLoad); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchOnVariantByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_VariantSetIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_VariantIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SwitchOnVariantByIndex(Z_Param_VariantSetIndex,Z_Param_VariantIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchOnVariantByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariantSetName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariantName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SwitchOnVariantByName(Z_Param_VariantSetName,Z_Param_VariantName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLevelVariantSets) \
	{ \
		P_GET_OBJECT(ULevelVariantSets,Z_Param_InVariantSets); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLevelVariantSets(Z_Param_InVariantSets); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelVariantSets) \
	{ \
		P_GET_UBOOL(Z_Param_bLoad); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelVariantSets**)Z_Param__Result=P_THIS->GetLevelVariantSets(Z_Param_bLoad); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelVariantSetsActor(); \
	friend struct Z_Construct_UClass_ALevelVariantSetsActor_Statics; \
public: \
	DECLARE_CLASS(ALevelVariantSetsActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(ALevelVariantSetsActor)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesALevelVariantSetsActor(); \
	friend struct Z_Construct_UClass_ALevelVariantSetsActor_Statics; \
public: \
	DECLARE_CLASS(ALevelVariantSetsActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(ALevelVariantSetsActor)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelVariantSetsActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelVariantSetsActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelVariantSetsActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelVariantSetsActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelVariantSetsActor(ALevelVariantSetsActor&&); \
	NO_API ALevelVariantSetsActor(const ALevelVariantSetsActor&); \
public:


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelVariantSetsActor(ALevelVariantSetsActor&&); \
	NO_API ALevelVariantSetsActor(const ALevelVariantSetsActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelVariantSetsActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelVariantSetsActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelVariantSetsActor)


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_15_PROLOG
#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_INCLASS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<class ALevelVariantSetsActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
