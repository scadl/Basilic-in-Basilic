// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetSerialization_generated_h
#error "NetSerialization.generated.h already included, missing '#pragma once' in NetSerialization.h"
#endif
#define ENGINE_NetSerialization_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h_2026_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVector_NetQuantizeNormal_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FVector Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVector_NetQuantizeNormal>();

#define Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h_1982_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVector_NetQuantize100_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FVector Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVector_NetQuantize100>();

#define Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h_1936_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVector_NetQuantize10_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FVector Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVector_NetQuantize10>();

#define Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h_1890_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVector_NetQuantize_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FVector Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVector_NetQuantize>();

#define Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h_416_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFastArraySerializer_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__DeltaFlags() { return STRUCT_OFFSET(FFastArraySerializer, DeltaFlags); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFastArraySerializer>();

#define Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h_306_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFastArraySerializerItem_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFastArraySerializerItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_NetSerialization_h


#define FOREACH_ENUM_EFASTARRAYSERIALIZERDELTAFLAGS(op) \
	op(EFastArraySerializerDeltaFlags::None) \
	op(EFastArraySerializerDeltaFlags::HasBeenSerialized) \
	op(EFastArraySerializerDeltaFlags::HasDeltaBeenRequested) \
	op(EFastArraySerializerDeltaFlags::IsUsingDeltaSerialization) 

enum class EFastArraySerializerDeltaFlags : uint8;
template<> ENGINE_API UEnum* StaticEnum<EFastArraySerializerDeltaFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
