// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M1/Include/Interactables/Gold.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGold() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	M1_API UClass* Z_Construct_UClass_AGold();
	M1_API UClass* Z_Construct_UClass_AGold_NoRegister();
	UPackage* Z_Construct_UPackage__Script_M1();
// End Cross Module References
	void AGold::StaticRegisterNativesAGold()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGold);
	UClass* Z_Construct_UClass_AGold_NoRegister()
	{
		return AGold::StaticClass();
	}
	struct Z_Construct_UClass_AGold_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGold_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_M1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGold_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGold_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Include/Interactables/Gold.h" },
		{ "ModuleRelativePath", "Include/Interactables/Gold.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGold_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGold>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGold_Statics::ClassParams = {
		&AGold::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGold_Statics::Class_MetaDataParams), Z_Construct_UClass_AGold_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGold()
	{
		if (!Z_Registration_Info_UClass_AGold.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGold.OuterSingleton, Z_Construct_UClass_AGold_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGold.OuterSingleton;
	}
	template<> M1_API UClass* StaticClass<AGold>()
	{
		return AGold::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGold);
	AGold::~AGold() {}
	struct Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Interactables_Gold_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Interactables_Gold_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGold, AGold::StaticClass, TEXT("AGold"), &Z_Registration_Info_UClass_AGold, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGold), 2397069720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Interactables_Gold_h_1776551088(TEXT("/Script/M1"),
		Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Interactables_Gold_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_Include_Interactables_Gold_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
