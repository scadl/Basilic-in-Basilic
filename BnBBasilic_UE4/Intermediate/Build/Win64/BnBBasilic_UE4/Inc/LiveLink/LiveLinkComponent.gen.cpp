// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLink/Public/LiveLinkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkComponent() {}
// Cross Module References
	LIVELINK_API UFunction* Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkComponent_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	LIVELINK_API UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics
	{
		struct _Script_LiveLink_eventLiveLinkTickSignature_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LiveLink_eventLiveLinkTickSignature_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LiveLink, nullptr, "LiveLinkTickSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_LiveLink_eventLiveLinkTickSignature_Parms), Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ULiveLinkComponent::StaticRegisterNativesULiveLinkComponent()
	{
		UClass* Class = ULiveLinkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvailableSubjectNames", &ULiveLinkComponent::execGetAvailableSubjectNames },
			{ "GetSubjectData", &ULiveLinkComponent::execGetSubjectData },
			{ "GetSubjectDataAtSceneTime", &ULiveLinkComponent::execGetSubjectDataAtSceneTime },
			{ "GetSubjectDataAtWorldTime", &ULiveLinkComponent::execGetSubjectDataAtWorldTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics
	{
		struct LiveLinkComponent_eventGetAvailableSubjectNames_Parms
		{
			TArray<FName> SubjectNames;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubjectNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubjectNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::NewProp_SubjectNames = { "SubjectNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkComponent_eventGetAvailableSubjectNames_Parms, SubjectNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::NewProp_SubjectNames_Inner = { "SubjectNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::NewProp_SubjectNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::NewProp_SubjectNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAvailableSubjectNames is deprecated, use GetLiveLinkEnabledSubjectNames." },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponent, nullptr, "GetAvailableSubjectNames", nullptr, nullptr, sizeof(LiveLinkComponent_eventGetAvailableSubjectNames_Parms), Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics
	{
		struct LiveLinkComponent_eventGetSubjectData_Parms
		{
			FName SubjectName;
			bool bSuccess;
			FSubjectFrameHandle SubjectFrameHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectData_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((LiveLinkComponent_eventGetSubjectData_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkComponent_eventGetSubjectData_Parms), &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectData_Parms, SubjectName), METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectFrameHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetSubjectData is deprecated, EvaluateLiveLinkFrame." },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponent, nullptr, "GetSubjectData", nullptr, nullptr, sizeof(LiveLinkComponent_eventGetSubjectData_Parms), Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms
		{
			FName SubjectName;
			FTimecode SceneTime;
			bool bSuccess;
			FSubjectFrameHandle SubjectFrameHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SceneTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms), &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SceneTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SceneTime = { "SceneTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms, SceneTime), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SceneTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SceneTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms, SubjectName), METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectFrameHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SceneTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetSubjectDataAtSceneTime is deprecated, use EvaluateLiveLinkFrameAtSceneTime." },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponent, nullptr, "GetSubjectDataAtSceneTime", nullptr, nullptr, sizeof(LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms), Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics
	{
		struct LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms
		{
			FName SubjectName;
			float WorldTime;
			bool bSuccess;
			FSubjectFrameHandle SubjectFrameHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms), &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_WorldTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_WorldTime = { "WorldTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms, WorldTime), METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_WorldTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_WorldTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms, SubjectName), METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectFrameHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_WorldTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetSubjectDataAtWorldTime is deprecated, use EvaluateLiveLinkFrameAtWorldTime." },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponent, nullptr, "GetSubjectDataAtWorldTime", nullptr, nullptr, sizeof(LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms), Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULiveLinkComponent_NoRegister()
	{
		return ULiveLinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLiveLinkUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLiveLinkUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames, "GetAvailableSubjectNames" }, // 3766139319
		{ &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData, "GetSubjectData" }, // 3933176864
		{ &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime, "GetSubjectDataAtSceneTime" }, // 3335723700
		{ &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime, "GetSubjectDataAtWorldTime" }, // 1660371645
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "// An actor component to enable accessing LiveLink data in Blueprints. \n// Data can be accessed in Editor through the \"OnLiveLinkUpdated\" event.\n// Any Skeletal Mesh Components on the parent will be set to animate in editor causing their AnimBPs to run.\n" },
		{ "DisplayName", "LiveLink Skeletal Animation" },
		{ "IncludePath", "LiveLinkComponent.h" },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
		{ "ToolTip", "An actor component to enable accessing LiveLink data in Blueprints.\nData can be accessed in Editor through the \"OnLiveLinkUpdated\" event.\nAny Skeletal Mesh Components on the parent will be set to animate in editor causing their AnimBPs to run." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponent_Statics::NewProp_OnLiveLinkUpdated_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// This Event is triggered any time new LiveLink data is available, including in the editor\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
		{ "ToolTip", "This Event is triggered any time new LiveLink data is available, including in the editor" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULiveLinkComponent_Statics::NewProp_OnLiveLinkUpdated = { "OnLiveLinkUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkComponent, OnLiveLinkUpdated), Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponent_Statics::NewProp_OnLiveLinkUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponent_Statics::NewProp_OnLiveLinkUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponent_Statics::NewProp_OnLiveLinkUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkComponent_Statics::ClassParams = {
		&ULiveLinkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULiveLinkComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkComponent, 1761111458);
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkComponent>()
	{
		return ULiveLinkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkComponent(Z_Construct_UClass_ULiveLinkComponent, &ULiveLinkComponent::StaticClass, TEXT("/Script/LiveLink"), TEXT("ULiveLinkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
