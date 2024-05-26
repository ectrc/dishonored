/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_structs.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once



/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamPlayerClanData
// 0x0018
struct FSteamPlayerClanData
{
	class FString                                      ClanName;                                      // 0x0000 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      ClanTag;                                       // 0x000C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int32_t                                            AchievementId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Progress;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxProgress;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bUnlock : 1;                                   // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0028
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               ReadDelegates;                                 // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               WriteDelegates;                                // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ProfileDataChangedDelegates;                   // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0001 (0x0004 - 0x0005)
struct FLocalTalkerSteam : FLocalTalker
{
	uint8_t                                            MuteType;                                      // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x001C
struct FDeviceIdCache
{
	int32_t                                            DeviceID;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             DeviceSelectionMulticast;                      // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DeviceSelectionDelegates;                      // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int32_t                                            AchievementId;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        AchievementName;                               // 0x0004 (0x0008) [0x0000000000000000]               
	int32_t                                            ViewId;                                        // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            ProgressCount;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxProgress;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAutoUnlock : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x0020
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                     // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumberOfAttempts;                              // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Size;                                          // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;              // 0x0014 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int32_t                                            bIsControllerConnected;                        // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            bLastIsControllerConnected;                    // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0010
struct FOnlineStatusMapping
{
	int32_t                                            StatusId;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      StatusString;                                  // 0x0004 (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x0014
struct FPlayerStat
{
	int32_t                                            ViewId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ColumnId;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	struct FSettingsData                               Data;                                          // 0x0008 (0x000C) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x0054
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                        // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      playerName;                                    // 0x0008 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      StatGuid;                                      // 0x0014 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FPlayerStat>                   Stats;                                         // 0x0020 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FOnlinePlayerScore                          Score;                                         // 0x002C (0x001C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      Place;                                         // 0x0048 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


