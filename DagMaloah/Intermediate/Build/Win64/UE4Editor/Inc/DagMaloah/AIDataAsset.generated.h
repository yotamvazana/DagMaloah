// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAGMALOAH_AIDataAsset_generated_h
#error "AIDataAsset.generated.h already included, missing '#pragma once' in AIDataAsset.h"
#endif
#define DAGMALOAH_AIDataAsset_generated_h

#define DagMaloah_Source_DagMaloah_AIDataAsset_h_15_SPARSE_DATA
#define DagMaloah_Source_DagMaloah_AIDataAsset_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomDeathChance); \
	DECLARE_FUNCTION(execGetRandomRayDistanceCheck); \
	DECLARE_FUNCTION(execGetRandomRayAngleCheck); \
	DECLARE_FUNCTION(execGetRandomMovementSpeed);


#define DagMaloah_Source_DagMaloah_AIDataAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomDeathChance); \
	DECLARE_FUNCTION(execGetRandomRayDistanceCheck); \
	DECLARE_FUNCTION(execGetRandomRayAngleCheck); \
	DECLARE_FUNCTION(execGetRandomMovementSpeed);


#define DagMaloah_Source_DagMaloah_AIDataAsset_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIDataAsset(); \
	friend struct Z_Construct_UClass_UAIDataAsset_Statics; \
public: \
	DECLARE_CLASS(UAIDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(UAIDataAsset)


#define DagMaloah_Source_DagMaloah_AIDataAsset_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAIDataAsset(); \
	friend struct Z_Construct_UClass_UAIDataAsset_Statics; \
public: \
	DECLARE_CLASS(UAIDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(UAIDataAsset)


#define DagMaloah_Source_DagMaloah_AIDataAsset_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIDataAsset(UAIDataAsset&&); \
	NO_API UAIDataAsset(const UAIDataAsset&); \
public:


#define DagMaloah_Source_DagMaloah_AIDataAsset_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIDataAsset(UAIDataAsset&&); \
	NO_API UAIDataAsset(const UAIDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIDataAsset)


#define DagMaloah_Source_DagMaloah_AIDataAsset_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___minMovementSpeed() { return STRUCT_OFFSET(UAIDataAsset, _minMovementSpeed); } \
	FORCEINLINE static uint32 __PPO___maxMovementSpeed() { return STRUCT_OFFSET(UAIDataAsset, _maxMovementSpeed); } \
	FORCEINLINE static uint32 __PPO___minTurningAngleRange() { return STRUCT_OFFSET(UAIDataAsset, _minTurningAngleRange); } \
	FORCEINLINE static uint32 __PPO___maxTurningAngleRange() { return STRUCT_OFFSET(UAIDataAsset, _maxTurningAngleRange); } \
	FORCEINLINE static uint32 __PPO___minRayDistanceRange() { return STRUCT_OFFSET(UAIDataAsset, _minRayDistanceRange); } \
	FORCEINLINE static uint32 __PPO___maxRayDistanceRange() { return STRUCT_OFFSET(UAIDataAsset, _maxRayDistanceRange); } \
	FORCEINLINE static uint32 __PPO___maxDeathChance() { return STRUCT_OFFSET(UAIDataAsset, _maxDeathChance); } \
	FORCEINLINE static uint32 __PPO___minDeathChance() { return STRUCT_OFFSET(UAIDataAsset, _minDeathChance); }


#define DagMaloah_Source_DagMaloah_AIDataAsset_h_12_PROLOG
#define DagMaloah_Source_DagMaloah_AIDataAsset_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_AIDataAsset_h_15_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_AIDataAsset_h_15_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_AIDataAsset_h_15_RPC_WRAPPERS \
	DagMaloah_Source_DagMaloah_AIDataAsset_h_15_INCLASS \
	DagMaloah_Source_DagMaloah_AIDataAsset_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DagMaloah_Source_DagMaloah_AIDataAsset_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_AIDataAsset_h_15_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_AIDataAsset_h_15_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_AIDataAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_AIDataAsset_h_15_INCLASS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_AIDataAsset_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAGMALOAH_API UClass* StaticClass<class UAIDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DagMaloah_Source_DagMaloah_AIDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
