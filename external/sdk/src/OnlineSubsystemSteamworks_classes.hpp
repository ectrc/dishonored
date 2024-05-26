/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once



/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
enum class EMuteType : uint8_t
{
	MUTE_None                                          = 0,
	MUTE_AllButFriends                                 = 1,
	MUTE_All                                           = 2,
	MUTE_END                                           = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks
// 0x0000 (0x0038 - 0x0038)
class UOnlineLobbyInterfaceSteamworks : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x03A4 (0x00C8 - 0x046C)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    CallbackBridge;                                // 0x00C8 (0x0004) [0x0000000000001000] (CPF_Native)  
	uint32_t                                           bStoringAchievement : 1;                       // 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bClientStatsStorePending : 1;                  // 0x00CC (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bGSStatsStoresSuccess : 1;                     // 0x00CC (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bNeedsKeyboardTicking : 1;                     // 0x00CC (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bLastHasConnection : 1;                        // 0x00CC (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bIsStatsSessionOk : 1;                         // 0x00CC (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bHasSteamworksAccount : 1;                     // 0x00CC (0x0004) [0x0000000000004002] [0x00000040] (CPF_Const | CPF_Config)
	uint32_t                                           bShouldUseMcp : 1;                             // 0x00CC (0x0004) [0x0000000000004002] [0x00000080] (CPF_Const | CPF_Config)
	uint32_t                                           bDLCHasBeenInstalled : 1;                      // 0x00CC (0x0004) [0x0000000000000000] [0x00000100] 
	int32_t                                            TotalGSStatsStoresPending;                     // 0x00D0 (0x0004) [0x0000000000000000]               
	EOnlineEnumerationReadState                        UserStatsReceivedState;                        // 0x00D4 (0x0001) [0x0000000000000000]               
	ELoginStatus                                       LoggedInStatus;                                // 0x00D5 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            bWasKeyboardInputCanceled;                     // 0x00D6 (0x0001) [0x0000000000000002] (CPF_Const)   
	ENetworkNotificationPosition                       CurrentNotificationPosition;                   // 0x00D7 (0x0001) [0x0000000000004000] (CPF_Config)  
	class FString                                      LocalProfileName;                              // 0x00D8 (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      LoggedInPlayerName;                            // 0x00E4 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FUniqueNetId                                LoggedInPlayerId;                              // 0x00F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            LoggedInPlayerNum;                             // 0x00F8 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      ProfileDataDirectory;                          // 0x00FC (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ProfileDataExtension;                          // 0x0108 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               WriteProfileSettingsDelegates;                 // 0x0114 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                 // 0x0120 (0x0004) [0x0000000000000000]               
	class TArray<struct FScriptDelegate>               LocalPlayerStorageReadDelegates;               // 0x0124 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LocalPlayerStorageWriteDelegates;              // 0x0130 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               RemotePlayerStorageReadDelegates;              // 0x013C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadFriendsDelegates;                          // 0x0148 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               FriendsChangeDelegates;                        // 0x0154 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               MutingChangeDelegates;                         // 0x0160 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LoginChangeDelegates;                          // 0x016C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LoginFailedDelegates;                          // 0x0178 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LogoutCompletedDelegates;                      // 0x0184 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               AccountCreateDelegates;                        // 0x0190 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ConnectionStatusChangeDelegates;               // 0x019C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ControllerChangeDelegates;                     // 0x01A8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LinkStatusDelegates;                           // 0x01B4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadTitleFileCompleteDelegates;                // 0x01C0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               AchievementDelegates;                          // 0x01CC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               AchievementReadDelegates;                      // 0x01D8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FLocalTalkerSteam                           CurrentLocalTalker;                            // 0x01E4 (0x0008) [0x0000000000000000]               
	class TArray<struct FRemoteTalker>                 RemoteTalkers;                                 // 0x01EC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            GameID;                                        // 0x01F8 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	class UOnlineStatsRead*                            CurrentStatsRead;                              // 0x01FC (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FPendingPlayerStats>           PendingStats;                                  // 0x0200 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      KeyboardResultsString;                         // 0x020C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               KeyboardInputDelegates;                        // 0x0218 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FProfileSettingsCache                       ProfileCache;                                  // 0x0224 (0x0028) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlinePlayerStorage*                        PlayerStorageCache;                            // 0x024C (0x0004) [0x0000000000000000]               
	class FString                                      CachedFriendMessage;                           // 0x0250 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FDeviceIdCache                              DeviceCache;                                   // 0x025C (0x001C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        LocationUrlsForInvites;                        // 0x0278 (0x000C) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      LocationUrl;                                   // 0x0284 (0x000C) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FOnlineFriendMessage>          CachedFriendMessages;                          // 0x0290 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FOnlineStatusMapping>          StatusMappings;                                // 0x029C (0x000C) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      DefaultStatus;                                 // 0x02A8 (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      GameInviteMessage;                             // 0x02B4 (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FControllerConnectionState                  ControllerStates[4];                           // 0x02C0 (0x0020) [0x0000000000000000]               
	float                                              ConnectionPresenceTimeInterval;                // 0x02E0 (0x0004) [0x0000000000000000]               
	float                                              ConnectionPresenceElapsedTime;                 // 0x02E4 (0x0004) [0x0000000000000000]               
	class FString                                      EncryptedProductKey;                           // 0x02E8 (0x000C) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  MuteList;                                      // 0x02F4 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FQueuedAvatarRequest>          QueuedAvatarRequests;                          // 0x0300 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FAchievementMappingInfo>       AchievementMappings;                           // 0x030C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FAchievementProgressStat>      PendingAchievementProgress;                    // 0x0318 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FPointer                                    m_paEnumeratedDLCs;                            // 0x0324 (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FScriptDelegate                             __OnLoginChange__Delegate;                     // 0x0328 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                  // 0x0334 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                    // 0x0340 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                   // 0x034C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                     // 0x0358 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                 // 0x0364 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;               // 0x0370 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;     // 0x037C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;    // 0x0388 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;       // 0x0394 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;// 0x03A0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;      // 0x03AC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;             // 0x03B8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                // 0x03C4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                // 0x03D0 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                // 0x03DC (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;          // 0x03E8 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;             // 0x03F4 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;           // 0x0400 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;    // 0x040C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;           // 0x0418 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;         // 0x0424 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;       // 0x0430 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;              // 0x043C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;        // 0x0448 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;        // 0x0454 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;// 0x0460 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks");
		}

		return uClassPointer;
	};

	bool Int64ToUniqueNetId(const class FString& UIDString, struct FUniqueNetId& outOutUID);
	class FString UniqueNetIdToInt64(struct FUniqueNetId& outUid);
	bool ShowProfileUI(uint8_t LocalUserNum, const class FString& optionalSubURL, const struct FUniqueNetId& optionalPlayerUID);
	class FString UniqueNetIdToPlayerName(struct FUniqueNetId& outUid);
	bool DisplayAchievementProgress(int32_t AchievementId, int32_t ProgressCount, int32_t MaxProgress);
	bool ShowCustomMessageUI(uint8_t LocalUserNum, const class FString& MessageTitle, const class FString& NonEditableMessage, const class FString& optionalEditableMessage, class TArray<struct FUniqueNetId>& outRecipients);
	void ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, bool bWasSuccessful);
	bool ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings);
	bool UnlockAvatarAward(uint8_t LocalUserNum, int32_t AvatarItemId);
	class TArray<class FString> EnumerateFilesOnRemoteStorage();
	bool DeleteFileFromRemoteStorageW(const class FString& Filename);
	bool ReadBytesFromRemoteStorage(const class FString& Filename, class TArray<uint8_t>& outData);
	bool ReadStringFromRemoteStorage(const class FString& Filename, class FString& outData);
	bool WriteBytesToRemoteStorage(const class FString& Filename, const class TArray<uint8_t>& Data);
	bool WriteStringToRemoteStorage(const class FString& Filename, const class FString& Data);
	void GetSteamClanData(class TArray<struct FSteamPlayerClanData>& outResults);
	void ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, int32_t Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate);
	void OnReadOnlineAvatarComplete(const struct FUniqueNetId& PlayerNetId, class UTexture2D* Avatar);
	bool ShowCustomPlayersUI(uint8_t LocalUserNum, const class FString& Title, const class FString& Description, class TArray<struct FUniqueNetId>& outPlayers);
	EOnlineEnumerationReadState GetAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, class TArray<struct FAchievementDetails>& outAchievements);
	void ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate);
	void OnReadAchievementsComplete(int32_t TitleId);
	bool ReadAchievements(uint8_t LocalUserNum, int32_t optionalTitleId, bool optionalBShouldReadText, bool optionalBShouldReadImages);
	bool ShowPlayersUI(uint8_t LocalUserNum);
	bool ShowFriendsInviteUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool ShowFriendsUI(uint8_t LocalUserNum);
	void ClearProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId);
	void ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate);
	void OnUnlockAchievementComplete(bool bWasSuccessful);
	bool UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId);
	bool IsDeviceValid(int32_t DeviceID, int32_t optionalSizeNeeded);
	int32_t GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& outDeviceName);
	void ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate);
	void OnDeviceSelectionComplete(bool bWasSuccessful);
	bool ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, bool optionalBManageStorage);
	bool ShowMembershipMarketplaceUI(uint8_t LocalUserNum);
	bool ShowContentMarketplaceUI(uint8_t LocalUserNum, int32_t optionalCategoryMask, int32_t optionalOfferId);
	bool ShowInviteUI(uint8_t LocalUserNum, const class FString& optionalInviteText);
	bool ShowAchievementsUI(uint8_t LocalUserNum);
	bool ShowMessagesUI(uint8_t LocalUserNum);
	bool ShowGamerCardUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool ShowFeedbackUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex);
	bool UnmuteAll(uint8_t LocalUserNum);
	bool MuteAll(uint8_t LocalUserNum, bool bAllowFriends);
	class FString GetKeyboardInputResults(uint8_t& outBWasCanceled);
	void ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate);
	void OnKeyboardInputComplete(bool bWasSuccessful);
	bool ShowKeyboardUI(uint8_t LocalUserNum, const class FString& TitleText, const class FString& DescriptionText, bool optionalBIsPassword, bool optionalBShouldValidate, const class FString& optionalDefaultText, int32_t optionalMaxResultLength);
	void SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, class TArray<struct FLocalizedStringSetting>& outLocalizedStringSettings, class TArray<struct FSettingsProperty>& outProperties);
	bool GetLocalAccountNames(class TArray<class FString>& outAccounts);
	bool DeleteLocalAccount(const class FString& UserName, const class FString& optionalPassword);
	bool RenameLocalAccount(const class FString& NewUserName, const class FString& OldUserName, const class FString& optionalPassword);
	bool CreateLocalAccount(const class FString& UserName, const class FString& optionalPassword);
	void ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate);
	void OnCreateOnlineAccountCompleted(EOnlineAccountCreateStatus ErrorStatus);
	bool CreateOnlineAccount(const class FString& UserName, const class FString& Password, const class FString& EmailAddress, const class FString& optionalProductKey);
	EOnlineEnumerationReadState GetTitleFileState(const class FString& Filename);
	bool GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const class FString& FileToRead);
	void OnReadTitleFileComplete(bool bWasSuccessful, const class FString& Filename);
	void ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	int32_t GetLocale();
	ENATType GetNATType();
	void ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate);
	void OnConnectionStatusChange(EOnlineServerConnectionStatus ConnectionStatus);
	bool IsControllerConnected(int32_t ControllerId);
	void ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate);
	void OnControllerChange(int32_t ControllerId, bool bIsConnected);
	void SetNetworkNotificationPosition(ENetworkNotificationPosition NewPos);
	ENetworkNotificationPosition GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate);
	void OnExternalUIChange(bool bIsOpening);
	void ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate);
	void OnLinkStatusChange(bool bIsConnected);
	bool HasLinkConnection();
	class FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
	EOnlineEnumerationReadState GetFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt, class TArray<struct FOnlineFriend>& outFriends);
	void ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(bool bWasSuccessful);
	bool ReadFriendsList(uint8_t LocalUserNum, int32_t optionalCount, int32_t optionalStartingAt);
	void ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate);
	void OnWritePlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(uint8_t LocalUserNum);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate);
	void OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful);
	bool ReadPlayerStorageForNetId(uint8_t LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate);
	void OnReadPlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	bool ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t optionalDeviceID);
	void ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	void WriteProfileSettingsCompleted(uint8_t LocalUserNum, bool bWasSuccessful);
	bool WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(uint8_t LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful);
	void ReadProfileSettingsCompleted(uint8_t LocalUserNum, const class TArray<uint8_t>& rProfileBuffer, bool bWasSuccessful);
	bool ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings, bool bForceRead);
	void ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate);
	void ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, uint8_t LocalUserNum);
	void AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, uint8_t LocalUserNum);
	void OnLoginStatusChange(ELoginStatus NewStatus, const struct FUniqueNetId& NewId);
	void ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	void AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate);
	bool IsMuted(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	bool AreAnyFriends(uint8_t LocalUserNum, class TArray<struct FFriendsQuery>& outQuery);
	bool IsFriend(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID);
	EFeaturePrivilegeLevel CanShowPresenceInformation(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanViewPlayerProfiles(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanPurchaseContent(uint8_t LocalUserNum);
	EFeaturePrivilegeLevel CanDownloadUserContent(uint8_t LocalUserNum);
	class FString GetPlayerNickname(uint8_t LocalUserNum);
	bool GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& outPlayerID);
	bool IsLocalLogin(uint8_t LocalUserNum);
	bool IsGuestLogin(uint8_t LocalUserNum);
	ELoginStatus GetLoginStatus(uint8_t LocalUserNum);
	void ClearLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void AddLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate);
	void OnLogoutCompleted(bool bWasSuccessful);
	bool Logout(uint8_t LocalUserNum);
	void ClearLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void AddLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate);
	void OnLoginFailed(uint8_t LocalUserNum, EOnlineServerConnectionStatus ErrorCode);
	bool AutoLogin();
	bool Login(uint8_t LocalUserNum, const class FString& LoginName, const class FString& Password, bool optionalBWantsLocalOnly);
	bool ShowLoginUI(bool optionalBShowOnlineOnly);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(uint8_t LocalUserNum);
	void eventExit();
	bool eventInit();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


