// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/DollClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDollClass() {}
// Cross Module References
	DAGMALOAH_API UClass* Z_Construct_UClass_ADollClass_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_ADollClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADollClass::execRayTestFromDoll)
	{
		P_GET_OBJECT(AActor,Z_Param_actorToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RayTestFromDoll(Z_Param_actorToCheck);
		P_NATIVE_END;
	}
	void ADollClass::StaticRegisterNativesADollClass()
	{
		UClass* Class = ADollClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RayTestFromDoll", &ADollClass::execRayTestFromDoll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics
	{
		struct DollClass_eventRayTestFromDoll_Parms
		{
			AActor* actorToCheck;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::NewProp_actorToCheck = { "actorToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DollClass_eventRayTestFromDoll_Parms, actorToCheck), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DollClass_eventRayTestFromDoll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DollClass_eventRayTestFromDoll_Parms), &Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::NewProp_actorToCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Doll" },
		{ "ModuleRelativePath", "DollClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADollClass, nullptr, "RayTestFromDoll", nullptr, nullptr, sizeof(DollClass_eventRayTestFromDoll_Parms), Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADollClass_RayTestFromDoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADollClass_RayTestFromDoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADollClass_NoRegister()
	{
		return ADollClass::StaticClass();
	}
	struct Z_Construct_UClass_ADollClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADollClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADollClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADollClass_RayTestFromDoll, "RayTestFromDoll" }, // 2770385814
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADollClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DollClass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DollClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADollClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADollClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADollClass_Statics::ClassParams = {
		&ADollClass::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADollClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADollClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADollClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADollClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADollClass, 3515335161);
	template<> DAGMALOAH_API UClass* StaticClass<ADollClass>()
	{
		return ADollClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADollClass(Z_Construct_UClass_ADollClass, &ADollClass::StaticClass, TEXT("/Script/DagMaloah"), TEXT("ADollClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADollClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
