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
#ifdef DAGMALOAH_RaycastHandler_generated_h
#error "RaycastHandler.generated.h already included, missing '#pragma once' in RaycastHandler.h"
#endif
#define DAGMALOAH_RaycastHandler_generated_h

#define DagMaloah_Source_DagMaloah_RaycastHandler_h_17_SPARSE_DATA
#define DagMaloah_Source_DagMaloah_RaycastHandler_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEmptyDirection); \
	DECLARE_FUNCTION(execShootRaycast); \
	DECLARE_FUNCTION(execSetRayDistance); \
	DECLARE_FUNCTION(execSetAngle);


#define DagMaloah_Source_DagMaloah_RaycastHandler_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEmptyDirection); \
	DECLARE_FUNCTION(execShootRaycast); \
	DECLARE_FUNCTION(execSetRayDistance); \
	DECLARE_FUNCTION(execSetAngle);


#define DagMaloah_Source_DagMaloah_RaycastHandler_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURaycastHandler(); \
	friend struct Z_Construct_UClass_URaycastHandler_Statics; \
public: \
	DECLARE_CLASS(URaycastHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(URaycastHandler)


#define DagMaloah_Source_DagMaloah_RaycastHandler_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURaycastHandler(); \
	friend struct Z_Construct_UClass_URaycastHandler_Statics; \
public: \
	DECLARE_CLASS(URaycastHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(URaycastHandler)


#define DagMaloah_Source_DagMaloah_RaycastHandler_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URaycastHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URaycastHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URaycastHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URaycastHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URaycastHandler(URaycastHandler&&); \
	NO_API URaycastHandler(const URaycastHandler&); \
public:


#define DagMaloah_Source_DagMaloah_RaycastHandler_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URaycastHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URaycastHandler(URaycastHandler&&); \
	NO_API URaycastHandler(const URaycastHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URaycastHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URaycastHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URaycastHandler)


#define DagMaloah_Source_DagMaloah_RaycastHandler_h_17_PRIVATE_PROPERTY_OFFSET
#define DagMaloah_Source_DagMaloah_RaycastHandler_h_14_PROLOG
#define DagMaloah_Source_DagMaloah_RaycastHandler_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_RaycastHandler_h_17_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_RaycastHandler_h_17_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_RaycastHandler_h_17_RPC_WRAPPERS \
	DagMaloah_Source_DagMaloah_RaycastHandler_h_17_INCLASS \
	DagMaloah_Source_DagMaloah_RaycastHandler_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DagMaloah_Source_DagMaloah_RaycastHandler_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_RaycastHandler_h_17_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_RaycastHandler_h_17_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_RaycastHandler_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_RaycastHandler_h_17_INCLASS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_RaycastHandler_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAGMALOAH_API UClass* StaticClass<class URaycastHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DagMaloah_Source_DagMaloah_RaycastHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
