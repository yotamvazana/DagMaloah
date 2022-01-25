// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/BaseState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseState() {}
// Cross Module References
	DAGMALOAH_API UClass* Z_Construct_UClass_UBaseState_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_UBaseState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
// End Cross Module References
	void UBaseState::StaticRegisterNativesUBaseState()
	{
	}
	UClass* Z_Construct_UClass_UBaseState_NoRegister()
	{
		return UBaseState::StaticClass();
	}
	struct Z_Construct_UClass_UBaseState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseState.h" },
		{ "ModuleRelativePath", "BaseState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseState_Statics::ClassParams = {
		&UBaseState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseState, 882091692);
	template<> DAGMALOAH_API UClass* StaticClass<UBaseState>()
	{
		return UBaseState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseState(Z_Construct_UClass_UBaseState, &UBaseState::StaticClass, TEXT("/Script/DagMaloah"), TEXT("UBaseState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
