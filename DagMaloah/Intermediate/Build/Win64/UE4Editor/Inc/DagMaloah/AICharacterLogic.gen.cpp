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
	DAGMALOAH_API UEnum* Z_Construct_UEnum_DagMaloah_StateTypeEnum();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
	DAGMALOAH_API UClass* Z_Construct_UClass_AAICharacterLogic_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_AAICharacterLogic();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	DAGMALOAH_API UClass* Z_Construct_UClass_UAIMovementHandler_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_UAIDataAsset_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_URaycastHandler_NoRegister();
// End Cross Module References
	static UEnum* StateTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DagMaloah_StateTypeEnum, Z_Construct_UPackage__Script_DagMaloah(), TEXT("StateTypeEnum"));
		}
		return Singleton;
	}
	template<> DAGMALOAH_API UEnum* StaticEnum<StateTypeEnum>()
	{
		return StateTypeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_StateTypeEnum(StateTypeEnum_StaticEnum, TEXT("/Script/DagMaloah"), TEXT("StateTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DagMaloah_StateTypeEnum_Hash() { return 1788912888U; }
	UEnum* Z_Construct_UEnum_DagMaloah_StateTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DagMaloah();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("StateTypeEnum"), 0, Get_Z_Construct_UEnum_DagMaloah_StateTypeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Standing_State", (int64)Standing_State },
				{ "Move_Forward_State", (int64)Move_Forward_State },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "My Enum" },
				{ "ModuleRelativePath", "AICharacterLogic.h" },
				{ "Move_Forward_State.DisplayName", "State Type: Moving Forward" },
				{ "Move_Forward_State.Name", "Move_Forward_State" },
				{ "Standing_State.DisplayName", "State Type: Standing" },
				{ "Standing_State.Name", "Standing_State" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DagMaloah,
				nullptr,
				"StateTypeEnum",
				"StateTypeEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AAICharacterLogic::execMoveToState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToState(StateTypeEnum(Z_Param_state));
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
			{ "MoveToState", &AAICharacterLogic::execMoveToState },
			{ "RotateTowards", &AAICharacterLogic::execRotateTowards },
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
	struct Z_Construct_UFunction_AAICharacterLogic_MoveToState_Statics
	{
		struct AICharacterLogic_eventMoveToState_Parms
		{
			TEnumAsByte<StateTypeEnum> state;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAICharacterLogic_MoveToState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterLogic_eventMoveToState_Parms, state), Z_Construct_UEnum_DagMaloah_StateTypeEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacterLogic_MoveToState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterLogic_MoveToState_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_MoveToState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_MoveToState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "MoveToState", nullptr, nullptr, sizeof(AICharacterLogic_eventMoveToState_Parms), Z_Construct_UFunction_AAICharacterLogic_MoveToState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_MoveToState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_MoveToState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_MoveToState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_MoveToState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_MoveToState_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rayCastHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rayCastHandler;
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
		{ &Z_Construct_UFunction_AAICharacterLogic_MoveToState, "MoveToState" }, // 2015465756
		{ &Z_Construct_UFunction_AAICharacterLogic_RotateTowards, "RotateTowards" }, // 3607805735
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__rayCastHandler_MetaData[] = {
		{ "Category", "AICharacterLogic" },
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__rayCastHandler = { "_rayCastHandler", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacterLogic, _rayCastHandler), Z_Construct_UClass_URaycastHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__rayCastHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__rayCastHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICharacterLogic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__movementHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__rayCastHandler,
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
	IMPLEMENT_CLASS(AAICharacterLogic, 1295258099);
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
