// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperFlipbook;
struct FLinearColor;
#ifdef PAPER2D_PaperFlipbookComponent_generated_h
#error "PaperFlipbookComponent.generated.h already included, missing '#pragma once' in PaperFlipbookComponent.h"
#endif
#define PAPER2D_PaperFlipbookComponent_generated_h

#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_19_DELEGATE \
static inline void FFlipbookFinishedPlaySignature_DelegateWrapper(const FMulticastScriptDelegate& FlipbookFinishedPlaySignature) \
{ \
	FlipbookFinishedPlaySignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_SourceFlipbook) \
	{ \
		P_GET_OBJECT(UPaperFlipbook,Z_Param_OldFlipbook); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SourceFlipbook(Z_Param_OldFlipbook); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlipbookFramerate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFlipbookFramerate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlipbookLengthInFrames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFlipbookLengthInFrames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlipbookLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFlipbookLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNewTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNewTime(Z_Param_NewTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlayRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayRate(Z_Param_NewRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLooping(Z_Param_bNewLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_GET_UBOOL(Z_Param_bFireEvents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackPosition(Z_Param_NewPosition,Z_Param_bFireEvents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackPositionInFrames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPlaybackPositionInFrames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackPositionInFrames) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFramePosition); \
		P_GET_UBOOL(Z_Param_bFireEvents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackPositionInFrames(Z_Param_NewFramePosition,Z_Param_bFireEvents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReversing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReversing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverseFromEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReverseFromEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reverse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFromStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFromStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpriteColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpriteColor(Z_Param_NewColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlipbook) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPaperFlipbook**)Z_Param__Result=P_THIS->GetFlipbook(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFlipbook) \
	{ \
		P_GET_OBJECT(UPaperFlipbook,Z_Param_NewFlipbook); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetFlipbook(Z_Param_NewFlipbook); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_SourceFlipbook) \
	{ \
		P_GET_OBJECT(UPaperFlipbook,Z_Param_OldFlipbook); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SourceFlipbook(Z_Param_OldFlipbook); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlipbookFramerate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFlipbookFramerate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlipbookLengthInFrames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFlipbookLengthInFrames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlipbookLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFlipbookLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNewTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNewTime(Z_Param_NewTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlayRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayRate(Z_Param_NewRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLooping) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLooping(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLooping) \
	{ \
		P_GET_UBOOL(Z_Param_bNewLooping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLooping(Z_Param_bNewLooping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPosition); \
		P_GET_UBOOL(Z_Param_bFireEvents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackPosition(Z_Param_NewPosition,Z_Param_bFireEvents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackPositionInFrames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetPlaybackPositionInFrames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackPositionInFrames) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFramePosition); \
		P_GET_UBOOL(Z_Param_bFireEvents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackPositionInFrames(Z_Param_NewFramePosition,Z_Param_bFireEvents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReversing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReversing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverseFromEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReverseFromEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReverse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Reverse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFromStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFromStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSpriteColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpriteColor(Z_Param_NewColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlipbook) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPaperFlipbook**)Z_Param__Result=P_THIS->GetFlipbook(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFlipbook) \
	{ \
		P_GET_OBJECT(UPaperFlipbook,Z_Param_NewFlipbook); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetFlipbook(Z_Param_NewFlipbook); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperFlipbookComponent, NO_API)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperFlipbookComponent(); \
	friend struct Z_Construct_UClass_UPaperFlipbookComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperFlipbookComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperFlipbookComponent) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ARCHIVESERIALIZER \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUPaperFlipbookComponent(); \
	friend struct Z_Construct_UClass_UPaperFlipbookComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperFlipbookComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperFlipbookComponent) \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ARCHIVESERIALIZER \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperFlipbookComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperFlipbookComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperFlipbookComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperFlipbookComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperFlipbookComponent(UPaperFlipbookComponent&&); \
	NO_API UPaperFlipbookComponent(const UPaperFlipbookComponent&); \
public:


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperFlipbookComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperFlipbookComponent(UPaperFlipbookComponent&&); \
	NO_API UPaperFlipbookComponent(const UPaperFlipbookComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperFlipbookComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperFlipbookComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperFlipbookComponent)


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SourceFlipbook() { return STRUCT_OFFSET(UPaperFlipbookComponent, SourceFlipbook); } \
	FORCEINLINE static uint32 __PPO__Material_DEPRECATED() { return STRUCT_OFFSET(UPaperFlipbookComponent, Material_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__PlayRate() { return STRUCT_OFFSET(UPaperFlipbookComponent, PlayRate); } \
	FORCEINLINE static uint32 __PPO__AccumulatedTime() { return STRUCT_OFFSET(UPaperFlipbookComponent, AccumulatedTime); } \
	FORCEINLINE static uint32 __PPO__CachedFrameIndex() { return STRUCT_OFFSET(UPaperFlipbookComponent, CachedFrameIndex); } \
	FORCEINLINE static uint32 __PPO__SpriteColor() { return STRUCT_OFFSET(UPaperFlipbookComponent, SpriteColor); } \
	FORCEINLINE static uint32 __PPO__CachedBodySetup() { return STRUCT_OFFSET(UPaperFlipbookComponent, CachedBodySetup); }


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_21_PROLOG
#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_RPC_WRAPPERS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_INCLASS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperFlipbookComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperFlipbookComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
