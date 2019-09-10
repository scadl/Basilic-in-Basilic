// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoloLensAR/Public/HoloLensARFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoloLensARFunctionLibrary() {}
// Cross Module References
	HOLOLENSAR_API UClass* Z_Construct_UClass_UHoloLensARFunctionLibrary_NoRegister();
	HOLOLENSAR_API UClass* Z_Construct_UClass_UHoloLensARFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HoloLensAR();
	HOLOLENSAR_API UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin();
	HOLOLENSAR_API UClass* Z_Construct_UClass_UWMRARPin_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	HOLOLENSAR_API UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady();
	HOLOLENSAR_API UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins();
	HOLOLENSAR_API UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	HOLOLENSAR_API UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveAllARPinsFromWMRAnchorStore();
	HOLOLENSAR_API UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();
	HOLOLENSAR_API UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore();
// End Cross Module References
	void UHoloLensARFunctionLibrary::StaticRegisterNativesUHoloLensARFunctionLibrary()
	{
		UClass* Class = UHoloLensARFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNamedARPin", &UHoloLensARFunctionLibrary::execCreateNamedARPin },
			{ "IsWMRAnchorStoreReady", &UHoloLensARFunctionLibrary::execIsWMRAnchorStoreReady },
			{ "LoadWMRAnchorStoreARPins", &UHoloLensARFunctionLibrary::execLoadWMRAnchorStoreARPins },
			{ "PinComponentToARPin", &UHoloLensARFunctionLibrary::execPinComponentToARPin },
			{ "RemoveAllARPinsFromWMRAnchorStore", &UHoloLensARFunctionLibrary::execRemoveAllARPinsFromWMRAnchorStore },
			{ "RemoveARPinFromWMRAnchorStore", &UHoloLensARFunctionLibrary::execRemoveARPinFromWMRAnchorStore },
			{ "SaveARPinToWMRAnchorStore", &UHoloLensARFunctionLibrary::execSaveARPinToWMRAnchorStore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics
	{
		struct HoloLensARFunctionLibrary_eventCreateNamedARPin_Parms
		{
			FName Name;
			FTransform PinToWorldTransform;
			UWMRARPin* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinToWorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PinToWorldTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoloLensARFunctionLibrary_eventCreateNamedARPin_Parms, ReturnValue), Z_Construct_UClass_UWMRARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::NewProp_PinToWorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::NewProp_PinToWorldTransform = { "PinToWorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoloLensARFunctionLibrary_eventCreateNamedARPin_Parms, PinToWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::NewProp_PinToWorldTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::NewProp_PinToWorldTransform_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoloLensARFunctionLibrary_eventCreateNamedARPin_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::NewProp_PinToWorldTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoloLensAR|ARPin" },
		{ "Comment", "/**\n\x09 * Create an UARPin with the specified name, which will also be the name used to store it in the Windows Mixed Reality Anchor Store.\n\x09 *\n\x09 * @param Name\x09\x09\x09\x09\x09\x09The name of the anchor.  If the Name is already in use creation will fail.  A leading \"_\" is reserved for automatically named anchors. Do not start your names with an underscore.\n\x09 * @param PinToWorldTransform\x09\x09The Pin which the component will be updated by.\n\x09 */" },
		{ "Keywords", "hololensar wmr pin ar all" },
		{ "ModuleRelativePath", "Public/HoloLensARFunctionLibrary.h" },
		{ "ToolTip", "Create an UARPin with the specified name, which will also be the name used to store it in the Windows Mixed Reality Anchor Store.\n\n@param Name                                          The name of the anchor.  If the Name is already in use creation will fail.  A leading \"_\" is reserved for automatically named anchors. Do not start your names with an underscore.\n@param PinToWorldTransform           The Pin which the component will be updated by." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoloLensARFunctionLibrary, nullptr, "CreateNamedARPin", nullptr, nullptr, sizeof(HoloLensARFunctionLibrary_eventCreateNamedARPin_Parms), Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics
	{
		struct HoloLensARFunctionLibrary_eventIsWMRAnchorStoreReady_Parms
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
	void Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoloLensARFunctionLibrary_eventIsWMRAnchorStoreReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoloLensARFunctionLibrary_eventIsWMRAnchorStoreReady_Parms), &Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoloLensAR|ARPin" },
		{ "Comment", "/**\n\x09 * Is the WMRAnchorStore ready to handle calls.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09True if anchor store is ready.\n\x09 */" },
		{ "Keywords", "hololensar wmr pin ar all" },
		{ "ModuleRelativePath", "Public/HoloLensARFunctionLibrary.h" },
		{ "ToolTip", "Is the WMRAnchorStore ready to handle calls.\n\n@return                                      True if anchor store is ready." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoloLensARFunctionLibrary, nullptr, "IsWMRAnchorStoreReady", nullptr, nullptr, sizeof(HoloLensARFunctionLibrary_eventIsWMRAnchorStoreReady_Parms), Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics
	{
		struct HoloLensARFunctionLibrary_eventLoadWMRAnchorStoreARPins_Parms
		{
			TArray<UWMRARPin*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoloLensARFunctionLibrary_eventLoadWMRAnchorStoreARPins_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWMRARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoloLensAR|ARPin" },
		{ "Comment", "/**\n\x09 * Load all ARPins from the Windows Mixed Reality Anchor Store.\n\x09 * Note: Pins of the same name as anchor store pins will be overwritten by the anchor store pin.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09""Array of Pins that were loaded.\n\x09 */" },
		{ "Keywords", "hololensar wmr pin ar all" },
		{ "ModuleRelativePath", "Public/HoloLensARFunctionLibrary.h" },
		{ "ToolTip", "Load all ARPins from the Windows Mixed Reality Anchor Store.\nNote: Pins of the same name as anchor store pins will be overwritten by the anchor store pin.\n\n@return                                      Array of Pins that were loaded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoloLensARFunctionLibrary, nullptr, "LoadWMRAnchorStoreARPins", nullptr, nullptr, sizeof(HoloLensARFunctionLibrary_eventLoadWMRAnchorStoreARPins_Parms), Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics
	{
		struct HoloLensARFunctionLibrary_eventPinComponentToARPin_Parms
		{
			USceneComponent* ComponentToPin;
			UWMRARPin* Pin;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToPin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToPin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoloLensARFunctionLibrary_eventPinComponentToARPin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoloLensARFunctionLibrary_eventPinComponentToARPin_Parms), &Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::NewProp_Pin = { "Pin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoloLensARFunctionLibrary_eventPinComponentToARPin_Parms, Pin), Z_Construct_UClass_UWMRARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::NewProp_ComponentToPin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::NewProp_ComponentToPin = { "ComponentToPin", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoloLensARFunctionLibrary_eventPinComponentToARPin_Parms, ComponentToPin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::NewProp_ComponentToPin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::NewProp_ComponentToPin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::NewProp_Pin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::NewProp_ComponentToPin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoloLensAR|ARPin" },
		{ "Comment", "/**\n\x09 * Associate a component with an ARPin, so that its transform will be updated by the pin.  Any previously associated component will be detached.\n\x09 *\n\x09 * @param ComponentToPin\x09The Component which will be updated by the Pin.\n\x09 * @param Pin\x09\x09\x09\x09The Pin which the component will be updated by.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09True if Pin successfully created.\n\x09 */" },
		{ "Keywords", "hololensar wmr pin ar all" },
		{ "ModuleRelativePath", "Public/HoloLensARFunctionLibrary.h" },
		{ "ToolTip", "Associate a component with an ARPin, so that its transform will be updated by the pin.  Any previously associated component will be detached.\n\n@param ComponentToPin        The Component which will be updated by the Pin.\n@param Pin                           The Pin which the component will be updated by.\n\n@return                                      True if Pin successfully created." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoloLensARFunctionLibrary, nullptr, "PinComponentToARPin", nullptr, nullptr, sizeof(HoloLensARFunctionLibrary_eventPinComponentToARPin_Parms), Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveAllARPinsFromWMRAnchorStore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveAllARPinsFromWMRAnchorStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoloLensAR|ARPin" },
		{ "Comment", "/**\n\x09 * Remove all ARPins from the the Windows Mixed Reality Anchor Store.\n\x09 */" },
		{ "Keywords", "hololensar wmr pin ar all" },
		{ "ModuleRelativePath", "Public/HoloLensARFunctionLibrary.h" },
		{ "ToolTip", "Remove all ARPins from the the Windows Mixed Reality Anchor Store." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveAllARPinsFromWMRAnchorStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoloLensARFunctionLibrary, nullptr, "RemoveAllARPinsFromWMRAnchorStore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveAllARPinsFromWMRAnchorStore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveAllARPinsFromWMRAnchorStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveAllARPinsFromWMRAnchorStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveAllARPinsFromWMRAnchorStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore_Statics
	{
		struct HoloLensARFunctionLibrary_eventRemoveARPinFromWMRAnchorStore_Parms
		{
			UARPin* InPin;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore_Statics::NewProp_InPin = { "InPin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoloLensARFunctionLibrary_eventRemoveARPinFromWMRAnchorStore_Parms, InPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore_Statics::NewProp_InPin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoloLensAR|ARPin" },
		{ "Comment", "/**\n\x09 * Remove an ARPin from the the Windows Mixed Reality Anchor Store.\n\x09 */" },
		{ "Keywords", "hololensar wmr pin ar all" },
		{ "ModuleRelativePath", "Public/HoloLensARFunctionLibrary.h" },
		{ "ToolTip", "Remove an ARPin from the the Windows Mixed Reality Anchor Store." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoloLensARFunctionLibrary, nullptr, "RemoveARPinFromWMRAnchorStore", nullptr, nullptr, sizeof(HoloLensARFunctionLibrary_eventRemoveARPinFromWMRAnchorStore_Parms), Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics
	{
		struct HoloLensARFunctionLibrary_eventSaveARPinToWMRAnchorStore_Parms
		{
			UARPin* InPin;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HoloLensARFunctionLibrary_eventSaveARPinToWMRAnchorStore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HoloLensARFunctionLibrary_eventSaveARPinToWMRAnchorStore_Parms), &Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::NewProp_InPin = { "InPin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HoloLensARFunctionLibrary_eventSaveARPinToWMRAnchorStore_Parms, InPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::NewProp_InPin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "HoloLensAR|ARPin" },
		{ "Comment", "/**\n\x09 * Save an ARPin to the the Windows Mixed Reality Anchor Store.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09True if saved successfully.\n\x09 */" },
		{ "Keywords", "hololensar wmr pin ar all" },
		{ "ModuleRelativePath", "Public/HoloLensARFunctionLibrary.h" },
		{ "ToolTip", "Save an ARPin to the the Windows Mixed Reality Anchor Store.\n\n@return                                      True if saved successfully." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHoloLensARFunctionLibrary, nullptr, "SaveARPinToWMRAnchorStore", nullptr, nullptr, sizeof(HoloLensARFunctionLibrary_eventSaveARPinToWMRAnchorStore_Parms), Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoloLensARFunctionLibrary_NoRegister()
	{
		return UHoloLensARFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHoloLensARFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoloLensARFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HoloLensAR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHoloLensARFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHoloLensARFunctionLibrary_CreateNamedARPin, "CreateNamedARPin" }, // 2190190190
		{ &Z_Construct_UFunction_UHoloLensARFunctionLibrary_IsWMRAnchorStoreReady, "IsWMRAnchorStoreReady" }, // 2420079146
		{ &Z_Construct_UFunction_UHoloLensARFunctionLibrary_LoadWMRAnchorStoreARPins, "LoadWMRAnchorStoreARPins" }, // 1224863757
		{ &Z_Construct_UFunction_UHoloLensARFunctionLibrary_PinComponentToARPin, "PinComponentToARPin" }, // 2676231055
		{ &Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveAllARPinsFromWMRAnchorStore, "RemoveAllARPinsFromWMRAnchorStore" }, // 1221207569
		{ &Z_Construct_UFunction_UHoloLensARFunctionLibrary_RemoveARPinFromWMRAnchorStore, "RemoveARPinFromWMRAnchorStore" }, // 2777669597
		{ &Z_Construct_UFunction_UHoloLensARFunctionLibrary_SaveARPinToWMRAnchorStore, "SaveARPinToWMRAnchorStore" }, // 3392541974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoloLensARFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A function library that provides static/Blueprint functions for HoloLensAR.*/" },
		{ "IncludePath", "HoloLensARFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/HoloLensARFunctionLibrary.h" },
		{ "ToolTip", "A function library that provides static/Blueprint functions for HoloLensAR." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoloLensARFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoloLensARFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHoloLensARFunctionLibrary_Statics::ClassParams = {
		&UHoloLensARFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHoloLensARFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHoloLensARFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoloLensARFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHoloLensARFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoloLensARFunctionLibrary, 2492520919);
	template<> HOLOLENSAR_API UClass* StaticClass<UHoloLensARFunctionLibrary>()
	{
		return UHoloLensARFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoloLensARFunctionLibrary(Z_Construct_UClass_UHoloLensARFunctionLibrary, &UHoloLensARFunctionLibrary::StaticClass, TEXT("/Script/HoloLensAR"), TEXT("UHoloLensARFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoloLensARFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
