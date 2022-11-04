// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagnet_init() {}
	MAGNET_API UFunction* Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Magnet;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Magnet()
	{
		if (!Z_Registration_Info_UPackage__Script_Magnet.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Magnet_disgustingDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Magnet",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB7C7C08C,
				0xE0889591,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Magnet.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Magnet.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Magnet(Z_Construct_UPackage__Script_Magnet, TEXT("/Script/Magnet"), Z_Registration_Info_UPackage__Script_Magnet, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB7C7C08C, 0xE0889591));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
