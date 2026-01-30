// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Door_ActorF.h"

#ifdef MYPROJECT_Door_ActorF_generated_h
#error "Door_ActorF.generated.h already included, missing '#pragma once' in Door_ActorF.h"
#endif
#define MYPROJECT_Door_ActorF_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADoor_ActorF *************************************************************
#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor);


struct Z_Construct_UClass_ADoor_ActorF_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_ADoor_ActorF_NoRegister();

#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor_ActorF(); \
	friend struct ::Z_Construct_UClass_ADoor_ActorF_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_ADoor_ActorF_NoRegister(); \
public: \
	DECLARE_CLASS2(ADoor_ActorF, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_ADoor_ActorF_NoRegister) \
	DECLARE_SERIALIZER(ADoor_ActorF)


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADoor_ActorF(ADoor_ActorF&&) = delete; \
	ADoor_ActorF(const ADoor_ActorF&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor_ActorF); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor_ActorF); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor_ActorF) \
	NO_API virtual ~ADoor_ActorF();


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h_7_PROLOG
#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h_10_INCLASS_NO_PURE_DECLS \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADoor_ActorF;

// ********** End Class ADoor_ActorF ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
