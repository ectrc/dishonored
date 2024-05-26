/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: AkAudio_classes.hpp
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

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0004 (0x0058 - 0x005C)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                  // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAmbientSound
// 0x000C (0x024C - 0x0258)
class AAkAmbientSound : public AKeypoint
{
public:
	uint32_t                                           bPlayOnStartAll : 1;                           // 0x024C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bSaveable : 1;                               // 0x024C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           StopWhenOwnerIsDestroyed : 1;                  // 0x024C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           m_bRegistered : 1;                             // 0x024C (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           m_bStarted : 1;                                // 0x024C (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	class UAkEvent*                                    PlayEvent;                                     // 0x0250 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_bEnded;                                      // 0x0254 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAmbientSoundMovable
// 0x0000 (0x0258 - 0x0258)
class AAkAmbientSoundMovable : public AAkAmbientSound
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAmbientSoundMovable");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAudioDevice
// 0x004C (0x003C - 0x0088)
class UAkAudioDevice : public USubsystem
{
public:
	uint8_t                                            UnknownData00[0x4C];                          // 0x003C (0x004C) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAudioDevice");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkComponent
// 0x001B (0x0051 - 0x006C)
class UAkComponent : public UActorComponent
{
public:
	class FName                                        BoneName;                                      // 0x0054 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStopWhenOwnerDestroyed : 1;                   // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FAkPlayingRadius>              m_PlayingRadii;                                // 0x0060 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkComponent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkEvent
// 0x000C (0x007C - 0x0088)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	class TArray<struct FAkEventTrackKey>              AkEvents;                                      // 0x007C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkRTPC
// 0x000C (0x0090 - 0x009C)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	class FString                                      Param;                                         // 0x0090 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkEvent
// 0x0014 (0x0040 - 0x0054)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	class TArray<int32_t>                              m_lStartedAkEvent;                             // 0x0040 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastUpdatePosition;                            // 0x004C (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bPreviewWasPlaying : 1;                      // 0x0050 (0x0004) [0x0000000800002000] [0x00000001] (CPF_Transient | CPF_EditorOnly)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x0040 - 0x0040)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x00F8 - 0x00F8)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkClearBanks");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkLoadBank
// 0x000C (0x0108 - 0x0114)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	uint32_t                                           Async : 1;                                     // 0x0108 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bWaitingCallback : 1;                          // 0x0108 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UAkBank*                                     Bank;                                          // 0x010C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Signal;                                        // 0x0110 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkLoadBank");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPostEvent
// 0x0010 (0x0108 - 0x0118)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	int32_t                                            Signal;                                        // 0x0108 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FPointer                                    m_pAudioSystem;                                // 0x010C (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint32_t                                           m_bOverrideCustomBGM : 1;                      // 0x0110 (0x0004) [0x0002000000000001] [0x00000001] (CPF_Edit)
	class UAkEvent*                                    Event;                                         // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPostTrigger
// 0x000C (0x00F8 - 0x0104)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	class FString                                      Trigger;                                       // 0x00F8 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0014 (0x0108 - 0x011C)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	class FString                                      Param;                                         // 0x0108 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Value;                                         // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           Running : 1;                                   // 0x0118 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetState
// 0x0018 (0x00F8 - 0x0110)
class USeqAct_AkSetState : public USequenceAction
{
public:
	class FString                                      StateGroup;                                    // 0x00F8 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      State;                                         // 0x0104 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0018 (0x00F8 - 0x0110)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	class FString                                      SwitchGroup;                                   // 0x00F8 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Switch;                                        // 0x0104 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x00F8 - 0x00F8)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkStartAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x00F8 - 0x00F8)
class USeqAct_AkStopAll : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
		}

		return uClassPointer;
	};

};

// Class AkAudio.ActorFactoryAkAmbientSoundMovable
// 0x0000 (0x005C - 0x005C)
class UActorFactoryAkAmbientSoundMovable : public UActorFactoryAkAmbientSound
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSoundMovable");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/