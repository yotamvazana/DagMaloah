// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/StandingState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStandingState() {}
// Cross Module References
	DAGMALOAH_API UClass* Z_Construct_UClass_UStandingState_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_UStandingState();
	DAGMALOAH_API UClass* Z_Construct_UClass_UBaseState();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
// End Cross Module References
	void UStandingState::StaticRegisterNativesUStandingState()
	{
	}
	UClass* Z_Construct_UClass_UStandingState_NoRegister()
	{
		return UStandingState::StaticClass();
	}
	struct Z_Construct_UClass_UStandingState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStandingState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseState,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStandingState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StandingState.h" },
		{ "ModuleRelativePath", "StandingState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStandingState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandingState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStandingState_Statics::ClassParams = {
		&UStandingState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStandingState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStandingState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStandingState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStandingState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStandingState, 3230451183);
	template<> DAGMALOAH_API UClass* StaticClass<UStandingState>()
	{
		return UStandingState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStandingState(Z_Construct_UClass_UStandingState, &UStandingState::StaticClass, TEXT("/Script/DagMaloah"), TEXT("UStandingState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStandingState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
