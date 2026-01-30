// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Y_GravityCube.h"

#ifdef MYPROJECT_Y_GravityCube_generated_h
#error "Y_GravityCube.generated.h already included, missing '#pragma once' in Y_GravityCube.h"
#endif
#define MYPROJECT_Y_GravityCube_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AY_GravityCube ***********************************************************
struct Z_Construct_UClass_AY_GravityCube_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_AY_GravityCube_NoRegister();

#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAY_GravityCube(); \
	friend struct ::Z_Construct_UClass_AY_GravityCube_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_AY_GravityCube_NoRegister(); \
public: \
	DECLARE_CLASS2(AY_GravityCube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AY_GravityCube_NoRegister) \
	DECLARE_SERIALIZER(AY_GravityCube)


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AY_GravityCube(AY_GravityCube&&) = delete; \
	AY_GravityCube(const AY_GravityCube&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AY_GravityCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AY_GravityCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AY_GravityCube) \
	NO_API virtual ~AY_GravityCube();


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h_15_PROLOG
#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h_18_INCLASS_NO_PURE_DECLS \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AY_GravityCube;

// ********** End Class AY_GravityCube *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h

// ********** Begin Enum EYMoveState ***************************************************************
#define FOREACH_ENUM_EYMOVESTATE(op) \
	op(EYMoveState::Forward) \
	op(EYMoveState::Backward) \
	op(EYMoveState::Frozen) 

enum class EYMoveState : uint8;
template<> struct TIsUEnumClass<EYMoveState> { enum { Value = true }; };
template<> MYPROJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EYMoveState>();
// ********** End Enum EYMoveState *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
