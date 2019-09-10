// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Widgets/Text/ISlateEditableTextWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISlateEditableTextWidget() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static UEnum* EVirtualKeyboardDismissAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, Z_Construct_UPackage__Script_Slate(), TEXT("EVirtualKeyboardDismissAction"));
		}
		return Singleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EVirtualKeyboardDismissAction>()
	{
		return EVirtualKeyboardDismissAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVirtualKeyboardDismissAction(EVirtualKeyboardDismissAction_StaticEnum, TEXT("/Script/Slate"), TEXT("EVirtualKeyboardDismissAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Hash() { return 804527348U; }
	UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVirtualKeyboardDismissAction"), 0, Get_Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVirtualKeyboardDismissAction::TextChangeOnDismiss", (int64)EVirtualKeyboardDismissAction::TextChangeOnDismiss },
				{ "EVirtualKeyboardDismissAction::TextCommitOnAccept", (int64)EVirtualKeyboardDismissAction::TextCommitOnAccept },
				{ "EVirtualKeyboardDismissAction::TextCommitOnDismiss", (int64)EVirtualKeyboardDismissAction::TextCommitOnDismiss },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Widgets/Text/ISlateEditableTextWidget.h" },
				{ "TextChangeOnDismiss.Comment", "/** Sends a text changed message when the virtual keyboard is dismissed by the user. */" },
				{ "TextChangeOnDismiss.Name", "EVirtualKeyboardDismissAction::TextChangeOnDismiss" },
				{ "TextChangeOnDismiss.ToolTip", "Sends a text changed message when the virtual keyboard is dismissed by the user." },
				{ "TextCommitOnAccept.Comment", "/** Send a text commit message if the user dismisses the keyboard by accepting text. Send a text changed message if the user cancels the virtual keyboard. */" },
				{ "TextCommitOnAccept.Name", "EVirtualKeyboardDismissAction::TextCommitOnAccept" },
				{ "TextCommitOnAccept.ToolTip", "Send a text commit message if the user dismisses the keyboard by accepting text. Send a text changed message if the user cancels the virtual keyboard." },
				{ "TextCommitOnDismiss.Comment", "/** Send a text commit message when the virtual keyboard is dismissed by the user. */" },
				{ "TextCommitOnDismiss.Name", "EVirtualKeyboardDismissAction::TextCommitOnDismiss" },
				{ "TextCommitOnDismiss.ToolTip", "Send a text commit message when the virtual keyboard is dismissed by the user." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				nullptr,
				"EVirtualKeyboardDismissAction",
				"EVirtualKeyboardDismissAction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
