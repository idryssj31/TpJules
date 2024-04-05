// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "M1/M1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeM1GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	M1_API UClass* Z_Construct_UClass_AM1GameMode();
	M1_API UClass* Z_Construct_UClass_AM1GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_M1();
// End Cross Module References
	void AM1GameMode::StaticRegisterNativesAM1GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AM1GameMode);
	UClass* Z_Construct_UClass_AM1GameMode_NoRegister()
	{
		return AM1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AM1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AM1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_M1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AM1GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AM1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "M1GameMode.h" },
		{ "ModuleRelativePath", "M1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AM1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AM1GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AM1GameMode_Statics::ClassParams = {
		&AM1GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AM1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AM1GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AM1GameMode()
	{
		if (!Z_Registration_Info_UClass_AM1GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AM1GameMode.OuterSingleton, Z_Construct_UClass_AM1GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AM1GameMode.OuterSingleton;
	}
	template<> M1_API UClass* StaticClass<AM1GameMode>()
	{
		return AM1GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AM1GameMode);
	AM1GameMode::~AM1GameMode() {}
	struct Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_M1GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_M1GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AM1GameMode, AM1GameMode::StaticClass, TEXT("AM1GameMode"), &Z_Registration_Info_UClass_AM1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AM1GameMode), 881027760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_M1GameMode_h_1072173143(TEXT("/Script/M1"),
		Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_M1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projet_TpJules_M1_Source_M1_M1GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
