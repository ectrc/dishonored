/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: AkAudio_structs.hpp
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

// ScriptStruct AkAudio.AkComponent.AkPlayingRadius
// 0x0008
struct FAkPlayingRadius
{
	int32_t                                            m_PlayingID;                                   // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_Radius;                                      // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x000C
struct FAkEventTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class UAkEvent*                                    Event;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UInterpTrackAkEventKeyProperties*            Properties;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/
