// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SdoParcial/Escuadrones.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscuadrones() {}
// Cross Module References
	SDOPARCIAL_API UClass* Z_Construct_UClass_AEscuadrones_NoRegister();
	SDOPARCIAL_API UClass* Z_Construct_UClass_AEscuadrones();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SdoParcial();
// End Cross Module References
	void AEscuadrones::StaticRegisterNativesAEscuadrones()
	{
	}
	UClass* Z_Construct_UClass_AEscuadrones_NoRegister()
	{
		return AEscuadrones::StaticClass();
	}
	struct Z_Construct_UClass_AEscuadrones_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscuadrones_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SdoParcial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscuadrones_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Escuadrones.h" },
		{ "ModuleRelativePath", "Escuadrones.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscuadrones_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscuadrones>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscuadrones_Statics::ClassParams = {
		&AEscuadrones::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscuadrones_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscuadrones_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscuadrones()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscuadrones_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscuadrones, 2098783324);
	template<> SDOPARCIAL_API UClass* StaticClass<AEscuadrones>()
	{
		return AEscuadrones::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscuadrones(Z_Construct_UClass_AEscuadrones, &AEscuadrones::StaticClass, TEXT("/Script/SdoParcial"), TEXT("AEscuadrones"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscuadrones);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
