// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EARObjectClassification : uint8;
class UMRMeshComponent;
enum class EARTrackingState : uint8;
struct FTransform;
enum class EARPlaneOrientation : uint8;
class UARPlaneGeometry;
struct FVector;
struct FVector2D;
class UARCandidateImage;
enum class EAREye : uint8;
enum class EARFaceBlendShape : uint8; 
enum class EARFaceBlendShape : uint8;
class UAREnvironmentCaptureProbeTexture;
class UARCandidateObject;
struct FARPose3D;
#ifdef AUGMENTEDREALITY_ARTrackable_generated_h
#error "ARTrackable.generated.h already included, missing '#pragma once' in ARTrackable.h"
#endif
#define AUGMENTEDREALITY_ARTrackable_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetObjectClassification) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARObjectClassification*)Z_Param__Result=P_THIS->GetObjectClassification(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnderlyingMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMRMeshComponent**)Z_Param__Result=P_THIS->GetUnderlyingMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLastUpdateTimestamp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLastUpdateFrameNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDebugName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetDebugName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTracked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARTrackingState*)Z_Param__Result=P_THIS->GetTrackingState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToTrackingTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToWorldTransform(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetObjectClassification) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARObjectClassification*)Z_Param__Result=P_THIS->GetObjectClassification(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnderlyingMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMRMeshComponent**)Z_Param__Result=P_THIS->GetUnderlyingMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateTimestamp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLastUpdateTimestamp(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastUpdateFrameNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLastUpdateFrameNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDebugName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetDebugName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTracked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackingState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARTrackingState*)Z_Param__Result=P_THIS->GetTrackingState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToTrackingTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToTrackingTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalToWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalToWorldTransform(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedGeometry(); \
	friend struct Z_Construct_UClass_UARTrackedGeometry_Statics; \
public: \
	DECLARE_CLASS(UARTrackedGeometry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedGeometry(); \
	friend struct Z_Construct_UClass_UARTrackedGeometry_Statics; \
public: \
	DECLARE_CLASS(UARTrackedGeometry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedGeometry(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedGeometry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedGeometry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedGeometry(UARTrackedGeometry&&); \
	NO_API UARTrackedGeometry(const UARTrackedGeometry&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedGeometry(UARTrackedGeometry&&); \
	NO_API UARTrackedGeometry(const UARTrackedGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LocalToTrackingTransform() { return STRUCT_OFFSET(UARTrackedGeometry, LocalToTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__LocalToAlignedTrackingTransform() { return STRUCT_OFFSET(UARTrackedGeometry, LocalToAlignedTrackingTransform); } \
	FORCEINLINE static uint32 __PPO__TrackingState() { return STRUCT_OFFSET(UARTrackedGeometry, TrackingState); } \
	FORCEINLINE static uint32 __PPO__UnderlyingMesh() { return STRUCT_OFFSET(UARTrackedGeometry, UnderlyingMesh); } \
	FORCEINLINE static uint32 __PPO__ObjectClassification() { return STRUCT_OFFSET(UARTrackedGeometry, ObjectClassification); } \
	FORCEINLINE static uint32 __PPO__LastUpdateFrameNumber() { return STRUCT_OFFSET(UARTrackedGeometry, LastUpdateFrameNumber); } \
	FORCEINLINE static uint32 __PPO__DebugName() { return STRUCT_OFFSET(UARTrackedGeometry, DebugName); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_12_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedGeometry>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARPlaneOrientation*)Z_Param__Result=P_THIS->GetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubsumedBy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARPlaneGeometry**)Z_Param__Result=P_THIS->GetSubsumedBy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryPolygonInLocalSpace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetBoundaryPolygonInLocalSpace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCenter(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOrientation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EARPlaneOrientation*)Z_Param__Result=P_THIS->GetOrientation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSubsumedBy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARPlaneGeometry**)Z_Param__Result=P_THIS->GetSubsumedBy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryPolygonInLocalSpace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetBoundaryPolygonInLocalSpace(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetExtent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCenter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetCenter(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPlaneGeometry(); \
	friend struct Z_Construct_UClass_UARPlaneGeometry_Statics; \
public: \
	DECLARE_CLASS(UARPlaneGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPlaneGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUARPlaneGeometry(); \
	friend struct Z_Construct_UClass_UARPlaneGeometry_Statics; \
public: \
	DECLARE_CLASS(UARPlaneGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARPlaneGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPlaneGeometry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARPlaneGeometry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPlaneGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneGeometry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPlaneGeometry(UARPlaneGeometry&&); \
	NO_API UARPlaneGeometry(const UARPlaneGeometry&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARPlaneGeometry() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARPlaneGeometry(UARPlaneGeometry&&); \
	NO_API UARPlaneGeometry(const UARPlaneGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPlaneGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPlaneGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPlaneGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Orientation() { return STRUCT_OFFSET(UARPlaneGeometry, Orientation); } \
	FORCEINLINE static uint32 __PPO__Center() { return STRUCT_OFFSET(UARPlaneGeometry, Center); } \
	FORCEINLINE static uint32 __PPO__Extent() { return STRUCT_OFFSET(UARPlaneGeometry, Extent); } \
	FORCEINLINE static uint32 __PPO__SubsumedBy() { return STRUCT_OFFSET(UARPlaneGeometry, SubsumedBy); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_108_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARPlaneGeometry>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_RPC_WRAPPERS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedPoint(); \
	friend struct Z_Construct_UClass_UARTrackedPoint_Statics; \
public: \
	DECLARE_CLASS(UARTrackedPoint, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPoint)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedPoint(); \
	friend struct Z_Construct_UClass_UARTrackedPoint_Statics; \
public: \
	DECLARE_CLASS(UARTrackedPoint, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPoint)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedPoint(UARTrackedPoint&&); \
	NO_API UARTrackedPoint(const UARTrackedPoint&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPoint() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedPoint(UARTrackedPoint&&); \
	NO_API UARTrackedPoint(const UARTrackedPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedPoint)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_155_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_158_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedPoint>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEstimateSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetEstimateSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDetectedImage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARCandidateImage**)Z_Param__Result=P_THIS->GetDetectedImage(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEstimateSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetEstimateSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDetectedImage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARCandidateImage**)Z_Param__Result=P_THIS->GetDetectedImage(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedImage(); \
	friend struct Z_Construct_UClass_UARTrackedImage_Statics; \
public: \
	DECLARE_CLASS(UARTrackedImage, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedImage(); \
	friend struct Z_Construct_UClass_UARTrackedImage_Statics; \
public: \
	DECLARE_CLASS(UARTrackedImage, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedImage(UARTrackedImage&&); \
	NO_API UARTrackedImage(const UARTrackedImage&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedImage() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedImage(UARTrackedImage&&); \
	NO_API UARTrackedImage(const UARTrackedImage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedImage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedImage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedImage)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DetectedImage() { return STRUCT_OFFSET(UARTrackedImage, DetectedImage); } \
	FORCEINLINE static uint32 __PPO__EstimatedSize() { return STRUCT_OFFSET(UARTrackedImage, EstimatedSize); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_166_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedImage>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWorldSpaceEyeTransform) \
	{ \
		P_GET_ENUM(EAREye,Z_Param_Eye); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetWorldSpaceEyeTransform(EAREye(Z_Param_Eye)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalSpaceEyeTransform) \
	{ \
		P_GET_ENUM(EAREye,Z_Param_Eye); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalSpaceEyeTransform(EAREye(Z_Param_Eye)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlendShapes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<EARFaceBlendShape,float>*)Z_Param__Result=P_THIS->GetBlendShapes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlendShapeValue) \
	{ \
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBlendShapeValue(EARFaceBlendShape(Z_Param_BlendShape)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWorldSpaceEyeTransform) \
	{ \
		P_GET_ENUM(EAREye,Z_Param_Eye); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetWorldSpaceEyeTransform(EAREye(Z_Param_Eye)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalSpaceEyeTransform) \
	{ \
		P_GET_ENUM(EAREye,Z_Param_Eye); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLocalSpaceEyeTransform(EAREye(Z_Param_Eye)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlendShapes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<EARFaceBlendShape,float>*)Z_Param__Result=P_THIS->GetBlendShapes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlendShapeValue) \
	{ \
		P_GET_ENUM(EARFaceBlendShape,Z_Param_BlendShape); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBlendShapeValue(EARFaceBlendShape(Z_Param_BlendShape)); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARFaceGeometry(); \
	friend struct Z_Construct_UClass_UARFaceGeometry_Statics; \
public: \
	DECLARE_CLASS(UARFaceGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARFaceGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_INCLASS \
private: \
	static void StaticRegisterNativesUARFaceGeometry(); \
	friend struct Z_Construct_UClass_UARFaceGeometry_Statics; \
public: \
	DECLARE_CLASS(UARFaceGeometry, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARFaceGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARFaceGeometry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARFaceGeometry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARFaceGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceGeometry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARFaceGeometry(UARFaceGeometry&&); \
	NO_API UARFaceGeometry(const UARFaceGeometry&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARFaceGeometry() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARFaceGeometry(UARFaceGeometry&&); \
	NO_API UARFaceGeometry(const UARFaceGeometry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARFaceGeometry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARFaceGeometry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARFaceGeometry)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlendShapes() { return STRUCT_OFFSET(UARFaceGeometry, BlendShapes); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_296_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_299_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARFaceGeometry>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEnvironmentCaptureTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAREnvironmentCaptureProbeTexture**)Z_Param__Result=P_THIS->GetEnvironmentCaptureTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetExtent(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEnvironmentCaptureTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAREnvironmentCaptureProbeTexture**)Z_Param__Result=P_THIS->GetEnvironmentCaptureTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetExtent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetExtent(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAREnvironmentCaptureProbe(); \
	friend struct Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics; \
public: \
	DECLARE_CLASS(UAREnvironmentCaptureProbe, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UAREnvironmentCaptureProbe)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_INCLASS \
private: \
	static void StaticRegisterNativesUAREnvironmentCaptureProbe(); \
	friend struct Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics; \
public: \
	DECLARE_CLASS(UAREnvironmentCaptureProbe, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UAREnvironmentCaptureProbe)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAREnvironmentCaptureProbe(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAREnvironmentCaptureProbe) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAREnvironmentCaptureProbe); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentCaptureProbe); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAREnvironmentCaptureProbe(UAREnvironmentCaptureProbe&&); \
	NO_API UAREnvironmentCaptureProbe(const UAREnvironmentCaptureProbe&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAREnvironmentCaptureProbe(UAREnvironmentCaptureProbe&&); \
	NO_API UAREnvironmentCaptureProbe(const UAREnvironmentCaptureProbe&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAREnvironmentCaptureProbe); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAREnvironmentCaptureProbe); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAREnvironmentCaptureProbe)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EnvironmentCaptureTexture() { return STRUCT_OFFSET(UAREnvironmentCaptureProbe, EnvironmentCaptureTexture); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_351_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_355_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UAREnvironmentCaptureProbe>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDetectedObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARCandidateObject**)Z_Param__Result=P_THIS->GetDetectedObject(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDetectedObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UARCandidateObject**)Z_Param__Result=P_THIS->GetDetectedObject(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedObject(); \
	friend struct Z_Construct_UClass_UARTrackedObject_Statics; \
public: \
	DECLARE_CLASS(UARTrackedObject, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedObject(); \
	friend struct Z_Construct_UClass_UARTrackedObject_Statics; \
public: \
	DECLARE_CLASS(UARTrackedObject, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedObject(UARTrackedObject&&); \
	NO_API UARTrackedObject(const UARTrackedObject&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedObject() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedObject(UARTrackedObject&&); \
	NO_API UARTrackedObject(const UARTrackedObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedObject)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DetectedObject() { return STRUCT_OFFSET(UARTrackedObject, DetectedObject); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_381_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_384_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedObject>();

#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTrackedPoseData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FARPose3D*)Z_Param__Result=P_THIS->GetTrackedPoseData(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTrackedPoseData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FARPose3D*)Z_Param__Result=P_THIS->GetTrackedPoseData(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARTrackedPose(); \
	friend struct Z_Construct_UClass_UARTrackedPose_Statics; \
public: \
	DECLARE_CLASS(UARTrackedPose, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPose)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_INCLASS \
private: \
	static void StaticRegisterNativesUARTrackedPose(); \
	friend struct Z_Construct_UClass_UARTrackedPose_Statics; \
public: \
	DECLARE_CLASS(UARTrackedPose, UARTrackedGeometry, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARTrackedPose)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPose(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARTrackedPose) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPose); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPose); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedPose(UARTrackedPose&&); \
	NO_API UARTrackedPose(const UARTrackedPose&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARTrackedPose() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARTrackedPose(UARTrackedPose&&); \
	NO_API UARTrackedPose(const UARTrackedPose&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARTrackedPose); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARTrackedPose); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARTrackedPose)


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_401_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h_404_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARTrackedPose>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h


#define FOREACH_ENUM_EAREYE(op) \
	op(EAREye::LeftEye) \
	op(EAREye::RightEye) 

enum class EAREye : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EAREye>();

#define FOREACH_ENUM_EARFACEBLENDSHAPE(op) \
	op(EARFaceBlendShape::EyeBlinkLeft) \
	op(EARFaceBlendShape::EyeLookDownLeft) \
	op(EARFaceBlendShape::EyeLookInLeft) \
	op(EARFaceBlendShape::EyeLookOutLeft) \
	op(EARFaceBlendShape::EyeLookUpLeft) \
	op(EARFaceBlendShape::EyeSquintLeft) \
	op(EARFaceBlendShape::EyeWideLeft) \
	op(EARFaceBlendShape::EyeBlinkRight) \
	op(EARFaceBlendShape::EyeLookDownRight) \
	op(EARFaceBlendShape::EyeLookInRight) \
	op(EARFaceBlendShape::EyeLookOutRight) \
	op(EARFaceBlendShape::EyeLookUpRight) \
	op(EARFaceBlendShape::EyeSquintRight) \
	op(EARFaceBlendShape::EyeWideRight) \
	op(EARFaceBlendShape::JawForward) \
	op(EARFaceBlendShape::JawLeft) \
	op(EARFaceBlendShape::JawRight) \
	op(EARFaceBlendShape::JawOpen) \
	op(EARFaceBlendShape::MouthClose) \
	op(EARFaceBlendShape::MouthFunnel) \
	op(EARFaceBlendShape::MouthPucker) \
	op(EARFaceBlendShape::MouthLeft) \
	op(EARFaceBlendShape::MouthRight) \
	op(EARFaceBlendShape::MouthSmileLeft) \
	op(EARFaceBlendShape::MouthSmileRight) \
	op(EARFaceBlendShape::MouthFrownLeft) \
	op(EARFaceBlendShape::MouthFrownRight) \
	op(EARFaceBlendShape::MouthDimpleLeft) \
	op(EARFaceBlendShape::MouthDimpleRight) \
	op(EARFaceBlendShape::MouthStretchLeft) \
	op(EARFaceBlendShape::MouthStretchRight) \
	op(EARFaceBlendShape::MouthRollLower) \
	op(EARFaceBlendShape::MouthRollUpper) \
	op(EARFaceBlendShape::MouthShrugLower) \
	op(EARFaceBlendShape::MouthShrugUpper) \
	op(EARFaceBlendShape::MouthPressLeft) \
	op(EARFaceBlendShape::MouthPressRight) \
	op(EARFaceBlendShape::MouthLowerDownLeft) \
	op(EARFaceBlendShape::MouthLowerDownRight) \
	op(EARFaceBlendShape::MouthUpperUpLeft) \
	op(EARFaceBlendShape::MouthUpperUpRight) \
	op(EARFaceBlendShape::BrowDownLeft) \
	op(EARFaceBlendShape::BrowDownRight) \
	op(EARFaceBlendShape::BrowInnerUp) \
	op(EARFaceBlendShape::BrowOuterUpLeft) \
	op(EARFaceBlendShape::BrowOuterUpRight) \
	op(EARFaceBlendShape::CheekPuff) \
	op(EARFaceBlendShape::CheekSquintLeft) \
	op(EARFaceBlendShape::CheekSquintRight) \
	op(EARFaceBlendShape::NoseSneerLeft) \
	op(EARFaceBlendShape::NoseSneerRight) \
	op(EARFaceBlendShape::TongueOut) \
	op(EARFaceBlendShape::HeadYaw) \
	op(EARFaceBlendShape::HeadPitch) \
	op(EARFaceBlendShape::HeadRoll) \
	op(EARFaceBlendShape::LeftEyeYaw) \
	op(EARFaceBlendShape::LeftEyePitch) \
	op(EARFaceBlendShape::LeftEyeRoll) \
	op(EARFaceBlendShape::RightEyeYaw) \
	op(EARFaceBlendShape::RightEyePitch) \
	op(EARFaceBlendShape::RightEyeRoll) 

enum class EARFaceBlendShape : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceBlendShape>();

#define FOREACH_ENUM_EARFACETRACKINGDIRECTION(op) \
	op(EARFaceTrackingDirection::FaceRelative) \
	op(EARFaceTrackingDirection::FaceMirrored) 

enum class EARFaceTrackingDirection : uint8;
template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARFaceTrackingDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
