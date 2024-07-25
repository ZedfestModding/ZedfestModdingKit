// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALAUTOMOD_UnrealAutoModEnums_generated_h
#error "UnrealAutoModEnums.generated.h already included, missing '#pragma once' in UnrealAutoModEnums.h"
#endif
#define UNREALAUTOMOD_UnrealAutoModEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModEnums_h


#define FOREACH_ENUM_EUTILITYTYPE(op) \
	op(EUtilityType::RUN_EXE) \
	op(EUtilityType::OPEN_WEBSITE) \
	op(EUtilityType::OPEN_DIRECTORY) 

enum class EUtilityType : uint8;
template<> UNREALAUTOMOD_API UEnum* StaticEnum<EUtilityType>();

#define FOREACH_ENUM_EUNREALMODTREETYPE(op) \
	op(EUnrealModTreeType::CUSTOM_CONTENT) \
	op(EUnrealModTreeType::MODS) 

enum class EUnrealModTreeType : uint8;
template<> UNREALAUTOMOD_API UEnum* StaticEnum<EUnrealModTreeType>();

#define FOREACH_ENUM_ECOMPRESSIONTYPE(op) \
	op(ECompressionType::NONE) \
	op(ECompressionType::ZLIB) \
	op(ECompressionType::GZIP) \
	op(ECompressionType::OODLE) \
	op(ECompressionType::ZSTD) \
	op(ECompressionType::LZ4) \
	op(ECompressionType::LZMA) 

enum class ECompressionType : uint8;
template<> UNREALAUTOMOD_API UEnum* StaticEnum<ECompressionType>();

#define FOREACH_ENUM_EEXECUTIONMODE(op) \
	op(EExecutionMode::SYNC) \
	op(EExecutionMode::ASYNC) 

enum class EExecutionMode : uint8;
template<> UNREALAUTOMOD_API UEnum* StaticEnum<EExecutionMode>();

#define FOREACH_ENUM_ESCRIPTSTATETYPE(op) \
	op(EScriptStateType::NONE) \
	op(EScriptStateType::PRE_ALL) \
	op(EScriptStateType::POST_ALL) \
	op(EScriptStateType::CONSTANT) \
	op(EScriptStateType::PRE_INIT) \
	op(EScriptStateType::INIT) \
	op(EScriptStateType::POST_INIT) \
	op(EScriptStateType::PRE_COOKING) \
	op(EScriptStateType::POST_COOKING) \
	op(EScriptStateType::PRE_MODS_UNINSTALL) \
	op(EScriptStateType::POST_MODS_UNINSTALL) \
	op(EScriptStateType::PRE_PAK_DIR_SETUP) \
	op(EScriptStateType::POST_PAK_DIR_SETUP) \
	op(EScriptStateType::PRE_MODS_INSTALL) \
	op(EScriptStateType::POST_MODS_INSTALL) \
	op(EScriptStateType::PRE_GAME_LAUNCH) \
	op(EScriptStateType::POST_GAME_LAUNCH) \
	op(EScriptStateType::PRE_GAME_CLOSE) \
	op(EScriptStateType::POST_GAME_CLOSE) \
	op(EScriptStateType::PRE_ENGINE_OPEN) \
	op(EScriptStateType::POST_ENGINE_OPEN) \
	op(EScriptStateType::PRE_ENGINE_CLOSE) \
	op(EScriptStateType::POST_ENGINE_CLOSE) 

enum class EScriptStateType : uint8;
template<> UNREALAUTOMOD_API UEnum* StaticEnum<EScriptStateType>();

#define FOREACH_ENUM_EGAMELAUNCHTYPE(op) \
	op(EGameLaunchType::EXE) \
	op(EGameLaunchType::STEAM) \
	op(EGameLaunchType::EPIC) \
	op(EGameLaunchType::ITCH_IO) \
	op(EGameLaunchType::BATTLE_NET) \
	op(EGameLaunchType::ORIGIN) \
	op(EGameLaunchType::UBISOFT) \
	op(EGameLaunchType::OTHER) 

enum class EGameLaunchType : uint8;
template<> UNREALAUTOMOD_API UEnum* StaticEnum<EGameLaunchType>();

#define FOREACH_ENUM_EPACKINGTYPE(op) \
	op(EPackingType::ENGINE) \
	op(EPackingType::UNREAL_PAK) \
	op(EPackingType::REPAK) \
	op(EPackingType::LOOSE) 

enum class EPackingType : uint8;
template<> UNREALAUTOMOD_API UEnum* StaticEnum<EPackingType>();

#define FOREACH_ENUM_EWINDOWMANAGEMENTACTION(op) \
	op(EWindowManagementAction::NONE) \
	op(EWindowManagementAction::MIN) \
	op(EWindowManagementAction::MAX) \
	op(EWindowManagementAction::MOVE) 

enum class EWindowManagementAction : uint8;
template<> UNREALAUTOMOD_API UEnum* StaticEnum<EWindowManagementAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
