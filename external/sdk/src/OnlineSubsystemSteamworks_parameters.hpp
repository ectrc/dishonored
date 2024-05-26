/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_parameters.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once



/*
# ========================================================================================= #
# Parameters
# ========================================================================================= #
*/

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420400]  (iNative[49020])
struct UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Params
{
	class FString                                      UIDString;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                OutUID;                                           // 0x000C (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420400]  (iNative[49117])
struct UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Params
{
	struct FUniqueNetId                                Uid;                                              // 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      ReturnValue;                                      // 0x0008 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024400]  (iNative[49107])
struct UOnlineSubsystemSteamworks_execShowProfileUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      SubURL;                                           // 0x0004 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerUID;                                        // 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420400]  (iNative[49118])
struct UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Params
{
	struct FUniqueNetId                                Uid;                                              // 0x0000 (0x0008) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	class FString                                      ReturnValue;                                      // 0x0008 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020400]  (iNative[48999])
struct UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Params
{
	int32_t                                            AchievementId;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ProgressCount;                                    // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MaxProgress;                                      // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000] 
struct UOnlineSubsystemSteamworks_execShowCustomMessageUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  Recipients;                                       // 0x0004 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      MessageTitle;                                     // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      NonEditableMessage;                               // 0x001C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      EditableMessage;                                  // 0x0028 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0034 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execUnlockAvatarAward_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AvatarItemId;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateFilesOnRemoteStorage
// [0x00020400]  (iNative[49009])
struct UOnlineSubsystemSteamworks_execEnumerateFilesOnRemoteStorage_Params
{
	class TArray<class FString>                        ReturnValue;                                      // 0x0000 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteFileFromRemoteStorage
// [0x00020400]  (iNative[48993])
struct UOnlineSubsystemSteamworks_execDeleteFileFromRemoteStorageW_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBytesFromRemoteStorage
// [0x00420400]  (iNative[49092])
struct UOnlineSubsystemSteamworks_execReadBytesFromRemoteStorage_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              Data;                                             // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStringFromRemoteStorage
// [0x00420400]  (iNative[49099])
struct UOnlineSubsystemSteamworks_execReadStringFromRemoteStorage_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Data;                                             // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteBytesToRemoteStorage
// [0x00020400]  (iNative[49123])
struct UOnlineSubsystemSteamworks_execWriteBytesToRemoteStorage_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              Data;                                             // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteStringToRemoteStorage
// [0x00020400]  (iNative[49126])
struct UOnlineSubsystemSteamworks_execWriteStringToRemoteStorage_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Data;                                             // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420400]  (iNative[49019])
struct UOnlineSubsystemSteamworks_execGetSteamClanData_Params
{
	class TArray<struct FSteamPlayerClanData>          Results;                                          // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020400]  (iNative[49096])
struct UOnlineSubsystemSteamworks_execReadOnlineAvatar_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      // 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	int32_t                                            Size;                                             // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Params
{
	struct FUniqueNetId                                PlayerNetId;                                      // 0x0000 (0x0008) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class UTexture2D*                                  Avatar;                                           // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420400]  (iNative[25908])
struct UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0004 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      Title;                                            // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Description;                                      // 0x001C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424400]  (iNative[20478])
struct UOnlineSubsystemSteamworks_execGetAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FAchievementDetails>           Achievements;                                     // 0x0004 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            TitleId;                                          // 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            ReturnValue;                                      // 0x0014 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params
{
	int32_t                                            TitleId;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024400]  (iNative[24938])
struct UOnlineSubsystemSteamworks_execReadAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadText : 1;                              // 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadImages : 1;                            // 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020400]  (iNative[25929])
struct UOnlineSubsystemSteamworks_execShowPlayersUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020400]  (iNative[25915])
struct UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020400]  (iNative[25916])
struct UOnlineSubsystemSteamworks_execShowFriendsUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnProfileDataChanged_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020400]  (iNative[26947])
struct UOnlineSubsystemSteamworks_execUnlockGamerPicture_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            PictureId;                                        // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00020400]  (iNative[13835])
struct UOnlineSubsystemSteamworks_execUnlockAchievement_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AchievementId;                                    // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024400]  (iNative[21375])
struct UOnlineSubsystemSteamworks_execIsDeviceValid_Params
{
	int32_t                                            DeviceID;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SizeNeeded;                                       // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420400]  (iNative[20566])
struct UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      DeviceName;                                       // 0x0004 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             DeviceDelegate;                                   // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             DeviceDelegate;                                   // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         AddIndex;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024400]  (iNative[25912])
struct UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            SizeNeeded;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bManageStorage : 1;                               // 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020400]  (iNative[25924])
struct UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024400]  (iNative[25907])
struct UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            CategoryMask;                                     // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            OfferId;                                          // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024400]  (iNative[25920])
struct UOnlineSubsystemSteamworks_execShowInviteUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      InviteText;                                       // 0x0004 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020400]  (iNative[25905])
struct UOnlineSubsystemSteamworks_execShowAchievementsUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020400]  (iNative[25925])
struct UOnlineSubsystemSteamworks_execShowMessagesUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00020400]  (iNative[25917])
struct UOnlineSubsystemSteamworks_execShowGamerCardUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020400]  (iNative[25913])
struct UOnlineSubsystemSteamworks_execShowFeedbackUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execDeleteMessage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MessageIndex;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execUnmuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execMuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAllowFriends : 1;                                // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420002] 
struct UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Params
{
	uint8_t                                            bWasCanceled;                                     // 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024400]  (iNative[25921])
struct UOnlineSubsystemSteamworks_execShowKeyboardUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      TitleText;                                        // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DescriptionText;                                  // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsPassword : 1;                                  // 0x001C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldValidate : 1;                              // 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      DefaultText;                                      // 0x0024 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            MaxResultLength;                                  // 0x0030 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0034 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420400]  (iNative[25726])
struct UOnlineSubsystemSteamworks_execSetOnlineStatus_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StatusId;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FLocalizedStringSetting>       LocalizedStringSettings;                          // 0x0008 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class TArray<struct FSettingsProperty>             Properties;                                       // 0x0014 (0x000C) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// [0x00420000] 
struct UOnlineSubsystemSteamworks_execGetLocalAccountNames_Params
{
	class TArray<class FString>                        Accounts;                                         // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execDeleteLocalAccount_Params
{
	class FString                                      UserName;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         // 0x000C (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execRenameLocalAccount_Params
{
	class FString                                      NewUserName;                                      // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      OldUserName;                                      // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         // 0x0018 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execCreateLocalAccount_Params
{
	class FString                                      UserName;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         // 0x000C (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnCreateOnlineAccountCompleted_Params
{
	uint8_t                                            ErrorStatus;                                      // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// [0x00024400]  (iNative[18448])
struct UOnlineSubsystemSteamworks_execCreateOnlineAccount_Params
{
	class FString                                      UserName;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      EmailAddress;                                     // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ProductKey;                                       // 0x0024 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0030 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            ReturnValue;                                      // 0x000C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420400]  (iNative[20790])
struct UOnlineSubsystemSteamworks_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020400]  (iNative[24964])
struct UOnlineSubsystemSteamworks_execReadTitleFile_Params
{
	class FString                                      FileToRead;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetLocale_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020400]  (iNative[13559])
struct UOnlineSubsystemSteamworks_execGetNATType_Params
{
	uint8_t                                            ReturnValue;                                      // 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Params
{
	uint8_t                                            ConnectionStatus;                                 // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020400]  (iNative[21368])
struct UOnlineSubsystemSteamworks_execIsControllerConnected_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnControllerChange_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsConnected : 1;                                 // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020400]  (iNative[25722])
struct UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Params
{
	uint8_t                                            NewPos;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Params
{
	uint8_t                                            ReturnValue;                                      // 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                               // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                               // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnExternalUIChange_Params
{
	uint32_t                                           bIsOpening : 1;                                   // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params
{
	uint32_t                                           bIsConnected : 1;                                 // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020400]  (iNative[13575])
struct UOnlineSubsystemSteamworks_execHasLinkConnection_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] 
struct UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Params
{
	int32_t                                            UserIndex;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424400]  (iNative[20591])
struct UOnlineSubsystemSteamworks_execGetFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FOnlineFriend>                 Friends;                                          // 0x0004 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            Count;                                            // 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       // 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            ReturnValue;                                      // 0x0018 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024400]  (iNative[24949])
struct UOnlineSubsystemSteamworks_execReadFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Count;                                            // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execWritePlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DeviceID;                                         // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        // 0x0008 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        // 0x0008 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                            // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NetId;                                            // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000] 
struct UOnlineSubsystemSteamworks_execReadPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DeviceID;                                         // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettingsCompleted
// [0x00020400]  (iNative[27323])
struct UOnlineSubsystemSteamworks_execWriteProfileSettingsCompleted_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020400]  (iNative[27322])
struct UOnlineSubsystemSteamworks_execWriteProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettingsCompleted
// [0x00020400]  (iNative[24959])
struct UOnlineSubsystemSteamworks_execReadProfileSettingsCompleted_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<uint8_t>                              rProfileBuffer;                                   // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWasSuccessful : 1;                               // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020400]  (iNative[13823])
struct UOnlineSubsystemSteamworks_execReadProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bForceRead : 1;                                   // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                              // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     // 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                              // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     // 0x000C (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params
{
	uint8_t                                            NewStatus;                                        // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewId;                                            // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsMuted_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420400]  (iNative[15645])
struct UOnlineSubsystemSteamworks_execAreAnyFriends_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FFriendsQuery>                 Query;                                            // 0x0004 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020400]  (iNative[21382])
struct UOnlineSubsystemSteamworks_execIsFriend_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execCanPurchaseContent_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execCanDownloadUserContent_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execGetPlayerNickname_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420002] 
struct UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsLocalLogin_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] 
struct UOnlineSubsystemSteamworks_execIsGuestLogin_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020400]  (iNative[13557])
struct UOnlineSubsystemSteamworks_execGetLoginStatus_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLogoutCompleted_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020400]  (iNative[21849])
struct UOnlineSubsystemSteamworks_execLogout_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginFailedDelegate;                              // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020002] 
struct UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginFailedDelegate;                              // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginFailed_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ErrorCode;                                        // 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020400]  (iNative[15751])
struct UOnlineSubsystemSteamworks_execAutoLogin_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024400]  (iNative[13607])
struct UOnlineSubsystemSteamworks_execLogin_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      LoginName;                                        // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWantsLocalOnly : 1;                              // 0x001C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024400]  (iNative[25922])
struct UOnlineSubsystemSteamworks_execShowLoginUI_Params
{
	uint32_t                                           bShowOnlineOnly : 1;                              // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnFriendsChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnMutingChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginCancelled_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] 
struct UOnlineSubsystemSteamworks_execOnLoginChange_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00]  (iNative[763])
struct UOnlineSubsystemSteamworks_eventExit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00]  (iNative[762])
struct UOnlineSubsystemSteamworks_eventInit_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


