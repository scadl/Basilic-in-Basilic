// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UReverbEffect;
struct FSubmixEffectReverbFastSettings;
#ifdef AUDIOMIXER_AudioMixerSubmixEffectReverbFast_generated_h
#error "AudioMixerSubmixEffectReverbFast.generated.h already included, missing '#pragma once' in AudioMixerSubmixEffectReverbFast.h"
#endif
#define AUDIOMIXER_AudioMixerSubmixEffectReverbFast_generated_h

#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectReverbFastSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSubmixEffectReverbFastSettings>();

#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSettingsWithReverbEffect) \
	{ \
		P_GET_OBJECT(UReverbEffect,Z_Param_InReverbEffect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_WetLevel); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DryLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSettingsWithReverbEffect(Z_Param_InReverbEffect,Z_Param_WetLevel,Z_Param_DryLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSettings) \
	{ \
		P_GET_STRUCT_REF(FSubmixEffectReverbFastSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSettingsWithReverbEffect) \
	{ \
		P_GET_OBJECT(UReverbEffect,Z_Param_InReverbEffect); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_WetLevel); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DryLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSettingsWithReverbEffect(Z_Param_InReverbEffect,Z_Param_WetLevel,Z_Param_DryLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSettings) \
	{ \
		P_GET_STRUCT_REF(FSubmixEffectReverbFastSettings,Z_Param_Out_InSettings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSettings(Z_Param_Out_InSettings); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectReverbFastPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectReverbFastPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectReverbFastPreset)


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixEffectReverbFastPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectReverbFastPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectReverbFastPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectReverbFastPreset)


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectReverbFastPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectReverbFastPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectReverbFastPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectReverbFastPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectReverbFastPreset(USubmixEffectReverbFastPreset&&); \
	NO_API USubmixEffectReverbFastPreset(const USubmixEffectReverbFastPreset&); \
public:


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectReverbFastPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectReverbFastPreset(USubmixEffectReverbFastPreset&&); \
	NO_API USubmixEffectReverbFastPreset(const USubmixEffectReverbFastPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectReverbFastPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectReverbFastPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectReverbFastPreset)


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_119_PROLOG
#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_RPC_WRAPPERS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_INCLASS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class USubmixEffectReverbFastPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectReverbFast_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
