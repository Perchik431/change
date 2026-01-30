// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/TriggerZoneMulti.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTriggerZoneMulti() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_ADoor_Multi_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_ATriggerZoneMulti();
MYPROJECT_API UClass* Z_Construct_UClass_ATriggerZoneMulti_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATriggerZoneMulti ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATriggerZoneMulti;
UClass* ATriggerZoneMulti::GetPrivateStaticClass()
{
	using TClass = ATriggerZoneMulti;
	if (!Z_Registration_Info_UClass_ATriggerZoneMulti.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TriggerZoneMulti"),
			Z_Registration_Info_UClass_ATriggerZoneMulti.InnerSingleton,
			StaticRegisterNativesATriggerZoneMulti,
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
	return Z_Registration_Info_UClass_ATriggerZoneMulti.InnerSingleton;
}
UClass* Z_Construct_UClass_ATriggerZoneMulti_NoRegister()
{
	return ATriggerZoneMulti::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATriggerZoneMulti_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerZoneMulti.h" },
		{ "ModuleRelativePath", "TriggerZoneMulti.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedDoor_MetaData[] = {
		{ "Category", "TriggerZoneMulti" },
		{ "ModuleRelativePath", "TriggerZoneMulti.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "TriggerZoneMulti" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerZoneMulti.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualMesh_MetaData[] = {
		{ "Category", "TriggerZoneMulti" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerZoneMulti.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATriggerZoneMulti constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATriggerZoneMulti constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerZoneMulti>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATriggerZoneMulti_Statics

// ********** Begin Class ATriggerZoneMulti Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerZoneMulti_Statics::NewProp_LinkedDoor = { "LinkedDoor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerZoneMulti, LinkedDoor), Z_Construct_UClass_ADoor_Multi_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedDoor_MetaData), NewProp_LinkedDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerZoneMulti_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerZoneMulti, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerZoneMulti_Statics::NewProp_VisualMesh = { "VisualMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerZoneMulti, VisualMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualMesh_MetaData), NewProp_VisualMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerZoneMulti_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerZoneMulti_Statics::NewProp_LinkedDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerZoneMulti_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerZoneMulti_Statics::NewProp_VisualMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerZoneMulti_Statics::PropPointers) < 2048);
// ********** End Class ATriggerZoneMulti Property Definitions *************************************
UObject* (*const Z_Construct_UClass_ATriggerZoneMulti_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerZoneMulti_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerZoneMulti_Statics::ClassParams = {
	&ATriggerZoneMulti::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATriggerZoneMulti_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerZoneMulti_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerZoneMulti_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriggerZoneMulti_Statics::Class_MetaDataParams)
};
void ATriggerZoneMulti::StaticRegisterNativesATriggerZoneMulti()
{
}
UClass* Z_Construct_UClass_ATriggerZoneMulti()
{
	if (!Z_Registration_Info_UClass_ATriggerZoneMulti.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerZoneMulti.OuterSingleton, Z_Construct_UClass_ATriggerZoneMulti_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATriggerZoneMulti.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATriggerZoneMulti);
ATriggerZoneMulti::~ATriggerZoneMulti() {}
// ********** End Class ATriggerZoneMulti **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneMulti_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerZoneMulti, ATriggerZoneMulti::StaticClass, TEXT("ATriggerZoneMulti"), &Z_Registration_Info_UClass_ATriggerZoneMulti, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerZoneMulti), 3241335221U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneMulti_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneMulti_h__Script_MyProject_468154572{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneMulti_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneMulti_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
