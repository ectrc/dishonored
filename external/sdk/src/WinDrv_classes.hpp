/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: WinDrv_classes.hpp
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

// Class WinDrv.WindowsClient
// 0x0188 (0x0050 - 0x01D8)
class UWindowsClient : public UClient
{
public:
	uint8_t                                            UnknownData00[0x174];                        // 0x0050 (0x0174) MISSED OFFSET
	int32_t                                            AllowJoystickInput;                            // 0x01C4 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                            UnknownData01[0x10];                          // 0x01C8 (0x0010) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.WindowsClient");
		}

		return uClassPointer;
	};

};

// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0050 - 0x0050)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class WinDrv.XnaForceFeedbackManager");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


