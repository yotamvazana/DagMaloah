// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/RaycastHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRaycastHandler() {}
// Cross Module References
	DAGMALOAH_API UClass* Z_Construct_UClass_URaycastHandler_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_URaycastHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(URaycastHandler::execGetEmptyDirection)
	{
		P_GET_OBJECT(AController,Z_Param_AI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetEmptyDirection(Z_Param_AI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URaycastHandler::execShootRaycast)
	{
		P_GET_OBJECT(AController,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=P_THIS->ShootRaycast(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URaycastHandler::execSetRayDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayDistance(Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URaycastHandler::execSetAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngle(Z_Param_angle);
		P_NATIVE_END;
	}
	void URaycastHandler::StaticRegisterNativesURaycastHandler()
	{
		UClass* Class = URaycastHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEmptyDirection", &URaycastHandler::execGetEmptyDirection },
			{ "SetAngle", &URaycastHandler::execSetAngle },
			{ "SetRayDistance", &URaycastHandler::execSetRayDistance },
			{ "ShootRaycast", &URaycastHandler::execShootRaycast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics
	{
		struct RaycastHandler_eventGetEmptyDirection_Parms
		{
			AController* AI;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AI;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::NewProp_AI = { "AI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RaycastHandler_eventGetEmptyDirection_Parms, AI), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RaycastHandler_eventGetEmptyDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::NewProp_AI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RaycastHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URaycastHandler, nullptr, "GetEmptyDirection", nullptr, nullptr, sizeof(RaycastHandler_eventGetEmptyDirection_Parms), Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URaycastHandler_GetEmptyDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URaycastHandler_GetEmptyDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URaycastHandler_SetAngle_Statics
	{
		struct RaycastHandler_eventSetAngle_Parms
		{
			float angle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_angle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URaycastHandler_SetAngle_Statics::NewProp_angle = { "angle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RaycastHandler_eventSetAngle_Parms, angle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URaycastHandler_SetAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URaycastHandler_SetAngle_Statics::NewProp_angle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URaycastHandler_SetAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RaycastHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URaycastHandler_SetAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URaycastHandler, nullptr, "SetAngle", nullptr, nullptr, sizeof(RaycastHandler_eventSetAngle_Parms), Z_Construct_UFunction_URaycastHandler_SetAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URaycastHandler_SetAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URaycastHandler_SetAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URaycastHandler_SetAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URaycastHandler_SetAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URaycastHandler_SetAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URaycastHandler_SetRayDistance_Statics
	{
		struct RaycastHandler_eventSetRayDistance_Parms
		{
			float distance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URaycastHandler_SetRayDistance_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RaycastHandler_eventSetRayDistance_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URaycastHandler_SetRayDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URaycastHandler_SetRayDistance_Statics::NewProp_distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URaycastHandler_SetRayDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RaycastHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URaycastHandler_SetRayDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URaycastHandler, nullptr, "SetRayDistance", nullptr, nullptr, sizeof(RaycastHandler_eventSetRayDistance_Parms), Z_Construct_UFunction_URaycastHandler_SetRayDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URaycastHandler_SetRayDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URaycastHandler_SetRayDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URaycastHandler_SetRayDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URaycastHandler_SetRayDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URaycastHandler_SetRayDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics
	{
		struct RaycastHandler_eventShootRaycast_Parms
		{
			AController* character;
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RaycastHandler_eventShootRaycast_Parms, character), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RaycastHandler_eventShootRaycast_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::NewProp_character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RaycastHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URaycastHandler, nullptr, "ShootRaycast", nullptr, nullptr, sizeof(RaycastHandler_eventShootRaycast_Parms), Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URaycastHandler_ShootRaycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URaycastHandler_ShootRaycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URaycastHandler_NoRegister()
	{
		return URaycastHandler::StaticClass();
	}
	struct Z_Construct_UClass_URaycastHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URaycastHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URaycastHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URaycastHandler_GetEmptyDirection, "GetEmptyDirection" }, // 2260878659
		{ &Z_Construct_UFunction_URaycastHandler_SetAngle, "SetAngle" }, // 3567775057
		{ &Z_Construct_UFunction_URaycastHandler_SetRayDistance, "SetRayDistance" }, // 517813204
		{ &Z_Construct_UFunction_URaycastHandler_ShootRaycast, "ShootRaycast" }, // 2758738475
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URaycastHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RaycastHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RaycastHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URaycastHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URaycastHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URaycastHandler_Statics::ClassParams = {
		&URaycastHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URaycastHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URaycastHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URaycastHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URaycastHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URaycastHandler, 21854741);
	template<> DAGMALOAH_API UClass* StaticClass<URaycastHandler>()
	{
		return URaycastHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URaycastHandler(Z_Construct_UClass_URaycastHandler, &URaycastHandler::StaticClass, TEXT("/Script/DagMaloah"), TEXT("URaycastHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URaycastHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
