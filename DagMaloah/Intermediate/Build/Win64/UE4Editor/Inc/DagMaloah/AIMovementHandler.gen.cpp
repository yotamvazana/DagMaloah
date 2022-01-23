// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/AIMovementHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMovementHandler() {}
// Cross Module References
	DAGMALOAH_API UClass* Z_Construct_UClass_UAIMovementHandler_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_UAIMovementHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(UAIMovementHandler::execGetEmptyDirection)
	{
		P_GET_OBJECT(AController,Z_Param_AI);
		P_GET_PROPERTY(FFloatProperty,Z_Param_rayDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetEmptyDirection(Z_Param_AI,Z_Param_rayDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIMovementHandler::execShootRaycast)
	{
		P_GET_OBJECT(AController,Z_Param_character);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->ShootRaycast(Z_Param_character,Z_Param_distance);
		P_NATIVE_END;
	}
	void UAIMovementHandler::StaticRegisterNativesUAIMovementHandler()
	{
		UClass* Class = UAIMovementHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEmptyDirection", &UAIMovementHandler::execGetEmptyDirection },
			{ "ShootRaycast", &UAIMovementHandler::execShootRaycast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics
	{
		struct AIMovementHandler_eventGetEmptyDirection_Parms
		{
			AController* AI;
			float rayDistance;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AI;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rayDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::NewProp_AI = { "AI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMovementHandler_eventGetEmptyDirection_Parms, AI), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::NewProp_rayDistance = { "rayDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMovementHandler_eventGetEmptyDirection_Parms, rayDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMovementHandler_eventGetEmptyDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::NewProp_AI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::NewProp_rayDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIMovementHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMovementHandler, nullptr, "GetEmptyDirection", nullptr, nullptr, sizeof(AIMovementHandler_eventGetEmptyDirection_Parms), Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics
	{
		struct AIMovementHandler_eventShootRaycast_Parms
		{
			AController* character;
			float distance;
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMovementHandler_eventShootRaycast_Parms, character), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMovementHandler_eventShootRaycast_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIMovementHandler_eventShootRaycast_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::NewProp_character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIMovementHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMovementHandler, nullptr, "ShootRaycast", nullptr, nullptr, sizeof(AIMovementHandler_eventShootRaycast_Parms), Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMovementHandler_ShootRaycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMovementHandler_ShootRaycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIMovementHandler_NoRegister()
	{
		return UAIMovementHandler::StaticClass();
	}
	struct Z_Construct_UClass_UAIMovementHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIMovementHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIMovementHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIMovementHandler_GetEmptyDirection, "GetEmptyDirection" }, // 2690632455
		{ &Z_Construct_UFunction_UAIMovementHandler_ShootRaycast, "ShootRaycast" }, // 624370254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMovementHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AIMovementHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AIMovementHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIMovementHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIMovementHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIMovementHandler_Statics::ClassParams = {
		&UAIMovementHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIMovementHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMovementHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIMovementHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIMovementHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIMovementHandler, 1559252520);
	template<> DAGMALOAH_API UClass* StaticClass<UAIMovementHandler>()
	{
		return UAIMovementHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIMovementHandler(Z_Construct_UClass_UAIMovementHandler, &UAIMovementHandler::StaticClass, TEXT("/Script/DagMaloah"), TEXT("UAIMovementHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIMovementHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
