/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: IpDrv_classes.cpp
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

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class FName                    SessionName                    (CPF_Parm)
// class TArray<struct FUniqueNetId> OutRegisteredPlayers           (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& OutRegisteredPlayers)
{
	static UFunction* uFnGetRegisteredPlayers = nullptr;

	if (!uFnGetRegisteredPlayers)
	{
		uFnGetRegisteredPlayers = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers");
	}

	UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Params GetRegisteredPlayers_Params;
	memset(&GetRegisteredPlayers_Params, 0, sizeof(GetRegisteredPlayers_Params));
	memcpy_s(&GetRegisteredPlayers_Params.SessionName, sizeof(GetRegisteredPlayers_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&GetRegisteredPlayers_Params.OutRegisteredPlayers, sizeof(GetRegisteredPlayers_Params.OutRegisteredPlayers), &OutRegisteredPlayers, sizeof(OutRegisteredPlayers));

	this->ProcessEvent(uFnGetRegisteredPlayers, &GetRegisteredPlayers_Params, nullptr);

	memcpy_s(&OutRegisteredPlayers, sizeof(OutRegisteredPlayers), &GetRegisteredPlayers_Params.OutRegisteredPlayers, sizeof(GetRegisteredPlayers_Params.OutRegisteredPlayers));
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29730])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm)

bool UOnlineSubsystemCommonImpl::IsPlayerInSession(const class FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnIsPlayerInSession = nullptr;

	if (!uFnIsPlayerInSession)
	{
		uFnIsPlayerInSession = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession");
	}

	UOnlineSubsystemCommonImpl_execIsPlayerInSession_Params IsPlayerInSession_Params;
	memset(&IsPlayerInSession_Params, 0, sizeof(IsPlayerInSession_Params));
	memcpy_s(&IsPlayerInSession_Params.SessionName, sizeof(IsPlayerInSession_Params.SessionName), &SessionName, sizeof(SessionName));
	memcpy_s(&IsPlayerInSession_Params.PlayerID, sizeof(IsPlayerInSession_Params.PlayerID), &PlayerID, sizeof(PlayerID));

	uFnIsPlayerInSession->iNative = 0;
	uFnIsPlayerInSession->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsPlayerInSession, &IsPlayerInSession_Params, nullptr);
	uFnIsPlayerInSession->FunctionFlags |= 0x400;
	uFnIsPlayerInSession->iNative = 29730;

	return IsPlayerInSession_Params.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

class FString UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerNicknameFromIndex = nullptr;

	if (!uFnGetPlayerNicknameFromIndex)
	{
		uFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex");
	}

	UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Params GetPlayerNicknameFromIndex_Params;
	memset(&GetPlayerNicknameFromIndex_Params, 0, sizeof(GetPlayerNicknameFromIndex_Params));
	memcpy_s(&GetPlayerNicknameFromIndex_Params.UserIndex, sizeof(GetPlayerNicknameFromIndex_Params.UserIndex), &UserIndex, sizeof(UserIndex));

	this->ProcessEvent(uFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Params, nullptr);

	return GetPlayerNicknameFromIndex_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


