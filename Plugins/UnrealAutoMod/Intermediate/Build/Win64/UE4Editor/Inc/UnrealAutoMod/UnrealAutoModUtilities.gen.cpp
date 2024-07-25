// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealAutoMod/Public/UnrealAutoModUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealAutoModUtilities() {}
// Cross Module References
	UNREALAUTOMOD_API UClass* Z_Construct_UClass_UUnrealAutoModUtilities_NoRegister();
	UNREALAUTOMOD_API UClass* Z_Construct_UClass_UUnrealAutoModUtilities();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealAutoMod();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite();
	UNREALAUTOMOD_API UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile();
// End Cross Module References
	void UUnrealAutoModUtilities::StaticRegisterNativesUUnrealAutoModUtilities()
	{
		UClass* Class = UUnrealAutoModUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallFunctionByName", &UUnrealAutoModUtilities::execCallFunctionByName },
			{ "CopyFile", &UUnrealAutoModUtilities::execCopyFile },
			{ "CreateDirectory", &UUnrealAutoModUtilities::execCreateDirectory },
			{ "CreateTextFile", &UUnrealAutoModUtilities::execCreateTextFile },
			{ "DataTableToJson", &UUnrealAutoModUtilities::execDataTableToJson },
			{ "DeleteDirectoryAndContents", &UUnrealAutoModUtilities::execDeleteDirectoryAndContents },
			{ "DeleteFile", &UUnrealAutoModUtilities::execDeleteFile },
			{ "DoesDirectoryExist", &UUnrealAutoModUtilities::execDoesDirectoryExist },
			{ "DoesFileExist", &UUnrealAutoModUtilities::execDoesFileExist },
			{ "GetAllInstancedObjectsOfClass", &UUnrealAutoModUtilities::execGetAllInstancedObjectsOfClass },
			{ "GetEnumValuesAsString", &UUnrealAutoModUtilities::execGetEnumValuesAsString },
			{ "GetFileExtensionsFromPaths", &UUnrealAutoModUtilities::execGetFileExtensionsFromPaths },
			{ "GetFilesInDirectoryTree", &UUnrealAutoModUtilities::execGetFilesInDirectoryTree },
			{ "GetFunctionNames", &UUnrealAutoModUtilities::execGetFunctionNames },
			{ "GetProjectDirectory", &UUnrealAutoModUtilities::execGetProjectDirectory },
			{ "JsonToDataTable", &UUnrealAutoModUtilities::execJsonToDataTable },
			{ "LaunchExternalExecutable", &UUnrealAutoModUtilities::execLaunchExternalExecutable },
			{ "LoadSoftObject", &UUnrealAutoModUtilities::execLoadSoftObject },
			{ "OpenDirectory", &UUnrealAutoModUtilities::execOpenDirectory },
			{ "OpenWebsite", &UUnrealAutoModUtilities::execOpenWebsite },
			{ "ReadFile", &UUnrealAutoModUtilities::execReadFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics
	{
		struct UnrealAutoModUtilities_eventCallFunctionByName_Parms
		{
			UObject* Object;
			FString FunctionName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::NewProp_FunctionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventCallFunctionByName_Parms, FunctionName), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::NewProp_FunctionName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::NewProp_FunctionName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventCallFunctionByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "CallFunctionByName", sizeof(UnrealAutoModUtilities_eventCallFunctionByName_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics
	{
		struct UnrealAutoModUtilities_eventCopyFile_Parms
		{
			FString BeforeFile;
			FString AfterFile;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfterFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AfterFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeforeFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BeforeFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealAutoModUtilities_eventCopyFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealAutoModUtilities_eventCopyFile_Parms), &Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_AfterFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_AfterFile = { "AfterFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventCopyFile_Parms, AfterFile), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_AfterFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_AfterFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_BeforeFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_BeforeFile = { "BeforeFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventCopyFile_Parms, BeforeFile), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_BeforeFile_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_BeforeFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_AfterFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::NewProp_BeforeFile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "CopyFile", sizeof(UnrealAutoModUtilities_eventCopyFile_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics
	{
		struct UnrealAutoModUtilities_eventCreateDirectory_Parms
		{
			FString Directory;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealAutoModUtilities_eventCreateDirectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealAutoModUtilities_eventCreateDirectory_Parms), &Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventCreateDirectory_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::NewProp_Directory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::NewProp_Directory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::NewProp_Directory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "CreateDirectory", sizeof(UnrealAutoModUtilities_eventCreateDirectory_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics
	{
		struct UnrealAutoModUtilities_eventCreateTextFile_Parms
		{
			FString FileName;
			FString FileContents;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileContents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileContents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealAutoModUtilities_eventCreateTextFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealAutoModUtilities_eventCreateTextFile_Parms), &Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_FileContents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_FileContents = { "FileContents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventCreateTextFile_Parms, FileContents), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_FileContents_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_FileContents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventCreateTextFile_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_FileName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_FileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_FileContents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "CreateTextFile", sizeof(UnrealAutoModUtilities_eventCreateTextFile_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics
	{
		struct UnrealAutoModUtilities_eventDataTableToJson_Parms
		{
			UDataTable* DataTable;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventDataTableToJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventDataTableToJson_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::NewProp_DataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "DataTableToJson", sizeof(UnrealAutoModUtilities_eventDataTableToJson_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics
	{
		struct UnrealAutoModUtilities_eventDeleteDirectoryAndContents_Parms
		{
			FString Directory;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealAutoModUtilities_eventDeleteDirectoryAndContents_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealAutoModUtilities_eventDeleteDirectoryAndContents_Parms), &Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventDeleteDirectoryAndContents_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::NewProp_Directory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::NewProp_Directory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::NewProp_Directory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "DeleteDirectoryAndContents", sizeof(UnrealAutoModUtilities_eventDeleteDirectoryAndContents_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics
	{
		struct UnrealAutoModUtilities_eventDeleteFile_Parms
		{
			FString File;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealAutoModUtilities_eventDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealAutoModUtilities_eventDeleteFile_Parms), &Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventDeleteFile_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::NewProp_File_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "DeleteFile", sizeof(UnrealAutoModUtilities_eventDeleteFile_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics
	{
		struct UnrealAutoModUtilities_eventDoesDirectoryExist_Parms
		{
			FString Directory;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealAutoModUtilities_eventDoesDirectoryExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealAutoModUtilities_eventDoesDirectoryExist_Parms), &Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventDoesDirectoryExist_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::NewProp_Directory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::NewProp_Directory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::NewProp_Directory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "DoesDirectoryExist", sizeof(UnrealAutoModUtilities_eventDoesDirectoryExist_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics
	{
		struct UnrealAutoModUtilities_eventDoesFileExist_Parms
		{
			FString File;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_File;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealAutoModUtilities_eventDoesFileExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealAutoModUtilities_eventDoesFileExist_Parms), &Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventDoesFileExist_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::NewProp_File_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::NewProp_File_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::NewProp_File,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "DoesFileExist", sizeof(UnrealAutoModUtilities_eventDoesFileExist_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics
	{
		struct UnrealAutoModUtilities_eventGetAllInstancedObjectsOfClass_Parms
		{
			UClass* Class;
			TArray<UObject*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventGetAllInstancedObjectsOfClass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventGetAllInstancedObjectsOfClass_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "GetAllInstancedObjectsOfClass", sizeof(UnrealAutoModUtilities_eventGetAllInstancedObjectsOfClass_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics
	{
		struct UnrealAutoModUtilities_eventGetEnumValuesAsString_Parms
		{
			UEnum* Enum;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventGetEnumValuesAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventGetEnumValuesAsString_Parms, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::NewProp_Enum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "GetEnumValuesAsString", sizeof(UnrealAutoModUtilities_eventGetEnumValuesAsString_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics
	{
		struct UnrealAutoModUtilities_eventGetFileExtensionsFromPaths_Parms
		{
			TArray<FString> FilePaths;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilePaths;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePaths_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventGetFileExtensionsFromPaths_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::NewProp_FilePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::NewProp_FilePaths = { "FilePaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventGetFileExtensionsFromPaths_Parms, FilePaths), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::NewProp_FilePaths_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::NewProp_FilePaths_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::NewProp_FilePaths_Inner = { "FilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::NewProp_FilePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::NewProp_FilePaths_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "GetFileExtensionsFromPaths", sizeof(UnrealAutoModUtilities_eventGetFileExtensionsFromPaths_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics
	{
		struct UnrealAutoModUtilities_eventGetFilesInDirectoryTree_Parms
		{
			FString Directory;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventGetFilesInDirectoryTree_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventGetFilesInDirectoryTree_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::NewProp_Directory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::NewProp_Directory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::NewProp_Directory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "GetFilesInDirectoryTree", sizeof(UnrealAutoModUtilities_eventGetFilesInDirectoryTree_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics
	{
		struct UnrealAutoModUtilities_eventGetFunctionNames_Parms
		{
			UObject* Object;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventGetFunctionNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventGetFunctionNames_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "GetFunctionNames", sizeof(UnrealAutoModUtilities_eventGetFunctionNames_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory_Statics
	{
		struct UnrealAutoModUtilities_eventGetProjectDirectory_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventGetProjectDirectory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "GetProjectDirectory", sizeof(UnrealAutoModUtilities_eventGetProjectDirectory_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics
	{
		struct UnrealAutoModUtilities_eventJsonToDataTable_Parms
		{
			FString JsonString;
			UDataTable* DataTable;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UnrealAutoModUtilities_eventJsonToDataTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealAutoModUtilities_eventJsonToDataTable_Parms), &Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventJsonToDataTable_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventJsonToDataTable_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::NewProp_JsonString_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::NewProp_JsonString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::NewProp_JsonString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "JsonToDataTable", sizeof(UnrealAutoModUtilities_eventJsonToDataTable_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics
	{
		struct UnrealAutoModUtilities_eventLaunchExternalExecutable_Parms
		{
			FString FilePath;
			TArray<FString> Parameters;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventLaunchExternalExecutable_Parms, Parameters), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_Parameters_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventLaunchExternalExecutable_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_FilePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_Parameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::NewProp_FilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "LaunchExternalExecutable", sizeof(UnrealAutoModUtilities_eventLaunchExternalExecutable_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics
	{
		struct UnrealAutoModUtilities_eventLoadSoftObject_Parms
		{
			TSoftObjectPtr<UObject> SoftObject;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventLoadSoftObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::NewProp_SoftObject = { "SoftObject", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventLoadSoftObject_Parms, SoftObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::NewProp_SoftObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "LoadSoftObject", sizeof(UnrealAutoModUtilities_eventLoadSoftObject_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory_Statics
	{
		struct UnrealAutoModUtilities_eventOpenDirectory_Parms
		{
			FString DirectoryPath;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirectoryPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory_Statics::NewProp_DirectoryPath = { "DirectoryPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventOpenDirectory_Parms, DirectoryPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory_Statics::NewProp_DirectoryPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "OpenDirectory", sizeof(UnrealAutoModUtilities_eventOpenDirectory_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite_Statics
	{
		struct UnrealAutoModUtilities_eventOpenWebsite_Parms
		{
			FString URL;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventOpenWebsite_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "OpenWebsite", sizeof(UnrealAutoModUtilities_eventOpenWebsite_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics
	{
		struct UnrealAutoModUtilities_eventReadFile_Parms
		{
			FString FileName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventReadFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealAutoModUtilities_eventReadFile_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::NewProp_FileName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::NewProp_FileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealAutoMod" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealAutoModUtilities, nullptr, "ReadFile", sizeof(UnrealAutoModUtilities_eventReadFile_Parms), Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUnrealAutoModUtilities_NoRegister()
	{
		return UUnrealAutoModUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealAutoModUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealAutoModUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealAutoMod,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnrealAutoModUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_CallFunctionByName, "CallFunctionByName" }, // 1443735053
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_CopyFile, "CopyFile" }, // 1005038485
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_CreateDirectory, "CreateDirectory" }, // 1806521
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_CreateTextFile, "CreateTextFile" }, // 4099928000
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_DataTableToJson, "DataTableToJson" }, // 4064730639
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteDirectoryAndContents, "DeleteDirectoryAndContents" }, // 1279943526
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_DeleteFile, "DeleteFile" }, // 1502678512
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_DoesDirectoryExist, "DoesDirectoryExist" }, // 514042098
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_DoesFileExist, "DoesFileExist" }, // 353228642
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_GetAllInstancedObjectsOfClass, "GetAllInstancedObjectsOfClass" }, // 2780031935
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_GetEnumValuesAsString, "GetEnumValuesAsString" }, // 410826263
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_GetFileExtensionsFromPaths, "GetFileExtensionsFromPaths" }, // 2668290448
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_GetFilesInDirectoryTree, "GetFilesInDirectoryTree" }, // 2777860085
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_GetFunctionNames, "GetFunctionNames" }, // 3095337012
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_GetProjectDirectory, "GetProjectDirectory" }, // 2613442213
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_JsonToDataTable, "JsonToDataTable" }, // 3974968364
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_LaunchExternalExecutable, "LaunchExternalExecutable" }, // 1130933411
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_LoadSoftObject, "LoadSoftObject" }, // 2404714339
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_OpenDirectory, "OpenDirectory" }, // 3655987600
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_OpenWebsite, "OpenWebsite" }, // 1111321394
		{ &Z_Construct_UFunction_UUnrealAutoModUtilities_ReadFile, "ReadFile" }, // 26532255
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealAutoModUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealAutoModUtilities.h" },
		{ "ModuleRelativePath", "Public/UnrealAutoModUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealAutoModUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealAutoModUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealAutoModUtilities_Statics::ClassParams = {
		&UUnrealAutoModUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealAutoModUtilities_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnrealAutoModUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealAutoModUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealAutoModUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealAutoModUtilities, 181711490);
	template<> UNREALAUTOMOD_API UClass* StaticClass<UUnrealAutoModUtilities>()
	{
		return UUnrealAutoModUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealAutoModUtilities(Z_Construct_UClass_UUnrealAutoModUtilities, &UUnrealAutoModUtilities::StaticClass, TEXT("/Script/UnrealAutoMod"), TEXT("UUnrealAutoModUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealAutoModUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
