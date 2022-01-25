// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/MoveState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveState() {}
// Cross Module References
	DAGMALOAH_API UClass* Z_Construct_UClass_UMoveState_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_UMoveState();
	DAGMALOAH_API UClass* Z_Construct_UClass_UBaseState();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
// End Cross Module References
	void UMoveState::StaticRegisterNativesUMoveState()
	{
	}
	UClass* Z_Construct_UClass_UMoveState_NoRegister()
	{
		return UMoveState::StaticClass();
	}
	struct Z_Construct_UClass_UMoveState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseState,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoveState.h" },
		{ "ModuleRelativePath", "MoveState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoveState_Statics::ClassParams = {
		&UMoveState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMoveState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoveState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoveState, 278216549);
	template<> DAGMALOAH_API UClass* StaticClass<UMoveState>()
	{
		return UMoveState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoveState(Z_Construct_UClass_UMoveState, &UMoveState::StaticClass, TEXT("/Script/DagMaloah"), TEXT("UMoveState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
