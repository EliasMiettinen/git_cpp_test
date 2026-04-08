// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cpp_git_test/cpp_git_testGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecpp_git_testGameMode() {}
// Cross Module References
	CPP_GIT_TEST_API UClass* Z_Construct_UClass_Acpp_git_testGameMode_NoRegister();
	CPP_GIT_TEST_API UClass* Z_Construct_UClass_Acpp_git_testGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_cpp_git_test();
// End Cross Module References
	void Acpp_git_testGameMode::StaticRegisterNativesAcpp_git_testGameMode()
	{
	}
	UClass* Z_Construct_UClass_Acpp_git_testGameMode_NoRegister()
	{
		return Acpp_git_testGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Acpp_git_testGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acpp_git_testGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_cpp_git_test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_git_testGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "cpp_git_testGameMode.h" },
		{ "ModuleRelativePath", "cpp_git_testGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acpp_git_testGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acpp_git_testGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acpp_git_testGameMode_Statics::ClassParams = {
		&Acpp_git_testGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Acpp_git_testGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_git_testGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acpp_git_testGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acpp_git_testGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acpp_git_testGameMode, 2301108254);
	template<> CPP_GIT_TEST_API UClass* StaticClass<Acpp_git_testGameMode>()
	{
		return Acpp_git_testGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acpp_git_testGameMode(Z_Construct_UClass_Acpp_git_testGameMode, &Acpp_git_testGameMode::StaticClass, TEXT("/Script/cpp_git_test"), TEXT("Acpp_git_testGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acpp_git_testGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
