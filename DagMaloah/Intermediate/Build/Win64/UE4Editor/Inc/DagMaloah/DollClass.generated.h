// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DAGMALOAH_DollClass_generated_h
#error "DollClass.generated.h already included, missing '#pragma once' in DollClass.h"
#endif
#define DAGMALOAH_DollClass_generated_h

#define DagMaloah_Source_DagMaloah_DollClass_h_12_DELEGATE \
struct _Script_DagMaloah_eventOnGreenLight_Parms \
{ \
	bool isRed; \
}; \
static inline void FOnGreenLight_DelegateWrapper(const FMulticastScriptDelegate& OnGreenLight, bool isRed) \
{ \
	_Script_DagMaloah_eventOnGreenLight_Parms Parms; \
	Parms.isRed=isRed ? true : false; \
	OnGreenLight.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DagMaloah_Source_DagMaloah_DollClass_h_17_SPARSE_DATA
#define DagMaloah_Source_DagMaloah_DollClass_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerLightChange); \
	DECLARE_FUNCTION(execRayTestFromDoll);


#define DagMaloah_Source_DagMaloah_DollClass_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerLightChange); \
	DECLARE_FUNCTION(execRayTestFromDoll);


#define DagMaloah_Source_DagMaloah_DollClass_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADollClass(); \
	friend struct Z_Construct_UClass_ADollClass_Statics; \
public: \
	DECLARE_CLASS(ADollClass, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(ADollClass)


#define DagMaloah_Source_DagMaloah_DollClass_h_17_INCLASS \
private: \
	static void StaticRegisterNativesADollClass(); \
	friend struct Z_Construct_UClass_ADollClass_Statics; \
public: \
	DECLARE_CLASS(ADollClass, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DagMaloah"), NO_API) \
	DECLARE_SERIALIZER(ADollClass)


#define DagMaloah_Source_DagMaloah_DollClass_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADollClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADollClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADollClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADollClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADollClass(ADollClass&&); \
	NO_API ADollClass(const ADollClass&); \
public:


#define DagMaloah_Source_DagMaloah_DollClass_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADollClass(ADollClass&&); \
	NO_API ADollClass(const ADollClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADollClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADollClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADollClass)


#define DagMaloah_Source_DagMaloah_DollClass_h_17_PRIVATE_PROPERTY_OFFSET
#define DagMaloah_Source_DagMaloah_DollClass_h_14_PROLOG
#define DagMaloah_Source_DagMaloah_DollClass_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_DollClass_h_17_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_DollClass_h_17_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_DollClass_h_17_RPC_WRAPPERS \
	DagMaloah_Source_DagMaloah_DollClass_h_17_INCLASS \
	DagMaloah_Source_DagMaloah_DollClass_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DagMaloah_Source_DagMaloah_DollClass_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DagMaloah_Source_DagMaloah_DollClass_h_17_PRIVATE_PROPERTY_OFFSET \
	DagMaloah_Source_DagMaloah_DollClass_h_17_SPARSE_DATA \
	DagMaloah_Source_DagMaloah_DollClass_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_DollClass_h_17_INCLASS_NO_PURE_DECLS \
	DagMaloah_Source_DagMaloah_DollClass_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DAGMALOAH_API UClass* StaticClass<class ADollClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DagMaloah_Source_DagMaloah_DollClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
