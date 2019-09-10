// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRController/Classes/SteamVRControllerLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRControllerLibrary() {}
// Cross Module References
	STEAMVRCONTROLLER_API UEnum* Z_Construct_UEnum_SteamVRController_ESteamVRTouchDPadMapping();
	UPackage* Z_Construct_UPackage__Script_SteamVRController();
	STEAMVRCONTROLLER_API UClass* Z_Construct_UClass_USteamVRControllerLibrary_NoRegister();
	STEAMVRCONTROLLER_API UClass* Z_Construct_UClass_USteamVRControllerLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMVRCONTROLLER_API UFunction* Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping();
// End Cross Module References
	static UEnum* ESteamVRTouchDPadMapping_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamVRController_ESteamVRTouchDPadMapping, Z_Construct_UPackage__Script_SteamVRController(), TEXT("ESteamVRTouchDPadMapping"));
		}
		return Singleton;
	}
	template<> STEAMVRCONTROLLER_API UEnum* StaticEnum<ESteamVRTouchDPadMapping>()
	{
		return ESteamVRTouchDPadMapping_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamVRTouchDPadMapping(ESteamVRTouchDPadMapping_StaticEnum, TEXT("/Script/SteamVRController"), TEXT("ESteamVRTouchDPadMapping"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamVRController_ESteamVRTouchDPadMapping_Hash() { return 285969874U; }
	UEnum* Z_Construct_UEnum_SteamVRController_ESteamVRTouchDPadMapping()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamVRController();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamVRTouchDPadMapping"), 0, Get_Z_Construct_UEnum_SteamVRController_ESteamVRTouchDPadMapping_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamVRTouchDPadMapping::FaceButtons", (int64)ESteamVRTouchDPadMapping::FaceButtons },
				{ "ESteamVRTouchDPadMapping::ThumbstickDirections", (int64)ESteamVRTouchDPadMapping::ThumbstickDirections },
				{ "ESteamVRTouchDPadMapping::Disabled", (int64)ESteamVRTouchDPadMapping::Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Defines the set of input events you want associated with your SteamVR d-pad buttons */" },
				{ "Disabled.Comment", "/** Unmaps all directional touchpad input so that the d-pad buttons won't trigger their own input events */" },
				{ "Disabled.Name", "ESteamVRTouchDPadMapping::Disabled" },
				{ "Disabled.ToolTip", "Unmaps all directional touchpad input so that the d-pad buttons won't trigger their own input events" },
				{ "FaceButtons.Comment", "/** Maps each controller's four touchpad buttons to the respective FaceButton1/2/3/4 events */" },
				{ "FaceButtons.Name", "ESteamVRTouchDPadMapping::FaceButtons" },
				{ "FaceButtons.ToolTip", "Maps each controller's four touchpad buttons to the respective FaceButton1/2/3/4 events" },
				{ "ModuleRelativePath", "Classes/SteamVRControllerLibrary.h" },
				{ "ThumbstickDirections.Comment", "/** Maps each controller's four touchpad buttons to the respective Thumbstick_Up/Down/Left/Right events  */" },
				{ "ThumbstickDirections.Name", "ESteamVRTouchDPadMapping::ThumbstickDirections" },
				{ "ThumbstickDirections.ToolTip", "Maps each controller's four touchpad buttons to the respective Thumbstick_Up/Down/Left/Right events" },
				{ "ToolTip", "Defines the set of input events you want associated with your SteamVR d-pad buttons" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamVRController,
				nullptr,
				"ESteamVRTouchDPadMapping",
				"ESteamVRTouchDPadMapping",
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
	void USteamVRControllerLibrary::StaticRegisterNativesUSteamVRControllerLibrary()
	{
		UClass* Class = USteamVRControllerLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTouchDPadMapping", &USteamVRControllerLibrary::execSetTouchDPadMapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics
	{
		struct SteamVRControllerLibrary_eventSetTouchDPadMapping_Parms
		{
			ESteamVRTouchDPadMapping NewMapping;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMapping;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMapping_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::NewProp_NewMapping = { "NewMapping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamVRControllerLibrary_eventSetTouchDPadMapping_Parms, NewMapping), Z_Construct_UEnum_SteamVRController_ESteamVRTouchDPadMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::NewProp_NewMapping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::NewProp_NewMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::NewProp_NewMapping_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR" },
		{ "Comment", "/**\n\x09 * Sets which input events you want associated with the SteamVR controller's \n\x09 * directional touchpad buttons - does so for both left and right controllers.\n\x09 *\n\x09 * @param  NewMapping\x09""Defines the set of input events you want associated with the four directional touchpad buttons.\n\x09 */" },
		{ "CPP_Default_NewMapping", "FaceButtons" },
		{ "ModuleRelativePath", "Classes/SteamVRControllerLibrary.h" },
		{ "ToolTip", "Sets which input events you want associated with the SteamVR controller's\ndirectional touchpad buttons - does so for both left and right controllers.\n\n@param  NewMapping   Defines the set of input events you want associated with the four directional touchpad buttons." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRControllerLibrary, nullptr, "SetTouchDPadMapping", nullptr, nullptr, sizeof(SteamVRControllerLibrary_eventSetTouchDPadMapping_Parms), Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamVRControllerLibrary_NoRegister()
	{
		return USteamVRControllerLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USteamVRControllerLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamVRControllerLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVRController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamVRControllerLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamVRControllerLibrary_SetTouchDPadMapping, "SetTouchDPadMapping" }, // 3206014221
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRControllerLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "IncludePath", "SteamVRControllerLibrary.h" },
		{ "ModuleRelativePath", "Classes/SteamVRControllerLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamVRControllerLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamVRControllerLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamVRControllerLibrary_Statics::ClassParams = {
		&USteamVRControllerLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USteamVRControllerLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USteamVRControllerLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamVRControllerLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamVRControllerLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamVRControllerLibrary, 1008576897);
	template<> STEAMVRCONTROLLER_API UClass* StaticClass<USteamVRControllerLibrary>()
	{
		return USteamVRControllerLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamVRControllerLibrary(Z_Construct_UClass_USteamVRControllerLibrary, &USteamVRControllerLibrary::StaticClass, TEXT("/Script/SteamVRController"), TEXT("USteamVRControllerLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVRControllerLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
