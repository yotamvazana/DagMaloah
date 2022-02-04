// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DagMaloah/DifficultyManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDifficultyManager() {}
// Cross Module References
	DAGMALOAH_API UEnum* Z_Construct_UEnum_DagMaloah_Difficulty();
	UPackage* Z_Construct_UPackage__Script_DagMaloah();
	DAGMALOAH_API UClass* Z_Construct_UClass_ADifficultyManager_NoRegister();
	DAGMALOAH_API UClass* Z_Construct_UClass_ADifficultyManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* Difficulty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DagMaloah_Difficulty, Z_Construct_UPackage__Script_DagMaloah(), TEXT("Difficulty"));
		}
		return Singleton;
	}
	template<> DAGMALOAH_API UEnum* StaticEnum<Difficulty>()
	{
		return Difficulty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Difficulty(Difficulty_StaticEnum, TEXT("/Script/DagMaloah"), TEXT("Difficulty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DagMaloah_Difficulty_Hash() { return 2733525187U; }
	UEnum* Z_Construct_UEnum_DagMaloah_Difficulty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DagMaloah();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Difficulty"), 0, Get_Z_Construct_UEnum_DagMaloah_Difficulty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Easy", (int64)Easy },
				{ "Medium", (int64)Medium },
				{ "Hard", (int64)Hard },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "My Enum" },
				{ "Easy.DisplayName", "Easy" },
				{ "Easy.Name", "Easy" },
				{ "Hard.DisplayName", "Hard" },
				{ "Hard.Name", "Hard" },
				{ "Medium.DisplayName", "Medium" },
				{ "Medium.Name", "Medium" },
				{ "ModuleRelativePath", "DifficultyManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DagMaloah,
				nullptr,
				"Difficulty",
				"Difficulty",
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
	DEFINE_FUNCTION(ADifficultyManager::execHardDifficulty)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Diff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HardDifficulty((TEnumAsByte<Difficulty>&)(Z_Param_Out_Diff));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADifficultyManager::execMediumDifficulty)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Diff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MediumDifficulty((TEnumAsByte<Difficulty>&)(Z_Param_Out_Diff));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADifficultyManager::execEasyDifficulty)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Diff);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EasyDifficulty((TEnumAsByte<Difficulty>&)(Z_Param_Out_Diff));
		P_NATIVE_END;
	}
	void ADifficultyManager::StaticRegisterNativesADifficultyManager()
	{
		UClass* Class = ADifficultyManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EasyDifficulty", &ADifficultyManager::execEasyDifficulty },
			{ "HardDifficulty", &ADifficultyManager::execHardDifficulty },
			{ "MediumDifficulty", &ADifficultyManager::execMediumDifficulty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADifficultyManager_EasyDifficulty_Statics
	{
		struct DifficultyManager_eventEasyDifficulty_Parms
		{
			TEnumAsByte<Difficulty> Diff;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Diff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADifficultyManager_EasyDifficulty_Statics::NewProp_Diff = { "Diff", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DifficultyManager_eventEasyDifficulty_Parms, Diff), Z_Construct_UEnum_DagMaloah_Difficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADifficultyManager_EasyDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADifficultyManager_EasyDifficulty_Statics::NewProp_Diff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADifficultyManager_EasyDifficulty_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Functions" },
		{ "ModuleRelativePath", "DifficultyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADifficultyManager_EasyDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADifficultyManager, nullptr, "EasyDifficulty", nullptr, nullptr, sizeof(DifficultyManager_eventEasyDifficulty_Parms), Z_Construct_UFunction_ADifficultyManager_EasyDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADifficultyManager_EasyDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADifficultyManager_EasyDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADifficultyManager_EasyDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADifficultyManager_EasyDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADifficultyManager_EasyDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADifficultyManager_HardDifficulty_Statics
	{
		struct DifficultyManager_eventHardDifficulty_Parms
		{
			TEnumAsByte<Difficulty> Diff;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Diff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADifficultyManager_HardDifficulty_Statics::NewProp_Diff = { "Diff", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DifficultyManager_eventHardDifficulty_Parms, Diff), Z_Construct_UEnum_DagMaloah_Difficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADifficultyManager_HardDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADifficultyManager_HardDifficulty_Statics::NewProp_Diff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADifficultyManager_HardDifficulty_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Functions" },
		{ "ModuleRelativePath", "DifficultyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADifficultyManager_HardDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADifficultyManager, nullptr, "HardDifficulty", nullptr, nullptr, sizeof(DifficultyManager_eventHardDifficulty_Parms), Z_Construct_UFunction_ADifficultyManager_HardDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADifficultyManager_HardDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADifficultyManager_HardDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADifficultyManager_HardDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADifficultyManager_HardDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADifficultyManager_HardDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADifficultyManager_MediumDifficulty_Statics
	{
		struct DifficultyManager_eventMediumDifficulty_Parms
		{
			TEnumAsByte<Difficulty> Diff;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Diff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADifficultyManager_MediumDifficulty_Statics::NewProp_Diff = { "Diff", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DifficultyManager_eventMediumDifficulty_Parms, Diff), Z_Construct_UEnum_DagMaloah_Difficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADifficultyManager_MediumDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADifficultyManager_MediumDifficulty_Statics::NewProp_Diff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADifficultyManager_MediumDifficulty_Statics::Function_MetaDataParams[] = {
		{ "Category", "My Functions" },
		{ "ModuleRelativePath", "DifficultyManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADifficultyManager_MediumDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADifficultyManager, nullptr, "MediumDifficulty", nullptr, nullptr, sizeof(DifficultyManager_eventMediumDifficulty_Parms), Z_Construct_UFunction_ADifficultyManager_MediumDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADifficultyManager_MediumDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADifficultyManager_MediumDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADifficultyManager_MediumDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADifficultyManager_MediumDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADifficultyManager_MediumDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADifficultyManager_NoRegister()
	{
		return ADifficultyManager::StaticClass();
	}
	struct Z_Construct_UClass_ADifficultyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADifficultyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DagMaloah,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADifficultyManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADifficultyManager_EasyDifficulty, "EasyDifficulty" }, // 148572784
		{ &Z_Construct_UFunction_ADifficultyManager_HardDifficulty, "HardDifficulty" }, // 3177635357
		{ &Z_Construct_UFunction_ADifficultyManager_MediumDifficulty, "MediumDifficulty" }, // 3263677954
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADifficultyManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DifficultyManager.h" },
		{ "ModuleRelativePath", "DifficultyManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADifficultyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADifficultyManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADifficultyManager_Statics::ClassParams = {
		&ADifficultyManager::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ADifficultyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADifficultyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADifficultyManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADifficultyManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADifficultyManager, 2447982197);
	template<> DAGMALOAH_API UClass* StaticClass<ADifficultyManager>()
	{
		return ADifficultyManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADifficultyManager(Z_Construct_UClass_ADifficultyManager, &ADifficultyManager::StaticClass, TEXT("/Script/DagMaloah"), TEXT("ADifficultyManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADifficultyManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
