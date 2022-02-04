// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/MyDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDataAsset() {}
// Cross Module References
	DAGMALOAH_API UClass* Z_Construct_UClass_UMyDataAsset_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_UMyDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
// End Cross Module References
	void UMyDataAsset::StaticRegisterNativesUMyDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UMyDataAsset_NoRegister()
	{
		return UMyDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMyDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyDataAsset.h" },
		{ "ModuleRelativePath", "MyDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyDataAsset_Statics::ClassParams = {
		&UMyDataAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyDataAsset, 807224234);
	template<> DAGMALOAH_API UClass* StaticClass<UMyDataAsset>()
	{
		return UMyDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyDataAsset(Z_Construct_UClass_UMyDataAsset, &UMyDataAsset::StaticClass, TEXT("/Script/DagMaloah"), TEXT("UMyDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
