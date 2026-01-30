// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/DoorL_Actor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDoorL_Actor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_ADoorL_Actor();
MYPROJECT_API UClass* Z_Construct_UClass_ADoorL_Actor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADoorL_Actor *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ADoorL_Actor;
UClass* ADoorL_Actor::GetPrivateStaticClass()
{
	using TClass = ADoorL_Actor;
	if (!Z_Registration_Info_UClass_ADoorL_Actor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DoorL_Actor"),
			Z_Registration_Info_UClass_ADoorL_Actor.InnerSingleton,
			StaticRegisterNativesADoorL_Actor,
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
	return Z_Registration_Info_UClass_ADoorL_Actor.InnerSingleton;
}
UClass* Z_Construct_UClass_ADoorL_Actor_NoRegister()
{
	return ADoorL_Actor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADoorL_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DoorL_Actor.h" },
		{ "ModuleRelativePath", "DoorL_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "DoorL_Actor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Door mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoorL_Actor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Door mesh" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ADoorL_Actor constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ADoorL_Actor constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorL_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ADoorL_Actor_Statics

// ********** Begin Class ADoorL_Actor Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorL_Actor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoorL_Actor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorL_Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorL_Actor_Statics::NewProp_DoorMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorL_Actor_Statics::PropPointers) < 2048);
// ********** End Class ADoorL_Actor Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_ADoorL_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorL_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorL_Actor_Statics::ClassParams = {
	&ADoorL_Actor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADoorL_Actor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoorL_Actor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoorL_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoorL_Actor_Statics::Class_MetaDataParams)
};
void ADoorL_Actor::StaticRegisterNativesADoorL_Actor()
{
}
UClass* Z_Construct_UClass_ADoorL_Actor()
{
	if (!Z_Registration_Info_UClass_ADoorL_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorL_Actor.OuterSingleton, Z_Construct_UClass_ADoorL_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoorL_Actor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ADoorL_Actor);
ADoorL_Actor::~ADoorL_Actor() {}
// ********** End Class ADoorL_Actor ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_DoorL_Actor_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoorL_Actor, ADoorL_Actor::StaticClass, TEXT("ADoorL_Actor"), &Z_Registration_Info_UClass_ADoorL_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorL_Actor), 1494359985U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_DoorL_Actor_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_DoorL_Actor_h__Script_MyProject_1509299447{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_DoorL_Actor_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_DoorL_Actor_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
