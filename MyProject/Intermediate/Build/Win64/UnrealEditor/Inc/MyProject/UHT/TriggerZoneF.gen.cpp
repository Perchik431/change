// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/TriggerZoneF.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTriggerZoneF() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MYPROJECT_API UClass* Z_Construct_UClass_ADoor_ActorF_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_ATriggerZoneF();
MYPROJECT_API UClass* Z_Construct_UClass_ATriggerZoneF_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATriggerZoneF Function OnTriggerBegin ************************************
struct Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics
{
	struct TriggerZoneF_eventOnTriggerBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== EVENTS =====\n" },
#endif
		{ "ModuleRelativePath", "TriggerZoneF.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== EVENTS =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneF_eventOnTriggerBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneF_eventOnTriggerBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneF_eventOnTriggerBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneF_eventOnTriggerBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((TriggerZoneF_eventOnTriggerBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TriggerZoneF_eventOnTriggerBegin_Parms), &Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneF_eventOnTriggerBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::PropPointers) < 2048);
// ********** End Function OnTriggerBegin Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATriggerZoneF, nullptr, "OnTriggerBegin", 	Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::TriggerZoneF_eventOnTriggerBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::TriggerZoneF_eventOnTriggerBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATriggerZoneF::execOnTriggerBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ATriggerZoneF Function OnTriggerBegin **************************************

// ********** Begin Class ATriggerZoneF Function OnTriggerEnd **************************************
struct Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics
{
	struct TriggerZoneF_eventOnTriggerEnd_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TriggerZoneF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnTriggerEnd constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnTriggerEnd constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnTriggerEnd Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneF_eventOnTriggerEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneF_eventOnTriggerEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneF_eventOnTriggerEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerZoneF_eventOnTriggerEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::PropPointers) < 2048);
// ********** End Function OnTriggerEnd Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATriggerZoneF, nullptr, "OnTriggerEnd", 	Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::TriggerZoneF_eventOnTriggerEnd_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::TriggerZoneF_eventOnTriggerEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATriggerZoneF::execOnTriggerEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class ATriggerZoneF Function OnTriggerEnd ****************************************

// ********** Begin Class ATriggerZoneF ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATriggerZoneF;
UClass* ATriggerZoneF::GetPrivateStaticClass()
{
	using TClass = ATriggerZoneF;
	if (!Z_Registration_Info_UClass_ATriggerZoneF.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TriggerZoneF"),
			Z_Registration_Info_UClass_ATriggerZoneF.InnerSingleton,
			StaticRegisterNativesATriggerZoneF,
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
	return Z_Registration_Info_UClass_ATriggerZoneF.InnerSingleton;
}
UClass* Z_Construct_UClass_ATriggerZoneF_NoRegister()
{
	return ATriggerZoneF::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATriggerZoneF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerZoneF.h" },
		{ "ModuleRelativePath", "TriggerZoneF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "TriggerZoneF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== COMPONENTS =====\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerZoneF.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== COMPONENTS =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "TriggerZoneF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerZoneF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualMesh_MetaData[] = {
		{ "Category", "TriggerZoneF" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerZoneF.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedDoor_MetaData[] = {
		{ "Category", "Trigger" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== DOOR LINK =====\n" },
#endif
		{ "ModuleRelativePath", "TriggerZoneF.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== DOOR LINK =====" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ATriggerZoneF constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedDoor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATriggerZoneF constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnTriggerBegin"), .Pointer = &ATriggerZoneF::execOnTriggerBegin },
		{ .NameUTF8 = UTF8TEXT("OnTriggerEnd"), .Pointer = &ATriggerZoneF::execOnTriggerEnd },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerZoneF_OnTriggerBegin, "OnTriggerBegin" }, // 3935458325
		{ &Z_Construct_UFunction_ATriggerZoneF_OnTriggerEnd, "OnTriggerEnd" }, // 870873796
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerZoneF>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATriggerZoneF_Statics

// ********** Begin Class ATriggerZoneF Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerZoneF_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerZoneF, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerZoneF_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerZoneF, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerZoneF_Statics::NewProp_VisualMesh = { "VisualMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerZoneF, VisualMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualMesh_MetaData), NewProp_VisualMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerZoneF_Statics::NewProp_LinkedDoor = { "LinkedDoor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerZoneF, LinkedDoor), Z_Construct_UClass_ADoor_ActorF_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedDoor_MetaData), NewProp_LinkedDoor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerZoneF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerZoneF_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerZoneF_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerZoneF_Statics::NewProp_VisualMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerZoneF_Statics::NewProp_LinkedDoor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerZoneF_Statics::PropPointers) < 2048);
// ********** End Class ATriggerZoneF Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_ATriggerZoneF_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerZoneF_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerZoneF_Statics::ClassParams = {
	&ATriggerZoneF::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATriggerZoneF_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerZoneF_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerZoneF_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriggerZoneF_Statics::Class_MetaDataParams)
};
void ATriggerZoneF::StaticRegisterNativesATriggerZoneF()
{
	UClass* Class = ATriggerZoneF::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ATriggerZoneF_Statics::Funcs));
}
UClass* Z_Construct_UClass_ATriggerZoneF()
{
	if (!Z_Registration_Info_UClass_ATriggerZoneF.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerZoneF.OuterSingleton, Z_Construct_UClass_ATriggerZoneF_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATriggerZoneF.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATriggerZoneF);
ATriggerZoneF::~ATriggerZoneF() {}
// ********** End Class ATriggerZoneF **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerZoneF, ATriggerZoneF::StaticClass, TEXT("ATriggerZoneF"), &Z_Registration_Info_UClass_ATriggerZoneF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerZoneF), 2264986361U) },
	};
}; // Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h__Script_MyProject_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h__Script_MyProject_1428500539{
	TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game_Jam_change_main_MyProject_Source_MyProject_TriggerZoneF_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
