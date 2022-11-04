// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Magnet/MagnetCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagnetCharacter() {}
// Cross Module References
	MAGNET_API UFunction* Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Magnet();
	MAGNET_API UClass* Z_Construct_UClass_AMagnetCharacter_NoRegister();
	MAGNET_API UClass* Z_Construct_UClass_AMagnetCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics
	{
		struct _Script_Magnet_eventdisgustingDelegate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Magnet_eventdisgustingDelegate_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*In blueprints\n *\n * Mesh Overlapevent 0 \n *Added socket mesh\n *\n *Capsule Overlapevent 0\n *GenOvrEvDuringlvlStreaming 0\n *\n */" },
		{ "ModuleRelativePath", "MagnetCharacter.h" },
		{ "ToolTip", "In blueprints\n *\n * Mesh Overlapevent 0\n *Added socket mesh\n *\n *Capsule Overlapevent 0\n *GenOvrEvDuringlvlStreaming 0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Magnet, nullptr, "disgustingDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics::_Script_Magnet_eventdisgustingDelegate_Parms), Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AMagnetCharacter::StaticRegisterNativesAMagnetCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagnetCharacter);
	UClass* Z_Construct_UClass_AMagnetCharacter_NoRegister()
	{
		return AMagnetCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMagnetCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fplayerinput_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Fplayerinput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagnetCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Magnet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MagnetCharacter.h" },
		{ "ModuleRelativePath", "MagnetCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagnetCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagnetCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagnetCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagnetCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_Fplayerinput_MetaData[] = {
		{ "ModuleRelativePath", "MagnetCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_Fplayerinput = { "Fplayerinput", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagnetCharacter, Fplayerinput), Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_Fplayerinput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_Fplayerinput_MetaData)) }; // 3798049606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "MagnetCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagnetCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagnetCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_Fplayerinput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagnetCharacter_Statics::NewProp_TurnRateGamepad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagnetCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagnetCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagnetCharacter_Statics::ClassParams = {
		&AMagnetCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMagnetCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMagnetCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagnetCharacter()
	{
		if (!Z_Registration_Info_UClass_AMagnetCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagnetCharacter.OuterSingleton, Z_Construct_UClass_AMagnetCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagnetCharacter.OuterSingleton;
	}
	template<> MAGNET_API UClass* StaticClass<AMagnetCharacter>()
	{
		return AMagnetCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagnetCharacter);
	struct Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_MagnetCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_MagnetCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagnetCharacter, AMagnetCharacter::StaticClass, TEXT("AMagnetCharacter"), &Z_Registration_Info_UClass_AMagnetCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagnetCharacter), 978480520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_MagnetCharacter_h_1503476842(TEXT("/Script/Magnet"),
		Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_MagnetCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_MagnetCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
