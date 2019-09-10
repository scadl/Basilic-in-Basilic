// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMUTILS_IpNetDriver_generated_h
#error "IpNetDriver.generated.h already included, missing '#pragma once' in IpNetDriver.h"
#endif
#define ONLINESUBSYSTEMUTILS_IpNetDriver_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_RPC_WRAPPERS
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIpNetDriver(); \
	friend struct Z_Construct_UClass_UIpNetDriver_Statics; \
public: \
	DECLARE_CLASS(UIpNetDriver, UNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UIpNetDriver)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUIpNetDriver(); \
	friend struct Z_Construct_UClass_UIpNetDriver_Statics; \
public: \
	DECLARE_CLASS(UIpNetDriver, UNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UIpNetDriver)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIpNetDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIpNetDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIpNetDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIpNetDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIpNetDriver(UIpNetDriver&&); \
	NO_API UIpNetDriver(const UIpNetDriver&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIpNetDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIpNetDriver(UIpNetDriver&&); \
	NO_API UIpNetDriver(const UIpNetDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIpNetDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIpNetDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIpNetDriver)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ServerDesiredSocketReceiveBufferBytes() { return STRUCT_OFFSET(UIpNetDriver, ServerDesiredSocketReceiveBufferBytes); } \
	FORCEINLINE static uint32 __PPO__ServerDesiredSocketSendBufferBytes() { return STRUCT_OFFSET(UIpNetDriver, ServerDesiredSocketSendBufferBytes); } \
	FORCEINLINE static uint32 __PPO__ClientDesiredSocketReceiveBufferBytes() { return STRUCT_OFFSET(UIpNetDriver, ClientDesiredSocketReceiveBufferBytes); } \
	FORCEINLINE static uint32 __PPO__ClientDesiredSocketSendBufferBytes() { return STRUCT_OFFSET(UIpNetDriver, ClientDesiredSocketSendBufferBytes); } \
	FORCEINLINE static uint32 __PPO__MaxSecondsInReceive() { return STRUCT_OFFSET(UIpNetDriver, MaxSecondsInReceive); } \
	FORCEINLINE static uint32 __PPO__NbPacketsBetweenReceiveTimeTest() { return STRUCT_OFFSET(UIpNetDriver, NbPacketsBetweenReceiveTimeTest); }


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_23_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class IpNetDriver."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UIpNetDriver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_IpNetDriver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
