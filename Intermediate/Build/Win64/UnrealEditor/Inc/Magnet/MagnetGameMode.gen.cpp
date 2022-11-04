// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Magnet/MagnetGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagnetGameMode() {}
// Cross Module References
	MAGNET_API UClass* Z_Construct_UClass_AMagnetGameMode_NoRegister();
	MAGNET_API UClass* Z_Construct_UClass_AMagnetGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Magnet();
// End Cross Module References
	void AMagnetGameMode::StaticRegisterNativesAMagnetGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagnetGameMode);
	UClass* Z_Construct_UClass_AMagnetGameMode_NoRegister()
	{
		return AMagnetGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMagnetGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagnetGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Magnet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnetGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MagnetGameMode.h" },
		{ "ModuleRelativePath", "MagnetGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagnetGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagnetGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagnetGameMode_Statics::ClassParams = {
		&AMagnetGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMagnetGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMagnetGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagnetGameMode()
	{
		if (!Z_Registration_Info_UClass_AMagnetGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagnetGameMode.OuterSingleton, Z_Construct_UClass_AMagnetGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMagnetGameMode.OuterSingleton;
	}
	template<> MAGNET_API UClass* StaticClass<AMagnetGameMode>()
	{
		return AMagnetGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagnetGameMode);
	struct Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_MagnetGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_MagnetGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMagnetGameMode, AMagnetGameMode::StaticClass, TEXT("AMagnetGameMode"), &Z_Registration_Info_UClass_AMagnetGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagnetGameMode), 2237554836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_MagnetGameMode_h_242960856(TEXT("/Script/Magnet"),
		Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_MagnetGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Magnet_Source_Magnet_MagnetGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
