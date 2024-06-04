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
struct FVector;
struct FHitResult;
#ifdef SDOPARCIAL_SdoParcialProjectile_generated_h
#error "SdoParcialProjectile.generated.h already included, missing '#pragma once' in SdoParcialProjectile.h"
#endif
#define SDOPARCIAL_SdoParcialProjectile_generated_h

#define SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_SPARSE_DATA
#define SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASdoParcialProjectile(); \
	friend struct Z_Construct_UClass_ASdoParcialProjectile_Statics; \
public: \
	DECLARE_CLASS(ASdoParcialProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SdoParcial"), NO_API) \
	DECLARE_SERIALIZER(ASdoParcialProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASdoParcialProjectile(); \
	friend struct Z_Construct_UClass_ASdoParcialProjectile_Statics; \
public: \
	DECLARE_CLASS(ASdoParcialProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SdoParcial"), NO_API) \
	DECLARE_SERIALIZER(ASdoParcialProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASdoParcialProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASdoParcialProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASdoParcialProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASdoParcialProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASdoParcialProjectile(ASdoParcialProjectile&&); \
	NO_API ASdoParcialProjectile(const ASdoParcialProjectile&); \
public:


#define SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASdoParcialProjectile(ASdoParcialProjectile&&); \
	NO_API ASdoParcialProjectile(const ASdoParcialProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASdoParcialProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASdoParcialProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASdoParcialProjectile)


#define SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ASdoParcialProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ASdoParcialProjectile, ProjectileMovement); }


#define SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_12_PROLOG
#define SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_SPARSE_DATA \
	SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_RPC_WRAPPERS \
	SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_INCLASS \
	SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_SPARSE_DATA \
	SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_INCLASS_NO_PURE_DECLS \
	SdoParcial_Source_SdoParcial_SdoParcialProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SDOPARCIAL_API UClass* StaticClass<class ASdoParcialProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SdoParcial_Source_SdoParcial_SdoParcialProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
