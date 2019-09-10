// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APlayerController;
#ifdef ONLINESUBSYSTEMUTILS_TurnBasedBlueprintLibrary_generated_h
#error "TurnBasedBlueprintLibrary.generated.h already included, missing '#pragma once' in TurnBasedBlueprintLibrary.h"
#endif
#define ONLINESUBSYSTEMUTILS_TurnBasedBlueprintLibrary_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerDisplayName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PlayerDisplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTurnBasedBlueprintLibrary::GetPlayerDisplayName(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_PlayerIndex,Z_Param_Out_PlayerDisplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterTurnBasedMatchInterfaceObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMyPlayerIndex) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTurnBasedBlueprintLibrary::GetMyPlayerIndex(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_Out_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsMyTurn) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsMyTurn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTurnBasedBlueprintLibrary::GetIsMyTurn(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_Out_bIsMyTurn); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerDisplayName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayerIndex); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_PlayerDisplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTurnBasedBlueprintLibrary::GetPlayerDisplayName(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_PlayerIndex,Z_Param_Out_PlayerDisplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterTurnBasedMatchInterfaceObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMyPlayerIndex) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_PlayerIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTurnBasedBlueprintLibrary::GetMyPlayerIndex(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_Out_PlayerIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsMyTurn) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchID); \
		P_GET_UBOOL_REF(Z_Param_Out_bIsMyTurn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UTurnBasedBlueprintLibrary::GetIsMyTurn(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,Z_Param_Out_bIsMyTurn); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurnBasedBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTurnBasedBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UTurnBasedBlueprintLibrary)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTurnBasedBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTurnBasedBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UTurnBasedBlueprintLibrary)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnBasedBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnBasedBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnBasedBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnBasedBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTurnBasedBlueprintLibrary(UTurnBasedBlueprintLibrary&&); \
	NO_API UTurnBasedBlueprintLibrary(const UTurnBasedBlueprintLibrary&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnBasedBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTurnBasedBlueprintLibrary(UTurnBasedBlueprintLibrary&&); \
	NO_API UTurnBasedBlueprintLibrary(const UTurnBasedBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnBasedBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnBasedBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnBasedBlueprintLibrary)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_13_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TurnBasedBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UTurnBasedBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
