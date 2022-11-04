// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAGNET_MagnetCharacter_generated_h
#error "MagnetCharacter.generated.h already included, missing '#pragma once' in MagnetCharacter.h"
#endif
#define MAGNET_MagnetCharacter_generated_h

#define FID_Magnet_Source_Magnet_MagnetCharacter_h_19_DELEGATE \
struct _Script_Magnet_eventdisgustingDelegate_Parms \
{ \
	float index; \
}; \
static inline void FdisgustingDelegate_DelegateWrapper(const FMulticastScriptDelegate& disgustingDelegate, float index) \
{ \
	_Script_Magnet_eventdisgustingDelegate_Parms Parms; \
	Parms.index=index; \
	disgustingDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Magnet_Source_Magnet_MagnetCharacter_h_24_SPARSE_DATA
#define FID_Magnet_Source_Magnet_MagnetCharacter_h_24_RPC_WRAPPERS
#define FID_Magnet_Source_Magnet_MagnetCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Magnet_Source_Magnet_MagnetCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagnetCharacter(); \
	friend struct Z_Construct_UClass_AMagnetCharacter_Statics; \
public: \
	DECLARE_CLASS(AMagnetCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Magnet"), NO_API) \
	DECLARE_SERIALIZER(AMagnetCharacter)


#define FID_Magnet_Source_Magnet_MagnetCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAMagnetCharacter(); \
	friend struct Z_Construct_UClass_AMagnetCharacter_Statics; \
public: \
	DECLARE_CLASS(AMagnetCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Magnet"), NO_API) \
	DECLARE_SERIALIZER(AMagnetCharacter)


#define FID_Magnet_Source_Magnet_MagnetCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagnetCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagnetCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagnetCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagnetCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagnetCharacter(AMagnetCharacter&&); \
	NO_API AMagnetCharacter(const AMagnetCharacter&); \
public:


#define FID_Magnet_Source_Magnet_MagnetCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagnetCharacter(AMagnetCharacter&&); \
	NO_API AMagnetCharacter(const AMagnetCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagnetCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagnetCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMagnetCharacter)


#define FID_Magnet_Source_Magnet_MagnetCharacter_h_21_PROLOG
#define FID_Magnet_Source_Magnet_MagnetCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Magnet_Source_Magnet_MagnetCharacter_h_24_SPARSE_DATA \
	FID_Magnet_Source_Magnet_MagnetCharacter_h_24_RPC_WRAPPERS \
	FID_Magnet_Source_Magnet_MagnetCharacter_h_24_INCLASS \
	FID_Magnet_Source_Magnet_MagnetCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Magnet_Source_Magnet_MagnetCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Magnet_Source_Magnet_MagnetCharacter_h_24_SPARSE_DATA \
	FID_Magnet_Source_Magnet_MagnetCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Magnet_Source_Magnet_MagnetCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Magnet_Source_Magnet_MagnetCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAGNET_API UClass* StaticClass<class AMagnetCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Magnet_Source_Magnet_MagnetCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
