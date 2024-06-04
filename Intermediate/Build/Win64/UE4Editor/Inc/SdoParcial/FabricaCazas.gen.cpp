// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SdoParcial/FabricaCazas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaCazas() {}
// Cross Module References
	SDOPARCIAL_API UClass* Z_Construct_UClass_AFabricaCazas_NoRegister();
	SDOPARCIAL_API UClass* Z_Construct_UClass_AFabricaCazas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SdoParcial();
	SDOPARCIAL_API UClass* Z_Construct_UClass_UNaveAbstracFactory_NoRegister();
// End Cross Module References
	void AFabricaCazas::StaticRegisterNativesAFabricaCazas()
	{
	}
	UClass* Z_Construct_UClass_AFabricaCazas_NoRegister()
	{
		return AFabricaCazas::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaCazas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaCazas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SdoParcial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaCazas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaCazas.h" },
		{ "ModuleRelativePath", "FabricaCazas.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFabricaCazas_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNaveAbstracFactory_NoRegister, (int32)VTABLE_OFFSET(AFabricaCazas, INaveAbstracFactory), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaCazas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaCazas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaCazas_Statics::ClassParams = {
		&AFabricaCazas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaCazas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaCazas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaCazas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaCazas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaCazas, 202313272);
	template<> SDOPARCIAL_API UClass* StaticClass<AFabricaCazas>()
	{
		return AFabricaCazas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaCazas(Z_Construct_UClass_AFabricaCazas, &AFabricaCazas::StaticClass, TEXT("/Script/SdoParcial"), TEXT("AFabricaCazas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaCazas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
