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
#ifdef ONLINESUBSYSTEMUTILS_AchievementBlueprintLibrary_generated_h
#error "AchievementBlueprintLibrary.generated.h already included, missing '#pragma once' in AchievementBlueprintLibrary.h"
#endif
#define ONLINESUBSYSTEMUTILS_AchievementBlueprintLibrary_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCachedAchievementDescription) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AchievementID); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundID); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Title); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_LockedDescription); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_UnlockedDescription); \
		P_GET_UBOOL_REF(Z_Param_Out_bHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAchievementBlueprintLibrary::GetCachedAchievementDescription(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_AchievementID,Z_Param_Out_bFoundID,Z_Param_Out_Title,Z_Param_Out_LockedDescription,Z_Param_Out_UnlockedDescription,Z_Param_Out_bHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedAchievementProgress) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AchievementID); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundID); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Progress); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAchievementBlueprintLibrary::GetCachedAchievementProgress(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_AchievementID,Z_Param_Out_bFoundID,Z_Param_Out_Progress); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCachedAchievementDescription) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AchievementID); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundID); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Title); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_LockedDescription); \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_UnlockedDescription); \
		P_GET_UBOOL_REF(Z_Param_Out_bHidden); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAchievementBlueprintLibrary::GetCachedAchievementDescription(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_AchievementID,Z_Param_Out_bFoundID,Z_Param_Out_Title,Z_Param_Out_LockedDescription,Z_Param_Out_UnlockedDescription,Z_Param_Out_bHidden); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedAchievementProgress) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_AchievementID); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundID); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Progress); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAchievementBlueprintLibrary::GetCachedAchievementProgress(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_AchievementID,Z_Param_Out_bFoundID,Z_Param_Out_Progress); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAchievementBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAchievementBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAchievementBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UAchievementBlueprintLibrary)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAchievementBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAchievementBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UAchievementBlueprintLibrary)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAchievementBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementBlueprintLibrary(UAchievementBlueprintLibrary&&); \
	NO_API UAchievementBlueprintLibrary(const UAchievementBlueprintLibrary&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAchievementBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementBlueprintLibrary(UAchievementBlueprintLibrary&&); \
	NO_API UAchievementBlueprintLibrary(const UAchievementBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementBlueprintLibrary)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_14_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AchievementBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UAchievementBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
