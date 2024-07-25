// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAutoMod/Public/UnrealAutoModStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealAutoModStructs() {}
// Cross Module References
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FMenuTemplate();
	UPackage* Z_Construct_UPackage__Script_UnrealAutoMod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALAUTOMOD_API UClass* Z_Construct_UClass_UUnrealAutoModBaseWidget_NoRegister();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FUnrealAutoModTheme();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FUnrealAutoModJson();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FModEntry();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FWindowManagementEntry();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FProcessManagementList();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FProgramRunnerEntry();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FRepakInfo();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FGameInfo();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FEngineInfo();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FGeneralInfo();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FButtonInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_ECompressionType();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EPackingType();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EUnrealModTreeType();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FMainMenuWidgetEntry();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EGameLaunchType();
	UNREALAUTOMOD_API UScriptStruct* Z_Construct_UScriptStruct_FProcessManagementEntry();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EScriptStateType();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EWindowManagementAction();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EExecutionMode();
// End Cross Module References
class UScriptStruct* FMenuTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FMenuTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMenuTemplate, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("MenuTemplate"), sizeof(FMenuTemplate), Get_Z_Construct_UScriptStruct_FMenuTemplate_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FMenuTemplate>()
{
	return FMenuTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMenuTemplate(FMenuTemplate::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("MenuTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFMenuTemplate
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFMenuTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MenuTemplate")),new UScriptStruct::TCppStructOps<FMenuTemplate>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFMenuTemplate;
	struct Z_Construct_UScriptStruct_FMenuTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TitleText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMenuTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMenuTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuTemplate_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMenuTemplate_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuTemplate, WidgetClass), Z_Construct_UClass_UUnrealAutoModBaseWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuTemplate_Statics::NewProp_WidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuTemplate_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuTemplate_Statics::NewProp_TitleText_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMenuTemplate_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuTemplate, TitleText), METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuTemplate_Statics::NewProp_TitleText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuTemplate_Statics::NewProp_TitleText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMenuTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuTemplate_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuTemplate_Statics::NewProp_TitleText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMenuTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MenuTemplate",
		sizeof(FMenuTemplate),
		alignof(FMenuTemplate),
		Z_Construct_UScriptStruct_FMenuTemplate_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMenuTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMenuTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MenuTemplate"), sizeof(FMenuTemplate), Get_Z_Construct_UScriptStruct_FMenuTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMenuTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMenuTemplate_Hash() { return 2691814967U; }
class UScriptStruct* FUnrealAutoModTheme::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FUnrealAutoModTheme_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnrealAutoModTheme, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("UnrealAutoModTheme"), sizeof(FUnrealAutoModTheme), Get_Z_Construct_UScriptStruct_FUnrealAutoModTheme_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FUnrealAutoModTheme>()
{
	return FUnrealAutoModTheme::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUnrealAutoModTheme(FUnrealAutoModTheme::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("UnrealAutoModTheme"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFUnrealAutoModTheme
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFUnrealAutoModTheme()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UnrealAutoModTheme")),new UScriptStruct::TCppStructOps<FUnrealAutoModTheme>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFUnrealAutoModTheme;
	struct Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundBottomColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundBottomColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundDividerColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundDividerColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundMiddleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundMiddleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundTopColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundTopColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnrealAutoModTheme>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundBottomColor_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundBottomColor = { "BackgroundBottomColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModTheme, BackgroundBottomColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundBottomColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundBottomColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundDividerColor_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundDividerColor = { "BackgroundDividerColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModTheme, BackgroundDividerColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundDividerColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundDividerColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundMiddleColor_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundMiddleColor = { "BackgroundMiddleColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModTheme, BackgroundMiddleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundMiddleColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundMiddleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundTopColor_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundTopColor = { "BackgroundTopColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModTheme, BackgroundTopColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundTopColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundTopColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundBottomColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundDividerColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundMiddleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::NewProp_BackgroundTopColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UnrealAutoModTheme",
		sizeof(FUnrealAutoModTheme),
		alignof(FUnrealAutoModTheme),
		Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUnrealAutoModTheme()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUnrealAutoModTheme_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UnrealAutoModTheme"), sizeof(FUnrealAutoModTheme), Get_Z_Construct_UScriptStruct_FUnrealAutoModTheme_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUnrealAutoModTheme_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUnrealAutoModTheme_Hash() { return 377012103U; }
class UScriptStruct* FUnrealAutoModJson::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FUnrealAutoModJson_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnrealAutoModJson, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("UnrealAutoModJson"), sizeof(FUnrealAutoModJson), Get_Z_Construct_UScriptStruct_FUnrealAutoModJson_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FUnrealAutoModJson>()
{
	return FUnrealAutoModJson::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUnrealAutoModJson(FUnrealAutoModJson::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("UnrealAutoModJson"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFUnrealAutoModJson
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFUnrealAutoModJson()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UnrealAutoModJson")),new UScriptStruct::TCppStructOps<FUnrealAutoModJson>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFUnrealAutoModJson;
	struct Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModsInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModsInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModsInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowManagementInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WindowManagementInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindowManagementInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FProcessManagementInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FProcessManagementInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgramRunnerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProgramRunnerInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgramRunnerInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepakInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RepakInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltUprojectNameInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AltUprojectNameInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EngineInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneralInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneralInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnrealAutoModJson>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ModsInfo_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ModsInfo = { "ModsInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModJson, ModsInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ModsInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ModsInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ModsInfo_Inner = { "ModsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_WindowManagementInfo_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_WindowManagementInfo = { "WindowManagementInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModJson, WindowManagementInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_WindowManagementInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_WindowManagementInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_WindowManagementInfo_Inner = { "WindowManagementInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWindowManagementEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_FProcessManagementInfo_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_FProcessManagementInfo = { "FProcessManagementInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModJson, FProcessManagementInfo), Z_Construct_UScriptStruct_FProcessManagementList, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_FProcessManagementInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_FProcessManagementInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ProgramRunnerInfo_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ProgramRunnerInfo = { "ProgramRunnerInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModJson, ProgramRunnerInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ProgramRunnerInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ProgramRunnerInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ProgramRunnerInfo_Inner = { "ProgramRunnerInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProgramRunnerEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_RepakInfo_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_RepakInfo = { "RepakInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModJson, RepakInfo), Z_Construct_UScriptStruct_FRepakInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_RepakInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_RepakInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_AltUprojectNameInfo_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_AltUprojectNameInfo = { "AltUprojectNameInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModJson, AltUprojectNameInfo), Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_AltUprojectNameInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_AltUprojectNameInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_GameInfo_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_GameInfo = { "GameInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModJson, GameInfo), Z_Construct_UScriptStruct_FGameInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_GameInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_GameInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_EngineInfo_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_EngineInfo = { "EngineInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModJson, EngineInfo), Z_Construct_UScriptStruct_FEngineInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_EngineInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_EngineInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_GeneralInfo_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_GeneralInfo = { "GeneralInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnrealAutoModJson, GeneralInfo), Z_Construct_UScriptStruct_FGeneralInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_GeneralInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_GeneralInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ModsInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ModsInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_WindowManagementInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_WindowManagementInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_FProcessManagementInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ProgramRunnerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_ProgramRunnerInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_RepakInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_AltUprojectNameInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_GameInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_EngineInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::NewProp_GeneralInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UnrealAutoModJson",
		sizeof(FUnrealAutoModJson),
		alignof(FUnrealAutoModJson),
		Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUnrealAutoModJson()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUnrealAutoModJson_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UnrealAutoModJson"), sizeof(FUnrealAutoModJson), Get_Z_Construct_UScriptStruct_FUnrealAutoModJson_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUnrealAutoModJson_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUnrealAutoModJson_Hash() { return 2213344911U; }
class UScriptStruct* FEngineInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FEngineInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineInfo, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("EngineInfo"), sizeof(FEngineInfo), Get_Z_Construct_UScriptStruct_FEngineInfo_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FEngineInfo>()
{
	return FEngineInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineInfo(FEngineInfo::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("EngineInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFEngineInfo
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFEngineInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineInfo")),new UScriptStruct::TCppStructOps<FEngineInfo>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFEngineInfo;
	struct Z_Construct_UScriptStruct_FEngineInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysBuildProject_MetaData[];
#endif
		static void NewProp_bAlwaysBuildProject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysBuildProject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearUprojectSavedDirectoryBeforeTests_MetaData[];
#endif
		static void NewProp_bClearUprojectSavedDirectoryBeforeTests_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearUprojectSavedDirectoryBeforeTests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseUnversionedCookedContent_MetaData[];
#endif
		static void NewProp_bUseUnversionedCookedContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseUnversionedCookedContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineCookAndPackagingArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EngineCookAndPackagingArgs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EngineCookAndPackagingArgs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineLaunchArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EngineLaunchArgs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EngineLaunchArgs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResavePackagesAndFixUpRedirectorsBeforeEngineOpen_MetaData[];
#endif
		static void NewProp_bResavePackagesAndFixUpRedirectorsBeforeEngineOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResavePackagesAndFixUpRedirectorsBeforeEngineOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToggleEngineDuringTesting_MetaData[];
#endif
		static void NewProp_bToggleEngineDuringTesting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleEngineDuringTesting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bAlwaysBuildProject_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bAlwaysBuildProject_SetBit(void* Obj)
	{
		((FEngineInfo*)Obj)->bAlwaysBuildProject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bAlwaysBuildProject = { "bAlwaysBuildProject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEngineInfo), &Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bAlwaysBuildProject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bAlwaysBuildProject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bAlwaysBuildProject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bClearUprojectSavedDirectoryBeforeTests_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bClearUprojectSavedDirectoryBeforeTests_SetBit(void* Obj)
	{
		((FEngineInfo*)Obj)->bClearUprojectSavedDirectoryBeforeTests = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bClearUprojectSavedDirectoryBeforeTests = { "bClearUprojectSavedDirectoryBeforeTests", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEngineInfo), &Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bClearUprojectSavedDirectoryBeforeTests_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bClearUprojectSavedDirectoryBeforeTests_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bClearUprojectSavedDirectoryBeforeTests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bUseUnversionedCookedContent_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bUseUnversionedCookedContent_SetBit(void* Obj)
	{
		((FEngineInfo*)Obj)->bUseUnversionedCookedContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bUseUnversionedCookedContent = { "bUseUnversionedCookedContent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEngineInfo), &Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bUseUnversionedCookedContent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bUseUnversionedCookedContent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bUseUnversionedCookedContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineCookAndPackagingArgs_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineCookAndPackagingArgs = { "EngineCookAndPackagingArgs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineInfo, EngineCookAndPackagingArgs), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineCookAndPackagingArgs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineCookAndPackagingArgs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineCookAndPackagingArgs_Inner = { "EngineCookAndPackagingArgs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineLaunchArgs_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineLaunchArgs = { "EngineLaunchArgs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEngineInfo, EngineLaunchArgs), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineLaunchArgs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineLaunchArgs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineLaunchArgs_Inner = { "EngineLaunchArgs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bResavePackagesAndFixUpRedirectorsBeforeEngineOpen_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bResavePackagesAndFixUpRedirectorsBeforeEngineOpen_SetBit(void* Obj)
	{
		((FEngineInfo*)Obj)->bResavePackagesAndFixUpRedirectorsBeforeEngineOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bResavePackagesAndFixUpRedirectorsBeforeEngineOpen = { "bResavePackagesAndFixUpRedirectorsBeforeEngineOpen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEngineInfo), &Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bResavePackagesAndFixUpRedirectorsBeforeEngineOpen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bResavePackagesAndFixUpRedirectorsBeforeEngineOpen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bResavePackagesAndFixUpRedirectorsBeforeEngineOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bToggleEngineDuringTesting_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bToggleEngineDuringTesting_SetBit(void* Obj)
	{
		((FEngineInfo*)Obj)->bToggleEngineDuringTesting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bToggleEngineDuringTesting = { "bToggleEngineDuringTesting", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEngineInfo), &Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bToggleEngineDuringTesting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bToggleEngineDuringTesting_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bToggleEngineDuringTesting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bAlwaysBuildProject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bClearUprojectSavedDirectoryBeforeTests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bUseUnversionedCookedContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineCookAndPackagingArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineCookAndPackagingArgs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineLaunchArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_EngineLaunchArgs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bResavePackagesAndFixUpRedirectorsBeforeEngineOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineInfo_Statics::NewProp_bToggleEngineDuringTesting,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"EngineInfo",
		sizeof(FEngineInfo),
		alignof(FEngineInfo),
		Z_Construct_UScriptStruct_FEngineInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineInfo"), sizeof(FEngineInfo), Get_Z_Construct_UScriptStruct_FEngineInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEngineInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineInfo_Hash() { return 1966741495U; }
class UScriptStruct* FButtonInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FButtonInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FButtonInfo, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("ButtonInfo"), sizeof(FButtonInfo), Get_Z_Construct_UScriptStruct_FButtonInfo_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FButtonInfo>()
{
	return FButtonInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FButtonInfo(FButtonInfo::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("ButtonInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFButtonInfo
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFButtonInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ButtonInfo")),new UScriptStruct::TCppStructOps<FButtonInfo>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFButtonInfo;
	struct Z_Construct_UScriptStruct_FButtonInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransformAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunctionParameters;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ButtonText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FButtonInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FButtonInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_TransformAngle_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_TransformAngle = { "TransformAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FButtonInfo, TransformAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_TransformAngle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_TransformAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_ButtonMaterial_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_ButtonMaterial = { "ButtonMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FButtonInfo, ButtonMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_ButtonMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_ButtonMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionParameters_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionParameters = { "FunctionParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FButtonInfo, FunctionParameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionParameters_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionParameters_Inner = { "FunctionParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FButtonInfo, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FButtonInfo, Object), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_ButtonText_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FButtonInfo, ButtonText), METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_ButtonText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_ButtonText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FButtonInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_TransformAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_ButtonMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FButtonInfo_Statics::NewProp_ButtonText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FButtonInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ButtonInfo",
		sizeof(FButtonInfo),
		alignof(FButtonInfo),
		Z_Construct_UScriptStruct_FButtonInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FButtonInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FButtonInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FButtonInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FButtonInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ButtonInfo"), sizeof(FButtonInfo), Get_Z_Construct_UScriptStruct_FButtonInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FButtonInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FButtonInfo_Hash() { return 3498725630U; }
class UScriptStruct* FModEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FModEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FModEntry, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("ModEntry"), sizeof(FModEntry), Get_Z_Construct_UScriptStruct_FModEntry_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FModEntry>()
{
	return FModEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FModEntry(FModEntry::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("ModEntry"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFModEntry
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFModEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ModEntry")),new UScriptStruct::TCppStructOps<FModEntry>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFModEntry;
	struct Z_Construct_UScriptStruct_FModEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreePaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TreePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompressionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PackingType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PackingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakChunkNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PakChunkNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModNameDirectoryOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModNameDirectoryOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseModNameDirectoryNameOverride_MetaData[];
#endif
		static void NewProp_UseModNameDirectoryNameOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseModNameDirectoryNameOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModNameDirectoryType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ModNameDirectoryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModNameDirectoryType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PakDirectoryStructure_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PakDirectoryStructure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_TreePaths_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_TreePaths = { "TreePaths", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModEntry, TreePaths), METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_TreePaths_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_TreePaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_TreePaths_Inner = { "TreePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_AssetPaths_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_AssetPaths = { "AssetPaths", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModEntry, AssetPaths), METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_AssetPaths_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_AssetPaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_AssetPaths_Inner = { "AssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_CompressionType_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_CompressionType = { "CompressionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModEntry, CompressionType), Z_Construct_UEnum_UnrealAutoMod_ECompressionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_CompressionType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_CompressionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_CompressionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PackingType_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PackingType = { "PackingType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModEntry, PackingType), Z_Construct_UEnum_UnrealAutoMod_EPackingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PackingType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PackingType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PackingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PakChunkNumber_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PakChunkNumber = { "PakChunkNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModEntry, PakChunkNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PakChunkNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PakChunkNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryOverride_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryOverride = { "ModNameDirectoryOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModEntry, ModNameDirectoryOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_UseModNameDirectoryNameOverride_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_UseModNameDirectoryNameOverride_SetBit(void* Obj)
	{
		((FModEntry*)Obj)->UseModNameDirectoryNameOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_UseModNameDirectoryNameOverride = { "UseModNameDirectoryNameOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FModEntry), &Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_UseModNameDirectoryNameOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_UseModNameDirectoryNameOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_UseModNameDirectoryNameOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryType_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryType = { "ModNameDirectoryType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModEntry, ModNameDirectoryType), Z_Construct_UEnum_UnrealAutoMod_EUnrealModTreeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PakDirectoryStructure_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PakDirectoryStructure = { "PakDirectoryStructure", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModEntry, PakDirectoryStructure), METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PakDirectoryStructure_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PakDirectoryStructure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FModEntry*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FModEntry), &Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_bIsEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModName_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FModEntry, ModName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_TreePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_TreePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_AssetPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_AssetPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_CompressionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_CompressionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PackingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PackingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PakChunkNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_UseModNameDirectoryNameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModNameDirectoryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_PakDirectoryStructure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_bIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModEntry_Statics::NewProp_ModName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ModEntry",
		sizeof(FModEntry),
		alignof(FModEntry),
		Z_Construct_UScriptStruct_FModEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FModEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FModEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ModEntry"), sizeof(FModEntry), Get_Z_Construct_UScriptStruct_FModEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FModEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FModEntry_Hash() { return 583749467U; }
class UScriptStruct* FMainMenuWidgetEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMainMenuWidgetEntry, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("MainMenuWidgetEntry"), sizeof(FMainMenuWidgetEntry), Get_Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FMainMenuWidgetEntry>()
{
	return FMainMenuWidgetEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMainMenuWidgetEntry(FMainMenuWidgetEntry::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("MainMenuWidgetEntry"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFMainMenuWidgetEntry
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFMainMenuWidgetEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MainMenuWidgetEntry")),new UScriptStruct::TCppStructOps<FMainMenuWidgetEntry>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFMainMenuWidgetEntry;
	struct Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainMenuWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMainMenuWidgetEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::NewProp_MainMenuWidget_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::NewProp_MainMenuWidget = { "MainMenuWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMainMenuWidgetEntry, MainMenuWidget), Z_Construct_UClass_UUnrealAutoModBaseWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::NewProp_MainMenuWidget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::NewProp_MainMenuWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::NewProp_MainMenuWidget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MainMenuWidgetEntry",
		sizeof(FMainMenuWidgetEntry),
		alignof(FMainMenuWidgetEntry),
		Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMainMenuWidgetEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MainMenuWidgetEntry"), sizeof(FMainMenuWidgetEntry), Get_Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMainMenuWidgetEntry_Hash() { return 462067433U; }
class UScriptStruct* FRepakInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FRepakInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepakInfo, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("RepakInfo"), sizeof(FRepakInfo), Get_Z_Construct_UScriptStruct_FRepakInfo_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FRepakInfo>()
{
	return FRepakInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRepakInfo(FRepakInfo::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("RepakInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFRepakInfo
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFRepakInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RepakInfo")),new UScriptStruct::TCppStructOps<FRepakInfo>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFRepakInfo;
	struct Z_Construct_UScriptStruct_FRepakInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepakVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RepakVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAutomaticVersionFinding_MetaData[];
#endif
		static void NewProp_bOverrideAutomaticVersionFinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAutomaticVersionFinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepakExePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RepakExePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepakInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepakInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepakInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_RepakVersion_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_RepakVersion = { "RepakVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepakInfo, RepakVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_RepakVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_RepakVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_bOverrideAutomaticVersionFinding_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_bOverrideAutomaticVersionFinding_SetBit(void* Obj)
	{
		((FRepakInfo*)Obj)->bOverrideAutomaticVersionFinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_bOverrideAutomaticVersionFinding = { "bOverrideAutomaticVersionFinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRepakInfo), &Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_bOverrideAutomaticVersionFinding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_bOverrideAutomaticVersionFinding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_bOverrideAutomaticVersionFinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_RepakExePath_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_RepakExePath = { "RepakExePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepakInfo, RepakExePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_RepakExePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_RepakExePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepakInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_RepakVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_bOverrideAutomaticVersionFinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepakInfo_Statics::NewProp_RepakExePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepakInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RepakInfo",
		sizeof(FRepakInfo),
		alignof(FRepakInfo),
		Z_Construct_UScriptStruct_FRepakInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRepakInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepakInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRepakInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepakInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRepakInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RepakInfo"), sizeof(FRepakInfo), Get_Z_Construct_UScriptStruct_FRepakInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRepakInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRepakInfo_Hash() { return 3590795883U; }
class UScriptStruct* FGeneralInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FGeneralInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeneralInfo, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("GeneralInfo"), sizeof(FGeneralInfo), Get_Z_Construct_UScriptStruct_FGeneralInfo_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FGeneralInfo>()
{
	return FGeneralInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGeneralInfo(FGeneralInfo::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("GeneralInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFGeneralInfo
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFGeneralInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GeneralInfo")),new UScriptStruct::TCppStructOps<FGeneralInfo>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFGeneralInfo;
	struct Z_Construct_UScriptStruct_FGeneralInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WindowTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkingDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WorkingDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultWorkingDirectory_MetaData[];
#endif
		static void NewProp_bOverrideDefaultWorkingDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultWorkingDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneralInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeneralInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_WindowTitle_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_WindowTitle = { "WindowTitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneralInfo, WindowTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_WindowTitle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_WindowTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_WorkingDirectory_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_WorkingDirectory = { "WorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGeneralInfo, WorkingDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_WorkingDirectory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_WorkingDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_bOverrideDefaultWorkingDirectory_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_bOverrideDefaultWorkingDirectory_SetBit(void* Obj)
	{
		((FGeneralInfo*)Obj)->bOverrideDefaultWorkingDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_bOverrideDefaultWorkingDirectory = { "bOverrideDefaultWorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGeneralInfo), &Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_bOverrideDefaultWorkingDirectory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_bOverrideDefaultWorkingDirectory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_bOverrideDefaultWorkingDirectory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeneralInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_WindowTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_WorkingDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeneralInfo_Statics::NewProp_bOverrideDefaultWorkingDirectory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeneralInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GeneralInfo",
		sizeof(FGeneralInfo),
		alignof(FGeneralInfo),
		Z_Construct_UScriptStruct_FGeneralInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneralInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeneralInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGeneralInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeneralInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGeneralInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GeneralInfo"), sizeof(FGeneralInfo), Get_Z_Construct_UScriptStruct_FGeneralInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGeneralInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGeneralInfo_Hash() { return 3473987457U; }
class UScriptStruct* FGameInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FGameInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameInfo, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("GameInfo"), sizeof(FGameInfo), Get_Z_Construct_UScriptStruct_FGameInfo_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FGameInfo>()
{
	return FGameInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameInfo(FGameInfo::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("GameInfo"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFGameInfo
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFGameInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameInfo")),new UScriptStruct::TCppStructOps<FGameInfo>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFGameInfo;
	struct Z_Construct_UScriptStruct_FGameInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLaunchParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bLaunchParameters;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bLaunchParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWindowTitleOverrideString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_bWindowTitleOverrideString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAutomaticWindowTitleFinding_MetaData[];
#endif
		static void NewProp_bOverrideAutomaticWindowTitleFinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAutomaticWindowTitleFinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipLaunchingGame_MetaData[];
#endif
		static void NewProp_bSkipLaunchingGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipLaunchingGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLauncherExe_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameLauncherExe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAutomaticLauncherExeFinding_MetaData[];
#endif
		static void NewProp_bOverrideAutomaticLauncherExeFinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAutomaticLauncherExeFinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LaunchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LaunchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameExePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameExePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bLaunchParameters_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bLaunchParameters = { "bLaunchParameters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInfo, bLaunchParameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bLaunchParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bLaunchParameters_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bLaunchParameters_Inner = { "bLaunchParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bWindowTitleOverrideString_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bWindowTitleOverrideString = { "bWindowTitleOverrideString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInfo, bWindowTitleOverrideString), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bWindowTitleOverrideString_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bWindowTitleOverrideString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticWindowTitleFinding_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticWindowTitleFinding_SetBit(void* Obj)
	{
		((FGameInfo*)Obj)->bOverrideAutomaticWindowTitleFinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticWindowTitleFinding = { "bOverrideAutomaticWindowTitleFinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameInfo), &Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticWindowTitleFinding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticWindowTitleFinding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticWindowTitleFinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bSkipLaunchingGame_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bSkipLaunchingGame_SetBit(void* Obj)
	{
		((FGameInfo*)Obj)->bSkipLaunchingGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bSkipLaunchingGame = { "bSkipLaunchingGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameInfo), &Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bSkipLaunchingGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bSkipLaunchingGame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bSkipLaunchingGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameID_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInfo, GameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameLauncherExe_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameLauncherExe = { "GameLauncherExe", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInfo, GameLauncherExe), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameLauncherExe_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameLauncherExe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticLauncherExeFinding_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticLauncherExeFinding_SetBit(void* Obj)
	{
		((FGameInfo*)Obj)->bOverrideAutomaticLauncherExeFinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticLauncherExeFinding = { "bOverrideAutomaticLauncherExeFinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGameInfo), &Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticLauncherExeFinding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticLauncherExeFinding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticLauncherExeFinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_LaunchType_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_LaunchType = { "LaunchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInfo, LaunchType), Z_Construct_UEnum_UnrealAutoMod_EGameLaunchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_LaunchType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_LaunchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_LaunchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameExePath_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameExePath = { "GameExePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameInfo, GameExePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameExePath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameExePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bLaunchParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bLaunchParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bWindowTitleOverrideString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticWindowTitleFinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bSkipLaunchingGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameLauncherExe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_bOverrideAutomaticLauncherExeFinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_LaunchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_LaunchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameInfo_Statics::NewProp_GameExePath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"GameInfo",
		sizeof(FGameInfo),
		alignof(FGameInfo),
		Z_Construct_UScriptStruct_FGameInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameInfo"), sizeof(FGameInfo), Get_Z_Construct_UScriptStruct_FGameInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameInfo_Hash() { return 2377241031U; }
class UScriptStruct* FAltUprojectNameInGameDirectory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("AltUprojectNameInGameDirectory"), sizeof(FAltUprojectNameInGameDirectory), Get_Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FAltUprojectNameInGameDirectory>()
{
	return FAltUprojectNameInGameDirectory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAltUprojectNameInGameDirectory(FAltUprojectNameInGameDirectory::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("AltUprojectNameInGameDirectory"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFAltUprojectNameInGameDirectory
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFAltUprojectNameInGameDirectory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AltUprojectNameInGameDirectory")),new UScriptStruct::TCppStructOps<FAltUprojectNameInGameDirectory>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFAltUprojectNameInGameDirectory;
	struct Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAltMethod_MetaData[];
#endif
		static void NewProp_bUseAltMethod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAltMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAltUprojectNameInGameDirectory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAltUprojectNameInGameDirectory, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_bUseAltMethod_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_bUseAltMethod_SetBit(void* Obj)
	{
		((FAltUprojectNameInGameDirectory*)Obj)->bUseAltMethod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_bUseAltMethod = { "bUseAltMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAltUprojectNameInGameDirectory), &Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_bUseAltMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_bUseAltMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_bUseAltMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::NewProp_bUseAltMethod,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AltUprojectNameInGameDirectory",
		sizeof(FAltUprojectNameInGameDirectory),
		alignof(FAltUprojectNameInGameDirectory),
		Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AltUprojectNameInGameDirectory"), sizeof(FAltUprojectNameInGameDirectory), Get_Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAltUprojectNameInGameDirectory_Hash() { return 430684985U; }
class UScriptStruct* FProcessManagementList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FProcessManagementList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcessManagementList, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("ProcessManagementList"), sizeof(FProcessManagementList), Get_Z_Construct_UScriptStruct_FProcessManagementList_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FProcessManagementList>()
{
	return FProcessManagementList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProcessManagementList(FProcessManagementList::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("ProcessManagementList"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFProcessManagementList
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFProcessManagementList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProcessManagementList")),new UScriptStruct::TCppStructOps<FProcessManagementList>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFProcessManagementList;
	struct Z_Construct_UScriptStruct_FProcessManagementList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessManagementEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProcessManagementEntries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessManagementEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCloseGame_MetaData[];
#endif
		static void NewProp_bAutoCloseGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCloseGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessManagementList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcessManagementList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_ProcessManagementEntries_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_ProcessManagementEntries = { "ProcessManagementEntries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessManagementList, ProcessManagementEntries), METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_ProcessManagementEntries_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_ProcessManagementEntries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_ProcessManagementEntries_Inner = { "ProcessManagementEntries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProcessManagementEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_bAutoCloseGame_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_bAutoCloseGame_SetBit(void* Obj)
	{
		((FProcessManagementList*)Obj)->bAutoCloseGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_bAutoCloseGame = { "bAutoCloseGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcessManagementList), &Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_bAutoCloseGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_bAutoCloseGame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_bAutoCloseGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcessManagementList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_ProcessManagementEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_ProcessManagementEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessManagementList_Statics::NewProp_bAutoCloseGame,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcessManagementList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ProcessManagementList",
		sizeof(FProcessManagementList),
		alignof(FProcessManagementList),
		Z_Construct_UScriptStruct_FProcessManagementList_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessManagementList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessManagementList_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessManagementList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProcessManagementList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProcessManagementList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProcessManagementList"), sizeof(FProcessManagementList), Get_Z_Construct_UScriptStruct_FProcessManagementList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProcessManagementList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProcessManagementList_Hash() { return 2611098131U; }
class UScriptStruct* FProcessManagementEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FProcessManagementEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcessManagementEntry, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("ProcessManagementEntry"), sizeof(FProcessManagementEntry), Get_Z_Construct_UScriptStruct_FProcessManagementEntry_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FProcessManagementEntry>()
{
	return FProcessManagementEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProcessManagementEntry(FProcessManagementEntry::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("ProcessManagementEntry"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFProcessManagementEntry
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFProcessManagementEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProcessManagementEntry")),new UScriptStruct::TCppStructOps<FProcessManagementEntry>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFProcessManagementEntry;
	struct Z_Construct_UScriptStruct_FProcessManagementEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScriptState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScriptState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSubstringCheck_MetaData[];
#endif
		static void NewProp_bUseSubstringCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSubstringCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProcessName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcessManagementEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ScriptState_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ScriptState = { "ScriptState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessManagementEntry, ScriptState), Z_Construct_UEnum_UnrealAutoMod_EScriptStateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ScriptState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ScriptState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ScriptState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_bUseSubstringCheck_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_bUseSubstringCheck_SetBit(void* Obj)
	{
		((FProcessManagementEntry*)Obj)->bUseSubstringCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_bUseSubstringCheck = { "bUseSubstringCheck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProcessManagementEntry), &Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_bUseSubstringCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_bUseSubstringCheck_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_bUseSubstringCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ProcessName_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ProcessName = { "ProcessName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProcessManagementEntry, ProcessName), METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ProcessName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ProcessName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ScriptState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ScriptState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_bUseSubstringCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::NewProp_ProcessName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ProcessManagementEntry",
		sizeof(FProcessManagementEntry),
		alignof(FProcessManagementEntry),
		Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProcessManagementEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProcessManagementEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProcessManagementEntry"), sizeof(FProcessManagementEntry), Get_Z_Construct_UScriptStruct_FProcessManagementEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProcessManagementEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProcessManagementEntry_Hash() { return 726345155U; }
class UScriptStruct* FWindowManagementEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FWindowManagementEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWindowManagementEntry, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("WindowManagementEntry"), sizeof(FWindowManagementEntry), Get_Z_Construct_UScriptStruct_FWindowManagementEntry_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FWindowManagementEntry>()
{
	return FWindowManagementEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWindowManagementEntry(FWindowManagementEntry::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("WindowManagementEntry"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFWindowManagementEntry
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFWindowManagementEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WindowManagementEntry")),new UScriptStruct::TCppStructOps<FWindowManagementEntry>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFWindowManagementEntry;
	struct Z_Construct_UScriptStruct_FWindowManagementEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ResolutionY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ResolutionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonitorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MonitorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScriptState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScriptState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WindowState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WindowState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSubstringCheck_MetaData[];
#endif
		static void NewProp_bUseSubstringCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSubstringCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WindowName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWindowManagementEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ResolutionY_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindowManagementEntry, ResolutionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ResolutionY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ResolutionY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ResolutionX_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindowManagementEntry, ResolutionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ResolutionX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ResolutionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_MonitorIndex_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_MonitorIndex = { "MonitorIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindowManagementEntry, MonitorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_MonitorIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_MonitorIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ScriptState_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ScriptState = { "ScriptState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindowManagementEntry, ScriptState), Z_Construct_UEnum_UnrealAutoMod_EScriptStateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ScriptState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ScriptState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ScriptState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowState_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowState = { "WindowState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindowManagementEntry, WindowState), Z_Construct_UEnum_UnrealAutoMod_EWindowManagementAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_bUseSubstringCheck_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_bUseSubstringCheck_SetBit(void* Obj)
	{
		((FWindowManagementEntry*)Obj)->bUseSubstringCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_bUseSubstringCheck = { "bUseSubstringCheck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWindowManagementEntry), &Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_bUseSubstringCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_bUseSubstringCheck_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_bUseSubstringCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowName_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowName = { "WindowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWindowManagementEntry, WindowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ResolutionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ResolutionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_MonitorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ScriptState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_ScriptState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_bUseSubstringCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::NewProp_WindowName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WindowManagementEntry",
		sizeof(FWindowManagementEntry),
		alignof(FWindowManagementEntry),
		Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWindowManagementEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWindowManagementEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WindowManagementEntry"), sizeof(FWindowManagementEntry), Get_Z_Construct_UScriptStruct_FWindowManagementEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWindowManagementEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWindowManagementEntry_Hash() { return 3274377288U; }
class UScriptStruct* FProgramRunnerEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALAUTOMOD_API uint32 Get_Z_Construct_UScriptStruct_FProgramRunnerEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgramRunnerEntry, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("ProgramRunnerEntry"), sizeof(FProgramRunnerEntry), Get_Z_Construct_UScriptStruct_FProgramRunnerEntry_Hash());
	}
	return Singleton;
}
template<> UNREALAUTOMOD_API UScriptStruct* StaticStruct<FProgramRunnerEntry>()
{
	return FProgramRunnerEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProgramRunnerEntry(FProgramRunnerEntry::StaticStruct, TEXT("/Script/UnrealAutoMod"), TEXT("ProgramRunnerEntry"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealAutoMod_StaticRegisterNativesFProgramRunnerEntry
{
	FScriptStruct_UnrealAutoMod_StaticRegisterNativesFProgramRunnerEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProgramRunnerEntry")),new UScriptStruct::TCppStructOps<FProgramRunnerEntry>);
	}
} ScriptStruct_UnrealAutoMod_StaticRegisterNativesFProgramRunnerEntry;
	struct Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaunchArgs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LaunchArgs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExecutionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExecutionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScriptState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScriptState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScriptState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgramPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProgramPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgramRunnerEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_LaunchArgs_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_LaunchArgs = { "LaunchArgs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProgramRunnerEntry, LaunchArgs), METADATA_PARAMS(Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_LaunchArgs_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_LaunchArgs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_LaunchArgs_Inner = { "LaunchArgs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ExecutionMode_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProgramRunnerEntry, ExecutionMode), Z_Construct_UEnum_UnrealAutoMod_EExecutionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ExecutionMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ExecutionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ScriptState_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ScriptState = { "ScriptState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProgramRunnerEntry, ScriptState), Z_Construct_UEnum_UnrealAutoMod_EScriptStateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ScriptState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ScriptState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ScriptState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ProgramPath_MetaData[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ProgramPath = { "ProgramPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProgramRunnerEntry, ProgramPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ProgramPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ProgramPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_LaunchArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_LaunchArgs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ExecutionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ExecutionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ScriptState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ScriptState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::NewProp_ProgramPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ProgramRunnerEntry",
		sizeof(FProgramRunnerEntry),
		alignof(FProgramRunnerEntry),
		Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProgramRunnerEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProgramRunnerEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProgramRunnerEntry"), sizeof(FProgramRunnerEntry), Get_Z_Construct_UScriptStruct_FProgramRunnerEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProgramRunnerEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProgramRunnerEntry_Hash() { return 2066683940U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
