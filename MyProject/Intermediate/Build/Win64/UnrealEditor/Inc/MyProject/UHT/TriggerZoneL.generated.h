// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TriggerZoneL.h"

#ifdef MYPROJECT_TriggerZoneL_generated_h
#error "TriggerZoneL.generated.h already included, missing '#pragma once' in TriggerZoneL.h"
#endif
#define MYPROJECT_TriggerZoneL_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ATriggerZoneL ************************************************************
#define FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneL_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


struct Z_Construct_UClass_ATriggerZoneL_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_ATriggerZoneL_NoRegister();

#define FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneL_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerZoneL(); \
	friend struct ::Z_Construct_UClass_ATriggerZoneL_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_ATriggerZoneL_NoRegister(); \
public: \
	DECLARE_CLASS2(ATriggerZoneL, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_ATriggerZoneL_NoRegister) \
	DECLARE_SERIALIZER(ATriggerZoneL)


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneL_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATriggerZoneL(ATriggerZoneL&&) = delete; \
	ATriggerZoneL(const ATriggerZoneL&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerZoneL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerZoneL); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerZoneL) \
	NO_API virtual ~ATriggerZoneL();


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneL_h_12_PROLOG
#define FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneL_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneL_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneL_h_15_INCLASS_NO_PURE_DECLS \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneL_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATriggerZoneL;

// ********** End Class ATriggerZoneL **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneL_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
