/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.cpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#include "../include/sdk.hpp"



/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[49020])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UIDString                      (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            OutUID                         (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId(const class FString& UIDString, struct FUniqueNetId& OutUID)
{
	static UFunction* uFnInt64ToUniqueNetId = nullptr;

	if (!uFnInt64ToUniqueNetId)
	{
		uFnInt64ToUniqueNetId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId");
	}

	UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Params Int64ToUniqueNetId_Params;
	memset(&Int64ToUniqueNetId_Params, 0, sizeof(Int64ToUniqueNetId_Params));
	memcpy_s(&Int64ToUniqueNetId_Params.UIDString, sizeof(Int64ToUniqueNetId_Params.UIDString), &UIDString, sizeof(UIDString));
	memcpy_s(&Int64ToUniqueNetId_Params.OutUID, sizeof(Int64ToUniqueNetId_Params.OutUID), &OutUID, sizeof(OutUID));

	uFnInt64ToUniqueNetId->iNative = 0;
	uFnInt64ToUniqueNetId->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInt64ToUniqueNetId, &Int64ToUniqueNetId_Params, nullptr);
	uFnInt64ToUniqueNetId->FunctionFlags |= 0x400;
	uFnInt64ToUniqueNetId->iNative = 49020;

	memcpy_s(&OutUID, sizeof(OutUID), &Int64ToUniqueNetId_Params.OutUID, sizeof(Int64ToUniqueNetId_Params.OutUID));

	return Int64ToUniqueNetId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[49117])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm)

class FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64(struct FUniqueNetId& Uid)
{
	static UFunction* uFnUniqueNetIdToInt64 = nullptr;

	if (!uFnUniqueNetIdToInt64)
	{
		uFnUniqueNetIdToInt64 = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64");
	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Params UniqueNetIdToInt64_Params;
	memset(&UniqueNetIdToInt64_Params, 0, sizeof(UniqueNetIdToInt64_Params));
	memcpy_s(&UniqueNetIdToInt64_Params.Uid, sizeof(UniqueNetIdToInt64_Params.Uid), &Uid, sizeof(Uid));

	uFnUniqueNetIdToInt64->iNative = 0;
	uFnUniqueNetIdToInt64->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUniqueNetIdToInt64, &UniqueNetIdToInt64_Params, nullptr);
	uFnUniqueNetIdToInt64->FunctionFlags |= 0x400;
	uFnUniqueNetIdToInt64->iNative = 49117;

	memcpy_s(&Uid, sizeof(Uid), &UniqueNetIdToInt64_Params.Uid, sizeof(UniqueNetIdToInt64_Params.Uid));

	return UniqueNetIdToInt64_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[49107])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  SubURL                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerUID                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowProfileUI(uint8_t LocalUserNum, const class FString& SubURL, const struct FUniqueNetId& PlayerUID)
{
	static UFunction* uFnShowProfileUI = nullptr;

	if (!uFnShowProfileUI)
	{
		uFnShowProfileUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI");
	}

	UOnlineSubsystemSteamworks_execShowProfileUI_Params ShowProfileUI_Params;
	memset(&ShowProfileUI_Params, 0, sizeof(ShowProfileUI_Params));
	memcpy_s(&ShowProfileUI_Params.LocalUserNum, sizeof(ShowProfileUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowProfileUI_Params.SubURL, sizeof(ShowProfileUI_Params.SubURL), &SubURL, sizeof(SubURL));
	memcpy_s(&ShowProfileUI_Params.PlayerUID, sizeof(ShowProfileUI_Params.PlayerUID), &PlayerUID, sizeof(PlayerUID));

	uFnShowProfileUI->iNative = 0;
	uFnShowProfileUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowProfileUI, &ShowProfileUI_Params, nullptr);
	uFnShowProfileUI->FunctionFlags |= 0x400;
	uFnShowProfileUI->iNative = 49107;

	return ShowProfileUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[49118])
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm)

class FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName(struct FUniqueNetId& Uid)
{
	static UFunction* uFnUniqueNetIdToPlayerName = nullptr;

	if (!uFnUniqueNetIdToPlayerName)
	{
		uFnUniqueNetIdToPlayerName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName");
	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Params UniqueNetIdToPlayerName_Params;
	memset(&UniqueNetIdToPlayerName_Params, 0, sizeof(UniqueNetIdToPlayerName_Params));
	memcpy_s(&UniqueNetIdToPlayerName_Params.Uid, sizeof(UniqueNetIdToPlayerName_Params.Uid), &Uid, sizeof(Uid));

	uFnUniqueNetIdToPlayerName->iNative = 0;
	uFnUniqueNetIdToPlayerName->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUniqueNetIdToPlayerName, &UniqueNetIdToPlayerName_Params, nullptr);
	uFnUniqueNetIdToPlayerName->FunctionFlags |= 0x400;
	uFnUniqueNetIdToPlayerName->iNative = 49118;

	memcpy_s(&Uid, sizeof(Uid), &UniqueNetIdToPlayerName_Params.Uid, sizeof(UniqueNetIdToPlayerName_Params.Uid));

	return UniqueNetIdToPlayerName_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[48999])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        AchievementId                  (CPF_Parm)
// int32_t                        ProgressCount                  (CPF_Parm)
// int32_t                        MaxProgress                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress(int32_t AchievementId, int32_t ProgressCount, int32_t MaxProgress)
{
	static UFunction* uFnDisplayAchievementProgress = nullptr;

	if (!uFnDisplayAchievementProgress)
	{
		uFnDisplayAchievementProgress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress");
	}

	UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Params DisplayAchievementProgress_Params;
	memset(&DisplayAchievementProgress_Params, 0, sizeof(DisplayAchievementProgress_Params));
	memcpy_s(&DisplayAchievementProgress_Params.AchievementId, sizeof(DisplayAchievementProgress_Params.AchievementId), &AchievementId, sizeof(AchievementId));
	memcpy_s(&DisplayAchievementProgress_Params.ProgressCount, sizeof(DisplayAchievementProgress_Params.ProgressCount), &ProgressCount, sizeof(ProgressCount));
	memcpy_s(&DisplayAchievementProgress_Params.MaxProgress, sizeof(DisplayAchievementProgress_Params.MaxProgress), &MaxProgress, sizeof(MaxProgress));

	uFnDisplayAchievementProgress->iNative = 0;
	uFnDisplayAchievementProgress->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDisplayAchievementProgress, &DisplayAchievementProgress_Params, nullptr);
	uFnDisplayAchievementProgress->FunctionFlags |= 0x400;
	uFnDisplayAchievementProgress->iNative = 48999;

	return DisplayAchievementProgress_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  MessageTitle                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  NonEditableMessage             (CPF_Parm | CPF_NeedCtorLink)
// class FString                  EditableMessage                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FUniqueNetId> Recipients                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI(uint8_t LocalUserNum, const class FString& MessageTitle, const class FString& NonEditableMessage, const class FString& EditableMessage, class TArray<struct FUniqueNetId>& Recipients)
{
	static UFunction* uFnShowCustomMessageUI = nullptr;

	if (!uFnShowCustomMessageUI)
	{
		uFnShowCustomMessageUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI");
	}

	UOnlineSubsystemSteamworks_execShowCustomMessageUI_Params ShowCustomMessageUI_Params;
	memset(&ShowCustomMessageUI_Params, 0, sizeof(ShowCustomMessageUI_Params));
	memcpy_s(&ShowCustomMessageUI_Params.LocalUserNum, sizeof(ShowCustomMessageUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowCustomMessageUI_Params.MessageTitle, sizeof(ShowCustomMessageUI_Params.MessageTitle), &MessageTitle, sizeof(MessageTitle));
	memcpy_s(&ShowCustomMessageUI_Params.NonEditableMessage, sizeof(ShowCustomMessageUI_Params.NonEditableMessage), &NonEditableMessage, sizeof(NonEditableMessage));
	memcpy_s(&ShowCustomMessageUI_Params.EditableMessage, sizeof(ShowCustomMessageUI_Params.EditableMessage), &EditableMessage, sizeof(EditableMessage));
	memcpy_s(&ShowCustomMessageUI_Params.Recipients, sizeof(ShowCustomMessageUI_Params.Recipients), &Recipients, sizeof(Recipients));

	this->ProcessEvent(uFnShowCustomMessageUI, &ShowCustomMessageUI_Params, nullptr);

	memcpy_s(&Recipients, sizeof(Recipients), &ShowCustomMessageUI_Params.Recipients, sizeof(ShowCustomMessageUI_Params.Recipients));

	return ShowCustomMessageUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnClearCrossTitleProfileSettings = nullptr;

	if (!uFnClearCrossTitleProfileSettings)
	{
		uFnClearCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Params ClearCrossTitleProfileSettings_Params;
	memset(&ClearCrossTitleProfileSettings_Params, 0, sizeof(ClearCrossTitleProfileSettings_Params));
	memcpy_s(&ClearCrossTitleProfileSettings_Params.LocalUserNum, sizeof(ClearCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearCrossTitleProfileSettings_Params.TitleId, sizeof(ClearCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnGetCrossTitleProfileSettings = nullptr;

	if (!uFnGetCrossTitleProfileSettings)
	{
		uFnGetCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Params GetCrossTitleProfileSettings_Params;
	memset(&GetCrossTitleProfileSettings_Params, 0, sizeof(GetCrossTitleProfileSettings_Params));
	memcpy_s(&GetCrossTitleProfileSettings_Params.LocalUserNum, sizeof(GetCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetCrossTitleProfileSettings_Params.TitleId, sizeof(GetCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Params, nullptr);

	return GetCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnClearReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params ClearReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memset(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnAddReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params AddReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memset(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params, 0, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(AddReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadCrossTitleProfileSettingsComplete = nullptr;

	if (!uFnOnReadCrossTitleProfileSettingsComplete)
	{
		uFnOnReadCrossTitleProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Params OnReadCrossTitleProfileSettingsComplete_Params;
	memset(&OnReadCrossTitleProfileSettingsComplete_Params, 0, sizeof(OnReadCrossTitleProfileSettingsComplete_Params));
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.LocalUserNum, sizeof(OnReadCrossTitleProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.TitleId, sizeof(OnReadCrossTitleProfileSettingsComplete_Params.TitleId), &TitleId, sizeof(TitleId));
	OnReadCrossTitleProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadCrossTitleProfileSettings = nullptr;

	if (!uFnReadCrossTitleProfileSettings)
	{
		uFnReadCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Params ReadCrossTitleProfileSettings_Params;
	memset(&ReadCrossTitleProfileSettings_Params, 0, sizeof(ReadCrossTitleProfileSettings_Params));
	memcpy_s(&ReadCrossTitleProfileSettings_Params.LocalUserNum, sizeof(ReadCrossTitleProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadCrossTitleProfileSettings_Params.TitleId, sizeof(ReadCrossTitleProfileSettings_Params.TitleId), &TitleId, sizeof(TitleId));
	ReadCrossTitleProfileSettings_Params.ProfileSettings = ProfileSettings;

	this->ProcessEvent(uFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Params, nullptr);

	return ReadCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AvatarItemId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockAvatarAward(uint8_t LocalUserNum, int32_t AvatarItemId)
{
	static UFunction* uFnUnlockAvatarAward = nullptr;

	if (!uFnUnlockAvatarAward)
	{
		uFnUnlockAvatarAward = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward");
	}

	UOnlineSubsystemSteamworks_execUnlockAvatarAward_Params UnlockAvatarAward_Params;
	memset(&UnlockAvatarAward_Params, 0, sizeof(UnlockAvatarAward_Params));
	memcpy_s(&UnlockAvatarAward_Params.LocalUserNum, sizeof(UnlockAvatarAward_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnlockAvatarAward_Params.AvatarItemId, sizeof(UnlockAvatarAward_Params.AvatarItemId), &AvatarItemId, sizeof(AvatarItemId));

	this->ProcessEvent(uFnUnlockAvatarAward, &UnlockAvatarAward_Params, nullptr);

	return UnlockAvatarAward_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateFilesOnRemoteStorage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[49009])
// Parameter Info:
// class TArray<class FString>    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class TArray<class FString> UOnlineSubsystemSteamworks::EnumerateFilesOnRemoteStorage()
{
	static UFunction* uFnEnumerateFilesOnRemoteStorage = nullptr;

	if (!uFnEnumerateFilesOnRemoteStorage)
	{
		uFnEnumerateFilesOnRemoteStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateFilesOnRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execEnumerateFilesOnRemoteStorage_Params EnumerateFilesOnRemoteStorage_Params;
	memset(&EnumerateFilesOnRemoteStorage_Params, 0, sizeof(EnumerateFilesOnRemoteStorage_Params));

	uFnEnumerateFilesOnRemoteStorage->iNative = 0;
	uFnEnumerateFilesOnRemoteStorage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEnumerateFilesOnRemoteStorage, &EnumerateFilesOnRemoteStorage_Params, nullptr);
	uFnEnumerateFilesOnRemoteStorage->FunctionFlags |= 0x400;
	uFnEnumerateFilesOnRemoteStorage->iNative = 49009;

	return EnumerateFilesOnRemoteStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteFileFromRemoteStorage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[48993])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::DeleteFileFromRemoteStorageW(const class FString& Filename)
{
	static UFunction* uFnDeleteFileFromRemoteStorageW = nullptr;

	if (!uFnDeleteFileFromRemoteStorageW)
	{
		uFnDeleteFileFromRemoteStorageW = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteFileFromRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execDeleteFileFromRemoteStorageW_Params DeleteFileFromRemoteStorageW_Params;
	memset(&DeleteFileFromRemoteStorageW_Params, 0, sizeof(DeleteFileFromRemoteStorageW_Params));
	memcpy_s(&DeleteFileFromRemoteStorageW_Params.Filename, sizeof(DeleteFileFromRemoteStorageW_Params.Filename), &Filename, sizeof(Filename));

	uFnDeleteFileFromRemoteStorageW->iNative = 0;
	uFnDeleteFileFromRemoteStorageW->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDeleteFileFromRemoteStorageW, &DeleteFileFromRemoteStorageW_Params, nullptr);
	uFnDeleteFileFromRemoteStorageW->FunctionFlags |= 0x400;
	uFnDeleteFileFromRemoteStorageW->iNative = 48993;

	return DeleteFileFromRemoteStorageW_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBytesFromRemoteStorage
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[49092])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          Data                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadBytesFromRemoteStorage(const class FString& Filename, class TArray<uint8_t>& Data)
{
	static UFunction* uFnReadBytesFromRemoteStorage = nullptr;

	if (!uFnReadBytesFromRemoteStorage)
	{
		uFnReadBytesFromRemoteStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBytesFromRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execReadBytesFromRemoteStorage_Params ReadBytesFromRemoteStorage_Params;
	memset(&ReadBytesFromRemoteStorage_Params, 0, sizeof(ReadBytesFromRemoteStorage_Params));
	memcpy_s(&ReadBytesFromRemoteStorage_Params.Filename, sizeof(ReadBytesFromRemoteStorage_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&ReadBytesFromRemoteStorage_Params.Data, sizeof(ReadBytesFromRemoteStorage_Params.Data), &Data, sizeof(Data));

	uFnReadBytesFromRemoteStorage->iNative = 0;
	uFnReadBytesFromRemoteStorage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadBytesFromRemoteStorage, &ReadBytesFromRemoteStorage_Params, nullptr);
	uFnReadBytesFromRemoteStorage->FunctionFlags |= 0x400;
	uFnReadBytesFromRemoteStorage->iNative = 49092;

	memcpy_s(&Data, sizeof(Data), &ReadBytesFromRemoteStorage_Params.Data, sizeof(ReadBytesFromRemoteStorage_Params.Data));

	return ReadBytesFromRemoteStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStringFromRemoteStorage
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[49099])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Data                           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadStringFromRemoteStorage(const class FString& Filename, class FString& Data)
{
	static UFunction* uFnReadStringFromRemoteStorage = nullptr;

	if (!uFnReadStringFromRemoteStorage)
	{
		uFnReadStringFromRemoteStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStringFromRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execReadStringFromRemoteStorage_Params ReadStringFromRemoteStorage_Params;
	memset(&ReadStringFromRemoteStorage_Params, 0, sizeof(ReadStringFromRemoteStorage_Params));
	memcpy_s(&ReadStringFromRemoteStorage_Params.Filename, sizeof(ReadStringFromRemoteStorage_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&ReadStringFromRemoteStorage_Params.Data, sizeof(ReadStringFromRemoteStorage_Params.Data), &Data, sizeof(Data));

	uFnReadStringFromRemoteStorage->iNative = 0;
	uFnReadStringFromRemoteStorage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadStringFromRemoteStorage, &ReadStringFromRemoteStorage_Params, nullptr);
	uFnReadStringFromRemoteStorage->FunctionFlags |= 0x400;
	uFnReadStringFromRemoteStorage->iNative = 49099;

	memcpy_s(&Data, sizeof(Data), &ReadStringFromRemoteStorage_Params.Data, sizeof(ReadStringFromRemoteStorage_Params.Data));

	return ReadStringFromRemoteStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteBytesToRemoteStorage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[49123])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          Data                           (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteBytesToRemoteStorage(const class FString& Filename, const class TArray<uint8_t>& Data)
{
	static UFunction* uFnWriteBytesToRemoteStorage = nullptr;

	if (!uFnWriteBytesToRemoteStorage)
	{
		uFnWriteBytesToRemoteStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteBytesToRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execWriteBytesToRemoteStorage_Params WriteBytesToRemoteStorage_Params;
	memset(&WriteBytesToRemoteStorage_Params, 0, sizeof(WriteBytesToRemoteStorage_Params));
	memcpy_s(&WriteBytesToRemoteStorage_Params.Filename, sizeof(WriteBytesToRemoteStorage_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteBytesToRemoteStorage_Params.Data, sizeof(WriteBytesToRemoteStorage_Params.Data), &Data, sizeof(Data));

	uFnWriteBytesToRemoteStorage->iNative = 0;
	uFnWriteBytesToRemoteStorage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteBytesToRemoteStorage, &WriteBytesToRemoteStorage_Params, nullptr);
	uFnWriteBytesToRemoteStorage->FunctionFlags |= 0x400;
	uFnWriteBytesToRemoteStorage->iNative = 49123;

	return WriteBytesToRemoteStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteStringToRemoteStorage
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[49126])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Data                           (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteStringToRemoteStorage(const class FString& Filename, const class FString& Data)
{
	static UFunction* uFnWriteStringToRemoteStorage = nullptr;

	if (!uFnWriteStringToRemoteStorage)
	{
		uFnWriteStringToRemoteStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteStringToRemoteStorage");
	}

	UOnlineSubsystemSteamworks_execWriteStringToRemoteStorage_Params WriteStringToRemoteStorage_Params;
	memset(&WriteStringToRemoteStorage_Params, 0, sizeof(WriteStringToRemoteStorage_Params));
	memcpy_s(&WriteStringToRemoteStorage_Params.Filename, sizeof(WriteStringToRemoteStorage_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&WriteStringToRemoteStorage_Params.Data, sizeof(WriteStringToRemoteStorage_Params.Data), &Data, sizeof(Data));

	uFnWriteStringToRemoteStorage->iNative = 0;
	uFnWriteStringToRemoteStorage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteStringToRemoteStorage, &WriteStringToRemoteStorage_Params, nullptr);
	uFnWriteStringToRemoteStorage->FunctionFlags |= 0x400;
	uFnWriteStringToRemoteStorage->iNative = 49126;

	return WriteStringToRemoteStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[49019])
// Parameter Info:
// class TArray<struct FSteamPlayerClanData> Results                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetSteamClanData(class TArray<struct FSteamPlayerClanData>& Results)
{
	static UFunction* uFnGetSteamClanData = nullptr;

	if (!uFnGetSteamClanData)
	{
		uFnGetSteamClanData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData");
	}

	UOnlineSubsystemSteamworks_execGetSteamClanData_Params GetSteamClanData_Params;
	memset(&GetSteamClanData_Params, 0, sizeof(GetSteamClanData_Params));
	memcpy_s(&GetSteamClanData_Params.Results, sizeof(GetSteamClanData_Params.Results), &Results, sizeof(Results));

	uFnGetSteamClanData->iNative = 0;
	uFnGetSteamClanData->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetSteamClanData, &GetSteamClanData_Params, nullptr);
	uFnGetSteamClanData->FunctionFlags |= 0x400;
	uFnGetSteamClanData->iNative = 49019;

	memcpy_s(&Results, sizeof(Results), &GetSteamClanData_Params.Results, sizeof(GetSteamClanData_Params.Results));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[49096])
// Parameter Info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Const | CPF_Parm)
// int32_t                        Size                           (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, int32_t Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate)
{
	static UFunction* uFnReadOnlineAvatar = nullptr;

	if (!uFnReadOnlineAvatar)
	{
		uFnReadOnlineAvatar = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar");
	}

	UOnlineSubsystemSteamworks_execReadOnlineAvatar_Params ReadOnlineAvatar_Params;
	memset(&ReadOnlineAvatar_Params, 0, sizeof(ReadOnlineAvatar_Params));
	memcpy_s(&ReadOnlineAvatar_Params.PlayerNetId, sizeof(ReadOnlineAvatar_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));
	memcpy_s(&ReadOnlineAvatar_Params.Size, sizeof(ReadOnlineAvatar_Params.Size), &Size, sizeof(Size));
	memcpy_s(&ReadOnlineAvatar_Params.ReadOnlineAvatarCompleteDelegate, sizeof(ReadOnlineAvatar_Params.ReadOnlineAvatarCompleteDelegate), &ReadOnlineAvatarCompleteDelegate, sizeof(ReadOnlineAvatarCompleteDelegate));

	uFnReadOnlineAvatar->iNative = 0;
	uFnReadOnlineAvatar->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadOnlineAvatar, &ReadOnlineAvatar_Params, nullptr);
	uFnReadOnlineAvatar->FunctionFlags |= 0x400;
	uFnReadOnlineAvatar->iNative = 49096;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Const | CPF_Parm)
// class UTexture2D*              Avatar                         (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineAvatarComplete(const struct FUniqueNetId& PlayerNetId, class UTexture2D* Avatar)
{
	static UFunction* uFnOnReadOnlineAvatarComplete = nullptr;

	if (!uFnOnReadOnlineAvatarComplete)
	{
		uFnOnReadOnlineAvatarComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadOnlineAvatarComplete_Params OnReadOnlineAvatarComplete_Params;
	memset(&OnReadOnlineAvatarComplete_Params, 0, sizeof(OnReadOnlineAvatarComplete_Params));
	memcpy_s(&OnReadOnlineAvatarComplete_Params.PlayerNetId, sizeof(OnReadOnlineAvatarComplete_Params.PlayerNetId), &PlayerNetId, sizeof(PlayerNetId));
	OnReadOnlineAvatarComplete_Params.Avatar = Avatar;

	this->ProcessEvent(uFnOnReadOnlineAvatarComplete, &OnReadOnlineAvatarComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[25908])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  Title                          (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Description                    (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FUniqueNetId> Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI(uint8_t LocalUserNum, const class FString& Title, const class FString& Description, class TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnShowCustomPlayersUI = nullptr;

	if (!uFnShowCustomPlayersUI)
	{
		uFnShowCustomPlayersUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI");
	}

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Params ShowCustomPlayersUI_Params;
	memset(&ShowCustomPlayersUI_Params, 0, sizeof(ShowCustomPlayersUI_Params));
	memcpy_s(&ShowCustomPlayersUI_Params.LocalUserNum, sizeof(ShowCustomPlayersUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowCustomPlayersUI_Params.Title, sizeof(ShowCustomPlayersUI_Params.Title), &Title, sizeof(Title));
	memcpy_s(&ShowCustomPlayersUI_Params.Description, sizeof(ShowCustomPlayersUI_Params.Description), &Description, sizeof(Description));
	memcpy_s(&ShowCustomPlayersUI_Params.Players, sizeof(ShowCustomPlayersUI_Params.Players), &Players, sizeof(Players));

	uFnShowCustomPlayersUI->iNative = 0;
	uFnShowCustomPlayersUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowCustomPlayersUI, &ShowCustomPlayersUI_Params, nullptr);
	uFnShowCustomPlayersUI->FunctionFlags |= 0x400;
	uFnShowCustomPlayersUI->iNative = 25908;

	memcpy_s(&Players, sizeof(Players), &ShowCustomPlayersUI_Params.Players, sizeof(ShowCustomPlayersUI_Params.Players));

	return ShowCustomPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[20478])
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// class TArray<struct FAchievementDetails> Achievements                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetAchievements(uint8_t LocalUserNum, int32_t TitleId, class TArray<struct FAchievementDetails>& Achievements)
{
	static UFunction* uFnGetAchievements = nullptr;

	if (!uFnGetAchievements)
	{
		uFnGetAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements");
	}

	UOnlineSubsystemSteamworks_execGetAchievements_Params GetAchievements_Params;
	memset(&GetAchievements_Params, 0, sizeof(GetAchievements_Params));
	memcpy_s(&GetAchievements_Params.LocalUserNum, sizeof(GetAchievements_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetAchievements_Params.TitleId, sizeof(GetAchievements_Params.TitleId), &TitleId, sizeof(TitleId));
	memcpy_s(&GetAchievements_Params.Achievements, sizeof(GetAchievements_Params.Achievements), &Achievements, sizeof(Achievements));

	uFnGetAchievements->iNative = 0;
	uFnGetAchievements->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetAchievements, &GetAchievements_Params, nullptr);
	uFnGetAchievements->FunctionFlags |= 0x400;
	uFnGetAchievements->iNative = 20478;

	memcpy_s(&Achievements, sizeof(Achievements), &GetAchievements_Params.Achievements, sizeof(GetAchievements_Params.Achievements));

	return static_cast<EOnlineEnumerationReadState>(GetAchievements_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static UFunction* uFnClearReadAchievementsCompleteDelegate = nullptr;

	if (!uFnClearReadAchievementsCompleteDelegate)
	{
		uFnClearReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Params ClearReadAchievementsCompleteDelegate_Params;
	memset(&ClearReadAchievementsCompleteDelegate_Params, 0, sizeof(ClearReadAchievementsCompleteDelegate_Params));
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadAchievementsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate, sizeof(ClearReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate), &ReadAchievementsCompleteDelegate, sizeof(ReadAchievementsCompleteDelegate));

	this->ProcessEvent(uFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static UFunction* uFnAddReadAchievementsCompleteDelegate = nullptr;

	if (!uFnAddReadAchievementsCompleteDelegate)
	{
		uFnAddReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Params AddReadAchievementsCompleteDelegate_Params;
	memset(&AddReadAchievementsCompleteDelegate_Params, 0, sizeof(AddReadAchievementsCompleteDelegate_Params));
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadAchievementsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate, sizeof(AddReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate), &ReadAchievementsCompleteDelegate, sizeof(ReadAchievementsCompleteDelegate));

	this->ProcessEvent(uFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete(int32_t TitleId)
{
	static UFunction* uFnOnReadAchievementsComplete = nullptr;

	if (!uFnOnReadAchievementsComplete)
	{
		uFnOnReadAchievementsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params OnReadAchievementsComplete_Params;
	memset(&OnReadAchievementsComplete_Params, 0, sizeof(OnReadAchievementsComplete_Params));
	memcpy_s(&OnReadAchievementsComplete_Params.TitleId, sizeof(OnReadAchievementsComplete_Params.TitleId), &TitleId, sizeof(TitleId));

	this->ProcessEvent(uFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[24938])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bShouldReadText                (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bShouldReadImages              (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadAchievements(uint8_t LocalUserNum, int32_t TitleId, bool bShouldReadText, bool bShouldReadImages)
{
	static UFunction* uFnReadAchievements = nullptr;

	if (!uFnReadAchievements)
	{
		uFnReadAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements");
	}

	UOnlineSubsystemSteamworks_execReadAchievements_Params ReadAchievements_Params;
	memset(&ReadAchievements_Params, 0, sizeof(ReadAchievements_Params));
	memcpy_s(&ReadAchievements_Params.LocalUserNum, sizeof(ReadAchievements_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadAchievements_Params.TitleId, sizeof(ReadAchievements_Params.TitleId), &TitleId, sizeof(TitleId));
	ReadAchievements_Params.bShouldReadText = bShouldReadText;
	ReadAchievements_Params.bShouldReadImages = bShouldReadImages;

	uFnReadAchievements->iNative = 0;
	uFnReadAchievements->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadAchievements, &ReadAchievements_Params, nullptr);
	uFnReadAchievements->FunctionFlags |= 0x400;
	uFnReadAchievements->iNative = 24938;

	return ReadAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25929])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowPlayersUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowPlayersUI = nullptr;

	if (!uFnShowPlayersUI)
	{
		uFnShowPlayersUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI");
	}

	UOnlineSubsystemSteamworks_execShowPlayersUI_Params ShowPlayersUI_Params;
	memset(&ShowPlayersUI_Params, 0, sizeof(ShowPlayersUI_Params));
	memcpy_s(&ShowPlayersUI_Params.LocalUserNum, sizeof(ShowPlayersUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowPlayersUI->iNative = 0;
	uFnShowPlayersUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowPlayersUI, &ShowPlayersUI_Params, nullptr);
	uFnShowPlayersUI->FunctionFlags |= 0x400;
	uFnShowPlayersUI->iNative = 25929;

	return ShowPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25915])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnShowFriendsInviteUI = nullptr;

	if (!uFnShowFriendsInviteUI)
	{
		uFnShowFriendsInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI");
	}

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Params ShowFriendsInviteUI_Params;
	memset(&ShowFriendsInviteUI_Params, 0, sizeof(ShowFriendsInviteUI_Params));
	memcpy_s(&ShowFriendsInviteUI_Params.LocalUserNum, sizeof(ShowFriendsInviteUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowFriendsInviteUI_Params.PlayerID, sizeof(ShowFriendsInviteUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnShowFriendsInviteUI->iNative = 0;
	uFnShowFriendsInviteUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowFriendsInviteUI, &ShowFriendsInviteUI_Params, nullptr);
	uFnShowFriendsInviteUI->FunctionFlags |= 0x400;
	uFnShowFriendsInviteUI->iNative = 25915;

	return ShowFriendsInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25916])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFriendsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowFriendsUI = nullptr;

	if (!uFnShowFriendsUI)
	{
		uFnShowFriendsUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI");
	}

	UOnlineSubsystemSteamworks_execShowFriendsUI_Params ShowFriendsUI_Params;
	memset(&ShowFriendsUI_Params, 0, sizeof(ShowFriendsUI_Params));
	memcpy_s(&ShowFriendsUI_Params.LocalUserNum, sizeof(ShowFriendsUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowFriendsUI->iNative = 0;
	uFnShowFriendsUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowFriendsUI, &ShowFriendsUI_Params, nullptr);
	uFnShowFriendsUI->FunctionFlags |= 0x400;
	uFnShowFriendsUI->iNative = 25916;

	return ShowFriendsUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static UFunction* uFnClearProfileDataChangedDelegate = nullptr;

	if (!uFnClearProfileDataChangedDelegate)
	{
		uFnClearProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Params ClearProfileDataChangedDelegate_Params;
	memset(&ClearProfileDataChangedDelegate_Params, 0, sizeof(ClearProfileDataChangedDelegate_Params));
	memcpy_s(&ClearProfileDataChangedDelegate_Params.LocalUserNum, sizeof(ClearProfileDataChangedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, sizeof(ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate), &ProfileDataChangedDelegate, sizeof(ProfileDataChangedDelegate));

	this->ProcessEvent(uFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static UFunction* uFnAddProfileDataChangedDelegate = nullptr;

	if (!uFnAddProfileDataChangedDelegate)
	{
		uFnAddProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Params AddProfileDataChangedDelegate_Params;
	memset(&AddProfileDataChangedDelegate_Params, 0, sizeof(AddProfileDataChangedDelegate_Params));
	memcpy_s(&AddProfileDataChangedDelegate_Params.LocalUserNum, sizeof(AddProfileDataChangedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, sizeof(AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate), &ProfileDataChangedDelegate, sizeof(ProfileDataChangedDelegate));

	this->ProcessEvent(uFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnProfileDataChanged()
{
	static UFunction* uFnOnProfileDataChanged = nullptr;

	if (!uFnOnProfileDataChanged)
	{
		uFnOnProfileDataChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged");
	}

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Params OnProfileDataChanged_Params;
	memset(&OnProfileDataChanged_Params, 0, sizeof(OnProfileDataChanged_Params));

	this->ProcessEvent(uFnOnProfileDataChanged, &OnProfileDataChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[26947])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        PictureId                      (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId)
{
	static UFunction* uFnUnlockGamerPicture = nullptr;

	if (!uFnUnlockGamerPicture)
	{
		uFnUnlockGamerPicture = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture");
	}

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Params UnlockGamerPicture_Params;
	memset(&UnlockGamerPicture_Params, 0, sizeof(UnlockGamerPicture_Params));
	memcpy_s(&UnlockGamerPicture_Params.LocalUserNum, sizeof(UnlockGamerPicture_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnlockGamerPicture_Params.PictureId, sizeof(UnlockGamerPicture_Params.PictureId), &PictureId, sizeof(PictureId));

	uFnUnlockGamerPicture->iNative = 0;
	uFnUnlockGamerPicture->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnlockGamerPicture, &UnlockGamerPicture_Params, nullptr);
	uFnUnlockGamerPicture->FunctionFlags |= 0x400;
	uFnUnlockGamerPicture->iNative = 26947;

	return UnlockGamerPicture_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static UFunction* uFnClearUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnClearUnlockAchievementCompleteDelegate)
	{
		uFnClearUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Params ClearUnlockAchievementCompleteDelegate_Params;
	memset(&ClearUnlockAchievementCompleteDelegate_Params, 0, sizeof(ClearUnlockAchievementCompleteDelegate_Params));
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.LocalUserNum, sizeof(ClearUnlockAchievementCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate, sizeof(ClearUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate), &UnlockAchievementCompleteDelegate, sizeof(UnlockAchievementCompleteDelegate));

	this->ProcessEvent(uFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static UFunction* uFnAddUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnAddUnlockAchievementCompleteDelegate)
	{
		uFnAddUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Params AddUnlockAchievementCompleteDelegate_Params;
	memset(&AddUnlockAchievementCompleteDelegate_Params, 0, sizeof(AddUnlockAchievementCompleteDelegate_Params));
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.LocalUserNum, sizeof(AddUnlockAchievementCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate, sizeof(AddUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate), &UnlockAchievementCompleteDelegate, sizeof(UnlockAchievementCompleteDelegate));

	this->ProcessEvent(uFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnUnlockAchievementComplete = nullptr;

	if (!uFnOnUnlockAchievementComplete)
	{
		uFnOnUnlockAchievementComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete");
	}

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Params OnUnlockAchievementComplete_Params;
	memset(&OnUnlockAchievementComplete_Params, 0, sizeof(OnUnlockAchievementComplete_Params));
	OnUnlockAchievementComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[13835])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AchievementId                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId)
{
	static UFunction* uFnUnlockAchievement = nullptr;

	if (!uFnUnlockAchievement)
	{
		uFnUnlockAchievement = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement");
	}

	UOnlineSubsystemSteamworks_execUnlockAchievement_Params UnlockAchievement_Params;
	memset(&UnlockAchievement_Params, 0, sizeof(UnlockAchievement_Params));
	memcpy_s(&UnlockAchievement_Params.LocalUserNum, sizeof(UnlockAchievement_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&UnlockAchievement_Params.AchievementId, sizeof(UnlockAchievement_Params.AchievementId), &AchievementId, sizeof(AchievementId));

	uFnUnlockAchievement->iNative = 0;
	uFnUnlockAchievement->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnUnlockAchievement, &UnlockAchievement_Params, nullptr);
	uFnUnlockAchievement->FunctionFlags |= 0x400;
	uFnUnlockAchievement->iNative = 13835;

	return UnlockAchievement_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[21375])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        DeviceID                       (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::IsDeviceValid(int32_t DeviceID, int32_t SizeNeeded)
{
	static UFunction* uFnIsDeviceValid = nullptr;

	if (!uFnIsDeviceValid)
	{
		uFnIsDeviceValid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid");
	}

	UOnlineSubsystemSteamworks_execIsDeviceValid_Params IsDeviceValid_Params;
	memset(&IsDeviceValid_Params, 0, sizeof(IsDeviceValid_Params));
	memcpy_s(&IsDeviceValid_Params.DeviceID, sizeof(IsDeviceValid_Params.DeviceID), &DeviceID, sizeof(DeviceID));
	memcpy_s(&IsDeviceValid_Params.SizeNeeded, sizeof(IsDeviceValid_Params.SizeNeeded), &SizeNeeded, sizeof(SizeNeeded));

	uFnIsDeviceValid->iNative = 0;
	uFnIsDeviceValid->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsDeviceValid, &IsDeviceValid_Params, nullptr);
	uFnIsDeviceValid->FunctionFlags |= 0x400;
	uFnIsDeviceValid->iNative = 21375;

	return IsDeviceValid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[20566])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  DeviceName                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UOnlineSubsystemSteamworks::GetDeviceSelectionResults(uint8_t LocalUserNum, class FString& DeviceName)
{
	static UFunction* uFnGetDeviceSelectionResults = nullptr;

	if (!uFnGetDeviceSelectionResults)
	{
		uFnGetDeviceSelectionResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults");
	}

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Params GetDeviceSelectionResults_Params;
	memset(&GetDeviceSelectionResults_Params, 0, sizeof(GetDeviceSelectionResults_Params));
	memcpy_s(&GetDeviceSelectionResults_Params.LocalUserNum, sizeof(GetDeviceSelectionResults_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetDeviceSelectionResults_Params.DeviceName, sizeof(GetDeviceSelectionResults_Params.DeviceName), &DeviceName, sizeof(DeviceName));

	uFnGetDeviceSelectionResults->iNative = 0;
	uFnGetDeviceSelectionResults->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Params, nullptr);
	uFnGetDeviceSelectionResults->FunctionFlags |= 0x400;
	uFnGetDeviceSelectionResults->iNative = 20566;

	memcpy_s(&DeviceName, sizeof(DeviceName), &GetDeviceSelectionResults_Params.DeviceName, sizeof(GetDeviceSelectionResults_Params.DeviceName));

	return GetDeviceSelectionResults_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static UFunction* uFnClearDeviceSelectionDoneDelegate = nullptr;

	if (!uFnClearDeviceSelectionDoneDelegate)
	{
		uFnClearDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Params ClearDeviceSelectionDoneDelegate_Params;
	memset(&ClearDeviceSelectionDoneDelegate_Params, 0, sizeof(ClearDeviceSelectionDoneDelegate_Params));
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.LocalUserNum, sizeof(ClearDeviceSelectionDoneDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate, sizeof(ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static UFunction* uFnAddDeviceSelectionDoneDelegate = nullptr;

	if (!uFnAddDeviceSelectionDoneDelegate)
	{
		uFnAddDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Params AddDeviceSelectionDoneDelegate_Params;
	memset(&AddDeviceSelectionDoneDelegate_Params, 0, sizeof(AddDeviceSelectionDoneDelegate_Params));
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.LocalUserNum, sizeof(AddDeviceSelectionDoneDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.DeviceDelegate, sizeof(AddDeviceSelectionDoneDelegate_Params.DeviceDelegate), &DeviceDelegate, sizeof(DeviceDelegate));

	this->ProcessEvent(uFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnDeviceSelectionComplete = nullptr;

	if (!uFnOnDeviceSelectionComplete)
	{
		uFnOnDeviceSelectionComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete");
	}

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Params OnDeviceSelectionComplete_Params;
	memset(&OnDeviceSelectionComplete_Params, 0, sizeof(OnDeviceSelectionComplete_Params));
	OnDeviceSelectionComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[25912])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_Parm)
// uint32_t                       bManageStorage                 (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, bool bManageStorage)
{
	static UFunction* uFnShowDeviceSelectionUI = nullptr;

	if (!uFnShowDeviceSelectionUI)
	{
		uFnShowDeviceSelectionUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI");
	}

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Params ShowDeviceSelectionUI_Params;
	memset(&ShowDeviceSelectionUI_Params, 0, sizeof(ShowDeviceSelectionUI_Params));
	memcpy_s(&ShowDeviceSelectionUI_Params.LocalUserNum, sizeof(ShowDeviceSelectionUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowDeviceSelectionUI_Params.SizeNeeded, sizeof(ShowDeviceSelectionUI_Params.SizeNeeded), &SizeNeeded, sizeof(SizeNeeded));
	ShowDeviceSelectionUI_Params.bManageStorage = bManageStorage;

	uFnShowDeviceSelectionUI->iNative = 0;
	uFnShowDeviceSelectionUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Params, nullptr);
	uFnShowDeviceSelectionUI->FunctionFlags |= 0x400;
	uFnShowDeviceSelectionUI->iNative = 25912;

	return ShowDeviceSelectionUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25924])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowMembershipMarketplaceUI = nullptr;

	if (!uFnShowMembershipMarketplaceUI)
	{
		uFnShowMembershipMarketplaceUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI");
	}

	UOnlineSubsystemSteamworks_execShowMembershipMarketplaceUI_Params ShowMembershipMarketplaceUI_Params;
	memset(&ShowMembershipMarketplaceUI_Params, 0, sizeof(ShowMembershipMarketplaceUI_Params));
	memcpy_s(&ShowMembershipMarketplaceUI_Params.LocalUserNum, sizeof(ShowMembershipMarketplaceUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowMembershipMarketplaceUI->iNative = 0;
	uFnShowMembershipMarketplaceUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowMembershipMarketplaceUI, &ShowMembershipMarketplaceUI_Params, nullptr);
	uFnShowMembershipMarketplaceUI->FunctionFlags |= 0x400;
	uFnShowMembershipMarketplaceUI->iNative = 25924;

	return ShowMembershipMarketplaceUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[25907])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        CategoryMask                   (CPF_OptionalParm | CPF_Parm)
// int32_t                        OfferId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI(uint8_t LocalUserNum, int32_t CategoryMask, int32_t OfferId)
{
	static UFunction* uFnShowContentMarketplaceUI = nullptr;

	if (!uFnShowContentMarketplaceUI)
	{
		uFnShowContentMarketplaceUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI");
	}

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Params ShowContentMarketplaceUI_Params;
	memset(&ShowContentMarketplaceUI_Params, 0, sizeof(ShowContentMarketplaceUI_Params));
	memcpy_s(&ShowContentMarketplaceUI_Params.LocalUserNum, sizeof(ShowContentMarketplaceUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowContentMarketplaceUI_Params.CategoryMask, sizeof(ShowContentMarketplaceUI_Params.CategoryMask), &CategoryMask, sizeof(CategoryMask));
	memcpy_s(&ShowContentMarketplaceUI_Params.OfferId, sizeof(ShowContentMarketplaceUI_Params.OfferId), &OfferId, sizeof(OfferId));

	uFnShowContentMarketplaceUI->iNative = 0;
	uFnShowContentMarketplaceUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Params, nullptr);
	uFnShowContentMarketplaceUI->FunctionFlags |= 0x400;
	uFnShowContentMarketplaceUI->iNative = 25907;

	return ShowContentMarketplaceUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[25920])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  InviteText                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowInviteUI(uint8_t LocalUserNum, const class FString& InviteText)
{
	static UFunction* uFnShowInviteUI = nullptr;

	if (!uFnShowInviteUI)
	{
		uFnShowInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI");
	}

	UOnlineSubsystemSteamworks_execShowInviteUI_Params ShowInviteUI_Params;
	memset(&ShowInviteUI_Params, 0, sizeof(ShowInviteUI_Params));
	memcpy_s(&ShowInviteUI_Params.LocalUserNum, sizeof(ShowInviteUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowInviteUI_Params.InviteText, sizeof(ShowInviteUI_Params.InviteText), &InviteText, sizeof(InviteText));

	uFnShowInviteUI->iNative = 0;
	uFnShowInviteUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowInviteUI, &ShowInviteUI_Params, nullptr);
	uFnShowInviteUI->FunctionFlags |= 0x400;
	uFnShowInviteUI->iNative = 25920;

	return ShowInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25905])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowAchievementsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowAchievementsUI = nullptr;

	if (!uFnShowAchievementsUI)
	{
		uFnShowAchievementsUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI");
	}

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Params ShowAchievementsUI_Params;
	memset(&ShowAchievementsUI_Params, 0, sizeof(ShowAchievementsUI_Params));
	memcpy_s(&ShowAchievementsUI_Params.LocalUserNum, sizeof(ShowAchievementsUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowAchievementsUI->iNative = 0;
	uFnShowAchievementsUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowAchievementsUI, &ShowAchievementsUI_Params, nullptr);
	uFnShowAchievementsUI->FunctionFlags |= 0x400;
	uFnShowAchievementsUI->iNative = 25905;

	return ShowAchievementsUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25925])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowMessagesUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowMessagesUI = nullptr;

	if (!uFnShowMessagesUI)
	{
		uFnShowMessagesUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI");
	}

	UOnlineSubsystemSteamworks_execShowMessagesUI_Params ShowMessagesUI_Params;
	memset(&ShowMessagesUI_Params, 0, sizeof(ShowMessagesUI_Params));
	memcpy_s(&ShowMessagesUI_Params.LocalUserNum, sizeof(ShowMessagesUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnShowMessagesUI->iNative = 0;
	uFnShowMessagesUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowMessagesUI, &ShowMessagesUI_Params, nullptr);
	uFnShowMessagesUI->FunctionFlags |= 0x400;
	uFnShowMessagesUI->iNative = 25925;

	return ShowMessagesUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25917])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowGamerCardUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnShowGamerCardUI = nullptr;

	if (!uFnShowGamerCardUI)
	{
		uFnShowGamerCardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI");
	}

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Params ShowGamerCardUI_Params;
	memset(&ShowGamerCardUI_Params, 0, sizeof(ShowGamerCardUI_Params));
	memcpy_s(&ShowGamerCardUI_Params.LocalUserNum, sizeof(ShowGamerCardUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowGamerCardUI_Params.PlayerID, sizeof(ShowGamerCardUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnShowGamerCardUI->iNative = 0;
	uFnShowGamerCardUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowGamerCardUI, &ShowGamerCardUI_Params, nullptr);
	uFnShowGamerCardUI->FunctionFlags |= 0x400;
	uFnShowGamerCardUI->iNative = 25917;

	return ShowGamerCardUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25913])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFeedbackUI(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnShowFeedbackUI = nullptr;

	if (!uFnShowFeedbackUI)
	{
		uFnShowFeedbackUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI");
	}

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Params ShowFeedbackUI_Params;
	memset(&ShowFeedbackUI_Params, 0, sizeof(ShowFeedbackUI_Params));
	memcpy_s(&ShowFeedbackUI_Params.LocalUserNum, sizeof(ShowFeedbackUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowFeedbackUI_Params.PlayerID, sizeof(ShowFeedbackUI_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnShowFeedbackUI->iNative = 0;
	uFnShowFeedbackUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowFeedbackUI, &ShowFeedbackUI_Params, nullptr);
	uFnShowFeedbackUI->FunctionFlags |= 0x400;
	uFnShowFeedbackUI->iNative = 25913;

	return ShowFeedbackUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        MessageIndex                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex)
{
	static UFunction* uFnDeleteMessage = nullptr;

	if (!uFnDeleteMessage)
	{
		uFnDeleteMessage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage");
	}

	UOnlineSubsystemSteamworks_execDeleteMessage_Params DeleteMessage_Params;
	memset(&DeleteMessage_Params, 0, sizeof(DeleteMessage_Params));
	memcpy_s(&DeleteMessage_Params.LocalUserNum, sizeof(DeleteMessage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&DeleteMessage_Params.MessageIndex, sizeof(DeleteMessage_Params.MessageIndex), &MessageIndex, sizeof(MessageIndex));

	this->ProcessEvent(uFnDeleteMessage, &DeleteMessage_Params, nullptr);

	return DeleteMessage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnmuteAll(uint8_t LocalUserNum)
{
	static UFunction* uFnUnmuteAll = nullptr;

	if (!uFnUnmuteAll)
	{
		uFnUnmuteAll = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll");
	}

	UOnlineSubsystemSteamworks_execUnmuteAll_Params UnmuteAll_Params;
	memset(&UnmuteAll_Params, 0, sizeof(UnmuteAll_Params));
	memcpy_s(&UnmuteAll_Params.LocalUserNum, sizeof(UnmuteAll_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnUnmuteAll, &UnmuteAll_Params, nullptr);

	return UnmuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bAllowFriends                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::MuteAll(uint8_t LocalUserNum, bool bAllowFriends)
{
	static UFunction* uFnMuteAll = nullptr;

	if (!uFnMuteAll)
	{
		uFnMuteAll = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll");
	}

	UOnlineSubsystemSteamworks_execMuteAll_Params MuteAll_Params;
	memset(&MuteAll_Params, 0, sizeof(MuteAll_Params));
	memcpy_s(&MuteAll_Params.LocalUserNum, sizeof(MuteAll_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	MuteAll_Params.bAllowFriends = bAllowFriends;

	this->ProcessEvent(uFnMuteAll, &MuteAll_Params, nullptr);

	return MuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        bWasCanceled                   (CPF_Parm | CPF_OutParm)

class FString UOnlineSubsystemSteamworks::GetKeyboardInputResults(uint8_t& bWasCanceled)
{
	static UFunction* uFnGetKeyboardInputResults = nullptr;

	if (!uFnGetKeyboardInputResults)
	{
		uFnGetKeyboardInputResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults");
	}

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Params GetKeyboardInputResults_Params;
	memset(&GetKeyboardInputResults_Params, 0, sizeof(GetKeyboardInputResults_Params));
	memcpy_s(&GetKeyboardInputResults_Params.bWasCanceled, sizeof(GetKeyboardInputResults_Params.bWasCanceled), &bWasCanceled, sizeof(bWasCanceled));

	this->ProcessEvent(uFnGetKeyboardInputResults, &GetKeyboardInputResults_Params, nullptr);

	memcpy_s(&bWasCanceled, sizeof(bWasCanceled), &GetKeyboardInputResults_Params.bWasCanceled, sizeof(GetKeyboardInputResults_Params.bWasCanceled));

	return GetKeyboardInputResults_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static UFunction* uFnClearKeyboardInputDoneDelegate = nullptr;

	if (!uFnClearKeyboardInputDoneDelegate)
	{
		uFnClearKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Params ClearKeyboardInputDoneDelegate_Params;
	memset(&ClearKeyboardInputDoneDelegate_Params, 0, sizeof(ClearKeyboardInputDoneDelegate_Params));
	memcpy_s(&ClearKeyboardInputDoneDelegate_Params.InputDelegate, sizeof(ClearKeyboardInputDoneDelegate_Params.InputDelegate), &InputDelegate, sizeof(InputDelegate));

	this->ProcessEvent(uFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static UFunction* uFnAddKeyboardInputDoneDelegate = nullptr;

	if (!uFnAddKeyboardInputDoneDelegate)
	{
		uFnAddKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Params AddKeyboardInputDoneDelegate_Params;
	memset(&AddKeyboardInputDoneDelegate_Params, 0, sizeof(AddKeyboardInputDoneDelegate_Params));
	memcpy_s(&AddKeyboardInputDoneDelegate_Params.InputDelegate, sizeof(AddKeyboardInputDoneDelegate_Params.InputDelegate), &InputDelegate, sizeof(InputDelegate));

	this->ProcessEvent(uFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnKeyboardInputComplete = nullptr;

	if (!uFnOnKeyboardInputComplete)
	{
		uFnOnKeyboardInputComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete");
	}

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params OnKeyboardInputComplete_Params;
	memset(&OnKeyboardInputComplete_Params, 0, sizeof(OnKeyboardInputComplete_Params));
	OnKeyboardInputComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[25921])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  TitleText                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  DescriptionText                (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bIsPassword                    (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bShouldValidate                (CPF_OptionalParm | CPF_Parm)
// class FString                  DefaultText                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        MaxResultLength                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowKeyboardUI(uint8_t LocalUserNum, const class FString& TitleText, const class FString& DescriptionText, bool bIsPassword, bool bShouldValidate, const class FString& DefaultText, int32_t MaxResultLength)
{
	static UFunction* uFnShowKeyboardUI = nullptr;

	if (!uFnShowKeyboardUI)
	{
		uFnShowKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI");
	}

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Params ShowKeyboardUI_Params;
	memset(&ShowKeyboardUI_Params, 0, sizeof(ShowKeyboardUI_Params));
	memcpy_s(&ShowKeyboardUI_Params.LocalUserNum, sizeof(ShowKeyboardUI_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ShowKeyboardUI_Params.TitleText, sizeof(ShowKeyboardUI_Params.TitleText), &TitleText, sizeof(TitleText));
	memcpy_s(&ShowKeyboardUI_Params.DescriptionText, sizeof(ShowKeyboardUI_Params.DescriptionText), &DescriptionText, sizeof(DescriptionText));
	ShowKeyboardUI_Params.bIsPassword = bIsPassword;
	ShowKeyboardUI_Params.bShouldValidate = bShouldValidate;
	memcpy_s(&ShowKeyboardUI_Params.DefaultText, sizeof(ShowKeyboardUI_Params.DefaultText), &DefaultText, sizeof(DefaultText));
	memcpy_s(&ShowKeyboardUI_Params.MaxResultLength, sizeof(ShowKeyboardUI_Params.MaxResultLength), &MaxResultLength, sizeof(MaxResultLength));

	uFnShowKeyboardUI->iNative = 0;
	uFnShowKeyboardUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowKeyboardUI, &ShowKeyboardUI_Params, nullptr);
	uFnShowKeyboardUI->FunctionFlags |= 0x400;
	uFnShowKeyboardUI->iNative = 25921;

	return ShowKeyboardUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[25726])
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        StatusId                       (CPF_Parm)
// class TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// class TArray<struct FSettingsProperty> Properties                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, class TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, class TArray<struct FSettingsProperty>& Properties)
{
	static UFunction* uFnSetOnlineStatus = nullptr;

	if (!uFnSetOnlineStatus)
	{
		uFnSetOnlineStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus");
	}

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Params SetOnlineStatus_Params;
	memset(&SetOnlineStatus_Params, 0, sizeof(SetOnlineStatus_Params));
	memcpy_s(&SetOnlineStatus_Params.LocalUserNum, sizeof(SetOnlineStatus_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&SetOnlineStatus_Params.StatusId, sizeof(SetOnlineStatus_Params.StatusId), &StatusId, sizeof(StatusId));
	memcpy_s(&SetOnlineStatus_Params.LocalizedStringSettings, sizeof(SetOnlineStatus_Params.LocalizedStringSettings), &LocalizedStringSettings, sizeof(LocalizedStringSettings));
	memcpy_s(&SetOnlineStatus_Params.Properties, sizeof(SetOnlineStatus_Params.Properties), &Properties, sizeof(Properties));

	uFnSetOnlineStatus->iNative = 0;
	uFnSetOnlineStatus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetOnlineStatus, &SetOnlineStatus_Params, nullptr);
	uFnSetOnlineStatus->FunctionFlags |= 0x400;
	uFnSetOnlineStatus->iNative = 25726;

	memcpy_s(&LocalizedStringSettings, sizeof(LocalizedStringSettings), &SetOnlineStatus_Params.LocalizedStringSettings, sizeof(SetOnlineStatus_Params.LocalizedStringSettings));
	memcpy_s(&Properties, sizeof(Properties), &SetOnlineStatus_Params.Properties, sizeof(SetOnlineStatus_Params.Properties));
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// [0x00420000] (FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class TArray<class FString>    Accounts                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetLocalAccountNames(class TArray<class FString>& Accounts)
{
	static UFunction* uFnGetLocalAccountNames = nullptr;

	if (!uFnGetLocalAccountNames)
	{
		uFnGetLocalAccountNames = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames");
	}

	UOnlineSubsystemSteamworks_execGetLocalAccountNames_Params GetLocalAccountNames_Params;
	memset(&GetLocalAccountNames_Params, 0, sizeof(GetLocalAccountNames_Params));
	memcpy_s(&GetLocalAccountNames_Params.Accounts, sizeof(GetLocalAccountNames_Params.Accounts), &Accounts, sizeof(Accounts));

	this->ProcessEvent(uFnGetLocalAccountNames, &GetLocalAccountNames_Params, nullptr);

	memcpy_s(&Accounts, sizeof(Accounts), &GetLocalAccountNames_Params.Accounts, sizeof(GetLocalAccountNames_Params.Accounts));

	return GetLocalAccountNames_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserName                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::DeleteLocalAccount(const class FString& UserName, const class FString& Password)
{
	static UFunction* uFnDeleteLocalAccount = nullptr;

	if (!uFnDeleteLocalAccount)
	{
		uFnDeleteLocalAccount = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount");
	}

	UOnlineSubsystemSteamworks_execDeleteLocalAccount_Params DeleteLocalAccount_Params;
	memset(&DeleteLocalAccount_Params, 0, sizeof(DeleteLocalAccount_Params));
	memcpy_s(&DeleteLocalAccount_Params.UserName, sizeof(DeleteLocalAccount_Params.UserName), &UserName, sizeof(UserName));
	memcpy_s(&DeleteLocalAccount_Params.Password, sizeof(DeleteLocalAccount_Params.Password), &Password, sizeof(Password));

	this->ProcessEvent(uFnDeleteLocalAccount, &DeleteLocalAccount_Params, nullptr);

	return DeleteLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  NewUserName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  OldUserName                    (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RenameLocalAccount(const class FString& NewUserName, const class FString& OldUserName, const class FString& Password)
{
	static UFunction* uFnRenameLocalAccount = nullptr;

	if (!uFnRenameLocalAccount)
	{
		uFnRenameLocalAccount = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount");
	}

	UOnlineSubsystemSteamworks_execRenameLocalAccount_Params RenameLocalAccount_Params;
	memset(&RenameLocalAccount_Params, 0, sizeof(RenameLocalAccount_Params));
	memcpy_s(&RenameLocalAccount_Params.NewUserName, sizeof(RenameLocalAccount_Params.NewUserName), &NewUserName, sizeof(NewUserName));
	memcpy_s(&RenameLocalAccount_Params.OldUserName, sizeof(RenameLocalAccount_Params.OldUserName), &OldUserName, sizeof(OldUserName));
	memcpy_s(&RenameLocalAccount_Params.Password, sizeof(RenameLocalAccount_Params.Password), &Password, sizeof(Password));

	this->ProcessEvent(uFnRenameLocalAccount, &RenameLocalAccount_Params, nullptr);

	return RenameLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserName                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::CreateLocalAccount(const class FString& UserName, const class FString& Password)
{
	static UFunction* uFnCreateLocalAccount = nullptr;

	if (!uFnCreateLocalAccount)
	{
		uFnCreateLocalAccount = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount");
	}

	UOnlineSubsystemSteamworks_execCreateLocalAccount_Params CreateLocalAccount_Params;
	memset(&CreateLocalAccount_Params, 0, sizeof(CreateLocalAccount_Params));
	memcpy_s(&CreateLocalAccount_Params.UserName, sizeof(CreateLocalAccount_Params.UserName), &UserName, sizeof(UserName));
	memcpy_s(&CreateLocalAccount_Params.Password, sizeof(CreateLocalAccount_Params.Password), &Password, sizeof(Password));

	this->ProcessEvent(uFnCreateLocalAccount, &CreateLocalAccount_Params, nullptr);

	return CreateLocalAccount_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static UFunction* uFnClearCreateOnlineAccountCompletedDelegate = nullptr;

	if (!uFnClearCreateOnlineAccountCompletedDelegate)
	{
		uFnClearCreateOnlineAccountCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearCreateOnlineAccountCompletedDelegate_Params ClearCreateOnlineAccountCompletedDelegate_Params;
	memset(&ClearCreateOnlineAccountCompletedDelegate_Params, 0, sizeof(ClearCreateOnlineAccountCompletedDelegate_Params));
	memcpy_s(&ClearCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate, sizeof(ClearCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate), &AccountCreateDelegate, sizeof(AccountCreateDelegate));

	this->ProcessEvent(uFnClearCreateOnlineAccountCompletedDelegate, &ClearCreateOnlineAccountCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         AccountCreateDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static UFunction* uFnAddCreateOnlineAccountCompletedDelegate = nullptr;

	if (!uFnAddCreateOnlineAccountCompletedDelegate)
	{
		uFnAddCreateOnlineAccountCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddCreateOnlineAccountCompletedDelegate_Params AddCreateOnlineAccountCompletedDelegate_Params;
	memset(&AddCreateOnlineAccountCompletedDelegate_Params, 0, sizeof(AddCreateOnlineAccountCompletedDelegate_Params));
	memcpy_s(&AddCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate, sizeof(AddCreateOnlineAccountCompletedDelegate_Params.AccountCreateDelegate), &AccountCreateDelegate, sizeof(AccountCreateDelegate));

	this->ProcessEvent(uFnAddCreateOnlineAccountCompletedDelegate, &AddCreateOnlineAccountCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EOnlineAccountCreateStatus     ErrorStatus                    (CPF_Parm)

void UOnlineSubsystemSteamworks::OnCreateOnlineAccountCompleted(EOnlineAccountCreateStatus ErrorStatus)
{
	static UFunction* uFnOnCreateOnlineAccountCompleted = nullptr;

	if (!uFnOnCreateOnlineAccountCompleted)
	{
		uFnOnCreateOnlineAccountCompleted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted");
	}

	UOnlineSubsystemSteamworks_execOnCreateOnlineAccountCompleted_Params OnCreateOnlineAccountCompleted_Params;
	memset(&OnCreateOnlineAccountCompleted_Params, 0, sizeof(OnCreateOnlineAccountCompleted_Params));
	memcpy_s(&OnCreateOnlineAccountCompleted_Params.ErrorStatus, sizeof(OnCreateOnlineAccountCompleted_Params.ErrorStatus), &ErrorStatus, sizeof(ErrorStatus));

	this->ProcessEvent(uFnOnCreateOnlineAccountCompleted, &OnCreateOnlineAccountCompleted_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[18448])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  UserName                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_Parm | CPF_NeedCtorLink)
// class FString                  EmailAddress                   (CPF_Parm | CPF_NeedCtorLink)
// class FString                  ProductKey                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::CreateOnlineAccount(const class FString& UserName, const class FString& Password, const class FString& EmailAddress, const class FString& ProductKey)
{
	static UFunction* uFnCreateOnlineAccount = nullptr;

	if (!uFnCreateOnlineAccount)
	{
		uFnCreateOnlineAccount = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount");
	}

	UOnlineSubsystemSteamworks_execCreateOnlineAccount_Params CreateOnlineAccount_Params;
	memset(&CreateOnlineAccount_Params, 0, sizeof(CreateOnlineAccount_Params));
	memcpy_s(&CreateOnlineAccount_Params.UserName, sizeof(CreateOnlineAccount_Params.UserName), &UserName, sizeof(UserName));
	memcpy_s(&CreateOnlineAccount_Params.Password, sizeof(CreateOnlineAccount_Params.Password), &Password, sizeof(Password));
	memcpy_s(&CreateOnlineAccount_Params.EmailAddress, sizeof(CreateOnlineAccount_Params.EmailAddress), &EmailAddress, sizeof(EmailAddress));
	memcpy_s(&CreateOnlineAccount_Params.ProductKey, sizeof(CreateOnlineAccount_Params.ProductKey), &ProductKey, sizeof(ProductKey));

	uFnCreateOnlineAccount->iNative = 0;
	uFnCreateOnlineAccount->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCreateOnlineAccount, &CreateOnlineAccount_Params, nullptr);
	uFnCreateOnlineAccount->FunctionFlags |= 0x400;
	uFnCreateOnlineAccount->iNative = 18448;

	return CreateOnlineAccount_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetTitleFileState(const class FString& Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState");
	}

	UOnlineSubsystemSteamworks_execGetTitleFileState_Params GetTitleFileState_Params;
	memset(&GetTitleFileState_Params, 0, sizeof(GetTitleFileState_Params));
	memcpy_s(&GetTitleFileState_Params.Filename, sizeof(GetTitleFileState_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return static_cast<EOnlineEnumerationReadState>(GetTitleFileState_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[20790])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)
// class TArray<uint8_t>          FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents");
	}

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memset(&GetTitleFileContents_Params, 0, sizeof(GetTitleFileContents_Params));
	memcpy_s(&GetTitleFileContents_Params.Filename, sizeof(GetTitleFileContents_Params.Filename), &Filename, sizeof(Filename));
	memcpy_s(&GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents), &FileContents, sizeof(FileContents));

	uFnGetTitleFileContents->iNative = 0;
	uFnGetTitleFileContents->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);
	uFnGetTitleFileContents->FunctionFlags |= 0x400;
	uFnGetTitleFileContents->iNative = 20790;

	memcpy_s(&FileContents, sizeof(FileContents), &GetTitleFileContents_Params.FileContents, sizeof(GetTitleFileContents_Params.FileContents));

	return GetTitleFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnClearReadTitleFileCompleteDelegate = nullptr;

	if (!uFnClearReadTitleFileCompleteDelegate)
	{
		uFnClearReadTitleFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Params ClearReadTitleFileCompleteDelegate_Params;
	memset(&ClearReadTitleFileCompleteDelegate_Params, 0, sizeof(ClearReadTitleFileCompleteDelegate_Params));
	memcpy_s(&ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, sizeof(ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate), &ReadTitleFileCompleteDelegate, sizeof(ReadTitleFileCompleteDelegate));

	this->ProcessEvent(uFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnAddReadTitleFileCompleteDelegate = nullptr;

	if (!uFnAddReadTitleFileCompleteDelegate)
	{
		uFnAddReadTitleFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Params AddReadTitleFileCompleteDelegate_Params;
	memset(&AddReadTitleFileCompleteDelegate_Params, 0, sizeof(AddReadTitleFileCompleteDelegate_Params));
	memcpy_s(&AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, sizeof(AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate), &ReadTitleFileCompleteDelegate, sizeof(ReadTitleFileCompleteDelegate));

	this->ProcessEvent(uFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[24964])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  FileToRead                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadTitleFile(const class FString& FileToRead)
{
	static UFunction* uFnReadTitleFile = nullptr;

	if (!uFnReadTitleFile)
	{
		uFnReadTitleFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile");
	}

	UOnlineSubsystemSteamworks_execReadTitleFile_Params ReadTitleFile_Params;
	memset(&ReadTitleFile_Params, 0, sizeof(ReadTitleFile_Params));
	memcpy_s(&ReadTitleFile_Params.FileToRead, sizeof(ReadTitleFile_Params.FileToRead), &FileToRead, sizeof(FileToRead));

	uFnReadTitleFile->iNative = 0;
	uFnReadTitleFile->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadTitleFile, &ReadTitleFile_Params, nullptr);
	uFnReadTitleFile->FunctionFlags |= 0x400;
	uFnReadTitleFile->iNative = 24964;

	return ReadTitleFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)
// class FString                  Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete(bool bWasSuccessful, const class FString& Filename)
{
	static UFunction* uFnOnReadTitleFileComplete = nullptr;

	if (!uFnOnReadTitleFileComplete)
	{
		uFnOnReadTitleFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Params OnReadTitleFileComplete_Params;
	memset(&OnReadTitleFileComplete_Params, 0, sizeof(OnReadTitleFileComplete_Params));
	OnReadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Params.Filename, sizeof(OnReadTitleFileComplete_Params.Filename), &Filename, sizeof(Filename));

	this->ProcessEvent(uFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static UFunction* uFnClearStorageDeviceChangeDelegate = nullptr;

	if (!uFnClearStorageDeviceChangeDelegate)
	{
		uFnClearStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Params ClearStorageDeviceChangeDelegate_Params;
	memset(&ClearStorageDeviceChangeDelegate_Params, 0, sizeof(ClearStorageDeviceChangeDelegate_Params));
	memcpy_s(&ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, sizeof(ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate), &StorageDeviceChangeDelegate, sizeof(StorageDeviceChangeDelegate));

	this->ProcessEvent(uFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static UFunction* uFnAddStorageDeviceChangeDelegate = nullptr;

	if (!uFnAddStorageDeviceChangeDelegate)
	{
		uFnAddStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Params AddStorageDeviceChangeDelegate_Params;
	memset(&AddStorageDeviceChangeDelegate_Params, 0, sizeof(AddStorageDeviceChangeDelegate_Params));
	memcpy_s(&AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, sizeof(AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate), &StorageDeviceChangeDelegate, sizeof(StorageDeviceChangeDelegate));

	this->ProcessEvent(uFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange()
{
	static UFunction* uFnOnStorageDeviceChange = nullptr;

	if (!uFnOnStorageDeviceChange)
	{
		uFnOnStorageDeviceChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange");
	}

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Params OnStorageDeviceChange_Params;
	memset(&OnStorageDeviceChange_Params, 0, sizeof(OnStorageDeviceChange_Params));

	this->ProcessEvent(uFnOnStorageDeviceChange, &OnStorageDeviceChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UOnlineSubsystemSteamworks::GetLocale()
{
	static UFunction* uFnGetLocale = nullptr;

	if (!uFnGetLocale)
	{
		uFnGetLocale = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale");
	}

	UOnlineSubsystemSteamworks_execGetLocale_Params GetLocale_Params;
	memset(&GetLocale_Params, 0, sizeof(GetLocale_Params));

	this->ProcessEvent(uFnGetLocale, &GetLocale_Params, nullptr);

	return GetLocale_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[13559])
// Parameter Info:
// ENATType                       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

ENATType UOnlineSubsystemSteamworks::GetNATType()
{
	static UFunction* uFnGetNATType = nullptr;

	if (!uFnGetNATType)
	{
		uFnGetNATType = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType");
	}

	UOnlineSubsystemSteamworks_execGetNATType_Params GetNATType_Params;
	memset(&GetNATType_Params, 0, sizeof(GetNATType_Params));

	uFnGetNATType->iNative = 0;
	uFnGetNATType->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetNATType, &GetNATType_Params, nullptr);
	uFnGetNATType->FunctionFlags |= 0x400;
	uFnGetNATType->iNative = 13559;

	return static_cast<ENATType>(GetNATType_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static UFunction* uFnClearConnectionStatusChangeDelegate = nullptr;

	if (!uFnClearConnectionStatusChangeDelegate)
	{
		uFnClearConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Params ClearConnectionStatusChangeDelegate_Params;
	memset(&ClearConnectionStatusChangeDelegate_Params, 0, sizeof(ClearConnectionStatusChangeDelegate_Params));
	memcpy_s(&ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, sizeof(ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate), &ConnectionStatusDelegate, sizeof(ConnectionStatusDelegate));

	this->ProcessEvent(uFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static UFunction* uFnAddConnectionStatusChangeDelegate = nullptr;

	if (!uFnAddConnectionStatusChangeDelegate)
	{
		uFnAddConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Params AddConnectionStatusChangeDelegate_Params;
	memset(&AddConnectionStatusChangeDelegate_Params, 0, sizeof(AddConnectionStatusChangeDelegate_Params));
	memcpy_s(&AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, sizeof(AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate), &ConnectionStatusDelegate, sizeof(ConnectionStatusDelegate));

	this->ProcessEvent(uFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// EOnlineServerConnectionStatus  ConnectionStatus               (CPF_Parm)

void UOnlineSubsystemSteamworks::OnConnectionStatusChange(EOnlineServerConnectionStatus ConnectionStatus)
{
	static UFunction* uFnOnConnectionStatusChange = nullptr;

	if (!uFnOnConnectionStatusChange)
	{
		uFnOnConnectionStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Params OnConnectionStatusChange_Params;
	memset(&OnConnectionStatusChange_Params, 0, sizeof(OnConnectionStatusChange_Params));
	memcpy_s(&OnConnectionStatusChange_Params.ConnectionStatus, sizeof(OnConnectionStatusChange_Params.ConnectionStatus), &ConnectionStatus, sizeof(ConnectionStatus));

	this->ProcessEvent(uFnOnConnectionStatusChange, &OnConnectionStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21368])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsControllerConnected(int32_t ControllerId)
{
	static UFunction* uFnIsControllerConnected = nullptr;

	if (!uFnIsControllerConnected)
	{
		uFnIsControllerConnected = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected");
	}

	UOnlineSubsystemSteamworks_execIsControllerConnected_Params IsControllerConnected_Params;
	memset(&IsControllerConnected_Params, 0, sizeof(IsControllerConnected_Params));
	memcpy_s(&IsControllerConnected_Params.ControllerId, sizeof(IsControllerConnected_Params.ControllerId), &ControllerId, sizeof(ControllerId));

	uFnIsControllerConnected->iNative = 0;
	uFnIsControllerConnected->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsControllerConnected, &IsControllerConnected_Params, nullptr);
	uFnIsControllerConnected->FunctionFlags |= 0x400;
	uFnIsControllerConnected->iNative = 21368;

	return IsControllerConnected_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static UFunction* uFnClearControllerChangeDelegate = nullptr;

	if (!uFnClearControllerChangeDelegate)
	{
		uFnClearControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Params ClearControllerChangeDelegate_Params;
	memset(&ClearControllerChangeDelegate_Params, 0, sizeof(ClearControllerChangeDelegate_Params));
	memcpy_s(&ClearControllerChangeDelegate_Params.ControllerChangeDelegate, sizeof(ClearControllerChangeDelegate_Params.ControllerChangeDelegate), &ControllerChangeDelegate, sizeof(ControllerChangeDelegate));

	this->ProcessEvent(uFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static UFunction* uFnAddControllerChangeDelegate = nullptr;

	if (!uFnAddControllerChangeDelegate)
	{
		uFnAddControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Params AddControllerChangeDelegate_Params;
	memset(&AddControllerChangeDelegate_Params, 0, sizeof(AddControllerChangeDelegate_Params));
	memcpy_s(&AddControllerChangeDelegate_Params.ControllerChangeDelegate, sizeof(AddControllerChangeDelegate_Params.ControllerChangeDelegate), &ControllerChangeDelegate, sizeof(ControllerChangeDelegate));

	this->ProcessEvent(uFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ControllerId                   (CPF_Parm)
// uint32_t                       bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerChange(int32_t ControllerId, bool bIsConnected)
{
	static UFunction* uFnOnControllerChange = nullptr;

	if (!uFnOnControllerChange)
	{
		uFnOnControllerChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange");
	}

	UOnlineSubsystemSteamworks_execOnControllerChange_Params OnControllerChange_Params;
	memset(&OnControllerChange_Params, 0, sizeof(OnControllerChange_Params));
	memcpy_s(&OnControllerChange_Params.ControllerId, sizeof(OnControllerChange_Params.ControllerId), &ControllerId, sizeof(ControllerId));
	OnControllerChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnControllerChange, &OnControllerChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[25722])
// Parameter Info:
// ENetworkNotificationPosition   NewPos                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition(ENetworkNotificationPosition NewPos)
{
	static UFunction* uFnSetNetworkNotificationPosition = nullptr;

	if (!uFnSetNetworkNotificationPosition)
	{
		uFnSetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition");
	}

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Params SetNetworkNotificationPosition_Params;
	memset(&SetNetworkNotificationPosition_Params, 0, sizeof(SetNetworkNotificationPosition_Params));
	memcpy_s(&SetNetworkNotificationPosition_Params.NewPos, sizeof(SetNetworkNotificationPosition_Params.NewPos), &NewPos, sizeof(NewPos));

	uFnSetNetworkNotificationPosition->iNative = 0;
	uFnSetNetworkNotificationPosition->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Params, nullptr);
	uFnSetNetworkNotificationPosition->FunctionFlags |= 0x400;
	uFnSetNetworkNotificationPosition->iNative = 25722;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// ENetworkNotificationPosition   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

ENetworkNotificationPosition UOnlineSubsystemSteamworks::GetNetworkNotificationPosition()
{
	static UFunction* uFnGetNetworkNotificationPosition = nullptr;

	if (!uFnGetNetworkNotificationPosition)
	{
		uFnGetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition");
	}

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Params GetNetworkNotificationPosition_Params;
	memset(&GetNetworkNotificationPosition_Params, 0, sizeof(GetNetworkNotificationPosition_Params));

	this->ProcessEvent(uFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Params, nullptr);

	return static_cast<ENetworkNotificationPosition>(GetNetworkNotificationPosition_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static UFunction* uFnClearExternalUIChangeDelegate = nullptr;

	if (!uFnClearExternalUIChangeDelegate)
	{
		uFnClearExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Params ClearExternalUIChangeDelegate_Params;
	memset(&ClearExternalUIChangeDelegate_Params, 0, sizeof(ClearExternalUIChangeDelegate_Params));
	memcpy_s(&ClearExternalUIChangeDelegate_Params.ExternalUIDelegate, sizeof(ClearExternalUIChangeDelegate_Params.ExternalUIDelegate), &ExternalUIDelegate, sizeof(ExternalUIDelegate));

	this->ProcessEvent(uFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static UFunction* uFnAddExternalUIChangeDelegate = nullptr;

	if (!uFnAddExternalUIChangeDelegate)
	{
		uFnAddExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Params AddExternalUIChangeDelegate_Params;
	memset(&AddExternalUIChangeDelegate_Params, 0, sizeof(AddExternalUIChangeDelegate_Params));
	memcpy_s(&AddExternalUIChangeDelegate_Params.ExternalUIDelegate, sizeof(AddExternalUIChangeDelegate_Params.ExternalUIDelegate), &ExternalUIDelegate, sizeof(ExternalUIDelegate));

	this->ProcessEvent(uFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bIsOpening                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnExternalUIChange(bool bIsOpening)
{
	static UFunction* uFnOnExternalUIChange = nullptr;

	if (!uFnOnExternalUIChange)
	{
		uFnOnExternalUIChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange");
	}

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Params OnExternalUIChange_Params;
	memset(&OnExternalUIChange_Params, 0, sizeof(OnExternalUIChange_Params));
	OnExternalUIChange_Params.bIsOpening = bIsOpening;

	this->ProcessEvent(uFnOnExternalUIChange, &OnExternalUIChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static UFunction* uFnClearLinkStatusChangeDelegate = nullptr;

	if (!uFnClearLinkStatusChangeDelegate)
	{
		uFnClearLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Params ClearLinkStatusChangeDelegate_Params;
	memset(&ClearLinkStatusChangeDelegate_Params, 0, sizeof(ClearLinkStatusChangeDelegate_Params));
	memcpy_s(&ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate, sizeof(ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate), &LinkStatusDelegate, sizeof(LinkStatusDelegate));

	this->ProcessEvent(uFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static UFunction* uFnAddLinkStatusChangeDelegate = nullptr;

	if (!uFnAddLinkStatusChangeDelegate)
	{
		uFnAddLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Params AddLinkStatusChangeDelegate_Params;
	memset(&AddLinkStatusChangeDelegate_Params, 0, sizeof(AddLinkStatusChangeDelegate_Params));
	memcpy_s(&AddLinkStatusChangeDelegate_Params.LinkStatusDelegate, sizeof(AddLinkStatusChangeDelegate_Params.LinkStatusDelegate), &LinkStatusDelegate, sizeof(LinkStatusDelegate));

	this->ProcessEvent(uFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLinkStatusChange(bool bIsConnected)
{
	static UFunction* uFnOnLinkStatusChange = nullptr;

	if (!uFnOnLinkStatusChange)
	{
		uFnOnLinkStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params OnLinkStatusChange_Params;
	memset(&OnLinkStatusChange_Params, 0, sizeof(OnLinkStatusChange_Params));
	OnLinkStatusChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnLinkStatusChange, &OnLinkStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[13575])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HasLinkConnection()
{
	static UFunction* uFnHasLinkConnection = nullptr;

	if (!uFnHasLinkConnection)
	{
		uFnHasLinkConnection = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection");
	}

	UOnlineSubsystemSteamworks_execHasLinkConnection_Params HasLinkConnection_Params;
	memset(&HasLinkConnection_Params, 0, sizeof(HasLinkConnection_Params));

	uFnHasLinkConnection->iNative = 0;
	uFnHasLinkConnection->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnHasLinkConnection, &HasLinkConnection_Params, nullptr);
	uFnHasLinkConnection->FunctionFlags |= 0x400;
	uFnHasLinkConnection->iNative = 13575;

	return HasLinkConnection_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

class FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerNicknameFromIndex = nullptr;

	if (!uFnGetPlayerNicknameFromIndex)
	{
		uFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex");
	}

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Params GetPlayerNicknameFromIndex_Params;
	memset(&GetPlayerNicknameFromIndex_Params, 0, sizeof(GetPlayerNicknameFromIndex_Params));
	memcpy_s(&GetPlayerNicknameFromIndex_Params.UserIndex, sizeof(GetPlayerNicknameFromIndex_Params.UserIndex), &UserIndex, sizeof(UserIndex));

	this->ProcessEvent(uFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Params, nullptr);

	return GetPlayerNicknameFromIndex_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[20591])
// Parameter Info:
// EOnlineEnumerationReadState    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)
// class TArray<struct FOnlineFriend> Friends                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

EOnlineEnumerationReadState UOnlineSubsystemSteamworks::GetFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt, class TArray<struct FOnlineFriend>& Friends)
{
	static UFunction* uFnGetFriendsList = nullptr;

	if (!uFnGetFriendsList)
	{
		uFnGetFriendsList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList");
	}

	UOnlineSubsystemSteamworks_execGetFriendsList_Params GetFriendsList_Params;
	memset(&GetFriendsList_Params, 0, sizeof(GetFriendsList_Params));
	memcpy_s(&GetFriendsList_Params.LocalUserNum, sizeof(GetFriendsList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetFriendsList_Params.Count, sizeof(GetFriendsList_Params.Count), &Count, sizeof(Count));
	memcpy_s(&GetFriendsList_Params.StartingAt, sizeof(GetFriendsList_Params.StartingAt), &StartingAt, sizeof(StartingAt));
	memcpy_s(&GetFriendsList_Params.Friends, sizeof(GetFriendsList_Params.Friends), &Friends, sizeof(Friends));

	uFnGetFriendsList->iNative = 0;
	uFnGetFriendsList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetFriendsList, &GetFriendsList_Params, nullptr);
	uFnGetFriendsList->FunctionFlags |= 0x400;
	uFnGetFriendsList->iNative = 20591;

	memcpy_s(&Friends, sizeof(Friends), &GetFriendsList_Params.Friends, sizeof(GetFriendsList_Params.Friends));

	return static_cast<EOnlineEnumerationReadState>(GetFriendsList_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static UFunction* uFnClearReadFriendsCompleteDelegate = nullptr;

	if (!uFnClearReadFriendsCompleteDelegate)
	{
		uFnClearReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Params ClearReadFriendsCompleteDelegate_Params;
	memset(&ClearReadFriendsCompleteDelegate_Params, 0, sizeof(ClearReadFriendsCompleteDelegate_Params));
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadFriendsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, sizeof(ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate), &ReadFriendsCompleteDelegate, sizeof(ReadFriendsCompleteDelegate));

	this->ProcessEvent(uFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static UFunction* uFnAddReadFriendsCompleteDelegate = nullptr;

	if (!uFnAddReadFriendsCompleteDelegate)
	{
		uFnAddReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Params AddReadFriendsCompleteDelegate_Params;
	memset(&AddReadFriendsCompleteDelegate_Params, 0, sizeof(AddReadFriendsCompleteDelegate_Params));
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadFriendsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, sizeof(AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate), &ReadFriendsCompleteDelegate, sizeof(ReadFriendsCompleteDelegate));

	this->ProcessEvent(uFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadFriendsComplete(bool bWasSuccessful)
{
	static UFunction* uFnOnReadFriendsComplete = nullptr;

	if (!uFnOnReadFriendsComplete)
	{
		uFnOnReadFriendsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params OnReadFriendsComplete_Params;
	memset(&OnReadFriendsComplete_Params, 0, sizeof(OnReadFriendsComplete_Params));
	OnReadFriendsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadFriendsComplete, &OnReadFriendsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[24949])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt)
{
	static UFunction* uFnReadFriendsList = nullptr;

	if (!uFnReadFriendsList)
	{
		uFnReadFriendsList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList");
	}

	UOnlineSubsystemSteamworks_execReadFriendsList_Params ReadFriendsList_Params;
	memset(&ReadFriendsList_Params, 0, sizeof(ReadFriendsList_Params));
	memcpy_s(&ReadFriendsList_Params.LocalUserNum, sizeof(ReadFriendsList_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadFriendsList_Params.Count, sizeof(ReadFriendsList_Params.Count), &Count, sizeof(Count));
	memcpy_s(&ReadFriendsList_Params.StartingAt, sizeof(ReadFriendsList_Params.StartingAt), &StartingAt, sizeof(StartingAt));

	uFnReadFriendsList->iNative = 0;
	uFnReadFriendsList->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadFriendsList, &ReadFriendsList_Params, nullptr);
	uFnReadFriendsList->FunctionFlags |= 0x400;
	uFnReadFriendsList->iNative = 24949;

	return ReadFriendsList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static UFunction* uFnClearWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearWritePlayerStorageCompleteDelegate)
	{
		uFnClearWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Params ClearWritePlayerStorageCompleteDelegate_Params;
	memset(&ClearWritePlayerStorageCompleteDelegate_Params, 0, sizeof(ClearWritePlayerStorageCompleteDelegate_Params));
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(ClearWritePlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate, sizeof(ClearWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate), &WritePlayerStorageCompleteDelegate, sizeof(WritePlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static UFunction* uFnAddWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddWritePlayerStorageCompleteDelegate)
	{
		uFnAddWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Params AddWritePlayerStorageCompleteDelegate_Params;
	memset(&AddWritePlayerStorageCompleteDelegate_Params, 0, sizeof(AddWritePlayerStorageCompleteDelegate_Params));
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(AddWritePlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate, sizeof(AddWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate), &WritePlayerStorageCompleteDelegate, sizeof(WritePlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnWritePlayerStorageComplete = nullptr;

	if (!uFnOnWritePlayerStorageComplete)
	{
		uFnOnWritePlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete");
	}

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params OnWritePlayerStorageComplete_Params;
	memset(&OnWritePlayerStorageComplete_Params, 0, sizeof(OnWritePlayerStorageComplete_Params));
	memcpy_s(&OnWritePlayerStorageComplete_Params.LocalUserNum, sizeof(OnWritePlayerStorageComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnWritePlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnWritePlayerStorage = nullptr;

	if (!uFnWritePlayerStorage)
	{
		uFnWritePlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage");
	}

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Params WritePlayerStorage_Params;
	memset(&WritePlayerStorage_Params, 0, sizeof(WritePlayerStorage_Params));
	memcpy_s(&WritePlayerStorage_Params.LocalUserNum, sizeof(WritePlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	WritePlayerStorage_Params.PlayerStorage = PlayerStorage;
	memcpy_s(&WritePlayerStorage_Params.DeviceID, sizeof(WritePlayerStorage_Params.DeviceID), &DeviceID, sizeof(DeviceID));

	this->ProcessEvent(uFnWritePlayerStorage, &WritePlayerStorage_Params, nullptr);

	return WritePlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlinePlayerStorage*    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerStorage = nullptr;

	if (!uFnGetPlayerStorage)
	{
		uFnGetPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage");
	}

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Params GetPlayerStorage_Params;
	memset(&GetPlayerStorage_Params, 0, sizeof(GetPlayerStorage_Params));
	memcpy_s(&GetPlayerStorage_Params.LocalUserNum, sizeof(GetPlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetPlayerStorage, &GetPlayerStorage_Params, nullptr);

	return GetPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* uFnClearReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnClearReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Params ClearReadPlayerStorageForNetIdCompleteDelegate_Params;
	memset(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params, 0, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params));
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ClearReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate), &ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ReadPlayerStorageForNetIdCompleteDelegate));

	this->ProcessEvent(uFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* uFnAddReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnAddReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Params AddReadPlayerStorageForNetIdCompleteDelegate_Params;
	memset(&AddReadPlayerStorageForNetIdCompleteDelegate_Params, 0, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params));
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId), &NetId, sizeof(NetId));
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate, sizeof(AddReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate), &ReadPlayerStorageForNetIdCompleteDelegate, sizeof(ReadPlayerStorageForNetIdCompleteDelegate));

	this->ProcessEvent(uFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FUniqueNetId            NetId                          (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageForNetIdComplete = nullptr;

	if (!uFnOnReadPlayerStorageForNetIdComplete)
	{
		uFnOnReadPlayerStorageForNetIdComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Params OnReadPlayerStorageForNetIdComplete_Params;
	memset(&OnReadPlayerStorageForNetIdComplete_Params, 0, sizeof(OnReadPlayerStorageForNetIdComplete_Params));
	memcpy_s(&OnReadPlayerStorageForNetIdComplete_Params.NetId, sizeof(OnReadPlayerStorageForNetIdComplete_Params.NetId), &NetId, sizeof(NetId));
	OnReadPlayerStorageForNetIdComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId(uint8_t LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* uFnReadPlayerStorageForNetId = nullptr;

	if (!uFnReadPlayerStorageForNetId)
	{
		uFnReadPlayerStorageForNetId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId");
	}

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Params ReadPlayerStorageForNetId_Params;
	memset(&ReadPlayerStorageForNetId_Params, 0, sizeof(ReadPlayerStorageForNetId_Params));
	memcpy_s(&ReadPlayerStorageForNetId_Params.LocalUserNum, sizeof(ReadPlayerStorageForNetId_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadPlayerStorageForNetId_Params.NetId, sizeof(ReadPlayerStorageForNetId_Params.NetId), &NetId, sizeof(NetId));
	ReadPlayerStorageForNetId_Params.PlayerStorage = PlayerStorage;

	this->ProcessEvent(uFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Params, nullptr);

	return ReadPlayerStorageForNetId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static UFunction* uFnClearReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageCompleteDelegate)
	{
		uFnClearReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Params ClearReadPlayerStorageCompleteDelegate_Params;
	memset(&ClearReadPlayerStorageCompleteDelegate_Params, 0, sizeof(ClearReadPlayerStorageCompleteDelegate_Params));
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadPlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate, sizeof(ClearReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate), &ReadPlayerStorageCompleteDelegate, sizeof(ReadPlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static UFunction* uFnAddReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageCompleteDelegate)
	{
		uFnAddReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Params AddReadPlayerStorageCompleteDelegate_Params;
	memset(&AddReadPlayerStorageCompleteDelegate_Params, 0, sizeof(AddReadPlayerStorageCompleteDelegate_Params));
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.LocalUserNum, sizeof(AddReadPlayerStorageCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate, sizeof(AddReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate), &ReadPlayerStorageCompleteDelegate, sizeof(ReadPlayerStorageCompleteDelegate));

	this->ProcessEvent(uFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageComplete = nullptr;

	if (!uFnOnReadPlayerStorageComplete)
	{
		uFnOnReadPlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params OnReadPlayerStorageComplete_Params;
	memset(&OnReadPlayerStorageComplete_Params, 0, sizeof(OnReadPlayerStorageComplete_Params));
	memcpy_s(&OnReadPlayerStorageComplete_Params.LocalUserNum, sizeof(OnReadPlayerStorageComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnReadPlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024000] (FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnReadPlayerStorage = nullptr;

	if (!uFnReadPlayerStorage)
	{
		uFnReadPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage");
	}

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Params ReadPlayerStorage_Params;
	memset(&ReadPlayerStorage_Params, 0, sizeof(ReadPlayerStorage_Params));
	memcpy_s(&ReadPlayerStorage_Params.LocalUserNum, sizeof(ReadPlayerStorage_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	ReadPlayerStorage_Params.PlayerStorage = PlayerStorage;
	memcpy_s(&ReadPlayerStorage_Params.DeviceID, sizeof(ReadPlayerStorage_Params.DeviceID), &DeviceID, sizeof(DeviceID));

	this->ProcessEvent(uFnReadPlayerStorage, &ReadPlayerStorage_Params, nullptr);

	return ReadPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearWriteProfileSettingsCompleteDelegate)
	{
		uFnClearWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Params ClearWriteProfileSettingsCompleteDelegate_Params;
	memset(&ClearWriteProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, sizeof(ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddWriteProfileSettingsCompleteDelegate)
	{
		uFnAddWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Params AddWriteProfileSettingsCompleteDelegate_Params;
	memset(&AddWriteProfileSettingsCompleteDelegate_Params, 0, sizeof(AddWriteProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddWriteProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, sizeof(AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate), &WriteProfileSettingsCompleteDelegate, sizeof(WriteProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnWriteProfileSettingsComplete = nullptr;

	if (!uFnOnWriteProfileSettingsComplete)
	{
		uFnOnWriteProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Params OnWriteProfileSettingsComplete_Params;
	memset(&OnWriteProfileSettingsComplete_Params, 0, sizeof(OnWriteProfileSettingsComplete_Params));
	memcpy_s(&OnWriteProfileSettingsComplete_Params.LocalUserNum, sizeof(OnWriteProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnWriteProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettingsCompleted
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27323])
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::WriteProfileSettingsCompleted(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnWriteProfileSettingsCompleted = nullptr;

	if (!uFnWriteProfileSettingsCompleted)
	{
		uFnWriteProfileSettingsCompleted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettingsCompleted");
	}

	UOnlineSubsystemSteamworks_execWriteProfileSettingsCompleted_Params WriteProfileSettingsCompleted_Params;
	memset(&WriteProfileSettingsCompleted_Params, 0, sizeof(WriteProfileSettingsCompleted_Params));
	memcpy_s(&WriteProfileSettingsCompleted_Params.LocalUserNum, sizeof(WriteProfileSettingsCompleted_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	WriteProfileSettingsCompleted_Params.bWasSuccessful = bWasSuccessful;

	uFnWriteProfileSettingsCompleted->iNative = 0;
	uFnWriteProfileSettingsCompleted->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteProfileSettingsCompleted, &WriteProfileSettingsCompleted_Params, nullptr);
	uFnWriteProfileSettingsCompleted->FunctionFlags |= 0x400;
	uFnWriteProfileSettingsCompleted->iNative = 27323;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27322])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnWriteProfileSettings = nullptr;

	if (!uFnWriteProfileSettings)
	{
		uFnWriteProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings");
	}

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Params WriteProfileSettings_Params;
	memset(&WriteProfileSettings_Params, 0, sizeof(WriteProfileSettings_Params));
	memcpy_s(&WriteProfileSettings_Params.LocalUserNum, sizeof(WriteProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	WriteProfileSettings_Params.ProfileSettings = ProfileSettings;

	uFnWriteProfileSettings->iNative = 0;
	uFnWriteProfileSettings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnWriteProfileSettings, &WriteProfileSettings_Params, nullptr);
	uFnWriteProfileSettings->FunctionFlags |= 0x400;
	uFnWriteProfileSettings->iNative = 27322;

	return WriteProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings(uint8_t LocalUserNum)
{
	static UFunction* uFnGetProfileSettings = nullptr;

	if (!uFnGetProfileSettings)
	{
		uFnGetProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings");
	}

	UOnlineSubsystemSteamworks_execGetProfileSettings_Params GetProfileSettings_Params;
	memset(&GetProfileSettings_Params, 0, sizeof(GetProfileSettings_Params));
	memcpy_s(&GetProfileSettings_Params.LocalUserNum, sizeof(GetProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetProfileSettings, &GetProfileSettings_Params, nullptr);

	return GetProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadProfileSettingsCompleteDelegate)
	{
		uFnClearReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Params ClearReadProfileSettingsCompleteDelegate_Params;
	memset(&ClearReadProfileSettingsCompleteDelegate_Params, 0, sizeof(ClearReadProfileSettingsCompleteDelegate_Params));
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(ClearReadProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadProfileSettingsCompleteDelegate)
	{
		uFnAddReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Params AddReadProfileSettingsCompleteDelegate_Params;
	memset(&AddReadProfileSettingsCompleteDelegate_Params, 0, sizeof(AddReadProfileSettingsCompleteDelegate_Params));
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.LocalUserNum, sizeof(AddReadProfileSettingsCompleteDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, sizeof(AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate), &ReadProfileSettingsCompleteDelegate, sizeof(ReadProfileSettingsCompleteDelegate));

	this->ProcessEvent(uFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete(uint8_t LocalUserNum, bool bWasSuccessful)
{
	static UFunction* uFnOnReadProfileSettingsComplete = nullptr;

	if (!uFnOnReadProfileSettingsComplete)
	{
		uFnOnReadProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Params OnReadProfileSettingsComplete_Params;
	memset(&OnReadProfileSettingsComplete_Params, 0, sizeof(OnReadProfileSettingsComplete_Params));
	memcpy_s(&OnReadProfileSettingsComplete_Params.LocalUserNum, sizeof(OnReadProfileSettingsComplete_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	OnReadProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettingsCompleted
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[24959])
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class TArray<uint8_t>          rProfileBuffer                 (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::ReadProfileSettingsCompleted(uint8_t LocalUserNum, const class TArray<uint8_t>& rProfileBuffer, bool bWasSuccessful)
{
	static UFunction* uFnReadProfileSettingsCompleted = nullptr;

	if (!uFnReadProfileSettingsCompleted)
	{
		uFnReadProfileSettingsCompleted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettingsCompleted");
	}

	UOnlineSubsystemSteamworks_execReadProfileSettingsCompleted_Params ReadProfileSettingsCompleted_Params;
	memset(&ReadProfileSettingsCompleted_Params, 0, sizeof(ReadProfileSettingsCompleted_Params));
	memcpy_s(&ReadProfileSettingsCompleted_Params.LocalUserNum, sizeof(ReadProfileSettingsCompleted_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ReadProfileSettingsCompleted_Params.rProfileBuffer, sizeof(ReadProfileSettingsCompleted_Params.rProfileBuffer), &rProfileBuffer, sizeof(rProfileBuffer));
	ReadProfileSettingsCompleted_Params.bWasSuccessful = bWasSuccessful;

	uFnReadProfileSettingsCompleted->iNative = 0;
	uFnReadProfileSettingsCompleted->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadProfileSettingsCompleted, &ReadProfileSettingsCompleted_Params, nullptr);
	uFnReadProfileSettingsCompleted->FunctionFlags |= 0x400;
	uFnReadProfileSettingsCompleted->iNative = 24959;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[13823])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)
// uint32_t                       bForceRead                     (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings, bool bForceRead)
{
	static UFunction* uFnReadProfileSettings = nullptr;

	if (!uFnReadProfileSettings)
	{
		uFnReadProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings");
	}

	UOnlineSubsystemSteamworks_execReadProfileSettings_Params ReadProfileSettings_Params;
	memset(&ReadProfileSettings_Params, 0, sizeof(ReadProfileSettings_Params));
	memcpy_s(&ReadProfileSettings_Params.LocalUserNum, sizeof(ReadProfileSettings_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	ReadProfileSettings_Params.ProfileSettings = ProfileSettings;
	ReadProfileSettings_Params.bForceRead = bForceRead;

	uFnReadProfileSettings->iNative = 0;
	uFnReadProfileSettings->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReadProfileSettings, &ReadProfileSettings_Params, nullptr);
	uFnReadProfileSettings->FunctionFlags |= 0x400;
	uFnReadProfileSettings->iNative = 13823;

	return ReadProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static UFunction* uFnClearLoginCancelledDelegate = nullptr;

	if (!uFnClearLoginCancelledDelegate)
	{
		uFnClearLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Params ClearLoginCancelledDelegate_Params;
	memset(&ClearLoginCancelledDelegate_Params, 0, sizeof(ClearLoginCancelledDelegate_Params));
	memcpy_s(&ClearLoginCancelledDelegate_Params.CancelledDelegate, sizeof(ClearLoginCancelledDelegate_Params.CancelledDelegate), &CancelledDelegate, sizeof(CancelledDelegate));

	this->ProcessEvent(uFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static UFunction* uFnAddLoginCancelledDelegate = nullptr;

	if (!uFnAddLoginCancelledDelegate)
	{
		uFnAddLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Params AddLoginCancelledDelegate_Params;
	memset(&AddLoginCancelledDelegate_Params, 0, sizeof(AddLoginCancelledDelegate_Params));
	memcpy_s(&AddLoginCancelledDelegate_Params.CancelledDelegate, sizeof(AddLoginCancelledDelegate_Params.CancelledDelegate), &CancelledDelegate, sizeof(CancelledDelegate));

	this->ProcessEvent(uFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnClearLoginStatusChangeDelegate = nullptr;

	if (!uFnClearLoginStatusChangeDelegate)
	{
		uFnClearLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Params ClearLoginStatusChangeDelegate_Params;
	memset(&ClearLoginStatusChangeDelegate_Params, 0, sizeof(ClearLoginStatusChangeDelegate_Params));
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.LoginStatusDelegate, sizeof(ClearLoginStatusChangeDelegate_Params.LoginStatusDelegate), &LoginStatusDelegate, sizeof(LoginStatusDelegate));
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.LocalUserNum, sizeof(ClearLoginStatusChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnAddLoginStatusChangeDelegate = nullptr;

	if (!uFnAddLoginStatusChangeDelegate)
	{
		uFnAddLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Params AddLoginStatusChangeDelegate_Params;
	memset(&AddLoginStatusChangeDelegate_Params, 0, sizeof(AddLoginStatusChangeDelegate_Params));
	memcpy_s(&AddLoginStatusChangeDelegate_Params.LoginStatusDelegate, sizeof(AddLoginStatusChangeDelegate_Params.LoginStatusDelegate), &LoginStatusDelegate, sizeof(LoginStatusDelegate));
	memcpy_s(&AddLoginStatusChangeDelegate_Params.LocalUserNum, sizeof(AddLoginStatusChangeDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// ELoginStatus                   NewStatus                      (CPF_Parm)
// struct FUniqueNetId            NewId                          (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginStatusChange(ELoginStatus NewStatus, const struct FUniqueNetId& NewId)
{
	static UFunction* uFnOnLoginStatusChange = nullptr;

	if (!uFnOnLoginStatusChange)
	{
		uFnOnLoginStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params OnLoginStatusChange_Params;
	memset(&OnLoginStatusChange_Params, 0, sizeof(OnLoginStatusChange_Params));
	memcpy_s(&OnLoginStatusChange_Params.NewStatus, sizeof(OnLoginStatusChange_Params.NewStatus), &NewStatus, sizeof(NewStatus));
	memcpy_s(&OnLoginStatusChange_Params.NewId, sizeof(OnLoginStatusChange_Params.NewId), &NewId, sizeof(NewId));

	this->ProcessEvent(uFnOnLoginStatusChange, &OnLoginStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static UFunction* uFnClearLoginChangeDelegate = nullptr;

	if (!uFnClearLoginChangeDelegate)
	{
		uFnClearLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Params ClearLoginChangeDelegate_Params;
	memset(&ClearLoginChangeDelegate_Params, 0, sizeof(ClearLoginChangeDelegate_Params));
	memcpy_s(&ClearLoginChangeDelegate_Params.LoginDelegate, sizeof(ClearLoginChangeDelegate_Params.LoginDelegate), &LoginDelegate, sizeof(LoginDelegate));

	this->ProcessEvent(uFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static UFunction* uFnAddLoginChangeDelegate = nullptr;

	if (!uFnAddLoginChangeDelegate)
	{
		uFnAddLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Params AddLoginChangeDelegate_Params;
	memset(&AddLoginChangeDelegate_Params, 0, sizeof(AddLoginChangeDelegate_Params));
	memcpy_s(&AddLoginChangeDelegate_Params.LoginDelegate, sizeof(AddLoginChangeDelegate_Params.LoginDelegate), &LoginDelegate, sizeof(LoginDelegate));

	this->ProcessEvent(uFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsMuted(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsMuted = nullptr;

	if (!uFnIsMuted)
	{
		uFnIsMuted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted");
	}

	UOnlineSubsystemSteamworks_execIsMuted_Params IsMuted_Params;
	memset(&IsMuted_Params, 0, sizeof(IsMuted_Params));
	memcpy_s(&IsMuted_Params.LocalUserNum, sizeof(IsMuted_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&IsMuted_Params.PlayerID, sizeof(IsMuted_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnIsMuted, &IsMuted_Params, nullptr);

	return IsMuted_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[15645])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class TArray<struct FFriendsQuery> Query                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AreAnyFriends(uint8_t LocalUserNum, class TArray<struct FFriendsQuery>& Query)
{
	static UFunction* uFnAreAnyFriends = nullptr;

	if (!uFnAreAnyFriends)
	{
		uFnAreAnyFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends");
	}

	UOnlineSubsystemSteamworks_execAreAnyFriends_Params AreAnyFriends_Params;
	memset(&AreAnyFriends_Params, 0, sizeof(AreAnyFriends_Params));
	memcpy_s(&AreAnyFriends_Params.LocalUserNum, sizeof(AreAnyFriends_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AreAnyFriends_Params.Query, sizeof(AreAnyFriends_Params.Query), &Query, sizeof(Query));

	uFnAreAnyFriends->iNative = 0;
	uFnAreAnyFriends->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAreAnyFriends, &AreAnyFriends_Params, nullptr);
	uFnAreAnyFriends->FunctionFlags |= 0x400;
	uFnAreAnyFriends->iNative = 15645;

	memcpy_s(&Query, sizeof(Query), &AreAnyFriends_Params.Query, sizeof(AreAnyFriends_Params.Query));

	return AreAnyFriends_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21382])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsFriend(uint8_t LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsFriend = nullptr;

	if (!uFnIsFriend)
	{
		uFnIsFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend");
	}

	UOnlineSubsystemSteamworks_execIsFriend_Params IsFriend_Params;
	memset(&IsFriend_Params, 0, sizeof(IsFriend_Params));
	memcpy_s(&IsFriend_Params.LocalUserNum, sizeof(IsFriend_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&IsFriend_Params.PlayerID, sizeof(IsFriend_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnIsFriend->iNative = 0;
	uFnIsFriend->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsFriend, &IsFriend_Params, nullptr);
	uFnIsFriend->FunctionFlags |= 0x400;
	uFnIsFriend->iNative = 21382;

	return IsFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanShowPresenceInformation(uint8_t LocalUserNum)
{
	static UFunction* uFnCanShowPresenceInformation = nullptr;

	if (!uFnCanShowPresenceInformation)
	{
		uFnCanShowPresenceInformation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation");
	}

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Params CanShowPresenceInformation_Params;
	memset(&CanShowPresenceInformation_Params, 0, sizeof(CanShowPresenceInformation_Params));
	memcpy_s(&CanShowPresenceInformation_Params.LocalUserNum, sizeof(CanShowPresenceInformation_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnCanShowPresenceInformation, &CanShowPresenceInformation_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanShowPresenceInformation_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanViewPlayerProfiles(uint8_t LocalUserNum)
{
	static UFunction* uFnCanViewPlayerProfiles = nullptr;

	if (!uFnCanViewPlayerProfiles)
	{
		uFnCanViewPlayerProfiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles");
	}

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Params CanViewPlayerProfiles_Params;
	memset(&CanViewPlayerProfiles_Params, 0, sizeof(CanViewPlayerProfiles_Params));
	memcpy_s(&CanViewPlayerProfiles_Params.LocalUserNum, sizeof(CanViewPlayerProfiles_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanViewPlayerProfiles_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanPurchaseContent(uint8_t LocalUserNum)
{
	static UFunction* uFnCanPurchaseContent = nullptr;

	if (!uFnCanPurchaseContent)
	{
		uFnCanPurchaseContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent");
	}

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Params CanPurchaseContent_Params;
	memset(&CanPurchaseContent_Params, 0, sizeof(CanPurchaseContent_Params));
	memcpy_s(&CanPurchaseContent_Params.LocalUserNum, sizeof(CanPurchaseContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnCanPurchaseContent, &CanPurchaseContent_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanPurchaseContent_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// EFeaturePrivilegeLevel         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

EFeaturePrivilegeLevel UOnlineSubsystemSteamworks::CanDownloadUserContent(uint8_t LocalUserNum)
{
	static UFunction* uFnCanDownloadUserContent = nullptr;

	if (!uFnCanDownloadUserContent)
	{
		uFnCanDownloadUserContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent");
	}

	UOnlineSubsystemSteamworks_execCanDownloadUserContent_Params CanDownloadUserContent_Params;
	memset(&CanDownloadUserContent_Params, 0, sizeof(CanDownloadUserContent_Params));
	memcpy_s(&CanDownloadUserContent_Params.LocalUserNum, sizeof(CanDownloadUserContent_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnCanDownloadUserContent, &CanDownloadUserContent_Params, nullptr);

	return static_cast<EFeaturePrivilegeLevel>(CanDownloadUserContent_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class FString UOnlineSubsystemSteamworks::GetPlayerNickname(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerNickname = nullptr;

	if (!uFnGetPlayerNickname)
	{
		uFnGetPlayerNickname = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname");
	}

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Params GetPlayerNickname_Params;
	memset(&GetPlayerNickname_Params, 0, sizeof(GetPlayerNickname_Params));
	memcpy_s(&GetPlayerNickname_Params.LocalUserNum, sizeof(GetPlayerNickname_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnGetPlayerNickname, &GetPlayerNickname_Params, nullptr);

	return GetPlayerNickname_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnGetUniquePlayerId = nullptr;

	if (!uFnGetUniquePlayerId)
	{
		uFnGetUniquePlayerId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId");
	}

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params GetUniquePlayerId_Params;
	memset(&GetUniquePlayerId_Params, 0, sizeof(GetUniquePlayerId_Params));
	memcpy_s(&GetUniquePlayerId_Params.LocalUserNum, sizeof(GetUniquePlayerId_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	this->ProcessEvent(uFnGetUniquePlayerId, &GetUniquePlayerId_Params, nullptr);

	memcpy_s(&PlayerID, sizeof(PlayerID), &GetUniquePlayerId_Params.PlayerID, sizeof(GetUniquePlayerId_Params.PlayerID));

	return GetUniquePlayerId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsLocalLogin(uint8_t LocalUserNum)
{
	static UFunction* uFnIsLocalLogin = nullptr;

	if (!uFnIsLocalLogin)
	{
		uFnIsLocalLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin");
	}

	UOnlineSubsystemSteamworks_execIsLocalLogin_Params IsLocalLogin_Params;
	memset(&IsLocalLogin_Params, 0, sizeof(IsLocalLogin_Params));
	memcpy_s(&IsLocalLogin_Params.LocalUserNum, sizeof(IsLocalLogin_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnIsLocalLogin, &IsLocalLogin_Params, nullptr);

	return IsLocalLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsGuestLogin(uint8_t LocalUserNum)
{
	static UFunction* uFnIsGuestLogin = nullptr;

	if (!uFnIsGuestLogin)
	{
		uFnIsGuestLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin");
	}

	UOnlineSubsystemSteamworks_execIsGuestLogin_Params IsGuestLogin_Params;
	memset(&IsGuestLogin_Params, 0, sizeof(IsGuestLogin_Params));
	memcpy_s(&IsGuestLogin_Params.LocalUserNum, sizeof(IsGuestLogin_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnIsGuestLogin, &IsGuestLogin_Params, nullptr);

	return IsGuestLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[13557])
// Parameter Info:
// ELoginStatus                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

ELoginStatus UOnlineSubsystemSteamworks::GetLoginStatus(uint8_t LocalUserNum)
{
	static UFunction* uFnGetLoginStatus = nullptr;

	if (!uFnGetLoginStatus)
	{
		uFnGetLoginStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus");
	}

	UOnlineSubsystemSteamworks_execGetLoginStatus_Params GetLoginStatus_Params;
	memset(&GetLoginStatus_Params, 0, sizeof(GetLoginStatus_Params));
	memcpy_s(&GetLoginStatus_Params.LocalUserNum, sizeof(GetLoginStatus_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnGetLoginStatus->iNative = 0;
	uFnGetLoginStatus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetLoginStatus, &GetLoginStatus_Params, nullptr);
	uFnGetLoginStatus->FunctionFlags |= 0x400;
	uFnGetLoginStatus->iNative = 13557;

	return static_cast<ELoginStatus>(GetLoginStatus_Params.ReturnValue);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static UFunction* uFnClearLogoutCompletedDelegate = nullptr;

	if (!uFnClearLogoutCompletedDelegate)
	{
		uFnClearLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Params ClearLogoutCompletedDelegate_Params;
	memset(&ClearLogoutCompletedDelegate_Params, 0, sizeof(ClearLogoutCompletedDelegate_Params));
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LocalUserNum, sizeof(ClearLogoutCompletedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LogoutDelegate, sizeof(ClearLogoutCompletedDelegate_Params.LogoutDelegate), &LogoutDelegate, sizeof(LogoutDelegate));

	this->ProcessEvent(uFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static UFunction* uFnAddLogoutCompletedDelegate = nullptr;

	if (!uFnAddLogoutCompletedDelegate)
	{
		uFnAddLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Params AddLogoutCompletedDelegate_Params;
	memset(&AddLogoutCompletedDelegate_Params, 0, sizeof(AddLogoutCompletedDelegate_Params));
	memcpy_s(&AddLogoutCompletedDelegate_Params.LocalUserNum, sizeof(AddLogoutCompletedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddLogoutCompletedDelegate_Params.LogoutDelegate, sizeof(AddLogoutCompletedDelegate_Params.LogoutDelegate), &LogoutDelegate, sizeof(LogoutDelegate));

	this->ProcessEvent(uFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLogoutCompleted(bool bWasSuccessful)
{
	static UFunction* uFnOnLogoutCompleted = nullptr;

	if (!uFnOnLogoutCompleted)
	{
		uFnOnLogoutCompleted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted");
	}

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Params OnLogoutCompleted_Params;
	memset(&OnLogoutCompleted_Params, 0, sizeof(OnLogoutCompleted_Params));
	OnLogoutCompleted_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnLogoutCompleted, &OnLogoutCompleted_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[21849])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::Logout(uint8_t LocalUserNum)
{
	static UFunction* uFnLogout = nullptr;

	if (!uFnLogout)
	{
		uFnLogout = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout");
	}

	UOnlineSubsystemSteamworks_execLogout_Params Logout_Params;
	memset(&Logout_Params, 0, sizeof(Logout_Params));
	memcpy_s(&Logout_Params.LocalUserNum, sizeof(Logout_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	uFnLogout->iNative = 0;
	uFnLogout->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLogout, &Logout_Params, nullptr);
	uFnLogout->FunctionFlags |= 0x400;
	uFnLogout->iNative = 21849;

	return Logout_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static UFunction* uFnClearLoginFailedDelegate = nullptr;

	if (!uFnClearLoginFailedDelegate)
	{
		uFnClearLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Params ClearLoginFailedDelegate_Params;
	memset(&ClearLoginFailedDelegate_Params, 0, sizeof(ClearLoginFailedDelegate_Params));
	memcpy_s(&ClearLoginFailedDelegate_Params.LocalUserNum, sizeof(ClearLoginFailedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&ClearLoginFailedDelegate_Params.LoginFailedDelegate, sizeof(ClearLoginFailedDelegate_Params.LoginFailedDelegate), &LoginFailedDelegate, sizeof(LoginFailedDelegate));

	this->ProcessEvent(uFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static UFunction* uFnAddLoginFailedDelegate = nullptr;

	if (!uFnAddLoginFailedDelegate)
	{
		uFnAddLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Params AddLoginFailedDelegate_Params;
	memset(&AddLoginFailedDelegate_Params, 0, sizeof(AddLoginFailedDelegate_Params));
	memcpy_s(&AddLoginFailedDelegate_Params.LocalUserNum, sizeof(AddLoginFailedDelegate_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&AddLoginFailedDelegate_Params.LoginFailedDelegate, sizeof(AddLoginFailedDelegate_Params.LoginFailedDelegate), &LoginFailedDelegate, sizeof(LoginFailedDelegate));

	this->ProcessEvent(uFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// EOnlineServerConnectionStatus  ErrorCode                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginFailed(uint8_t LocalUserNum, EOnlineServerConnectionStatus ErrorCode)
{
	static UFunction* uFnOnLoginFailed = nullptr;

	if (!uFnOnLoginFailed)
	{
		uFnOnLoginFailed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed");
	}

	UOnlineSubsystemSteamworks_execOnLoginFailed_Params OnLoginFailed_Params;
	memset(&OnLoginFailed_Params, 0, sizeof(OnLoginFailed_Params));
	memcpy_s(&OnLoginFailed_Params.LocalUserNum, sizeof(OnLoginFailed_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&OnLoginFailed_Params.ErrorCode, sizeof(OnLoginFailed_Params.ErrorCode), &ErrorCode, sizeof(ErrorCode));

	this->ProcessEvent(uFnOnLoginFailed, &OnLoginFailed_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[15751])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AutoLogin()
{
	static UFunction* uFnAutoLogin = nullptr;

	if (!uFnAutoLogin)
	{
		uFnAutoLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin");
	}

	UOnlineSubsystemSteamworks_execAutoLogin_Params AutoLogin_Params;
	memset(&AutoLogin_Params, 0, sizeof(AutoLogin_Params));

	uFnAutoLogin->iNative = 0;
	uFnAutoLogin->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAutoLogin, &AutoLogin_Params, nullptr);
	uFnAutoLogin->FunctionFlags |= 0x400;
	uFnAutoLogin->iNative = 15751;

	return AutoLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13607])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class FString                  LoginName                      (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Password                       (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       bWantsLocalOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::Login(uint8_t LocalUserNum, const class FString& LoginName, const class FString& Password, bool bWantsLocalOnly)
{
	static UFunction* uFnLogin = nullptr;

	if (!uFnLogin)
	{
		uFnLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login");
	}

	UOnlineSubsystemSteamworks_execLogin_Params Login_Params;
	memset(&Login_Params, 0, sizeof(Login_Params));
	memcpy_s(&Login_Params.LocalUserNum, sizeof(Login_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));
	memcpy_s(&Login_Params.LoginName, sizeof(Login_Params.LoginName), &LoginName, sizeof(LoginName));
	memcpy_s(&Login_Params.Password, sizeof(Login_Params.Password), &Password, sizeof(Password));
	Login_Params.bWantsLocalOnly = bWantsLocalOnly;

	uFnLogin->iNative = 0;
	uFnLogin->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnLogin, &Login_Params, nullptr);
	uFnLogin->FunctionFlags |= 0x400;
	uFnLogin->iNative = 13607;

	return Login_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[25922])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       bShowOnlineOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowLoginUI(bool bShowOnlineOnly)
{
	static UFunction* uFnShowLoginUI = nullptr;

	if (!uFnShowLoginUI)
	{
		uFnShowLoginUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI");
	}

	UOnlineSubsystemSteamworks_execShowLoginUI_Params ShowLoginUI_Params;
	memset(&ShowLoginUI_Params, 0, sizeof(ShowLoginUI_Params));
	ShowLoginUI_Params.bShowOnlineOnly = bShowOnlineOnly;

	uFnShowLoginUI->iNative = 0;
	uFnShowLoginUI->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnShowLoginUI, &ShowLoginUI_Params, nullptr);
	uFnShowLoginUI->FunctionFlags |= 0x400;
	uFnShowLoginUI->iNative = 25922;

	return ShowLoginUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnFriendsChange()
{
	static UFunction* uFnOnFriendsChange = nullptr;

	if (!uFnOnFriendsChange)
	{
		uFnOnFriendsChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange");
	}

	UOnlineSubsystemSteamworks_execOnFriendsChange_Params OnFriendsChange_Params;
	memset(&OnFriendsChange_Params, 0, sizeof(OnFriendsChange_Params));

	this->ProcessEvent(uFnOnFriendsChange, &OnFriendsChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnMutingChange()
{
	static UFunction* uFnOnMutingChange = nullptr;

	if (!uFnOnMutingChange)
	{
		uFnOnMutingChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange");
	}

	UOnlineSubsystemSteamworks_execOnMutingChange_Params OnMutingChange_Params;
	memset(&OnMutingChange_Params, 0, sizeof(OnMutingChange_Params));

	this->ProcessEvent(uFnOnMutingChange, &OnMutingChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:

void UOnlineSubsystemSteamworks::OnLoginCancelled()
{
	static UFunction* uFnOnLoginCancelled = nullptr;

	if (!uFnOnLoginCancelled)
	{
		uFnOnLoginCancelled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled");
	}

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Params OnLoginCancelled_Params;
	memset(&OnLoginCancelled_Params, 0, sizeof(OnLoginCancelled_Params));

	this->ProcessEvent(uFnOnLoginCancelled, &OnLoginCancelled_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginChange(uint8_t LocalUserNum)
{
	static UFunction* uFnOnLoginChange = nullptr;

	if (!uFnOnLoginChange)
	{
		uFnOnLoginChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange");
	}

	UOnlineSubsystemSteamworks_execOnLoginChange_Params OnLoginChange_Params;
	memset(&OnLoginChange_Params, 0, sizeof(OnLoginChange_Params));
	memcpy_s(&OnLoginChange_Params.LocalUserNum, sizeof(OnLoginChange_Params.LocalUserNum), &LocalUserNum, sizeof(LocalUserNum));

	this->ProcessEvent(uFnOnLoginChange, &OnLoginChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[763])
// Parameter Info:

void UOnlineSubsystemSteamworks::eventExit()
{
	static UFunction* uFnExit = nullptr;

	if (!uFnExit)
	{
		uFnExit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit");
	}

	UOnlineSubsystemSteamworks_eventExit_Params Exit_Params;
	memset(&Exit_Params, 0, sizeof(Exit_Params));

	uFnExit->iNative = 0;
	uFnExit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnExit, &Exit_Params, nullptr);
	uFnExit->FunctionFlags |= 0x400;
	uFnExit->iNative = 763;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[762])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init");
	}

	UOnlineSubsystemSteamworks_eventInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	uFnInit->iNative = 0;
	uFnInit->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
	uFnInit->FunctionFlags |= 0x400;
	uFnInit->iNative = 762;

	return Init_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


