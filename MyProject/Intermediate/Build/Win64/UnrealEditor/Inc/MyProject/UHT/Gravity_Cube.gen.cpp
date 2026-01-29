// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Gravity_Cube.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGravity_Cube() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_AGravity_Cube();
MYPROJECT_API UClass* Z_Construct_UClass_AGravity_Cube_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGravity_Cube ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AGravity_Cube;
UClass* AGravity_Cube::GetPrivateStaticClass()
{
	using TClass = AGravity_Cube;
	if (!Z_Registration_Info_UClass_AGravity_Cube.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Gravity_Cube"),
			Z_Registration_Info_UClass_AGravity_Cube.InnerSingleton,
			StaticRegisterNativesAGravity_Cube,
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
	return Z_Registration_Info_UClass_AGravity_Cube.InnerSingleton;
}
UClass* Z_Construct_UClass_AGravity_Cube_NoRegister()
{
	return AGravity_Cube::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGravity_Cube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gravity_Cube.h" },
		{ "ModuleRelativePath", "Gravity_Cube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Gravity_Cube" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== COMPONENTS =====\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gravity_Cube.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== COMPONENTS =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Gravity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== MOVEMENT =====\n" },
#endif
		{ "ModuleRelativePath", "Gravity_Cube.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== MOVEMENT =====" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AGravity_Cube constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AGravity_Cube constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGravity_Cube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AGravity_Cube_Statics

// ********** Begin Class AGravity_Cube Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGravity_Cube_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGravity_Cube, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGravity_Cube_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGravity_Cube, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGravity_Cube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravity_Cube_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravity_Cube_Statics::NewProp_MoveSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGravity_Cube_Statics::PropPointers) < 2048);
// ********** End Class AGravity_Cube Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_AGravity_Cube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGravity_Cube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGravity_Cube_Statics::ClassParams = {
	&AGravity_Cube::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGravity_Cube_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGravity_Cube_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGravity_Cube_Statics::Class_MetaDataParams), Z_Construct_UClass_AGravity_Cube_Statics::Class_MetaDataParams)
};
void AGravity_Cube::StaticRegisterNativesAGravity_Cube()
{
}
UClass* Z_Construct_UClass_AGravity_Cube()
{
	if (!Z_Registration_Info_UClass_AGravity_Cube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGravity_Cube.OuterSingleton, Z_Construct_UClass_AGravity_Cube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGravity_Cube.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AGravity_Cube);
AGravity_Cube::~AGravity_Cube() {}
// ********** End Class AGravity_Cube **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_nazar_OneDrive_Documents_GitHub_change_MyProject_Source_MyProject_Gravity_Cube_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGravity_Cube, AGravity_Cube::StaticClass, TEXT("AGravity_Cube"), &Z_Registration_Info_UClass_AGravity_Cube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGravity_Cube), 682387484U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_nazar_OneDrive_Documents_GitHub_change_MyProject_Source_MyProject_Gravity_Cube_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nazar_OneDrive_Documents_GitHub_change_MyProject_Source_MyProject_Gravity_Cube_h__Script_MyProject_2273520601{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_nazar_OneDrive_Documents_GitHub_change_MyProject_Source_MyProject_Gravity_Cube_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nazar_OneDrive_Documents_GitHub_change_MyProject_Source_MyProject_Gravity_Cube_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
