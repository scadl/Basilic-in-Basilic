// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkInterface/Public/Roles/LiveLinkTransformRole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTransformRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkAxis();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkTransformRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkBasicRole();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor();
// End Cross Module References
	static UEnum* ELiveLinkAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkAxis, Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("ELiveLinkAxis"));
		}
		return Singleton;
	}
	template<> LIVELINKINTERFACE_API UEnum* StaticEnum<ELiveLinkAxis>()
	{
		return ELiveLinkAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELiveLinkAxis(ELiveLinkAxis_StaticEnum, TEXT("/Script/LiveLinkInterface"), TEXT("ELiveLinkAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LiveLinkInterface_ELiveLinkAxis_Hash() { return 3380901709U; }
	UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LiveLinkInterface();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELiveLinkAxis"), 0, Get_Z_Construct_UEnum_LiveLinkInterface_ELiveLinkAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELiveLinkAxis::X", (int64)ELiveLinkAxis::X },
				{ "ELiveLinkAxis::Y", (int64)ELiveLinkAxis::Y },
				{ "ELiveLinkAxis::Z", (int64)ELiveLinkAxis::Z },
				{ "ELiveLinkAxis::XNeg", (int64)ELiveLinkAxis::XNeg },
				{ "ELiveLinkAxis::YNeg", (int64)ELiveLinkAxis::YNeg },
				{ "ELiveLinkAxis::ZNeg", (int64)ELiveLinkAxis::ZNeg },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformRole.h" },
				{ "X.DisplayName", "X-Axis" },
				{ "X.Name", "ELiveLinkAxis::X" },
				{ "XNeg.DisplayName", "-X-Axis" },
				{ "XNeg.Name", "ELiveLinkAxis::XNeg" },
				{ "Y.DisplayName", "Y-Axis" },
				{ "Y.Name", "ELiveLinkAxis::Y" },
				{ "YNeg.DisplayName", "-Y-Axis" },
				{ "YNeg.Name", "ELiveLinkAxis::YNeg" },
				{ "Z.DisplayName", "Z-Axis" },
				{ "Z.Name", "ELiveLinkAxis::Z" },
				{ "ZNeg.DisplayName", "-Z-Axis" },
				{ "ZNeg.Name", "ELiveLinkAxis::ZNeg" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkInterface,
				nullptr,
				"ELiveLinkAxis",
				"ELiveLinkAxis",
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
	void ULiveLinkTransformRole::StaticRegisterNativesULiveLinkTransformRole()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkTransformRole_NoRegister()
	{
		return ULiveLinkTransformRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkTransformRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkTransformRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkBasicRole,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Camera data.\n */" },
		{ "DisplayName", "Transform Role" },
		{ "IncludePath", "Roles/LiveLinkTransformRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformRole.h" },
		{ "ToolTip", "Role associated for Camera data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkTransformRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTransformRole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTransformRole_Statics::ClassParams = {
		&ULiveLinkTransformRole::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformRole_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkTransformRole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkTransformRole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkTransformRole, 2751314937);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkTransformRole>()
	{
		return ULiveLinkTransformRole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkTransformRole(Z_Construct_UClass_ULiveLinkTransformRole, &ULiveLinkTransformRole::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkTransformRole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTransformRole);
	void ULiveLinkAxisSwitchPreProcessor::StaticRegisterNativesULiveLinkAxisSwitchPreProcessor()
	{
	}
	UClass* Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_NoRegister()
	{
		return ULiveLinkAxisSwitchPreProcessor::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisZ;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisZ_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisY_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisY;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisY_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisX_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisX;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisX_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkFramePreProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows to switch any axis of an incoming transform with another axis.\n * @note For example the Z-Axis of an incoming transform can be set to the (optionally negated) Y-Axis of the transform in UE.\n * @note This implies that translation, rotation and scale will be affected by switching an axis.\n */" },
		{ "DisplayName", "Axis Switch" },
		{ "IncludePath", "Roles/LiveLinkTransformRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformRole.h" },
		{ "ToolTip", "Allows to switch any axis of an incoming transform with another axis.\n@note For example the Z-Axis of an incoming transform can be set to the (optionally negated) Y-Axis of the transform in UE.\n@note This implies that translation, rotation and scale will be affected by switching an axis." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisZ_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformRole.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisZ = { "AxisZ", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkAxisSwitchPreProcessor, AxisZ), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisZ_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisZ_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisY_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformRole.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisY = { "AxisY", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkAxisSwitchPreProcessor, AxisY), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisY_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisY_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisX_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformRole.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisX = { "AxisX", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULiveLinkAxisSwitchPreProcessor, AxisX), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisX_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisX_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisZ_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisY_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::NewProp_AxisX_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAxisSwitchPreProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::ClassParams = {
		&ULiveLinkAxisSwitchPreProcessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULiveLinkAxisSwitchPreProcessor, 4189582575);
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkAxisSwitchPreProcessor>()
	{
		return ULiveLinkAxisSwitchPreProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULiveLinkAxisSwitchPreProcessor(Z_Construct_UClass_ULiveLinkAxisSwitchPreProcessor, &ULiveLinkAxisSwitchPreProcessor::StaticClass, TEXT("/Script/LiveLinkInterface"), TEXT("ULiveLinkAxisSwitchPreProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAxisSwitchPreProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
