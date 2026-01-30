// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/BP_TriggerZoneMulti.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBP_TriggerZoneMulti() {}

// ********** Begin Cross Module References ********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_ABP_TriggerZoneMulti();
MYPROJECT_API UClass* Z_Construct_UClass_ABP_TriggerZoneMulti_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_ATriggerZoneMulti();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABP_TriggerZoneMulti *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABP_TriggerZoneMulti;
UClass* ABP_TriggerZoneMulti::GetPrivateStaticClass()
{
	using TClass = ABP_TriggerZoneMulti;
	if (!Z_Registration_Info_UClass_ABP_TriggerZoneMulti.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BP_TriggerZoneMulti"),
			Z_Registration_Info_UClass_ABP_TriggerZoneMulti.InnerSingleton,
			StaticRegisterNativesABP_TriggerZoneMulti,
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
	return Z_Registration_Info_UClass_ABP_TriggerZoneMulti.InnerSingleton;
}
UClass* Z_Construct_UClass_ABP_TriggerZoneMulti_NoRegister()
{
	return ABP_TriggerZoneMulti::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABP_TriggerZoneMulti_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BP_TriggerZoneMulti.h" },
		{ "ModuleRelativePath", "BP_TriggerZoneMulti.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABP_TriggerZoneMulti constinit property declarations *********************
// ********** End Class ABP_TriggerZoneMulti constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_TriggerZoneMulti>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABP_TriggerZoneMulti_Statics
UObject* (*const Z_Construct_UClass_ABP_TriggerZoneMulti_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerZoneMulti,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TriggerZoneMulti_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABP_TriggerZoneMulti_Statics::ClassParams = {
	&ABP_TriggerZoneMulti::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABP_TriggerZoneMulti_Statics::Class_MetaDataParams), Z_Construct_UClass_ABP_TriggerZoneMulti_Statics::Class_MetaDataParams)
};
void ABP_TriggerZoneMulti::StaticRegisterNativesABP_TriggerZoneMulti()
{
}
UClass* Z_Construct_UClass_ABP_TriggerZoneMulti()
{
	if (!Z_Registration_Info_UClass_ABP_TriggerZoneMulti.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABP_TriggerZoneMulti.OuterSingleton, Z_Construct_UClass_ABP_TriggerZoneMulti_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABP_TriggerZoneMulti.OuterSingleton;
}
ABP_TriggerZoneMulti::ABP_TriggerZoneMulti() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABP_TriggerZoneMulti);
ABP_TriggerZoneMulti::~ABP_TriggerZoneMulti() {}
// ********** End Class ABP_TriggerZoneMulti *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_BP_TriggerZoneMulti_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABP_TriggerZoneMulti, ABP_TriggerZoneMulti::StaticClass, TEXT("ABP_TriggerZoneMulti"), &Z_Registration_Info_UClass_ABP_TriggerZoneMulti, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABP_TriggerZoneMulti), 195200768U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_BP_TriggerZoneMulti_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_BP_TriggerZoneMulti_h__Script_MyProject_945063740{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_BP_TriggerZoneMulti_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_BP_TriggerZoneMulti_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
