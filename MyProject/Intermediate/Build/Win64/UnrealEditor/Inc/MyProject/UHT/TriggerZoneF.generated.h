// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TriggerZoneF.h"

#ifdef MYPROJECT_TriggerZoneF_generated_h
#error "TriggerZoneF.generated.h already included, missing '#pragma once' in TriggerZoneF.h"
#endif
#define MYPROJECT_TriggerZoneF_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ATriggerZoneF ************************************************************
#define FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTriggerEnd); \
	DECLARE_FUNCTION(execOnTriggerBegin);


struct Z_Construct_UClass_ATriggerZoneF_Statics;
MYPROJECT_API UClass* Z_Construct_UClass_ATriggerZoneF_NoRegister();

#define FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerZoneF(); \
	friend struct ::Z_Construct_UClass_ATriggerZoneF_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* ::Z_Construct_UClass_ATriggerZoneF_NoRegister(); \
public: \
	DECLARE_CLASS2(ATriggerZoneF, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_ATriggerZoneF_NoRegister) \
	DECLARE_SERIALIZER(ATriggerZoneF)


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATriggerZoneF(ATriggerZoneF&&) = delete; \
	ATriggerZoneF(const ATriggerZoneF&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerZoneF); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerZoneF); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerZoneF) \
	NO_API virtual ~ATriggerZoneF();


#define FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h_11_PROLOG
#define FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h_14_INCLASS_NO_PURE_DECLS \
	FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATriggerZoneF;

// ********** End Class ATriggerZoneF **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
