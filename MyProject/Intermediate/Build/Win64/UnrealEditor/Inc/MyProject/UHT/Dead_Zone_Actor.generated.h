// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dead_Zone_Actor.h"

#ifdef MYPROJECT_Dead_Zone_Actor_generated_h
#error "Dead_Zone_Actor.generated.h already included, missing '#pragma once' in Dead_Zone_Actor.h"
#endif
#define MYPROJECT_Dead_Zone_Actor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ADead_Zone_Actor *********************************************************
#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTriggerBegin);


struct Z_Construct_UClass_ADead_Zone_Actor_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_ADead_Zone_Actor_NoRegister();

#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADead_Zone_Actor(); \
	friend struct ::Z_Construct_UClass_ADead_Zone_Actor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_ADead_Zone_Actor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADead_Zone_Actor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_ADead_Zone_Actor_NoRegister) \
	DECLARE_SERIALIZER(ADead_Zone_Actor)


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADead_Zone_Actor(ADead_Zone_Actor&&) = delete; \
	ADead_Zone_Actor(const ADead_Zone_Actor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADead_Zone_Actor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADead_Zone_Actor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADead_Zone_Actor) \
	NO_API virtual ~ADead_Zone_Actor();


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h_9_PROLOG
#define FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADead_Zone_Actor;

// ********** End Class ADead_Zone_Actor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
