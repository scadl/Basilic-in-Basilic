// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusMR/Private/OculusMR_CastingCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMR_CastingCameraActor() {}
// Cross Module References
	OCULUSMR_API UClass* Z_Construct_UClass_AOculusMR_CastingCameraActor_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_AOculusMR_CastingCameraActor();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_State_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_Settings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_AOculusMR_BoundaryActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_PlaneMeshComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UVRNotificationsComponent_NoRegister();
// End Cross Module References
	void AOculusMR_CastingCameraActor::StaticRegisterNativesAOculusMR_CastingCameraActor()
	{
	}
	UClass* Z_Construct_UClass_AOculusMR_CastingCameraActor_NoRegister()
	{
		return AOculusMR_CastingCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MRState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MRState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MRSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MRSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundRenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForegroundRenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundCaptureActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForegroundCaptureActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundRenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundRenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTexture_White_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultTexture_White;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundarySceneCaptureActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundarySceneCaptureActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundaryActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundaryActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackdropMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackdropMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraFrameMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraFrameMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyLitMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChromaKeyLitMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChromaKeyMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueColoredMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueColoredMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyLitMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChromaKeyLitMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChromaKeyMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraDepthTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraDepthTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraColorTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraColorTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRNotificationComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRNotificationComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneCapture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "OculusMR" },
		{ "Comment", "/**\n* The camera actor in the level that tracks the binded physical camera in game\n*/" },
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "OculusMR_CastingCameraActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The camera actor in the level that tracks the binded physical camera in game" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_MRState_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_MRState = { "MRState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, MRState), Z_Construct_UClass_UOculusMR_State_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_MRState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_MRState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_MRSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_MRSettings = { "MRSettings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, MRSettings), Z_Construct_UClass_UOculusMR_Settings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_MRSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_MRSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ForegroundRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ForegroundRenderTarget = { "ForegroundRenderTarget", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, ForegroundRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ForegroundRenderTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ForegroundRenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ForegroundCaptureActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ForegroundCaptureActor = { "ForegroundCaptureActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, ForegroundCaptureActor), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ForegroundCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ForegroundCaptureActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BackgroundRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BackgroundRenderTarget = { "BackgroundRenderTarget", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, BackgroundRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BackgroundRenderTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BackgroundRenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_DefaultTexture_White_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_DefaultTexture_White = { "DefaultTexture_White", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, DefaultTexture_White), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_DefaultTexture_White_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_DefaultTexture_White_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BoundarySceneCaptureActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BoundarySceneCaptureActor = { "BoundarySceneCaptureActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, BoundarySceneCaptureActor), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BoundarySceneCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BoundarySceneCaptureActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BoundaryActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BoundaryActor = { "BoundaryActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, BoundaryActor), Z_Construct_UClass_AOculusMR_BoundaryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BoundaryActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BoundaryActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BackdropMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BackdropMaterialInstance = { "BackdropMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, BackdropMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BackdropMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BackdropMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraFrameMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraFrameMaterialInstance = { "CameraFrameMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, CameraFrameMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraFrameMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraFrameMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyLitMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyLitMaterialInstance = { "ChromaKeyLitMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, ChromaKeyLitMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyLitMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyLitMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyMaterialInstance = { "ChromaKeyMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, ChromaKeyMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_OpaqueColoredMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_OpaqueColoredMaterial = { "OpaqueColoredMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, OpaqueColoredMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_OpaqueColoredMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_OpaqueColoredMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyLitMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyLitMaterial = { "ChromaKeyLitMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, ChromaKeyLitMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyLitMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyLitMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyMaterial = { "ChromaKeyMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, ChromaKeyMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_PlaneMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_PlaneMeshComponent = { "PlaneMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, PlaneMeshComponent), Z_Construct_UClass_UOculusMR_PlaneMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_PlaneMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_PlaneMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraDepthTexture_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraDepthTexture = { "CameraDepthTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, CameraDepthTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraDepthTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraDepthTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraColorTexture_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraColorTexture = { "CameraColorTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, CameraColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraColorTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraColorTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_VRNotificationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OculusMR_CastingCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_VRNotificationComponent = { "VRNotificationComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOculusMR_CastingCameraActor, VRNotificationComponent), Z_Construct_UClass_UVRNotificationsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_VRNotificationComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_VRNotificationComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_MRState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_MRSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ForegroundRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ForegroundCaptureActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BackgroundRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_DefaultTexture_White,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BoundarySceneCaptureActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BoundaryActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_BackdropMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraFrameMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyLitMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_OpaqueColoredMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyLitMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_ChromaKeyMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_PlaneMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraDepthTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_CameraColorTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::NewProp_VRNotificationComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOculusMR_CastingCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::ClassParams = {
		&AOculusMR_CastingCameraActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::PropPointers),
		0,
		0x008002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOculusMR_CastingCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOculusMR_CastingCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOculusMR_CastingCameraActor, 3527917967);
	template<> OCULUSMR_API UClass* StaticClass<AOculusMR_CastingCameraActor>()
	{
		return AOculusMR_CastingCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOculusMR_CastingCameraActor(Z_Construct_UClass_AOculusMR_CastingCameraActor, &AOculusMR_CastingCameraActor::StaticClass, TEXT("/Script/OculusMR"), TEXT("AOculusMR_CastingCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOculusMR_CastingCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
