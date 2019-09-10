// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeManagement/Public/TimeManagementBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeManagementBlueprintLibrary() {}
// Cross Module References
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeManagementBlueprintLibrary_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeManagementBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger();
	TIMEMANAGEMENT_API UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime();
// End Cross Module References
	void UTimeManagementBlueprintLibrary::StaticRegisterNativesUTimeManagementBlueprintLibrary()
	{
		UClass* Class = UTimeManagementBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add_FrameNumberFrameNumber", &UTimeManagementBlueprintLibrary::execAdd_FrameNumberFrameNumber },
			{ "Add_FrameNumberInteger", &UTimeManagementBlueprintLibrary::execAdd_FrameNumberInteger },
			{ "Conv_FrameNumberToInteger", &UTimeManagementBlueprintLibrary::execConv_FrameNumberToInteger },
			{ "Conv_FrameRateToSeconds", &UTimeManagementBlueprintLibrary::execConv_FrameRateToSeconds },
			{ "Conv_QualifiedFrameTimeToSeconds", &UTimeManagementBlueprintLibrary::execConv_QualifiedFrameTimeToSeconds },
			{ "Conv_TimecodeToString", &UTimeManagementBlueprintLibrary::execConv_TimecodeToString },
			{ "Divide_FrameNumberInteger", &UTimeManagementBlueprintLibrary::execDivide_FrameNumberInteger },
			{ "GetTimecode", &UTimeManagementBlueprintLibrary::execGetTimecode },
			{ "IsValid_Framerate", &UTimeManagementBlueprintLibrary::execIsValid_Framerate },
			{ "IsValid_MultipleOf", &UTimeManagementBlueprintLibrary::execIsValid_MultipleOf },
			{ "Multiply_FrameNumberInteger", &UTimeManagementBlueprintLibrary::execMultiply_FrameNumberInteger },
			{ "Multiply_SecondsFrameRate", &UTimeManagementBlueprintLibrary::execMultiply_SecondsFrameRate },
			{ "SnapFrameTimeToRate", &UTimeManagementBlueprintLibrary::execSnapFrameTimeToRate },
			{ "Subtract_FrameNumberFrameNumber", &UTimeManagementBlueprintLibrary::execSubtract_FrameNumberFrameNumber },
			{ "Subtract_FrameNumberInteger", &UTimeManagementBlueprintLibrary::execSubtract_FrameNumberInteger },
			{ "TransformTime", &UTimeManagementBlueprintLibrary::execTransformTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics
	{
		struct TimeManagementBlueprintLibrary_eventAdd_FrameNumberFrameNumber_Parms
		{
			FFrameNumber A;
			FFrameNumber B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberFrameNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberFrameNumber_Parms, B), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberFrameNumber_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Addition (FrameNumber A + FrameNumber B) */" },
		{ "CommutativeAssociativeBinaryOperator", "true" },
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "FrameNumber + FrameNumber" },
		{ "Keywords", "+ add plus" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "+;+=" },
		{ "ToolTip", "Addition (FrameNumber A + FrameNumber B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Add_FrameNumberFrameNumber", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventAdd_FrameNumberFrameNumber_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics
	{
		struct TimeManagementBlueprintLibrary_eventAdd_FrameNumberInteger_Parms
		{
			FFrameNumber A;
			int32 B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberInteger_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventAdd_FrameNumberInteger_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Addition (FrameNumber A + int B) */" },
		{ "CompactNodeTitle", "+" },
		{ "DisplayName", "FrameNumber + Int" },
		{ "Keywords", "+ add plus" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "+;+=" },
		{ "ToolTip", "Addition (FrameNumber A + int B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Add_FrameNumberInteger", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventAdd_FrameNumberInteger_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics
	{
		struct TimeManagementBlueprintLibrary_eventConv_FrameNumberToInteger_Parms
		{
			FFrameNumber InFrameNumber;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_FrameNumberToInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_InFrameNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_FrameNumberToInteger_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_InFrameNumber_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_InFrameNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::NewProp_InFrameNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Converts a FrameNumber to an int32 for use in functions that take int32 frame counts for convenience. */" },
		{ "DisplayName", "FrameNumber to Integer" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptName", "FrameNumberToInteger" },
		{ "ToolTip", "Converts a FrameNumber to an int32 for use in functions that take int32 frame counts for convenience." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Conv_FrameNumberToInteger", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventConv_FrameNumberToInteger_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventConv_FrameRateToSeconds_Parms
		{
			FFrameRate InFrameRate;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_FrameRateToSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_InFrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_InFrameRate = { "InFrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_FrameRateToSeconds_Parms, InFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_InFrameRate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_InFrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::NewProp_InFrameRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Converts an FrameRate to a float ie: 1/30 returns 0.0333333 */" },
		{ "DisplayName", "FrameRate to Seconds" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Converts an FrameRate to a float ie: 1/30 returns 0.0333333" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Conv_FrameRateToSeconds", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventConv_FrameRateToSeconds_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct TimeManagementBlueprintLibrary_eventConv_QualifiedFrameTimeToSeconds_Parms
		{
			FQualifiedFrameTime InFrameTime;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_QualifiedFrameTimeToSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_InFrameTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_InFrameTime = { "InFrameTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_QualifiedFrameTimeToSeconds_Parms, InFrameTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_InFrameTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_InFrameTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::NewProp_InFrameTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Converts an QualifiedFrameTime to seconds. */" },
		{ "DisplayName", "QualifiedFrameTime to Seconds" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Converts an QualifiedFrameTime to seconds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Conv_QualifiedFrameTimeToSeconds", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventConv_QualifiedFrameTimeToSeconds_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms
		{
			FTimecode InTimecode;
			bool bForceSignDisplay;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_bForceSignDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceSignDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimecode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTimecode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_bForceSignDisplay_SetBit(void* Obj)
	{
		((TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms*)Obj)->bForceSignDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_bForceSignDisplay = { "bForceSignDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms), &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_bForceSignDisplay_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_InTimecode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_InTimecode = { "InTimecode", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms, InTimecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_InTimecode_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_InTimecode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_bForceSignDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::NewProp_InTimecode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Converts an Timecode to a string (hh:mm:ss:ff). If bForceSignDisplay then the number sign will always be prepended instead of just when expressing a negative time. */" },
		{ "CPP_Default_bForceSignDisplay", "false" },
		{ "DisplayName", "Timecode to String" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Converts an Timecode to a string (hh:mm:ss:ff). If bForceSignDisplay then the number sign will always be prepended instead of just when expressing a negative time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Conv_TimecodeToString", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventConv_TimecodeToString_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics
	{
		struct TimeManagementBlueprintLibrary_eventDivide_FrameNumberInteger_Parms
		{
			FFrameNumber A;
			int32 B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventDivide_FrameNumberInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventDivide_FrameNumberInteger_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventDivide_FrameNumberInteger_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Divide (FrameNumber A / B) */" },
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "FrameNumber - FrameNumber" },
		{ "Keywords", "/ divide" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "/;/=" },
		{ "ToolTip", "Divide (FrameNumber A / B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Divide_FrameNumberInteger", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventDivide_FrameNumberInteger_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct TimeManagementBlueprintLibrary_eventGetTimecode_Parms
		{
			FTimecode ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventGetTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Timecode Provider" },
		{ "Comment", "/**\n\x09 * Get the Timecode from the TimeManagement's TimecodeProvider.\n\x09 * @return true if the Timecode is valid. The timecode is valid when the TimecodeProfier is Synchronized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Get the Timecode from the TimeManagement's TimecodeProvider.\n@return true if the Timecode is valid. The timecode is valid when the TimecodeProfier is Synchronized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "GetTimecode", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventGetTimecode_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventIsValid_Framerate_Parms
		{
			FFrameRate InFrameRate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeManagementBlueprintLibrary_eventIsValid_Framerate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeManagementBlueprintLibrary_eventIsValid_Framerate_Parms), &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_InFrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_InFrameRate = { "InFrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventIsValid_Framerate_Parms, InFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_InFrameRate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_InFrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::NewProp_InFrameRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Verifies that this is a valid framerate with a non-zero denominator. */" },
		{ "DisplayName", "IsValid" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Verifies that this is a valid framerate with a non-zero denominator." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "IsValid_Framerate", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventIsValid_Framerate_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms
		{
			FFrameRate InFrameRate;
			FFrameRate OtherFramerate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherFramerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherFramerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms), &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_OtherFramerate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_OtherFramerate = { "OtherFramerate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms, OtherFramerate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_OtherFramerate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_OtherFramerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_InFrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_InFrameRate = { "InFrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms, InFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_InFrameRate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_InFrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_OtherFramerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::NewProp_InFrameRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Checks if this framerate is an even multiple of another framerate, ie: 60 is a multiple of 30, but 59.94 is not. */" },
		{ "DisplayName", "Is Multiple Of" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Checks if this framerate is an even multiple of another framerate, ie: 60 is a multiple of 30, but 59.94 is not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "IsValid_MultipleOf", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventIsValid_MultipleOf_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics
	{
		struct TimeManagementBlueprintLibrary_eventMultiply_FrameNumberInteger_Parms
		{
			FFrameNumber A;
			int32 B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_FrameNumberInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_FrameNumberInteger_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_FrameNumberInteger_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Multiply (FrameNumber A * B) */" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "FrameNumber * Int" },
		{ "Keywords", "* multiply" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "*;*=" },
		{ "ToolTip", "Multiply (FrameNumber A * B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Multiply_FrameNumberInteger", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventMultiply_FrameNumberInteger_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventMultiply_SecondsFrameRate_Parms
		{
			float TimeInSeconds;
			FFrameRate FrameRate;
			FFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_SecondsFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_FrameRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_SecondsFrameRate_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_FrameRate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_FrameRate_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventMultiply_SecondsFrameRate_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::NewProp_TimeInSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Multiplies a value in seconds against a FrameRate to get a new FrameTime. */" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "Seconds * FrameRate" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Multiplies a value in seconds against a FrameRate to get a new FrameTime." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Multiply_SecondsFrameRate", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventMultiply_SecondsFrameRate_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms
		{
			FFrameTime SourceTime;
			FFrameRate SourceRate;
			FFrameRate SnapToRate;
			FFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapToRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapToRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SnapToRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SnapToRate = { "SnapToRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms, SnapToRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SnapToRate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SnapToRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceRate = { "SourceRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms, SourceRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceRate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceTime = { "SourceTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms, SourceTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SnapToRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::NewProp_SourceTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Snaps the given SourceTime to the nearest frame in the specified Destination Framerate. Useful for determining the nearest frame for another resolution. Returns the frame time in the destination frame rate. */" },
		{ "DisplayName", "Snap Frame Time" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Snaps the given SourceTime to the nearest frame in the specified Destination Framerate. Useful for determining the nearest frame for another resolution. Returns the frame time in the destination frame rate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "SnapFrameTimeToRate", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventSnapFrameTimeToRate_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics
	{
		struct TimeManagementBlueprintLibrary_eventSubtract_FrameNumberFrameNumber_Parms
		{
			FFrameNumber A;
			FFrameNumber B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberFrameNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberFrameNumber_Parms, B), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberFrameNumber_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Subtraction (FrameNumber A - FrameNumber B) */" },
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "FrameNumber - FrameNumber" },
		{ "Keywords", "- subtract minus" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "-;-=" },
		{ "ToolTip", "Subtraction (FrameNumber A - FrameNumber B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Subtract_FrameNumberFrameNumber", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberFrameNumber_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics
	{
		struct TimeManagementBlueprintLibrary_eventSubtract_FrameNumberInteger_Parms
		{
			FFrameNumber A;
			int32 B;
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberInteger_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberInteger_Parms, A), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Subtraction (FrameNumber A - int B) */" },
		{ "CompactNodeTitle", "-" },
		{ "DisplayName", "FrameNumber - Int" },
		{ "Keywords", "- subtract minus" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "-;-=" },
		{ "ToolTip", "Subtraction (FrameNumber A - int B)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "Subtract_FrameNumberInteger", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventSubtract_FrameNumberInteger_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics
	{
		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct TimeManagementBlueprintLibrary_eventTransformTime_Parms
		{
			FFrameTime SourceTime;
			FFrameRate SourceRate;
			FFrameRate DestinationRate;
			FFrameTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventTransformTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_DestinationRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_DestinationRate = { "DestinationRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventTransformTime_Parms, DestinationRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_DestinationRate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_DestinationRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceRate = { "SourceRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventTransformTime_Parms, SourceRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceRate_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceTime = { "SourceTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeManagementBlueprintLibrary_eventTransformTime_Parms, SourceTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_DestinationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::NewProp_SourceTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Time Management" },
		{ "Comment", "/** Converts the specified time from one framerate to another framerate. This is useful for converting between tick resolution and display rate. */" },
		{ "DisplayName", "Transform Frame Time" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ToolTip", "Converts the specified time from one framerate to another framerate. This is useful for converting between tick resolution and display rate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeManagementBlueprintLibrary, nullptr, "TransformTime", nullptr, nullptr, sizeof(TimeManagementBlueprintLibrary_eventTransformTime_Parms), Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimeManagementBlueprintLibrary_NoRegister()
	{
		return UTimeManagementBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber, "Add_FrameNumberFrameNumber" }, // 3744826297
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Add_FrameNumberInteger, "Add_FrameNumberInteger" }, // 4167849124
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger, "Conv_FrameNumberToInteger" }, // 3371550436
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds, "Conv_FrameRateToSeconds" }, // 3302533895
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds, "Conv_QualifiedFrameTimeToSeconds" }, // 3925171742
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Conv_TimecodeToString, "Conv_TimecodeToString" }, // 2412956427
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger, "Divide_FrameNumberInteger" }, // 2708479571
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_GetTimecode, "GetTimecode" }, // 1608444754
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_Framerate, "IsValid_Framerate" }, // 2729787647
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_IsValid_MultipleOf, "IsValid_MultipleOf" }, // 3293575168
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger, "Multiply_FrameNumberInteger" }, // 85521843
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate, "Multiply_SecondsFrameRate" }, // 1982397100
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_SnapFrameTimeToRate, "SnapFrameTimeToRate" }, // 3631237369
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber, "Subtract_FrameNumberFrameNumber" }, // 1175520731
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger, "Subtract_FrameNumberInteger" }, // 3838414025
		{ &Z_Construct_UFunction_UTimeManagementBlueprintLibrary_TransformTime, "TransformTime" }, // 108542245
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TimeManagementBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/TimeManagementBlueprintLibrary.h" },
		{ "ScriptName", "TimeManagementLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeManagementBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::ClassParams = {
		&UTimeManagementBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeManagementBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeManagementBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeManagementBlueprintLibrary, 1149975012);
	template<> TIMEMANAGEMENT_API UClass* StaticClass<UTimeManagementBlueprintLibrary>()
	{
		return UTimeManagementBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeManagementBlueprintLibrary(Z_Construct_UClass_UTimeManagementBlueprintLibrary, &UTimeManagementBlueprintLibrary::StaticClass, TEXT("/Script/TimeManagement"), TEXT("UTimeManagementBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeManagementBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
