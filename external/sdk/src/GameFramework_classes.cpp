/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: GameFramework_classes.cpp
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

// Function GameFramework.GameCrowdAgent.OnDestroy
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Destroy*         Action                         (CPF_Parm)

void AGameCrowdAgent::OnDestroy(class USeqAct_Destroy* Action)
{
	static UFunction* uFnOnDestroy = nullptr;

	if (!uFnOnDestroy)
	{
		uFnOnDestroy = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.OnDestroy");
	}

	AGameCrowdAgent_execOnDestroy_Params OnDestroy_Params;
	memset(&OnDestroy_Params, 0, sizeof(OnDestroy_Params));
	OnDestroy_Params.Action = Action;

	this->ProcessEvent(uFnOnDestroy, &OnDestroy_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.OnDestroyedByKismet
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29517])
// Parameter Info:

void AGameCrowdAgent::OnDestroyedByKismet()
{
	static UFunction* uFnOnDestroyedByKismet = nullptr;

	if (!uFnOnDestroyedByKismet)
	{
		uFnOnDestroyedByKismet = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.OnDestroyedByKismet");
	}

	AGameCrowdAgent_execOnDestroyedByKismet_Params OnDestroyedByKismet_Params;
	memset(&OnDestroyedByKismet_Params, 0, sizeof(OnDestroyedByKismet_Params));

	uFnOnDestroyedByKismet->iNative = 0;
	uFnOnDestroyedByKismet->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOnDestroyedByKismet, &OnDestroyedByKismet_Params, nullptr);
	uFnOnDestroyedByKismet->FunctionFlags |= 0x400;
	uFnOnDestroyedByKismet->iNative = 29517;
};

// Function GameFramework.GameCrowdAgent.TakeDamage
// [0x00024400] (FUNC_Native | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[13766])
// Parameter Info:
// int32_t                        DamageAmount                   (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UDamageType*             DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm | CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm | CPF_Parm)

void AGameCrowdAgent::TakeDamage(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UDamageType* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static UFunction* uFnTakeDamage = nullptr;

	if (!uFnTakeDamage)
	{
		uFnTakeDamage = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.TakeDamage");
	}

	AGameCrowdAgent_execTakeDamage_Params TakeDamage_Params;
	memset(&TakeDamage_Params, 0, sizeof(TakeDamage_Params));
	memcpy_s(&TakeDamage_Params.DamageAmount, sizeof(TakeDamage_Params.DamageAmount), &DamageAmount, sizeof(DamageAmount));
	TakeDamage_Params.EventInstigator = EventInstigator;
	memcpy_s(&TakeDamage_Params.HitLocation, sizeof(TakeDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&TakeDamage_Params.Momentum, sizeof(TakeDamage_Params.Momentum), &Momentum, sizeof(Momentum));
	TakeDamage_Params.DamageType = DamageType;
	memcpy_s(&TakeDamage_Params.HitInfo, sizeof(TakeDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	TakeDamage_Params.DamageCauser = DamageCauser;

	uFnTakeDamage->iNative = 0;
	uFnTakeDamage->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnTakeDamage, &TakeDamage_Params, nullptr);
	uFnTakeDamage->FunctionFlags |= 0x400;
	uFnTakeDamage->iNative = 13766;
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameCrowdAgent::eventFireDeathEvent()
{
	static UFunction* uFnFireDeathEvent = nullptr;

	if (!uFnFireDeathEvent)
	{
		uFnFireDeathEvent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.FireDeathEvent");
	}

	AGameCrowdAgent_eventFireDeathEvent_Params FireDeathEvent_Params;
	memset(&FireDeathEvent_Params, 0, sizeof(FireDeathEvent_Params));

	this->ProcessEvent(uFnFireDeathEvent, &FireDeathEvent_Params, nullptr);
};

// Function GameFramework.GameCrowdAgent.CalcCamera
// [0x00C20102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          fDeltaTime                     (CPF_Parm)
// struct FVector                 out_CamLoc                     (CPF_Parm | CPF_OutParm)
// struct FRotator                out_CamRot                     (CPF_Parm | CPF_OutParm)
// float                          out_FOV                        (CPF_Parm | CPF_OutParm)

bool AGameCrowdAgent::CalcCamera(float fDeltaTime, struct FVector& out_CamLoc, struct FRotator& out_CamRot, float& out_FOV)
{
	static UFunction* uFnCalcCamera = nullptr;

	if (!uFnCalcCamera)
	{
		uFnCalcCamera = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.CalcCamera");
	}

	AGameCrowdAgent_execCalcCamera_Params CalcCamera_Params;
	memset(&CalcCamera_Params, 0, sizeof(CalcCamera_Params));
	memcpy_s(&CalcCamera_Params.fDeltaTime, sizeof(CalcCamera_Params.fDeltaTime), &fDeltaTime, sizeof(fDeltaTime));
	memcpy_s(&CalcCamera_Params.out_CamLoc, sizeof(CalcCamera_Params.out_CamLoc), &out_CamLoc, sizeof(out_CamLoc));
	memcpy_s(&CalcCamera_Params.out_CamRot, sizeof(CalcCamera_Params.out_CamRot), &out_CamRot, sizeof(out_CamRot));
	memcpy_s(&CalcCamera_Params.out_FOV, sizeof(CalcCamera_Params.out_FOV), &out_FOV, sizeof(out_FOV));

	this->ProcessEvent(uFnCalcCamera, &CalcCamera_Params, nullptr);

	memcpy_s(&out_CamLoc, sizeof(out_CamLoc), &CalcCamera_Params.out_CamLoc, sizeof(CalcCamera_Params.out_CamLoc));
	memcpy_s(&out_CamRot, sizeof(out_CamRot), &CalcCamera_Params.out_CamRot, sizeof(CalcCamera_Params.out_CamRot));
	memcpy_s(&out_FOV, sizeof(out_FOV), &CalcCamera_Params.out_FOV, sizeof(CalcCamera_Params.out_FOV));

	return CalcCamera_Params.ReturnValue;
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AGameCrowdAgent::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.DisplayDebug");
	}

	AGameCrowdAgent_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	DisplayDebug_Params.HUD = HUD;
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function GameFramework.GameCrowdAgent.VolumeBasedDestroy
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[27203])
// Parameter Info:
// class APhysicsVolume*          PV                             (CPF_Parm)

void AGameCrowdAgent::VolumeBasedDestroy(class APhysicsVolume* PV)
{
	static UFunction* uFnVolumeBasedDestroy = nullptr;

	if (!uFnVolumeBasedDestroy)
	{
		uFnVolumeBasedDestroy = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.VolumeBasedDestroy");
	}

	AGameCrowdAgent_execVolumeBasedDestroy_Params VolumeBasedDestroy_Params;
	memset(&VolumeBasedDestroy_Params, 0, sizeof(VolumeBasedDestroy_Params));
	VolumeBasedDestroy_Params.PV = PV;

	uFnVolumeBasedDestroy->iNative = 0;
	uFnVolumeBasedDestroy->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnVolumeBasedDestroy, &VolumeBasedDestroy_Params, nullptr);
	uFnVolumeBasedDestroy->FunctionFlags |= 0x400;
	uFnVolumeBasedDestroy->iNative = 27203;
};

// Function GameFramework.GameCrowdAgent.OutsideWorldBounds
// [0x00020D00] (FUNC_Simulated | FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13675])
// Parameter Info:

void AGameCrowdAgent::eventOutsideWorldBounds()
{
	static UFunction* uFnOutsideWorldBounds = nullptr;

	if (!uFnOutsideWorldBounds)
	{
		uFnOutsideWorldBounds = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.OutsideWorldBounds");
	}

	AGameCrowdAgent_eventOutsideWorldBounds_Params OutsideWorldBounds_Params;
	memset(&OutsideWorldBounds_Params, 0, sizeof(OutsideWorldBounds_Params));

	uFnOutsideWorldBounds->iNative = 0;
	uFnOutsideWorldBounds->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOutsideWorldBounds, &OutsideWorldBounds_Params, nullptr);
	uFnOutsideWorldBounds->FunctionFlags |= 0x400;
	uFnOutsideWorldBounds->iNative = 13675;
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// [0x00020D00] (FUNC_Simulated | FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags) (iNative[13523])
// Parameter Info:
// class UDamageType*             dmgType                        (CPF_Parm)

void AGameCrowdAgent::eventFellOutOfWorld(class UDamageType* dmgType)
{
	static UFunction* uFnFellOutOfWorld = nullptr;

	if (!uFnFellOutOfWorld)
	{
		uFnFellOutOfWorld = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.FellOutOfWorld");
	}

	AGameCrowdAgent_eventFellOutOfWorld_Params FellOutOfWorld_Params;
	memset(&FellOutOfWorld_Params, 0, sizeof(FellOutOfWorld_Params));
	FellOutOfWorld_Params.dmgType = dmgType;

	uFnFellOutOfWorld->iNative = 0;
	uFnFellOutOfWorld->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnFellOutOfWorld, &FellOutOfWorld_Params, nullptr);
	uFnFellOutOfWorld->FunctionFlags |= 0x400;
	uFnFellOutOfWorld->iNative = 13523;
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29395])
// Parameter Info:
// class AActor*                  SpawnLoc                       (CPF_Parm)
// class AGameCrowdAgent*         AgentTemplate                  (CPF_Parm)
// float                          AgentWarmupTime                (CPF_Parm)
// uint32_t                       bWarmupPosition                (CPF_Parm)
// uint32_t                       bCheckWarmupVisibility         (CPF_Parm)

void AGameCrowdAgent::InitializeAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, float AgentWarmupTime, bool bWarmupPosition, bool bCheckWarmupVisibility)
{
	static UFunction* uFnInitializeAgent = nullptr;

	if (!uFnInitializeAgent)
	{
		uFnInitializeAgent = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.InitializeAgent");
	}

	AGameCrowdAgent_execInitializeAgent_Params InitializeAgent_Params;
	memset(&InitializeAgent_Params, 0, sizeof(InitializeAgent_Params));
	InitializeAgent_Params.SpawnLoc = SpawnLoc;
	InitializeAgent_Params.AgentTemplate = AgentTemplate;
	memcpy_s(&InitializeAgent_Params.AgentWarmupTime, sizeof(InitializeAgent_Params.AgentWarmupTime), &AgentWarmupTime, sizeof(AgentWarmupTime));
	InitializeAgent_Params.bWarmupPosition = bWarmupPosition;
	InitializeAgent_Params.bCheckWarmupVisibility = bCheckWarmupVisibility;

	uFnInitializeAgent->iNative = 0;
	uFnInitializeAgent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnInitializeAgent, &InitializeAgent_Params, nullptr);
	uFnInitializeAgent->FunctionFlags |= 0x400;
	uFnInitializeAgent->iNative = 29395;
};

// Function GameFramework.GameCrowdAgent.PlayDeath
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29537])
// Parameter Info:
// class AController*             Killer                         (CPF_Parm)
// struct FVector                 KillMomentum                   (CPF_Parm)
// class UDamageType*             DamageType                     (CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_Parm)

void AGameCrowdAgent::PlayDeath(class AController* Killer, const struct FVector& KillMomentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static UFunction* uFnPlayDeath = nullptr;

	if (!uFnPlayDeath)
	{
		uFnPlayDeath = UFunction::FindFunction("Function GameFramework.GameCrowdAgent.PlayDeath");
	}

	AGameCrowdAgent_execPlayDeath_Params PlayDeath_Params;
	memset(&PlayDeath_Params, 0, sizeof(PlayDeath_Params));
	PlayDeath_Params.Killer = Killer;
	memcpy_s(&PlayDeath_Params.KillMomentum, sizeof(PlayDeath_Params.KillMomentum), &KillMomentum, sizeof(KillMomentum));
	PlayDeath_Params.DamageType = DamageType;
	PlayDeath_Params.DamageCauser = DamageCauser;

	uFnPlayDeath->iNative = 0;
	uFnPlayDeath->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPlayDeath, &PlayDeath_Params, nullptr);
	uFnPlayDeath->FunctionFlags |= 0x400;
	uFnPlayDeath->iNative = 29537;
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[13641])
// Parameter Info:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void AGameCrowdAgentSkeletal::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static UFunction* uFnOnAnimEnd = nullptr;

	if (!uFnOnAnimEnd)
	{
		uFnOnAnimEnd = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd");
	}

	AGameCrowdAgentSkeletal_execOnAnimEnd_Params OnAnimEnd_Params;
	memset(&OnAnimEnd_Params, 0, sizeof(OnAnimEnd_Params));
	OnAnimEnd_Params.SeqNode = SeqNode;
	memcpy_s(&OnAnimEnd_Params.PlayedTime, sizeof(OnAnimEnd_Params.PlayedTime), &PlayedTime, sizeof(PlayedTime));
	memcpy_s(&OnAnimEnd_Params.ExcessTime, sizeof(OnAnimEnd_Params.ExcessTime), &ExcessTime, sizeof(ExcessTime));

	uFnOnAnimEnd->iNative = 0;
	uFnOnAnimEnd->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnOnAnimEnd, &OnAnimEnd_Params, nullptr);
	uFnOnAnimEnd->FunctionFlags |= 0x400;
	uFnOnAnimEnd->iNative = 13641;
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29537])
// Parameter Info:
// class AController*             Killer                         (CPF_Parm)
// struct FVector                 KillMomentum                   (CPF_Parm)
// class UDamageType*             DamageType                     (CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_Parm)

void AGameCrowdAgentSkeletal::PlayDeath(class AController* Killer, const struct FVector& KillMomentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static UFunction* uFnPlayDeath = nullptr;

	if (!uFnPlayDeath)
	{
		uFnPlayDeath = UFunction::FindFunction("Function GameFramework.GameCrowdAgentSkeletal.PlayDeath");
	}

	AGameCrowdAgentSkeletal_execPlayDeath_Params PlayDeath_Params;
	memset(&PlayDeath_Params, 0, sizeof(PlayDeath_Params));
	PlayDeath_Params.Killer = Killer;
	memcpy_s(&PlayDeath_Params.KillMomentum, sizeof(PlayDeath_Params.KillMomentum), &KillMomentum, sizeof(KillMomentum));
	PlayDeath_Params.DamageType = DamageType;
	PlayDeath_Params.DamageCauser = DamageCauser;

	uFnPlayDeath->iNative = 0;
	uFnPlayDeath->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPlayDeath, &PlayDeath_Params, nullptr);
	uFnPlayDeath->FunctionFlags |= 0x400;
	uFnPlayDeath->iNative = 29537;
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AGameCrowdInteractionPoint::OnToggle(class USeqAct_Toggle* Action)
{
	static UFunction* uFnOnToggle = nullptr;

	if (!uFnOnToggle)
	{
		uFnOnToggle = UFunction::FindFunction("Function GameFramework.GameCrowdInteractionPoint.OnToggle");
	}

	AGameCrowdInteractionPoint_execOnToggle_Params OnToggle_Params;
	memset(&OnToggle_Params, 0, sizeof(OnToggle_Params));
	OnToggle_Params.Action = Action;

	this->ProcessEvent(uFnOnToggle, &OnToggle_Params, nullptr);
};

// Function GameFramework.GameCrowdInteractionPoint.SetEnabled
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[13734])
// Parameter Info:
// uint32_t                       _bIsEnabled                    (CPF_Parm)

void AGameCrowdInteractionPoint::SetEnabled(bool _bIsEnabled)
{
	static UFunction* uFnSetEnabled = nullptr;

	if (!uFnSetEnabled)
	{
		uFnSetEnabled = UFunction::FindFunction("Function GameFramework.GameCrowdInteractionPoint.SetEnabled");
	}

	AGameCrowdInteractionPoint_execSetEnabled_Params SetEnabled_Params;
	memset(&SetEnabled_Params, 0, sizeof(SetEnabled_Params));
	SetEnabled_Params._bIsEnabled = _bIsEnabled;

	uFnSetEnabled->iNative = 0;
	uFnSetEnabled->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetEnabled, &SetEnabled_Params, nullptr);
	uFnSetEnabled->FunctionFlags |= 0x400;
	uFnSetEnabled->iNative = 13734;
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29151])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

bool AGameCrowdDestination::AllowableDestinationFor(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnAllowableDestinationFor = nullptr;

	if (!uFnAllowableDestinationFor)
	{
		uFnAllowableDestinationFor = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.AllowableDestinationFor");
	}

	AGameCrowdDestination_execAllowableDestinationFor_Params AllowableDestinationFor_Params;
	memset(&AllowableDestinationFor_Params, 0, sizeof(AllowableDestinationFor_Params));
	AllowableDestinationFor_Params.Agent = Agent;

	uFnAllowableDestinationFor->iNative = 0;
	uFnAllowableDestinationFor->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAllowableDestinationFor, &AllowableDestinationFor_Params, nullptr);
	uFnAllowableDestinationFor->FunctionFlags |= 0x400;
	uFnAllowableDestinationFor->iNative = 29151;

	return AllowableDestinationFor_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29392])
// Parameter Info:
// class AGameCrowdAgent*         ArrivingAgent                  (CPF_Parm)

void AGameCrowdDestination::IncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent)
{
	static UFunction* uFnIncrementCustomerCount = nullptr;

	if (!uFnIncrementCustomerCount)
	{
		uFnIncrementCustomerCount = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.IncrementCustomerCount");
	}

	AGameCrowdDestination_execIncrementCustomerCount_Params IncrementCustomerCount_Params;
	memset(&IncrementCustomerCount_Params, 0, sizeof(IncrementCustomerCount_Params));
	IncrementCustomerCount_Params.ArrivingAgent = ArrivingAgent;

	uFnIncrementCustomerCount->iNative = 0;
	uFnIncrementCustomerCount->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIncrementCustomerCount, &IncrementCustomerCount_Params, nullptr);
	uFnIncrementCustomerCount->FunctionFlags |= 0x400;
	uFnIncrementCustomerCount->iNative = 29392;
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29293])
// Parameter Info:
// class AGameCrowdAgent*         DepartingAgent                 (CPF_Parm)

void AGameCrowdDestination::DecrementCustomerCount(class AGameCrowdAgent* DepartingAgent)
{
	static UFunction* uFnDecrementCustomerCount = nullptr;

	if (!uFnDecrementCustomerCount)
	{
		uFnDecrementCustomerCount = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.DecrementCustomerCount");
	}

	AGameCrowdDestination_execDecrementCustomerCount_Params DecrementCustomerCount_Params;
	memset(&DecrementCustomerCount_Params, 0, sizeof(DecrementCustomerCount_Params));
	DecrementCustomerCount_Params.DepartingAgent = DepartingAgent;

	uFnDecrementCustomerCount->iNative = 0;
	uFnDecrementCustomerCount->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnDecrementCustomerCount, &DecrementCustomerCount_Params, nullptr);
	uFnDecrementCustomerCount->FunctionFlags |= 0x400;
	uFnDecrementCustomerCount->iNative = 29293;
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// [0x00020500] (FUNC_Simulated | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29536])
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// uint32_t                       bIgnoreRestrictions            (CPF_Parm)

void AGameCrowdDestination::PickNewDestinationFor(class AGameCrowdAgent* Agent, bool bIgnoreRestrictions)
{
	static UFunction* uFnPickNewDestinationFor = nullptr;

	if (!uFnPickNewDestinationFor)
	{
		uFnPickNewDestinationFor = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.PickNewDestinationFor");
	}

	AGameCrowdDestination_execPickNewDestinationFor_Params PickNewDestinationFor_Params;
	memset(&PickNewDestinationFor_Params, 0, sizeof(PickNewDestinationFor_Params));
	PickNewDestinationFor_Params.Agent = Agent;
	PickNewDestinationFor_Params.bIgnoreRestrictions = bIgnoreRestrictions;

	uFnPickNewDestinationFor->iNative = 0;
	uFnPickNewDestinationFor->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPickNewDestinationFor, &PickNewDestinationFor_Params, nullptr);
	uFnPickNewDestinationFor->FunctionFlags |= 0x400;
	uFnPickNewDestinationFor->iNative = 29536;
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29551])
// Parameter Info:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGameCrowdDestination::ReachedDestination(class AGameCrowdAgent* Agent)
{
	static UFunction* uFnReachedDestination = nullptr;

	if (!uFnReachedDestination)
	{
		uFnReachedDestination = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.ReachedDestination");
	}

	AGameCrowdDestination_execReachedDestination_Params ReachedDestination_Params;
	memset(&ReachedDestination_Params, 0, sizeof(ReachedDestination_Params));
	ReachedDestination_Params.Agent = Agent;

	uFnReachedDestination->iNative = 0;
	uFnReachedDestination->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReachedDestination, &ReachedDestination_Params, nullptr);
	uFnReachedDestination->FunctionFlags |= 0x400;
	uFnReachedDestination->iNative = 29551;
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29550])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// struct FVector                 TestPosition                   (CPF_Parm)
// uint32_t                       bTestExactly                   (CPF_Parm)

bool AGameCrowdDestination::ReachedByAgent(class AGameCrowdAgent* Agent, const struct FVector& TestPosition, bool bTestExactly)
{
	static UFunction* uFnReachedByAgent = nullptr;

	if (!uFnReachedByAgent)
	{
		uFnReachedByAgent = UFunction::FindFunction("Function GameFramework.GameCrowdDestination.ReachedByAgent");
	}

	AGameCrowdDestination_execReachedByAgent_Params ReachedByAgent_Params;
	memset(&ReachedByAgent_Params, 0, sizeof(ReachedByAgent_Params));
	ReachedByAgent_Params.Agent = Agent;
	memcpy_s(&ReachedByAgent_Params.TestPosition, sizeof(ReachedByAgent_Params.TestPosition), &TestPosition, sizeof(TestPosition));
	ReachedByAgent_Params.bTestExactly = bTestExactly;

	uFnReachedByAgent->iNative = 0;
	uFnReachedByAgent->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnReachedByAgent, &ReachedByAgent_Params, nullptr);
	uFnReachedByAgent->FunctionFlags |= 0x400;
	uFnReachedByAgent->iNative = 29550;

	return ReachedByAgent_Params.ReturnValue;
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// [0x00040501] (FUNC_Final | FUNC_Simulated | FUNC_Native | FUNC_Private | FUNC_AllFlags) (iNative[29135])
// Parameter Info:

void AGameCrowdDestinationQueuePoint::ActuallyAdvance()
{
	static UFunction* uFnActuallyAdvance = nullptr;

	if (!uFnActuallyAdvance)
	{
		uFnActuallyAdvance = UFunction::FindFunction("Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance");
	}

	AGameCrowdDestinationQueuePoint_execActuallyAdvance_Params ActuallyAdvance_Params;
	memset(&ActuallyAdvance_Params, 0, sizeof(ActuallyAdvance_Params));

	uFnActuallyAdvance->iNative = 0;
	uFnActuallyAdvance->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnActuallyAdvance, &ActuallyAdvance_Params, nullptr);
	uFnActuallyAdvance->FunctionFlags |= 0x400;
	uFnActuallyAdvance->iNative = 29135;
};

// Function GameFramework.GameDamageType.HandleDamageFX
// [0x00422000] (FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AGamePawn*               DamagedPawn                    (CPF_Parm)
// struct FTakeHitInfo            HitInfo                        (CPF_Const | CPF_Parm | CPF_OutParm)

void UGameDamageType::HandleDamageFX(class AGamePawn* DamagedPawn, struct FTakeHitInfo& HitInfo)
{
	static UFunction* uFnHandleDamageFX = nullptr;

	if (!uFnHandleDamageFX)
	{
		uFnHandleDamageFX = UFunction::FindFunction("Function GameFramework.GameDamageType.HandleDamageFX");
	}

	UGameDamageType_execHandleDamageFX_Params HandleDamageFX_Params;
	memset(&HandleDamageFX_Params, 0, sizeof(HandleDamageFX_Params));
	HandleDamageFX_Params.DamagedPawn = DamagedPawn;
	memcpy_s(&HandleDamageFX_Params.HitInfo, sizeof(HandleDamageFX_Params.HitInfo), &HitInfo, sizeof(HitInfo));

	UGameDamageType::StaticClass()->ProcessEvent(uFnHandleDamageFX, &HandleDamageFX_Params, nullptr);

	memcpy_s(&HitInfo, sizeof(HitInfo), &HandleDamageFX_Params.HitInfo, sizeof(HandleDamageFX_Params.HitInfo));
};

// Function GameFramework.GameDamageType.ShouldHeadShotGib
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   TestPawn                       (CPF_Parm)
// class APawn*                   Instigator                     (CPF_Parm)

bool UGameDamageType::ShouldHeadShotGib(class APawn* TestPawn, class APawn* Instigator)
{
	static UFunction* uFnShouldHeadShotGib = nullptr;

	if (!uFnShouldHeadShotGib)
	{
		uFnShouldHeadShotGib = UFunction::FindFunction("Function GameFramework.GameDamageType.ShouldHeadShotGib");
	}

	UGameDamageType_execShouldHeadShotGib_Params ShouldHeadShotGib_Params;
	memset(&ShouldHeadShotGib_Params, 0, sizeof(ShouldHeadShotGib_Params));
	ShouldHeadShotGib_Params.TestPawn = TestPawn;
	ShouldHeadShotGib_Params.Instigator = Instigator;

	UGameDamageType::StaticClass()->ProcessEvent(uFnShouldHeadShotGib, &ShouldHeadShotGib_Params, nullptr);

	return ShouldHeadShotGib_Params.ReturnValue;
};

// Function GameFramework.GameDamageType.IsScriptedDamageType
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameDamageType::IsScriptedDamageType()
{
	static UFunction* uFnIsScriptedDamageType = nullptr;

	if (!uFnIsScriptedDamageType)
	{
		uFnIsScriptedDamageType = UFunction::FindFunction("Function GameFramework.GameDamageType.IsScriptedDamageType");
	}

	UGameDamageType_execIsScriptedDamageType_Params IsScriptedDamageType_Params;
	memset(&IsScriptedDamageType_Params, 0, sizeof(IsScriptedDamageType_Params));

	UGameDamageType::StaticClass()->ProcessEvent(uFnIsScriptedDamageType, &IsScriptedDamageType_Params, nullptr);

	return IsScriptedDamageType_Params.ReturnValue;
};

// Function GameFramework.GameDamageType.ShouldPlayForceFeedback
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   DamagedPawn                    (CPF_Parm)

bool UGameDamageType::ShouldPlayForceFeedback(class APawn* DamagedPawn)
{
	static UFunction* uFnShouldPlayForceFeedback = nullptr;

	if (!uFnShouldPlayForceFeedback)
	{
		uFnShouldPlayForceFeedback = UFunction::FindFunction("Function GameFramework.GameDamageType.ShouldPlayForceFeedback");
	}

	UGameDamageType_execShouldPlayForceFeedback_Params ShouldPlayForceFeedback_Params;
	memset(&ShouldPlayForceFeedback_Params, 0, sizeof(ShouldPlayForceFeedback_Params));
	ShouldPlayForceFeedback_Params.DamagedPawn = DamagedPawn;

	UGameDamageType::StaticClass()->ProcessEvent(uFnShouldPlayForceFeedback, &ShouldPlayForceFeedback_Params, nullptr);

	return ShouldPlayForceFeedback_Params.ReturnValue;
};

// Function GameFramework.GameDamageType.HandleDeadPlayer
// [0x00022000] (FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AGamePlayerController*   Player                         (CPF_Parm)

void UGameDamageType::HandleDeadPlayer(class AGamePlayerController* Player)
{
	static UFunction* uFnHandleDeadPlayer = nullptr;

	if (!uFnHandleDeadPlayer)
	{
		uFnHandleDeadPlayer = UFunction::FindFunction("Function GameFramework.GameDamageType.HandleDeadPlayer");
	}

	UGameDamageType_execHandleDeadPlayer_Params HandleDeadPlayer_Params;
	memset(&HandleDeadPlayer_Params, 0, sizeof(HandleDeadPlayer_Params));
	HandleDeadPlayer_Params.Player = Player;

	UGameDamageType::StaticClass()->ProcessEvent(uFnHandleDeadPlayer, &HandleDeadPlayer_Params, nullptr);
};

// Function GameFramework.GameDamageType.HandleKilledPawn
// [0x00022000] (FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   KilledPawn                     (CPF_Parm)
// class APawn*                   Instigator                     (CPF_Parm)

void UGameDamageType::HandleKilledPawn(class APawn* KilledPawn, class APawn* Instigator)
{
	static UFunction* uFnHandleKilledPawn = nullptr;

	if (!uFnHandleKilledPawn)
	{
		uFnHandleKilledPawn = UFunction::FindFunction("Function GameFramework.GameDamageType.HandleKilledPawn");
	}

	UGameDamageType_execHandleKilledPawn_Params HandleKilledPawn_Params;
	memset(&HandleKilledPawn_Params, 0, sizeof(HandleKilledPawn_Params));
	HandleKilledPawn_Params.KilledPawn = KilledPawn;
	HandleKilledPawn_Params.Instigator = Instigator;

	UGameDamageType::StaticClass()->ProcessEvent(uFnHandleKilledPawn, &HandleKilledPawn_Params, nullptr);
};

// Function GameFramework.GameDamageType.HandleDamagedPawn
// [0x00022000] (FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   DamagedPawn                    (CPF_Parm)
// class APawn*                   Instigator                     (CPF_Parm)
// int32_t                        DamageAmt                      (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)

void UGameDamageType::HandleDamagedPawn(class APawn* DamagedPawn, class APawn* Instigator, int32_t DamageAmt, const struct FVector& Momentum)
{
	static UFunction* uFnHandleDamagedPawn = nullptr;

	if (!uFnHandleDamagedPawn)
	{
		uFnHandleDamagedPawn = UFunction::FindFunction("Function GameFramework.GameDamageType.HandleDamagedPawn");
	}

	UGameDamageType_execHandleDamagedPawn_Params HandleDamagedPawn_Params;
	memset(&HandleDamagedPawn_Params, 0, sizeof(HandleDamagedPawn_Params));
	HandleDamagedPawn_Params.DamagedPawn = DamagedPawn;
	HandleDamagedPawn_Params.Instigator = Instigator;
	memcpy_s(&HandleDamagedPawn_Params.DamageAmt, sizeof(HandleDamagedPawn_Params.DamageAmt), &DamageAmt, sizeof(DamageAmt));
	memcpy_s(&HandleDamagedPawn_Params.Momentum, sizeof(HandleDamagedPawn_Params.Momentum), &Momentum, sizeof(Momentum));

	UGameDamageType::StaticClass()->ProcessEvent(uFnHandleDamagedPawn, &HandleDamagedPawn_Params, nullptr);
};

// Function GameFramework.GameDamageType.ModifyDamage
// [0x00422000] (FUNC_Static | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   Victim                         (CPF_Parm)
// class AController*             InstigatedBy                   (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_Parm)
// int32_t                        out_Damage                     (CPF_Parm | CPF_OutParm)
// struct FVector                 out_Momentum                   (CPF_Parm | CPF_OutParm)

void UGameDamageType::ModifyDamage(class APawn* Victim, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FTraceHitInfo& HitInfo, int32_t& out_Damage, struct FVector& out_Momentum)
{
	static UFunction* uFnModifyDamage = nullptr;

	if (!uFnModifyDamage)
	{
		uFnModifyDamage = UFunction::FindFunction("Function GameFramework.GameDamageType.ModifyDamage");
	}

	UGameDamageType_execModifyDamage_Params ModifyDamage_Params;
	memset(&ModifyDamage_Params, 0, sizeof(ModifyDamage_Params));
	ModifyDamage_Params.Victim = Victim;
	ModifyDamage_Params.InstigatedBy = InstigatedBy;
	memcpy_s(&ModifyDamage_Params.HitLocation, sizeof(ModifyDamage_Params.HitLocation), &HitLocation, sizeof(HitLocation));
	memcpy_s(&ModifyDamage_Params.HitInfo, sizeof(ModifyDamage_Params.HitInfo), &HitInfo, sizeof(HitInfo));
	memcpy_s(&ModifyDamage_Params.out_Damage, sizeof(ModifyDamage_Params.out_Damage), &out_Damage, sizeof(out_Damage));
	memcpy_s(&ModifyDamage_Params.out_Momentum, sizeof(ModifyDamage_Params.out_Momentum), &out_Momentum, sizeof(out_Momentum));

	UGameDamageType::StaticClass()->ProcessEvent(uFnModifyDamage, &ModifyDamage_Params, nullptr);

	memcpy_s(&out_Damage, sizeof(out_Damage), &ModifyDamage_Params.out_Damage, sizeof(ModifyDamage_Params.out_Damage));
	memcpy_s(&out_Momentum, sizeof(out_Momentum), &ModifyDamage_Params.out_Momentum, sizeof(ModifyDamage_Params.out_Momentum));
};

// Function GameFramework.GameDamageType.ShouldGib
// [0x00022002] (FUNC_Defined | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   TestPawn                       (CPF_Parm)
// class APawn*                   Instigator                     (CPF_Parm)

bool UGameDamageType::ShouldGib(class APawn* TestPawn, class APawn* Instigator)
{
	static UFunction* uFnShouldGib = nullptr;

	if (!uFnShouldGib)
	{
		uFnShouldGib = UFunction::FindFunction("Function GameFramework.GameDamageType.ShouldGib");
	}

	UGameDamageType_execShouldGib_Params ShouldGib_Params;
	memset(&ShouldGib_Params, 0, sizeof(ShouldGib_Params));
	ShouldGib_Params.TestPawn = TestPawn;
	ShouldGib_Params.Instigator = Instigator;

	UGameDamageType::StaticClass()->ProcessEvent(uFnShouldGib, &ShouldGib_Params, nullptr);

	return ShouldGib_Params.ReturnValue;
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UDamageType*             dmgType                        (CPF_Parm)

void AGameKActorSpawnableEffect::eventFellOutOfWorld(class UDamageType* dmgType)
{
	static UFunction* uFnFellOutOfWorld = nullptr;

	if (!uFnFellOutOfWorld)
	{
		uFnFellOutOfWorld = UFunction::FindFunction("Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld");
	}

	AGameKActorSpawnableEffect_eventFellOutOfWorld_Params FellOutOfWorld_Params;
	memset(&FellOutOfWorld_Params, 0, sizeof(FellOutOfWorld_Params));
	FellOutOfWorld_Params.dmgType = dmgType;

	this->ProcessEvent(uFnFellOutOfWorld, &FellOutOfWorld_Params, nullptr);
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// [0x00020900] (FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGameKActorSpawnableEffect::eventPostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay");
	}

	AGameKActorSpawnableEffect_eventPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGamePawn::ReattachMeshWithoutBeingSeen()
{
	static UFunction* uFnReattachMeshWithoutBeingSeen = nullptr;

	if (!uFnReattachMeshWithoutBeingSeen)
	{
		uFnReattachMeshWithoutBeingSeen = UFunction::FindFunction("Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen");
	}

	AGamePawn_execReattachMeshWithoutBeingSeen_Params ReattachMeshWithoutBeingSeen_Params;
	memset(&ReattachMeshWithoutBeingSeen_Params, 0, sizeof(ReattachMeshWithoutBeingSeen_Params));

	this->ProcessEvent(uFnReattachMeshWithoutBeingSeen, &ReattachMeshWithoutBeingSeen_Params, nullptr);
};

// Function GameFramework.GamePawn.ReattachMesh
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGamePawn::ReattachMesh()
{
	static UFunction* uFnReattachMesh = nullptr;

	if (!uFnReattachMesh)
	{
		uFnReattachMesh = UFunction::FindFunction("Function GameFramework.GamePawn.ReattachMesh");
	}

	AGamePawn_execReattachMesh_Params ReattachMesh_Params;
	memset(&ReattachMesh_Params, 0, sizeof(ReattachMesh_Params));

	this->ProcessEvent(uFnReattachMesh, &ReattachMesh_Params, nullptr);
};

// Function GameFramework.GamePawn.UpdateShadowSettings
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bInWantShadow                  (CPF_Parm)

void AGamePawn::eventUpdateShadowSettings(bool bInWantShadow)
{
	static UFunction* uFnUpdateShadowSettings = nullptr;

	if (!uFnUpdateShadowSettings)
	{
		uFnUpdateShadowSettings = UFunction::FindFunction("Function GameFramework.GamePawn.UpdateShadowSettings");
	}

	AGamePawn_eventUpdateShadowSettings_Params UpdateShadowSettings_Params;
	memset(&UpdateShadowSettings_Params, 0, sizeof(UpdateShadowSettings_Params));
	UpdateShadowSettings_Params.bInWantShadow = bInWantShadow;

	this->ProcessEvent(uFnUpdateShadowSettings, &UpdateShadowSettings_Params, nullptr);
};

// Function GameFramework.GamePlayerController.ClientColorFade
// [0xFFFF0000010201C0] (FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_Public | FUNC_NetClient | FUNC_AllFlags)
// Parameter Info:
// struct FColor                  FadeColor                      (CPF_Parm)
// uint8_t                        FromAlpha                      (CPF_Parm)
// uint8_t                        ToAlpha                        (CPF_Parm)
// float                          FadeTime                       (CPF_Parm)

void AGamePlayerController::ClientColorFade(const struct FColor& FadeColor, uint8_t FromAlpha, uint8_t ToAlpha, float FadeTime)
{
	static UFunction* uFnClientColorFade = nullptr;

	if (!uFnClientColorFade)
	{
		uFnClientColorFade = UFunction::FindFunction("Function GameFramework.GamePlayerController.ClientColorFade");
	}

	AGamePlayerController_execClientColorFade_Params ClientColorFade_Params;
	memset(&ClientColorFade_Params, 0, sizeof(ClientColorFade_Params));
	memcpy_s(&ClientColorFade_Params.FadeColor, sizeof(ClientColorFade_Params.FadeColor), &FadeColor, sizeof(FadeColor));
	memcpy_s(&ClientColorFade_Params.FromAlpha, sizeof(ClientColorFade_Params.FromAlpha), &FromAlpha, sizeof(FromAlpha));
	memcpy_s(&ClientColorFade_Params.ToAlpha, sizeof(ClientColorFade_Params.ToAlpha), &ToAlpha, sizeof(ToAlpha));
	memcpy_s(&ClientColorFade_Params.FadeTime, sizeof(ClientColorFade_Params.FadeTime), &FadeTime, sizeof(FadeTime));

	this->ProcessEvent(uFnClientColorFade, &ClientColorFade_Params, nullptr);
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00820802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bDesiredPauseState             (CPF_Parm)

void AGamePlayerController::eventWarmupPause(bool bDesiredPauseState)
{
	static UFunction* uFnWarmupPause = nullptr;

	if (!uFnWarmupPause)
	{
		uFnWarmupPause = UFunction::FindFunction("Function GameFramework.GamePlayerController.WarmupPause");
	}

	AGamePlayerController_eventWarmupPause_Params WarmupPause_Params;
	memset(&WarmupPause_Params, 0, sizeof(WarmupPause_Params));
	WarmupPause_Params.bDesiredPauseState = bDesiredPauseState;

	this->ProcessEvent(uFnWarmupPause, &WarmupPause_Params, nullptr);
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGamePlayerController::CanUnpauseWarmup()
{
	static UFunction* uFnCanUnpauseWarmup = nullptr;

	if (!uFnCanUnpauseWarmup)
	{
		uFnCanUnpauseWarmup = UFunction::FindFunction("Function GameFramework.GamePlayerController.CanUnpauseWarmup");
	}

	AGamePlayerController_execCanUnpauseWarmup_Params CanUnpauseWarmup_Params;
	memset(&CanUnpauseWarmup_Params, 0, sizeof(CanUnpauseWarmup_Params));

	this->ProcessEvent(uFnCanUnpauseWarmup, &CanUnpauseWarmup_Params, nullptr);

	return CanUnpauseWarmup_Params.ReturnValue;
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[29376])
// Parameter Info:
// class FString                  MovieName                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void AGamePlayerController::GetCurrentMovie(class FString& MovieName)
{
	static UFunction* uFnGetCurrentMovie = nullptr;

	if (!uFnGetCurrentMovie)
	{
		uFnGetCurrentMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.GetCurrentMovie");
	}

	AGamePlayerController_execGetCurrentMovie_Params GetCurrentMovie_Params;
	memset(&GetCurrentMovie_Params, 0, sizeof(GetCurrentMovie_Params));
	memcpy_s(&GetCurrentMovie_Params.MovieName, sizeof(GetCurrentMovie_Params.MovieName), &MovieName, sizeof(MovieName));

	uFnGetCurrentMovie->iNative = 0;
	uFnGetCurrentMovie->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetCurrentMovie, &GetCurrentMovie_Params, nullptr);
	uFnGetCurrentMovie->FunctionFlags |= 0x400;
	uFnGetCurrentMovie->iNative = 29376;

	memcpy_s(&MovieName, sizeof(MovieName), &GetCurrentMovie_Params.MovieName, sizeof(GetCurrentMovie_Params.MovieName));
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0xFFFF000001020DC1] (FUNC_Final | FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetClient | FUNC_AllFlags) (iNative[13783])
// Parameter Info:
// float                          DelayInSeconds                 (CPF_Parm)
// uint32_t                       bAllowMovieToFinish            (CPF_Parm)
// uint32_t                       bForceStopNonSkippable         (CPF_Parm)
// uint32_t                       bForceStopLoadingMovie         (CPF_Parm)

void AGamePlayerController::eventClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie)
{
	static UFunction* uFnClientStopMovie = nullptr;

	if (!uFnClientStopMovie)
	{
		uFnClientStopMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.ClientStopMovie");
	}

	AGamePlayerController_eventClientStopMovie_Params ClientStopMovie_Params;
	memset(&ClientStopMovie_Params, 0, sizeof(ClientStopMovie_Params));
	memcpy_s(&ClientStopMovie_Params.DelayInSeconds, sizeof(ClientStopMovie_Params.DelayInSeconds), &DelayInSeconds, sizeof(DelayInSeconds));
	ClientStopMovie_Params.bAllowMovieToFinish = bAllowMovieToFinish;
	ClientStopMovie_Params.bForceStopNonSkippable = bForceStopNonSkippable;
	ClientStopMovie_Params.bForceStopLoadingMovie = bForceStopLoadingMovie;

	uFnClientStopMovie->iNative = 0;
	uFnClientStopMovie->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClientStopMovie, &ClientStopMovie_Params, nullptr);
	uFnClientStopMovie->FunctionFlags |= 0x400;
	uFnClientStopMovie->iNative = 13783;
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0xFFFF000001024DC1] (FUNC_Final | FUNC_Net | FUNC_NetReliable | FUNC_Simulated | FUNC_Native | FUNC_Event | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_NetClient | FUNC_AllFlags) (iNative[13782])
// Parameter Info:
// class FString                  MovieName                      (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        InStartOfRenderingMovieFrame   (CPF_OptionalParm | CPF_Parm)
// int32_t                        InEndOfRenderingMovieFrame     (CPF_OptionalParm | CPF_Parm)

void AGamePlayerController::eventClientPlayMovie(const class FString& MovieName, int32_t InStartOfRenderingMovieFrame, int32_t InEndOfRenderingMovieFrame)
{
	static UFunction* uFnClientPlayMovie = nullptr;

	if (!uFnClientPlayMovie)
	{
		uFnClientPlayMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.ClientPlayMovie");
	}

	AGamePlayerController_eventClientPlayMovie_Params ClientPlayMovie_Params;
	memset(&ClientPlayMovie_Params, 0, sizeof(ClientPlayMovie_Params));
	memcpy_s(&ClientPlayMovie_Params.MovieName, sizeof(ClientPlayMovie_Params.MovieName), &MovieName, sizeof(MovieName));
	memcpy_s(&ClientPlayMovie_Params.InStartOfRenderingMovieFrame, sizeof(ClientPlayMovie_Params.InStartOfRenderingMovieFrame), &InStartOfRenderingMovieFrame, sizeof(InStartOfRenderingMovieFrame));
	memcpy_s(&ClientPlayMovie_Params.InEndOfRenderingMovieFrame, sizeof(ClientPlayMovie_Params.InEndOfRenderingMovieFrame), &InEndOfRenderingMovieFrame, sizeof(InEndOfRenderingMovieFrame));

	uFnClientPlayMovie->iNative = 0;
	uFnClientPlayMovie->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnClientPlayMovie, &ClientPlayMovie_Params, nullptr);
	uFnClientPlayMovie->FunctionFlags |= 0x400;
	uFnClientPlayMovie->iNative = 13782;
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00022401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_Public | FUNC_AllFlags) (iNative[29405])
// Parameter Info:

void AGamePlayerController::KeepPlayingLoadingMovie()
{
	static UFunction* uFnKeepPlayingLoadingMovie = nullptr;

	if (!uFnKeepPlayingLoadingMovie)
	{
		uFnKeepPlayingLoadingMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie");
	}

	AGamePlayerController_execKeepPlayingLoadingMovie_Params KeepPlayingLoadingMovie_Params;
	memset(&KeepPlayingLoadingMovie_Params, 0, sizeof(KeepPlayingLoadingMovie_Params));

	uFnKeepPlayingLoadingMovie->iNative = 0;
	uFnKeepPlayingLoadingMovie->FunctionFlags &= ~0x400;
	AGamePlayerController::StaticClass()->ProcessEvent(uFnKeepPlayingLoadingMovie, &KeepPlayingLoadingMovie_Params, nullptr);
	uFnKeepPlayingLoadingMovie->FunctionFlags |= 0x400;
	uFnKeepPlayingLoadingMovie->iNative = 29405;
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00026401] (FUNC_Final | FUNC_Native | FUNC_Static | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags) (iNative[29585])
// Parameter Info:
// uint32_t                       bShowMovie                     (CPF_Parm)
// uint32_t                       bPauseAfterHide                (CPF_OptionalParm | CPF_Parm)
// float                          PauseDuration                  (CPF_OptionalParm | CPF_Parm)
// float                          KeepPlayingDuration            (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bOverridePreviousDelays        (CPF_OptionalParm | CPF_Parm)

void AGamePlayerController::ShowLoadingMovie(bool bShowMovie, bool bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, bool bOverridePreviousDelays)
{
	static UFunction* uFnShowLoadingMovie = nullptr;

	if (!uFnShowLoadingMovie)
	{
		uFnShowLoadingMovie = UFunction::FindFunction("Function GameFramework.GamePlayerController.ShowLoadingMovie");
	}

	AGamePlayerController_execShowLoadingMovie_Params ShowLoadingMovie_Params;
	memset(&ShowLoadingMovie_Params, 0, sizeof(ShowLoadingMovie_Params));
	ShowLoadingMovie_Params.bShowMovie = bShowMovie;
	ShowLoadingMovie_Params.bPauseAfterHide = bPauseAfterHide;
	memcpy_s(&ShowLoadingMovie_Params.PauseDuration, sizeof(ShowLoadingMovie_Params.PauseDuration), &PauseDuration, sizeof(PauseDuration));
	memcpy_s(&ShowLoadingMovie_Params.KeepPlayingDuration, sizeof(ShowLoadingMovie_Params.KeepPlayingDuration), &KeepPlayingDuration, sizeof(KeepPlayingDuration));
	ShowLoadingMovie_Params.bOverridePreviousDelays = bOverridePreviousDelays;

	uFnShowLoadingMovie->iNative = 0;
	uFnShowLoadingMovie->FunctionFlags &= ~0x400;
	AGamePlayerController::StaticClass()->ProcessEvent(uFnShowLoadingMovie, &ShowLoadingMovie_Params, nullptr);
	uFnShowLoadingMovie->FunctionFlags |= 0x400;
	uFnShowLoadingMovie->iNative = 29585;
};

// Function GameFramework.GamePlayerController.CrowdDebug
// [0x00020202] (FUNC_Defined | FUNC_Exec | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bEnabled                       (CPF_Parm)

void AGamePlayerController::CrowdDebug(bool bEnabled)
{
	static UFunction* uFnCrowdDebug = nullptr;

	if (!uFnCrowdDebug)
	{
		uFnCrowdDebug = UFunction::FindFunction("Function GameFramework.GamePlayerController.CrowdDebug");
	}

	AGamePlayerController_execCrowdDebug_Params CrowdDebug_Params;
	memset(&CrowdDebug_Params, 0, sizeof(CrowdDebug_Params));
	CrowdDebug_Params.bEnabled = bEnabled;

	this->ProcessEvent(uFnCrowdDebug, &CrowdDebug_Params, nullptr);
};

// Function GameFramework.GamePlayerController.CrowdToggle
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29273])
// Parameter Info:

void AGamePlayerController::CrowdToggle()
{
	static UFunction* uFnCrowdToggle = nullptr;

	if (!uFnCrowdToggle)
	{
		uFnCrowdToggle = UFunction::FindFunction("Function GameFramework.GamePlayerController.CrowdToggle");
	}

	AGamePlayerController_execCrowdToggle_Params CrowdToggle_Params;
	memset(&CrowdToggle_Params, 0, sizeof(CrowdToggle_Params));

	uFnCrowdToggle->iNative = 0;
	uFnCrowdToggle->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCrowdToggle, &CrowdToggle_Params, nullptr);
	uFnCrowdToggle->FunctionFlags |= 0x400;
	uFnCrowdToggle->iNative = 29273;
};

// Function GameFramework.GamePlayerController.CrowdFocus
// [0x00020600] (FUNC_Exec | FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29271])
// Parameter Info:

void AGamePlayerController::CrowdFocus()
{
	static UFunction* uFnCrowdFocus = nullptr;

	if (!uFnCrowdFocus)
	{
		uFnCrowdFocus = UFunction::FindFunction("Function GameFramework.GamePlayerController.CrowdFocus");
	}

	AGamePlayerController_execCrowdFocus_Params CrowdFocus_Params;
	memset(&CrowdFocus_Params, 0, sizeof(CrowdFocus_Params));

	uFnCrowdFocus->iNative = 0;
	uFnCrowdFocus->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCrowdFocus, &CrowdFocus_Params, nullptr);
	uFnCrowdFocus->FunctionFlags |= 0x400;
	uFnCrowdFocus->iNative = 29271;
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29379])
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t AGamePlayerController::GetUIPlayerIndex()
{
	static UFunction* uFnGetUIPlayerIndex = nullptr;

	if (!uFnGetUIPlayerIndex)
	{
		uFnGetUIPlayerIndex = UFunction::FindFunction("Function GameFramework.GamePlayerController.GetUIPlayerIndex");
	}

	AGamePlayerController_execGetUIPlayerIndex_Params GetUIPlayerIndex_Params;
	memset(&GetUIPlayerIndex_Params, 0, sizeof(GetUIPlayerIndex_Params));

	uFnGetUIPlayerIndex->iNative = 0;
	uFnGetUIPlayerIndex->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnGetUIPlayerIndex, &GetUIPlayerIndex_Params, nullptr);
	uFnGetUIPlayerIndex->FunctionFlags |= 0x400;
	uFnGetUIPlayerIndex->iNative = 29379;

	return GetUIPlayerIndex_Params.ReturnValue;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UNavMeshGoal_OutOfViewFrom::Recycle()
{
	static UFunction* uFnRecycle = nullptr;

	if (!uFnRecycle)
	{
		uFnRecycle = UFunction::FindFunction("Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle");
	}

	UNavMeshGoal_OutOfViewFrom_execRecycle_Params Recycle_Params;
	memset(&Recycle_Params, 0, sizeof(Recycle_Params));

	this->ProcessEvent(uFnRecycle, &Recycle_Params, nullptr);
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[24990])
// Parameter Info:

void UNavMeshGoal_OutOfViewFrom::RecycleNative()
{
	static UFunction* uFnRecycleNative = nullptr;

	if (!uFnRecycleNative)
	{
		uFnRecycleNative = UFunction::FindFunction("Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative");
	}

	UNavMeshGoal_OutOfViewFrom_execRecycleNative_Params RecycleNative_Params;
	memset(&RecycleNative_Params, 0, sizeof(RecycleNative_Params));

	uFnRecycleNative->iNative = 0;
	uFnRecycleNative->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnRecycleNative, &RecycleNative_Params, nullptr);
	uFnRecycleNative->FunctionFlags |= 0x400;
	uFnRecycleNative->iNative = 24990;
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle()
{
	static UFunction* uFnRecycle = nullptr;

	if (!uFnRecycle)
	{
		uFnRecycle = UFunction::FindFunction("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle");
	}

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execRecycle_Params Recycle_Params;
	memset(&Recycle_Params, 0, sizeof(Recycle_Params));

	this->ProcessEvent(uFnRecycle, &Recycle_Params, nullptr);
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// [0x00022802] (FUNC_Defined | FUNC_Event | FUNC_Static | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t USeqAct_GameCrowdSpawner::eventGetObjClassVersion()
{
	static UFunction* uFnGetObjClassVersion = nullptr;

	if (!uFnGetObjClassVersion)
	{
		uFnGetObjClassVersion = UFunction::FindFunction("Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion");
	}

	USeqAct_GameCrowdSpawner_eventGetObjClassVersion_Params GetObjClassVersion_Params;
	memset(&GetObjClassVersion_Params, 0, sizeof(GetObjClassVersion_Params));

	USeqAct_GameCrowdSpawner::StaticClass()->ProcessEvent(uFnGetObjClassVersion, &GetObjClassVersion_Params, nullptr);

	return GetObjClassVersion_Params.ReturnValue;
};

// Function GameFramework.GameCameraBase.Init
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCameraBase::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GameFramework.GameCameraBase.Init");
	}

	UGameCameraBase_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
// [0x00420800] (FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm | CPF_OutParm)

void UGameCameraBase::eventProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& out_ViewRotation, struct FRotator& out_DeltaRot)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function GameFramework.GameCameraBase.ProcessViewRotation");
	}

	UGameCameraBase_eventProcessViewRotation_Params ProcessViewRotation_Params;
	memset(&ProcessViewRotation_Params, 0, sizeof(ProcessViewRotation_Params));
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, sizeof(ProcessViewRotation_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	ProcessViewRotation_Params.ViewTarget = ViewTarget;
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation), &out_ViewRotation, sizeof(out_ViewRotation));
	memcpy_s(&ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot), &out_DeltaRot, sizeof(out_DeltaRot));

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, sizeof(out_ViewRotation), &ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation));
	memcpy_s(&out_DeltaRot, sizeof(out_DeltaRot), &ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot));
};

// Function GameFramework.GameCameraBase.UpdateCamera
// [0x00420800] (FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameCameraBase::eventUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCamera = nullptr;

	if (!uFnUpdateCamera)
	{
		uFnUpdateCamera = UFunction::FindFunction("Function GameFramework.GameCameraBase.UpdateCamera");
	}

	UGameCameraBase_eventUpdateCamera_Params UpdateCamera_Params;
	memset(&UpdateCamera_Params, 0, sizeof(UpdateCamera_Params));
	UpdateCamera_Params.P = P;
	UpdateCamera_Params.CameraActor = CameraActor;
	memcpy_s(&UpdateCamera_Params.DeltaTime, sizeof(UpdateCamera_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT), &OutVT, sizeof(OutVT));

	this->ProcessEvent(uFnUpdateCamera, &UpdateCamera_Params, nullptr);

	memcpy_s(&OutVT, sizeof(OutVT), &UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT));
};

// Function GameFramework.GameCameraBase.ResetInterpolation
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameCameraBase::eventResetInterpolation()
{
	static UFunction* uFnResetInterpolation = nullptr;

	if (!uFnResetInterpolation)
	{
		uFnResetInterpolation = UFunction::FindFunction("Function GameFramework.GameCameraBase.ResetInterpolation");
	}

	UGameCameraBase_eventResetInterpolation_Params ResetInterpolation_Params;
	memset(&ResetInterpolation_Params, 0, sizeof(ResetInterpolation_Params));

	this->ProcessEvent(uFnResetInterpolation, &ResetInterpolation_Params, nullptr);
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameCameraBase*         NewCamera                      (CPF_Parm)

void UGameCameraBase::eventOnBecomeInActive(class UGameCameraBase* NewCamera)
{
	static UFunction* uFnOnBecomeInActive = nullptr;

	if (!uFnOnBecomeInActive)
	{
		uFnOnBecomeInActive = UFunction::FindFunction("Function GameFramework.GameCameraBase.OnBecomeInActive");
	}

	UGameCameraBase_eventOnBecomeInActive_Params OnBecomeInActive_Params;
	memset(&OnBecomeInActive_Params, 0, sizeof(OnBecomeInActive_Params));
	OnBecomeInActive_Params.NewCamera = NewCamera;

	this->ProcessEvent(uFnOnBecomeInActive, &OnBecomeInActive_Params, nullptr);
};

// Function GameFramework.GameCameraBase.OnBecomeActive
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameCameraBase::eventOnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameCameraBase.OnBecomeActive");
	}

	UGameCameraBase_eventOnBecomeActive_Params OnBecomeActive_Params;
	memset(&OnBecomeActive_Params, 0, sizeof(OnBecomeActive_Params));
	OnBecomeActive_Params.OldCamera = OldCamera;

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameThirdPersonCamera::ResetInterpolation()
{
	static UFunction* uFnResetInterpolation = nullptr;

	if (!uFnResetInterpolation)
	{
		uFnResetInterpolation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.ResetInterpolation");
	}

	UGameThirdPersonCamera_execResetInterpolation_Params ResetInterpolation_Params;
	memset(&ResetInterpolation_Params, 0, sizeof(ResetInterpolation_Params));

	this->ProcessEvent(uFnResetInterpolation, &ResetInterpolation_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameThirdPersonCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.OnBecomeActive");
	}

	UGameThirdPersonCamera_execOnBecomeActive_Params OnBecomeActive_Params;
	memset(&OnBecomeActive_Params, 0, sizeof(OnBecomeActive_Params));
	OnBecomeActive_Params.OldCamera = OldCamera;

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCamera::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& out_ViewRotation, struct FRotator& out_DeltaRot)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.ProcessViewRotation");
	}

	UGameThirdPersonCamera_execProcessViewRotation_Params ProcessViewRotation_Params;
	memset(&ProcessViewRotation_Params, 0, sizeof(ProcessViewRotation_Params));
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, sizeof(ProcessViewRotation_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	ProcessViewRotation_Params.ViewTarget = ViewTarget;
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation), &out_ViewRotation, sizeof(out_ViewRotation));
	memcpy_s(&ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot), &out_DeltaRot, sizeof(out_DeltaRot));

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, sizeof(out_ViewRotation), &ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation));
	memcpy_s(&out_DeltaRot, sizeof(out_DeltaRot), &ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot));
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// [0x00080003] (FUNC_Final | FUNC_Defined | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)

void UGameThirdPersonCamera::UpdateCameraMode(class APawn* P)
{
	static UFunction* uFnUpdateCameraMode = nullptr;

	if (!uFnUpdateCameraMode)
	{
		uFnUpdateCameraMode = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.UpdateCameraMode");
	}

	UGameThirdPersonCamera_execUpdateCameraMode_Params UpdateCameraMode_Params;
	memset(&UpdateCameraMode_Params, 0, sizeof(UpdateCameraMode_Params));
	UpdateCameraMode_Params.P = P;

	this->ProcessEvent(uFnUpdateCameraMode, &UpdateCameraMode_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameThirdPersonCameraMode* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   P                              (CPF_Parm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode(class APawn* P)
{
	static UFunction* uFnFindBestCameraMode = nullptr;

	if (!uFnFindBestCameraMode)
	{
		uFnFindBestCameraMode = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.FindBestCameraMode");
	}

	UGameThirdPersonCamera_execFindBestCameraMode_Params FindBestCameraMode_Params;
	memset(&FindBestCameraMode_Params, 0, sizeof(FindBestCameraMode_Params));
	FindBestCameraMode_Params.P = P;

	this->ProcessEvent(uFnFindBestCameraMode, &FindBestCameraMode_Params, nullptr);

	return FindBestCameraMode_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FRotator                Delta                          (CPF_Parm)

void UGameThirdPersonCamera::AdjustFocusPointInterpolation(const struct FRotator& Delta)
{
	static UFunction* uFnAdjustFocusPointInterpolation = nullptr;

	if (!uFnAdjustFocusPointInterpolation)
	{
		uFnAdjustFocusPointInterpolation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation");
	}

	UGameThirdPersonCamera_execAdjustFocusPointInterpolation_Params AdjustFocusPointInterpolation_Params;
	memset(&AdjustFocusPointInterpolation_Params, 0, sizeof(AdjustFocusPointInterpolation_Params));
	memcpy_s(&AdjustFocusPointInterpolation_Params.Delta, sizeof(AdjustFocusPointInterpolation_Params.Delta), &Delta, sizeof(Delta));

	this->ProcessEvent(uFnAdjustFocusPointInterpolation, &AdjustFocusPointInterpolation_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// [0x00880002] (FUNC_Defined | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FVector UGameThirdPersonCamera::GetActualFocusLocation()
{
	static UFunction* uFnGetActualFocusLocation = nullptr;

	if (!uFnGetActualFocusLocation)
	{
		uFnGetActualFocusLocation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation");
	}

	UGameThirdPersonCamera_execGetActualFocusLocation_Params GetActualFocusLocation_Params;
	memset(&GetActualFocusLocation_Params, 0, sizeof(GetActualFocusLocation_Params));

	this->ProcessEvent(uFnGetActualFocusLocation, &GetActualFocusLocation_Params, nullptr);

	return GetActualFocusLocation_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// [0x00080802] (FUNC_Defined | FUNC_Event | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)

void UGameThirdPersonCamera::eventUpdateFocusPoint(class APawn* P)
{
	static UFunction* uFnUpdateFocusPoint = nullptr;

	if (!uFnUpdateFocusPoint)
	{
		uFnUpdateFocusPoint = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint");
	}

	UGameThirdPersonCamera_eventUpdateFocusPoint_Params UpdateFocusPoint_Params;
	memset(&UpdateFocusPoint_Params, 0, sizeof(UpdateFocusPoint_Params));
	UpdateFocusPoint_Params.P = P;

	this->ProcessEvent(uFnUpdateFocusPoint, &UpdateFocusPoint_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bLeaveCameraRotation           (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::ClearFocusPoint(bool bLeaveCameraRotation)
{
	static UFunction* uFnClearFocusPoint = nullptr;

	if (!uFnClearFocusPoint)
	{
		uFnClearFocusPoint = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.ClearFocusPoint");
	}

	UGameThirdPersonCamera_execClearFocusPoint_Params ClearFocusPoint_Params;
	memset(&ClearFocusPoint_Params, 0, sizeof(ClearFocusPoint_Params));
	ClearFocusPoint_Params.bLeaveCameraRotation = bLeaveCameraRotation;

	this->ProcessEvent(uFnClearFocusPoint, &ClearFocusPoint_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class AActor* UGameThirdPersonCamera::GetFocusActor()
{
	static UFunction* uFnGetFocusActor = nullptr;

	if (!uFnGetFocusActor)
	{
		uFnGetFocusActor = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.GetFocusActor");
	}

	UGameThirdPersonCamera_execGetFocusActor_Params GetFocusActor_Params;
	memset(&GetFocusActor_Params, 0, sizeof(GetFocusActor_Params));

	this->ProcessEvent(uFnGetFocusActor, &GetFocusActor_Params, nullptr);

	return GetFocusActor_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class AActor*                  FocusActor                     (CPF_Parm)
// class FName                    FocusBoneName                  (CPF_Parm)
// struct FVector2D               InterpSpeedRange               (CPF_Parm)
// struct FVector2D               InFocusFOV                     (CPF_Parm)
// float                          CameraFOV                      (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAlwaysFocus                   (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAdjustCamera                  (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bIgnoreTrace                   (CPF_OptionalParm | CPF_Parm)
// float                          FocusPitchOffsetDeg            (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::SetFocusOnActor(class AActor* FocusActor, const class FName& FocusBoneName, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static UFunction* uFnSetFocusOnActor = nullptr;

	if (!uFnSetFocusOnActor)
	{
		uFnSetFocusOnActor = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.SetFocusOnActor");
	}

	UGameThirdPersonCamera_execSetFocusOnActor_Params SetFocusOnActor_Params;
	memset(&SetFocusOnActor_Params, 0, sizeof(SetFocusOnActor_Params));
	SetFocusOnActor_Params.FocusActor = FocusActor;
	memcpy_s(&SetFocusOnActor_Params.FocusBoneName, sizeof(SetFocusOnActor_Params.FocusBoneName), &FocusBoneName, sizeof(FocusBoneName));
	memcpy_s(&SetFocusOnActor_Params.InterpSpeedRange, sizeof(SetFocusOnActor_Params.InterpSpeedRange), &InterpSpeedRange, sizeof(InterpSpeedRange));
	memcpy_s(&SetFocusOnActor_Params.InFocusFOV, sizeof(SetFocusOnActor_Params.InFocusFOV), &InFocusFOV, sizeof(InFocusFOV));
	memcpy_s(&SetFocusOnActor_Params.CameraFOV, sizeof(SetFocusOnActor_Params.CameraFOV), &CameraFOV, sizeof(CameraFOV));
	SetFocusOnActor_Params.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnActor_Params.bAdjustCamera = bAdjustCamera;
	SetFocusOnActor_Params.bIgnoreTrace = bIgnoreTrace;
	memcpy_s(&SetFocusOnActor_Params.FocusPitchOffsetDeg, sizeof(SetFocusOnActor_Params.FocusPitchOffsetDeg), &FocusPitchOffsetDeg, sizeof(FocusPitchOffsetDeg));

	this->ProcessEvent(uFnSetFocusOnActor, &SetFocusOnActor_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 FocusWorldLoc                  (CPF_Parm)
// struct FVector2D               InterpSpeedRange               (CPF_Parm)
// struct FVector2D               InFocusFOV                     (CPF_Parm)
// float                          CameraFOV                      (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAlwaysFocus                   (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAdjustCamera                  (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bIgnoreTrace                   (CPF_OptionalParm | CPF_Parm)
// float                          FocusPitchOffsetDeg            (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::SetFocusOnLoc(const struct FVector& FocusWorldLoc, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static UFunction* uFnSetFocusOnLoc = nullptr;

	if (!uFnSetFocusOnLoc)
	{
		uFnSetFocusOnLoc = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc");
	}

	UGameThirdPersonCamera_execSetFocusOnLoc_Params SetFocusOnLoc_Params;
	memset(&SetFocusOnLoc_Params, 0, sizeof(SetFocusOnLoc_Params));
	memcpy_s(&SetFocusOnLoc_Params.FocusWorldLoc, sizeof(SetFocusOnLoc_Params.FocusWorldLoc), &FocusWorldLoc, sizeof(FocusWorldLoc));
	memcpy_s(&SetFocusOnLoc_Params.InterpSpeedRange, sizeof(SetFocusOnLoc_Params.InterpSpeedRange), &InterpSpeedRange, sizeof(InterpSpeedRange));
	memcpy_s(&SetFocusOnLoc_Params.InFocusFOV, sizeof(SetFocusOnLoc_Params.InFocusFOV), &InFocusFOV, sizeof(InFocusFOV));
	memcpy_s(&SetFocusOnLoc_Params.CameraFOV, sizeof(SetFocusOnLoc_Params.CameraFOV), &CameraFOV, sizeof(CameraFOV));
	SetFocusOnLoc_Params.bAlwaysFocus = bAlwaysFocus;
	SetFocusOnLoc_Params.bAdjustCamera = bAdjustCamera;
	SetFocusOnLoc_Params.bIgnoreTrace = bIgnoreTrace;
	memcpy_s(&SetFocusOnLoc_Params.FocusPitchOffsetDeg, sizeof(SetFocusOnLoc_Params.FocusPitchOffsetDeg), &FocusPitchOffsetDeg, sizeof(FocusPitchOffsetDeg));

	this->ProcessEvent(uFnSetFocusOnLoc, &SetFocusOnLoc_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        AngleOffset                    (CPF_Parm)

void UGameThirdPersonCamera::AdjustTurn(int32_t AngleOffset)
{
	static UFunction* uFnAdjustTurn = nullptr;

	if (!uFnAdjustTurn)
	{
		uFnAdjustTurn = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.AdjustTurn");
	}

	UGameThirdPersonCamera_execAdjustTurn_Params AdjustTurn_Params;
	memset(&AdjustTurn_Params, 0, sizeof(AdjustTurn_Params));
	memcpy_s(&AdjustTurn_Params.AngleOffset, sizeof(AdjustTurn_Params.AngleOffset), &AngleOffset, sizeof(AngleOffset));

	this->ProcessEvent(uFnAdjustTurn, &AdjustTurn_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags) (iNative[29327])
// Parameter Info:

void UGameThirdPersonCamera::EndTurn()
{
	static UFunction* uFnEndTurn = nullptr;

	if (!uFnEndTurn)
	{
		uFnEndTurn = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.EndTurn");
	}

	UGameThirdPersonCamera_execEndTurn_Params EndTurn_Params;
	memset(&EndTurn_Params, 0, sizeof(EndTurn_Params));

	uFnEndTurn->iNative = 0;
	uFnEndTurn->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnEndTurn, &EndTurn_Params, nullptr);
	uFnEndTurn->FunctionFlags |= 0x400;
	uFnEndTurn->iNative = 29327;
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
// [0x00024002] (FUNC_Defined | FUNC_NoExport | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        StartAngle                     (CPF_Parm)
// int32_t                        EndAngle                       (CPF_Parm)
// float                          TimeSec                        (CPF_Parm)
// float                          DelaySec                       (CPF_OptionalParm | CPF_Parm)
// uint32_t                       bAlignTargetWhenFinished       (CPF_OptionalParm | CPF_Parm)

void UGameThirdPersonCamera::BeginTurn(int32_t StartAngle, int32_t EndAngle, float TimeSec, float DelaySec, bool bAlignTargetWhenFinished)
{
	static UFunction* uFnBeginTurn = nullptr;

	if (!uFnBeginTurn)
	{
		uFnBeginTurn = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.BeginTurn");
	}

	UGameThirdPersonCamera_execBeginTurn_Params BeginTurn_Params;
	memset(&BeginTurn_Params, 0, sizeof(BeginTurn_Params));
	memcpy_s(&BeginTurn_Params.StartAngle, sizeof(BeginTurn_Params.StartAngle), &StartAngle, sizeof(StartAngle));
	memcpy_s(&BeginTurn_Params.EndAngle, sizeof(BeginTurn_Params.EndAngle), &EndAngle, sizeof(EndAngle));
	memcpy_s(&BeginTurn_Params.TimeSec, sizeof(BeginTurn_Params.TimeSec), &TimeSec, sizeof(TimeSec));
	memcpy_s(&BeginTurn_Params.DelaySec, sizeof(BeginTurn_Params.DelaySec), &DelaySec, sizeof(DelaySec));
	BeginTurn_Params.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	this->ProcessEvent(uFnBeginTurn, &BeginTurn_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// [0x00480400] (FUNC_Native | FUNC_Protected | FUNC_HasOutParms | FUNC_AllFlags) (iNative[29539])
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCamera::PlayerUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnPlayerUpdateCamera = nullptr;

	if (!uFnPlayerUpdateCamera)
	{
		uFnPlayerUpdateCamera = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera");
	}

	UGameThirdPersonCamera_execPlayerUpdateCamera_Params PlayerUpdateCamera_Params;
	memset(&PlayerUpdateCamera_Params, 0, sizeof(PlayerUpdateCamera_Params));
	PlayerUpdateCamera_Params.P = P;
	PlayerUpdateCamera_Params.CameraActor = CameraActor;
	memcpy_s(&PlayerUpdateCamera_Params.DeltaTime, sizeof(PlayerUpdateCamera_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&PlayerUpdateCamera_Params.OutVT, sizeof(PlayerUpdateCamera_Params.OutVT), &OutVT, sizeof(OutVT));

	uFnPlayerUpdateCamera->iNative = 0;
	uFnPlayerUpdateCamera->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnPlayerUpdateCamera, &PlayerUpdateCamera_Params, nullptr);
	uFnPlayerUpdateCamera->FunctionFlags |= 0x400;
	uFnPlayerUpdateCamera->iNative = 29539;

	memcpy_s(&OutVT, sizeof(OutVT), &PlayerUpdateCamera_Params.OutVT, sizeof(PlayerUpdateCamera_Params.OutVT));
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// [0x00420002] (FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCamera = nullptr;

	if (!uFnUpdateCamera)
	{
		uFnUpdateCamera = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.UpdateCamera");
	}

	UGameThirdPersonCamera_execUpdateCamera_Params UpdateCamera_Params;
	memset(&UpdateCamera_Params, 0, sizeof(UpdateCamera_Params));
	UpdateCamera_Params.P = P;
	UpdateCamera_Params.CameraActor = CameraActor;
	memcpy_s(&UpdateCamera_Params.DeltaTime, sizeof(UpdateCamera_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT), &OutVT, sizeof(OutVT));

	this->ProcessEvent(uFnUpdateCamera, &UpdateCamera_Params, nullptr);

	memcpy_s(&OutVT, sizeof(OutVT), &UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT));
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   ViewedPawn                     (CPF_Parm)

float UGameThirdPersonCamera::eventGetDesiredFOV(class APawn* ViewedPawn)
{
	static UFunction* uFnGetDesiredFOV = nullptr;

	if (!uFnGetDesiredFOV)
	{
		uFnGetDesiredFOV = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.GetDesiredFOV");
	}

	UGameThirdPersonCamera_eventGetDesiredFOV_Params GetDesiredFOV_Params;
	memset(&GetDesiredFOV_Params, 0, sizeof(GetDesiredFOV_Params));
	GetDesiredFOV_Params.ViewedPawn = ViewedPawn;

	this->ProcessEvent(uFnGetDesiredFOV, &GetDesiredFOV_Params, nullptr);

	return GetDesiredFOV_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCamera.Init
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameThirdPersonCamera::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.Init");
	}

	UGameThirdPersonCamera_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.Reset
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameThirdPersonCamera::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.Reset");
	}

	UGameThirdPersonCamera_execReset_Params Reset_Params;
	memset(&Reset_Params, 0, sizeof(Reset_Params));

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// [0x00080002] (FUNC_Defined | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGameThirdPersonCameraMode* ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGameThirdPersonCameraMode* ModeClass                      (CPF_Parm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode(class UGameThirdPersonCameraMode* ModeClass)
{
	static UFunction* uFnCreateCameraMode = nullptr;

	if (!uFnCreateCameraMode)
	{
		uFnCreateCameraMode = UFunction::FindFunction("Function GameFramework.GameThirdPersonCamera.CreateCameraMode");
	}

	UGameThirdPersonCamera_execCreateCameraMode_Params CreateCameraMode_Params;
	memset(&CreateCameraMode_Params, 0, sizeof(CreateCameraMode_Params));
	CreateCameraMode_Params.ModeClass = ModeClass;

	this->ProcessEvent(uFnCreateCameraMode, &CreateCameraMode_Params, nullptr);

	return CreateCameraMode_Params.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags) (iNative[29137])
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          inHorizFOV                     (CPF_Parm)
// class APawn*                   CameraTargetPawn               (CPF_Parm)

float AGamePlayerCamera::AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn)
{
	static UFunction* uFnAdjustFOVForViewport = nullptr;

	if (!uFnAdjustFOVForViewport)
	{
		uFnAdjustFOVForViewport = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.AdjustFOVForViewport");
	}

	AGamePlayerCamera_execAdjustFOVForViewport_Params AdjustFOVForViewport_Params;
	memset(&AdjustFOVForViewport_Params, 0, sizeof(AdjustFOVForViewport_Params));
	memcpy_s(&AdjustFOVForViewport_Params.inHorizFOV, sizeof(AdjustFOVForViewport_Params.inHorizFOV), &inHorizFOV, sizeof(inHorizFOV));
	AdjustFOVForViewport_Params.CameraTargetPawn = CameraTargetPawn;

	uFnAdjustFOVForViewport->iNative = 0;
	uFnAdjustFOVForViewport->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnAdjustFOVForViewport, &AdjustFOVForViewport_Params, nullptr);
	uFnAdjustFOVForViewport->FunctionFlags |= 0x400;
	uFnAdjustFOVForViewport->iNative = 29137;

	return AdjustFOVForViewport_Params.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGamePlayerCamera::ResetInterpolation()
{
	static UFunction* uFnResetInterpolation = nullptr;

	if (!uFnResetInterpolation)
	{
		uFnResetInterpolation = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.ResetInterpolation");
	}

	AGamePlayerCamera_execResetInterpolation_Params ResetInterpolation_Params;
	memset(&ResetInterpolation_Params, 0, sizeof(ResetInterpolation_Params));

	this->ProcessEvent(uFnResetInterpolation, &ResetInterpolation_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.SetColorScale
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 NewColorScale                  (CPF_Parm)

void AGamePlayerCamera::SetColorScale(const struct FVector& NewColorScale)
{
	static UFunction* uFnSetColorScale = nullptr;

	if (!uFnSetColorScale)
	{
		uFnSetColorScale = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.SetColorScale");
	}

	AGamePlayerCamera_execSetColorScale_Params SetColorScale_Params;
	memset(&SetColorScale_Params, 0, sizeof(SetColorScale_Params));
	memcpy_s(&SetColorScale_Params.NewColorScale, sizeof(SetColorScale_Params.NewColorScale), &NewColorScale, sizeof(NewColorScale));

	this->ProcessEvent(uFnSetColorScale, &SetColorScale_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm | CPF_OutParm)
// float                          out_YPos                       (CPF_Parm | CPF_OutParm)

void AGamePlayerCamera::DisplayDebug(class AHUD* HUD, float& out_YL, float& out_YPos)
{
	static UFunction* uFnDisplayDebug = nullptr;

	if (!uFnDisplayDebug)
	{
		uFnDisplayDebug = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.DisplayDebug");
	}

	AGamePlayerCamera_execDisplayDebug_Params DisplayDebug_Params;
	memset(&DisplayDebug_Params, 0, sizeof(DisplayDebug_Params));
	DisplayDebug_Params.HUD = HUD;
	memcpy_s(&DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL), &out_YL, sizeof(out_YL));
	memcpy_s(&DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos), &out_YPos, sizeof(out_YPos));

	this->ProcessEvent(uFnDisplayDebug, &DisplayDebug_Params, nullptr);

	memcpy_s(&out_YL, sizeof(out_YL), &DisplayDebug_Params.out_YL, sizeof(DisplayDebug_Params.out_YL));
	memcpy_s(&out_YPos, sizeof(out_YPos), &DisplayDebug_Params.out_YPos, sizeof(DisplayDebug_Params.out_YPos));
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// [0x00420902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FTViewTarget            OutVT                          (CPF_Const | CPF_Parm | CPF_OutParm)

void AGamePlayerCamera::eventUpdateCameraLensEffects(struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCameraLensEffects = nullptr;

	if (!uFnUpdateCameraLensEffects)
	{
		uFnUpdateCameraLensEffects = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects");
	}

	AGamePlayerCamera_eventUpdateCameraLensEffects_Params UpdateCameraLensEffects_Params;
	memset(&UpdateCameraLensEffects_Params, 0, sizeof(UpdateCameraLensEffects_Params));
	memcpy_s(&UpdateCameraLensEffects_Params.OutVT, sizeof(UpdateCameraLensEffects_Params.OutVT), &OutVT, sizeof(OutVT));

	this->ProcessEvent(uFnUpdateCameraLensEffects, &UpdateCameraLensEffects_Params, nullptr);

	memcpy_s(&OutVT, sizeof(OutVT), &UpdateCameraLensEffects_Params.OutVT, sizeof(UpdateCameraLensEffects_Params.OutVT));
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool AGamePlayerCamera::ShouldConstrainAspectRatio()
{
	static UFunction* uFnShouldConstrainAspectRatio = nullptr;

	if (!uFnShouldConstrainAspectRatio)
	{
		uFnShouldConstrainAspectRatio = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio");
	}

	AGamePlayerCamera_execShouldConstrainAspectRatio_Params ShouldConstrainAspectRatio_Params;
	memset(&ShouldConstrainAspectRatio_Params, 0, sizeof(ShouldConstrainAspectRatio_Params));

	this->ProcessEvent(uFnShouldConstrainAspectRatio, &ShouldConstrainAspectRatio_Params, nullptr);

	return ShouldConstrainAspectRatio_Params.ReturnValue;
};

// Function GameFramework.GamePlayerCamera.Reset
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGamePlayerCamera::Reset()
{
	static UFunction* uFnReset = nullptr;

	if (!uFnReset)
	{
		uFnReset = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.Reset");
	}

	AGamePlayerCamera_execReset_Params Reset_Params;
	memset(&Reset_Params, 0, sizeof(Reset_Params));

	this->ProcessEvent(uFnReset, &Reset_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void AGamePlayerCamera::PostBeginPlay()
{
	static UFunction* uFnPostBeginPlay = nullptr;

	if (!uFnPostBeginPlay)
	{
		uFnPostBeginPlay = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.PostBeginPlay");
	}

	AGamePlayerCamera_execPostBeginPlay_Params PostBeginPlay_Params;
	memset(&PostBeginPlay_Params, 0, sizeof(PostBeginPlay_Params));

	this->ProcessEvent(uFnPostBeginPlay, &PostBeginPlay_Params, nullptr);
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// [0x00080400] (FUNC_Native | FUNC_Protected | FUNC_AllFlags) (iNative[29253])
// Parameter Info:
// class AActor*                  TargetBase                     (CPF_Parm)

void AGamePlayerCamera::CacheLastTargetBaseInfo(class AActor* TargetBase)
{
	static UFunction* uFnCacheLastTargetBaseInfo = nullptr;

	if (!uFnCacheLastTargetBaseInfo)
	{
		uFnCacheLastTargetBaseInfo = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo");
	}

	AGamePlayerCamera_execCacheLastTargetBaseInfo_Params CacheLastTargetBaseInfo_Params;
	memset(&CacheLastTargetBaseInfo_Params, 0, sizeof(CacheLastTargetBaseInfo_Params));
	CacheLastTargetBaseInfo_Params.TargetBase = TargetBase;

	uFnCacheLastTargetBaseInfo->iNative = 0;
	uFnCacheLastTargetBaseInfo->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnCacheLastTargetBaseInfo, &CacheLastTargetBaseInfo_Params, nullptr);
	uFnCacheLastTargetBaseInfo->FunctionFlags |= 0x400;
	uFnCacheLastTargetBaseInfo->iNative = 29253;
};

// Function GameFramework.GamePlayerCamera.CreateCamera
// [0x00080002] (FUNC_Defined | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGameCameraBase*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGameCameraBase*         CameraClass                    (CPF_Parm)

class UGameCameraBase* AGamePlayerCamera::CreateCamera(class UGameCameraBase* CameraClass)
{
	static UFunction* uFnCreateCamera = nullptr;

	if (!uFnCreateCamera)
	{
		uFnCreateCamera = UFunction::FindFunction("Function GameFramework.GamePlayerCamera.CreateCamera");
	}

	AGamePlayerCamera_execCreateCamera_Params CreateCamera_Params;
	memset(&CreateCamera_Params, 0, sizeof(CreateCamera_Params));
	CreateCamera_Params.CameraClass = CameraClass;

	this->ProcessEvent(uFnCreateCamera, &CreateCamera_Params, nullptr);

	return CreateCamera_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[29580])
// Parameter Info:
// struct FViewOffsetData         NewViewOffset                  (CPF_Const | CPF_Parm | CPF_OutParm)

void UGameThirdPersonCameraMode::SetViewOffset(struct FViewOffsetData& NewViewOffset)
{
	static UFunction* uFnSetViewOffset = nullptr;

	if (!uFnSetViewOffset)
	{
		uFnSetViewOffset = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.SetViewOffset");
	}

	UGameThirdPersonCameraMode_execSetViewOffset_Params SetViewOffset_Params;
	memset(&SetViewOffset_Params, 0, sizeof(SetViewOffset_Params));
	memcpy_s(&SetViewOffset_Params.NewViewOffset, sizeof(SetViewOffset_Params.NewViewOffset), &NewViewOffset, sizeof(NewViewOffset));

	uFnSetViewOffset->iNative = 0;
	uFnSetViewOffset->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnSetViewOffset, &SetViewOffset_Params, nullptr);
	uFnSetViewOffset->FunctionFlags |= 0x400;
	uFnSetViewOffset->iNative = 29580;

	memcpy_s(&NewViewOffset, sizeof(NewViewOffset), &SetViewOffset_Params.NewViewOffset, sizeof(SetViewOffset_Params.NewViewOffset));
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// [0x00C20102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            VT                             (CPF_Const | CPF_Parm | CPF_OutParm)

void UGameThirdPersonCameraMode::UpdatePostProcess(float DeltaTime, struct FTViewTarget& VT)
{
	static UFunction* uFnUpdatePostProcess = nullptr;

	if (!uFnUpdatePostProcess)
	{
		uFnUpdatePostProcess = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess");
	}

	UGameThirdPersonCameraMode_execUpdatePostProcess_Params UpdatePostProcess_Params;
	memset(&UpdatePostProcess_Params, 0, sizeof(UpdatePostProcess_Params));
	memcpy_s(&UpdatePostProcess_Params.DeltaTime, sizeof(UpdatePostProcess_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&UpdatePostProcess_Params.VT, sizeof(UpdatePostProcess_Params.VT), &VT, sizeof(VT));

	this->ProcessEvent(uFnUpdatePostProcess, &UpdatePostProcess_Params, nullptr);

	memcpy_s(&VT, sizeof(VT), &UpdatePostProcess_Params.VT, sizeof(UpdatePostProcess_Params.VT));
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// [0x00880102] (FUNC_Defined | FUNC_Simulated | FUNC_Protected | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  TraceOwner                     (CPF_Parm)
// struct FVector                 StartTrace                     (CPF_Parm)
// struct FVector                 EndTrace                       (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::DOFTrace(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static UFunction* uFnDOFTrace = nullptr;

	if (!uFnDOFTrace)
	{
		uFnDOFTrace = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.DOFTrace");
	}

	UGameThirdPersonCameraMode_execDOFTrace_Params DOFTrace_Params;
	memset(&DOFTrace_Params, 0, sizeof(DOFTrace_Params));
	DOFTrace_Params.TraceOwner = TraceOwner;
	memcpy_s(&DOFTrace_Params.StartTrace, sizeof(DOFTrace_Params.StartTrace), &StartTrace, sizeof(StartTrace));
	memcpy_s(&DOFTrace_Params.EndTrace, sizeof(DOFTrace_Params.EndTrace), &EndTrace, sizeof(EndTrace));

	this->ProcessEvent(uFnDOFTrace, &DOFTrace_Params, nullptr);

	return DOFTrace_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// [0x00080102] (FUNC_Defined | FUNC_Simulated | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class AActor*                  TraceOwner                     (CPF_Parm)
// struct FVector                 StartTrace                     (CPF_Parm)
// struct FVector                 EndTrace                       (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static UFunction* uFnGetDOFFocusLoc = nullptr;

	if (!uFnGetDOFFocusLoc)
	{
		uFnGetDOFFocusLoc = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc");
	}

	UGameThirdPersonCameraMode_execGetDOFFocusLoc_Params GetDOFFocusLoc_Params;
	memset(&GetDOFFocusLoc_Params, 0, sizeof(GetDOFFocusLoc_Params));
	GetDOFFocusLoc_Params.TraceOwner = TraceOwner;
	memcpy_s(&GetDOFFocusLoc_Params.StartTrace, sizeof(GetDOFFocusLoc_Params.StartTrace), &StartTrace, sizeof(StartTrace));
	memcpy_s(&GetDOFFocusLoc_Params.EndTrace, sizeof(GetDOFFocusLoc_Params.EndTrace), &EndTrace, sizeof(EndTrace));

	this->ProcessEvent(uFnGetDOFFocusLoc, &GetDOFFocusLoc_Params, nullptr);

	return GetDOFFocusLoc_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// [0x00420100] (FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm | CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm | CPF_OutParm)

void UGameThirdPersonCameraMode::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& out_ViewRotation, struct FRotator& out_DeltaRot)
{
	static UFunction* uFnProcessViewRotation = nullptr;

	if (!uFnProcessViewRotation)
	{
		uFnProcessViewRotation = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation");
	}

	UGameThirdPersonCameraMode_execProcessViewRotation_Params ProcessViewRotation_Params;
	memset(&ProcessViewRotation_Params, 0, sizeof(ProcessViewRotation_Params));
	memcpy_s(&ProcessViewRotation_Params.DeltaTime, sizeof(ProcessViewRotation_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	ProcessViewRotation_Params.ViewTarget = ViewTarget;
	memcpy_s(&ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation), &out_ViewRotation, sizeof(out_ViewRotation));
	memcpy_s(&ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot), &out_DeltaRot, sizeof(out_DeltaRot));

	this->ProcessEvent(uFnProcessViewRotation, &ProcessViewRotation_Params, nullptr);

	memcpy_s(&out_ViewRotation, sizeof(out_ViewRotation), &ProcessViewRotation_Params.out_ViewRotation, sizeof(ProcessViewRotation_Params.out_ViewRotation));
	memcpy_s(&out_DeltaRot, sizeof(out_DeltaRot), &ProcessViewRotation_Params.out_DeltaRot, sizeof(ProcessViewRotation_Params.out_DeltaRot));
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// [0x00020102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   ViewedPawn                     (CPF_Parm)

bool UGameThirdPersonCameraMode::SetFocusPoint(class APawn* ViewedPawn)
{
	static UFunction* uFnSetFocusPoint = nullptr;

	if (!uFnSetFocusPoint)
	{
		uFnSetFocusPoint = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint");
	}

	UGameThirdPersonCameraMode_execSetFocusPoint_Params SetFocusPoint_Params;
	memset(&SetFocusPoint_Params, 0, sizeof(SetFocusPoint_Params));
	SetFocusPoint_Params.ViewedPawn = ViewedPawn;

	this->ProcessEvent(uFnSetFocusPoint, &SetFocusPoint_Params, nullptr);

	return SetFocusPoint_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// [0x00020902] (FUNC_Defined | FUNC_Simulated | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   TargetPawn                     (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::eventGetCameraWorstCaseLoc(class APawn* TargetPawn)
{
	static UFunction* uFnGetCameraWorstCaseLoc = nullptr;

	if (!uFnGetCameraWorstCaseLoc)
	{
		uFnGetCameraWorstCaseLoc = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc");
	}

	UGameThirdPersonCameraMode_eventGetCameraWorstCaseLoc_Params GetCameraWorstCaseLoc_Params;
	memset(&GetCameraWorstCaseLoc_Params, 0, sizeof(GetCameraWorstCaseLoc_Params));
	GetCameraWorstCaseLoc_Params.TargetPawn = TargetPawn;

	this->ProcessEvent(uFnGetCameraWorstCaseLoc, &GetCameraWorstCaseLoc_Params, nullptr);

	return GetCameraWorstCaseLoc_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   ViewedPawn                     (CPF_Parm)

float UGameThirdPersonCameraMode::GetDesiredFOV(class APawn* ViewedPawn)
{
	static UFunction* uFnGetDesiredFOV = nullptr;

	if (!uFnGetDesiredFOV)
	{
		uFnGetDesiredFOV = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV");
	}

	UGameThirdPersonCameraMode_execGetDesiredFOV_Params GetDesiredFOV_Params;
	memset(&GetDesiredFOV_Params, 0, sizeof(GetDesiredFOV_Params));
	GetDesiredFOV_Params.ViewedPawn = ViewedPawn;

	this->ProcessEvent(uFnGetDesiredFOV, &GetDesiredFOV_Params, nullptr);

	return GetDesiredFOV_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FVector                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class APawn*                   P                              (CPF_Parm)
// struct FVector                 Offset                         (CPF_Parm)

struct FVector UGameThirdPersonCameraMode::eventAdjustViewOffset(class APawn* P, const struct FVector& Offset)
{
	static UFunction* uFnAdjustViewOffset = nullptr;

	if (!uFnAdjustViewOffset)
	{
		uFnAdjustViewOffset = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset");
	}

	UGameThirdPersonCameraMode_eventAdjustViewOffset_Params AdjustViewOffset_Params;
	memset(&AdjustViewOffset_Params, 0, sizeof(AdjustViewOffset_Params));
	AdjustViewOffset_Params.P = P;
	memcpy_s(&AdjustViewOffset_Params.Offset, sizeof(AdjustViewOffset_Params.Offset), &Offset, sizeof(Offset));

	this->ProcessEvent(uFnAdjustViewOffset, &AdjustViewOffset_Params, nullptr);

	return AdjustViewOffset_Params.ReturnValue;
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   TargetPawn                     (CPF_Parm)
// class UGameThirdPersonCameraMode* NewMode                        (CPF_Parm)

void UGameThirdPersonCameraMode::OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode)
{
	static UFunction* uFnOnBecomeInActive = nullptr;

	if (!uFnOnBecomeInActive)
	{
		uFnOnBecomeInActive = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive");
	}

	UGameThirdPersonCameraMode_execOnBecomeInActive_Params OnBecomeInActive_Params;
	memset(&OnBecomeInActive_Params, 0, sizeof(OnBecomeInActive_Params));
	OnBecomeInActive_Params.TargetPawn = TargetPawn;
	OnBecomeInActive_Params.NewMode = NewMode;

	this->ProcessEvent(uFnOnBecomeInActive, &OnBecomeInActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   TargetPawn                     (CPF_Parm)
// class UGameThirdPersonCameraMode* PrevMode                       (CPF_Parm)

void UGameThirdPersonCameraMode::OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive");
	}

	UGameThirdPersonCameraMode_execOnBecomeActive_Params OnBecomeActive_Params;
	memset(&OnBecomeActive_Params, 0, sizeof(OnBecomeActive_Params));
	OnBecomeActive_Params.TargetPawn = TargetPawn;
	OnBecomeActive_Params.PrevMode = PrevMode;

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameThirdPersonCameraMode.Init
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameThirdPersonCameraMode::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GameFramework.GameThirdPersonCameraMode.Init");
	}

	UGameThirdPersonCameraMode_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
};

// Function GameFramework.GameDecalManager.SpawnDecalMinimal
// [0x00C20003] (FUNC_Final | FUNC_Defined | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter Info:
// class UGameDecal*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
// float                          InDecalLifeSpan                (CPF_Const | CPF_Parm)
// float                          InCanSpawnDistance             (CPF_Const | CPF_Parm)
// struct FVector                 DecalLocation                  (CPF_Const | CPF_Parm | CPF_OutParm)

class UGameDecal* AGameDecalManager::SpawnDecalMinimal(float InDecalLifeSpan, float InCanSpawnDistance, struct FVector& DecalLocation)
{
	static UFunction* uFnSpawnDecalMinimal = nullptr;

	if (!uFnSpawnDecalMinimal)
	{
		uFnSpawnDecalMinimal = UFunction::FindFunction("Function GameFramework.GameDecalManager.SpawnDecalMinimal");
	}

	AGameDecalManager_execSpawnDecalMinimal_Params SpawnDecalMinimal_Params;
	memset(&SpawnDecalMinimal_Params, 0, sizeof(SpawnDecalMinimal_Params));
	memcpy_s(&SpawnDecalMinimal_Params.InDecalLifeSpan, sizeof(SpawnDecalMinimal_Params.InDecalLifeSpan), &InDecalLifeSpan, sizeof(InDecalLifeSpan));
	memcpy_s(&SpawnDecalMinimal_Params.InCanSpawnDistance, sizeof(SpawnDecalMinimal_Params.InCanSpawnDistance), &InCanSpawnDistance, sizeof(InCanSpawnDistance));
	memcpy_s(&SpawnDecalMinimal_Params.DecalLocation, sizeof(SpawnDecalMinimal_Params.DecalLocation), &DecalLocation, sizeof(DecalLocation));

	this->ProcessEvent(uFnSpawnDecalMinimal, &SpawnDecalMinimal_Params, nullptr);

	memcpy_s(&DecalLocation, sizeof(DecalLocation), &SpawnDecalMinimal_Params.DecalLocation, sizeof(SpawnDecalMinimal_Params.DecalLocation));

	return SpawnDecalMinimal_Params.ReturnValue;
};

// Function GameFramework.GameDecalManager.IsTooCloseToActiveDecal
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags) (iNative[29403])
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          InCanSpawnDistance             (CPF_Const | CPF_Parm)
// struct FVector                 DecalLocation                  (CPF_Const | CPF_Parm | CPF_OutParm)

bool AGameDecalManager::IsTooCloseToActiveDecal(float InCanSpawnDistance, struct FVector& DecalLocation)
{
	static UFunction* uFnIsTooCloseToActiveDecal = nullptr;

	if (!uFnIsTooCloseToActiveDecal)
	{
		uFnIsTooCloseToActiveDecal = UFunction::FindFunction("Function GameFramework.GameDecalManager.IsTooCloseToActiveDecal");
	}

	AGameDecalManager_execIsTooCloseToActiveDecal_Params IsTooCloseToActiveDecal_Params;
	memset(&IsTooCloseToActiveDecal_Params, 0, sizeof(IsTooCloseToActiveDecal_Params));
	memcpy_s(&IsTooCloseToActiveDecal_Params.InCanSpawnDistance, sizeof(IsTooCloseToActiveDecal_Params.InCanSpawnDistance), &InCanSpawnDistance, sizeof(InCanSpawnDistance));
	memcpy_s(&IsTooCloseToActiveDecal_Params.DecalLocation, sizeof(IsTooCloseToActiveDecal_Params.DecalLocation), &DecalLocation, sizeof(DecalLocation));

	uFnIsTooCloseToActiveDecal->iNative = 0;
	uFnIsTooCloseToActiveDecal->FunctionFlags &= ~0x400;
	this->ProcessEvent(uFnIsTooCloseToActiveDecal, &IsTooCloseToActiveDecal_Params, nullptr);
	uFnIsTooCloseToActiveDecal->FunctionFlags |= 0x400;
	uFnIsTooCloseToActiveDecal->iNative = 29403;

	memcpy_s(&DecalLocation, sizeof(DecalLocation), &IsTooCloseToActiveDecal_Params.DecalLocation, sizeof(IsTooCloseToActiveDecal_Params.DecalLocation));

	return IsTooCloseToActiveDecal_Params.ReturnValue;
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameFixedCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static UFunction* uFnOnBecomeActive = nullptr;

	if (!uFnOnBecomeActive)
	{
		uFnOnBecomeActive = UFunction::FindFunction("Function GameFramework.GameFixedCamera.OnBecomeActive");
	}

	UGameFixedCamera_execOnBecomeActive_Params OnBecomeActive_Params;
	memset(&OnBecomeActive_Params, 0, sizeof(OnBecomeActive_Params));
	OnBecomeActive_Params.OldCamera = OldCamera;

	this->ProcessEvent(uFnOnBecomeActive, &OnBecomeActive_Params, nullptr);
};

// Function GameFramework.GameFixedCamera.UpdateCamera
// [0x00420102] (FUNC_Defined | FUNC_Simulated | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm | CPF_OutParm)

void UGameFixedCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& OutVT)
{
	static UFunction* uFnUpdateCamera = nullptr;

	if (!uFnUpdateCamera)
	{
		uFnUpdateCamera = UFunction::FindFunction("Function GameFramework.GameFixedCamera.UpdateCamera");
	}

	UGameFixedCamera_execUpdateCamera_Params UpdateCamera_Params;
	memset(&UpdateCamera_Params, 0, sizeof(UpdateCamera_Params));
	UpdateCamera_Params.P = P;
	UpdateCamera_Params.CameraActor = CameraActor;
	memcpy_s(&UpdateCamera_Params.DeltaTime, sizeof(UpdateCamera_Params.DeltaTime), &DeltaTime, sizeof(DeltaTime));
	memcpy_s(&UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT), &OutVT, sizeof(OutVT));

	this->ProcessEvent(uFnUpdateCamera, &UpdateCamera_Params, nullptr);

	memcpy_s(&OutVT, sizeof(OutVT), &UpdateCamera_Params.OutVT, sizeof(UpdateCamera_Params.OutVT));
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


