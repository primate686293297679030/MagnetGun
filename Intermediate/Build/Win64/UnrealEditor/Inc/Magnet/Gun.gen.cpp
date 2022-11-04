// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Magnet/Gun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	MAGNET_API UClass* Z_Construct_UClass_AMagnetGun_NoRegister();
	MAGNET_API UClass* Z_Construct_UClass_AMagnetGun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Magnet();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMagnetGun::execRMB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RMB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagnetGun::execLMB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LMB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagnetGun::execPlayerInputs)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerInputs(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagnetGun::execCallbackfunctionToDelegate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallbackfunctionToDelegate(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMagnetGun::execHandleOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_BodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_BodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepHit);
		P_NATIVE_END;
	}
	void AMagnetGun::StaticRegisterNativesAMagnetGun()
	{
		UClass* Class = AMagnetGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallbackfunctionToDelegate", &AMagnetGun::execCallbackfunctionToDelegate },
			{ "HandleOverlap", &AMagnetGun::execHandleOverlap },
			{ "LMB", &AMagnetGun::execLMB },
			{ "PlayerInputs", &AMagnetGun::execPlayerInputs },
			{ "RMB", &AMagnetGun::execRMB },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics
	{
		struct MagnetGun_eventCallbackfunctionToDelegate_Parms
		{
			float index;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagnetGun_eventCallbackfunctionToDelegate_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagnetGun, nullptr, "CallbackfunctionToDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics::MagnetGun_eventCallbackfunctionToDelegate_Parms), Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics
	{
		struct MagnetGun_eventHandleOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 BodyIndex;
			bool bFromSweep;
			FHitResult SweepHit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepHit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagnetGun_eventHandleOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagnetGun_eventHandleOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagnetGun_eventHandleOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_BodyIndex = { "BodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagnetGun_eventHandleOverlap_Parms, BodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MagnetGun_eventHandleOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MagnetGun_eventHandleOverlap_Parms), &Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_SweepHit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_SweepHit = { "SweepHit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagnetGun_eventHandleOverlap_Parms, SweepHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_SweepHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_SweepHit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_BodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::NewProp_SweepHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagnetGun, nullptr, "HandleOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::MagnetGun_eventHandleOverlap_Parms), Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagnetGun_HandleOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagnetGun_HandleOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagnetGun_LMB_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagnetGun_LMB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagnetGun_LMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagnetGun, nullptr, "LMB", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagnetGun_LMB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnetGun_LMB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagnetGun_LMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagnetGun_LMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics
	{
		struct MagnetGun_eventPlayerInputs_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagnetGun_eventPlayerInputs_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagnetGun, nullptr, "PlayerInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics::MagnetGun_eventPlayerInputs_Parms), Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagnetGun_PlayerInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagnetGun_PlayerInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagnetGun_RMB_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagnetGun_RMB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagnetGun_RMB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagnetGun, nullptr, "RMB", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagnetGun_RMB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMagnetGun_RMB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagnetGun_RMB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMagnetGun_RMB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagnetGun);
	UClass* Z_Construct_UClass_AMagnetGun_NoRegister()
	{
		return AMagnetGun::StaticClass();
	}
	struct Z_Construct_UClass_AMagnetGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagnetGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Magnet,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagnetGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagnetGun_CallbackfunctionToDelegate, "CallbackfunctionToDelegate" }, // 3429613220
		{ &Z_Construct_UFunction_AMagnetGun_HandleOverlap, "HandleOverlap" }, // 173088896
		{ &Z_Construct_UFunction_AMagnetGun_LMB, "LMB" }, // 603031962
		{ &Z_Construct_UFunction_AMagnetGun_PlayerInputs, "PlayerInputs" }, // 2893728959
		{ &Z_Construct_UFunction_AMagnetGun_RMB, "RMB" }, // 1956955495
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun.h" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetGun_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "MagnetGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagnetGun_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagnetGun, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagnetGun_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetGun_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetGun_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "MagnetGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagnetGun_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagnetGun, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagnetGun_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetGun_Statics::NewProp_Scene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetGun_Statics::NewProp_GunMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagnetGun_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagnetGun, GunMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagnetGun_Statics::NewProp_GunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetGun_Statics::NewProp_GunMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetGun_Statics::NewProp_Collider_MetaData[] = {
		{ "Category", "MagnetGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagnetGun_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagnetGun, Collider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagnetGun_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetGun_Statics::NewProp_Collider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagnetGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnetGun_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnetGun_Statics::NewProp_Scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnetGun_Statics::NewProp_GunMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnetGun_Statics::NewProp_Collider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagnetGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagnetGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagnetGun_Statics::ClassParams = {
		&AMagnetGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagnetGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetGun_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagnetGun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagnetGun()
	{
		if (!Z_Registration_Info_UClass_AMagnetGun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagnetGun.OuterSingleton, Z_Construct_UClass_AMagnetGun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagnetGun.OuterSingleton;
	}
	template<> MAGNET_API UClass* StaticClass<AMagnetGun>()
	{
		return AMagnetGun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagnetGun);
	struct Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_Gun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_Gun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagnetGun, AMagnetGun::StaticClass, TEXT("AMagnetGun"), &Z_Registration_Info_UClass_AMagnetGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagnetGun), 710758665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_Gun_h_3922692897(TEXT("/Script/Magnet"),
		Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_Gun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_Gun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
