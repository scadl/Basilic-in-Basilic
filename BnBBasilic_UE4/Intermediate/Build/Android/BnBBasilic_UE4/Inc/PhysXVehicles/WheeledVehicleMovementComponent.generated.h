// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNavAvoidanceMask;
#ifdef PHYSXVEHICLES_WheeledVehicleMovementComponent_generated_h
#error "WheeledVehicleMovementComponent.generated.h already included, missing '#pragma once' in WheeledVehicleMovementComponent.h"
#endif
#define PHYSXVEHICLES_WheeledVehicleMovementComponent_generated_h

#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleInputRate_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleInputRate>();

#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<struct FReplicatedVehicleState>();

#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWheelSetup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<struct FWheelSetup>();

#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_RPC_WRAPPERS \
	virtual bool ServerUpdateState_Validate(float , float , float , float , int32 ); \
	virtual void ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear); \
 \
	DECLARE_FUNCTION(execServerUpdateState) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSteeringInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InThrottleInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBrakeInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InHandbrakeInput); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentGear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateState_Validate(Z_Param_InSteeringInput,Z_Param_InThrottleInput,Z_Param_InBrakeInput,Z_Param_InHandbrakeInput,Z_Param_CurrentGear)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateState_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateState_Implementation(Z_Param_InSteeringInput,Z_Param_InThrottleInput,Z_Param_InBrakeInput,Z_Param_InHandbrakeInput,Z_Param_CurrentGear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToIgnoreMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToIgnore(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToAvoidMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToAvoid(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceGroupMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceGroup(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUseAutoGears) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetUseAutoGears(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetGear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTargetGear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentGear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineMaxRotationSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEngineMaxRotationSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineRotationSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEngineRotationSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetForwardSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseAutoGears) \
	{ \
		P_GET_UBOOL(Z_Param_bUseAuto); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseAutoGears(Z_Param_bUseAuto); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetGear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GearNum); \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetGear(Z_Param_GearNum,Z_Param_bImmediate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGearDown) \
	{ \
		P_GET_UBOOL(Z_Param_bNewGearDown); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGearDown(Z_Param_bNewGearDown); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGearUp) \
	{ \
		P_GET_UBOOL(Z_Param_bNewGearUp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGearUp(Z_Param_bNewGearUp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHandbrakeInput) \
	{ \
		P_GET_UBOOL(Z_Param_bNewHandbrake); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHandbrakeInput(Z_Param_bNewHandbrake); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSteeringInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Steering); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSteeringInput(Z_Param_Steering); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrakeInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Brake); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrakeInput(Z_Param_Brake); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrottleInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThrottleInput(Z_Param_Throttle); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateState_Validate(float , float , float , float , int32 ); \
	virtual void ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear); \
 \
	DECLARE_FUNCTION(execServerUpdateState) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InSteeringInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InThrottleInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBrakeInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InHandbrakeInput); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrentGear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerUpdateState_Validate(Z_Param_InSteeringInput,Z_Param_InThrottleInput,Z_Param_InBrakeInput,Z_Param_InHandbrakeInput,Z_Param_CurrentGear)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerUpdateState_Validate")); \
			return; \
		} \
		P_THIS->ServerUpdateState_Implementation(Z_Param_InSteeringInput,Z_Param_InThrottleInput,Z_Param_InBrakeInput,Z_Param_InHandbrakeInput,Z_Param_CurrentGear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceEnabled(Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToIgnoreMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToIgnore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToIgnore(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToAvoidMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGroupsToAvoid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGroupsToAvoid(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask) \
	{ \
		P_GET_STRUCT_REF(FNavAvoidanceMask,Z_Param_Out_GroupMask); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceGroupMask(Z_Param_Out_GroupMask); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAvoidanceGroup) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GroupFlags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAvoidanceGroup(Z_Param_GroupFlags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUseAutoGears) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetUseAutoGears(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetGear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTargetGear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentGear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineMaxRotationSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEngineMaxRotationSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEngineRotationSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEngineRotationSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetForwardSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUseAutoGears) \
	{ \
		P_GET_UBOOL(Z_Param_bUseAuto); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUseAutoGears(Z_Param_bUseAuto); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetGear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GearNum); \
		P_GET_UBOOL(Z_Param_bImmediate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetGear(Z_Param_GearNum,Z_Param_bImmediate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGearDown) \
	{ \
		P_GET_UBOOL(Z_Param_bNewGearDown); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGearDown(Z_Param_bNewGearDown); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGearUp) \
	{ \
		P_GET_UBOOL(Z_Param_bNewGearUp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGearUp(Z_Param_bNewGearUp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHandbrakeInput) \
	{ \
		P_GET_UBOOL(Z_Param_bNewHandbrake); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHandbrakeInput(Z_Param_bNewHandbrake); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSteeringInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Steering); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSteeringInput(Z_Param_Steering); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBrakeInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Brake); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBrakeInput(Z_Param_Brake); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThrottleInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Throttle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThrottleInput(Z_Param_Throttle); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_EVENT_PARMS \
	struct WheeledVehicleMovementComponent_eventServerUpdateState_Parms \
	{ \
		float InSteeringInput; \
		float InThrottleInput; \
		float InBrakeInput; \
		float InHandbrakeInput; \
		int32 CurrentGear; \
	};


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_CALLBACK_WRAPPERS
#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWheeledVehicleMovementComponent, NO_API)


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWheeledVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UWheeledVehicleMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysXVehicles"), NO_API) \
	DECLARE_SERIALIZER(UWheeledVehicleMovementComponent) \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UWheeledVehicleMovementComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_INCLASS \
private: \
	static void StaticRegisterNativesUWheeledVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UWheeledVehicleMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysXVehicles"), NO_API) \
	DECLARE_SERIALIZER(UWheeledVehicleMovementComponent) \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UWheeledVehicleMovementComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWheeledVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWheeledVehicleMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWheeledVehicleMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWheeledVehicleMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWheeledVehicleMovementComponent(UWheeledVehicleMovementComponent&&); \
	NO_API UWheeledVehicleMovementComponent(const UWheeledVehicleMovementComponent&); \
public:


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWheeledVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWheeledVehicleMovementComponent(UWheeledVehicleMovementComponent&&); \
	NO_API UWheeledVehicleMovementComponent(const UWheeledVehicleMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWheeledVehicleMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWheeledVehicleMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWheeledVehicleMovementComponent)


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedState() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, ReplicatedState); } \
	FORCEINLINE static uint32 __PPO__RawSteeringInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, RawSteeringInput); } \
	FORCEINLINE static uint32 __PPO__RawThrottleInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, RawThrottleInput); } \
	FORCEINLINE static uint32 __PPO__RawBrakeInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, RawBrakeInput); } \
	FORCEINLINE static uint32 __PPO__SteeringInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, SteeringInput); } \
	FORCEINLINE static uint32 __PPO__ThrottleInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, ThrottleInput); } \
	FORCEINLINE static uint32 __PPO__BrakeInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, BrakeInput); } \
	FORCEINLINE static uint32 __PPO__HandbrakeInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, HandbrakeInput); } \
	FORCEINLINE static uint32 __PPO__IdleBrakeInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, IdleBrakeInput); } \
	FORCEINLINE static uint32 __PPO__StopThreshold() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, StopThreshold); } \
	FORCEINLINE static uint32 __PPO__WrongDirectionThreshold() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, WrongDirectionThreshold); } \
	FORCEINLINE static uint32 __PPO__ThrottleInputRate() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, ThrottleInputRate); } \
	FORCEINLINE static uint32 __PPO__BrakeInputRate() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, BrakeInputRate); } \
	FORCEINLINE static uint32 __PPO__HandbrakeInputRate() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, HandbrakeInputRate); } \
	FORCEINLINE static uint32 __PPO__SteeringInputRate() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, SteeringInputRate); } \
	FORCEINLINE static uint32 __PPO__OverrideController() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, OverrideController); }


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_178_PROLOG \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_EVENT_PARMS


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_RPC_WRAPPERS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_INCLASS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WheeledVehicleMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSXVEHICLES_API UClass* StaticClass<class UWheeledVehicleMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
