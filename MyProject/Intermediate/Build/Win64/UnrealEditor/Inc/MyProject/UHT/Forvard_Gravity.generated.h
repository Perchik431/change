// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Forvard_Gravity.h"

#ifdef MYPROJECT_Forvard_Gravity_generated_h
#error "Forvard_Gravity.generated.h already included, missing '#pragma once' in Forvard_Gravity.h"
#endif
#define MYPROJECT_Forvard_Gravity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AForvard_Gravity *********************************************************
struct Z_Construct_UClass_AForvard_Gravity_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_AForvard_Gravity_NoRegister();

#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAForvard_Gravity(); \
	friend struct ::Z_Construct_UClass_AForvard_Gravity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_AForvard_Gravity_NoRegister(); \
public: \
	DECLARE_CLASS2(AForvard_Gravity, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AForvard_Gravity_NoRegister) \
	DECLARE_SERIALIZER(AForvard_Gravity)


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AForvard_Gravity(AForvard_Gravity&&) = delete; \
	AForvard_Gravity(const AForvard_Gravity&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AForvard_Gravity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AForvard_Gravity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AForvard_Gravity) \
	NO_API virtual ~AForvard_Gravity();


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h_15_PROLOG
#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h_18_INCLASS_NO_PURE_DECLS \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AForvard_Gravity;

// ********** End Class AForvard_Gravity ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h

// ********** Begin Enum EMoveState ****************************************************************
#define FOREACH_ENUM_EMOVESTATE(op) \
	op(EMoveState::Forward) \
	op(EMoveState::Backward) \
	op(EMoveState::Frozen) 

enum class EMoveState : uint8;
template<> struct TIsUEnumClass<EMoveState> { enum { Value = true }; };
template<> MYPROJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMoveState>();
// ********** End Enum EMoveState ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
