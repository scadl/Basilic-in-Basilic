// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULiveLinkMessageBusFinder;
struct FProviderPollResult;
struct FLiveLinkSourceHandle;
class UObject;
struct FLatentActionInfo;
#ifdef LIVELINK_LiveLinkMessageBusFinder_generated_h
#error "LiveLinkMessageBusFinder.generated.h already included, missing '#pragma once' in LiveLinkMessageBusFinder.h"
#endif
#define LIVELINK_LiveLinkMessageBusFinder_generated_h

#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProviderPollResult_Statics; \
	LIVELINK_API static class UScriptStruct* StaticStruct();


template<> LIVELINK_API UScriptStruct* StaticStruct<struct FProviderPollResult>();

#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstructMessageBusFinder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULiveLinkMessageBusFinder**)Z_Param__Result=ULiveLinkMessageBusFinder::ConstructMessageBusFinder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectToProvider) \
	{ \
		P_GET_STRUCT_REF(FProviderPollResult,Z_Param_Out_Provider); \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkMessageBusFinder::ConnectToProvider(Z_Param_Out_Provider,Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableProviders) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_TARRAY_REF(FProviderPollResult,Z_Param_Out_AvailableProviders); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableProviders(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Duration,Z_Param_Out_AvailableProviders); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstructMessageBusFinder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULiveLinkMessageBusFinder**)Z_Param__Result=ULiveLinkMessageBusFinder::ConstructMessageBusFinder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConnectToProvider) \
	{ \
		P_GET_STRUCT_REF(FProviderPollResult,Z_Param_Out_Provider); \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULiveLinkMessageBusFinder::ConnectToProvider(Z_Param_Out_Provider,Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableProviders) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_TARRAY_REF(FProviderPollResult,Z_Param_Out_AvailableProviders); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableProviders(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Duration,Z_Param_Out_AvailableProviders); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkMessageBusFinder(); \
	friend struct Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkMessageBusFinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkMessageBusFinder)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkMessageBusFinder(); \
	friend struct Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkMessageBusFinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkMessageBusFinder)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkMessageBusFinder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkMessageBusFinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkMessageBusFinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMessageBusFinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkMessageBusFinder(ULiveLinkMessageBusFinder&&); \
	NO_API ULiveLinkMessageBusFinder(const ULiveLinkMessageBusFinder&); \
public:


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkMessageBusFinder(ULiveLinkMessageBusFinder&&); \
	NO_API ULiveLinkMessageBusFinder(const ULiveLinkMessageBusFinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkMessageBusFinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMessageBusFinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkMessageBusFinder)


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_44_PROLOG
#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_RPC_WRAPPERS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_INCLASS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkMessageBusFinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
