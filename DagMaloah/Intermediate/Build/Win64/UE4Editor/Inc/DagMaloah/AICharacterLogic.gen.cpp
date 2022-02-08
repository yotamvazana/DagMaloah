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
	DAGMALOAH_API UClass* Z_Construct_UClass_UAIDataAsset_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_ADollClass_NoRegister();
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
	uint32 Get_Z_Construct_UEnum_DagMaloah_StateTypeEnum_Hash() { return 1230554545U; }
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
				{ "Decision_State", (int64)Decision_State },
				{ "Death_State", (int64)Death_State },
				{ "Winning_State", (int64)Winning_State },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "My Enum" },
				{ "Death_State.DisplayName", "State Type: Death/Losing " },
				{ "Death_State.Name", "Death_State" },
				{ "Decision_State.DisplayName", "State Type: Decision " },
				{ "Decision_State.Name", "Decision_State" },
				{ "ModuleRelativePath", "AICharacterLogic.h" },
				{ "Move_Forward_State.DisplayName", "State Type: Moving Forward" },
				{ "Move_Forward_State.Name", "Move_Forward_State" },
				{ "Standing_State.DisplayName", "State Type: Standing" },
				{ "Standing_State.Name", "Standing_State" },
				{ "Winning_State.DisplayName", "State Type: Winning " },
				{ "Winning_State.Name", "Winning_State" },
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
	DEFINE_FUNCTION(AAICharacterLogic::execUploadData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UploadData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAICharacterLogic::execMoveToState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToState(StateTypeEnum(Z_Param_state));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAICharacterLogic::execOnInitAIEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitAIEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAICharacterLogic::execSetDollReference)
	{
		P_GET_OBJECT(ADollClass,Z_Param_dollRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDollReference(Z_Param_dollRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAICharacterLogic::execSetDataAsset)
	{
		P_GET_OBJECT(UAIDataAsset,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataAsset(Z_Param_data);
		P_NATIVE_END;
	}
	static FName NAME_AAICharacterLogic_OnAIDeath = FName(TEXT("OnAIDeath"));
	void AAICharacterLogic::OnAIDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAICharacterLogic_OnAIDeath),NULL);
	}
	static FName NAME_AAICharacterLogic_OnAIWin = FName(TEXT("OnAIWin"));
	void AAICharacterLogic::OnAIWin()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAICharacterLogic_OnAIWin),NULL);
	}
	static FName NAME_AAICharacterLogic_OnInitAI = FName(TEXT("OnInitAI"));
	void AAICharacterLogic::OnInitAI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAICharacterLogic_OnInitAI),NULL);
	}
	void AAICharacterLogic::StaticRegisterNativesAAICharacterLogic()
	{
		UClass* Class = AAICharacterLogic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveToState", &AAICharacterLogic::execMoveToState },
			{ "OnInitAIEvent", &AAICharacterLogic::execOnInitAIEvent },
			{ "SetDataAsset", &AAICharacterLogic::execSetDataAsset },
			{ "SetDollReference", &AAICharacterLogic::execSetDollReference },
			{ "UploadData", &AAICharacterLogic::execUploadData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	struct Z_Construct_UFunction_AAICharacterLogic_OnAIDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_OnAIDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "//-----------------------------------------------------------------------------------------------\n// Event\n" },
		{ "ModuleRelativePath", "AICharacterLogic.h" },
		{ "ToolTip", "Event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_OnAIDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "OnAIDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_OnAIDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_OnAIDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_OnAIDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_OnAIDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterLogic_OnAIWin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_OnAIWin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_OnAIWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "OnAIWin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_OnAIWin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_OnAIWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_OnAIWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_OnAIWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterLogic_OnInitAI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_OnInitAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_OnInitAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "OnInitAI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_OnInitAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_OnInitAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_OnInitAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_OnInitAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterLogic_OnInitAIEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_OnInitAIEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_OnInitAIEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "OnInitAIEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_OnInitAIEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_OnInitAIEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_OnInitAIEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_OnInitAIEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterLogic_SetDataAsset_Statics
	{
		struct AICharacterLogic_eventSetDataAsset_Parms
		{
			UAIDataAsset* data;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacterLogic_SetDataAsset_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterLogic_eventSetDataAsset_Parms, data), Z_Construct_UClass_UAIDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacterLogic_SetDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterLogic_SetDataAsset_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_SetDataAsset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_SetDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "SetDataAsset", nullptr, nullptr, sizeof(AICharacterLogic_eventSetDataAsset_Parms), Z_Construct_UFunction_AAICharacterLogic_SetDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_SetDataAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_SetDataAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_SetDataAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_SetDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_SetDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterLogic_SetDollReference_Statics
	{
		struct AICharacterLogic_eventSetDollReference_Parms
		{
			ADollClass* dollRef;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dollRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacterLogic_SetDollReference_Statics::NewProp_dollRef = { "dollRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacterLogic_eventSetDollReference_Parms, dollRef), Z_Construct_UClass_ADollClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacterLogic_SetDollReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacterLogic_SetDollReference_Statics::NewProp_dollRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_SetDollReference_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_SetDollReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "SetDollReference", nullptr, nullptr, sizeof(AICharacterLogic_eventSetDollReference_Parms), Z_Construct_UFunction_AAICharacterLogic_SetDollReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_SetDollReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_SetDollReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_SetDollReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_SetDollReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_SetDollReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacterLogic_UploadData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacterLogic_UploadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacterLogic_UploadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacterLogic, nullptr, "UploadData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacterLogic_UploadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacterLogic_UploadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacterLogic_UploadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacterLogic_UploadData_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dollReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dollReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICharacterLogic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAICharacterLogic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAICharacterLogic_MoveToState, "MoveToState" }, // 2015465756
		{ &Z_Construct_UFunction_AAICharacterLogic_OnAIDeath, "OnAIDeath" }, // 1214908835
		{ &Z_Construct_UFunction_AAICharacterLogic_OnAIWin, "OnAIWin" }, // 742735150
		{ &Z_Construct_UFunction_AAICharacterLogic_OnInitAI, "OnInitAI" }, // 2099459059
		{ &Z_Construct_UFunction_AAICharacterLogic_OnInitAIEvent, "OnInitAIEvent" }, // 924276310
		{ &Z_Construct_UFunction_AAICharacterLogic_SetDataAsset, "SetDataAsset" }, // 3416276646
		{ &Z_Construct_UFunction_AAICharacterLogic_SetDollReference, "SetDollReference" }, // 8026096
		{ &Z_Construct_UFunction_AAICharacterLogic_UploadData, "UploadData" }, // 790256729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterLogic_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AICharacterLogic.h" },
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__data_MetaData[] = {
		{ "Category", "AICharacterLogic" },
		{ "Comment", "//-----------------------------------------------------------------------------------------------\n//Fields\n" },
		{ "ModuleRelativePath", "AICharacterLogic.h" },
		{ "ToolTip", "Fields" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__data = { "_data", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacterLogic, _data), Z_Construct_UClass_UAIDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__dollReference_MetaData[] = {
		{ "Category", "AICharacterLogic" },
		{ "ModuleRelativePath", "AICharacterLogic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__dollReference = { "_dollReference", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacterLogic, _dollReference), Z_Construct_UClass_ADollClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__dollReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__dollReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICharacterLogic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacterLogic_Statics::NewProp__dollReference,
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
	IMPLEMENT_CLASS(AAICharacterLogic, 2413960267);
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
