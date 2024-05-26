/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: IpDrv_parameters.hpp
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

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] 
struct UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  OutRegisteredPlayers;                             // 0x0008 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400]  (iNative[29730])
struct UOnlineSubsystemCommonImpl_execIsPlayerInSession_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] 
struct UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Params
{
	int32_t                                            UserIndex;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


