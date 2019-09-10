// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperFlipbookComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperFlipbookComponent() {}
// Cross Module References
	PAPER2D_API UFunction* Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_Play();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_Reverse();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PAPER2D_API UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_Stop();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event for a non-looping flipbook finishing play\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Event for a non-looping flipbook finishing play" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Paper2D, nullptr, "FlipbookFinishedPlaySignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UPaperFlipbookComponent::StaticRegisterNativesUPaperFlipbookComponent()
	{
		UClass* Class = UPaperFlipbookComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFlipbook", &UPaperFlipbookComponent::execGetFlipbook },
			{ "GetFlipbookFramerate", &UPaperFlipbookComponent::execGetFlipbookFramerate },
			{ "GetFlipbookLength", &UPaperFlipbookComponent::execGetFlipbookLength },
			{ "GetFlipbookLengthInFrames", &UPaperFlipbookComponent::execGetFlipbookLengthInFrames },
			{ "GetPlaybackPosition", &UPaperFlipbookComponent::execGetPlaybackPosition },
			{ "GetPlaybackPositionInFrames", &UPaperFlipbookComponent::execGetPlaybackPositionInFrames },
			{ "GetPlayRate", &UPaperFlipbookComponent::execGetPlayRate },
			{ "IsLooping", &UPaperFlipbookComponent::execIsLooping },
			{ "IsPlaying", &UPaperFlipbookComponent::execIsPlaying },
			{ "IsReversing", &UPaperFlipbookComponent::execIsReversing },
			{ "OnRep_SourceFlipbook", &UPaperFlipbookComponent::execOnRep_SourceFlipbook },
			{ "Play", &UPaperFlipbookComponent::execPlay },
			{ "PlayFromStart", &UPaperFlipbookComponent::execPlayFromStart },
			{ "Reverse", &UPaperFlipbookComponent::execReverse },
			{ "ReverseFromEnd", &UPaperFlipbookComponent::execReverseFromEnd },
			{ "SetFlipbook", &UPaperFlipbookComponent::execSetFlipbook },
			{ "SetLooping", &UPaperFlipbookComponent::execSetLooping },
			{ "SetNewTime", &UPaperFlipbookComponent::execSetNewTime },
			{ "SetPlaybackPosition", &UPaperFlipbookComponent::execSetPlaybackPosition },
			{ "SetPlaybackPositionInFrames", &UPaperFlipbookComponent::execSetPlaybackPositionInFrames },
			{ "SetPlayRate", &UPaperFlipbookComponent::execSetPlayRate },
			{ "SetSpriteColor", &UPaperFlipbookComponent::execSetSpriteColor },
			{ "Stop", &UPaperFlipbookComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics
	{
		struct PaperFlipbookComponent_eventGetFlipbook_Parms
		{
			UPaperFlipbook* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetFlipbook_Parms, ReturnValue), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Gets the flipbook used by this instance. */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Gets the flipbook used by this instance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetFlipbook", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventGetFlipbook_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics
	{
		struct PaperFlipbookComponent_eventGetFlipbookFramerate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetFlipbookFramerate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get the nominal framerate that the flipbook will be played back at (ignoring PlayRate), in frames per second */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get the nominal framerate that the flipbook will be played back at (ignoring PlayRate), in frames per second" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetFlipbookFramerate", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventGetFlipbookFramerate_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics
	{
		struct PaperFlipbookComponent_eventGetFlipbookLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetFlipbookLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get length of the flipbook (in seconds) */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get length of the flipbook (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetFlipbookLength", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventGetFlipbookLength_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics
	{
		struct PaperFlipbookComponent_eventGetFlipbookLengthInFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetFlipbookLengthInFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get length of the flipbook (in frames) */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get length of the flipbook (in frames)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetFlipbookLengthInFrames", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventGetFlipbookLengthInFrames_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics
	{
		struct PaperFlipbookComponent_eventGetPlaybackPosition_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetPlaybackPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get the current playback position (in seconds) of the flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get the current playback position (in seconds) of the flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetPlaybackPosition", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventGetPlaybackPosition_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics
	{
		struct PaperFlipbookComponent_eventGetPlaybackPositionInFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetPlaybackPositionInFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get the current playback position (in frames) of the flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get the current playback position (in frames) of the flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetPlaybackPositionInFrames", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventGetPlaybackPositionInFrames_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics
	{
		struct PaperFlipbookComponent_eventGetPlayRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get the current play rate for this flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get the current play rate for this flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetPlayRate", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventGetPlayRate_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics
	{
		struct PaperFlipbookComponent_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperFlipbookComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventIsLooping_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get whether we are looping or not */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get whether we are looping or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "IsLooping", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventIsLooping_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics
	{
		struct PaperFlipbookComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperFlipbookComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get whether this flipbook is playing or not. */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get whether this flipbook is playing or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics
	{
		struct PaperFlipbookComponent_eventIsReversing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperFlipbookComponent_eventIsReversing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventIsReversing_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get whether we are reversing or not */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get whether we are reversing or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "IsReversing", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventIsReversing_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics
	{
		struct PaperFlipbookComponent_eventOnRep_SourceFlipbook_Parms
		{
			UPaperFlipbook* OldFlipbook;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldFlipbook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::NewProp_OldFlipbook = { "OldFlipbook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventOnRep_SourceFlipbook_Parms, OldFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::NewProp_OldFlipbook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "OnRep_SourceFlipbook", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventOnRep_SourceFlipbook_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Start playback of flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Start playback of flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Start playback of flipbook from the start */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Start playback of flipbook from the start" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "PlayFromStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Start playback of flipbook in reverse */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Start playback of flipbook in reverse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "Reverse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_Reverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Start playback of flipbook in reverse from the end */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Start playback of flipbook in reverse from the end" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "ReverseFromEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics
	{
		struct PaperFlipbookComponent_eventSetFlipbook_Parms
		{
			UPaperFlipbook* NewFlipbook;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewFlipbook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperFlipbookComponent_eventSetFlipbook_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventSetFlipbook_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_NewFlipbook = { "NewFlipbook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetFlipbook_Parms, NewFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_NewFlipbook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Change the flipbook used by this instance (will reset the play time to 0 if it is a new flipbook). */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Change the flipbook used by this instance (will reset the play time to 0 if it is a new flipbook)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetFlipbook", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventSetFlipbook_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics
	{
		struct PaperFlipbookComponent_eventSetLooping_Parms
		{
			bool bNewLooping;
		};
		static void NewProp_bNewLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLooping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit(void* Obj)
	{
		((PaperFlipbookComponent_eventSetLooping_Parms*)Obj)->bNewLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::NewProp_bNewLooping = { "bNewLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventSetLooping_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::NewProp_bNewLooping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** true means we should loop, false means we should not. */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "true means we should loop, false means we should not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetLooping", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventSetLooping_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics
	{
		struct PaperFlipbookComponent_eventSetNewTime_Parms
		{
			float NewTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetNewTime_Parms, NewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::NewProp_NewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Set the new playback position time to use */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Set the new playback position time to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetNewTime", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventSetNewTime_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics
	{
		struct PaperFlipbookComponent_eventSetPlaybackPosition_Parms
		{
			float NewPosition;
			bool bFireEvents;
		};
		static void NewProp_bFireEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEvents;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents_SetBit(void* Obj)
	{
		((PaperFlipbookComponent_eventSetPlaybackPosition_Parms*)Obj)->bFireEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents = { "bFireEvents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventSetPlaybackPosition_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetPlaybackPosition_Parms, NewPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Jump to a position in the flipbook (expressed in seconds). If bFireEvents is true, event functions will fire, otherwise they will not. */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Jump to a position in the flipbook (expressed in seconds). If bFireEvents is true, event functions will fire, otherwise they will not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetPlaybackPosition", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventSetPlaybackPosition_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics
	{
		struct PaperFlipbookComponent_eventSetPlaybackPositionInFrames_Parms
		{
			int32 NewFramePosition;
			bool bFireEvents;
		};
		static void NewProp_bFireEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEvents;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewFramePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_bFireEvents_SetBit(void* Obj)
	{
		((PaperFlipbookComponent_eventSetPlaybackPositionInFrames_Parms*)Obj)->bFireEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_bFireEvents = { "bFireEvents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventSetPlaybackPositionInFrames_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_bFireEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_NewFramePosition = { "NewFramePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetPlaybackPositionInFrames_Parms, NewFramePosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_bFireEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_NewFramePosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Jump to a position in the flipbook (expressed in frames). If bFireEvents is true, event functions will fire, otherwise they will not. */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Jump to a position in the flipbook (expressed in frames). If bFireEvents is true, event functions will fire, otherwise they will not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetPlaybackPositionInFrames", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventSetPlaybackPositionInFrames_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics
	{
		struct PaperFlipbookComponent_eventSetPlayRate_Parms
		{
			float NewRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetPlayRate_Parms, NewRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::NewProp_NewRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Sets the new play rate for this flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Sets the new play rate for this flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetPlayRate", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventSetPlayRate_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics
	{
		struct PaperFlipbookComponent_eventSetSpriteColor_Parms
		{
			FLinearColor NewColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetSpriteColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Set color of the sprite */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Set color of the sprite" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetSpriteColor", nullptr, nullptr, sizeof(PaperFlipbookComponent_eventSetSpriteColor_Parms), Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Stop playback of flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Stop playback of flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister()
	{
		return UPaperFlipbookComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPaperFlipbookComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinishedPlaying_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedBodySetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedFrameIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CachedFrameIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AccumulatedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[];
#endif
		static void NewProp_bPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[];
#endif
		static void NewProp_bReversePlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFlipbook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceFlipbook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperFlipbookComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperFlipbookComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook, "GetFlipbook" }, // 884756846
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate, "GetFlipbookFramerate" }, // 239121159
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength, "GetFlipbookLength" }, // 1271926284
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames, "GetFlipbookLengthInFrames" }, // 2532168130
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition, "GetPlaybackPosition" }, // 4286650520
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames, "GetPlaybackPositionInFrames" }, // 2449978117
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate, "GetPlayRate" }, // 2637191354
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping, "IsLooping" }, // 3080274096
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying, "IsPlaying" }, // 582290648
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing, "IsReversing" }, // 1094111750
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook, "OnRep_SourceFlipbook" }, // 3302021716
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_Play, "Play" }, // 2929715587
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart, "PlayFromStart" }, // 1674335234
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_Reverse, "Reverse" }, // 3404157253
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd, "ReverseFromEnd" }, // 1695373264
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook, "SetFlipbook" }, // 3043073400
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping, "SetLooping" }, // 1939122364
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime, "SetNewTime" }, // 1507782635
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition, "SetPlaybackPosition" }, // 1969684909
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames, "SetPlaybackPositionInFrames" }, // 3143267344
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate, "SetPlayRate" }, // 1078142363
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor, "SetSpriteColor" }, // 2247550922
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_Stop, "Stop" }, // 673972849
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Paper2D" },
		{ "HideCategories", "Trigger" },
		{ "IncludePath", "PaperFlipbookComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_OnFinishedPlaying_MetaData[] = {
		{ "Comment", "/** Event called whenever a non-looping flipbook finishes playing (either reaching the beginning or the end, depending on the play direction) */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Event called whenever a non-looping flipbook finishes playing (either reaching the beginning or the end, depending on the play direction)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_OnFinishedPlaying = { "OnFinishedPlaying", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookComponent, OnFinishedPlaying), Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_OnFinishedPlaying_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_OnFinishedPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedBodySetup_MetaData[] = {
		{ "Comment", "/** The cached body setup */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "The cached body setup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedBodySetup = { "CachedBodySetup", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookComponent, CachedBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedBodySetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedBodySetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SpriteColor_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Vertex color to apply to the frames */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Vertex color to apply to the frames" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SpriteColor = { "SpriteColor", nullptr, (EPropertyFlags)0x0020080200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookComponent, SpriteColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SpriteColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SpriteColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedFrameIndex_MetaData[] = {
		{ "Comment", "/** Last frame index calculated */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Last frame index calculated" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedFrameIndex = { "CachedFrameIndex", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookComponent, CachedFrameIndex), METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedFrameIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedFrameIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_AccumulatedTime_MetaData[] = {
		{ "Comment", "/** Current position in the timeline */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Current position in the timeline" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_AccumulatedTime = { "AccumulatedTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookComponent, AccumulatedTime), METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_AccumulatedTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_AccumulatedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying_MetaData[] = {
		{ "Comment", "/** Are we currently playing (moving Position) */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Are we currently playing (moving Position)" },
	};
#endif
	void Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying_SetBit(void* Obj)
	{
		((UPaperFlipbookComponent*)Obj)->bPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPaperFlipbookComponent), &Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback_MetaData[] = {
		{ "Comment", "/** If playback should move the current position backwards instead of forwards */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "If playback should move the current position backwards instead of forwards" },
	};
#endif
	void Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback_SetBit(void* Obj)
	{
		((UPaperFlipbookComponent*)Obj)->bReversePlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback = { "bReversePlayback", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPaperFlipbookComponent), &Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping_MetaData[] = {
		{ "Comment", "/** Whether the flipbook should loop when it reaches the end, or stop */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Whether the flipbook should loop when it reaches the end, or stop" },
	};
#endif
	void Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UPaperFlipbookComponent*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPaperFlipbookComponent), &Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Current play rate of the flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Current play rate of the flipbook" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookComponent, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_PlayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "// DEPRECATED in 4.5: The material override for this flipbook component (if any); replaced by the Materials array inherited from UMeshComponent\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "DEPRECATED in 4.5: The material override for this flipbook component (if any); replaced by the Materials array inherited from UMeshComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookComponent, Material_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SourceFlipbook_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Flipbook currently being played */" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Flipbook currently being played" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SourceFlipbook = { "SourceFlipbook", "OnRep_SourceFlipbook", (EPropertyFlags)0x0020080100000021, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperFlipbookComponent, SourceFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SourceFlipbook_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SourceFlipbook_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperFlipbookComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_OnFinishedPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedBodySetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SpriteColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedFrameIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_AccumulatedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SourceFlipbook,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperFlipbookComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperFlipbookComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::ClassParams = {
		&UPaperFlipbookComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperFlipbookComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperFlipbookComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperFlipbookComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperFlipbookComponent, 3503040256);
	template<> PAPER2D_API UClass* StaticClass<UPaperFlipbookComponent>()
	{
		return UPaperFlipbookComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperFlipbookComponent(Z_Construct_UClass_UPaperFlipbookComponent, &UPaperFlipbookComponent::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperFlipbookComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperFlipbookComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperFlipbookComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
