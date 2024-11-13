// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcade/NewActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewActorComponent() {}
// Cross Module References
	ARCADE_API UClass* Z_Construct_UClass_UNewActorComponent();
	ARCADE_API UClass* Z_Construct_UClass_UNewActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Arcade();
// End Cross Module References
	void UNewActorComponent::StaticRegisterNativesUNewActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewActorComponent);
	UClass* Z_Construct_UClass_UNewActorComponent_NoRegister()
	{
		return UNewActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNewActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcade,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewActorComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NewActorComponent.h" },
		{ "ModuleRelativePath", "NewActorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewActorComponent_Statics::ClassParams = {
		&UNewActorComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewActorComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UNewActorComponent()
	{
		if (!Z_Registration_Info_UClass_UNewActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewActorComponent.OuterSingleton, Z_Construct_UClass_UNewActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNewActorComponent.OuterSingleton;
	}
	template<> ARCADE_API UClass* StaticClass<UNewActorComponent>()
	{
		return UNewActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewActorComponent);
	UNewActorComponent::~UNewActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_jfkab_Documents_Unreal_Projects_ArcadeSimulator_Arcade_Source_Arcade_NewActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jfkab_Documents_Unreal_Projects_ArcadeSimulator_Arcade_Source_Arcade_NewActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNewActorComponent, UNewActorComponent::StaticClass, TEXT("UNewActorComponent"), &Z_Registration_Info_UClass_UNewActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewActorComponent), 3776490667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jfkab_Documents_Unreal_Projects_ArcadeSimulator_Arcade_Source_Arcade_NewActorComponent_h_1451836005(TEXT("/Script/Arcade"),
		Z_CompiledInDeferFile_FID_Users_jfkab_Documents_Unreal_Projects_ArcadeSimulator_Arcade_Source_Arcade_NewActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jfkab_Documents_Unreal_Projects_ArcadeSimulator_Arcade_Source_Arcade_NewActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
