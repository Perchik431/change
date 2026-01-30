// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gravity_Cube.h"

#ifdef MYPROJECT_Gravity_Cube_generated_h
#error "Gravity_Cube.generated.h already included, missing '#pragma once' in Gravity_Cube.h"
#endif
#define MYPROJECT_Gravity_Cube_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGravity_Cube ************************************************************
struct Z_Construct_UClass_AGravity_Cube_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_AGravity_Cube_NoRegister();

#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Gravity_Cube_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGravity_Cube(); \
	friend struct ::Z_Construct_UClass_AGravity_Cube_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_AGravity_Cube_NoRegister(); \
public: \
	DECLARE_CLASS2(AGravity_Cube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AGravity_Cube_NoRegister) \
	DECLARE_SERIALIZER(AGravity_Cube)


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Gravity_Cube_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGravity_Cube(AGravity_Cube&&) = delete; \
	AGravity_Cube(const AGravity_Cube&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGravity_Cube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGravity_Cube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGravity_Cube) \
	NO_API virtual ~AGravity_Cube();


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Gravity_Cube_h_15_PROLOG
#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Gravity_Cube_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Gravity_Cube_h_18_INCLASS_NO_PURE_DECLS \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Gravity_Cube_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGravity_Cube;

// ********** End Class AGravity_Cube **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Jam_change_main_MyProject_Source_MyProject_Gravity_Cube_h

// ********** Begin Enum EGravityMoveState *********************************************************
#define FOREACH_ENUM_EGRAVITYMOVESTATE(op) \
	op(EGravityMoveState::Up) \
	op(EGravityMoveState::Down) \
	op(EGravityMoveState::Frozen) 

enum class EGravityMoveState : uint8;
template<> struct TIsUEnumClass<EGravityMoveState> { enum { Value = true }; };
template<> MYPROJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EGravityMoveState>();
// ********** End Enum EGravityMoveState ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
