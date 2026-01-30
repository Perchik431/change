// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Lift_Gravity.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeLift_Gravity() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_ALift_Gravity();
MYPROJECT_API UClass* Z_Construct_UClass_ALift_Gravity_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALift_Gravity ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ALift_Gravity;
UClass* ALift_Gravity::GetPrivateStaticClass()
{
	using TClass = ALift_Gravity;
	if (!Z_Registration_Info_UClass_ALift_Gravity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Lift_Gravity"),
			Z_Registration_Info_UClass_ALift_Gravity.InnerSingleton,
			StaticRegisterNativesALift_Gravity,
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
	return Z_Registration_Info_UClass_ALift_Gravity.InnerSingleton;
}
UClass* Z_Construct_UClass_ALift_Gravity_NoRegister()
{
	return ALift_Gravity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALift_Gravity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Lift_Gravity.h" },
		{ "ModuleRelativePath", "Lift_Gravity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Lift_Gravity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lift_Gravity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Lift" },
		{ "ModuleRelativePath", "Lift_Gravity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Lift" },
		{ "ModuleRelativePath", "Lift_Gravity.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ALift_Gravity constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ALift_Gravity constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALift_Gravity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ALift_Gravity_Statics

// ********** Begin Class ALift_Gravity Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALift_Gravity_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALift_Gravity, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALift_Gravity_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALift_Gravity, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALift_Gravity_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALift_Gravity, MoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDistance_MetaData), NewProp_MoveDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALift_Gravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALift_Gravity_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALift_Gravity_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALift_Gravity_Statics::NewProp_MoveDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALift_Gravity_Statics::PropPointers) < 2048);
// ********** End Class ALift_Gravity Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_ALift_Gravity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALift_Gravity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALift_Gravity_Statics::ClassParams = {
	&ALift_Gravity::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALift_Gravity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALift_Gravity_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALift_Gravity_Statics::Class_MetaDataParams), Z_Construct_UClass_ALift_Gravity_Statics::Class_MetaDataParams)
};
void ALift_Gravity::StaticRegisterNativesALift_Gravity()
{
}
UClass* Z_Construct_UClass_ALift_Gravity()
{
	if (!Z_Registration_Info_UClass_ALift_Gravity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALift_Gravity.OuterSingleton, Z_Construct_UClass_ALift_Gravity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALift_Gravity.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ALift_Gravity);
ALift_Gravity::~ALift_Gravity() {}
// ********** End Class ALift_Gravity **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Lift_Gravity_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALift_Gravity, ALift_Gravity::StaticClass, TEXT("ALift_Gravity"), &Z_Registration_Info_UClass_ALift_Gravity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALift_Gravity), 2899813124U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Lift_Gravity_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Lift_Gravity_h__Script_MyProject_1919403531{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Lift_Gravity_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Lift_Gravity_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
