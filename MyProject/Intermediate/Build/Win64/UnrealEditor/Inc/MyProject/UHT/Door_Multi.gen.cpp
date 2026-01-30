// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Door_Multi.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDoor_Multi() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_ADoor_Multi();
MYPROJECT_API UClass* Z_Construct_UClass_ADoor_Multi_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADoor_Multi **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ADoor_Multi;
UClass* ADoor_Multi::GetPrivateStaticClass()
{
	using TClass = ADoor_Multi;
	if (!Z_Registration_Info_UClass_ADoor_Multi.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Door_Multi"),
			Z_Registration_Info_UClass_ADoor_Multi.InnerSingleton,
			StaticRegisterNativesADoor_Multi,
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
	return Z_Registration_Info_UClass_ADoor_Multi.InnerSingleton;
}
UClass* Z_Construct_UClass_ADoor_Multi_NoRegister()
{
	return ADoor_Multi::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADoor_Multi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Door_Multi.h" },
		{ "ModuleRelativePath", "Door_Multi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Door_Multi" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door_Multi.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ADoor_Multi constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ADoor_Multi constinit property declarations ********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor_Multi>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ADoor_Multi_Statics

// ********** Begin Class ADoor_Multi Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Multi_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor_Multi, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Multi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Multi_Statics::NewProp_DoorMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Multi_Statics::PropPointers) < 2048);
// ********** End Class ADoor_Multi Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_ADoor_Multi_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Multi_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Multi_Statics::ClassParams = {
	&ADoor_Multi::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADoor_Multi_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Multi_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Multi_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_Multi_Statics::Class_MetaDataParams)
};
void ADoor_Multi::StaticRegisterNativesADoor_Multi()
{
}
UClass* Z_Construct_UClass_ADoor_Multi()
{
	if (!Z_Registration_Info_UClass_ADoor_Multi.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor_Multi.OuterSingleton, Z_Construct_UClass_ADoor_Multi_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoor_Multi.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ADoor_Multi);
ADoor_Multi::~ADoor_Multi() {}
// ********** End Class ADoor_Multi ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_Multi_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoor_Multi, ADoor_Multi::StaticClass, TEXT("ADoor_Multi"), &Z_Registration_Info_UClass_ADoor_Multi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor_Multi), 2574435274U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_Multi_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_Multi_h__Script_MyProject_786293894{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_Multi_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_Multi_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
