// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/AICharacterLogic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacterLogic() {}
// Cross Module References
	DAGMALOAH_API UClass* Z_Construct_UClass_AAICharacterLogic_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_AAICharacterLogic();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	DAGMALOAH_API UClass* Z_Construct_UClass_UAIMovementHandler_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_UAIDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAICharacterLogic::execSetMovementSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementSpeed(Z_Param_speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAICharacterLogic::execRotateTowards)
	{
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateTowards(Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAICharacterLogic::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAICharacterLogic::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_value);
		P_NATIVE_END;
	}
	void AAICharacterLogic::StaticRegisterNativesAAICharacterLogic()
	{
		UClass* Class = AAICharacterLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &AAICharacterLogic::execMoveForward },
			{ "MoveRight", &AAICharacterLogic::execMoveRight },
			{ "RotateTowards", &AAICharacterLogic::execRotateTowards },
			{ "SetMovementSpeed", &AAICharacterLogic::execSetMovementSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAICharacterLogic_MoveForward_Statics
	{
		struct AICharacterLogic_eventMoveForward_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAICharacterLogic_MoveForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterLogic_eventMoveForward_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacterLogic_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterLogic_MoveForward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "MoveForward", nullptr, nullptr, sizeof(AICharacterLogic_eventMoveForward_Parms), Z_Construct_UFunction_AAICharacterLogic_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterLogic_MoveRight_Statics
	{
		struct AICharacterLogic_eventMoveRight_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAICharacterLogic_MoveRight_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterLogic_eventMoveRight_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacterLogic_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterLogic_MoveRight_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "MoveRight", nullptr, nullptr, sizeof(AICharacterLogic_eventMoveRight_Parms), Z_Construct_UFunction_AAICharacterLogic_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterLogic_RotateTowards_Statics
	{
		struct AICharacterLogic_eventRotateTowards_Parms
		{
			FRotator rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAICharacterLogic_RotateTowards_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterLogic_eventRotateTowards_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacterLogic_RotateTowards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterLogic_RotateTowards_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_RotateTowards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_RotateTowards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "RotateTowards", nullptr, nullptr, sizeof(AICharacterLogic_eventRotateTowards_Parms), Z_Construct_UFunction_AAICharacterLogic_RotateTowards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_RotateTowards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_RotateTowards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_RotateTowards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_RotateTowards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_RotateTowards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed_Statics
	{
		struct AICharacterLogic_eventSetMovementSpeed_Parms
		{
			float speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterLogic_eventSetMovementSpeed_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "SetMovementSpeed", nullptr, nullptr, sizeof(AICharacterLogic_eventSetMovementSpeed_Parms), Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAICharacterLogic_NoRegister()
	{
		return AAICharacterLogic::StaticClass();
	}
	struct Z_Construct_UClass_AAICharacterLogic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__movementHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__movementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICharacterLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAICharacterLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAICharacterLogic_MoveForward, "MoveForward" }, // 1866064932
		{ &Z_Construct_UFunction_AAICharacterLogic_MoveRight, "MoveRight" }, // 3597172459
		{ &Z_Construct_UFunction_AAICharacterLogic_RotateTowards, "RotateTowards" }, // 3607805735
		{ &Z_Construct_UFunction_AAICharacterLogic_SetMovementSpeed, "SetMovementSpeed" }, // 488370588
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterLogic_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AICharacterLogic.h" },
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__movementHandler_MetaData[] = {
		{ "Category", "AICharacterLogic" },
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__movementHandler = { "_movementHandler", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacterLogic, _movementHandler), Z_Construct_UClass_UAIMovementHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__movementHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__movementHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__data_MetaData[] = {
		{ "Category", "AICharacterLogic" },
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacterLogic, _data), Z_Construct_UClass_UAIDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__movementSpeed_MetaData[] = {
		{ "Category", "AICharacterLogic" },
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__movementSpeed = { "_movementSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacterLogic, _movementSpeed), METADATA_PARAMS(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__movementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__movementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICharacterLogic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__movementHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__movementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAICharacterLogic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICharacterLogic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAICharacterLogic_Statics::ClassParams = {
		&AAICharacterLogic::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAICharacterLogic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterLogic_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAICharacterLogic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterLogic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAICharacterLogic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAICharacterLogic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAICharacterLogic, 762518682);
	template<> DAGMALOAH_API UClass* StaticClass<AAICharacterLogic>()
	{
		return AAICharacterLogic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAICharacterLogic(Z_Construct_UClass_AAICharacterLogic, &AAICharacterLogic::StaticClass, TEXT("/Script/DagMaloah"), TEXT("AAICharacterLogic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAICharacterLogic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
