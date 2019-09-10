// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URichTextBlockDecorator;
class UDataTable;
struct FTextBlockStyle;
struct FSlateBrush;
struct FSlateFontInfo;
struct FVector2D;
struct FLinearColor;
struct FSlateColor;
#ifdef UMG_RichTextBlock_generated_h
#error "RichTextBlock.generated.h already included, missing '#pragma once' in RichTextBlock.h"
#endif
#define UMG_RichTextBlock_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRichTextStyleRow_Statics; \
	UMG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> UMG_API UScriptStruct* StaticStruct<struct FRichTextStyleRow>();

#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDecoratorByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DecoratorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URichTextBlockDecorator**)Z_Param__Result=P_THIS->GetDecoratorByClass(Z_Param_DecoratorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextStyleSet) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_NewTextStyleSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextStyleSet(Z_Param_NewTextStyleSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllDefaultStyleOverrides) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllDefaultStyleOverrides(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultTextStyle) \
	{ \
		P_GET_STRUCT_REF(FTextBlockStyle,Z_Param_Out_InDefaultTextStyle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultTextStyle(Z_Param_Out_InDefaultTextStyle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoWrapText) \
	{ \
		P_GET_UBOOL(Z_Param_InAutoTextWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoWrapText(Z_Param_InAutoTextWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinDesiredWidth(Z_Param_InMinDesiredWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetJustification) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InJustification); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultStrikeBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InStrikeBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultStrikeBrush(Z_Param_Out_InStrikeBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultFont) \
	{ \
		P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultFont(Z_Param_InFontInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultShadowOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultShadowOffset(Z_Param_InShadowOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultShadowColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultColorAndOpacity) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDecoratorByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_DecoratorClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URichTextBlockDecorator**)Z_Param__Result=P_THIS->GetDecoratorByClass(Z_Param_DecoratorClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextStyleSet) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_NewTextStyleSet); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextStyleSet(Z_Param_NewTextStyleSet); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetText(Z_Param_Out_InText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllDefaultStyleOverrides) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllDefaultStyleOverrides(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultTextStyle) \
	{ \
		P_GET_STRUCT_REF(FTextBlockStyle,Z_Param_Out_InDefaultTextStyle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultTextStyle(Z_Param_Out_InDefaultTextStyle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAutoWrapText) \
	{ \
		P_GET_UBOOL(Z_Param_InAutoTextWrap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAutoWrapText(Z_Param_InAutoTextWrap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMinDesiredWidth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMinDesiredWidth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMinDesiredWidth(Z_Param_InMinDesiredWidth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetJustification) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InJustification); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultStrikeBrush) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InStrikeBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultStrikeBrush(Z_Param_Out_InStrikeBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultFont) \
	{ \
		P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultFont(Z_Param_InFontInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultShadowOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultShadowOffset(Z_Param_InShadowOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultShadowColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultColorAndOpacity) \
	{ \
		P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultColorAndOpacity(Z_Param_InColorAndOpacity); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURichTextBlock(); \
	friend struct Z_Construct_UClass_URichTextBlock_Statics; \
public: \
	DECLARE_CLASS(URichTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URichTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_INCLASS \
private: \
	static void StaticRegisterNativesURichTextBlock(); \
	friend struct Z_Construct_UClass_URichTextBlock_Statics; \
public: \
	DECLARE_CLASS(URichTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URichTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URichTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichTextBlock(URichTextBlock&&); \
	NO_API URichTextBlock(const URichTextBlock&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichTextBlock(URichTextBlock&&); \
	NO_API URichTextBlock(const URichTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextBlock)


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Text() { return STRUCT_OFFSET(URichTextBlock, Text); } \
	FORCEINLINE static uint32 __PPO__TextStyleSet() { return STRUCT_OFFSET(URichTextBlock, TextStyleSet); } \
	FORCEINLINE static uint32 __PPO__DecoratorClasses() { return STRUCT_OFFSET(URichTextBlock, DecoratorClasses); } \
	FORCEINLINE static uint32 __PPO__bOverrideDefaultStyle() { return STRUCT_OFFSET(URichTextBlock, bOverrideDefaultStyle); } \
	FORCEINLINE static uint32 __PPO__DefaultTextStyleOverride() { return STRUCT_OFFSET(URichTextBlock, DefaultTextStyleOverride); } \
	FORCEINLINE static uint32 __PPO__MinDesiredWidth() { return STRUCT_OFFSET(URichTextBlock, MinDesiredWidth); } \
	FORCEINLINE static uint32 __PPO__InstanceDecorators() { return STRUCT_OFFSET(URichTextBlock, InstanceDecorators); }


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_35_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class URichTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
