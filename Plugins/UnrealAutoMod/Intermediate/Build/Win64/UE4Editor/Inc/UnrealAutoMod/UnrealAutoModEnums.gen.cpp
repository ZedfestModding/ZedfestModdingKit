// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAutoMod/Public/UnrealAutoModEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealAutoModEnums() {}
// Cross Module References
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EUtilityType();
	UPackage* Z_Construct_UPackage__Script_UnrealAutoMod();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EUnrealModTreeType();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_ECompressionType();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EExecutionMode();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EScriptStateType();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EGameLaunchType();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EPackingType();
	UNREALAUTOMOD_API UEnum* Z_Construct_UEnum_UnrealAutoMod_EWindowManagementAction();
// End Cross Module References
	static UEnum* EUtilityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealAutoMod_EUtilityType, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("EUtilityType"));
		}
		return Singleton;
	}
	template<> UNREALAUTOMOD_API UEnum* StaticEnum<EUtilityType>()
	{
		return EUtilityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUtilityType(EUtilityType_StaticEnum, TEXT("/Script/UnrealAutoMod"), TEXT("EUtilityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealAutoMod_EUtilityType_Hash() { return 3316364813U; }
	UEnum* Z_Construct_UEnum_UnrealAutoMod_EUtilityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUtilityType"), 0, Get_Z_Construct_UEnum_UnrealAutoMod_EUtilityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUtilityType::RUN_EXE", (int64)EUtilityType::RUN_EXE },
				{ "EUtilityType::OPEN_WEBSITE", (int64)EUtilityType::OPEN_WEBSITE },
				{ "EUtilityType::OPEN_DIRECTORY", (int64)EUtilityType::OPEN_DIRECTORY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UnrealAutoModEnums.h" },
				{ "OPEN_DIRECTORY.DisplayName", "Open Directory" },
				{ "OPEN_WEBSITE.DisplayName", "Open Website" },
				{ "RUN_EXE.DisplayName", "Run Exe" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealAutoMod,
				nullptr,
				"EUtilityType",
				"EUtilityType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUnrealModTreeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealAutoMod_EUnrealModTreeType, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("EUnrealModTreeType"));
		}
		return Singleton;
	}
	template<> UNREALAUTOMOD_API UEnum* StaticEnum<EUnrealModTreeType>()
	{
		return EUnrealModTreeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUnrealModTreeType(EUnrealModTreeType_StaticEnum, TEXT("/Script/UnrealAutoMod"), TEXT("EUnrealModTreeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealAutoMod_EUnrealModTreeType_Hash() { return 3905893586U; }
	UEnum* Z_Construct_UEnum_UnrealAutoMod_EUnrealModTreeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUnrealModTreeType"), 0, Get_Z_Construct_UEnum_UnrealAutoMod_EUnrealModTreeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUnrealModTreeType::CUSTOM_CONTENT", (int64)EUnrealModTreeType::CUSTOM_CONTENT },
				{ "EUnrealModTreeType::MODS", (int64)EUnrealModTreeType::MODS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CUSTOM_CONTENT.DisplayName", "Custom Content" },
				{ "MODS.DisplayName", "Mods" },
				{ "MODS.ToolTip", "\"Content/CustomContent/ModName\"" },
				{ "ModuleRelativePath", "Public/UnrealAutoModEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealAutoMod,
				nullptr,
				"EUnrealModTreeType",
				"EUnrealModTreeType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECompressionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealAutoMod_ECompressionType, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("ECompressionType"));
		}
		return Singleton;
	}
	template<> UNREALAUTOMOD_API UEnum* StaticEnum<ECompressionType>()
	{
		return ECompressionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECompressionType(ECompressionType_StaticEnum, TEXT("/Script/UnrealAutoMod"), TEXT("ECompressionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealAutoMod_ECompressionType_Hash() { return 1297624282U; }
	UEnum* Z_Construct_UEnum_UnrealAutoMod_ECompressionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECompressionType"), 0, Get_Z_Construct_UEnum_UnrealAutoMod_ECompressionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECompressionType::NONE", (int64)ECompressionType::NONE },
				{ "ECompressionType::ZLIB", (int64)ECompressionType::ZLIB },
				{ "ECompressionType::GZIP", (int64)ECompressionType::GZIP },
				{ "ECompressionType::OODLE", (int64)ECompressionType::OODLE },
				{ "ECompressionType::ZSTD", (int64)ECompressionType::ZSTD },
				{ "ECompressionType::LZ4", (int64)ECompressionType::LZ4 },
				{ "ECompressionType::LZMA", (int64)ECompressionType::LZMA },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GZIP.DisplayName", "Gzip" },
				{ "LZ4.DisplayName", "Lz4" },
				{ "LZMA.DisplayName", "Lzma" },
				{ "ModuleRelativePath", "Public/UnrealAutoModEnums.h" },
				{ "NONE.DisplayName", "None" },
				{ "OODLE.DisplayName", "Oodle" },
				{ "ZLIB.DisplayName", "Zlib" },
				{ "ZSTD.DisplayName", "Zstd" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealAutoMod,
				nullptr,
				"ECompressionType",
				"ECompressionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EExecutionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealAutoMod_EExecutionMode, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("EExecutionMode"));
		}
		return Singleton;
	}
	template<> UNREALAUTOMOD_API UEnum* StaticEnum<EExecutionMode>()
	{
		return EExecutionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EExecutionMode(EExecutionMode_StaticEnum, TEXT("/Script/UnrealAutoMod"), TEXT("EExecutionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealAutoMod_EExecutionMode_Hash() { return 2843991459U; }
	UEnum* Z_Construct_UEnum_UnrealAutoMod_EExecutionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EExecutionMode"), 0, Get_Z_Construct_UEnum_UnrealAutoMod_EExecutionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EExecutionMode::SYNC", (int64)EExecutionMode::SYNC },
				{ "EExecutionMode::ASYNC", (int64)EExecutionMode::ASYNC },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ASYNC.DisplayName", "Async" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/UnrealAutoModEnums.h" },
				{ "SYNC.DisplayName", "Sync" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealAutoMod,
				nullptr,
				"EExecutionMode",
				"EExecutionMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EScriptStateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealAutoMod_EScriptStateType, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("EScriptStateType"));
		}
		return Singleton;
	}
	template<> UNREALAUTOMOD_API UEnum* StaticEnum<EScriptStateType>()
	{
		return EScriptStateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScriptStateType(EScriptStateType_StaticEnum, TEXT("/Script/UnrealAutoMod"), TEXT("EScriptStateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealAutoMod_EScriptStateType_Hash() { return 3654233616U; }
	UEnum* Z_Construct_UEnum_UnrealAutoMod_EScriptStateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScriptStateType"), 0, Get_Z_Construct_UEnum_UnrealAutoMod_EScriptStateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScriptStateType::NONE", (int64)EScriptStateType::NONE },
				{ "EScriptStateType::PRE_ALL", (int64)EScriptStateType::PRE_ALL },
				{ "EScriptStateType::POST_ALL", (int64)EScriptStateType::POST_ALL },
				{ "EScriptStateType::CONSTANT", (int64)EScriptStateType::CONSTANT },
				{ "EScriptStateType::PRE_INIT", (int64)EScriptStateType::PRE_INIT },
				{ "EScriptStateType::INIT", (int64)EScriptStateType::INIT },
				{ "EScriptStateType::POST_INIT", (int64)EScriptStateType::POST_INIT },
				{ "EScriptStateType::PRE_COOKING", (int64)EScriptStateType::PRE_COOKING },
				{ "EScriptStateType::POST_COOKING", (int64)EScriptStateType::POST_COOKING },
				{ "EScriptStateType::PRE_MODS_UNINSTALL", (int64)EScriptStateType::PRE_MODS_UNINSTALL },
				{ "EScriptStateType::POST_MODS_UNINSTALL", (int64)EScriptStateType::POST_MODS_UNINSTALL },
				{ "EScriptStateType::PRE_PAK_DIR_SETUP", (int64)EScriptStateType::PRE_PAK_DIR_SETUP },
				{ "EScriptStateType::POST_PAK_DIR_SETUP", (int64)EScriptStateType::POST_PAK_DIR_SETUP },
				{ "EScriptStateType::PRE_MODS_INSTALL", (int64)EScriptStateType::PRE_MODS_INSTALL },
				{ "EScriptStateType::POST_MODS_INSTALL", (int64)EScriptStateType::POST_MODS_INSTALL },
				{ "EScriptStateType::PRE_GAME_LAUNCH", (int64)EScriptStateType::PRE_GAME_LAUNCH },
				{ "EScriptStateType::POST_GAME_LAUNCH", (int64)EScriptStateType::POST_GAME_LAUNCH },
				{ "EScriptStateType::PRE_GAME_CLOSE", (int64)EScriptStateType::PRE_GAME_CLOSE },
				{ "EScriptStateType::POST_GAME_CLOSE", (int64)EScriptStateType::POST_GAME_CLOSE },
				{ "EScriptStateType::PRE_ENGINE_OPEN", (int64)EScriptStateType::PRE_ENGINE_OPEN },
				{ "EScriptStateType::POST_ENGINE_OPEN", (int64)EScriptStateType::POST_ENGINE_OPEN },
				{ "EScriptStateType::PRE_ENGINE_CLOSE", (int64)EScriptStateType::PRE_ENGINE_CLOSE },
				{ "EScriptStateType::POST_ENGINE_CLOSE", (int64)EScriptStateType::POST_ENGINE_CLOSE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CONSTANT.DisplayName", "Constant" },
				{ "INIT.DisplayName", "Init" },
				{ "ModuleRelativePath", "Public/UnrealAutoModEnums.h" },
				{ "NONE.DisplayName", "None" },
				{ "POST_ALL.DisplayName", "Post All" },
				{ "POST_COOKING.DisplayName", "Post Cooking" },
				{ "POST_ENGINE_CLOSE.DisplayName", "Post Engine Close" },
				{ "POST_ENGINE_OPEN.DisplayName", "Post Engine Open" },
				{ "POST_GAME_CLOSE.DisplayName", "Post Game Close" },
				{ "POST_GAME_LAUNCH.DisplayName", "Post Game Launch" },
				{ "POST_INIT.DisplayName", "Post Init" },
				{ "POST_MODS_INSTALL.DisplayName", "Post Mods Install" },
				{ "POST_MODS_UNINSTALL.DisplayName", "Post Mods Uninstall" },
				{ "POST_PAK_DIR_SETUP.DisplayName", "Post Pak Dir Setup" },
				{ "PRE_ALL.DisplayName", "Pre All" },
				{ "PRE_COOKING.DisplayName", "Pre Cooking" },
				{ "PRE_ENGINE_CLOSE.DisplayName", "Pre Engine Close" },
				{ "PRE_ENGINE_OPEN.DisplayName", "Pre Engine Open" },
				{ "PRE_GAME_CLOSE.DisplayName", "Pre Game Close" },
				{ "PRE_GAME_LAUNCH.DisplayName", "Pre Game Launch" },
				{ "PRE_INIT.DisplayName", "Pre Init" },
				{ "PRE_MODS_INSTALL.DisplayName", "Pre Mods Install" },
				{ "PRE_MODS_UNINSTALL.DisplayName", "Pre Mods Uninstall" },
				{ "PRE_PAK_DIR_SETUP.DisplayName", "Pre Pak Dir Setup" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealAutoMod,
				nullptr,
				"EScriptStateType",
				"EScriptStateType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameLaunchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealAutoMod_EGameLaunchType, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("EGameLaunchType"));
		}
		return Singleton;
	}
	template<> UNREALAUTOMOD_API UEnum* StaticEnum<EGameLaunchType>()
	{
		return EGameLaunchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameLaunchType(EGameLaunchType_StaticEnum, TEXT("/Script/UnrealAutoMod"), TEXT("EGameLaunchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealAutoMod_EGameLaunchType_Hash() { return 1643371087U; }
	UEnum* Z_Construct_UEnum_UnrealAutoMod_EGameLaunchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameLaunchType"), 0, Get_Z_Construct_UEnum_UnrealAutoMod_EGameLaunchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameLaunchType::EXE", (int64)EGameLaunchType::EXE },
				{ "EGameLaunchType::STEAM", (int64)EGameLaunchType::STEAM },
				{ "EGameLaunchType::EPIC", (int64)EGameLaunchType::EPIC },
				{ "EGameLaunchType::ITCH_IO", (int64)EGameLaunchType::ITCH_IO },
				{ "EGameLaunchType::BATTLE_NET", (int64)EGameLaunchType::BATTLE_NET },
				{ "EGameLaunchType::ORIGIN", (int64)EGameLaunchType::ORIGIN },
				{ "EGameLaunchType::UBISOFT", (int64)EGameLaunchType::UBISOFT },
				{ "EGameLaunchType::OTHER", (int64)EGameLaunchType::OTHER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BATTLE_NET.DisplayName", "Battle.net" },
				{ "BlueprintType", "true" },
				{ "EPIC.DisplayName", "Epic" },
				{ "EXE.DisplayName", "Exe" },
				{ "ITCH_IO.DisplayName", "Itch.io" },
				{ "ModuleRelativePath", "Public/UnrealAutoModEnums.h" },
				{ "ORIGIN.DisplayName", "Origin" },
				{ "OTHER.DisplayName", "Other" },
				{ "STEAM.DisplayName", "Steam" },
				{ "UBISOFT.DisplayName", "Ubisoft" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealAutoMod,
				nullptr,
				"EGameLaunchType",
				"EGameLaunchType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPackingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealAutoMod_EPackingType, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("EPackingType"));
		}
		return Singleton;
	}
	template<> UNREALAUTOMOD_API UEnum* StaticEnum<EPackingType>()
	{
		return EPackingType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPackingType(EPackingType_StaticEnum, TEXT("/Script/UnrealAutoMod"), TEXT("EPackingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealAutoMod_EPackingType_Hash() { return 2292966637U; }
	UEnum* Z_Construct_UEnum_UnrealAutoMod_EPackingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPackingType"), 0, Get_Z_Construct_UEnum_UnrealAutoMod_EPackingType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPackingType::ENGINE", (int64)EPackingType::ENGINE },
				{ "EPackingType::UNREAL_PAK", (int64)EPackingType::UNREAL_PAK },
				{ "EPackingType::REPAK", (int64)EPackingType::REPAK },
				{ "EPackingType::LOOSE", (int64)EPackingType::LOOSE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ENGINE.DisplayName", "Engine" },
				{ "LOOSE.DisplayName", "Loose" },
				{ "ModuleRelativePath", "Public/UnrealAutoModEnums.h" },
				{ "REPAK.DisplayName", "Repak" },
				{ "UNREAL_PAK.DisplayName", "Unreal Pak" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealAutoMod,
				nullptr,
				"EPackingType",
				"EPackingType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWindowManagementAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealAutoMod_EWindowManagementAction, Z_Construct_UPackage__Script_UnrealAutoMod(), TEXT("EWindowManagementAction"));
		}
		return Singleton;
	}
	template<> UNREALAUTOMOD_API UEnum* StaticEnum<EWindowManagementAction>()
	{
		return EWindowManagementAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWindowManagementAction(EWindowManagementAction_StaticEnum, TEXT("/Script/UnrealAutoMod"), TEXT("EWindowManagementAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealAutoMod_EWindowManagementAction_Hash() { return 1699355997U; }
	UEnum* Z_Construct_UEnum_UnrealAutoMod_EWindowManagementAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealAutoMod();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWindowManagementAction"), 0, Get_Z_Construct_UEnum_UnrealAutoMod_EWindowManagementAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWindowManagementAction::NONE", (int64)EWindowManagementAction::NONE },
				{ "EWindowManagementAction::MIN", (int64)EWindowManagementAction::MIN },
				{ "EWindowManagementAction::MAX", (int64)EWindowManagementAction::MAX },
				{ "EWindowManagementAction::MOVE", (int64)EWindowManagementAction::MOVE },
				{ "EWindowManagementAction::CLOSE", (int64)EWindowManagementAction::CLOSE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CLOSE.DisplayName", "Close" },
				{ "MAX.DisplayName", "Max" },
				{ "MIN.DisplayName", "Min" },
				{ "ModuleRelativePath", "Public/UnrealAutoModEnums.h" },
				{ "MOVE.DisplayName", "Move" },
				{ "NONE.DisplayName", "None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealAutoMod,
				nullptr,
				"EWindowManagementAction",
				"EWindowManagementAction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
