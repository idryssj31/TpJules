// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Include/Character/Player/M1Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef M1_M1Character_generated_h
#error "M1Character.generated.h already included, missing '#pragma once' in M1Character.h"
#endif
#define M1_M1Character_generated_h

#define FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_SPARSE_DATA
#define FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd);


#define FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_ACCESSORS
#define FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAM1Character(); \
	friend struct Z_Construct_UClass_AM1Character_Statics; \
public: \
	DECLARE_CLASS(AM1Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/M1"), NO_API) \
	DECLARE_SERIALIZER(AM1Character)


#define FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AM1Character(AM1Character&&); \
	NO_API AM1Character(const AM1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AM1Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AM1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AM1Character) \
	NO_API virtual ~AM1Character();


#define FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_18_PROLOG
#define FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_SPARSE_DATA \
	FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_ACCESSORS \
	FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_INCLASS_NO_PURE_DECLS \
	FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> M1_API UClass* StaticClass<class AM1Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projet_TpJules_M1_Source_M1_Include_Character_Player_M1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
