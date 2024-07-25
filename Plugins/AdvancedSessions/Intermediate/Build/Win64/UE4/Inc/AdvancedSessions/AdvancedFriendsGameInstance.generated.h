// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPLoginStatus : uint8;
struct FBPUniqueNetId;
struct FBlueprintSessionResult;
#ifdef ADVANCEDSESSIONS_AdvancedFriendsGameInstance_generated_h
#error "AdvancedFriendsGameInstance.generated.h already included, missing '#pragma once' in AdvancedFriendsGameInstance.h"
#endif
#define ADVANCEDSESSIONS_AdvancedFriendsGameInstance_generated_h

#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS
#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_EVENT_PARMS \
	struct AdvancedFriendsGameInstance_eventOnPlayerLoginChanged_Parms \
	{ \
		int32 PlayerNum; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnPlayerLoginStatusChanged_Parms \
	{ \
		int32 PlayerNum; \
		EBPLoginStatus PreviousStatus; \
		EBPLoginStatus NewStatus; \
		FBPUniqueNetId NewPlayerUniqueNetID; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnPlayerTalkingStateChanged_Parms \
	{ \
		FBPUniqueNetId PlayerId; \
		bool bIsTalking; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnSessionInviteAccepted_Parms \
	{ \
		int32 LocalPlayerNum; \
		FBPUniqueNetId PersonInvited; \
		FBlueprintSessionResult SessionToJoin; \
	}; \
	struct AdvancedFriendsGameInstance_eventOnSessionInviteReceived_Parms \
	{ \
		int32 LocalPlayerNum; \
		FBPUniqueNetId PersonInviting; \
		FString AppId; \
		FBlueprintSessionResult SessionToJoin; \
	};


#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_CALLBACK_WRAPPERS
#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdvancedFriendsGameInstance(); \
	friend struct Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics; \
public: \
	DECLARE_CLASS(UAdvancedFriendsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsGameInstance)


#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAdvancedFriendsGameInstance(); \
	friend struct Z_Construct_UClass_UAdvancedFriendsGameInstance_Statics; \
public: \
	DECLARE_CLASS(UAdvancedFriendsGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsGameInstance)


#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedFriendsGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsGameInstance(UAdvancedFriendsGameInstance&&); \
	NO_API UAdvancedFriendsGameInstance(const UAdvancedFriendsGameInstance&); \
public:


#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsGameInstance(UAdvancedFriendsGameInstance&&); \
	NO_API UAdvancedFriendsGameInstance(const UAdvancedFriendsGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsGameInstance)


#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_PRIVATE_PROPERTY_OFFSET
#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_26_PROLOG \
	ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_EVENT_PARMS


#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_PRIVATE_PROPERTY_OFFSET \
	ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS \
	ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_CALLBACK_WRAPPERS \
	ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS \
	ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_PRIVATE_PROPERTY_OFFSET \
	ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_CALLBACK_WRAPPERS \
	ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_INCLASS_NO_PURE_DECLS \
	ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UAdvancedFriendsGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ZedfestModdingKit_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
