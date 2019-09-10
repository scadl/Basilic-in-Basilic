// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
class UObject;
class APlayerController;
class UFindSessionsCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_FindSessionsCallbackProxy_generated_h
#error "FindSessionsCallbackProxy.generated.h already included, missing '#pragma once' in FindSessionsCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_FindSessionsCallbackProxy_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FBlueprintSessionResult>();

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_21_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms \
{ \
	TArray<FBlueprintSessionResult> Results; \
}; \
static inline void FBlueprintFindSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintFindSessionsResultDelegate, TArray<FBlueprintSessionResult> const& Results) \
{ \
	_Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms Parms; \
	Parms.Results=Results; \
	BlueprintFindSessionsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxPlayers) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetMaxPlayers(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPlayers) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetCurrentPlayers(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerName) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFindSessionsCallbackProxy::GetServerName(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPingInMs) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetPingInMs(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSessions) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxResults); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFindSessionsCallbackProxy**)Z_Param__Result=UFindSessionsCallbackProxy::FindSessions(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MaxResults,Z_Param_bUseLAN); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxPlayers) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetMaxPlayers(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPlayers) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetCurrentPlayers(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerName) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFindSessionsCallbackProxy::GetServerName(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPingInMs) \
	{ \
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetPingInMs(Z_Param_Out_Result); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSessions) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxResults); \
		P_GET_UBOOL(Z_Param_bUseLAN); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFindSessionsCallbackProxy**)Z_Param__Result=UFindSessionsCallbackProxy::FindSessions(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MaxResults,Z_Param_bUseLAN); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFindSessionsCallbackProxy(); \
	friend struct Z_Construct_UClass_UFindSessionsCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UFindSessionsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UFindSessionsCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUFindSessionsCallbackProxy(); \
	friend struct Z_Construct_UClass_UFindSessionsCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UFindSessionsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UFindSessionsCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UFindSessionsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindSessionsCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UFindSessionsCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindSessionsCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UFindSessionsCallbackProxy(UFindSessionsCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UFindSessionsCallbackProxy(const UFindSessionsCallbackProxy&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UFindSessionsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UFindSessionsCallbackProxy(UFindSessionsCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UFindSessionsCallbackProxy(const UFindSessionsCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UFindSessionsCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindSessionsCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindSessionsCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_23_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FindSessionsCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UFindSessionsCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
