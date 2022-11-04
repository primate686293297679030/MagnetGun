// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MAGNET_Gun_generated_h
#error "Gun.generated.h already included, missing '#pragma once' in Gun.h"
#endif
#define MAGNET_Gun_generated_h

#define FID_Magnet_Source_Magnet_Gun_h_25_SPARSE_DATA
#define FID_Magnet_Source_Magnet_Gun_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRMB); \
	DECLARE_FUNCTION(execLMB); \
	DECLARE_FUNCTION(execPlayerInputs); \
	DECLARE_FUNCTION(execCallbackfunctionToDelegate); \
	DECLARE_FUNCTION(execHandleOverlap);


#define FID_Magnet_Source_Magnet_Gun_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRMB); \
	DECLARE_FUNCTION(execLMB); \
	DECLARE_FUNCTION(execPlayerInputs); \
	DECLARE_FUNCTION(execCallbackfunctionToDelegate); \
	DECLARE_FUNCTION(execHandleOverlap);


#define FID_Magnet_Source_Magnet_Gun_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagnetGun(); \
	friend struct Z_Construct_UClass_AMagnetGun_Statics; \
public: \
	DECLARE_CLASS(AMagnetGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Magnet"), NO_API) \
	DECLARE_SERIALIZER(AMagnetGun)


#define FID_Magnet_Source_Magnet_Gun_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAMagnetGun(); \
	friend struct Z_Construct_UClass_AMagnetGun_Statics; \
public: \
	DECLARE_CLASS(AMagnetGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Magnet"), NO_API) \
	DECLARE_SERIALIZER(AMagnetGun)


#define FID_Magnet_Source_Magnet_Gun_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagnetGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagnetGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagnetGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagnetGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagnetGun(AMagnetGun&&); \
	NO_API AMagnetGun(const AMagnetGun&); \
public:


#define FID_Magnet_Source_Magnet_Gun_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagnetGun(AMagnetGun&&); \
	NO_API AMagnetGun(const AMagnetGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagnetGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagnetGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMagnetGun)


#define FID_Magnet_Source_Magnet_Gun_h_22_PROLOG
#define FID_Magnet_Source_Magnet_Gun_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Magnet_Source_Magnet_Gun_h_25_SPARSE_DATA \
	FID_Magnet_Source_Magnet_Gun_h_25_RPC_WRAPPERS \
	FID_Magnet_Source_Magnet_Gun_h_25_INCLASS \
	FID_Magnet_Source_Magnet_Gun_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Magnet_Source_Magnet_Gun_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Magnet_Source_Magnet_Gun_h_25_SPARSE_DATA \
	FID_Magnet_Source_Magnet_Gun_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Magnet_Source_Magnet_Gun_h_25_INCLASS_NO_PURE_DECLS \
	FID_Magnet_Source_Magnet_Gun_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGNET_API UClass* StaticClass<class AMagnetGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Magnet_Source_Magnet_Gun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
