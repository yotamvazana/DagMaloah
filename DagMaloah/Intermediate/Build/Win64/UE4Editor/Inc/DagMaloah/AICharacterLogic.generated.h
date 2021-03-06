// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef DAGMALOAH_AICharacterLogic_generated_h
#error "AICharacterLogic.generated.h already included, missing '#pragma once' in AICharacterLogic.h"
#endif
#define DAGMALOAH_AICharacterLogic_generated_h

#define DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_SPARSE_DATA
#define DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMovementSpeed); \
	DECLARE_FUNCTION(execRotateTowards); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execMoveRight);


#define DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMovementSpeed); \
	DECLARE_FUNCTION(execRotateTowards); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execMoveRight);


#define DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAICharacterLogic(); \
	friend struct Z_Construct_UClass_AAICharacterLogic_Statics; \
public: \
	DECLARE_CLASS(AAICharacterLogic, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(AAICharacterLogic)


#define DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAICharacterLogic(); \
	friend struct Z_Construct_UClass_AAICharacterLogic_Statics; \
public: \
	DECLARE_CLASS(AAICharacterLogic, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(AAICharacterLogic)


#define DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAICharacterLogic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAICharacterLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacterLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacterLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacterLogic(AAICharacterLogic&&); \
	NO_API AAICharacterLogic(const AAICharacterLogic&); \
public:


#define DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacterLogic(AAICharacterLogic&&); \
	NO_API AAICharacterLogic(const AAICharacterLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacterLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacterLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAICharacterLogic)


#define DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___movementHandler() { return STRUCT_OFFSET(AAICharacterLogic, _movementHandler); } \
	FORCEINLINE static uint32 __PPO___data() { return STRUCT_OFFSET(AAICharacterLogic, _data); } \
	FORCEINLINE static uint32 __PPO___movementSpeed() { return STRUCT_OFFSET(AAICharacterLogic, _movementSpeed); }


#define DagMaloah_Source_DagMaloah_AICharacterLogic_h_11_PROLOG
#define DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_RPC_WRAPPERS \
	DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_INCLASS \
	DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_INCLASS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_AICharacterLogic_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAGMALOAH_API UClass* StaticClass<class AAICharacterLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DagMaloah_Source_DagMaloah_AICharacterLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
