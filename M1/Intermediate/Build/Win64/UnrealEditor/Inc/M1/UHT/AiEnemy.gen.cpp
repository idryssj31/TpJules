// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M1/Include/Character/AI/Enemy/AiEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAiEnemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	M1_API UClass* Z_Construct_UClass_AAiEnemy();
	M1_API UClass* Z_Construct_UClass_AAiEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_M1();
// End Cross Module References
	void AAiEnemy::StaticRegisterNativesAAiEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAiEnemy);
	UClass* Z_Construct_UClass_AAiEnemy_NoRegister()
	{
		return AAiEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AAiEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAiEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_M1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAiEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Include/Character/AI/Enemy/AiEnemy.h" },
		{ "ModuleRelativePath", "Include/Character/AI/Enemy/AiEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAiEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAiEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAiEnemy_Statics::ClassParams = {
		&AAiEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAiEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AAiEnemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAiEnemy()
	{
		if (!Z_Registration_Info_UClass_AAiEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAiEnemy.OuterSingleton, Z_Construct_UClass_AAiEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAiEnemy.OuterSingleton;
	}
	template<> M1_API UClass* StaticClass<AAiEnemy>()
	{
		return AAiEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAiEnemy);
	AAiEnemy::~AAiEnemy() {}
	struct Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_AiEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_AiEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAiEnemy, AAiEnemy::StaticClass, TEXT("AAiEnemy"), &Z_Registration_Info_UClass_AAiEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAiEnemy), 4217562940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_AiEnemy_h_3788394014(TEXT("/Script/M1"),
		Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_AiEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_AiEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
