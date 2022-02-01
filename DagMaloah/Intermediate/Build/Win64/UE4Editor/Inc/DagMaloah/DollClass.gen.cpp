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
	DAGMALOAH_API UFunction* Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
	DAGMALOAH_API UClass* Z_Construct_UClass_ADollClass_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_ADollClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics
	{
		struct _Script_DagMaloah_eventOnGreenLight_Parms
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
	void Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::NewProp_isRed_SetBit(void* Obj)
	{
		((_Script_DagMaloah_eventOnGreenLight_Parms*)Obj)->isRed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::NewProp_isRed = { "isRed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DagMaloah_eventOnGreenLight_Parms), &Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::NewProp_isRed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::NewProp_isRed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DollClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DagMaloah, nullptr, "OnGreenLight__DelegateSignature", nullptr, nullptr, sizeof(_Script_DagMaloah_eventOnGreenLight_Parms), Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ADollClass::execTriggerLightChange)
	{
		P_GET_UBOOL(Z_Param_isRed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerLightChange(Z_Param_isRed);
		P_NATIVE_END;
	}
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
			{ "TriggerLightChange", &ADollClass::execTriggerLightChange },
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
	struct Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics
	{
		struct DollClass_eventTriggerLightChange_Parms
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
	void Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::NewProp_isRed_SetBit(void* Obj)
	{
		((DollClass_eventTriggerLightChange_Parms*)Obj)->isRed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::NewProp_isRed = { "isRed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DollClass_eventTriggerLightChange_Parms), &Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::NewProp_isRed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::NewProp_isRed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Doll" },
		{ "ModuleRelativePath", "DollClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADollClass, nullptr, "TriggerLightChange", nullptr, nullptr, sizeof(DollClass_eventTriggerLightChange_Parms), Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADollClass_TriggerLightChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADollClass_TriggerLightChange_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LightChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADollClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADollClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADollClass_RayTestFromDoll, "RayTestFromDoll" }, // 2770385814
		{ &Z_Construct_UFunction_ADollClass_TriggerLightChange, "TriggerLightChange" }, // 1728131021
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADollClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// daclare an event (name, type, name of type) \n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DollClass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DollClass.h" },
		{ "ToolTip", "daclare an event (name, type, name of type)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADollClass_Statics::NewProp_LightChange_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "DollClass.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADollClass_Statics::NewProp_LightChange = { "LightChange", nullptr, (EPropertyFlags)0x00100000100a0001, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADollClass, LightChange), Z_Construct_UDelegateFunction_DagMaloah_OnGreenLight__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADollClass_Statics::NewProp_LightChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADollClass_Statics::NewProp_LightChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADollClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADollClass_Statics::NewProp_LightChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADollClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADollClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADollClass_Statics::ClassParams = {
		&ADollClass::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADollClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADollClass_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ADollClass, 4251323170);
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
