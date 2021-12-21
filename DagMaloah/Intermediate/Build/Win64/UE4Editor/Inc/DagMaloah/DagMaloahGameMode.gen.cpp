// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/DagMaloahGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDagMaloahGameMode() {}
// Cross Module References
	DAGMALOAH_API UClass* Z_Construct_UClass_ADagMaloahGameMode_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_ADagMaloahGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
// End Cross Module References
	void ADagMaloahGameMode::StaticRegisterNativesADagMaloahGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADagMaloahGameMode_NoRegister()
	{
		return ADagMaloahGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADagMaloahGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADagMaloahGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADagMaloahGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DagMaloahGameMode.h" },
		{ "ModuleRelativePath", "DagMaloahGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADagMaloahGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADagMaloahGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADagMaloahGameMode_Statics::ClassParams = {
		&ADagMaloahGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADagMaloahGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADagMaloahGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADagMaloahGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADagMaloahGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADagMaloahGameMode, 1457925207);
	template<> DAGMALOAH_API UClass* StaticClass<ADagMaloahGameMode>()
	{
		return ADagMaloahGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADagMaloahGameMode(Z_Construct_UClass_ADagMaloahGameMode, &ADagMaloahGameMode::StaticClass, TEXT("/Script/DagMaloah"), TEXT("ADagMaloahGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADagMaloahGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
