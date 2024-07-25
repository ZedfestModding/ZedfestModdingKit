// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UEnum;
class UDataTable;
#ifdef UNREALAUTOMOD_UnrealAutoModUtilities_generated_h
#error "UnrealAutoModUtilities.generated.h already included, missing '#pragma once' in UnrealAutoModUtilities.h"
#endif
#define UNREALAUTOMOD_UnrealAutoModUtilities_generated_h

#define ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadSoftObject) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_SoftObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->LoadSoftObject(Z_Param_SoftObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenWebsite) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UUnrealAutoModUtilities::OpenWebsite(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UUnrealAutoModUtilities::OpenDirectory(Z_Param_DirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnumValuesAsString) \
	{ \
		P_GET_OBJECT(UEnum,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UUnrealAutoModUtilities::GetEnumValuesAsString(Z_Param_Enum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllInstancedObjectsOfClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=UUnrealAutoModUtilities::GetAllInstancedObjectsOfClass(Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallFunctionByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallFunctionByName(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFunctionNames) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFunctionNames(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ReadFile(Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTextFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileContents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateTextFile(Z_Param_FileName,Z_Param_FileContents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJsonToDataTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_JsonString); \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->JsonToDataTable(Z_Param_JsonString,Z_Param_DataTable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDataTableToJson) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->DataTableToJson(Z_Param_DataTable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteFile(Z_Param_File); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BeforeFile); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AfterFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CopyFile(Z_Param_BeforeFile,Z_Param_AfterFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesFileExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DoesFileExist(Z_Param_File); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesDirectoryExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DoesDirectoryExist(Z_Param_Directory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteDirectoryAndContents) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteDirectoryAndContents(Z_Param_Directory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateDirectory(Z_Param_Directory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFileExtensionsFromPaths) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FilePaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFileExtensionsFromPaths(Z_Param_Out_FilePaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilesInDirectoryTree) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFilesInDirectoryTree(Z_Param_Directory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetProjectDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchExternalExecutable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Parameters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchExternalExecutable(Z_Param_FilePath,Z_Param_Out_Parameters); \
		P_NATIVE_END; \
	}


#define ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadSoftObject) \
	{ \
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_SoftObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=P_THIS->LoadSoftObject(Z_Param_SoftObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenWebsite) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UUnrealAutoModUtilities::OpenWebsite(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DirectoryPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UUnrealAutoModUtilities::OpenDirectory(Z_Param_DirectoryPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnumValuesAsString) \
	{ \
		P_GET_OBJECT(UEnum,Z_Param_Enum); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UUnrealAutoModUtilities::GetEnumValuesAsString(Z_Param_Enum); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllInstancedObjectsOfClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=UUnrealAutoModUtilities::GetAllInstancedObjectsOfClass(Z_Param_Class); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCallFunctionByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CallFunctionByName(Z_Param_Object,Z_Param_FunctionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFunctionNames) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFunctionNames(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->ReadFile(Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateTextFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileContents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateTextFile(Z_Param_FileName,Z_Param_FileContents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJsonToDataTable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_JsonString); \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->JsonToDataTable(Z_Param_JsonString,Z_Param_DataTable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDataTableToJson) \
	{ \
		P_GET_OBJECT(UDataTable,Z_Param_DataTable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->DataTableToJson(Z_Param_DataTable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteFile(Z_Param_File); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_BeforeFile); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AfterFile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CopyFile(Z_Param_BeforeFile,Z_Param_AfterFile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesFileExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DoesFileExist(Z_Param_File); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesDirectoryExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DoesDirectoryExist(Z_Param_Directory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteDirectoryAndContents) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteDirectoryAndContents(Z_Param_Directory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateDirectory) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateDirectory(Z_Param_Directory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFileExtensionsFromPaths) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_FilePaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFileExtensionsFromPaths(Z_Param_Out_FilePaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilesInDirectoryTree) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Directory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFilesInDirectoryTree(Z_Param_Directory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectDirectory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetProjectDirectory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLaunchExternalExecutable) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FilePath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Parameters); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchExternalExecutable(Z_Param_FilePath,Z_Param_Out_Parameters); \
		P_NATIVE_END; \
	}


#define ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealAutoModUtilities(); \
	friend struct Z_Construct_UClass_UUnrealAutoModUtilities_Statics; \
public: \
	DECLARE_CLASS(UUnrealAutoModUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAutoMod"), NO_API) \
	DECLARE_SERIALIZER(UUnrealAutoModUtilities)


#define ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealAutoModUtilities(); \
	friend struct Z_Construct_UClass_UUnrealAutoModUtilities_Statics; \
public: \
	DECLARE_CLASS(UUnrealAutoModUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealAutoMod"), NO_API) \
	DECLARE_SERIALIZER(UUnrealAutoModUtilities)


#define ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealAutoModUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealAutoModUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealAutoModUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealAutoModUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealAutoModUtilities(UUnrealAutoModUtilities&&); \
	NO_API UUnrealAutoModUtilities(const UUnrealAutoModUtilities&); \
public:


#define ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealAutoModUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealAutoModUtilities(UUnrealAutoModUtilities&&); \
	NO_API UUnrealAutoModUtilities(const UUnrealAutoModUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealAutoModUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealAutoModUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealAutoModUtilities)


#define ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_PRIVATE_PROPERTY_OFFSET
#define ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_9_PROLOG
#define ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_PRIVATE_PROPERTY_OFFSET \
	ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_RPC_WRAPPERS \
	ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_INCLASS \
	ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_PRIVATE_PROPERTY_OFFSET \
	ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_INCLASS_NO_PURE_DECLS \
	ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALAUTOMOD_API UClass* StaticClass<class UUnrealAutoModUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZedfestModdingKit_Plugins_UnrealAutoMod_Source_UnrealAutoMod_Public_UnrealAutoModUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
