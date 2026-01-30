// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Forvard_Gravity.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeForvard_Gravity() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_AForvard_Gravity();
MYPROJECT_API UClass* Z_Construct_UClass_AForvard_Gravity_NoRegister();
MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_EMoveState();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMoveState ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoveState;
static UEnum* EMoveState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMoveState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMoveState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyProject_EMoveState, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("EMoveState"));
	}
	return Z_Registration_Info_UEnum_EMoveState.OuterSingleton;
}
template<> MYPROJECT_NON_ATTRIBUTED_API UEnum* StaticEnum<EMoveState>()
{
	return EMoveState_StaticEnum();
}
struct Z_Construct_UEnum_MyProject_EMoveState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.Name", "EMoveState::Backward" },
		{ "Forward.Name", "EMoveState::Forward" },
		{ "Frozen.Name", "EMoveState::Frozen" },
		{ "ModuleRelativePath", "Forvard_Gravity.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMoveState::Forward", (int64)EMoveState::Forward },
		{ "EMoveState::Backward", (int64)EMoveState::Backward },
		{ "EMoveState::Frozen", (int64)EMoveState::Frozen },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MyProject_EMoveState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyProject_EMoveState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
	nullptr,
	"EMoveState",
	"EMoveState",
	Z_Construct_UEnum_MyProject_EMoveState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_EMoveState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_EMoveState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyProject_EMoveState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MyProject_EMoveState()
{
	if (!Z_Registration_Info_UEnum_EMoveState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoveState.InnerSingleton, Z_Construct_UEnum_MyProject_EMoveState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMoveState.InnerSingleton;
}
// ********** End Enum EMoveState ******************************************************************

// ********** Begin Class AForvard_Gravity *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AForvard_Gravity;
UClass* AForvard_Gravity::GetPrivateStaticClass()
{
	using TClass = AForvard_Gravity;
	if (!Z_Registration_Info_UClass_AForvard_Gravity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Forvard_Gravity"),
			Z_Registration_Info_UClass_AForvard_Gravity.InnerSingleton,
			StaticRegisterNativesAForvard_Gravity,
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
	return Z_Registration_Info_UClass_AForvard_Gravity.InnerSingleton;
}
UClass* Z_Construct_UClass_AForvard_Gravity_NoRegister()
{
	return AForvard_Gravity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AForvard_Gravity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Forvard_Gravity.h" },
		{ "ModuleRelativePath", "Forvard_Gravity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Forvard_Gravity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== COMPONENT =====\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Forvard_Gravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== COMPONENT =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== MOVEMENT =====\n" },
#endif
		{ "ModuleRelativePath", "Forvard_Gravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== MOVEMENT =====" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AForvard_Gravity constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AForvard_Gravity constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AForvard_Gravity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AForvard_Gravity_Statics

// ********** Begin Class AForvard_Gravity Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AForvard_Gravity_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AForvard_Gravity, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AForvard_Gravity_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AForvard_Gravity, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AForvard_Gravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForvard_Gravity_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForvard_Gravity_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AForvard_Gravity_Statics::PropPointers) < 2048);
// ********** End Class AForvard_Gravity Property Definitions **************************************
UObject* (*const Z_Construct_UClass_AForvard_Gravity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AForvard_Gravity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AForvard_Gravity_Statics::ClassParams = {
	&AForvard_Gravity::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AForvard_Gravity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AForvard_Gravity_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AForvard_Gravity_Statics::Class_MetaDataParams), Z_Construct_UClass_AForvard_Gravity_Statics::Class_MetaDataParams)
};
void AForvard_Gravity::StaticRegisterNativesAForvard_Gravity()
{
}
UClass* Z_Construct_UClass_AForvard_Gravity()
{
	if (!Z_Registration_Info_UClass_AForvard_Gravity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AForvard_Gravity.OuterSingleton, Z_Construct_UClass_AForvard_Gravity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AForvard_Gravity.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AForvard_Gravity);
AForvard_Gravity::~AForvard_Gravity() {}
// ********** End Class AForvard_Gravity ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h__Script_MyProject_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMoveState_StaticEnum, TEXT("EMoveState"), &Z_Registration_Info_UEnum_EMoveState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2724051961U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AForvard_Gravity, AForvard_Gravity::StaticClass, TEXT("AForvard_Gravity"), &Z_Registration_Info_UClass_AForvard_Gravity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AForvard_Gravity), 1071297613U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h__Script_MyProject_2140083685{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h__Script_MyProject_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Forvard_Gravity_h__Script_MyProject_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
