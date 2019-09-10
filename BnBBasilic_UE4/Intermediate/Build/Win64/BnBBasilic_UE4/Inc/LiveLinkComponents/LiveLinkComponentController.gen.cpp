// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponents/Public/LiveLinkComponentController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkComponentController() {}
// Cross Module References
	LIVELINKCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentController_NoRegister();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentController();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature_Statics
	{
		struct _Script_LiveLinkComponents_eventLiveLinkTickSignature_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LiveLinkComponents_eventLiveLinkTickSignature_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LiveLinkComponents, nullptr, "LiveLinkTickSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_LiveLinkComponents_eventLiveLinkTickSignature_Parms), Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ULiveLinkComponentController::StaticRegisterNativesULiveLinkComponentController()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkComponentController_NoRegister()
	{
		return ULiveLinkComponentController::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkComponentController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLiveLinkUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLiveLinkUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateInEditor_MetaData[];
#endif
		static void NewProp_bUpdateInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectRepresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkComponentController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LiveLink" },
		{ "DisplayName", "LiveLink Controller" },
		{ "IncludePath", "LiveLinkComponentController.h" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// This Event is triggered any time new LiveLink data is available, including in the editor\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "This Event is triggered any time new LiveLink data is available, including in the editor" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated = { "OnLiveLinkUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkComponentController, OnLiveLinkUpdated), Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_SetBit(void* Obj)
	{
		((ULiveLinkComponentController*)Obj)->bUpdateInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor = { "bUpdateInEditor", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x00120000020a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkComponentController, Controller), Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation = { "SubjectRepresentation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkComponentController, SubjectRepresentation), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkComponentController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkComponentController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkComponentController_Statics::ClassParams = {
		&ULiveLinkComponentController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkComponentController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkComponentController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkComponentController, 331403948);
	template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkComponentController>()
	{
		return ULiveLinkComponentController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkComponentController(Z_Construct_UClass_ULiveLinkComponentController, &ULiveLinkComponentController::StaticClass, TEXT("/Script/LiveLinkComponents"), TEXT("ULiveLinkComponentController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkComponentController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
