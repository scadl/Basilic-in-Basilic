// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/KismetInputLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetInputLibrary() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESlateGesture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UKismetInputLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetInputLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetKey();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputEvent();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigationAction();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent();
// End Cross Module References
	static UEnum* ESlateGesture_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESlateGesture, Z_Construct_UPackage__Script_Engine(), TEXT("ESlateGesture"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESlateGesture>()
	{
		return ESlateGesture_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESlateGesture(ESlateGesture_StaticEnum, TEXT("/Script/Engine"), TEXT("ESlateGesture"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESlateGesture_Hash() { return 3917263533U; }
	UEnum* Z_Construct_UEnum_Engine_ESlateGesture()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESlateGesture"), 0, Get_Z_Construct_UEnum_Engine_ESlateGesture_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESlateGesture::None", (int64)ESlateGesture::None },
				{ "ESlateGesture::Scroll", (int64)ESlateGesture::Scroll },
				{ "ESlateGesture::Magnify", (int64)ESlateGesture::Magnify },
				{ "ESlateGesture::Swipe", (int64)ESlateGesture::Swipe },
				{ "ESlateGesture::Rotate", (int64)ESlateGesture::Rotate },
				{ "ESlateGesture::LongPress", (int64)ESlateGesture::LongPress },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "LongPress.Name", "ESlateGesture::LongPress" },
				{ "Magnify.Name", "ESlateGesture::Magnify" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
				{ "None.Name", "ESlateGesture::None" },
				{ "Rotate.Name", "ESlateGesture::Rotate" },
				{ "Scroll.Name", "ESlateGesture::Scroll" },
				{ "Swipe.Name", "ESlateGesture::Swipe" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESlateGesture",
				"ESlateGesture",
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
	void UKismetInputLibrary::StaticRegisterNativesUKismetInputLibrary()
	{
		UClass* Class = UKismetInputLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalibrateTilt", &UKismetInputLibrary::execCalibrateTilt },
			{ "EqualEqual_InputChordInputChord", &UKismetInputLibrary::execEqualEqual_InputChordInputChord },
			{ "EqualEqual_KeyKey", &UKismetInputLibrary::execEqualEqual_KeyKey },
			{ "GetAnalogValue", &UKismetInputLibrary::execGetAnalogValue },
			{ "GetKey", &UKismetInputLibrary::execGetKey },
			{ "GetUserIndex", &UKismetInputLibrary::execGetUserIndex },
			{ "InputChord_GetDisplayName", &UKismetInputLibrary::execInputChord_GetDisplayName },
			{ "InputEvent_IsAltDown", &UKismetInputLibrary::execInputEvent_IsAltDown },
			{ "InputEvent_IsCommandDown", &UKismetInputLibrary::execInputEvent_IsCommandDown },
			{ "InputEvent_IsControlDown", &UKismetInputLibrary::execInputEvent_IsControlDown },
			{ "InputEvent_IsLeftAltDown", &UKismetInputLibrary::execInputEvent_IsLeftAltDown },
			{ "InputEvent_IsLeftCommandDown", &UKismetInputLibrary::execInputEvent_IsLeftCommandDown },
			{ "InputEvent_IsLeftControlDown", &UKismetInputLibrary::execInputEvent_IsLeftControlDown },
			{ "InputEvent_IsLeftShiftDown", &UKismetInputLibrary::execInputEvent_IsLeftShiftDown },
			{ "InputEvent_IsRepeat", &UKismetInputLibrary::execInputEvent_IsRepeat },
			{ "InputEvent_IsRightAltDown", &UKismetInputLibrary::execInputEvent_IsRightAltDown },
			{ "InputEvent_IsRightCommandDown", &UKismetInputLibrary::execInputEvent_IsRightCommandDown },
			{ "InputEvent_IsRightControlDown", &UKismetInputLibrary::execInputEvent_IsRightControlDown },
			{ "InputEvent_IsRightShiftDown", &UKismetInputLibrary::execInputEvent_IsRightShiftDown },
			{ "InputEvent_IsShiftDown", &UKismetInputLibrary::execInputEvent_IsShiftDown },
			{ "Key_GetDisplayName", &UKismetInputLibrary::execKey_GetDisplayName },
			{ "Key_GetNavigationAction", &UKismetInputLibrary::execKey_GetNavigationAction },
			{ "Key_GetNavigationDirectionFromAnalog", &UKismetInputLibrary::execKey_GetNavigationDirectionFromAnalog },
			{ "Key_GetNavigationDirectionFromKey", &UKismetInputLibrary::execKey_GetNavigationDirectionFromKey },
			{ "Key_IsFloatAxis", &UKismetInputLibrary::execKey_IsFloatAxis },
			{ "Key_IsGamepadKey", &UKismetInputLibrary::execKey_IsGamepadKey },
			{ "Key_IsKeyboardKey", &UKismetInputLibrary::execKey_IsKeyboardKey },
			{ "Key_IsModifierKey", &UKismetInputLibrary::execKey_IsModifierKey },
			{ "Key_IsMouseButton", &UKismetInputLibrary::execKey_IsMouseButton },
			{ "Key_IsValid", &UKismetInputLibrary::execKey_IsValid },
			{ "Key_IsVectorAxis", &UKismetInputLibrary::execKey_IsVectorAxis },
			{ "PointerEvent_GetCursorDelta", &UKismetInputLibrary::execPointerEvent_GetCursorDelta },
			{ "PointerEvent_GetEffectingButton", &UKismetInputLibrary::execPointerEvent_GetEffectingButton },
			{ "PointerEvent_GetGestureDelta", &UKismetInputLibrary::execPointerEvent_GetGestureDelta },
			{ "PointerEvent_GetGestureType", &UKismetInputLibrary::execPointerEvent_GetGestureType },
			{ "PointerEvent_GetLastScreenSpacePosition", &UKismetInputLibrary::execPointerEvent_GetLastScreenSpacePosition },
			{ "PointerEvent_GetPointerIndex", &UKismetInputLibrary::execPointerEvent_GetPointerIndex },
			{ "PointerEvent_GetScreenSpacePosition", &UKismetInputLibrary::execPointerEvent_GetScreenSpacePosition },
			{ "PointerEvent_GetTouchpadIndex", &UKismetInputLibrary::execPointerEvent_GetTouchpadIndex },
			{ "PointerEvent_GetUserIndex", &UKismetInputLibrary::execPointerEvent_GetUserIndex },
			{ "PointerEvent_GetWheelDelta", &UKismetInputLibrary::execPointerEvent_GetWheelDelta },
			{ "PointerEvent_IsMouseButtonDown", &UKismetInputLibrary::execPointerEvent_IsMouseButtonDown },
			{ "PointerEvent_IsTouchEvent", &UKismetInputLibrary::execPointerEvent_IsTouchEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Calibrate the tilt for the input device */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Calibrate the tilt for the input device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "CalibrateTilt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics
	{
		struct KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms
		{
			FInputChord A;
			FInputChord B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms), &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms, B), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms, A), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/**\n\x09* Test if the input chords are equal (A == B)\n\x09* @param A - The chord to compare against\n\x09* @param B - The chord to compare\n\x09* Returns true if the chords are equal, false otherwise\n\x09*/" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (Input Chord)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Test if the input chords are equal (A == B)\n@param A - The chord to compare against\n@param B - The chord to compare\nReturns true if the chords are equal, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "EqualEqual_InputChordInputChord", nullptr, nullptr, sizeof(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms), Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics
	{
		struct KismetInputLibrary_eventEqualEqual_KeyKey_Parms
		{
			FKey A;
			FKey B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventEqualEqual_KeyKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventEqualEqual_KeyKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_KeyKey_Parms, B), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_KeyKey_Parms, A), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/**\n\x09 * Test if the input key are equal (A == B)\n\x09 * @param A - The key to compare against\n\x09 * @param B - The key to compare\n\x09 * Returns true if the key are equal, false otherwise\n\x09 */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (Key)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Test if the input key are equal (A == B)\n@param A - The key to compare against\n@param B - The key to compare\nReturns true if the key are equal, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "EqualEqual_KeyKey", nullptr, nullptr, sizeof(KismetInputLibrary_eventEqualEqual_KeyKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics
	{
		struct KismetInputLibrary_eventGetAnalogValue_Parms
		{
			FAnalogInputEvent Input;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetAnalogValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetAnalogValue_Parms, Input), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|FAnalogInputEvent" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "GetAnalogValue", nullptr, nullptr, sizeof(KismetInputLibrary_eventGetAnalogValue_Parms), Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics
	{
		struct KismetInputLibrary_eventGetKey_Parms
		{
			FKeyEvent Input;
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetKey_Parms, Input), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|KeyEvent" },
		{ "Comment", "/**\n\x09 * Returns the key for this event.\n\x09 *\n\x09 * @return  Key name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the key for this event.\n\n@return  Key name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "GetKey", nullptr, nullptr, sizeof(KismetInputLibrary_eventGetKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics
	{
		struct KismetInputLibrary_eventGetUserIndex_Parms
		{
			FKeyEvent Input;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetUserIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventGetUserIndex_Parms, Input), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|KeyEvent" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "GetUserIndex", nullptr, nullptr, sizeof(KismetInputLibrary_eventGetUserIndex_Parms), Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics
	{
		struct KismetInputLibrary_eventInputChord_GetDisplayName_Parms
		{
			FInputChord Key;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputChord_GetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputChord_GetDisplayName_Parms, Key), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/** @return The display name of the input chord */" },
		{ "DisplayName", "Get Input Chord Display Name" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "@return The display name of the input chord" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputChord_GetDisplayName", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputChord_GetDisplayName_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsAltDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsAltDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsAltDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either alt key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Alt Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either alt key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsAltDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsAltDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsCommandDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsCommandDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsCommandDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either command key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Command Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either command key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsCommandDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsCommandDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsControlDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsControlDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsControlDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either control key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Control Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either control key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsControlDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsControlDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left alt key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Alt Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left alt key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftAltDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left command key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Command Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left command key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftCommandDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left control key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Control Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left control key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftControlDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left shift key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Shift Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left shift key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftShiftDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsRepeat_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsRepeat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRepeat_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRepeat_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns whether or not this character is an auto-repeated keystroke\n\x09 */" },
		{ "DisplayName", "Is Repeat" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns whether or not this character is an auto-repeated keystroke" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRepeat", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsRepeat_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if right alt key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Alt Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if right alt key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightAltDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if right command key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Command Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if right command key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightCommandDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left control key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Control Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left control key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightControlDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if right shift key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Shift Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if right shift key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightShiftDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsShiftDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsShiftDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsShiftDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either shift key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Shift Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either shift key was down when this event occurred" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsShiftDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventInputEvent_IsShiftDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics
	{
		struct KismetInputLibrary_eventKey_GetDisplayName_Parms
		{
			FKey Key;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetDisplayName_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/**\n\x09 * Returns the display name of the key.\n\x09 */" },
		{ "DisplayName", "Get Key Display Name" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the display name of the key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetDisplayName", nullptr, nullptr, sizeof(KismetInputLibrary_eventKey_GetDisplayName_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics
	{
		struct KismetInputLibrary_eventKey_GetNavigationAction_Parms
		{
			FKey InKey;
			EUINavigationAction ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationAction_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EUINavigationAction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationAction_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/** Returns the navigation action corresponding to this key, or Invalid if not found */" },
		{ "DisplayName", "Get Key Navigation Action" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the navigation action corresponding to this key, or Invalid if not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetNavigationAction", nullptr, nullptr, sizeof(KismetInputLibrary_eventKey_GetNavigationAction_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics
	{
		struct KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms
		{
			FAnalogInputEvent InAnalogEvent;
			EUINavigation ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAnalogEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAnalogEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent = { "InAnalogEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms, InAnalogEvent), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|AnalogEvent" },
		{ "Comment", "/** Returns the navigation action corresponding to this key, or Invalid if not found */" },
		{ "DisplayName", "Get Analog Event Navigation Direction" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the navigation action corresponding to this key, or Invalid if not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetNavigationDirectionFromAnalog", nullptr, nullptr, sizeof(KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics
	{
		struct KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms
		{
			FKeyEvent InKeyEvent;
			EUINavigation ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InKeyEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|KeyEvent" },
		{ "Comment", "/** Returns the navigation action corresponding to this key, or Invalid if not found */" },
		{ "DisplayName", "Get Key Event Navigation Direction" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the navigation action corresponding to this key, or Invalid if not found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetNavigationDirectionFromKey", nullptr, nullptr, sizeof(KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics
	{
		struct KismetInputLibrary_eventKey_IsFloatAxis_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsFloatAxis_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsFloatAxis_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsFloatAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a float axis\n\x09 */" },
		{ "DisplayName", "Is Float Axis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a float axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsFloatAxis", nullptr, nullptr, sizeof(KismetInputLibrary_eventKey_IsFloatAxis_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics
	{
		struct KismetInputLibrary_eventKey_IsGamepadKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsGamepadKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsGamepadKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsGamepadKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a gamepad button\n\x09 */" },
		{ "DisplayName", "Is Gamepad Key" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a gamepad button" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsGamepadKey", nullptr, nullptr, sizeof(KismetInputLibrary_eventKey_IsGamepadKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics
	{
		struct KismetInputLibrary_eventKey_IsKeyboardKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsKeyboardKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsKeyboardKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsKeyboardKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a keyboard button\n\x09 */" },
		{ "DisplayName", "Is Keyboard Key" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a keyboard button" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsKeyboardKey", nullptr, nullptr, sizeof(KismetInputLibrary_eventKey_IsKeyboardKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics
	{
		struct KismetInputLibrary_eventKey_IsModifierKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsModifierKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsModifierKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsModifierKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a modifier key: Ctrl, Command, Alt, Shift\n\x09 */" },
		{ "DisplayName", "Is Modifier Key" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a modifier key: Ctrl, Command, Alt, Shift" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsModifierKey", nullptr, nullptr, sizeof(KismetInputLibrary_eventKey_IsModifierKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics
	{
		struct KismetInputLibrary_eventKey_IsMouseButton_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsMouseButton_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsMouseButton_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsMouseButton_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a mouse button\n\x09 */" },
		{ "DisplayName", "Is Mouse Button" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a mouse button" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsMouseButton", nullptr, nullptr, sizeof(KismetInputLibrary_eventKey_IsMouseButton_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics
	{
		struct KismetInputLibrary_eventKey_IsValid_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsValid_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsValid_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/**\n\x09 * Returns true if this is a valid key.\n\x09 */" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if this is a valid key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsValid", nullptr, nullptr, sizeof(KismetInputLibrary_eventKey_IsValid_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics
	{
		struct KismetInputLibrary_eventKey_IsVectorAxis_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsVectorAxis_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsVectorAxis_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsVectorAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a vector axis\n\x09 */" },
		{ "DisplayName", "Is Vector Axis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a vector axis" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsVectorAxis", nullptr, nullptr, sizeof(KismetInputLibrary_eventKey_IsVectorAxis_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** Returns the distance the mouse traveled since the last event was handled. */" },
		{ "DisplayName", "Get Cursor Delta" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the distance the mouse traveled since the last event was handled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetCursorDelta", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms
		{
			FPointerEvent Input;
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** Mouse button that caused this event to be raised (possibly EB_None) */" },
		{ "DisplayName", "Get Effecting Button" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Mouse button that caused this event to be raised (possibly EB_None)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetEffectingButton", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** Returns the change in gesture value since the last gesture event of the same type. */" },
		{ "DisplayName", "Get Gesture Delta" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the change in gesture value since the last gesture event of the same type." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetGestureDelta", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetGestureType_Parms
		{
			FPointerEvent Input;
			ESlateGesture ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureType_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESlateGesture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureType_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** Returns the type of touch gesture */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the type of touch gesture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetGestureType", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_GetGestureType_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** Returns the position of the cursor in screen space last time we handled an input event */" },
		{ "DisplayName", "Get Last Screen Space Position" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the position of the cursor in screen space last time we handled an input event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetLastScreenSpacePosition", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms
		{
			FPointerEvent Input;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** Returns the unique identifier of the pointer (e.g., finger index) */" },
		{ "DisplayName", "Get Pointer Index" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the unique identifier of the pointer (e.g., finger index)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetPointerIndex", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** Returns The position of the cursor in screen space */" },
		{ "DisplayName", "Get Screen Space Position" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns The position of the cursor in screen space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetScreenSpacePosition", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms
		{
			FPointerEvent Input;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** Returns the index of the touch pad that generated this event (for platforms with multiple touch pads per user) */" },
		{ "DisplayName", "Get Touchpad Index" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the index of the touch pad that generated this event (for platforms with multiple touch pads per user)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetTouchpadIndex", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms
		{
			FPointerEvent Input;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** Returns the index of the user that caused the event */" },
		{ "DisplayName", "Get User Index" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the index of the user that caused the event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetUserIndex", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms
		{
			FPointerEvent Input;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** How much did the mouse wheel turn since the last mouse event */" },
		{ "DisplayName", "Get Wheel Delta" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "How much did the mouse wheel turn since the last mouse event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetWheelDelta", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms
		{
			FPointerEvent Input;
			FKey MouseButton;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MouseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_MouseButton = { "MouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms, MouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_MouseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** Mouse buttons that are currently pressed */" },
		{ "DisplayName", "Is Mouse Button Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Mouse buttons that are currently pressed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_IsMouseButtonDown", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms
		{
			FPointerEvent Input;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms), &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|PointerEvent" },
		{ "Comment", "/** Returns true if this event a result from a touch (as opposed to a mouse) */" },
		{ "DisplayName", "Is Touch Event" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if this event a result from a touch (as opposed to a mouse)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_IsTouchEvent", nullptr, nullptr, sizeof(KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetInputLibrary_NoRegister()
	{
		return UKismetInputLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetInputLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetInputLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetInputLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt, "CalibrateTilt" }, // 2814360274
		{ &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord, "EqualEqual_InputChordInputChord" }, // 1908868103
		{ &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey, "EqualEqual_KeyKey" }, // 169337704
		{ &Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue, "GetAnalogValue" }, // 664047497
		{ &Z_Construct_UFunction_UKismetInputLibrary_GetKey, "GetKey" }, // 406914444
		{ &Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex, "GetUserIndex" }, // 678898884
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName, "InputChord_GetDisplayName" }, // 3314134023
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown, "InputEvent_IsAltDown" }, // 331277320
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown, "InputEvent_IsCommandDown" }, // 3814656329
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown, "InputEvent_IsControlDown" }, // 687696547
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown, "InputEvent_IsLeftAltDown" }, // 1482283515
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown, "InputEvent_IsLeftCommandDown" }, // 1036383796
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown, "InputEvent_IsLeftControlDown" }, // 914450224
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown, "InputEvent_IsLeftShiftDown" }, // 3390449281
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat, "InputEvent_IsRepeat" }, // 2070189783
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown, "InputEvent_IsRightAltDown" }, // 1547357362
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown, "InputEvent_IsRightCommandDown" }, // 3974747849
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown, "InputEvent_IsRightControlDown" }, // 2028271618
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown, "InputEvent_IsRightShiftDown" }, // 449419670
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown, "InputEvent_IsShiftDown" }, // 3405478628
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName, "Key_GetDisplayName" }, // 2216877506
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction, "Key_GetNavigationAction" }, // 1157322878
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog, "Key_GetNavigationDirectionFromAnalog" }, // 3951928807
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey, "Key_GetNavigationDirectionFromKey" }, // 3431938250
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsFloatAxis, "Key_IsFloatAxis" }, // 3497636596
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey, "Key_IsGamepadKey" }, // 3730836805
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey, "Key_IsKeyboardKey" }, // 1696129259
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey, "Key_IsModifierKey" }, // 1024645092
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton, "Key_IsMouseButton" }, // 744987671
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid, "Key_IsValid" }, // 1615228126
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis, "Key_IsVectorAxis" }, // 990073552
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta, "PointerEvent_GetCursorDelta" }, // 650513894
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton, "PointerEvent_GetEffectingButton" }, // 4225996021
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta, "PointerEvent_GetGestureDelta" }, // 3105381877
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType, "PointerEvent_GetGestureType" }, // 803642104
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition, "PointerEvent_GetLastScreenSpacePosition" }, // 2632008539
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex, "PointerEvent_GetPointerIndex" }, // 3068172989
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition, "PointerEvent_GetScreenSpacePosition" }, // 3010284040
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex, "PointerEvent_GetTouchpadIndex" }, // 3633040563
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex, "PointerEvent_GetUserIndex" }, // 1742291548
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta, "PointerEvent_GetWheelDelta" }, // 2305848683
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown, "PointerEvent_IsMouseButtonDown" }, // 3563331316
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent, "PointerEvent_IsTouchEvent" }, // 2216309173
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetInputLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/KismetInputLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ScriptName", "InputLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetInputLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetInputLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetInputLibrary_Statics::ClassParams = {
		&UKismetInputLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKismetInputLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKismetInputLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetInputLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetInputLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetInputLibrary, 1675069844);
	template<> ENGINE_API UClass* StaticClass<UKismetInputLibrary>()
	{
		return UKismetInputLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetInputLibrary(Z_Construct_UClass_UKismetInputLibrary, &UKismetInputLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetInputLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetInputLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
