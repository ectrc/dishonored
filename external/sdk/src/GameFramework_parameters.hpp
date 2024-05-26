/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: GameFramework_parameters.hpp
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

// Function GameFramework.GameCrowdAgent.OnDestroy
// [0x00020102] 
struct AGameCrowdAgent_execOnDestroy_Params
{
	class USeqAct_Destroy*                             Action;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameCrowdAgent.OnDestroyedByKismet
// [0x00020401]  (iNative[29517])
struct AGameCrowdAgent_execOnDestroyedByKismet_Params
{
};

// Function GameFramework.GameCrowdAgent.TakeDamage
// [0x00024400]  (iNative[13766])
struct AGameCrowdAgent_execTakeDamage_Params
{
	int32_t                                            DamageAmount;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 EventInstigator;                                  // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.FireDeathEvent
// [0x00020902] 
struct AGameCrowdAgent_eventFireDeathEvent_Params
{
};

// Function GameFramework.GameCrowdAgent.CalcCamera
// [0x00C20102] 
struct AGameCrowdAgent_execCalcCamera_Params
{
	float                                              fDeltaTime;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     out_CamLoc;                                       // 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    out_CamRot;                                       // 0x0010 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_FOV;                                          // 0x001C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FVector                                  HitNormal;                                        // 0x0024 (0x000C) [0x0000000000000000]               
	// float                                           Radius;                                           // 0x0030 (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GameCrowdAgent.DisplayDebug
// [0x00420102] 
struct AGameCrowdAgent_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// class FString                                   T;                                                // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	// class UCanvas*                                  Canvas;                                           // 0x0018 (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GameCrowdAgent.VolumeBasedDestroy
// [0x00020500]  (iNative[27203])
struct AGameCrowdAgent_execVolumeBasedDestroy_Params
{
	class APhysicsVolume*                              PV;                                               // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameCrowdAgent.OutsideWorldBounds
// [0x00020D00]  (iNative[13675])
struct AGameCrowdAgent_eventOutsideWorldBounds_Params
{
};

// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// [0x00020D00]  (iNative[13523])
struct AGameCrowdAgent_eventFellOutOfWorld_Params
{
	class UDamageType*                                 dmgType;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameCrowdAgent.InitializeAgent
// [0x00020500]  (iNative[29395])
struct AGameCrowdAgent_execInitializeAgent_Params
{
	class AActor*                                      SpawnLoc;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AGameCrowdAgent*                             AgentTemplate;                                    // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              AgentWarmupTime;                                  // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWarmupPosition : 1;                              // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bCheckWarmupVisibility : 1;                       // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GameFramework.GameCrowdAgent.PlayDeath
// [0x00020400]  (iNative[29537])
struct AGameCrowdAgent_execPlayDeath_Params
{
	class AController*                                 Killer;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     KillMomentum;                                     // 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      DamageCauser;                                     // 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// [0x00020400]  (iNative[13641])
struct AGameCrowdAgentSkeletal_execOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PlayedTime;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ExcessTime;                                       // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// [0x00020400]  (iNative[29537])
struct AGameCrowdAgentSkeletal_execPlayDeath_Params
{
	class AController*                                 Killer;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     KillMomentum;                                     // 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      DamageCauser;                                     // 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// [0x00020002] 
struct AGameCrowdInteractionPoint_execOnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameCrowdInteractionPoint.SetEnabled
// [0x00020400]  (iNative[13734])
struct AGameCrowdInteractionPoint_execSetEnabled_Params
{
	uint32_t                                           _bIsEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// [0x00020500]  (iNative[29151])
struct AGameCrowdDestination_execAllowableDestinationFor_Params
{
	class AGameCrowdAgent*                             Agent;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// [0x00020500]  (iNative[29392])
struct AGameCrowdDestination_execIncrementCustomerCount_Params
{
	class AGameCrowdAgent*                             ArrivingAgent;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// [0x00020400]  (iNative[29293])
struct AGameCrowdDestination_execDecrementCustomerCount_Params
{
	class AGameCrowdAgent*                             DepartingAgent;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// [0x00020500]  (iNative[29536])
struct AGameCrowdDestination_execPickNewDestinationFor_Params
{
	class AGameCrowdAgent*                             Agent;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIgnoreRestrictions : 1;                          // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GameFramework.GameCrowdDestination.ReachedDestination
// [0x00020400]  (iNative[29551])
struct AGameCrowdDestination_execReachedDestination_Params
{
	class AGameCrowdAgent*                             Agent;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameCrowdDestination.ReachedByAgent
// [0x00020401]  (iNative[29550])
struct AGameCrowdDestination_execReachedByAgent_Params
{
	class AGameCrowdAgent*                             Agent;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     TestPosition;                                     // 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bTestExactly : 1;                                 // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// [0x00040501]  (iNative[29135])
struct AGameCrowdDestinationQueuePoint_execActuallyAdvance_Params
{
};

// Function GameFramework.GameDamageType.HandleDamageFX
// [0x00422000] 
struct UGameDamageType_execHandleDamageFX_Params
{
	class AGamePawn*                                   DamagedPawn;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTakeHitInfo                                HitInfo;                                          // 0x0004 (0x0038) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GameFramework.GameDamageType.ShouldHeadShotGib
// [0x00022002] 
struct UGameDamageType_execShouldHeadShotGib_Params
{
	class APawn*                                       TestPawn;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class APawn*                                       Instigator;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class AGamePawn*                                GP;                                               // 0x000C (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GameDamageType.IsScriptedDamageType
// [0x00022002] 
struct UGameDamageType_execIsScriptedDamageType_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameDamageType.ShouldPlayForceFeedback
// [0x00022002] 
struct UGameDamageType_execShouldPlayForceFeedback_Params
{
	class APawn*                                       DamagedPawn;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameDamageType.HandleDeadPlayer
// [0x00022000] 
struct UGameDamageType_execHandleDeadPlayer_Params
{
	class AGamePlayerController*                       Player;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameDamageType.HandleKilledPawn
// [0x00022000] 
struct UGameDamageType_execHandleKilledPawn_Params
{
	class APawn*                                       KilledPawn;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class APawn*                                       Instigator;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameDamageType.HandleDamagedPawn
// [0x00022000] 
struct UGameDamageType_execHandleDamagedPawn_Params
{
	class APawn*                                       DamagedPawn;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class APawn*                                       Instigator;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DamageAmt;                                        // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameDamageType.ModifyDamage
// [0x00422000] 
struct UGameDamageType_execModifyDamage_Params
{
	class APawn*                                       Victim;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            out_Damage;                                       // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     out_Momentum;                                     // 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     HitLocation;                                      // 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameDamageType.ShouldGib
// [0x00022002] 
struct UGameDamageType_execShouldGib_Params
{
	class APawn*                                       TestPawn;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class APawn*                                       Instigator;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// [0x00020902] 
struct AGameKActorSpawnableEffect_eventFellOutOfWorld_Params
{
	class UDamageType*                                 dmgType;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// [0x00020900] 
struct AGameKActorSpawnableEffect_eventPostBeginPlay_Params
{
};

// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// [0x00020102] 
struct AGamePawn_execReattachMeshWithoutBeingSeen_Params
{
};

// Function GameFramework.GamePawn.ReattachMesh
// [0x00020102] 
struct AGamePawn_execReattachMesh_Params
{
};

// Function GameFramework.GamePawn.UpdateShadowSettings
// [0x00020902] 
struct AGamePawn_eventUpdateShadowSettings_Params
{
	uint32_t                                           bInWantShadow : 1;                                // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// uint32_t                                        bNewCastShadow : 1;                               // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	// uint32_t                                        bNewCastDynamicShadow : 1;                        // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function GameFramework.GamePlayerController.ClientColorFade
// [0xFFFF0000010201C0] 
struct AGamePlayerController_execClientColorFade_Params
{
	struct FColor                                      FadeColor;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            FromAlpha;                                        // 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ToAlpha;                                          // 0x0005 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              FadeTime;                                         // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00820802] 
struct AGamePlayerController_eventWarmupPause_Params
{
	uint32_t                                           bDesiredPauseState : 1;                           // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// struct FColor                                   FadeColor;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	// class APlayerController*                        PC;                                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00020002] 
struct AGamePlayerController_execCanUnpauseWarmup_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00420401]  (iNative[29376])
struct AGamePlayerController_execGetCurrentMovie_Params
{
	class FString                                      MovieName;                                        // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0xFFFF000001020DC1]  (iNative[13783])
struct AGamePlayerController_eventClientStopMovie_Params
{
	float                                              DelayInSeconds;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAllowMovieToFinish : 1;                          // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bForceStopNonSkippable : 1;                       // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bForceStopLoadingMovie : 1;                       // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0xFFFF000001024DC1]  (iNative[13782])
struct AGamePlayerController_eventClientPlayMovie_Params
{
	class FString                                      MovieName;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            InStartOfRenderingMovieFrame;                     // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            InEndOfRenderingMovieFrame;                       // 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00022401]  (iNative[29405])
struct AGamePlayerController_execKeepPlayingLoadingMovie_Params
{
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00026401]  (iNative[29585])
struct AGamePlayerController_execShowLoadingMovie_Params
{
	uint32_t                                           bShowMovie : 1;                                   // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           bPauseAfterHide : 1;                              // 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              PauseDuration;                                    // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              KeepPlayingDuration;                              // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bOverridePreviousDelays : 1;                      // 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GameFramework.GamePlayerController.CrowdDebug
// [0x00020202] 
struct AGamePlayerController_execCrowdDebug_Params
{
	uint32_t                                           bEnabled : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class AGameCrowdAgent*                          GCA;                                              // 0x0004 (0x0004) [0x0000000000000000]               
	// int32_t                                         I;                                                // 0x0008 (0x0004) [0x0000000000000000]               
	// int32_t                                         AgentCount;                                       // 0x000C (0x0004) [0x0000000000000000]               
	// float                                           DebugRadius;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GamePlayerController.CrowdToggle
// [0x00020600]  (iNative[29273])
struct AGamePlayerController_execCrowdToggle_Params
{
};

// Function GameFramework.GamePlayerController.CrowdFocus
// [0x00020600]  (iNative[29271])
struct AGamePlayerController_execCrowdFocus_Params
{
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00020400]  (iNative[29379])
struct AGamePlayerController_execGetUIPlayerIndex_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// [0x00020002] 
struct UNavMeshGoal_OutOfViewFrom_execRecycle_Params
{
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// [0x00020400]  (iNative[24990])
struct UNavMeshGoal_OutOfViewFrom_execRecycleNative_Params
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// [0x00020002] 
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execRecycle_Params
{
};

// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// [0x00022802] 
struct USeqAct_GameCrowdSpawner_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameCameraBase.Init
// [0x00020000] 
struct UGameCameraBase_execInit_Params
{
};

// Function GameFramework.GameCameraBase.ProcessViewRotation
// [0x00420800] 
struct UGameCameraBase_eventProcessViewRotation_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ViewTarget;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    out_ViewRotation;                                 // 0x0008 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    out_DeltaRot;                                     // 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GameFramework.GameCameraBase.UpdateCamera
// [0x00420800] 
struct UGameCameraBase_eventUpdateCamera_Params
{
	class APawn*                                       P;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AGamePlayerCamera*                           CameraActor;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTViewTarget                                OutVT;                                            // 0x000C (0x0028) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GameFramework.GameCameraBase.ResetInterpolation
// [0x00020802] 
struct UGameCameraBase_eventResetInterpolation_Params
{
};

// Function GameFramework.GameCameraBase.OnBecomeInActive
// [0x00020800] 
struct UGameCameraBase_eventOnBecomeInActive_Params
{
	class UGameCameraBase*                             NewCamera;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameCameraBase.OnBecomeActive
// [0x00020800] 
struct UGameCameraBase_eventOnBecomeActive_Params
{
	class UGameCameraBase*                             OldCamera;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// [0x00020002] 
struct UGameThirdPersonCamera_execResetInterpolation_Params
{
};

// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// [0x00020002] 
struct UGameThirdPersonCamera_execOnBecomeActive_Params
{
	class UGameCameraBase*                             OldCamera;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// [0x00420002] 
struct UGameThirdPersonCamera_execProcessViewRotation_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ViewTarget;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    out_ViewRotation;                                 // 0x0008 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    out_DeltaRot;                                     // 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// [0x00080003] 
struct UGameThirdPersonCamera_execUpdateCameraMode_Params
{
	class APawn*                                       P;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UGameThirdPersonCameraMode*               NewCamMode;                                       // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// [0x00020002] 
struct UGameThirdPersonCamera_execFindBestCameraMode_Params
{
	class APawn*                                       P;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGameThirdPersonCameraMode*                  ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// [0x00020002] 
struct UGameThirdPersonCamera_execAdjustFocusPointInterpolation_Params
{
	struct FRotator                                    Delta;                                            // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// [0x00880002] 
struct UGameThirdPersonCamera_execGetActualFocusLocation_Params
{
	struct FVector                                     ReturnValue;                                      // 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FVector                                  FocusLoc;                                         // 0x000C (0x000C) [0x0000000000000000]               
	// class USkeletalMeshComponent*                   ComponentIt;                                      // 0x0018 (0x0004) [0x0000000004000000] (CPF_EditInline)
};

// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// [0x00080802] 
struct UGameThirdPersonCamera_eventUpdateFocusPoint_Params
{
	class APawn*                                       P;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// [0x00024002] 
struct UGameThirdPersonCamera_execClearFocusPoint_Params
{
	uint32_t                                           bLeaveCameraRotation : 1;                         // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// [0x00020002] 
struct UGameThirdPersonCamera_execGetFocusActor_Params
{
	class AActor*                                      ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// [0x00024002] 
struct UGameThirdPersonCamera_execSetFocusOnActor_Params
{
	class AActor*                                      FocusActor;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FName                                        FocusBoneName;                                    // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   InterpSpeedRange;                                 // 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   InFocusFOV;                                       // 0x0014 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              CameraFOV;                                        // 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAlwaysFocus : 1;                                 // 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAdjustCamera : 1;                                // 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bIgnoreTrace : 1;                                 // 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              FocusPitchOffsetDeg;                              // 0x002C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// [0x00024002] 
struct UGameThirdPersonCamera_execSetFocusOnLoc_Params
{
	struct FVector                                     FocusWorldLoc;                                    // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   InterpSpeedRange;                                 // 0x000C (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   InFocusFOV;                                       // 0x0014 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              CameraFOV;                                        // 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAlwaysFocus : 1;                                 // 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAdjustCamera : 1;                                // 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bIgnoreTrace : 1;                                 // 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              FocusPitchOffsetDeg;                              // 0x002C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// [0x00020002] 
struct UGameThirdPersonCamera_execAdjustTurn_Params
{
	int32_t                                            AngleOffset;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameThirdPersonCamera.EndTurn
// [0x00020400]  (iNative[29327])
struct UGameThirdPersonCamera_execEndTurn_Params
{
};

// Function GameFramework.GameThirdPersonCamera.BeginTurn
// [0x00024002] 
struct UGameThirdPersonCamera_execBeginTurn_Params
{
	int32_t                                            StartAngle;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            EndAngle;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              TimeSec;                                          // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DelaySec;                                         // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAlignTargetWhenFinished : 1;                     // 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// [0x00480400]  (iNative[29539])
struct UGameThirdPersonCamera_execPlayerUpdateCamera_Params
{
	class APawn*                                       P;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AGamePlayerCamera*                           CameraActor;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTViewTarget                                OutVT;                                            // 0x000C (0x0028) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// [0x00420002] 
struct UGameThirdPersonCamera_execUpdateCamera_Params
{
	class APawn*                                       P;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AGamePlayerCamera*                           CameraActor;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTViewTarget                                OutVT;                                            // 0x000C (0x0028) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// [0x00020802] 
struct UGameThirdPersonCamera_eventGetDesiredFOV_Params
{
	class APawn*                                       ViewedPawn;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCamera.Init
// [0x00020002] 
struct UGameThirdPersonCamera_execInit_Params
{
};

// Function GameFramework.GameThirdPersonCamera.Reset
// [0x00020002] 
struct UGameThirdPersonCamera_execReset_Params
{
};

// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// [0x00080002] 
struct UGameThirdPersonCamera_execCreateCameraMode_Params
{
	class UGameThirdPersonCameraMode*                  ModeClass;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGameThirdPersonCameraMode*                  ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UGameThirdPersonCameraMode*               NewMode;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// [0x00080401]  (iNative[29137])
struct AGamePlayerCamera_execAdjustFOVForViewport_Params
{
	float                                              inHorizFOV;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class APawn*                                       CameraTargetPawn;                                 // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GamePlayerCamera.ResetInterpolation
// [0x00020102] 
struct AGamePlayerCamera_execResetInterpolation_Params
{
};

// Function GameFramework.GamePlayerCamera.SetColorScale
// [0x00020102] 
struct AGamePlayerCamera_execSetColorScale_Params
{
	struct FVector                                     NewColorScale;                                    // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GamePlayerCamera.DisplayDebug
// [0x00420102] 
struct AGamePlayerCamera_execDisplayDebug_Params
{
	class AHUD*                                        HUD;                                              // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              out_YL;                                           // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// class UCanvas*                                  Canvas;                                           // 0x000C (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// [0x00420902] 
struct AGamePlayerCamera_eventUpdateCameraLensEffects_Params
{
	struct FTViewTarget                                OutVT;                                            // 0x0000 (0x0028) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	// int32_t                                         idx;                                              // 0x0028 (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// [0x00020002] 
struct AGamePlayerCamera_execShouldConstrainAspectRatio_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GamePlayerCamera.Reset
// [0x00020002] 
struct AGamePlayerCamera_execReset_Params
{
};

// Function GameFramework.GamePlayerCamera.PostBeginPlay
// [0x00020002] 
struct AGamePlayerCamera_execPostBeginPlay_Params
{
};

// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// [0x00080400]  (iNative[29253])
struct AGamePlayerCamera_execCacheLastTargetBaseInfo_Params
{
	class AActor*                                      TargetBase;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GamePlayerCamera.CreateCamera
// [0x00080002] 
struct AGamePlayerCamera_execCreateCamera_Params
{
	class UGameCameraBase*                             CameraClass;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGameCameraBase*                             ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UGameCameraBase*                          NewCam;                                           // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// [0x00420401]  (iNative[29580])
struct UGameThirdPersonCameraMode_execSetViewOffset_Params
{
	struct FViewOffsetData                             NewViewOffset;                                    // 0x0000 (0x0024) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// [0x00C20102] 
struct UGameThirdPersonCameraMode_execUpdatePostProcess_Params
{
	struct FTViewTarget                                VT;                                               // 0x0000 (0x0028) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              DeltaTime;                                        // 0x0028 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// struct FVector                                  FocusLoc;                                         // 0x002C (0x000C) [0x0000000000000000]               
	// struct FVector                                  StartTrace;                                       // 0x0038 (0x000C) [0x0000000000000000]               
	// struct FVector                                  EndTrace;                                         // 0x0044 (0x000C) [0x0000000000000000]               
	// struct FVector                                  CamDir;                                           // 0x0050 (0x000C) [0x0000000000000000]               
	// float                                           FocusDist;                                        // 0x005C (0x0004) [0x0000000000000000]               
	// float                                           SubjectDist;                                      // 0x0060 (0x0004) [0x0000000000000000]               
	// float                                           Pct;                                              // 0x0064 (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// [0x00880102] 
struct UGameThirdPersonCameraMode_execDOFTrace_Params
{
	class AActor*                                      TraceOwner;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     StartTrace;                                       // 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     EndTrace;                                         // 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x001C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FVector                                  HitLocation;                                      // 0x0028 (0x000C) [0x0000000000000000]               
	// struct FVector                                  HitNormal;                                        // 0x0034 (0x000C) [0x0000000000000000]               
	// class AActor*                                   HitActor;                                         // 0x0040 (0x0004) [0x0000000000000000]               
};

// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// [0x00080102] 
struct UGameThirdPersonCameraMode_execGetDOFFocusLoc_Params
{
	class AActor*                                      TraceOwner;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     StartTrace;                                       // 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     EndTrace;                                         // 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x001C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// [0x00420100] 
struct UGameThirdPersonCameraMode_execProcessViewRotation_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      ViewTarget;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    out_ViewRotation;                                 // 0x0008 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    out_DeltaRot;                                     // 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// [0x00020102] 
struct UGameThirdPersonCameraMode_execSetFocusPoint_Params
{
	class APawn*                                       ViewedPawn;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// [0x00020902] 
struct UGameThirdPersonCameraMode_eventGetCameraWorstCaseLoc_Params
{
	class APawn*                                       TargetPawn;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// [0x00020002] 
struct UGameThirdPersonCameraMode_execGetDesiredFOV_Params
{
	class APawn*                                       ViewedPawn;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// [0x00020802] 
struct UGameThirdPersonCameraMode_eventAdjustViewOffset_Params
{
	class APawn*                                       P;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Offset;                                           // 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// [0x00020000] 
struct UGameThirdPersonCameraMode_execOnBecomeInActive_Params
{
	class APawn*                                       TargetPawn;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGameThirdPersonCameraMode*                  NewMode;                                          // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// [0x00020002] 
struct UGameThirdPersonCameraMode_execOnBecomeActive_Params
{
	class APawn*                                       TargetPawn;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGameThirdPersonCameraMode*                  PrevMode;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameThirdPersonCameraMode.Init
// [0x00020000] 
struct UGameThirdPersonCameraMode_execInit_Params
{
};

// Function GameFramework.GameDecalManager.SpawnDecalMinimal
// [0x00C20003] 
struct AGameDecalManager_execSpawnDecalMinimal_Params
{
	struct FVector                                     DecalLocation;                                    // 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              InDecalLifeSpan;                                  // 0x000C (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	float                                              InCanSpawnDistance;                               // 0x0010 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class UGameDecal*                                  ReturnValue;                                      // 0x0014 (0x0004) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
	// class UGameDecal*                               Result;                                           // 0x0018 (0x0004) [0x0000000004000000] (CPF_EditInline)
	// struct FActiveDecalInfo                         DecalInfo;                                        // 0x001C (0x0008) [0x0000000000000000]               
};

// Function GameFramework.GameDecalManager.IsTooCloseToActiveDecal
// [0x00420401]  (iNative[29403])
struct AGameDecalManager_execIsTooCloseToActiveDecal_Params
{
	struct FVector                                     DecalLocation;                                    // 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	float                                              InCanSpawnDistance;                               // 0x000C (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GameFramework.GameFixedCamera.OnBecomeActive
// [0x00020002] 
struct UGameFixedCamera_execOnBecomeActive_Params
{
	class UGameCameraBase*                             OldCamera;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GameFramework.GameFixedCamera.UpdateCamera
// [0x00420102] 
struct UGameFixedCamera_execUpdateCamera_Params
{
	class APawn*                                       P;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AGamePlayerCamera*                           CameraActor;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTViewTarget                                OutVT;                                            // 0x000C (0x0028) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// class ACameraActor*                             CamActor;                                         // 0x0034 (0x0004) [0x0000000000000000]               
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


