/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: IpDrv_classes.hpp
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.MCPBase
// 0x0004 (0x0038 - 0x003C)
class UMCPBase : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0038 (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MCPBase");
		}

		return uClassPointer;
	};

};

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0014 (0x00B4 - 0x00C8)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                   // 0x00B4 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	int32_t                                            MaxLocalTalkers;                               // 0x00B8 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxRemoteTalkers;                              // 0x00BC (0x0004) [0x0000000000004000] (CPF_Config)  
	uint32_t                                           bIsUsingSpeechRecognition : 1;                 // 0x00C0 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	struct FPointer                                    pLeaderboardHelper;                            // 0x00C4 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		}

		return uClassPointer;
	};

	void GetRegisteredPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outOutRegisteredPlayers);
	bool IsPlayerInSession(const class FName& SessionName, const struct FUniqueNetId& PlayerID);
	class FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


