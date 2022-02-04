// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DAGMALOAH_DifficultyManager_generated_h
#error "DifficultyManager.generated.h already included, missing '#pragma once' in DifficultyManager.h"
#endif
#define DAGMALOAH_DifficultyManager_generated_h

#define DagMaloah_Source_DagMaloah_DifficultyManager_h_18_SPARSE_DATA
#define DagMaloah_Source_DagMaloah_DifficultyManager_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHardDifficulty); \
	DECLARE_FUNCTION(execMediumDifficulty); \
	DECLARE_FUNCTION(execEasyDifficulty);


#define DagMaloah_Source_DagMaloah_DifficultyManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHardDifficulty); \
	DECLARE_FUNCTION(execMediumDifficulty); \
	DECLARE_FUNCTION(execEasyDifficulty);


#define DagMaloah_Source_DagMaloah_DifficultyManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADifficultyManager(); \
	friend struct Z_Construct_UClass_ADifficultyManager_Statics; \
public: \
	DECLARE_CLASS(ADifficultyManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(ADifficultyManager)


#define DagMaloah_Source_DagMaloah_DifficultyManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesADifficultyManager(); \
	friend struct Z_Construct_UClass_ADifficultyManager_Statics; \
public: \
	DECLARE_CLASS(ADifficultyManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(ADifficultyManager)


#define DagMaloah_Source_DagMaloah_DifficultyManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADifficultyManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADifficultyManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADifficultyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADifficultyManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADifficultyManager(ADifficultyManager&&); \
	NO_API ADifficultyManager(const ADifficultyManager&); \
public:


#define DagMaloah_Source_DagMaloah_DifficultyManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADifficultyManager(ADifficultyManager&&); \
	NO_API ADifficultyManager(const ADifficultyManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADifficultyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADifficultyManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADifficultyManager)


#define DagMaloah_Source_DagMaloah_DifficultyManager_h_18_PRIVATE_PROPERTY_OFFSET
#define DagMaloah_Source_DagMaloah_DifficultyManager_h_15_PROLOG
#define DagMaloah_Source_DagMaloah_DifficultyManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_DifficultyManager_h_18_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_DifficultyManager_h_18_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_DifficultyManager_h_18_RPC_WRAPPERS \
	DagMaloah_Source_DagMaloah_DifficultyManager_h_18_INCLASS \
	DagMaloah_Source_DagMaloah_DifficultyManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DagMaloah_Source_DagMaloah_DifficultyManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_DifficultyManager_h_18_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_DifficultyManager_h_18_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_DifficultyManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_DifficultyManager_h_18_INCLASS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_DifficultyManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAGMALOAH_API UClass* StaticClass<class ADifficultyManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DagMaloah_Source_DagMaloah_DifficultyManager_h


#define FOREACH_ENUM_DIFFICULTY(op) \
	op(Easy) \
	op(Medium) \
	op(Hard) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
