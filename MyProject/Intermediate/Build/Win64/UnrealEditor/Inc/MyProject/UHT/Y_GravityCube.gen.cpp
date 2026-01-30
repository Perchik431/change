// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Y_GravityCube.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeY_GravityCube() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_AY_GravityCube();
MYPROJECT_API UClass* Z_Construct_UClass_AY_GravityCube_NoRegister();
MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_EYMoveState();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EYMoveState ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EYMoveState;
static UEnum* EYMoveState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EYMoveState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EYMoveState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyProject_EYMoveState, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("EYMoveState"));
	}
	return Z_Registration_Info_UEnum_EYMoveState.OuterSingleton;
}
template<> MYPROJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EYMoveState>()
{
	return EYMoveState_StaticEnum();
}
struct Z_Construct_UEnum_MyProject_EYMoveState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.Name", "EYMoveState::Backward" },
		{ "Forward.Name", "EYMoveState::Forward" },
		{ "Frozen.Name", "EYMoveState::Frozen" },
		{ "ModuleRelativePath", "Y_GravityCube.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EYMoveState::Forward", (int64)EYMoveState::Forward },
		{ "EYMoveState::Backward", (int64)EYMoveState::Backward },
		{ "EYMoveState::Frozen", (int64)EYMoveState::Frozen },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MyProject_EYMoveState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyProject_EYMoveState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
	nullptr,
	"EYMoveState",
	"EYMoveState",
	Z_Construct_UEnum_MyProject_EYMoveState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_EYMoveState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_EYMoveState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyProject_EYMoveState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MyProject_EYMoveState()
{
	if (!Z_Registration_Info_UEnum_EYMoveState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EYMoveState.InnerSingleton, Z_Construct_UEnum_MyProject_EYMoveState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EYMoveState.InnerSingleton;
}
// ********** End Enum EYMoveState *****************************************************************

// ********** Begin Class AY_GravityCube ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AY_GravityCube;
UClass* AY_GravityCube::GetPrivateStaticClass()
{
	using TClass = AY_GravityCube;
	if (!Z_Registration_Info_UClass_AY_GravityCube.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Y_GravityCube"),
			Z_Registration_Info_UClass_AY_GravityCube.InnerSingleton,
			StaticRegisterNativesAY_GravityCube,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AY_GravityCube.InnerSingleton;
}
UClass* Z_Construct_UClass_AY_GravityCube_NoRegister()
{
	return AY_GravityCube::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AY_GravityCube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Y_GravityCube.h" },
		{ "ModuleRelativePath", "Y_GravityCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Y_GravityCube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Y_GravityCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Y_GravityCube" },
		{ "ModuleRelativePath", "Y_GravityCube.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AY_GravityCube constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AY_GravityCube constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AY_GravityCube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AY_GravityCube_Statics

// ********** Begin Class AY_GravityCube Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AY_GravityCube_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AY_GravityCube, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AY_GravityCube_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AY_GravityCube, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AY_GravityCube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AY_GravityCube_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AY_GravityCube_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AY_GravityCube_Statics::PropPointers) < 2048);
// ********** End Class AY_GravityCube Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_AY_GravityCube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AY_GravityCube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AY_GravityCube_Statics::ClassParams = {
	&AY_GravityCube::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AY_GravityCube_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AY_GravityCube_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AY_GravityCube_Statics::Class_MetaDataParams), Z_Construct_UClass_AY_GravityCube_Statics::Class_MetaDataParams)
};
void AY_GravityCube::StaticRegisterNativesAY_GravityCube()
{
}
UClass* Z_Construct_UClass_AY_GravityCube()
{
	if (!Z_Registration_Info_UClass_AY_GravityCube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AY_GravityCube.OuterSingleton, Z_Construct_UClass_AY_GravityCube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AY_GravityCube.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AY_GravityCube);
AY_GravityCube::~AY_GravityCube() {}
// ********** End Class AY_GravityCube *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h__Script_MyProject_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EYMoveState_StaticEnum, TEXT("EYMoveState"), &Z_Registration_Info_UEnum_EYMoveState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1454959828U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AY_GravityCube, AY_GravityCube::StaticClass, TEXT("AY_GravityCube"), &Z_Registration_Info_UClass_AY_GravityCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AY_GravityCube), 1426568047U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h__Script_MyProject_1470783033{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h__Script_MyProject_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Y_GravityCube_h__Script_MyProject_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
