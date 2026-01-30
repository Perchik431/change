// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Dead_Zone_Actor.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDead_Zone_Actor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MYPROJECT_API UClass* Z_Construct_UClass_ADead_Zone_Actor();
MYPROJECT_API UClass* Z_Construct_UClass_ADead_Zone_Actor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADead_Zone_Actor Function OnTriggerBegin *********************************
struct Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics
{
	struct Dead_Zone_Actor_eventOnTriggerBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Dead_Zone_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnTriggerBegin constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnTriggerBegin constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnTriggerBegin Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dead_Zone_Actor_eventOnTriggerBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dead_Zone_Actor_eventOnTriggerBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dead_Zone_Actor_eventOnTriggerBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dead_Zone_Actor_eventOnTriggerBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Dead_Zone_Actor_eventOnTriggerBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dead_Zone_Actor_eventOnTriggerBegin_Parms), &Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dead_Zone_Actor_eventOnTriggerBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::PropPointers) < 2048);
// ********** End Function OnTriggerBegin Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADead_Zone_Actor, nullptr, "OnTriggerBegin", 	Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::Dead_Zone_Actor_eventOnTriggerBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::Dead_Zone_Actor_eventOnTriggerBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADead_Zone_Actor::execOnTriggerBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ADead_Zone_Actor Function OnTriggerBegin ***********************************

// ********** Begin Class ADead_Zone_Actor *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ADead_Zone_Actor;
UClass* ADead_Zone_Actor::GetPrivateStaticClass()
{
	using TClass = ADead_Zone_Actor;
	if (!Z_Registration_Info_UClass_ADead_Zone_Actor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Dead_Zone_Actor"),
			Z_Registration_Info_UClass_ADead_Zone_Actor.InnerSingleton,
			StaticRegisterNativesADead_Zone_Actor,
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
	return Z_Registration_Info_UClass_ADead_Zone_Actor.InnerSingleton;
}
UClass* Z_Construct_UClass_ADead_Zone_Actor_NoRegister()
{
	return ADead_Zone_Actor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADead_Zone_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Dead_Zone_Actor.h" },
		{ "ModuleRelativePath", "Dead_Zone_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Dead Zone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Dead_Zone_Actor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ADead_Zone_Actor constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ADead_Zone_Actor constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnTriggerBegin"), .Pointer = &ADead_Zone_Actor::execOnTriggerBegin },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADead_Zone_Actor_OnTriggerBegin, "OnTriggerBegin" }, // 571188272
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADead_Zone_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ADead_Zone_Actor_Statics

// ********** Begin Class ADead_Zone_Actor Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADead_Zone_Actor_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADead_Zone_Actor, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADead_Zone_Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADead_Zone_Actor_Statics::NewProp_TriggerBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADead_Zone_Actor_Statics::PropPointers) < 2048);
// ********** End Class ADead_Zone_Actor Property Definitions **************************************
UObject* (*const Z_Construct_UClass_ADead_Zone_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADead_Zone_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADead_Zone_Actor_Statics::ClassParams = {
	&ADead_Zone_Actor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADead_Zone_Actor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADead_Zone_Actor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADead_Zone_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADead_Zone_Actor_Statics::Class_MetaDataParams)
};
void ADead_Zone_Actor::StaticRegisterNativesADead_Zone_Actor()
{
	UClass* Class = ADead_Zone_Actor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ADead_Zone_Actor_Statics::Funcs));
}
UClass* Z_Construct_UClass_ADead_Zone_Actor()
{
	if (!Z_Registration_Info_UClass_ADead_Zone_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADead_Zone_Actor.OuterSingleton, Z_Construct_UClass_ADead_Zone_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADead_Zone_Actor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ADead_Zone_Actor);
ADead_Zone_Actor::~ADead_Zone_Actor() {}
// ********** End Class ADead_Zone_Actor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADead_Zone_Actor, ADead_Zone_Actor::StaticClass, TEXT("ADead_Zone_Actor"), &Z_Registration_Info_UClass_ADead_Zone_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADead_Zone_Actor), 710269924U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h__Script_MyProject_786158072{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_Dead_Zone_Actor_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
