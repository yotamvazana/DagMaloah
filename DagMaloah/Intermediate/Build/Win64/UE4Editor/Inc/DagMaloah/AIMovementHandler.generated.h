// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
struct FRotator;
struct FHitResult;
#ifdef DAGMALOAH_AIMovementHandler_generated_h
#error "AIMovementHandler.generated.h already included, missing '#pragma once' in AIMovementHandler.h"
#endif
#define DAGMALOAH_AIMovementHandler_generated_h

#define DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_SPARSE_DATA
#define DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEmptyDirection); \
	DECLARE_FUNCTION(execShootRaycast);


#define DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEmptyDirection); \
	DECLARE_FUNCTION(execShootRaycast);


#define DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIMovementHandler(); \
	friend struct Z_Construct_UClass_UAIMovementHandler_Statics; \
public: \
	DECLARE_CLASS(UAIMovementHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(UAIMovementHandler)


#define DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAIMovementHandler(); \
	friend struct Z_Construct_UClass_UAIMovementHandler_Statics; \
public: \
	DECLARE_CLASS(UAIMovementHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(UAIMovementHandler)


#define DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIMovementHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIMovementHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMovementHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMovementHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMovementHandler(UAIMovementHandler&&); \
	NO_API UAIMovementHandler(const UAIMovementHandler&); \
public:


#define DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIMovementHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMovementHandler(UAIMovementHandler&&); \
	NO_API UAIMovementHandler(const UAIMovementHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMovementHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMovementHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIMovementHandler)


#define DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_PRIVATE_PROPERTY_OFFSET
#define DagMaloah_Source_DagMaloah_AIMovementHandler_h_14_PROLOG
#define DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_RPC_WRAPPERS \
	DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_INCLASS \
	DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_INCLASS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_AIMovementHandler_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAGMALOAH_API UClass* StaticClass<class UAIMovementHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DagMaloah_Source_DagMaloah_AIMovementHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
