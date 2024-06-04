// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SdoParcial/SdoParcialGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSdoParcialGameMode() {}
// Cross Module References
	SDOPARCIAL_API UClass* Z_Construct_UClass_ASdoParcialGameMode_NoRegister();
	SDOPARCIAL_API UClass* Z_Construct_UClass_ASdoParcialGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SdoParcial();
// End Cross Module References
	void ASdoParcialGameMode::StaticRegisterNativesASdoParcialGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASdoParcialGameMode_NoRegister()
	{
		return ASdoParcialGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASdoParcialGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASdoParcialGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SdoParcial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASdoParcialGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SdoParcialGameMode.h" },
		{ "ModuleRelativePath", "SdoParcialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASdoParcialGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASdoParcialGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASdoParcialGameMode_Statics::ClassParams = {
		&ASdoParcialGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASdoParcialGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASdoParcialGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASdoParcialGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASdoParcialGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASdoParcialGameMode, 909737955);
	template<> SDOPARCIAL_API UClass* StaticClass<ASdoParcialGameMode>()
	{
		return ASdoParcialGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASdoParcialGameMode(Z_Construct_UClass_ASdoParcialGameMode, &ASdoParcialGameMode::StaticClass, TEXT("/Script/SdoParcial"), TEXT("ASdoParcialGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASdoParcialGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
