// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcade/APlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPlayer() {}
// Cross Module References
	ARCADE_API UClass* Z_Construct_UClass_AAPlayer();
	ARCADE_API UClass* Z_Construct_UClass_AAPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcade();
// End Cross Module References
	void AAPlayer::StaticRegisterNativesAAPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAPlayer);
	UClass* Z_Construct_UClass_AAPlayer_NoRegister()
	{
		return AAPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AAPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "APlayer.h" },
		{ "ModuleRelativePath", "APlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPlayer_Statics::ClassParams = {
		&AAPlayer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AAPlayer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAPlayer()
	{
		if (!Z_Registration_Info_UClass_AAPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAPlayer.OuterSingleton, Z_Construct_UClass_AAPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAPlayer.OuterSingleton;
	}
	template<> ARCADE_API UClass* StaticClass<AAPlayer>()
	{
		return AAPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAPlayer);
	AAPlayer::~AAPlayer() {}
	struct Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_APlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_APlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAPlayer, AAPlayer::StaticClass, TEXT("AAPlayer"), &Z_Registration_Info_UClass_AAPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPlayer), 3000651115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_APlayer_h_2924123571(TEXT("/Script/Arcade"),
		Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_APlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Arcade_Source_Arcade_APlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
