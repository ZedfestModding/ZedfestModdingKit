// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAutoMod/Public/UnrealAutoModBaseWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealAutoModBaseWidget() {}
// Cross Module References
	UNREALAUTOMOD_API UClass* Z_Construct_UClass_UUnrealAutoModBaseWidget_NoRegister();
	UNREALAUTOMOD_API UClass* Z_Construct_UClass_UUnrealAutoModBaseWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UnrealAutoMod();
	UNREALAUTOMOD_API UClass* Z_Construct_UClass_UUnrealAutoModUtilities_NoRegister();
// End Cross Module References
	void UUnrealAutoModBaseWidget::StaticRegisterNativesUUnrealAutoModBaseWidget()
	{
	}
	UClass* Z_Construct_UClass_UUnrealAutoModBaseWidget_NoRegister()
	{
		return UUnrealAutoModBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Utilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Utilities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealAutoModBaseWidget.h" },
		{ "ModuleRelativePath", "Public/UnrealAutoModBaseWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::NewProp_Utilities_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Utilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModBaseWidget.h" },
		{ "ToolTip", "UnrealAutoModUtilities object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::NewProp_Utilities = { "Utilities", nullptr, (EPropertyFlags)0x00220800000a201d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnrealAutoModBaseWidget, Utilities), Z_Construct_UClass_UUnrealAutoModUtilities_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::NewProp_Utilities_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::NewProp_Utilities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::NewProp_Utilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealAutoModBaseWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::ClassParams = {
		&UUnrealAutoModBaseWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealAutoModBaseWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealAutoModBaseWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealAutoModBaseWidget, 3984131075);
	template<> UNREALAUTOMOD_API UClass* StaticClass<UUnrealAutoModBaseWidget>()
	{
		return UUnrealAutoModBaseWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealAutoModBaseWidget(Z_Construct_UClass_UUnrealAutoModBaseWidget, &UUnrealAutoModBaseWidget::StaticClass, TEXT("/Script/UnrealAutoMod"), TEXT("UUnrealAutoModBaseWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealAutoModBaseWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
