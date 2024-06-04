// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SdoParcial/NaveAbstracFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAbstracFactory() {}
// Cross Module References
	SDOPARCIAL_API UClass* Z_Construct_UClass_UNaveAbstracFactory_NoRegister();
	SDOPARCIAL_API UClass* Z_Construct_UClass_UNaveAbstracFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SdoParcial();
// End Cross Module References
	void UNaveAbstracFactory::StaticRegisterNativesUNaveAbstracFactory()
	{
	}
	UClass* Z_Construct_UClass_UNaveAbstracFactory_NoRegister()
	{
		return UNaveAbstracFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNaveAbstracFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNaveAbstracFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SdoParcial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaveAbstracFactory_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "NaveAbstracFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNaveAbstracFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INaveAbstracFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNaveAbstracFactory_Statics::ClassParams = {
		&UNaveAbstracFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNaveAbstracFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNaveAbstracFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNaveAbstracFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNaveAbstracFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNaveAbstracFactory, 184043932);
	template<> SDOPARCIAL_API UClass* StaticClass<UNaveAbstracFactory>()
	{
		return UNaveAbstracFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNaveAbstracFactory(Z_Construct_UClass_UNaveAbstracFactory, &UNaveAbstracFactory::StaticClass, TEXT("/Script/SdoParcial"), TEXT("UNaveAbstracFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNaveAbstracFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
