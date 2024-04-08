// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M1/Include/Character/AI/Enemy/AIC_AiEnemy.h"
#include "Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIC_AiEnemy() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	M1_API UClass* Z_Construct_UClass_AAIC_AiEnemy();
	M1_API UClass* Z_Construct_UClass_AAIC_AiEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_M1();
// End Cross Module References
	DEFINE_FUNCTION(AAIC_AiEnemy::execOnTargetDetected)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetDetected(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void AAIC_AiEnemy::StaticRegisterNativesAAIC_AiEnemy()
	{
		UClass* Class = AAIC_AiEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetDetected", &AAIC_AiEnemy::execOnTargetDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics
	{
		struct AIC_AiEnemy_eventOnTargetDetected_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIC_AiEnemy_eventOnTargetDetected_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::NewProp_Stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIC_AiEnemy_eventOnTargetDetected_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::NewProp_Stimulus_MetaData), Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::NewProp_Stimulus_MetaData) }; // 1355587946
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the player is detected.\n" },
#endif
		{ "ModuleRelativePath", "Include/Character/AI/Enemy/AIC_AiEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the player is detected." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIC_AiEnemy, nullptr, "OnTargetDetected", nullptr, nullptr, Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::AIC_AiEnemy_eventOnTargetDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::AIC_AiEnemy_eventOnTargetDetected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIC_AiEnemy);
	UClass* Z_Construct_UClass_AAIC_AiEnemy_NoRegister()
	{
		return AAIC_AiEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AAIC_AiEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIC_AiEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_M1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_AiEnemy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIC_AiEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIC_AiEnemy_OnTargetDetected, "OnTargetDetected" }, // 3354225783
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_AiEnemy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIC_AiEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Include/Character/AI/Enemy/AIC_AiEnemy.h" },
		{ "ModuleRelativePath", "Include/Character/AI/Enemy/AIC_AiEnemy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIC_AiEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIC_AiEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIC_AiEnemy_Statics::ClassParams = {
		&AAIC_AiEnemy::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIC_AiEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIC_AiEnemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAIC_AiEnemy()
	{
		if (!Z_Registration_Info_UClass_AAIC_AiEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIC_AiEnemy.OuterSingleton, Z_Construct_UClass_AAIC_AiEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIC_AiEnemy.OuterSingleton;
	}
	template<> M1_API UClass* StaticClass<AAIC_AiEnemy>()
	{
		return AAIC_AiEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIC_AiEnemy);
	AAIC_AiEnemy::~AAIC_AiEnemy() {}
	struct Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_AIC_AiEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_AIC_AiEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIC_AiEnemy, AAIC_AiEnemy::StaticClass, TEXT("AAIC_AiEnemy"), &Z_Registration_Info_UClass_AAIC_AiEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIC_AiEnemy), 354640812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_AIC_AiEnemy_h_4142587573(TEXT("/Script/M1"),
		Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_AIC_AiEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_AIC_AiEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
