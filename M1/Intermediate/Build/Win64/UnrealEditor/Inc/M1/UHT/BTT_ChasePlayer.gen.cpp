// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M1/Include/Character/AI/Enemy/BTT_ChasePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_ChasePlayer() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	M1_API UClass* Z_Construct_UClass_UBTT_ChasePlayer();
	M1_API UClass* Z_Construct_UClass_UBTT_ChasePlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_M1();
// End Cross Module References
	void UBTT_ChasePlayer::StaticRegisterNativesUBTT_ChasePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_ChasePlayer);
	UClass* Z_Construct_UClass_UBTT_ChasePlayer_NoRegister()
	{
		return UBTT_ChasePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_ChasePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRandom_MetaData[];
#endif
		static void NewProp_SearchRandom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SearchRandom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_ChasePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_M1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChasePlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_ChasePlayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Include/Character/AI/Enemy/BTT_ChasePlayer.h" },
		{ "ModuleRelativePath", "Include/Character/AI/Enemy/BTT_ChasePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_SearchRandom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n" },
#endif
		{ "ModuleRelativePath", "Include/Character/AI/Enemy/BTT_ChasePlayer.h" },
	};
#endif
	void Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_SearchRandom_SetBit(void* Obj)
	{
		((UBTT_ChasePlayer*)Obj)->SearchRandom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_SearchRandom = { "SearchRandom", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTT_ChasePlayer), &Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_SearchRandom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_SearchRandom_MetaData), Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_SearchRandom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_ChasePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_ChasePlayer_Statics::NewProp_SearchRandom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_ChasePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_ChasePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_ChasePlayer_Statics::ClassParams = {
		&UBTT_ChasePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTT_ChasePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChasePlayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChasePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_ChasePlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChasePlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTT_ChasePlayer()
	{
		if (!Z_Registration_Info_UClass_UBTT_ChasePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_ChasePlayer.OuterSingleton, Z_Construct_UClass_UBTT_ChasePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_ChasePlayer.OuterSingleton;
	}
	template<> M1_API UClass* StaticClass<UBTT_ChasePlayer>()
	{
		return UBTT_ChasePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_ChasePlayer);
	UBTT_ChasePlayer::~UBTT_ChasePlayer() {}
	struct Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_BTT_ChasePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_BTT_ChasePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_ChasePlayer, UBTT_ChasePlayer::StaticClass, TEXT("UBTT_ChasePlayer"), &Z_Registration_Info_UClass_UBTT_ChasePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_ChasePlayer), 1287324744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_BTT_ChasePlayer_h_4152338436(TEXT("/Script/M1"),
		Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_BTT_ChasePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Character_AI_Enemy_BTT_ChasePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
