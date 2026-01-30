// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Door_ActorF.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDoor_ActorF() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_ADoor_ActorF();
MYPROJECT_API UClass* Z_Construct_UClass_ADoor_ActorF_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADoor_ActorF Function CloseDoor ******************************************
struct Z_Construct_UFunction_ADoor_ActorF_CloseDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Door_ActorF.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CloseDoor constinit property declarations *****************************
// ********** End Function CloseDoor constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_ActorF_CloseDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADoor_ActorF, nullptr, "CloseDoor", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_ActorF_CloseDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_ActorF_CloseDoor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADoor_ActorF_CloseDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_ActorF_CloseDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor_ActorF::execCloseDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseDoor();
	P_NATIVE_END;
}
// ********** End Class ADoor_ActorF Function CloseDoor ********************************************

// ********** Begin Class ADoor_ActorF Function OpenDoor *******************************************
struct Z_Construct_UFunction_ADoor_ActorF_OpenDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== DOOR CONTROL =====\n" },
#endif
		{ "ModuleRelativePath", "Door_ActorF.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== DOOR CONTROL =====" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OpenDoor constinit property declarations ******************************
// ********** End Function OpenDoor constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_ActorF_OpenDoor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADoor_ActorF, nullptr, "OpenDoor", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_ActorF_OpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_ActorF_OpenDoor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADoor_ActorF_OpenDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_ActorF_OpenDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor_ActorF::execOpenDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenDoor();
	P_NATIVE_END;
}
// ********** End Class ADoor_ActorF Function OpenDoor *********************************************

// ********** Begin Class ADoor_ActorF *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ADoor_ActorF;
UClass* ADoor_ActorF::GetPrivateStaticClass()
{
	using TClass = ADoor_ActorF;
	if (!Z_Registration_Info_UClass_ADoor_ActorF.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Door_ActorF"),
			Z_Registration_Info_UClass_ADoor_ActorF.InnerSingleton,
			StaticRegisterNativesADoor_ActorF,
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
	return Z_Registration_Info_UClass_ADoor_ActorF.InnerSingleton;
}
UClass* Z_Construct_UClass_ADoor_ActorF_NoRegister()
{
	return ADoor_ActorF::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADoor_ActorF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Door_ActorF.h" },
		{ "ModuleRelativePath", "Door_ActorF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Door_ActorF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== COMPONENT =====\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Door_ActorF.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== COMPONENT =====" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ADoor_ActorF constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ADoor_ActorF constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CloseDoor"), .Pointer = &ADoor_ActorF::execCloseDoor },
		{ .NameUTF8 = UTF8TEXT("OpenDoor"), .Pointer = &ADoor_ActorF::execOpenDoor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_ActorF_CloseDoor, "CloseDoor" }, // 2601892111
		{ &Z_Construct_UFunction_ADoor_ActorF_OpenDoor, "OpenDoor" }, // 1751170511
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor_ActorF>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ADoor_ActorF_Statics

// ********** Begin Class ADoor_ActorF Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_ActorF_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor_ActorF, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_ActorF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_ActorF_Statics::NewProp_DoorMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_ActorF_Statics::PropPointers) < 2048);
// ********** End Class ADoor_ActorF Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_ADoor_ActorF_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_ActorF_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_ActorF_Statics::ClassParams = {
	&ADoor_ActorF::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADoor_ActorF_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_ActorF_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_ActorF_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_ActorF_Statics::Class_MetaDataParams)
};
void ADoor_ActorF::StaticRegisterNativesADoor_ActorF()
{
	UClass* Class = ADoor_ActorF::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ADoor_ActorF_Statics::Funcs));
}
UClass* Z_Construct_UClass_ADoor_ActorF()
{
	if (!Z_Registration_Info_UClass_ADoor_ActorF.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor_ActorF.OuterSingleton, Z_Construct_UClass_ADoor_ActorF_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoor_ActorF.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ADoor_ActorF);
ADoor_ActorF::~ADoor_ActorF() {}
// ********** End Class ADoor_ActorF ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoor_ActorF, ADoor_ActorF::StaticClass, TEXT("ADoor_ActorF"), &Z_Registration_Info_UClass_ADoor_ActorF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor_ActorF), 2493742704U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h__Script_MyProject_459748802{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Door_ActorF_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
