// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/MyTestCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestCharacter() {}
// Cross Module References
	DAGMALOAH_API UClass* Z_Construct_UClass_AMyTestCharacter_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_AMyTestCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
// End Cross Module References
	DEFINE_FUNCTION(AMyTestCharacter::execDOSomthingWhenEventCall)
	{
		P_GET_UBOOL(Z_Param_isRed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DOSomthingWhenEventCall(Z_Param_isRed);
		P_NATIVE_END;
	}
	void AMyTestCharacter::StaticRegisterNativesAMyTestCharacter()
	{
		UClass* Class = AMyTestCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DOSomthingWhenEventCall", &AMyTestCharacter::execDOSomthingWhenEventCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics
	{
		struct MyTestCharacter_eventDOSomthingWhenEventCall_Parms
		{
			bool isRed;
		};
		static void NewProp_isRed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::NewProp_isRed_SetBit(void* Obj)
	{
		((MyTestCharacter_eventDOSomthingWhenEventCall_Parms*)Obj)->isRed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::NewProp_isRed = { "isRed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyTestCharacter_eventDOSomthingWhenEventCall_Parms), &Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::NewProp_isRed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::NewProp_isRed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::Function_MetaDataParams[] = {
		{ "Category", "Doll" },
		{ "ModuleRelativePath", "MyTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyTestCharacter, nullptr, "DOSomthingWhenEventCall", nullptr, nullptr, sizeof(MyTestCharacter_eventDOSomthingWhenEventCall_Parms), Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyTestCharacter_NoRegister()
	{
		return AMyTestCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyTestCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyTestCharacter_DOSomthingWhenEventCall, "DOSomthingWhenEventCall" }, // 3539787654
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyTestCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MyTestCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyTestCharacter_Statics::ClassParams = {
		&AMyTestCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyTestCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTestCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyTestCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyTestCharacter, 3744437292);
	template<> DAGMALOAH_API UClass* StaticClass<AMyTestCharacter>()
	{
		return AMyTestCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyTestCharacter(Z_Construct_UClass_AMyTestCharacter, &AMyTestCharacter::StaticClass, TEXT("/Script/DagMaloah"), TEXT("AMyTestCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
