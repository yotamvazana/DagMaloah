// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/AIDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataAsset() {}
// Cross Module References
	DAGMALOAH_API UClass* Z_Construct_UClass_UAIDataAsset_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_UAIDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAIDataAsset::execGetRandomDistanceAngleCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRandomDistanceAngleCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIDataAsset::execGetRandomRayAngleCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRandomRayAngleCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIDataAsset::execGetRandomMovementSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRandomMovementSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIDataAsset::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=P_THIS->GetMesh();
		P_NATIVE_END;
	}
	void UAIDataAsset::StaticRegisterNativesUAIDataAsset()
	{
		UClass* Class = UAIDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMesh", &UAIDataAsset::execGetMesh },
			{ "GetRandomDistanceAngleCheck", &UAIDataAsset::execGetRandomDistanceAngleCheck },
			{ "GetRandomMovementSpeed", &UAIDataAsset::execGetRandomMovementSpeed },
			{ "GetRandomRayAngleCheck", &UAIDataAsset::execGetRandomRayAngleCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIDataAsset_GetMesh_Statics
	{
		struct AIDataAsset_eventGetMesh_Parms
		{
			UStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIDataAsset_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIDataAsset_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIDataAsset_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIDataAsset_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIDataAsset_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIDataAsset_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIDataAsset, nullptr, "GetMesh", nullptr, nullptr, sizeof(AIDataAsset_eventGetMesh_Parms), Z_Construct_UFunction_UAIDataAsset_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIDataAsset_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIDataAsset_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIDataAsset_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIDataAsset_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIDataAsset_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck_Statics
	{
		struct AIDataAsset_eventGetRandomDistanceAngleCheck_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIDataAsset_eventGetRandomDistanceAngleCheck_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIDataAsset, nullptr, "GetRandomDistanceAngleCheck", nullptr, nullptr, sizeof(AIDataAsset_eventGetRandomDistanceAngleCheck_Parms), Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed_Statics
	{
		struct AIDataAsset_eventGetRandomMovementSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIDataAsset_eventGetRandomMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIDataAsset, nullptr, "GetRandomMovementSpeed", nullptr, nullptr, sizeof(AIDataAsset_eventGetRandomMovementSpeed_Parms), Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck_Statics
	{
		struct AIDataAsset_eventGetRandomRayAngleCheck_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIDataAsset_eventGetRandomRayAngleCheck_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIDataAsset, nullptr, "GetRandomRayAngleCheck", nullptr, nullptr, sizeof(AIDataAsset_eventGetRandomRayAngleCheck_Parms), Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIDataAsset_NoRegister()
	{
		return UAIDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAIDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minTurningAngleRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minTurningAngleRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTurningAngleRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxTurningAngleRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__minRayDistanceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__minRayDistanceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxRayDistanceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxRayDistanceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIDataAsset_GetMesh, "GetMesh" }, // 1828418123
		{ &Z_Construct_UFunction_UAIDataAsset_GetRandomDistanceAngleCheck, "GetRandomDistanceAngleCheck" }, // 3396690025
		{ &Z_Construct_UFunction_UAIDataAsset_GetRandomMovementSpeed, "GetRandomMovementSpeed" }, // 444665502
		{ &Z_Construct_UFunction_UAIDataAsset_GetRandomRayAngleCheck, "GetRandomRayAngleCheck" }, // 902034722
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AIDataAsset.h" },
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minMovementSpeed_MetaData[] = {
		{ "Category", "AIDataAsset" },
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minMovementSpeed = { "_minMovementSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIDataAsset, _minMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxMovementSpeed_MetaData[] = {
		{ "Category", "AIDataAsset" },
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxMovementSpeed = { "_maxMovementSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIDataAsset, _maxMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minTurningAngleRange_MetaData[] = {
		{ "Category", "AIDataAsset" },
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minTurningAngleRange = { "_minTurningAngleRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIDataAsset, _minTurningAngleRange), METADATA_PARAMS(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minTurningAngleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minTurningAngleRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxTurningAngleRange_MetaData[] = {
		{ "Category", "AIDataAsset" },
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxTurningAngleRange = { "_maxTurningAngleRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIDataAsset, _maxTurningAngleRange), METADATA_PARAMS(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxTurningAngleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxTurningAngleRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minRayDistanceRange_MetaData[] = {
		{ "Category", "AIDataAsset" },
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minRayDistanceRange = { "_minRayDistanceRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIDataAsset, _minRayDistanceRange), METADATA_PARAMS(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minRayDistanceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minRayDistanceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxRayDistanceRange_MetaData[] = {
		{ "Category", "AIDataAsset" },
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxRayDistanceRange = { "_maxRayDistanceRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIDataAsset, _maxRayDistanceRange), METADATA_PARAMS(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxRayDistanceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxRayDistanceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataAsset_Statics::NewProp__mesh_MetaData[] = {
		{ "Category", "AIDataAsset" },
		{ "ModuleRelativePath", "AIDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIDataAsset_Statics::NewProp__mesh = { "_mesh", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIDataAsset, _mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataAsset_Statics::NewProp__mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minTurningAngleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxTurningAngleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataAsset_Statics::NewProp__minRayDistanceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataAsset_Statics::NewProp__maxRayDistanceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataAsset_Statics::NewProp__mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIDataAsset_Statics::ClassParams = {
		&UAIDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIDataAsset, 2065231817);
	template<> DAGMALOAH_API UClass* StaticClass<UAIDataAsset>()
	{
		return UAIDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIDataAsset(Z_Construct_UClass_UAIDataAsset, &UAIDataAsset::StaticClass, TEXT("/Script/DagMaloah"), TEXT("UAIDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
