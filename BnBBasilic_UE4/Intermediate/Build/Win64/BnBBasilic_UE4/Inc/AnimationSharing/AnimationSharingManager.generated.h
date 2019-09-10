// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USkeleton;
class UObject;
class UAnimationSharingSetup;
class UAnimationSharingManager;
#ifdef ANIMATIONSHARING_AnimationSharingManager_generated_h
#error "AnimationSharingManager.generated.h already included, missing '#pragma once' in AnimationSharingManager.h"
#endif
#define ANIMATIONSHARING_AnimationSharingManager_generated_h

#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_443_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<struct FTickAnimationSharingFunction>();

#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_RPC_WRAPPERS
#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSharingInstance(); \
	friend struct Z_Construct_UClass_UAnimSharingInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSharingInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimSharingInstance)


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSharingInstance(); \
	friend struct Z_Construct_UClass_UAnimSharingInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSharingInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimSharingInstance)


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSharingInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSharingInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSharingInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSharingInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSharingInstance(UAnimSharingInstance&&); \
	NO_API UAnimSharingInstance(const UAnimSharingInstance&); \
public:


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSharingInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSharingInstance(UAnimSharingInstance&&); \
	NO_API UAnimSharingInstance(const UAnimSharingInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSharingInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSharingInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSharingInstance)


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_267_PROLOG
#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_RPC_WRAPPERS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_INCLASS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_270_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONSHARING_API UClass* StaticClass<class UAnimSharingInstance>();

#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimationSharingEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationSharingManager::AnimationSharingEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterActorWithSkeletonBP) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_GET_OBJECT(USkeleton,Z_Param_SharingSkeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterActorWithSkeletonBP(Z_Param_InActor,Z_Param_SharingSkeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAnimationSharingManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UAnimationSharingSetup,Z_Param_Setup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationSharingManager::CreateAnimationSharingManager(Z_Param_WorldContextObject,Z_Param_Setup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationSharingManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimationSharingManager**)Z_Param__Result=UAnimationSharingManager::GetAnimationSharingManager(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimationSharingEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationSharingManager::AnimationSharingEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterActorWithSkeletonBP) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_GET_OBJECT(USkeleton,Z_Param_SharingSkeleton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterActorWithSkeletonBP(Z_Param_InActor,Z_Param_SharingSkeleton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateAnimationSharingManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UAnimationSharingSetup,Z_Param_Setup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAnimationSharingManager::CreateAnimationSharingManager(Z_Param_WorldContextObject,Z_Param_Setup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnimationSharingManager) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimationSharingManager**)Z_Param__Result=UAnimationSharingManager::GetAnimationSharingManager(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSharingManager(); \
	friend struct Z_Construct_UClass_UAnimationSharingManager_Statics; \
public: \
	DECLARE_CLASS(UAnimationSharingManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSharingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationSharingManager(); \
	friend struct Z_Construct_UClass_UAnimationSharingManager_Statics; \
public: \
	DECLARE_CLASS(UAnimationSharingManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSharingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSharingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSharingManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSharingManager(UAnimationSharingManager&&); \
	NO_API UAnimationSharingManager(const UAnimationSharingManager&); \
public:


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSharingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSharingManager(UAnimationSharingManager&&); \
	NO_API UAnimationSharingManager(const UAnimationSharingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSharingManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingManager)


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Skeletons() { return STRUCT_OFFSET(UAnimationSharingManager, Skeletons); } \
	FORCEINLINE static uint32 __PPO__PerSkeletonData() { return STRUCT_OFFSET(UAnimationSharingManager, PerSkeletonData); }


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_466_PROLOG
#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_RPC_WRAPPERS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_INCLASS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_469_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONSHARING_API UClass* StaticClass<class UAnimationSharingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
