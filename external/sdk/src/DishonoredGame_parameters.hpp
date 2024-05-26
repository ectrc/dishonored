/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: DishonoredGame_parameters.hpp
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

// Function DishonoredGame.DisCrusher.EncroachingOn
// [0x00020C00]  (iNative[314])
struct ADisCrusher_eventEncroachingOn_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredAutoTestManager.DoSentinel_PerfAtSpecificLocation
// [0x00420400]  (iNative[19128])
struct ADishonoredAutoTestManager_execDoSentinel_PerfAtSpecificLocation_Params
{
	struct FVector                                     InLocation;                                       // 0x0000 (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
	struct FRotator                                    InRotation;                                       // 0x000C (0x000C) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DishonoredAutoTestManager.DoSentinel_MemoryAtSpecificLocation
// [0x00020400]  (iNative[19127])
struct ADishonoredAutoTestManager_execDoSentinel_MemoryAtSpecificLocation_Params
{
	struct FVector                                     InLocation;                                       // 0x0000 (0x000C) [0x0000000000000082] (CPF_Const | CPF_Parm)
	struct FRotator                                    InRotation;                                       // 0x000C (0x000C) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function DishonoredGame.DishonoredAutoTestManager.GetTravelLocations
// [0x00420400]  (iNative[20796])
struct ADishonoredAutoTestManager_execGetTravelLocations_Params
{
	class FName                                        LevelName;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class APlayerController*                           PC;                                               // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FVector>                       TravelPoints;                                     // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredAutoTestManager.DoSentinelActionBeforeExit_Native
// [0x00020400]  (iNative[19130])
struct ADishonoredAutoTestManager_execDoSentinelActionBeforeExit_Native_Params
{
};

// Function DishonoredGame.DishonoredAutoTestManager.DoSentinelActionPerLoadedLevel_Native
// [0x00020400]  (iNative[19131])
struct ADishonoredAutoTestManager_execDoSentinelActionPerLoadedLevel_Native_Params
{
};

// Function DishonoredGame.DishonoredAutoTestManager.DoSentinelActionPerLoadedMap
// [0x00020400]  (iNative[19132])
struct ADishonoredAutoTestManager_execDoSentinelActionPerLoadedMap_Params
{
};

// Function DishonoredGame.DishonoredAutoTestManager.EndSentinelRun
// [0x00020400]  (iNative[19576])
struct ADishonoredAutoTestManager_execEndSentinelRun_Params
{
	uint8_t                                            RunResult;                                        // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredAutoTestManager.BeginSentinelRun
// [0x00020400]  (iNative[16240])
struct ADishonoredAutoTestManager_execBeginSentinelRun_Params
{
	class FString                                      TaskDescription;                                  // 0x0000 (0x000C) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      TaskParameter;                                    // 0x000C (0x000C) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
	class FString                                      TagDesc;                                          // 0x0018 (0x000C) [0x0000000000400082] (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredDebugMenu.ToggleDebugMenu
// [0x00020400]  (iNative[45370])
struct UDishonoredDebugMenu_execToggleDebugMenu_Params
{
	class FString                                      _PageName;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredDebugMenu.LoadMenu
// [0x00020400]  (iNative[35768])
struct UDishonoredDebugMenu_execLoadMenu_Params
{
	class FString                                      _PageName;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredDebugMenu.HideMenu
// [0x00020400]  (iNative[35463])
struct UDishonoredDebugMenu_execHideMenu_Params
{
};

// Function DishonoredGame.DishonoredEmitterPool.SpawnEmitterMeshAttachment
// [0x00024400]  (iNative[26099])
struct ADishonoredEmitterPool_execSpawnEmitterMeshAttachment_Params
{
	class UParticleSystem*                             _pEmitterTemplate;                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class USkeletalMeshComponent*                      _pMesh;                                           // 0x0004 (0x0004) [0x0000000004000080] (CPF_Parm | CPF_EditInline)
	class FName                                        _AttachPointName;                                 // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           _bAttachToSocket : 1;                             // 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     _RelativeLoc;                                     // 0x0014 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    _RelativeRot;                                     // 0x0020 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UParticleSystemComponent*                    ReturnValue;                                      // 0x002C (0x0004) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function DishonoredGame.DishonoredEmitterPool.SpawnEmitter
// [0x00024400]  (iNative[26097])
struct ADishonoredEmitterPool_execSpawnEmitter_Params
{
	class UParticleSystem*                             _pEmitterTemplate;                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _SpawnLocation;                                   // 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    _SpawnRotation;                                   // 0x0010 (0x000C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pAttachToActor;                                  // 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           _bInheritScaleFromBase : 1;                       // 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class UParticleSystemComponent*                    ReturnValue;                                      // 0x0024 (0x0004) [0x0000000004000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline)
};

// Function DishonoredGame.DishonoredEngine.PublishRichPresence
// [0x00020401]  (iNative[44609])
struct UDishonoredEngine_execPublishRichPresence_Params
{
};

// Function DishonoredGame.DishonoredEngine.UpdateRichPresenceChaos
// [0x00020401]  (iNative[45648])
struct UDishonoredEngine_execUpdateRichPresenceChaos_Params
{
	int32_t                                            nCurrentRichPresenceChaos;                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredEngine.UpdateRichPresenceChapter
// [0x00020401]  (iNative[45649])
struct UDishonoredEngine_execUpdateRichPresenceChapter_Params
{
	int32_t                                            nCurrentRichPresenceChapter;                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredEngine.OpenContentUnavailableMenu
// [0x00020400]  (iNative[27392])
struct UDishonoredEngine_execOpenContentUnavailableMenu_Params
{
};

// Function DishonoredGame.DishonoredEngine.OpenControllerConnectionMenu
// [0x00020400]  (iNative[23688])
struct UDishonoredEngine_execOpenControllerConnectionMenu_Params
{
};

// Function DishonoredGame.DishonoredEngine.OnControllerDisconnected
// [0x00020400]  (iNative[23582])
struct UDishonoredEngine_execOnControllerDisconnected_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredEngine.OnControllerChanged
// [0x00020400]  (iNative[23581])
struct UDishonoredEngine_execOnControllerChanged_Params
{
	uint32_t                                           bIsConnected : 1;                                 // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredEngine.OpenPauseMenu
// [0x00020400]  (iNative[23691])
struct UDishonoredEngine_execOpenPauseMenu_Params
{
};

// Function DishonoredGame.DishonoredEngine.PlayLoadMapMovie
// [0x00020400]  (iNative[24342])
struct UDishonoredEngine_execPlayLoadMapMovie_Params
{
	class FString                                      _MapName;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      _MovieName;                                       // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredEngine.PopIgnoreAutosave
// [0x00020600]  (iNative[44351])
struct UDishonoredEngine_execPopIgnoreAutosave_Params
{
	uint8_t                                            _Type;                                            // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredEngine.PushIgnoreAutosave
// [0x00020600]  (iNative[44618])
struct UDishonoredEngine_execPushIgnoreAutosave_Params
{
	uint8_t                                            _Type;                                            // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredEngine.PopDisableSave
// [0x00024600]  (iNative[44350])
struct UDishonoredEngine_execPopDisableSave_Params
{
	uint8_t                                            _DisableSaveType;                                 // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              _fWaitToEnable;                                   // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredEngine.PushDisableSave
// [0x00020600]  (iNative[44617])
struct UDishonoredEngine_execPushDisableSave_Params
{
	uint8_t                                            _DisableSaveType;                                 // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredEngine.Dis_Load
// [0x00020600]  (iNative[31664])
struct UDishonoredEngine_execDis_Load_Params
{
	int32_t                                            _Slot;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredEngine.Dis_Save
// [0x00020600]  (iNative[31673])
struct UDishonoredEngine_execDis_Save_Params
{
	int32_t                                            _Slot;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredGameInfo.PreventDeath
// [0x00020802] 
struct ADishonoredGameInfo_eventPreventDeath_Params
{
	class APawn*                                       _pKilledPawn;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pKiller;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                        bRet : 1;                                         // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DishonoredGame.DishonoredGameInfo.PreventDeath_Native
// [0x00020400]  (iNative[44430])
struct ADishonoredGameInfo_execPreventDeath_Native_Params
{
	class APawn*                                       _pKilledPawn;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pKiller;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredGameInfo.NotifyPathChanged
// [0x00020800] 
struct ADishonoredGameInfo_eventNotifyPathChanged_Params
{
};

// Function DishonoredGame.DishonoredGameInfo.StartMatch
// [0x00020802] 
struct ADishonoredGameInfo_eventStartMatch_Params
{
};

// Function DishonoredGame.DishonoredGameInfo.SpawnPlayer
// [0x00020400]  (iNative[26113])
struct ADishonoredGameInfo_execSpawnPlayer_Params
{
	class APawn*                                       _pSpawnClass;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _SpawnLocation;                                   // 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    _SpawnRotation;                                   // 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class APawn*                                       ReturnValue;                                      // 0x001C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredGameInfo.CanStartMatch
// [0x00020400]  (iNative[30806])
struct ADishonoredGameInfo_execCanStartMatch_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredGameInfo.GameEnding
// [0x00020C00]  (iNative[13530])
struct ADishonoredGameInfo_eventGameEnding_Params
{
};

// Function DishonoredGame.DishonoredGameInfo.GetDishonoredEngineVersion
// [0x00022401]  (iNative[35317])
struct ADishonoredGameInfo_execGetDishonoredEngineVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredGameInfo.GetChangelist
// [0x00022401]  (iNative[35315])
struct ADishonoredGameInfo_execGetChangelist_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredKActor.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADishonoredKActor_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredKActor.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADishonoredKActor_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredKActor.DestroyIfPlayerCantSeeMe
// [0x00020C00]  (iNative[13815])
struct ADishonoredKActor_eventDestroyIfPlayerCantSeeMe_Params
{
};

// Function DishonoredGame.DishonoredKAsset.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADishonoredKAsset_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredKAsset.TakeDamage
// [0x00024D00]  (iNative[13766])
struct ADishonoredKAsset_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredNote.PostRenderFor
// [0x00020902] 
struct ADishonoredNote_eventPostRenderFor_Params
{
	class APlayerController*                           PC;                                               // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UCanvas*                                     Canvas;                                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CameraPosition;                                   // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CameraDir;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNote.NativeNotePostRender
// [0x00020500]  (iNative[43765])
struct ADishonoredNote_execNativeNotePostRender_Params
{
	class APlayerController*                           PC;                                               // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UCanvas*                                     Canvas;                                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CameraPosition;                                   // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     CameraDir;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.OnDLC05SetStoryGroup
// [0x00020400]  (iNative[47581])
struct ADishonoredPawn_execOnDLC05SetStoryGroup_Params
{
	class USequenceAction*                             _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.JumpOffPawn
// [0x00020400]  (iNative[21449])
struct ADishonoredPawn_execJumpOffPawn_Params
{
};

// Function DishonoredGame.DishonoredPawn.CrushedBy
// [0x00020002] 
struct ADishonoredPawn_execCrushedBy_Params
{
	class APawn*                                       OtherPawn;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.CrushedBy_Native
// [0x00020400]  (iNative[30938])
struct ADishonoredPawn_execCrushedBy_Native_Params
{
	class APawn*                                       _pOtherPawn;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.OnModifyElixirCount
// [0x00020400]  (iNative[43943])
struct ADishonoredPawn_execOnModifyElixirCount_Params
{
	class UDisSeqAct_ModifyElixirCount*                _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.OnGetAbstractItemQuantity
// [0x00020400]  (iNative[43924])
struct ADishonoredPawn_execOnGetAbstractItemQuantity_Params
{
	class UDisSeqAct_GetAbstractItemQuantity*          _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.OnRemoveAbstractItem
// [0x00020400]  (iNative[43959])
struct ADishonoredPawn_execOnRemoveAbstractItem_Params
{
	class UDisSeqAct_RemoveAbstractItem*               _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.OnAddAbstractItem
// [0x00020400]  (iNative[43863])
struct ADishonoredPawn_execOnAddAbstractItem_Params
{
	class UDisSeqAct_AddAbstractItem*                  _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.OnModifyAmmo
// [0x00020400]  (iNative[43942])
struct ADishonoredPawn_execOnModifyAmmo_Params
{
	class UDisSeqAct_ModifyAmmo*                       _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.OnEquipItemType
// [0x00020400]  (iNative[43909])
struct ADishonoredPawn_execOnEquipItemType_Params
{
	class UDisSeqAct_EquipItemType*                    _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.OnAddInventoryItem
// [0x00020400]  (iNative[43865])
struct ADishonoredPawn_execOnAddInventoryItem_Params
{
	class UDisSeqAct_AddInventoryItem*                 _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.OnSetDisposition
// [0x00020400]  (iNative[43980])
struct ADishonoredPawn_execOnSetDisposition_Params
{
	class UDisSeqAct_SetDisposition*                   _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.OnTeleport
// [0x00020102] 
struct ADishonoredPawn_execOnTeleport_Params
{
	class USeqAct_Teleport*                            _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.OnTeleport_Native
// [0x00020400]  (iNative[43994])
struct ADishonoredPawn_execOnTeleport_Native_Params
{
	class USeqAct_Teleport*                            _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPawn.Landed
// [0x00020802] 
struct ADishonoredPawn_eventLanded_Params
{
	struct FVector                                     HitNormal;                                        // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      pFloorActor;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.Landed_Native
// [0x00020400]  (iNative[35678])
struct ADishonoredPawn_execLanded_Native_Params
{
	struct FVector                                     HitNormal;                                        // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      pFloorActor;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.BreakConstraint
// [0x00020802] 
struct ADishonoredPawn_eventBreakConstraint_Params
{
	class FName                                        _JointName;                                       // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.ChooseAndTriggerDeathEvent
// [0x00020802] 
struct ADishonoredPawn_eventChooseAndTriggerDeathEvent_Params
{
	class UDamageType*                                 _pDamageType;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.ChooseAndTriggerDeathEvent_Native
// [0x00020400]  (iNative[30864])
struct ADishonoredPawn_execChooseAndTriggerDeathEvent_Native_Params
{
	class UDamageType*                                 _pDamageType;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPawn.PlayDying
// [0x00020102] 
struct ADishonoredPawn_execPlayDying_Params
{
	class AController*                                 Killer;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLoc;                                           // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.PlayDying_Native
// [0x00020500]  (iNative[44228])
struct ADishonoredPawn_execPlayDying_Native_Params
{
	class AController*                                 Killer;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLoc;                                           // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPawn.TakeFallingDamage_Native
// [0x00020400]  (iNative[45312])
struct ADishonoredPawn_execTakeFallingDamage_Native_Params
{
	struct FVector                                     _HitNormal;                                       // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      _pFloorActor;                                     // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPawn.TakeFallingDamage
// [0x00020002] 
struct ADishonoredPawn_execTakeFallingDamage_Params
{
	struct FVector                                     _HitNormal;                                       // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      _pFloorActor;                                     // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                         DamageToTake;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredPawn.TakeDamage_Native
// [0x00424400]  (iNative[45311])
struct ADishonoredPawn_execTakeDamage_Native_Params
{
	int32_t                                            _rDamage;                                         // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _rMomentum;                                       // 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredPawn.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADishonoredPawn_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredPawn.FireTakeDamageKismetEvent
// [0x00020802] 
struct ADishonoredPawn_eventFireTakeDamageKismetEvent_Params
{
	class AActor*                                      _pInInstigator;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pInDamageType;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _inAmount;                                        // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                         idx;                                              // 0x000C (0x0004) [0x0000000000000000]               
	// class USeqEvent_TakeDamage*                     dmgEvent;                                         // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredPawn.DisplayDebug
// [0x00420102] 
struct ADishonoredPawn_execDisplayDebug_Params
{
	class AHUD*                                        _HUD;                                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fOut_YL;                                         // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              _fOut_YPos;                                       // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DishonoredPawn.DisplayDebug_Native
// [0x00420400]  (iNative[32321])
struct ADishonoredPawn_execDisplayDebug_Native_Params
{
	class AHUD*                                        _pHUD;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _rfOut_YL;                                        // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              _rfOut_YPos;                                      // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DishonoredRoute.ResolveRouteIndex
// [0x00420400]  (iNative[25166])
struct ADishonoredRoute_execResolveRouteIndex_Params
{
	int32_t                                            idx;                                              // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            RouteDirection;                                   // 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            out_bComplete;                                    // 0x0005 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            out_bReverse;                                     // 0x0006 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredRoute.OnToggle
// [0x00020400]  (iNative[23663])
struct ADishonoredRoute_execOnToggle_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredViewportClient.RemoveNPCView
// [0x00020002] 
struct UDishonoredViewportClient_execRemoveNPCView_Params
{
	class ADisDebugNPCController*                      _pPossessingController;                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                         iOldIndex;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	// class ULocalPlayer*                             pOldPlayer;                                       // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredViewportClient.AddNPCView
// [0x00020002] 
struct UDishonoredViewportClient_execAddNPCView_Params
{
	class ADisDebugNPCController*                      _pPossessingController;                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            iViewIndex;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredViewportClient.DrawTransition
// [0x00020002] 
struct UDishonoredViewportClient_execDrawTransition_Params
{
	class UCanvas*                                     _pCanvas;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredViewportClient.PostRender
// [0x00020802] 
struct UDishonoredViewportClient_eventPostRender_Params
{
	class UCanvas*                                     _pCanvas;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredViewportClient.PostRender_Native
// [0x00020400]  (iNative[44363])
struct UDishonoredViewportClient_execPostRender_Native_Params
{
	class UCanvas*                                     _pCanvas;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisParticleSystemComponent.InitializeForPool
// [0x00020400]  (iNative[35594])
struct UDisParticleSystemComponent_execInitializeForPool_Params
{
};

// Function DishonoredGame.DisProtectionTuneSource.OnToggle
// [0x00020500]  (iNative[23663])
struct ADisProtectionTuneSource_execOnToggle_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisSkeletalBreakable.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADisSkeletalBreakable_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisSkeletalBreakable.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisSkeletalBreakable_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisSkeletalBreakable.BreakConstraint
// [0x00020802] 
struct ADisSkeletalBreakable_eventBreakConstraint_Params
{
	struct FVector                                     _Impulse;                                         // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	class FName                                        _JointName;                                       // 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredUsableObject.OnToggleHidden
// [0x00020102] 
struct ADishonoredUsableObject_execOnToggleHidden_Params
{
	class USeqAct_ToggleHidden*                        Action;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredUsableObject.OnToggle
// [0x00020102] 
struct ADishonoredUsableObject_execOnToggle_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredUsableObject.OnToggle_Native
// [0x00020400]  (iNative[23664])
struct ADishonoredUsableObject_execOnToggle_Native_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisProjectileLauncher.OnToggle
// [0x00020102] 
struct ADisProjectileLauncher_execOnToggle_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisProjectileLauncher.OnToggle_Native
// [0x00020400]  (iNative[23664])
struct ADisProjectileLauncher_execOnToggle_Native_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisProjectileLauncher.BaseChange
// [0x00020C00]  (iNative[311])
struct ADisProjectileLauncher_eventBaseChange_Params
{
};

// Function DishonoredGame.DisTrigger.CallUsedBy
// [0x00020802] 
struct ADisTrigger_eventCallUsedBy_Params
{
	class APawn*                                       User;                                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisTriggerAbstractItem.OnToggle
// [0x00020102] 
struct ADisTriggerAbstractItem_execOnToggle_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisTriggerAbstractItem.OnToggle_Native
// [0x00020400]  (iNative[23664])
struct ADisTriggerAbstractItem_execOnToggle_Native_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisTriggerAbstractItem.CallUsedBy
// [0x00020802] 
struct ADisTriggerAbstractItem_eventCallUsedBy_Params
{
	class APawn*                                       User;                                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisTripwire.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADisTripwire_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisTripwire.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisTripwire_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisWatchTower.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADisWatchTower_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisWatchTower.TakeDamage_Native
// [0x00424400]  (iNative[45311])
struct ADisWatchTower_execTakeDamage_Native_Params
{
	int32_t                                            _rDamage;                                         // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _rMomentum;                                       // 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisWatchTower.OnWatchTowerShootAtTarget
// [0x00020400]  (iNative[44005])
struct ADisWatchTower_execOnWatchTowerShootAtTarget_Params
{
	class UDisSeqAct_WatchTowerShootAtTarget*          _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisWatchTower.OnSetDisposition
// [0x00020400]  (iNative[43980])
struct ADisWatchTower_execOnSetDisposition_Params
{
	class UDisSeqAct_SetDisposition*                   _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisTweaks_Faction.OnSetDisposition
// [0x00020400]  (iNative[43980])
struct UDisTweaks_Faction_execOnSetDisposition_Params
{
	class UDisSeqAct_SetDisposition*                   _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerBase.Req_EquipmentIconImage
// [0x00020401]  (iNative[44708])
struct UDisGFxMoviePlayerBase_execReq_EquipmentIconImage_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DisGFxMoviePlayerBase.HideMessageBox
// [0x00020401]  (iNative[35464])
struct UDisGFxMoviePlayerBase_execHideMessageBox_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerBase.AddMessageBoxTimer
// [0x00020401]  (iNative[30028])
struct UDisGFxMoviePlayerBase_execAddMessageBoxTimer_Params
{
	float                                              _fDuration;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerBase.ShowMessageBox
// [0x00020401]  (iNative[44892])
struct UDisGFxMoviePlayerBase_execShowMessageBox_Params
{
	class FString                                      _rMessage;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      _rButton0;                                        // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      _rButton1;                                        // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      _rButton2;                                        // 0x0024 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DisGFxMoviePlayerBase.FormatText
// [0x00020401]  (iNative[35122])
struct UDisGFxMoviePlayerBase_execFormatText_Params
{
	class FString                                      _rTextVarPath;                                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DisGFxMoviePlayerBase.OnFocusLost
// [0x00020C00]  (iNative[13801])
struct UDisGFxMoviePlayerBase_eventOnFocusLost_Params
{
	int32_t                                            _LocalPlayerIndex;                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerBase.OnFocusGained
// [0x00020C00]  (iNative[13800])
struct UDisGFxMoviePlayerBase_eventOnFocusGained_Params
{
	int32_t                                            _LocalPlayerIndex;                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerBase.WidgetInitialized_Native
// [0x00020400]  (iNative[45814])
struct UDisGFxMoviePlayerBase_execWidgetInitialized_Native_Params
{
	class FName                                        _WidgetName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        _WidgetPath;                                      // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  _pWidget;                                         // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerBase.WidgetInitialized
// [0x00020802] 
struct UDisGFxMoviePlayerBase_eventWidgetInitialized_Params
{
	class FName                                        _WidgetName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        _WidgetPath;                                      // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  _pWidget;                                         // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerBase.HasFinishedAsyncLoading
// [0x00020400]  (iNative[35452])
struct UDisGFxMoviePlayerBase_execHasFinishedAsyncLoading_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerBase.SetPauseDuringAsyncLoading
// [0x00020802] 
struct UDisGFxMoviePlayerBase_eventSetPauseDuringAsyncLoading_Params
{
	uint32_t                                           _bDesiredPauseState : 1;                          // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UEngine*                                  Eng;                                              // 0x0004 (0x0004) [0x0000000000000000]               
	// class APlayerController*                        PC;                                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DisGFxMoviePlayerBase.CaptureAnalogInput
// [0x00020400]  (iNative[30807])
struct UDisGFxMoviePlayerBase_execCaptureAnalogInput_Params
{
	uint32_t                                           _bCapture : 1;                                    // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisGFxMoviePlayerBase.Advance
// [0x00020400]  (iNative[28826])
struct UDisGFxMoviePlayerBase_execAdvance_Params
{
	float                                              _fDeltaTime;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerBase.Close
// [0x00024400]  (iNative[3944])
struct UDisGFxMoviePlayerBase_execClose_Params
{
	uint32_t                                           _bUnload : 1;                                     // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisGFxMoviePlayerBase.Start
// [0x00024C00]  (iNative[13805])
struct UDisGFxMoviePlayerBase_eventStart_Params
{
	uint32_t                                           _bStartPaused : 1;                                // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerBase.PreLoad
// [0x00020C00]  (iNative[13804])
struct UDisGFxMoviePlayerBase_eventPreLoad_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerGamma.OnGammaImageClosed
// [0x00020400]  (iNative[43920])
struct UDisGFxMoviePlayerGamma_execOnGammaImageClosed_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnMessageBoxConfirm
// [0x00020400]  (iNative[43937])
struct UDisGFxMoviePlayerGlobal_execOnMessageBoxConfirm_Params
{
	int32_t                                            _ChoiceIdx;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnDLCInaccessbible
// [0x00020400]  (iNative[47583])
struct UDisGFxMoviePlayerGlobal_execOnDLCInaccessbible_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnAutoSaveDisabled
// [0x00020400]  (iNative[43887])
struct UDisGFxMoviePlayerGlobal_execOnAutoSaveDisabled_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnMainMenuMissionSelected
// [0x00020400]  (iNative[43934])
struct UDisGFxMoviePlayerGlobal_execOnMainMenuMissionSelected_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnOnlineFeatureDisabled
// [0x00020400]  (iNative[43950])
struct UDisGFxMoviePlayerGlobal_execOnOnlineFeatureDisabled_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveDataDLCMissing
// [0x00020400]  (iNative[43969])
struct UDisGFxMoviePlayerGlobal_execOnSaveDataDLCMissing_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveDataUpdateMissing
// [0x00020400]  (iNative[43970])
struct UDisGFxMoviePlayerGlobal_execOnSaveDataUpdateMissing_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnGenericDeleteFailure
// [0x00020400]  (iNative[43921])
struct UDisGFxMoviePlayerGlobal_execOnGenericDeleteFailure_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnGenericLoadFailure
// [0x00020400]  (iNative[43922])
struct UDisGFxMoviePlayerGlobal_execOnGenericLoadFailure_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsOptions : 1;                                   // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnGenericSaveWriteFailure
// [0x00020400]  (iNative[43923])
struct UDisGFxMoviePlayerGlobal_execOnGenericSaveWriteFailure_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveWriteCorrupt
// [0x00020400]  (iNative[43977])
struct UDisGFxMoviePlayerGlobal_execOnSaveWriteCorrupt_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveGameLoadCorrupt
// [0x00020400]  (iNative[43974])
struct UDisGFxMoviePlayerGlobal_execOnSaveGameLoadCorrupt_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsOptions : 1;                                   // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnSaveGameOwnerFailure
// [0x00020400]  (iNative[43975])
struct UDisGFxMoviePlayerGlobal_execOnSaveGameOwnerFailure_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsOptions : 1;                                   // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnStorageSpaceMissing
// [0x00020400]  (iNative[43993])
struct UDisGFxMoviePlayerGlobal_execOnStorageSpaceMissing_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FQWord                                      Size;                                             // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnStorageDeviceNotSelected
// [0x00020400]  (iNative[43992])
struct UDisGFxMoviePlayerGlobal_execOnStorageDeviceNotSelected_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnStorageDeviceDisconnected
// [0x00020400]  (iNative[43991])
struct UDisGFxMoviePlayerGlobal_execOnStorageDeviceDisconnected_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnControllerDisconnected
// [0x00020400]  (iNative[23582])
struct UDisGFxMoviePlayerGlobal_execOnControllerDisconnected_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.OnLoginChange
// [0x00020400]  (iNative[9776])
struct UDisGFxMoviePlayerGlobal_execOnLoginChange_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.UnregisterOnlineDelegates
// [0x00020802] 
struct UDisGFxMoviePlayerGlobal_eventUnregisterOnlineDelegates_Params
{
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	// class UOnlinePlayerInterface*                   PlayerInterface;                                  // 0x0004 (0x0008) [0x0000000000000000]               
};

// Function DishonoredGame.DisGFxMoviePlayerGlobal.RegisterOnlineDelegates
// [0x00020802] 
struct UDisGFxMoviePlayerGlobal_eventRegisterOnlineDelegates_Params
{
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	// class UOnlinePlayerInterface*                   PlayerInterface;                                  // 0x0004 (0x0008) [0x0000000000000000]               
};

// Function DishonoredGame.DisGFxMoviePlayerHUD.OnPlayerChoiceConfirm
// [0x00020400]  (iNative[43954])
struct UDisGFxMoviePlayerHUD_execOnPlayerChoiceConfirm_Params
{
	int32_t                                            _Index;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.CloseJournal
// [0x00020400]  (iNative[30885])
struct UDisGFxMoviePlayerJournal_execCloseJournal_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.RemoveBoneCharm
// [0x00020400]  (iNative[44691])
struct UDisGFxMoviePlayerJournal_execRemoveBoneCharm_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.EquipBoneCharm
// [0x00020400]  (iNative[34849])
struct UDisGFxMoviePlayerJournal_execEquipBoneCharm_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_CharmsListDetails
// [0x00020400]  (iNative[44705])
struct UDisGFxMoviePlayerJournal_execReq_CharmsListDetails_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_CharmsTabContent
// [0x00020400]  (iNative[44706])
struct UDisGFxMoviePlayerJournal_execReq_CharmsTabContent_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.ReadNote
// [0x00020400]  (iNative[44660])
struct UDisGFxMoviePlayerJournal_execReadNote_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.StopAudioLog
// [0x00020400]  (iNative[45230])
struct UDisGFxMoviePlayerJournal_execStopAudioLog_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.PlayAudioLog
// [0x00020400]  (iNative[44226])
struct UDisGFxMoviePlayerJournal_execPlayAudioLog_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_LogInfo
// [0x00020400]  (iNative[44720])
struct UDisGFxMoviePlayerJournal_execReq_LogInfo_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_Books
// [0x00020400]  (iNative[44723])
struct UDisGFxMoviePlayerJournal_execReq_Logs_Books_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_Notes
// [0x00020400]  (iNative[44724])
struct UDisGFxMoviePlayerJournal_execReq_Logs_Notes_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_Audio
// [0x00020400]  (iNative[44722])
struct UDisGFxMoviePlayerJournal_execReq_Logs_Audio_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Logs_All
// [0x00020400]  (iNative[44721])
struct UDisGFxMoviePlayerJournal_execReq_Logs_All_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_InventoryItemInfo
// [0x00020400]  (iNative[44717])
struct UDisGFxMoviePlayerJournal_execReq_InventoryItemInfo_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Upgrades
// [0x00020400]  (iNative[44716])
struct UDisGFxMoviePlayerJournal_execReq_Inventory_Upgrades_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Ammo
// [0x00020400]  (iNative[44712])
struct UDisGFxMoviePlayerJournal_execReq_Inventory_Ammo_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Gadgets
// [0x00020400]  (iNative[44713])
struct UDisGFxMoviePlayerJournal_execReq_Inventory_Gadgets_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Resources
// [0x00020400]  (iNative[44715])
struct UDisGFxMoviePlayerJournal_execReq_Inventory_Resources_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_Key_Ring
// [0x00020400]  (iNative[44714])
struct UDisGFxMoviePlayerJournal_execReq_Inventory_Key_Ring_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_Inventory_All
// [0x00020400]  (iNative[44711])
struct UDisGFxMoviePlayerJournal_execReq_Inventory_All_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.PowerBuy
// [0x00020400]  (iNative[44374])
struct UDisGFxMoviePlayerJournal_execPowerBuy_Params
{
	class FString                                      _rPowerId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            _PowerLevel;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.OnPowerInfosRequest
// [0x00020400]  (iNative[43956])
struct UDisGFxMoviePlayerJournal_execOnPowerInfosRequest_Params
{
	class FString                                      _rPowerId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           _bJustPurchased : 1;                              // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_PowerDetails
// [0x00020400]  (iNative[44728])
struct UDisGFxMoviePlayerJournal_execReq_PowerDetails_Params
{
	class FString                                      _rPowerId;                                        // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_PowersTabContent
// [0x00020400]  (iNative[44729])
struct UDisGFxMoviePlayerJournal_execReq_PowersTabContent_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_MissionItemInfo
// [0x00020400]  (iNative[44725])
struct UDisGFxMoviePlayerJournal_execReq_MissionItemInfo_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_MissionItems
// [0x00020400]  (iNative[44726])
struct UDisGFxMoviePlayerJournal_execReq_MissionItems_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_ChapterNotes
// [0x00020400]  (iNative[44704])
struct UDisGFxMoviePlayerJournal_execReq_ChapterNotes_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.OnToggleHUDMarker
// [0x00020400]  (iNative[43997])
struct UDisGFxMoviePlayerJournal_execOnToggleHUDMarker_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.OnToggleObjectivesListHistory
// [0x00020400]  (iNative[43999])
struct UDisGFxMoviePlayerJournal_execOnToggleObjectivesListHistory_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_ObjectivesList
// [0x00020400]  (iNative[44727])
struct UDisGFxMoviePlayerJournal_execReq_ObjectivesList_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerJournal.Req_FlashingTabsBitfield
// [0x00020400]  (iNative[44709])
struct UDisGFxMoviePlayerJournal_execReq_FlashingTabsBitfield_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLeaveOptions
// [0x00020400]  (iNative[43929])
struct UDisGFxMoviePlayerMenuBase_execOnLeaveOptions_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnResetOptions
// [0x00020400]  (iNative[43965])
struct UDisGFxMoviePlayerMenuBase_execOnResetOptions_Params
{
	int32_t                                            _CategoryIdx;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _SubCategoryIdx;                                  // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSettingChange
// [0x00020400]  (iNative[43984])
struct UDisGFxMoviePlayerMenuBase_execOnSettingChange_Params
{
	int32_t                                            _SettingID;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fValue;                                          // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.DisplayStorageDeviceSelection
// [0x00020400]  (iNative[32344])
struct UDisGFxMoviePlayerMenuBase_execDisplayStorageDeviceSelection_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.CloseGammaImage
// [0x00020400]  (iNative[30884])
struct UDisGFxMoviePlayerMenuBase_execCloseGammaImage_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OpenGammaImage
// [0x00020400]  (iNative[44007])
struct UDisGFxMoviePlayerMenuBase_execOpenGammaImage_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnApplyVideoSettings
// [0x00020400]  (iNative[43886])
struct UDisGFxMoviePlayerMenuBase_execOnApplyVideoSettings_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_VideoSettingsScreen
// [0x00020400]  (iNative[44734])
struct UDisGFxMoviePlayerMenuBase_execReq_VideoSettingsScreen_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_GamepadMappingScreen
// [0x00020400]  (iNative[44710])
struct UDisGFxMoviePlayerMenuBase_execReq_GamepadMappingScreen_Params
{
	int32_t                                            _SchemeIdx;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnKeyListening
// [0x00020400]  (iNative[43928])
struct UDisGFxMoviePlayerMenuBase_execOnKeyListening_Params
{
	int32_t                                            _SettingID;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadGameListClosed
// [0x00020400]  (iNative[43932])
struct UDisGFxMoviePlayerMenuBase_execOnLoadGameListClosed_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSaveGameListClosed
// [0x00020400]  (iNative[43973])
struct UDisGFxMoviePlayerMenuBase_execOnSaveGameListClosed_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnDeleteSaveConfirm
// [0x00020400]  (iNative[43894])
struct UDisGFxMoviePlayerMenuBase_execOnDeleteSaveConfirm_Params
{
	uint32_t                                           _bFromSaveGameMenu : 1;                           // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            _ListIdx;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadLastSaveClicked
// [0x00020400]  (iNative[43933])
struct UDisGFxMoviePlayerMenuBase_execOnLoadLastSaveClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadGameConfirm
// [0x00020400]  (iNative[43931])
struct UDisGFxMoviePlayerMenuBase_execOnLoadGameConfirm_Params
{
	int32_t                                            _ListIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnLoadGameClicked
// [0x00020400]  (iNative[43930])
struct UDisGFxMoviePlayerMenuBase_execOnLoadGameClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSaveGameConfirm
// [0x00020400]  (iNative[43972])
struct UDisGFxMoviePlayerMenuBase_execOnSaveGameConfirm_Params
{
	int32_t                                            _ListIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.OnSaveGameClicked
// [0x00020400]  (iNative[43971])
struct UDisGFxMoviePlayerMenuBase_execOnSaveGameClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_CanLoadGame
// [0x00020400]  (iNative[44702])
struct UDisGFxMoviePlayerMenuBase_execReq_CanLoadGame_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_CanSaveGame
// [0x00020400]  (iNative[44703])
struct UDisGFxMoviePlayerMenuBase_execReq_CanSaveGame_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_IsSaveLoadEnabled
// [0x00020400]  (iNative[44718])
struct UDisGFxMoviePlayerMenuBase_execReq_IsSaveLoadEnabled_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerMenuBase.Req_CanContinueGame
// [0x00020400]  (iNative[44701])
struct UDisGFxMoviePlayerMenuBase_execReq_CanContinueGame_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.UseDLC06Progression
// [0x00020400]  (iNative[47708])
struct UDisGFxMoviePlayerMainMenu_execUseDLC06Progression_Params
{
	int32_t                                            _ListIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.BackToStartScreen
// [0x00020400]  (iNative[30568])
struct UDisGFxMoviePlayerMainMenu_execBackToStartScreen_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnQuitGameConfirm
// [0x00020400]  (iNative[43957])
struct UDisGFxMoviePlayerMainMenu_execOnQuitGameConfirm_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDLCListClosed
// [0x00020400]  (iNative[43897])
struct UDisGFxMoviePlayerMainMenu_execOnDLCListClosed_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.DeleteDLC
// [0x00020400]  (iNative[18884])
struct UDisGFxMoviePlayerMainMenu_execDeleteDLC_Params
{
	int32_t                                            _DLCIdx;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.Req_DLConHDD
// [0x00020400]  (iNative[44707])
struct UDisGFxMoviePlayerMainMenu_execReq_DLConHDD_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDLCClicked
// [0x00020400]  (iNative[43896])
struct UDisGFxMoviePlayerMainMenu_execOnDLCClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.Req_PSStoreEnabled
// [0x00020400]  (iNative[44730])
struct UDisGFxMoviePlayerMainMenu_execReq_PSStoreEnabled_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnOptionsClicked
// [0x00020400]  (iNative[43951])
struct UDisGFxMoviePlayerMainMenu_execOnOptionsClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.Req_SaveSlotInfos
// [0x00020400]  (iNative[44732])
struct UDisGFxMoviePlayerMainMenu_execReq_SaveSlotInfos_Params
{
	int32_t                                            _ListIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnMissionsMenuClosed
// [0x00020400]  (iNative[43941])
struct UDisGFxMoviePlayerMainMenu_execOnMissionsMenuClosed_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OpenMissionStats
// [0x00020400]  (iNative[44008])
struct UDisGFxMoviePlayerMainMenu_execOpenMissionStats_Params
{
	int32_t                                            _MissionIdx;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnMissionSelected
// [0x00020400]  (iNative[43940])
struct UDisGFxMoviePlayerMainMenu_execOnMissionSelected_Params
{
	int32_t                                            _MissionIdx;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDLCTabSelected
// [0x00020400]  (iNative[43898])
struct UDisGFxMoviePlayerMainMenu_execOnDLCTabSelected_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnCampaignTabSelected
// [0x00020400]  (iNative[43889])
struct UDisGFxMoviePlayerMainMenu_execOnCampaignTabSelected_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnMissionsClicked
// [0x00020400]  (iNative[43939])
struct UDisGFxMoviePlayerMainMenu_execOnMissionsClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnContinueClicked
// [0x00020400]  (iNative[43892])
struct UDisGFxMoviePlayerMainMenu_execOnContinueClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnNewGameConfirm
// [0x00020400]  (iNative[43945])
struct UDisGFxMoviePlayerMainMenu_execOnNewGameConfirm_Params
{
	int32_t                                            _Difficulty;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnNewGameClicked
// [0x00020400]  (iNative[43944])
struct UDisGFxMoviePlayerMainMenu_execOnNewGameClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnDeviceSelectionComplete
// [0x00020400]  (iNative[9770])
struct UDisGFxMoviePlayerMainMenu_execOnDeviceSelectionComplete_Params
{
	uint32_t                                           _bWasSuccessful : 1;                              // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnLoginCancelled
// [0x00020400]  (iNative[9775])
struct UDisGFxMoviePlayerMainMenu_execOnLoginCancelled_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.OnLoginChange
// [0x00020400]  (iNative[9776])
struct UDisGFxMoviePlayerMainMenu_execOnLoginChange_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.ReadProfileSettings
// [0x00020802] 
struct UDisGFxMoviePlayerMainMenu_eventReadProfileSettings_Params
{
	uint8_t                                            _UserIndex;                                       // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	// class UOnlinePlayerInterface*                   PlayerInterface;                                  // 0x0008 (0x0008) [0x0000000000000000]               
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.UnregisterControllerDelegates
// [0x00020802] 
struct UDisGFxMoviePlayerMainMenu_eventUnregisterControllerDelegates_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	// class UOnlinePlayerInterfaceEx*                 PlayerInterfaceEx;                                // 0x0008 (0x0008) [0x0000000000000000]               
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.RegisterControllerDelegates
// [0x00020802] 
struct UDisGFxMoviePlayerMainMenu_eventRegisterControllerDelegates_Params
{
	uint8_t                                            _ControllerId;                                    // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	// class UOnlinePlayerInterfaceEx*                 PlayerInterfaceEx;                                // 0x0008 (0x0008) [0x0000000000000000]               
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.UnregisterCommonDelegates
// [0x00020802] 
struct UDisGFxMoviePlayerMainMenu_eventUnregisterCommonDelegates_Params
{
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	// class UOnlinePlayerInterface*                   PlayerInterface;                                  // 0x0004 (0x0008) [0x0000000000000000]               
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.RegisterCommonDelegates
// [0x00020802] 
struct UDisGFxMoviePlayerMainMenu_eventRegisterCommonDelegates_Params
{
	// class UOnlineSubsystem*                         OnlineSub;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	// class UOnlinePlayerInterface*                   PlayerInterface;                                  // 0x0004 (0x0008) [0x0000000000000000]               
};

// Function DishonoredGame.DisGFxMoviePlayerMainMenu.SetControllerId
// [0x00020802] 
struct UDisGFxMoviePlayerMainMenu_eventSetControllerId_Params
{
	int32_t                                            _ControllerId;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class UEngine*                                  Eng;                                              // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnMenuClosed
// [0x00020400]  (iNative[43936])
struct UDisGFxMoviePlayerPauseMenu_execOnMenuClosed_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.BackToWindows
// [0x00020400]  (iNative[30569])
struct UDisGFxMoviePlayerPauseMenu_execBackToWindows_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnQuitGameConfirm
// [0x00020400]  (iNative[43957])
struct UDisGFxMoviePlayerPauseMenu_execOnQuitGameConfirm_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.BackToDLC07MainMenu
// [0x00020400]  (iNative[45877])
struct UDisGFxMoviePlayerPauseMenu_execBackToDLC07MainMenu_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.BackToDLC06MainMenu
// [0x00020400]  (iNative[45876])
struct UDisGFxMoviePlayerPauseMenu_execBackToDLC06MainMenu_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnTutorialReadRequest
// [0x00020400]  (iNative[44003])
struct UDisGFxMoviePlayerPauseMenu_execOnTutorialReadRequest_Params
{
	int32_t                                            _ListIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnTutorialsClicked
// [0x00020400]  (iNative[44004])
struct UDisGFxMoviePlayerPauseMenu_execOnTutorialsClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnLeaveOptions
// [0x00020400]  (iNative[43929])
struct UDisGFxMoviePlayerPauseMenu_execOnLeaveOptions_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnOptionsClicked
// [0x00020400]  (iNative[43951])
struct UDisGFxMoviePlayerPauseMenu_execOnOptionsClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.OnResumeGameClicked
// [0x00020400]  (iNative[43966])
struct UDisGFxMoviePlayerPauseMenu_execOnResumeGameClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.HasFinishedSaveLoad
// [0x00020400]  (iNative[46550])
struct UDisGFxMoviePlayerPauseMenu_execHasFinishedSaveLoad_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerPauseMenu.SetPauseDuringSaveLoad
// [0x00020802] 
struct UDisGFxMoviePlayerPauseMenu_eventSetPauseDuringSaveLoad_Params
{
	uint32_t                                           _bDesiredPauseState : 1;                          // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UEngine*                                  Eng;                                              // 0x0004 (0x0004) [0x0000000000000000]               
	// class APlayerController*                        PC;                                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnClosed
// [0x00020400]  (iNative[43891])
struct UDisGFxMoviePlayerMissionStats_execOnClosed_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnBackClicked
// [0x00020400]  (iNative[43888])
struct UDisGFxMoviePlayerMissionStats_execOnBackClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnReplayMissionClicked
// [0x00020400]  (iNative[43963])
struct UDisGFxMoviePlayerMissionStats_execOnReplayMissionClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerMissionStats.OnContinueClicked
// [0x00020400]  (iNative[43892])
struct UDisGFxMoviePlayerMissionStats_execOnContinueClicked_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerNote.OnReadableNoteClosed
// [0x00020400]  (iNative[43958])
struct UDisGFxMoviePlayerNote_execOnReadableNoteClosed_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerNote.HasFinishedAsyncLoading
// [0x00020400]  (iNative[35452])
struct UDisGFxMoviePlayerNote_execHasFinishedAsyncLoading_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGFxMoviePlayerPowerWheel.OnClosed
// [0x00020400]  (iNative[43891])
struct UDisGFxMoviePlayerPowerWheel_execOnClosed_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPowerWheel.ConsumeManaPotion
// [0x00020400]  (iNative[30901])
struct UDisGFxMoviePlayerPowerWheel_execConsumeManaPotion_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPowerWheel.ConsumeHealthPotion
// [0x00020400]  (iNative[30900])
struct UDisGFxMoviePlayerPowerWheel_execConsumeHealthPotion_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerPowerWheel.OnSelectionChanged
// [0x00020400]  (iNative[43978])
struct UDisGFxMoviePlayerPowerWheel_execOnSelectionChanged_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerStore.OnShopClosed
// [0x00020400]  (iNative[43986])
struct UDisGFxMoviePlayerStore_execOnShopClosed_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerStore.Req_BuyItem
// [0x00020400]  (iNative[44700])
struct UDisGFxMoviePlayerStore_execReq_BuyItem_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerStore.Req_ItemInfo
// [0x00020400]  (iNative[44719])
struct UDisGFxMoviePlayerStore_execReq_ItemInfo_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGFxMoviePlayerStore.Req_FavorsList
// [0x00020400]  (iNative[47668])
struct UDisGFxMoviePlayerStore_execReq_FavorsList_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerStore.Req_UpgradesList
// [0x00020400]  (iNative[44733])
struct UDisGFxMoviePlayerStore_execReq_UpgradesList_Params
{
};

// Function DishonoredGame.DisGFxMoviePlayerStore.Req_PurchasesList
// [0x00020400]  (iNative[44731])
struct UDisGFxMoviePlayerStore_execReq_PurchasesList_Params
{
};

// Function DishonoredGame.DishonoredHUD.Version
// [0x00020202] 
struct ADishonoredHUD_execVersion_Params
{
};

// Function DishonoredGame.DishonoredHUD.DebugOnly
// [0x00024600]  (iNative[31375])
struct ADishonoredHUD_execDebugOnly_Params
{
	class FName                                        DebugType1;                                       // 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FName                                        DebugType2;                                       // 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FName                                        DebugType3;                                       // 0x0010 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FName                                        DebugType4;                                       // 0x0018 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FName                                        DebugType5;                                       // 0x0020 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredHUD.DebugClear
// [0x00020600]  (iNative[31357])
struct ADishonoredHUD_execDebugClear_Params
{
};

// Function DishonoredGame.DishonoredHUD.DebugDisable
// [0x00024600]  (iNative[31360])
struct ADishonoredHUD_execDebugDisable_Params
{
	class FName                                        DebugType;                                        // 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredHUD.DebugEnable
// [0x00024600]  (iNative[31361])
struct ADishonoredHUD_execDebugEnable_Params
{
	class FName                                        DebugType;                                        // 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredHUD.DrawHUD
// [0x00820002] 
struct ADishonoredHUD_execDrawHUD_Params
{
	// struct FVector                                  ViewPoint;                                        // 0x0000 (0x000C) [0x0000000000000000]               
	// struct FRotator                                 ViewRot;                                          // 0x000C (0x000C) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredHUD.CallDrawRoute
// [0x00020802] 
struct ADishonoredHUD_eventCallDrawRoute_Params
{
	class APawn*                                       _pTarget;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredHUD.ShowDebugInfo_Native
// [0x00420400]  (iNative[44891])
struct ADishonoredHUD_execShowDebugInfo_Native_Params
{
	float                                              out_YL;                                           // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DishonoredHUD.PlayerDisplayDebug_Native
// [0x00420400]  (iNative[44253])
struct ADishonoredHUD_execPlayerDisplayDebug_Native_Params
{
	float                                              out_YL;                                           // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DishonoredHUD.ShowDebugInfo
// [0x00420002] 
struct ADishonoredHUD_execShowDebugInfo_Params
{
	float                                              out_YL;                                           // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              out_YPos;                                         // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DishonoredHUD.ShowDebug
// [0x00024200] 
struct ADishonoredHUD_execShowDebug_Params
{
	class FName                                        _DebugType;                                       // 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredHUD.CallShouldDisplayDebug
// [0x00020802] 
struct ADishonoredHUD_eventCallShouldDisplayDebug_Params
{
	class FName                                        DebugType;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredHUD.DrawHUD_Native
// [0x00020400]  (iNative[32786])
struct ADishonoredHUD_execDrawHUD_Native_Params
{
};

// Function DishonoredGame.DishonoredHUD.RenderNonHUD_Native
// [0x00020401]  (iNative[44697])
struct ADishonoredHUD_execRenderNonHUD_Native_Params
{
	struct FVector                                     ViewPoint;                                        // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ViewRot;                                          // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisUISoundTheme.ProcessSoundEvent
// [0x00024802] 
struct UDisUISoundTheme_eventProcessSoundEvent_Params
{
	class FName                                        _SoundEventName;                                  // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class APlayerController*                           _pSoundOwner;                                     // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	// int32_t                                         EventIndex;                                       // 0x000C (0x0004) [0x0000000000000000]               
	// class AWorldInfo*                               pWorldInfo;                                       // 0x0010 (0x0004) [0x0000000000000000]               
	// uint32_t                                        bFiltered : 1;                                    // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DishonoredGame.DishonoredAnimNodeSeq.PlayAnim
// [0x00024400]  (iNative[24268])
struct UDishonoredAnimNodeSeq_execPlayAnim_Params
{
	uint32_t                                           _bLoop : 1;                                       // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              _fInRate;                                         // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fStartTime;                                      // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisAnimNodeSeqPlayer.PlayAnim
// [0x00024400]  (iNative[24268])
struct UDisAnimNodeSeqPlayer_execPlayAnim_Params
{
	uint32_t                                           _bLoop : 1;                                       // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              _fInRate;                                         // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fStartTime;                                      // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredAnimNodeSeqAttack.PlayAnim
// [0x00024400]  (iNative[24268])
struct UDishonoredAnimNodeSeqAttack_execPlayAnim_Params
{
	uint32_t                                           _bLoop : 1;                                       // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              _fInRate;                                         // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fStartTime;                                      // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredAnimNodeSeqMantle.SetAnim
// [0x00020400]  (iNative[25585])
struct UDishonoredAnimNodeSeqMantle_execSetAnim_Params
{
	class FName                                        Sequence;                                         // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerCamera.ApplyDebugCam_Native
// [0x00420400]  (iNative[30478])
struct ADishonoredPlayerCamera_execApplyDebugCam_Native_Params
{
	class APawn*                                       _pOwnerPawn;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaTime;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTViewTarget                                _OutVT;                                           // 0x0008 (0x0028) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DishonoredCheatManager.DLC05StartChallenge
// [0x00024600]  (iNative[46195])
struct UDishonoredCheatManager_execDLC05StartChallenge_Params
{
	uint8_t                                            _Challenge;                                       // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           _bExpertMode : 1;                                 // 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.DLC05UnlockExpertMode
// [0x00020600]  (iNative[46197])
struct UDishonoredCheatManager_execDLC05UnlockExpertMode_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DLC05ToggleTimer
// [0x00020600]  (iNative[46196])
struct UDishonoredCheatManager_execDLC05ToggleTimer_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.IsAttentionTypeAllowed
// [0x00020600]  (iNative[35603])
struct UDishonoredCheatManager_execIsAttentionTypeAllowed_Params
{
	uint8_t                                            _Type;                                            // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredCheatManager.AttentionClearExclusiveType
// [0x00020600]  (iNative[30542])
struct UDishonoredCheatManager_execAttentionClearExclusiveType_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AttentionSetExclusiveType
// [0x00024600]  (iNative[30548])
struct UDishonoredCheatManager_execAttentionSetExclusiveType_Params
{
	uint8_t                                            _Type1;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            _Type2;                                           // 0x0001 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type3;                                           // 0x0002 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type4;                                           // 0x0003 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type5;                                           // 0x0004 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AttentionAddExclusiveType
// [0x00024600]  (iNative[30540])
struct UDishonoredCheatManager_execAttentionAddExclusiveType_Params
{
	uint8_t                                            _Type1;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            _Type2;                                           // 0x0001 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type3;                                           // 0x0002 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type4;                                           // 0x0003 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type5;                                           // 0x0004 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AttentionClearIgnoreType
// [0x00020600]  (iNative[30543])
struct UDishonoredCheatManager_execAttentionClearIgnoreType_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AttentionSetIgnoreType
// [0x00024600]  (iNative[30549])
struct UDishonoredCheatManager_execAttentionSetIgnoreType_Params
{
	uint8_t                                            _Type1;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            _Type2;                                           // 0x0001 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type3;                                           // 0x0002 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type4;                                           // 0x0003 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type5;                                           // 0x0004 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AttentionAddIgnoreType
// [0x00024600]  (iNative[30541])
struct UDishonoredCheatManager_execAttentionAddIgnoreType_Params
{
	uint8_t                                            _Type1;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            _Type2;                                           // 0x0001 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type3;                                           // 0x0002 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type4;                                           // 0x0003 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            _Type5;                                           // 0x0004 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.GiveAllUsableRequiredItems
// [0x00020600]  (iNative[35324])
struct UDishonoredCheatManager_execGiveAllUsableRequiredItems_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.BlinkShowRangeFull
// [0x00020600]  (iNative[30649])
struct UDishonoredCheatManager_execBlinkShowRangeFull_Params
{
	float                                              _fDuration;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.BlinkShowRange
// [0x00020600]  (iNative[30648])
struct UDishonoredCheatManager_execBlinkShowRange_Params
{
	float                                              _fDuration;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.DisSlomoCommand
// [0x00020600]  (iNative[32427])
struct UDishonoredCheatManager_execDisSlomoCommand_Params
{
	class FName                                        _operation;                                       // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.DisSlomoFull
// [0x00020600]  (iNative[32428])
struct UDishonoredCheatManager_execDisSlomoFull_Params
{
	float                                              _fPlayerDilation;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fWorldDilation;                                  // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.DisSlomo
// [0x00020600]  (iNative[32426])
struct UDishonoredCheatManager_execDisSlomo_Params
{
	float                                              _fDilation;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.ForceCorpseDropTypeOff
// [0x00020600]  (iNative[35119])
struct UDishonoredCheatManager_execForceCorpseDropTypeOff_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.ForceCorpseDropType
// [0x00020600]  (iNative[35118])
struct UDishonoredCheatManager_execForceCorpseDropType_Params
{
	uint8_t                                            _Type;                                            // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.SetDebugMantleStepSize
// [0x00020600]  (iNative[44859])
struct UDishonoredCheatManager_execSetDebugMantleStepSize_Params
{
	float                                              _fStepSize;                                       // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.SetDebugMantleCheckTime
// [0x00020600]  (iNative[44858])
struct UDishonoredCheatManager_execSetDebugMantleCheckTime_Params
{
	float                                              _fCheckTime;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.NormalStepMantleEdgeFinder
// [0x00020600]  (iNative[43781])
struct UDishonoredCheatManager_execNormalStepMantleEdgeFinder_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.SingleStepMantleEdgeFinder
// [0x00020600]  (iNative[44903])
struct UDishonoredCheatManager_execSingleStepMantleEdgeFinder_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.SetVisSettingsLowVis
// [0x00020600]  (iNative[44864])
struct UDishonoredCheatManager_execSetVisSettingsLowVis_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.SetVisSettingsHighVis
// [0x00020600]  (iNative[44863])
struct UDishonoredCheatManager_execSetVisSettingsHighVis_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.StopVisSettingsMode
// [0x00020600]  (iNative[45231])
struct UDishonoredCheatManager_execStopVisSettingsMode_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.StartVisSettingsMode
// [0x00020600]  (iNative[45142])
struct UDishonoredCheatManager_execStartVisSettingsMode_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.GiveMoney
// [0x00020600]  (iNative[35326])
struct UDishonoredCheatManager_execGiveMoney_Params
{
	int32_t                                            _Count;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.GiveBoneCharm
// [0x00020600]  (iNative[35325])
struct UDishonoredCheatManager_execGiveBoneCharm_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.MinUpgrades
// [0x00020600]  (iNative[43698])
struct UDishonoredCheatManager_execMinUpgrades_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.MaxUpgrades
// [0x00020600]  (iNative[43665])
struct UDishonoredCheatManager_execMaxUpgrades_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.RemoveUpgrade
// [0x00020600]  (iNative[44696])
struct UDishonoredCheatManager_execRemoveUpgrade_Params
{
	class FString                                      _Name;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredCheatManager.AddUpgrade
// [0x00020600]  (iNative[30033])
struct UDishonoredCheatManager_execAddUpgrade_Params
{
	class FString                                      _Name;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredCheatManager.ReportDanglingPointers
// [0x00024600]  (iNative[44699])
struct UDishonoredCheatManager_execReportDanglingPointers_Params
{
	uint32_t                                           _bReportShutdownPawns : 1;                        // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           _bReportDestroyedActors : 1;                      // 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           _bReportUnreportedProperties : 1;                 // 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.GetDifficulty
// [0x00020600]  (iNative[35316])
struct UDishonoredCheatManager_execGetDifficulty_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.SetDifficulty
// [0x00020600]  (iNative[44860])
struct UDishonoredCheatManager_execSetDifficulty_Params
{
	int32_t                                            _Level;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.DebugDarkness
// [0x00020600]  (iNative[31358])
struct UDishonoredCheatManager_execDebugDarkness_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AddDarkness
// [0x00020600]  (iNative[30027])
struct UDishonoredCheatManager_execAddDarkness_Params
{
	int32_t                                            _Value;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.ToggleUsableHighlight
// [0x00020600]  (iNative[45377])
struct UDishonoredCheatManager_execToggleUsableHighlight_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.ToggleActorLightEnvironment
// [0x00020600]  (iNative[45369])
struct UDishonoredCheatManager_execToggleActorLightEnvironment_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LogDuplicateAnimSequences
// [0x00020600]  (iNative[35786])
struct UDishonoredCheatManager_execLogDuplicateAnimSequences_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LogAnimSequences
// [0x00020600]  (iNative[35785])
struct UDishonoredCheatManager_execLogAnimSequences_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.ToggleRatProbingForGround
// [0x00020600]  (iNative[45374])
struct UDishonoredCheatManager_execToggleRatProbingForGround_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.SpawnRandomRatSwarm
// [0x00020600]  (iNative[45099])
struct UDishonoredCheatManager_execSpawnRandomRatSwarm_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.KillAllRats
// [0x00020600]  (iNative[35646])
struct UDishonoredCheatManager_execKillAllRats_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.BreakOnTargetedRat
// [0x00020202] 
struct UDishonoredCheatManager_execBreakOnTargetedRat_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugRats
// [0x00020600]  (iNative[31377])
struct UDishonoredCheatManager_execDebugRats_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugRat
// [0x00020600]  (iNative[31376])
struct UDishonoredCheatManager_execDebugRat_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugBreakableCollision
// [0x00020202] 
struct UDishonoredCheatManager_execDebugBreakableCollision_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugHeart
// [0x00020202] 
struct UDishonoredCheatManager_execDebugHeart_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugSpringRazor
// [0x00020202] 
struct UDishonoredCheatManager_execDebugSpringRazor_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.ListActorTickTime
// [0x00020600]  (iNative[35761])
struct UDishonoredCheatManager_execListActorTickTime_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.ListTickableActors
// [0x00020600]  (iNative[35763])
struct UDishonoredCheatManager_execListTickableActors_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.ListComponents
// [0x00020600]  (iNative[35762])
struct UDishonoredCheatManager_execListComponents_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.TestNailing
// [0x00020600]  (iNative[45334])
struct UDishonoredCheatManager_execTestNailing_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.ToggleDrawRainBox
// [0x00020202] 
struct UDishonoredCheatManager_execToggleDrawRainBox_Params
{
	// class ADishonoredPlayerCamera*                  pPlayerCamera;                                    // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredCheatManager.BendTimeDisplay
// [0x00020600]  (iNative[30608])
struct UDishonoredCheatManager_execBendTimeDisplay_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.BendTimeReport
// [0x00020600]  (iNative[30609])
struct UDishonoredCheatManager_execBendTimeReport_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.MinPowers
// [0x00020600]  (iNative[43696])
struct UDishonoredCheatManager_execMinPowers_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.MaxPowers
// [0x00020600]  (iNative[43664])
struct UDishonoredCheatManager_execMaxPowers_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.RemovePower
// [0x00020600]  (iNative[44695])
struct UDishonoredCheatManager_execRemovePower_Params
{
	class FName                                        _WhichPower;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.AddAttribute
// [0x00020600]  (iNative[30026])
struct UDishonoredCheatManager_execAddAttribute_Params
{
	class FName                                        _Name;                                            // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              _fValue;                                          // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.AddPower
// [0x00020600]  (iNative[30032])
struct UDishonoredCheatManager_execAddPower_Params
{
	class FName                                        _WhichPower;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _WhichLevel;                                      // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.RemoveMod
// [0x00020600]  (iNative[44692])
struct UDishonoredCheatManager_execRemoveMod_Params
{
	class FName                                        _WhichAttribute;                                  // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        _ModName;                                         // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.AddMod
// [0x00024600]  (iNative[30029])
struct UDishonoredCheatManager_execAddMod_Params
{
	class FName                                        _WhichAttribute;                                  // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        _ModName;                                         // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            _ModType;                                         // 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
	float                                              _fModValue;                                       // 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fLifetime;                                       // 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.SimFPS
// [0x00024202] 
struct UDishonoredCheatManager_execSimFPS_Params
{
	int32_t                                            _LowFPS;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            _HighFPS;                                         // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.SetSingleStepFPS
// [0x00020202] 
struct UDishonoredCheatManager_execSetSingleStepFPS_Params
{
	int32_t                                            FPS;                                              // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.NormalStep
// [0x00020202] 
struct UDishonoredCheatManager_execNormalStep_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.SingleStep
// [0x00020202] 
struct UDishonoredCheatManager_execSingleStep_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.SingleStep_Native
// [0x00020400]  (iNative[44902])
struct UDishonoredCheatManager_execSingleStep_Native_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.Walk
// [0x00020202] 
struct UDishonoredCheatManager_execWalk_Params
{
	// uint32_t                                        bCameraWasDrop : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DishonoredGame.DishonoredCheatManager.DialogSkipGlobalRules
// [0x00020600]  (iNative[31633])
struct UDishonoredCheatManager_execDialogSkipGlobalRules_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugDialog
// [0x00020600]  (iNative[31359])
struct UDishonoredCheatManager_execDebugDialog_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugToggleVerbose
// [0x00020600]  (iNative[31379])
struct UDishonoredCheatManager_execDebugToggleVerbose_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugMenuRight
// [0x00020600]  (iNative[31373])
struct UDishonoredCheatManager_execDebugMenuRight_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugMenuLeft
// [0x00020600]  (iNative[31372])
struct UDishonoredCheatManager_execDebugMenuLeft_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugMenuDown
// [0x00020600]  (iNative[31370])
struct UDishonoredCheatManager_execDebugMenuDown_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugMenuUp
// [0x00020600]  (iNative[31374])
struct UDishonoredCheatManager_execDebugMenuUp_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DebugMenuEnter
// [0x00020600]  (iNative[31371])
struct UDishonoredCheatManager_execDebugMenuEnter_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.EndLiveSession
// [0x00020600]  (iNative[46482])
struct UDishonoredCheatManager_execEndLiveSession_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.CreateLiveSession
// [0x00020600]  (iNative[45888])
struct UDishonoredCheatManager_execCreateLiveSession_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.WriteScoreToLeaderboard_Name
// [0x00020600]  (iNative[47719])
struct UDishonoredCheatManager_execWriteScoreToLeaderboard_Name_Params
{
	class FString                                      _rLeaderboardName;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            nScore;                                           // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.WriteScoreToLeaderboard_ID
// [0x00020600]  (iNative[47718])
struct UDishonoredCheatManager_execWriteScoreToLeaderboard_ID_Params
{
	int32_t                                            nLeaderboardID;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            nScore;                                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.GetLeaderboardsInfo_Name
// [0x00024600]  (iNative[46530])
struct UDishonoredCheatManager_execGetLeaderboardsInfo_Name_Params
{
	class FString                                      _rLeaderboardName;                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            nStartIndex;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            nNbEntriesToRetrieve;                             // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bFriends : 1;                                     // 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAroundUser : 1;                                  // 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.GetLeaderboardsInfo_ID
// [0x00024600]  (iNative[46529])
struct UDishonoredCheatManager_execGetLeaderboardsInfo_ID_Params
{
	int32_t                                            nLeaderboardID;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            nStartIndex;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            nNbEntriesToRetrieve;                             // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bFriends : 1;                                     // 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bAroundUser : 1;                                  // 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.ResetAllSteamAchievements
// [0x00020600]  (iNative[44754])
struct UDishonoredCheatManager_execResetAllSteamAchievements_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DeleteAllSteamSaveGames
// [0x00020600]  (iNative[31512])
struct UDishonoredCheatManager_execDeleteAllSteamSaveGames_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DLC05AddScore
// [0x00020600]  (iNative[46178])
struct UDishonoredCheatManager_execDLC05AddScore_Params
{
	int32_t                                            I;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.DLC05ShowChallenge
// [0x00020600]  (iNative[46194])
struct UDishonoredCheatManager_execDLC05ShowChallenge_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.ShowStorePage
// [0x00020600]  (iNative[44895])
struct UDishonoredCheatManager_execShowStorePage_Params
{
	class FString                                      _arg;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredCheatManager.Slack
// [0x00020600]  (iNative[44907])
struct UDishonoredCheatManager_execSlack_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.SwitchDLCLock
// [0x00020600]  (iNative[45248])
struct UDishonoredCheatManager_execSwitchDLCLock_Params
{
	int32_t                                            _Index;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.GoreEnable
// [0x00020600]  (iNative[35386])
struct UDishonoredCheatManager_execGoreEnable_Params
{
	uint32_t                                           _bEnable : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.GiveRunes
// [0x00020600]  (iNative[35328])
struct UDishonoredCheatManager_execGiveRunes_Params
{
	int32_t                                            _Count;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.ShowPowerMenu
// [0x00020600]  (iNative[44893])
struct UDishonoredCheatManager_execShowPowerMenu_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DoorPoltergeistMode
// [0x00024600]  (iNative[32664])
struct UDishonoredCheatManager_execDoorPoltergeistMode_Params
{
	int32_t                                            _Mode;                                            // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.DormantDebugEnable
// [0x00020600]  (iNative[32674])
struct UDishonoredCheatManager_execDormantDebugEnable_Params
{
	uint32_t                                           _bEnable : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.DormantDebugToggle
// [0x00020600]  (iNative[32675])
struct UDishonoredCheatManager_execDormantDebugToggle_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DestroyActor
// [0x00020600]  (iNative[31523])
struct UDishonoredCheatManager_execDestroyActor_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DisNoteShow
// [0x00020600]  (iNative[32153])
struct UDishonoredCheatManager_execDisNoteShow_Params
{
	uint32_t                                           _bShow : 1;                                       // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.DisNoteToggle
// [0x00020600]  (iNative[32154])
struct UDishonoredCheatManager_execDisNoteToggle_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCLogSteeringFlags
// [0x00020600]  (iNative[43824])
struct UDishonoredCheatManager_execNPCLogSteeringFlags_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringWall
// [0x00020600]  (iNative[43841])
struct UDishonoredCheatManager_execNPCToggleSteeringWall_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringEnemyPush
// [0x00020600]  (iNative[43840])
struct UDishonoredCheatManager_execNPCToggleSteeringEnemyPush_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringCombat
// [0x00020600]  (iNative[43838])
struct UDishonoredCheatManager_execNPCToggleSteeringCombat_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringDanger
// [0x00020600]  (iNative[43839])
struct UDishonoredCheatManager_execNPCToggleSteeringDanger_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSteeringAvoidable
// [0x00020600]  (iNative[43837])
struct UDishonoredCheatManager_execNPCToggleSteeringAvoidable_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleLookAtBlending
// [0x00020600]  (iNative[47574])
struct UDishonoredCheatManager_execNPCToggleLookAtBlending_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCDelayTravel
// [0x00024600]  (iNative[43806])
struct UDishonoredCheatManager_execNPCDelayTravel_Params
{
	float                                              _fTravelDelay;                                    // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.NPCSpawn
// [0x00020600]  (iNative[43830])
struct UDishonoredCheatManager_execNPCSpawn_Params
{
	class FName                                        _TweaksName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.NPCPlayerVisibilityForLOD
// [0x00020600]  (iNative[43825])
struct UDishonoredCheatManager_execNPCPlayerVisibilityForLOD_Params
{
	int32_t                                            _iNPCVisibility;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleLODSystem
// [0x00020600]  (iNative[43834])
struct UDishonoredCheatManager_execNPCToggleLODSystem_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCClearForcedLOD
// [0x00020600]  (iNative[43805])
struct UDishonoredCheatManager_execNPCClearForcedLOD_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCForceLODForAll
// [0x00024600]  (iNative[43818])
struct UDishonoredCheatManager_execNPCForceLODForAll_Params
{
	uint8_t                                            _LodStatus;                                       // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _iLodDistance;                                    // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            _iNPCForcedRendered;                              // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.NPCForceLOD
// [0x00024600]  (iNative[43817])
struct UDishonoredCheatManager_execNPCForceLOD_Params
{
	uint8_t                                            _LodStatus;                                       // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _iLodDistance;                                    // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            _iNPCForcedRendered;                              // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.NPCActionSpineBendingToggle
// [0x00020600]  (iNative[43803])
struct UDishonoredCheatManager_execNPCActionSpineBendingToggle_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCTogglePrediction
// [0x00020600]  (iNative[43835])
struct UDishonoredCheatManager_execNPCTogglePrediction_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCSetFreeze
// [0x00020600]  (iNative[43827])
struct UDishonoredCheatManager_execNPCSetFreeze_Params
{
	uint32_t                                           _bFreeze : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.NPCFreeze
// [0x00020600]  (iNative[43820])
struct UDishonoredCheatManager_execNPCFreeze_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCForceSkelMeshLOD
// [0x00020600]  (iNative[43819])
struct UDishonoredCheatManager_execNPCForceSkelMeshLOD_Params
{
	int32_t                                            iDesiredLevel;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.NPCSlowDeath
// [0x00020600]  (iNative[43829])
struct UDishonoredCheatManager_execNPCSlowDeath_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCToggleSlopeOffset
// [0x00020600]  (iNative[43836])
struct UDishonoredCheatManager_execNPCToggleSlopeOffset_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCSlap
// [0x00020600]  (iNative[43828])
struct UDishonoredCheatManager_execNPCSlap_Params
{
	float                                              fDesiredDamage;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.NPCImpulse
// [0x00024600]  (iNative[43822])
struct UDishonoredCheatManager_execNPCImpulse_Params
{
	float                                              _fImpulseMagnitude;                               // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTeleportHeight;                                 // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.NPCKnockdown
// [0x00020600]  (iNative[43823])
struct UDishonoredCheatManager_execNPCKnockdown_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCBreakLinkedAction
// [0x00020600]  (iNative[43804])
struct UDishonoredCheatManager_execNPCBreakLinkedAction_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCSetDamage
// [0x00020600]  (iNative[43826])
struct UDishonoredCheatManager_execNPCSetDamage_Params
{
	float                                              fDesiredDamage;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.NPCEasyDismemberment
// [0x00020600]  (iNative[43815])
struct UDishonoredCheatManager_execNPCEasyDismemberment_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCForceFatality
// [0x00020600]  (iNative[43816])
struct UDishonoredCheatManager_execNPCForceFatality_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCTestVersus
// [0x00020600]  (iNative[43833])
struct UDishonoredCheatManager_execNPCTestVersus_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCTestParry
// [0x00020600]  (iNative[43832])
struct UDishonoredCheatManager_execNPCTestParry_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCDodgeNothing
// [0x00020600]  (iNative[43811])
struct UDishonoredCheatManager_execNPCDodgeNothing_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCDodgeEverything
// [0x00020600]  (iNative[43810])
struct UDishonoredCheatManager_execNPCDodgeEverything_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCDestroyNonVisible
// [0x00020600]  (iNative[43809])
struct UDishonoredCheatManager_execNPCDestroyNonVisible_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCDestroyNonSelected
// [0x00020600]  (iNative[43808])
struct UDishonoredCheatManager_execNPCDestroyNonSelected_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NPCDestroy
// [0x00020600]  (iNative[43807])
struct UDishonoredCheatManager_execNPCDestroy_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.GodNPC
// [0x00020600]  (iNative[35384])
struct UDishonoredCheatManager_execGodNPC_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.NavMeshCheck
// [0x00020600]  (iNative[43773])
struct UDishonoredCheatManager_execNavMeshCheck_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.MatGoBackward
// [0x00020600]  (iNative[43649])
struct UDishonoredCheatManager_execMatGoBackward_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.MatGoForward
// [0x00020600]  (iNative[43650])
struct UDishonoredCheatManager_execMatGoForward_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LocoTeleport
// [0x00020600]  (iNative[35784])
struct UDishonoredCheatManager_execLocoTeleport_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LocoShowPathAndStraightPath
// [0x00020600]  (iNative[35782])
struct UDishonoredCheatManager_execLocoShowPathAndStraightPath_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LocoShowAvoidance
// [0x00020600]  (iNative[35781])
struct UDishonoredCheatManager_execLocoShowAvoidance_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LocoNewPhysWalking
// [0x00020600]  (iNative[35780])
struct UDishonoredCheatManager_execLocoNewPhysWalking_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LocoNewIK
// [0x00020600]  (iNative[35779])
struct UDishonoredCheatManager_execLocoNewIK_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LocoNewAvoidance
// [0x00020600]  (iNative[35778])
struct UDishonoredCheatManager_execLocoNewAvoidance_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LocoForceUnaccuracy
// [0x00020600]  (iNative[35776])
struct UDishonoredCheatManager_execLocoForceUnaccuracy_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LocoForceModifier
// [0x00020600]  (iNative[35775])
struct UDishonoredCheatManager_execLocoForceModifier_Params
{
	int32_t                                            _Modifier;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.LocoForceLookAtMode
// [0x00020600]  (iNative[35774])
struct UDishonoredCheatManager_execLocoForceLookAtMode_Params
{
	int32_t                                            _LookAtMode;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.LocoForceIdleAnim
// [0x00020600]  (iNative[35773])
struct UDishonoredCheatManager_execLocoForceIdleAnim_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LocoDontRotate
// [0x00020600]  (iNative[35772])
struct UDishonoredCheatManager_execLocoDontRotate_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.LocoDisableStartAnims
// [0x00020600]  (iNative[35771])
struct UDishonoredCheatManager_execLocoDisableStartAnims_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIUseSimpleAttentionForPlayer
// [0x00020600]  (iNative[30438])
struct UDishonoredCheatManager_execAIUseSimpleAttentionForPlayer_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIEnableAllSubStates
// [0x00020600]  (iNative[30230])
struct UDishonoredCheatManager_execAIEnableAllSubStates_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIDisableSubState
// [0x00020600]  (iNative[30212])
struct UDishonoredCheatManager_execAIDisableSubState_Params
{
	class FString                                      _rSubStateName;                                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredCheatManager.AIEnableSubState
// [0x00020600]  (iNative[30232])
struct UDishonoredCheatManager_execAIEnableSubState_Params
{
	class FString                                      _rSubStateName;                                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredCheatManager.AIEnableAllBehaviors
// [0x00020600]  (iNative[30229])
struct UDishonoredCheatManager_execAIEnableAllBehaviors_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIDisableBehavior
// [0x00020600]  (iNative[30211])
struct UDishonoredCheatManager_execAIDisableBehavior_Params
{
	class FString                                      _rBehaviorName;                                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredCheatManager.AIEnableBehavior
// [0x00020600]  (iNative[30231])
struct UDishonoredCheatManager_execAIEnableBehavior_Params
{
	class FString                                      _rBehaviorName;                                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredCheatManager.AIShowThoughts
// [0x00024600]  (iNative[30316])
struct UDishonoredCheatManager_execAIShowThoughts_Params
{
	float                                              _fRadius;                                         // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AISetNumbToAIs
// [0x00020600]  (iNative[30303])
struct UDishonoredCheatManager_execAISetNumbToAIs_Params
{
	uint32_t                                           _bNumb : 1;                                       // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AINumbToAIs
// [0x00020600]  (iNative[30277])
struct UDishonoredCheatManager_execAINumbToAIs_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AISetDeafToAIs
// [0x00020600]  (iNative[30297])
struct UDishonoredCheatManager_execAISetDeafToAIs_Params
{
	uint32_t                                           _bDeaf : 1;                                       // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIDeafToAIs
// [0x00020600]  (iNative[30208])
struct UDishonoredCheatManager_execAIDeafToAIs_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AISetBlindToAIs
// [0x00020600]  (iNative[30294])
struct UDishonoredCheatManager_execAISetBlindToAIs_Params
{
	uint32_t                                           _bBlind : 1;                                      // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIBlindToAIs
// [0x00020600]  (iNative[30181])
struct UDishonoredCheatManager_execAIBlindToAIs_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AISetDumbToAIs
// [0x00020600]  (iNative[30300])
struct UDishonoredCheatManager_execAISetDumbToAIs_Params
{
	uint32_t                                           _bDumb : 1;                                       // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIDumbToAIs
// [0x00020600]  (iNative[30226])
struct UDishonoredCheatManager_execAIDumbToAIs_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AISetNumbToPlayer
// [0x00020600]  (iNative[30304])
struct UDishonoredCheatManager_execAISetNumbToPlayer_Params
{
	uint32_t                                           _bNumb : 1;                                       // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AINumbToPlayer
// [0x00020600]  (iNative[30278])
struct UDishonoredCheatManager_execAINumbToPlayer_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AISetDeafToPlayer
// [0x00020600]  (iNative[30298])
struct UDishonoredCheatManager_execAISetDeafToPlayer_Params
{
	uint32_t                                           _bDeaf : 1;                                       // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIDeafToPlayer
// [0x00020600]  (iNative[30209])
struct UDishonoredCheatManager_execAIDeafToPlayer_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AISetBlindToPlayer
// [0x00020600]  (iNative[30295])
struct UDishonoredCheatManager_execAISetBlindToPlayer_Params
{
	uint32_t                                           _bBlind : 1;                                      // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIBlindToPlayer
// [0x00020600]  (iNative[30182])
struct UDishonoredCheatManager_execAIBlindToPlayer_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AISetDumbToPlayer
// [0x00020600]  (iNative[30301])
struct UDishonoredCheatManager_execAISetDumbToPlayer_Params
{
	uint32_t                                           _bDumb : 1;                                       // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIDumbToPlayer
// [0x00020600]  (iNative[30227])
struct UDishonoredCheatManager_execAIDumbToPlayer_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIForceAttentionLevelOff
// [0x00020600]  (iNative[30234])
struct UDishonoredCheatManager_execAIForceAttentionLevelOff_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIForceAttentionLevel
// [0x00024600]  (iNative[30233])
struct UDishonoredCheatManager_execAIForceAttentionLevel_Params
{
	uint8_t                                            _AttentionLevel;                                  // 0x0000 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIClearAttention
// [0x00020600]  (iNative[30204])
struct UDishonoredCheatManager_execAIClearAttention_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIForcePanicNow
// [0x00020600]  (iNative[30236])
struct UDishonoredCheatManager_execAIForcePanicNow_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIForcePanic
// [0x00020600]  (iNative[30235])
struct UDishonoredCheatManager_execAIForcePanic_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIRegisterAllHideouts
// [0x00020600]  (iNative[30290])
struct UDishonoredCheatManager_execAIRegisterAllHideouts_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIDebugHideout
// [0x00020600]  (iNative[30210])
struct UDishonoredCheatManager_execAIDebugHideout_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AISetLocoDebug
// [0x00020600]  (iNative[30302])
struct UDishonoredCheatManager_execAISetLocoDebug_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIGoToReset
// [0x00020600]  (iNative[30255])
struct UDishonoredCheatManager_execAIGoToReset_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIGoToCrosshair
// [0x00020600]  (iNative[30254])
struct UDishonoredCheatManager_execAIGoToCrosshair_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIPauseOnPathFailure
// [0x00020600]  (iNative[30284])
struct UDishonoredCheatManager_execAIPauseOnPathFailure_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIVerbosePathDebug
// [0x00020600]  (iNative[30439])
struct UDishonoredCheatManager_execAIVerbosePathDebug_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AISetBeepWhenSeePlayer
// [0x00020600]  (iNative[30293])
struct UDishonoredCheatManager_execAISetBeepWhenSeePlayer_Params
{
	uint32_t                                           _bBeep : 1;                                       // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIBeepWhenSeePlayer
// [0x00020600]  (iNative[30177])
struct UDishonoredCheatManager_execAIBeepWhenSeePlayer_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIAlwaysRingAlarm
// [0x00020600]  (iNative[30176])
struct UDishonoredCheatManager_execAIAlwaysRingAlarm_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AINeverRingAlarm
// [0x00020600]  (iNative[30273])
struct UDishonoredCheatManager_execAINeverRingAlarm_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIDontRotate
// [0x00020600]  (iNative[30216])
struct UDishonoredCheatManager_execAIDontRotate_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIForceTransitSpeed
// [0x00024600]  (iNative[30237])
struct UDishonoredCheatManager_execAIForceTransitSpeed_Params
{
	int32_t                                            TransitSpeedEnum;                                 // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIToggleMagic
// [0x00020600]  (iNative[30437])
struct UDishonoredCheatManager_execAIToggleMagic_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AITestGuns
// [0x00020600]  (iNative[30435])
struct UDishonoredCheatManager_execAITestGuns_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIEnable
// [0x00020600]  (iNative[30228])
struct UDishonoredCheatManager_execAIEnable_Params
{
	uint32_t                                           _bEnable : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIToggle
// [0x00020600]  (iNative[30436])
struct UDishonoredCheatManager_execAIToggle_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIDontAttack
// [0x00020600]  (iNative[30215])
struct UDishonoredCheatManager_execAIDontAttack_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AISetSuspicion
// [0x00020600]  (iNative[30305])
struct UDishonoredCheatManager_execAISetSuspicion_Params
{
	int32_t                                            DesiredSuspicion;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.AIForget
// [0x00020600]  (iNative[30238])
struct UDishonoredCheatManager_execAIForget_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIDumb
// [0x00024600]  (iNative[30225])
struct UDishonoredCheatManager_execAIDumb_Params
{
	uint32_t                                           _bOnSingleAI : 1;                                 // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AINumb
// [0x00024600]  (iNative[30276])
struct UDishonoredCheatManager_execAINumb_Params
{
	uint32_t                                           _bOnSingleAI : 1;                                 // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIBlind
// [0x00024600]  (iNative[30180])
struct UDishonoredCheatManager_execAIBlind_Params
{
	uint32_t                                           _bOnSingleAI : 1;                                 // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIDeaf
// [0x00024600]  (iNative[30207])
struct UDishonoredCheatManager_execAIDeaf_Params
{
	uint32_t                                           _bOnSingleAI : 1;                                 // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.AIGibAll
// [0x00020600]  (iNative[45862])
struct UDishonoredCheatManager_execAIGibAll_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIGib
// [0x00020600]  (iNative[30239])
struct UDishonoredCheatManager_execAIGib_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AIClearDebug
// [0x00020600]  (iNative[30205])
struct UDishonoredCheatManager_execAIClearDebug_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AICycleDebug
// [0x00020600]  (iNative[30206])
struct UDishonoredCheatManager_execAICycleDebug_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AISetDebug
// [0x00020600]  (iNative[30299])
struct UDishonoredCheatManager_execAISetDebug_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DisplayDebug_Native
// [0x00420400]  (iNative[32321])
struct UDishonoredCheatManager_execDisplayDebug_Native_Params
{
	class AHUD*                                        _pHUD;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _rfOut_YL;                                        // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              _rfOut_YPos;                                      // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredCheatManager.InitCheatManager
// [0x00020002] 
struct UDishonoredCheatManager_execInitCheatManager_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.InitCheatManager_Native
// [0x00020400]  (iNative[35593])
struct UDishonoredCheatManager_execInitCheatManager_Native_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerGhostChestView
// [0x00020600]  (iNative[44267])
struct UDishonoredCheatManager_execPlayerGhostChestView_Params
{
	uint32_t                                           _bChestView : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerTestCamRumble
// [0x00020600]  (iNative[44279])
struct UDishonoredCheatManager_execPlayerTestCamRumble_Params
{
	float                                              _fAmplitude;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fFrequency;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDuration;                                       // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.EnableIronSight
// [0x00020600]  (iNative[34727])
struct UDishonoredCheatManager_execEnableIronSight_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.DoLineCheckStressTest
// [0x00024600]  (iNative[32660])
struct UDishonoredCheatManager_execDoLineCheckStressTest_Params
{
	int32_t                                            _NumRadialSegs;                                   // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            _NumHeightSegs;                                   // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceDramaticFatalities
// [0x00020600]  (iNative[44261])
struct UDishonoredCheatManager_execPlayerForceDramaticFatalities_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceKillCam
// [0x00020600]  (iNative[44263])
struct UDishonoredCheatManager_execPlayerForceKillCam_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerToggleHomingArrow
// [0x00020600]  (iNative[44283])
struct UDishonoredCheatManager_execPlayerToggleHomingArrow_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerToggleAimAssist
// [0x00020600]  (iNative[44282])
struct UDishonoredCheatManager_execPlayerToggleAimAssist_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerShowNavMeshStatus
// [0x00024600]  (iNative[14111])
struct UDishonoredCheatManager_execPlayerShowNavMeshStatus_Params
{
	uint32_t                                           _bShow : 1;                                       // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerFillAdrenaline
// [0x00020600]  (iNative[44259])
struct UDishonoredCheatManager_execPlayerFillAdrenaline_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerToggleAdrenalineCooldown
// [0x00020600]  (iNative[44281])
struct UDishonoredCheatManager_execPlayerToggleAdrenalineCooldown_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerInfiniteAdrenaline
// [0x00020600]  (iNative[44268])
struct UDishonoredCheatManager_execPlayerInfiniteAdrenaline_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.AbstractInventoryList
// [0x00020600]  (iNative[29974])
struct UDishonoredCheatManager_execAbstractInventoryList_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerInfiniteAmmo
// [0x00020600]  (iNative[44269])
struct UDishonoredCheatManager_execPlayerInfiniteAmmo_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableKnockdown
// [0x00020600]  (iNative[44249])
struct UDishonoredCheatManager_execPlayerDisableKnockdown_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerEnableKnockdown
// [0x00020600]  (iNative[44256])
struct UDishonoredCheatManager_execPlayerEnableKnockdown_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableStrongHitReaction
// [0x00020600]  (iNative[44251])
struct UDishonoredCheatManager_execPlayerDisableStrongHitReaction_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerEnableStrongHitReaction
// [0x00020600]  (iNative[44257])
struct UDishonoredCheatManager_execPlayerEnableStrongHitReaction_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableTakeDamage
// [0x00020600]  (iNative[44252])
struct UDishonoredCheatManager_execPlayerDisableTakeDamage_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerEnableTakeDamage
// [0x00020600]  (iNative[44258])
struct UDishonoredCheatManager_execPlayerEnableTakeDamage_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageProjectile_Stealth
// [0x00024600]  (iNative[44245])
struct UDishonoredCheatManager_execPlayerDamageProjectile_Stealth_Params
{
	int32_t                                            _Amount;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fMomentum;                                       // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fAngle;                                          // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageProjectile
// [0x00024600]  (iNative[44244])
struct UDishonoredCheatManager_execPlayerDamageProjectile_Params
{
	int32_t                                            _Amount;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fMomentum;                                       // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fAngle;                                          // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageKnockdown
// [0x00024600]  (iNative[44243])
struct UDishonoredCheatManager_execPlayerDamageKnockdown_Params
{
	int32_t                                            _Amount;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fMomentum;                                       // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fAngle;                                          // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageImpact
// [0x00024600]  (iNative[44242])
struct UDishonoredCheatManager_execPlayerDamageImpact_Params
{
	int32_t                                            _Amount;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fMomentum;                                       // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fAngle;                                          // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageFastHit
// [0x00024600]  (iNative[44241])
struct UDishonoredCheatManager_execPlayerDamageFastHit_Params
{
	int32_t                                            _Amount;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fMomentum;                                       // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fAngle;                                          // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageElectricity
// [0x00024600]  (iNative[44240])
struct UDishonoredCheatManager_execPlayerDamageElectricity_Params
{
	int32_t                                            _Amount;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fMomentum;                                       // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fAngle;                                          // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageBullet
// [0x00024600]  (iNative[44239])
struct UDishonoredCheatManager_execPlayerDamageBullet_Params
{
	int32_t                                            _Amount;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fMomentum;                                       // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fAngle;                                          // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamageBash
// [0x00024600]  (iNative[44238])
struct UDishonoredCheatManager_execPlayerDamageBash_Params
{
	int32_t                                            _Amount;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fMomentum;                                       // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fAngle;                                          // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDamage
// [0x00024600]  (iNative[44237])
struct UDishonoredCheatManager_execPlayerDamage_Params
{
	int32_t                                            _Amount;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fMomentum;                                       // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              _fAngle;                                          // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.HealthAdd
// [0x00020600]  (iNative[35456])
struct UDishonoredCheatManager_execHealthAdd_Params
{
	int32_t                                            _Amount;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.Buddha
// [0x00020600]  (iNative[30771])
struct UDishonoredCheatManager_execBuddha_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.ManaToggle
// [0x00020600]  (iNative[43632])
struct UDishonoredCheatManager_execManaToggle_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.ManaEnable
// [0x00020600]  (iNative[43630])
struct UDishonoredCheatManager_execManaEnable_Params
{
	uint32_t                                           _bEnable : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.ManaAdd
// [0x00020600]  (iNative[43629])
struct UDishonoredCheatManager_execManaAdd_Params
{
	int32_t                                            _Amount;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceDeathDir
// [0x00020600]  (iNative[44260])
struct UDishonoredCheatManager_execPlayerForceDeathDir_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.ClearObjectives
// [0x00020600]  (iNative[30883])
struct UDishonoredCheatManager_execClearObjectives_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.RemoveObjective
// [0x00020600]  (iNative[44694])
struct UDishonoredCheatManager_execRemoveObjective_Params
{
	class FString                                      _ObjectiveName;                                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredCheatManager.AddObjective
// [0x00020600]  (iNative[30031])
struct UDishonoredCheatManager_execAddObjective_Params
{
	class FString                                      _ObjectiveName;                                   // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerTestAnim
// [0x00024600]  (iNative[44278])
struct UDishonoredCheatManager_execPlayerTestAnim_Params
{
	class FString                                      _AnimName;                                        // 0x0000 (0x000C) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           _bFullBody : 1;                                   // 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableMeleeAssist
// [0x00020600]  (iNative[44250])
struct UDishonoredCheatManager_execPlayerDisableMeleeAssist_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceLongFinishers
// [0x00020600]  (iNative[44264])
struct UDishonoredCheatManager_execPlayerForceLongFinishers_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceFastFinishers
// [0x00020600]  (iNative[44262])
struct UDishonoredCheatManager_execPlayerForceFastFinishers_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableAssassinate
// [0x00020600]  (iNative[44247])
struct UDishonoredCheatManager_execPlayerDisableAssassinate_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDisableFatality
// [0x00020600]  (iNative[44248])
struct UDishonoredCheatManager_execPlayerDisableFatality_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerSetFixedFatality
// [0x00020600]  (iNative[44273])
struct UDishonoredCheatManager_execPlayerSetFixedFatality_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceReadyStance
// [0x00020600]  (iNative[44265])
struct UDishonoredCheatManager_execPlayerForceReadyStance_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerSetDamage
// [0x00020600]  (iNative[44272])
struct UDishonoredCheatManager_execPlayerSetDamage_Params
{
	float                                              fDesiredDamage;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.PlayerForceVisible
// [0x00020600]  (iNative[44266])
struct UDishonoredCheatManager_execPlayerForceVisible_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDodgeNothing
// [0x00020600]  (iNative[44255])
struct UDishonoredCheatManager_execPlayerDodgeNothing_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerDodgeEverything
// [0x00020600]  (iNative[44254])
struct UDishonoredCheatManager_execPlayerDodgeEverything_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.PlayerTestChain
// [0x00020600]  (iNative[44280])
struct UDishonoredCheatManager_execPlayerTestChain_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.idkfa
// [0x00020600]  (iNative[35506])
struct UDishonoredCheatManager_execidkfa_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.MaxItems
// [0x00020600]  (iNative[43661])
struct UDishonoredCheatManager_execMaxItems_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.GivePlayerItem
// [0x00020600]  (iNative[35327])
struct UDishonoredCheatManager_execGivePlayerItem_Params
{
	class FString                                      _rTweakString;                                    // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function DishonoredGame.DishonoredCheatManager.IgnorePlayerAimOffset
// [0x00020202] 
struct UDishonoredCheatManager_execIgnorePlayerAimOffset_Params
{
	uint32_t                                           _bIgnore : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class ADishonoredPlayerPawn*                    pPlayer;                                          // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredCheatManager.TogglePlayerBodyMode
// [0x00020202] 
struct UDishonoredCheatManager_execTogglePlayerBodyMode_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.TogglePlayerBodyMode_Native
// [0x00020400]  (iNative[45373])
struct UDishonoredCheatManager_execTogglePlayerBodyMode_Native_Params
{
	class APawn*                                       _pPawn;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.PlayerArmsEnable
// [0x00020600]  (iNative[44232])
struct UDishonoredCheatManager_execPlayerArmsEnable_Params
{
	uint32_t                                           _bEnable : 1;                                     // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredCheatManager.PlayerArmsToggle
// [0x00020600]  (iNative[44233])
struct UDishonoredCheatManager_execPlayerArmsToggle_Params
{
};

// Function DishonoredGame.DishonoredCheatManager.SetCameraBob
// [0x00020202] 
struct UDishonoredCheatManager_execSetCameraBob_Params
{
	float                                              _fBob;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fRoll;                                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredCheatManager.SetCameraBob_Native
// [0x00020400]  (iNative[44856])
struct UDishonoredCheatManager_execSetCameraBob_Native_Params
{
	class APawn*                                       _pPawn;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fBob;                                            // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fRoll;                                           // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.UnlockAchievement
// [0x00020802] 
struct ADishonoredPlayerPawn_eventUnlockAchievement_Params
{
	int32_t                                            AchievementId;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class ULocalPlayer*                             LocPlayer;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	// class ADishonoredPlayerController*              PC;                                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredPlayerPawn.OnDestroy_Native
// [0x00020400]  (iNative[43895])
struct ADishonoredPlayerPawn_execOnDestroy_Native_Params
{
	class FName                                        _ActionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnDestroy
// [0x00020102] 
struct ADishonoredPlayerPawn_execOnDestroy_Params
{
	class USeqAct_Destroy*                             _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.NativePostRenderFor
// [0x00020500]  (iNative[23078])
struct ADishonoredPlayerPawn_execNativePostRenderFor_Params
{
	class APlayerController*                           _pPC;                                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UCanvas*                                     _pCanvas;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _CameraPosition;                                  // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _CameraDir;                                       // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnPlayerResurrect
// [0x00020400]  (iNative[47592])
struct ADishonoredPlayerPawn_execOnPlayerResurrect_Params
{
	class USequenceAction*                             _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnCancelPlayerActivePower
// [0x00020400]  (iNative[43890])
struct ADishonoredPlayerPawn_execOnCancelPlayerActivePower_Params
{
	class UDisSeqAct_CancelPlayerActivePower*          _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnToggleTutorial
// [0x00020400]  (iNative[44002])
struct ADishonoredPlayerPawn_execOnToggleTutorial_Params
{
	class UDisSeqAct_ToggleTutorial*                   _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnToggleChoke
// [0x00020400]  (iNative[43996])
struct ADishonoredPlayerPawn_execOnToggleChoke_Params
{
	class UDisSeqAct_ToggleChoke*                      _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnOverrideAwarenessDisplay
// [0x00020400]  (iNative[43952])
struct ADishonoredPlayerPawn_execOnOverrideAwarenessDisplay_Params
{
	class UDisSeqAct_OverrideAwarenessDisplay*         _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnSetPlayerMana
// [0x00020400]  (iNative[43983])
struct ADishonoredPlayerPawn_execOnSetPlayerMana_Params
{
	class UDisSeqAct_SetPlayerMana*                    _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnSetPlayerHealth
// [0x00020400]  (iNative[43982])
struct ADishonoredPlayerPawn_execOnSetPlayerHealth_Params
{
	class UDisSeqAct_SetPlayerHealth*                  _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnAdrenalineToggle
// [0x00020400]  (iNative[43868])
struct ADishonoredPlayerPawn_execOnAdrenalineToggle_Params
{
	class UDisSeqAct_AdrenalineToggle*                 _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnGivePickup
// [0x00020400]  (iNative[43926])
struct ADishonoredPlayerPawn_execOnGivePickup_Params
{
	class UDisSeqAct_GivePickup*                       _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnApplyPlayerLoadout
// [0x00020400]  (iNative[43885])
struct ADishonoredPlayerPawn_execOnApplyPlayerLoadout_Params
{
	class UDisSeqAct_ApplyPlayerLoadout*               _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnTogglePlayerLeftHand
// [0x00020400]  (iNative[44000])
struct ADishonoredPlayerPawn_execOnTogglePlayerLeftHand_Params
{
	class UDisSeqAct_TogglePlayerLeftHand*             _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnToggleJournal
// [0x00020400]  (iNative[43998])
struct ADishonoredPlayerPawn_execOnToggleJournal_Params
{
	class UDisSeqAct_ToggleJournal*                    _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnTogglePowerWheel
// [0x00020400]  (iNative[44001])
struct ADishonoredPlayerPawn_execOnTogglePowerWheel_Params
{
	class UDisSeqAct_TogglePowerWheel*                 _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnToggleAchievementEval
// [0x00020400]  (iNative[43995])
struct ADishonoredPlayerPawn_execOnToggleAchievementEval_Params
{
	class UDisSeqAct_ToggleAchievementEval*            _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnGetPlayerStat
// [0x00020400]  (iNative[43925])
struct ADishonoredPlayerPawn_execOnGetPlayerStat_Params
{
	class UDisSeqAct_GetPlayerStat*                    _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnEvalAchievement
// [0x00020400]  (iNative[43910])
struct ADishonoredPlayerPawn_execOnEvalAchievement_Params
{
	class UDisSeqAct_EvalAchievement*                  _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnGiveUpgrade
// [0x00020400]  (iNative[43927])
struct ADishonoredPlayerPawn_execOnGiveUpgrade_Params
{
	class UDisSeqAct_GiveUpgrade*                      _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnRemoveKey
// [0x00020400]  (iNative[43961])
struct ADishonoredPlayerPawn_execOnRemoveKey_Params
{
	class UDisSeqAct_RemoveKey*                        _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnAddKey
// [0x00020400]  (iNative[43866])
struct ADishonoredPlayerPawn_execOnAddKey_Params
{
	class UDisSeqAct_AddKey*                           _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnMinPowers
// [0x00020400]  (iNative[43938])
struct ADishonoredPlayerPawn_execOnMinPowers_Params
{
	class UDisSeqAct_MinPowers*                        _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnMaxPowers
// [0x00020400]  (iNative[43935])
struct ADishonoredPlayerPawn_execOnMaxPowers_Params
{
	class UDisSeqAct_MaxPowers*                        _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnRemoveAttributeModifier
// [0x00020400]  (iNative[43960])
struct ADishonoredPlayerPawn_execOnRemoveAttributeModifier_Params
{
	class UDisSeqAct_RemoveAttributeModifier*          _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnAddAttributeModifier
// [0x00020400]  (iNative[43864])
struct ADishonoredPlayerPawn_execOnAddAttributeModifier_Params
{
	class UDisSeqAct_AddAttributeModifier*             _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnRemovePower
// [0x00020400]  (iNative[43962])
struct ADishonoredPlayerPawn_execOnRemovePower_Params
{
	class UDisSeqAct_RemovePower*                      _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.OnAddPower
// [0x00020400]  (iNative[43867])
struct ADishonoredPlayerPawn_execOnAddPower_Params
{
	class UDisSeqAct_AddPower*                         _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.TakeDamage_Native
// [0x00424400]  (iNative[45311])
struct ADishonoredPlayerPawn_execTakeDamage_Native_Params
{
	int32_t                                            _rDamage;                                         // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _rMomentum;                                       // 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerPawn.PlayDying_Native
// [0x00020500]  (iNative[44228])
struct ADishonoredPlayerPawn_execPlayDying_Native_Params
{
	class AController*                                 Killer;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLoc;                                           // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.FaceRotation
// [0x00020500]  (iNative[19984])
struct ADishonoredPlayerPawn_execFaceRotation_Params
{
	struct FRotator                                    _NewRotation;                                     // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaTime;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.IsInvisible
// [0x00020400]  (iNative[21396])
struct ADishonoredPlayerPawn_execIsInvisible_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatFly
// [0x00020002] 
struct ADishonoredPlayerPawn_execCheatFly_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                        bResult : 1;                                      // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatFly_Native
// [0x00020400]  (iNative[30858])
struct ADishonoredPlayerPawn_execCheatFly_Native_Params
{
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatGhost
// [0x00020002] 
struct ADishonoredPlayerPawn_execCheatGhost_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                        bResult : 1;                                      // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatGhost_Native
// [0x00020400]  (iNative[30859])
struct ADishonoredPlayerPawn_execCheatGhost_Native_Params
{
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatWalk
// [0x00020002] 
struct ADishonoredPlayerPawn_execCheatWalk_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// uint32_t                                        bResult : 1;                                      // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DishonoredGame.DishonoredPlayerPawn.CheatWalk_Native
// [0x00020400]  (iNative[30860])
struct ADishonoredPlayerPawn_execCheatWalk_Native_Params
{
};

// Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug_Cheats
// [0x00420400]  (iNative[32320])
struct ADishonoredPlayerPawn_execDisplayDebug_Cheats_Params
{
	class AHUD*                                        _HUD;                                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fOut_YL;                                         // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              _fOut_YPos;                                       // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug
// [0x00420102] 
struct ADishonoredPlayerPawn_execDisplayDebug_Params
{
	class AHUD*                                        _HUD;                                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fOut_YL;                                         // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              _fOut_YPos;                                       // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	// uint32_t                                        bInterceptedByCheatManager : 1;                   // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DishonoredGame.DishonoredPlayerPawn.DoJump
// [0x00020400]  (iNative[19114])
struct ADishonoredPlayerPawn_execDoJump_Params
{
	uint32_t                                           _bUpdating : 1;                                   // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerPawn.EndCrouch
// [0x00020D00]  (iNative[13521])
struct ADishonoredPlayerPawn_eventEndCrouch_Params
{
	float                                              _fHeightAdjust;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.StartCrouch
// [0x00020D00]  (iNative[13759])
struct ADishonoredPlayerPawn_eventStartCrouch_Params
{
	float                                              _fHeightAdjust;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.Landed_Native
// [0x00020400]  (iNative[35678])
struct ADishonoredPlayerPawn_execLanded_Native_Params
{
	struct FVector                                     HitNormal;                                        // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      pFloorActor;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerPawn.TakeFallingDamage_Native
// [0x00020400]  (iNative[45312])
struct ADishonoredPlayerPawn_execTakeFallingDamage_Native_Params
{
	struct FVector                                     _HitNormal;                                       // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      _pFloorActor;                                     // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug_Native
// [0x00420400]  (iNative[32321])
struct ADishonoredPlayerPawn_execDisplayDebug_Native_Params
{
	class AHUD*                                        _pHUD;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _rfOut_YL;                                        // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              _rfOut_YPos;                                      // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DishonoredPlayerPawn.DisplayDebug_Script
// [0x00420802] 
struct ADishonoredPlayerPawn_eventDisplayDebug_Script_Params
{
	class AHUD*                                        _pHUD;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _rfOut_YL;                                        // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              _rfOut_YPos;                                      // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DishonoredPlayerInput.GetFOVScale
// [0x00020400]  (iNative[35318])
struct UDishonoredPlayerInput_execGetFOVScale_Params
{
	uint32_t                                           _bIsForMouse : 1;                                 // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerInput.Dis_PlayerChoice_RequestSkip_Released
// [0x00020600]  (iNative[31670])
struct UDishonoredPlayerInput_execDis_PlayerChoice_RequestSkip_Released_Params
{
};

// Function DishonoredGame.DishonoredPlayerInput.Dis_PlayerChoice_RequestSkip
// [0x00020600]  (iNative[31669])
struct UDishonoredPlayerInput_execDis_PlayerChoice_RequestSkip_Params
{
};

// Function DishonoredGame.DishonoredPlayerInput.Dis_Jump_ButtonDown
// [0x00020600]  (iNative[31660])
struct UDishonoredPlayerInput_execDis_Jump_ButtonDown_Params
{
};

// Function DishonoredGame.DishonoredPlayerInput.Dis_SneakOrSlide
// [0x00020600]  (iNative[31675])
struct UDishonoredPlayerInput_execDis_SneakOrSlide_Params
{
	uint32_t                                           _bForGamepad : 1;                                 // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisPlayerControllerBase.Playtest_native
// [0x00020400]  (iNative[44287])
struct ADisPlayerControllerBase_execPlaytest_native_Params
{
	uint32_t                                           bPlaytestMode : 1;                                // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisPlayerControllerBase.SetPlaytestFlag
// [0x00020600]  (iNative[44861])
struct ADisPlayerControllerBase_execSetPlaytestFlag_Params
{
	uint32_t                                           bPlaytestMode : 1;                                // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisPlayerControllerBase.Playtest
// [0x00020202] 
struct ADisPlayerControllerBase_execPlaytest_Params
{
	uint32_t                                           bPlaytestMode : 1;                                // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisDebugNPCController.Dis_StartPower
// [0x00020600]  (iNative[31677])
struct ADisDebugNPCController_execDis_StartPower_Params
{
};

// Function DishonoredGame.DisDebugNPCController.Dis_StartFire
// [0x00020600]  (iNative[31676])
struct ADisDebugNPCController_execDis_StartFire_Params
{
};

// Function DishonoredGame.DisDebugNPCController.HandleWalking
// [0x00020400]  (iNative[20898])
struct ADisDebugNPCController_execHandleWalking_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.ClientSetOnlineStatus
// [0xFFFF0000010201C2] 
struct ADishonoredPlayerController_execClientSetOnlineStatus_Params
{
	// class UDishonoredEngine*                        DEngine;                                          // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredPlayerController.OnControllerChanged
// [0x00020002] 
struct ADishonoredPlayerController_execOnControllerChanged_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsConnected : 1;                                 // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class ULocalPlayer*                             LP;                                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredPlayerController.OnControllerChanged_Native
// [0x00020400]  (iNative[43893])
struct ADishonoredPlayerController_execOnControllerChanged_Native_Params
{
	uint32_t                                           bIsConnected : 1;                                 // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.CalcPlayerSwimAccelRate
// [0x00020400]  (iNative[17886])
struct ADishonoredPlayerController_execCalcPlayerSwimAccelRate_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerController.SaveProfile
// [0x00020202] 
struct ADishonoredPlayerController_execSaveProfile_Params
{
	// class ULocalPlayer*                             LP;                                               // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredPlayerController.OnSaveProfileComplete
// [0x00020002] 
struct ADishonoredPlayerController_execOnSaveProfileComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.GetProfileSettings
// [0x00020400]  (iNative[20702])
struct ADishonoredPlayerController_execGetProfileSettings_Params
{
	class UArkProfileSettings*                         ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerController.OnShowPowerMenu
// [0x00020400]  (iNative[43987])
struct ADishonoredPlayerController_execOnShowPowerMenu_Params
{
	class UDisSeqAct_ShowPowerMenu*                    _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.OnObjectiveAction
// [0x00020400]  (iNative[43949])
struct ADishonoredPlayerController_execOnObjectiveAction_Params
{
	class UDisSeqAct_ObjectiveAction*                  _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.ProcessViewRotation
// [0x00420400]  (iNative[13700])
struct ADishonoredPlayerController_execProcessViewRotation_Params
{
	float                                              _fDeltaTime;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    _rOut_ViewRotation;                               // 0x0004 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    _rOut_DeltaRot;                                   // 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.CallGetUIController
// [0x00020802] 
struct ADishonoredPlayerController_eventCallGetUIController_Params
{
	class UUIInteraction*                              ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerController.OnDLC05ToggleCinematicMode
// [0x00020002] 
struct ADishonoredPlayerController_execOnDLC05ToggleCinematicMode_Params
{
	class UDisSeqAct_DLC05_ToggleCinematicMode*        Action;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// uint32_t                                        bNewCinematicMode : 1;                            // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DishonoredGame.DishonoredPlayerController.DLC05_SetCinematicMode
// [0x00020002] 
struct ADishonoredPlayerController_execDLC05_SetCinematicMode_Params
{
	uint32_t                                           _bInCinematicMode : 1;                            // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bHidePlayer : 1;                                 // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bHideHUD : 1;                                    // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bAffectsMovement : 1;                            // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bAffectsTurning : 1;                             // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bAffectsButtons : 1;                             // 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bHideLetterbox : 1;                              // 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bAllowProjectilesAndExplosions : 1;              // 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// uint32_t                                        bWasInCinematicMode : 1;                          // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DishonoredGame.DishonoredPlayerController.SetCinematicMode
// [0x00020002] 
struct ADishonoredPlayerController_execSetCinematicMode_Params
{
	uint32_t                                           _bInCinematicMode : 1;                            // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bHidePlayer : 1;                                 // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bHideHUD : 1;                                    // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bAffectsMovement : 1;                            // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bAffectsTurning : 1;                             // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bAffectsButtons : 1;                             // 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bHideLetterbox : 1;                              // 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// uint32_t                                        bWasInCinematicMode : 1;                          // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DishonoredGame.DishonoredPlayerController.SetCinematicMode_Native
// [0x00020400]  (iNative[44857])
struct ADishonoredPlayerController_execSetCinematicMode_Native_Params
{
	uint32_t                                           _bInCinematicMode : 1;                            // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bWasInCinematicMode : 1;                         // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bHidePlayer : 1;                                 // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bHideHUD : 1;                                    // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bAffectsMovement : 1;                            // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bAffectsTurning : 1;                             // 0x0014 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bAffectsButtons : 1;                             // 0x0018 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bHideLetterbox : 1;                              // 0x001C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bAllowProjectilesAndExplosions : 1;              // 0x0020 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.PreSetCinematicMode_Native
// [0x00020400]  (iNative[44429])
struct ADishonoredPlayerController_execPreSetCinematicMode_Native_Params
{
	uint32_t                                           _bNewInCinematicMode : 1;                         // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bHidePlayer : 1;                                 // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.IsLookInputIgnored
// [0x00020400]  (iNative[21402])
struct ADishonoredPlayerController_execIsLookInputIgnored_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerController.IsMoveInputIgnored
// [0x00020400]  (iNative[21406])
struct ADishonoredPlayerController_execIsMoveInputIgnored_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerController.PlayRumbleWaveForm
// [0x00020802] 
struct ADishonoredPlayerController_eventPlayRumbleWaveForm_Params
{
	class UForceFeedbackWaveform*                      _pWaveForm;                                       // 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	class AActor*                                      _pInstigatorActor;                                // 0x0004 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.ToggleScreenConfig
// [0x00020600]  (iNative[45376])
struct ADishonoredPlayerController_execToggleScreenConfig_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.ShowScreenConfig
// [0x00020600]  (iNative[44894])
struct ADishonoredPlayerController_execShowScreenConfig_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.Dis_Zoom
// [0x00020600]  (iNative[31693])
struct ADishonoredPlayerController_execDis_Zoom_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.Dis_VersusAlt
// [0x00020600]  (iNative[31684])
struct ADishonoredPlayerController_execDis_VersusAlt_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.Dis_Lean_Toggle
// [0x00020600]  (iNative[31661])
struct ADishonoredPlayerController_execDis_Lean_Toggle_Params
{
	uint32_t                                           _bLeanLeft : 1;                                   // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bLeanRight : 1;                                  // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bLeanForward : 1;                                // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bLeanBack : 1;                                   // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bFromGamePad : 1;                                // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.Dis_LeanWithAnalogStick_End
// [0x00020600]  (iNative[31663])
struct ADishonoredPlayerController_execDis_LeanWithAnalogStick_End_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.DisToggleSprint
// [0x00020600]  (iNative[32481])
struct ADishonoredPlayerController_execDisToggleSprint_Params
{
	uint32_t                                           _bFromGamePad : 1;                                // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.Dis_SelectPower
// [0x00020600]  (iNative[31674])
struct ADishonoredPlayerController_execDis_SelectPower_Params
{
	int32_t                                            _iPower;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.Dis_OpenPauseMenu
// [0x00020600]  (iNative[31668])
struct ADishonoredPlayerController_execDis_OpenPauseMenu_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.Dis_OpenJournalTab
// [0x00020600]  (iNative[31667])
struct ADishonoredPlayerController_execDis_OpenJournalTab_Params
{
	int32_t                                            _Tab;                                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.Dis_ToggleJournal
// [0x00020600]  (iNative[31678])
struct ADishonoredPlayerController_execDis_ToggleJournal_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.Dis_CancelPossession
// [0x00020600]  (iNative[31652])
struct ADishonoredPlayerController_execDis_CancelPossession_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.Dis_ExitKeyhole
// [0x00020600]  (iNative[31659])
struct ADishonoredPlayerController_execDis_ExitKeyhole_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.Dis_LeanOrAdrenaline_Multi
// [0x00020600]  (iNative[31662])
struct ADishonoredPlayerController_execDis_LeanOrAdrenaline_Multi_Params
{
	int32_t                                            _NumButtonPresses;                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           _bIsFinished : 1;                                 // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.Dis_UseAdrenaline_Multi
// [0x00020600]  (iNative[31680])
struct ADishonoredPlayerController_execDis_UseAdrenaline_Multi_Params
{
	uint32_t                                           _bFallbackOnAttack : 1;                           // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	int32_t                                            _NumPresses;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           _bIsFinished : 1;                                 // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerController.Dis_UseAdrenaline
// [0x00024600]  (iNative[31679])
struct ADishonoredPlayerController_execDis_UseAdrenaline_Params
{
	uint32_t                                           _bFallbackOnAttack : 1;                           // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           _bDoMultiFatality : 1;                            // 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerController.Dis_ConsumeElixir
// [0x00020600]  (iNative[31653])
struct ADishonoredPlayerController_execDis_ConsumeElixir_Params
{
	uint8_t                                            _ElixirType;                                      // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredPlayerController.Dis_PrevItemOption
// [0x00020600]  (iNative[31672])
struct ADishonoredPlayerController_execDis_PrevItemOption_Params
{
	uint8_t                                            _Usage;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.Dis_NextItemOption
// [0x00020600]  (iNative[31666])
struct ADishonoredPlayerController_execDis_NextItemOption_Params
{
	uint8_t                                            _Usage;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.Dis_UseSecondaryItem
// [0x00020600]  (iNative[31683])
struct ADishonoredPlayerController_execDis_UseSecondaryItem_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.Dis_UsePrimaryItem
// [0x00020600]  (iNative[31681])
struct ADishonoredPlayerController_execDis_UsePrimaryItem_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.Dis_UsePrimaryItemOrAdrenaline_Multi
// [0x00020600]  (iNative[31682])
struct ADishonoredPlayerController_execDis_UsePrimaryItemOrAdrenaline_Multi_Params
{
	int32_t                                            _NumButtonPresses;                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           _bIsFinished : 1;                                 // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.Dis_EquipItemByType
// [0x00020600]  (iNative[31658])
struct ADishonoredPlayerController_execDis_EquipItemByType_Params
{
	class UDishonoredInventoryItem*                    _pItemClass;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            _Usage;                                           // 0x0004 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.Dis_PrevEquippedItem
// [0x00020600]  (iNative[31671])
struct ADishonoredPlayerController_execDis_PrevEquippedItem_Params
{
	uint32_t                                           _bFromGamePad : 1;                                // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.Dis_NextEquippedItem
// [0x00020600]  (iNative[31665])
struct ADishonoredPlayerController_execDis_NextEquippedItem_Params
{
	uint32_t                                           _bFromGamePad : 1;                                // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_MouseNext
// [0x00020600]  (iNative[31691])
struct ADishonoredPlayerController_execDis_WheelShortcuts_MouseNext_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_MousePrevious
// [0x00020600]  (iNative[31692])
struct ADishonoredPlayerController_execDis_WheelShortcuts_MousePrevious_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_KeyboardUse
// [0x00020600]  (iNative[31690])
struct ADishonoredPlayerController_execDis_WheelShortcuts_KeyboardUse_Params
{
	int32_t                                            _ShortcutIdx;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_KeyboardSelect
// [0x00020600]  (iNative[31689])
struct ADishonoredPlayerController_execDis_WheelShortcuts_KeyboardSelect_Params
{
	int32_t                                            _ShortcutIdx;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_GamepadUse
// [0x00020600]  (iNative[31688])
struct ADishonoredPlayerController_execDis_WheelShortcuts_GamepadUse_Params
{
	int32_t                                            _ShortcutIdx;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.Dis_WheelShortcuts_GamepadSelect
// [0x00020600]  (iNative[31687])
struct ADishonoredPlayerController_execDis_WheelShortcuts_GamepadSelect_Params
{
	int32_t                                            _ShortcutIdx;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.Dis_Wheel_Close
// [0x00020600]  (iNative[31685])
struct ADishonoredPlayerController_execDis_Wheel_Close_Params
{
	uint32_t                                           _bWithGamepad : 1;                                // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.Dis_Wheel_Open
// [0x00020600]  (iNative[31686])
struct ADishonoredPlayerController_execDis_Wheel_Open_Params
{
	uint32_t                                           _bWithGamepad : 1;                                // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredPlayerController.OnTeleport
// [0x00020102] 
struct ADishonoredPlayerController_execOnTeleport_Params
{
	class USeqAct_Teleport*                            _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.OnTeleport_Native
// [0x00020400]  (iNative[43994])
struct ADishonoredPlayerController_execOnTeleport_Native_Params
{
	class USeqAct_Teleport*                            _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.ReceivedPlayer
// [0x00020902] 
struct ADishonoredPlayerController_eventReceivedPlayer_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.ReceivedPlayer_Native
// [0x00020400]  (iNative[44662])
struct ADishonoredPlayerController_execReceivedPlayer_Native_Params
{
};

// Function DishonoredGame.DishonoredPlayerController.HandleWalking
// [0x00020400]  (iNative[20898])
struct ADishonoredPlayerController_execHandleWalking_Params
{
	float                                              _fDeltaSeconds;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredPlayerController.HandleHeldButtons
// [0x00020400]  (iNative[35449])
struct ADishonoredPlayerController_execHandleHeldButtons_Params
{
	float                                              _fDeltaSeconds;                                   // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.IsDead
// [0x00020400]  (iNative[21371])
struct ADishonoredNPCController_execIsDead_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredNPCController.DisplayDebug
// [0x00420102] 
struct ADishonoredNPCController_execDisplayDebug_Params
{
	class AHUD*                                        _pHUD;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _rfOut_YL;                                        // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              _rfOut_YPos;                                      // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DishonoredNPCController.DisplayDebug_Native
// [0x00420400]  (iNative[32321])
struct ADishonoredNPCController_execDisplayDebug_Native_Params
{
	class AHUD*                                        _pHUD;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _rfOut_YL;                                        // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              _rfOut_YPos;                                      // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DishonoredNPCController.OnAIRingAlarm
// [0x00020400]  (iNative[43878])
struct ADishonoredNPCController_execOnAIRingAlarm_Params
{
	class UDisSeqAct_AIRingAlarm*                      _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAIStartDistraction
// [0x00020400]  (iNative[43884])
struct ADishonoredNPCController_execOnAIStartDistraction_Params
{
	class UDisSeqAct_AIStartDistraction*               _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAIGetBrainFlags
// [0x00020400]  (iNative[43872])
struct ADishonoredNPCController_execOnAIGetBrainFlags_Params
{
	class UDisSeqAct_AIGetBrainFlagValue*              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAISetBrainFlags
// [0x00020400]  (iNative[43879])
struct ADishonoredNPCController_execOnAISetBrainFlags_Params
{
	class UDisSeqAct_AISetBrainFlags*                  _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAIPsychicAttention
// [0x00020400]  (iNative[43877])
struct ADishonoredNPCController_execOnAIPsychicAttention_Params
{
	class UDisSeqAct_AIPsychicAttention*               _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAIClearAttention
// [0x00020400]  (iNative[43870])
struct ADishonoredNPCController_execOnAIClearAttention_Params
{
	class UDisSeqAct_AIClearAttention*                 _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAISetSuspicionLevel
// [0x00020400]  (iNative[43882])
struct ADishonoredNPCController_execOnAISetSuspicionLevel_Params
{
	class UDisSeqAct_AISetSuspicionLevel*              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAIProtectNeutralsOverride
// [0x00020400]  (iNative[43876])
struct ADishonoredNPCController_execOnAIProtectNeutralsOverride_Params
{
	class UDisSeqAct_AIProtectNeutralsOverride*        _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAIShoot
// [0x00020400]  (iNative[43883])
struct ADishonoredNPCController_execOnAIShoot_Params
{
	class UDisSeqAct_AIShoot*                          _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAISetSenses
// [0x00020400]  (iNative[43881])
struct ADishonoredNPCController_execOnAISetSenses_Params
{
	class UDisSeqAct_AISetSenses*                      _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAISetPatrol
// [0x00020400]  (iNative[43880])
struct ADishonoredNPCController_execOnAISetPatrol_Params
{
	class UDisSeqAct_AISetPatrol*                      _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAIGuard
// [0x00020400]  (iNative[43874])
struct ADishonoredNPCController_execOnAIGuard_Params
{
	class UDisSeqAct_AIGuard*                          _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAIGoToActor
// [0x00020400]  (iNative[43873])
struct ADishonoredNPCController_execOnAIGoToActor_Params
{
	class UDisSeqAct_AIGoToActor*                      _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAIDoSearch
// [0x00020400]  (iNative[43871])
struct ADishonoredNPCController_execOnAIDoSearch_Params
{
	class UDisSeqAct_AIDoSearch*                       _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.OnAIAmbush
// [0x00020400]  (iNative[43869])
struct ADishonoredNPCController_execOnAIAmbush_Params
{
	class UDisSeqAct_AIAmbush*                         _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCController.CallClearLatentAction
// [0x00024802] 
struct ADishonoredNPCController_eventCallClearLatentAction_Params
{
	class USeqAct_Latent*                              _pActionClass;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           _bAborted : 1;                                    // 0x0004 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class USeqAct_Latent*                              _pExceptionAction;                                // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredNPCController.GetMoveTargetLocation
// [0x00020400]  (iNative[35319])
struct ADishonoredNPCController_execGetMoveTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                      // 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredNPCPawn.SetDesiredRotation
// [0x00024400]  (iNative[25640])
struct ADishonoredNPCPawn_execSetDesiredRotation_Params
{
	struct FRotator                                    _TargetDesiredRotation;                           // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           _bInLockDesiredRotation : 1;                      // 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           _bInUnlockWhenReached : 1;                        // 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	float                                              _InterpolationTime;                               // 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           _bResetRotationRate : 1;                          // 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredNPCPawn.SetPushesRigidBodies
// [0x00020400]  (iNative[25751])
struct ADishonoredNPCPawn_execSetPushesRigidBodies_Params
{
	uint32_t                                           _bNewPush : 1;                                    // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DishonoredNPCPawn.OnNPCAddPutPocketInteraction
// [0x00020400]  (iNative[47588])
struct ADishonoredNPCPawn_execOnNPCAddPutPocketInteraction_Params
{
	class UDisDLC06SeqAct_NPCAddPutPocketInteraction*  _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.OnNPCSetMaterials
// [0x00020400]  (iNative[43948])
struct ADishonoredNPCPawn_execOnNPCSetMaterials_Params
{
	class UDisSeqAct_NPCSetMaterials*                  _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.OnSetIgnoreDeath
// [0x00020400]  (iNative[43981])
struct ADishonoredNPCPawn_execOnSetIgnoreDeath_Params
{
	class UDisSeqAct_SetIgnoreDeath*                   _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.OnOverridePossess
// [0x00020400]  (iNative[43953])
struct ADishonoredNPCPawn_execOnOverridePossess_Params
{
	class UDisSeqAct_OverridePossess*                  _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.OnPlayMusicBox
// [0x00020400]  (iNative[43955])
struct ADishonoredNPCPawn_execOnPlayMusicBox_Params
{
	class UDisSeqAct_PlayMusicBox*                     _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.OnEquipItemType
// [0x00020400]  (iNative[43909])
struct ADishonoredNPCPawn_execOnEquipItemType_Params
{
	class UDisSeqAct_EquipItemType*                    _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.OnSpawnStealable
// [0x00020400]  (iNative[43989])
struct ADishonoredNPCPawn_execOnSpawnStealable_Params
{
	class UDisSeqAct_SpawnStealable*                   _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.OnNPCDoTeleportSpell
// [0x00020400]  (iNative[43946])
struct ADishonoredNPCPawn_execOnNPCDoTeleportSpell_Params
{
	class UDisSeqAct_NPCDoTeleportSpell*               _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.OnNPCMarkForVanish
// [0x00020400]  (iNative[43947])
struct ADishonoredNPCPawn_execOnNPCMarkForVanish_Params
{
	class UDisSeqAct_NPCMarkForVanish*                 _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.OnSeverLimb
// [0x00020400]  (iNative[43985])
struct ADishonoredNPCPawn_execOnSeverLimb_Params
{
	class UDisSeqAct_SeverLimb*                        _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.PhysicsVolumeChange
// [0x00020802] 
struct ADishonoredNPCPawn_eventPhysicsVolumeChange_Params
{
	class APhysicsVolume*                              _pNewVolume;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.NPCTouchedDeepWater
// [0x00020400]  (iNative[43842])
struct ADishonoredNPCPawn_execNPCTouchedDeepWater_Params
{
};

// Function DishonoredGame.DishonoredNPCPawn.BreakConstraint
// [0x00020802] 
struct ADishonoredNPCPawn_eventBreakConstraint_Params
{
	class FName                                        _JointName;                                       // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                         LODIdx;                                           // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredNPCPawn.TakeFallingDamage_Native
// [0x00020400]  (iNative[45312])
struct ADishonoredNPCPawn_execTakeFallingDamage_Native_Params
{
	struct FVector                                     _HitNormal;                                       // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class AActor*                                      _pFloorActor;                                     // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredNPCPawn.TakeDamage_Native
// [0x00424400]  (iNative[45311])
struct ADishonoredNPCPawn_execTakeDamage_Native_Params
{
	int32_t                                            _rDamage;                                         // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _rMomentum;                                       // 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredNPCPawn.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADishonoredNPCPawn_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DishonoredNPCPawn.PlayDying_Native
// [0x00020500]  (iNative[44228])
struct ADishonoredNPCPawn_execPlayDying_Native_Params
{
	class AController*                                 Killer;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLoc;                                           // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredNPCPawn.ChooseAndTriggerDeathEvent_Native
// [0x00020400]  (iNative[30864])
struct ADishonoredNPCPawn_execChooseAndTriggerDeathEvent_Native_Params
{
	class UDamageType*                                 _pDamageType;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DishonoredNPCPawn.DisplayDebug_Native
// [0x00420400]  (iNative[32321])
struct ADishonoredNPCPawn_execDisplayDebug_Native_Params
{
	class AHUD*                                        _pHUD;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _rfOut_YL;                                        // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              _rfOut_YPos;                                      // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DisTallboyNPCPawn.TakeDamage_Native
// [0x00424400]  (iNative[45311])
struct ADisTallboyNPCPawn_execTakeDamage_Native_Params
{
	int32_t                                            _rDamage;                                         // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _rMomentum;                                       // 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisPossessionProxyPawn.PlayDying_Native
// [0x00020500]  (iNative[44228])
struct ADisPossessionProxyPawn_execPlayDying_Native_Params
{
	class AController*                                 Killer;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLoc;                                           // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DishonoredSpawner.OnStartSpawn
// [0x00020400]  (iNative[43990])
struct ADishonoredSpawner_execOnStartSpawn_Params
{
	class UDisSeqAct_StartSpawn*                       _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisNPCDistractor.OnToggle
// [0x00020400]  (iNative[23663])
struct ADisNPCDistractor_execOnToggle_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorNotice.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorNotice_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorNotice.OnExitCallback_Init
// [0x00020400]  (iNative[43912])
struct UDisBehaviorNotice_execOnExitCallback_Init_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorNotice.OnEnterCallback_Init
// [0x00020400]  (iNative[43902])
struct UDisBehaviorNotice_execOnEnterCallback_Init_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEscapeExplosion.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorEscapeExplosion_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEscapeExplosion.ThreatTerminatedCallback_Flee
// [0x00020400]  (iNative[45343])
struct UDisBehaviorEscapeExplosion_execThreatTerminatedCallback_Flee_Params
{
	class UDisAISubStateFlee*                          _pSubSate;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEscapeExplosion.RequestStateExitCallback_Flee
// [0x00020400]  (iNative[44740])
struct UDisBehaviorEscapeExplosion_execRequestStateExitCallback_Flee_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEscapeExplosion.RefreshCallback_Flee
// [0x00020400]  (iNative[44669])
struct UDisBehaviorEscapeExplosion_execRefreshCallback_Flee_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEscapeExplosion.OnEnterCallback_Flee
// [0x00020400]  (iNative[43900])
struct UDisBehaviorEscapeExplosion_execOnEnterCallback_Flee_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorGoHome.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorGoHome_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorGoHome.OnEnterCallback_GenericAction
// [0x00020400]  (iNative[43901])
struct UDisBehaviorGoHome_execOnEnterCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorGoHome.RefreshCallback_Menace
// [0x00020400]  (iNative[44675])
struct UDisBehaviorGoHome_execRefreshCallback_Menace_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorGoHome.RequestStateExitCallback_TakePosition
// [0x00020400]  (iNative[44746])
struct UDisBehaviorGoHome_execRequestStateExitCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorGoHome.RefreshCallback_TakePosition
// [0x00020400]  (iNative[44678])
struct UDisBehaviorGoHome_execRefreshCallback_TakePosition_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorGoHome.OnEnterCallback_TakePosition
// [0x00020400]  (iNative[43907])
struct UDisBehaviorGoHome_execOnEnterCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorGuard.OnExitCallback_Stand
// [0x00020400]  (iNative[43915])
struct UDisBehaviorGuard_execOnExitCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorGuard.RefreshCallback_Stand
// [0x00020400]  (iNative[44676])
struct UDisBehaviorGuard_execRefreshCallback_Stand_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorGuard.OnEnterCallback_Stand
// [0x00020400]  (iNative[43905])
struct UDisBehaviorGuard_execOnEnterCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorGuard.RequestStateExitCallback_TakePosition
// [0x00020400]  (iNative[44746])
struct UDisBehaviorGuard_execRequestStateExitCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorInteract.OnExitCallback_Stand
// [0x00020400]  (iNative[43915])
struct UDisBehaviorInteract_execOnExitCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorInteract.TickCallback_Stand
// [0x00020400]  (iNative[45360])
struct UDisBehaviorInteract_execTickCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorInteract.OnExitCallback_TakePosition
// [0x00020400]  (iNative[43917])
struct UDisBehaviorInteract_execOnExitCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorInteract.RequestStateExitCallback_TakePosition
// [0x00020400]  (iNative[44746])
struct UDisBehaviorInteract_execRequestStateExitCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorInteract.OnEnterCallback_TakePosition
// [0x00020400]  (iNative[43907])
struct UDisBehaviorInteract_execOnEnterCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorMagicResponse.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorMagicResponse_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPanic.RefreshCallback_Cower
// [0x00020400]  (iNative[44666])
struct UDisBehaviorPanic_execRefreshCallback_Cower_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPanic.RequestStateExitCallback_Cower
// [0x00020400]  (iNative[44735])
struct UDisBehaviorPanic_execRequestStateExitCallback_Cower_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPanic.RequestStateExitCallback_Flee
// [0x00020400]  (iNative[44740])
struct UDisBehaviorPanic_execRequestStateExitCallback_Flee_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPanic.RefreshCallback_Flee
// [0x00020400]  (iNative[44669])
struct UDisBehaviorPanic_execRefreshCallback_Flee_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPanic.OnEnterCallback_Flee
// [0x00020400]  (iNative[43900])
struct UDisBehaviorPanic_execOnEnterCallback_Flee_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPanic.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorPanic_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPanic.RefreshCallback_GenericAction
// [0x00020400]  (iNative[44670])
struct UDisBehaviorPanic_execRefreshCallback_GenericAction_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPanic.OnEnterCallback_GenericAction
// [0x00020400]  (iNative[43901])
struct UDisBehaviorPanic_execOnEnterCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPatrol.TickCallback_Stand
// [0x00020400]  (iNative[45360])
struct UDisBehaviorPatrol_execTickCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPatrol.OnEnterCallback_Stand
// [0x00020400]  (iNative[43905])
struct UDisBehaviorPatrol_execOnEnterCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPatrol.RequestStateExitCallback_TakeActorPosition
// [0x00020400]  (iNative[44745])
struct UDisBehaviorPatrol_execRequestStateExitCallback_TakeActorPosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPatrol.TickCallback_TakeActorPosition
// [0x00020400]  (iNative[45363])
struct UDisBehaviorPatrol_execTickCallback_TakeActorPosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorRatStomp.RequestStateExitCallback_TakeActorPosition
// [0x00020400]  (iNative[44745])
struct UDisBehaviorRatStomp_execRequestStateExitCallback_TakeActorPosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorReact.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorReact_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorReact.OnEnterCallback_GenericAction
// [0x00020400]  (iNative[43901])
struct UDisBehaviorReact_execOnEnterCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorReturnTravel.RequestStateExitCallback_TakePosition
// [0x00020400]  (iNative[44746])
struct UDisBehaviorReturnTravel_execRequestStateExitCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorWeep.RequestStateExitCallback_DoWeaponManoeuver
// [0x00020400]  (iNative[44737])
struct UDisBehaviorWeep_execRequestStateExitCallback_DoWeaponManoeuver_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorWeep.RequestStateExitCallback_Stand
// [0x00020400]  (iNative[44744])
struct UDisBehaviorWeep_execRequestStateExitCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorWeep.TickCallback_Stand
// [0x00020400]  (iNative[45360])
struct UDisBehaviorWeep_execTickCallback_Stand_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorWeep.OnEnterCallback_Stand
// [0x00020400]  (iNative[43905])
struct UDisBehaviorWeep_execOnEnterCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorWeep.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorWeep_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorWeep.OnEnterCallback_GenericAction
// [0x00020400]  (iNative[43901])
struct UDisBehaviorWeep_execOnEnterCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorWeep.OnExitCallback_TakePosition
// [0x00020400]  (iNative[43917])
struct UDisBehaviorWeep_execOnExitCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorWeep.OnEnterCallback_TakePosition
// [0x00020400]  (iNative[43907])
struct UDisBehaviorWeep_execOnEnterCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorWeep.RefreshCallback_TakePosition
// [0x00020400]  (iNative[44678])
struct UDisBehaviorWeep_execRefreshCallback_TakePosition_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorWeep.TickCallback_TakePosition
// [0x00020400]  (iNative[45364])
struct UDisBehaviorWeep_execTickCallback_TakePosition_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEscapePlague.RequestStateExitCallback_TakePosition
// [0x00020400]  (iNative[44746])
struct UDisBehaviorEscapePlague_execRequestStateExitCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEscapePlague.RefreshCallback_TakePosition
// [0x00020400]  (iNative[44678])
struct UDisBehaviorEscapePlague_execRefreshCallback_TakePosition_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEscapePlague.OnResetCallback_TakePosition
// [0x00020400]  (iNative[43964])
struct UDisBehaviorEscapePlague_execOnResetCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEscapePlague.OnEnterCallback_TakePosition
// [0x00020400]  (iNative[43907])
struct UDisBehaviorEscapePlague_execOnEnterCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorFollow.NoMoreTargetCallback_Follow
// [0x00020400]  (iNative[43778])
struct UDisBehaviorFollow_execNoMoreTargetCallback_Follow_Params
{
};

// Function DishonoredGame.DisAISubState.RequestStateExitCallback
// [0x00120000] 
struct UDisAISubState_execRequestStateExitCallback_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisAISubState.RefreshCallback
// [0x00120000] 
struct UDisAISubState_execRefreshCallback_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisAISubState.TickCallback
// [0x00120000] 
struct UDisAISubState_execTickCallback_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisAISubState.OnExitCallback
// [0x00120000] 
struct UDisAISubState_execOnExitCallback_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisAISubState.OnResetCallback
// [0x00120000] 
struct UDisAISubState_execOnResetCallback_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisAISubState.OnEnterCallback
// [0x00120000] 
struct UDisAISubState_execOnEnterCallback_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisAISubStateFlee.ThreatTerminatedCallback
// [0x00120000] 
struct UDisAISubStateFlee_execThreatTerminatedCallback_Params
{
	class UDisAISubStateFlee*                          pSubSate;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisAISubStateFollow.NoMoreTargetCallback
// [0x00120000] 
struct UDisAISubStateFollow_execNoMoreTargetCallback_Params
{
};

// Function DishonoredGame.DisNavMeshGoal_BestFleePoint.RecycleInternal
// [0x00020400]  (iNative[13709])
struct UDisNavMeshGoal_BestFleePoint_execRecycleInternal_Params
{
};

// Function DishonoredGame.DisNavMeshGoal_ShootingPosition.Recycle
// [0x00020C00]  (iNative[13708])
struct UDisNavMeshGoal_ShootingPosition_eventRecycle_Params
{
};

// Function DishonoredGame.DisBehaviorAmbush.RequestStateExitCallback_LieInWait
// [0x00020400]  (iNative[44743])
struct UDisBehaviorAmbush_execRequestStateExitCallback_LieInWait_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorAmbush.RequestStateExitCallback_TakeActorPosition
// [0x00020400]  (iNative[44745])
struct UDisBehaviorAmbush_execRequestStateExitCallback_TakeActorPosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatMelee.RequestStateExitCallback_FindShootingPosition
// [0x00020400]  (iNative[44738])
struct UDisBehaviorCombatMelee_execRequestStateExitCallback_FindShootingPosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatMelee.RefreshCallback_Stand
// [0x00020400]  (iNative[44676])
struct UDisBehaviorCombatMelee_execRefreshCallback_Stand_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatMelee.OnEnterCallback_Stand
// [0x00020400]  (iNative[43905])
struct UDisBehaviorCombatMelee_execOnEnterCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatMelee.RefreshCallback_MeleeChase
// [0x00020400]  (iNative[44673])
struct UDisBehaviorCombatMelee_execRefreshCallback_MeleeChase_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatMelee.RefreshCallback_MeleeEngage
// [0x00020400]  (iNative[44674])
struct UDisBehaviorCombatMelee_execRefreshCallback_MeleeEngage_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorAssassinCombat.RequestStateExitCallback_DoPullSpell
// [0x00020400]  (iNative[47670])
struct UDisBehaviorAssassinCombat_execRequestStateExitCallback_DoPullSpell_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorAssassinCombat.RequestStateExitCallback_DoAttractSpell
// [0x00020400]  (iNative[44736])
struct UDisBehaviorAssassinCombat_execRequestStateExitCallback_DoAttractSpell_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatEliteGuard.RequestStateExitCallback_FirePistol
// [0x00020400]  (iNative[44739])
struct UDisBehaviorCombatEliteGuard_execRequestStateExitCallback_FirePistol_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatEliteGuard.OnEnterCallback_FirePistol
// [0x00020400]  (iNative[43899])
struct UDisBehaviorCombatEliteGuard_execOnEnterCallback_FirePistol_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatEliteGuard.RequestStateExitCallback_FindShootingPosition
// [0x00020400]  (iNative[44738])
struct UDisBehaviorCombatEliteGuard_execRequestStateExitCallback_FindShootingPosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatEliteGuard.RefreshCallback_FindShootingPosition
// [0x00020400]  (iNative[44668])
struct UDisBehaviorCombatEliteGuard_execRefreshCallback_FindShootingPosition_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatEliteGuard.RefreshCallback_Stand
// [0x00020400]  (iNative[44676])
struct UDisBehaviorCombatEliteGuard_execRefreshCallback_Stand_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorOverseerCombat.OnExitCallback_Stand
// [0x00020400]  (iNative[43915])
struct UDisBehaviorOverseerCombat_execOnExitCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorOverseerCombat.OnEnterCallback_Stand
// [0x00020400]  (iNative[43905])
struct UDisBehaviorOverseerCombat_execOnEnterCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorOverseerCombat.RefreshCallback_MeleeChase
// [0x00020400]  (iNative[44673])
struct UDisBehaviorOverseerCombat_execRefreshCallback_MeleeChase_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorOverseerCombat.RefreshCallback_MeleeEngage
// [0x00020400]  (iNative[44674])
struct UDisBehaviorOverseerCombat_execRefreshCallback_MeleeEngage_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorOverseerCombat.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorOverseerCombat_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorOverseerCombat.OnEnterCallback_GenericAction
// [0x00020400]  (iNative[43901])
struct UDisBehaviorOverseerCombat_execOnEnterCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorMusicalCombat.RefreshCallback_DoWeaponManoeuver
// [0x00020400]  (iNative[44667])
struct UDisBehaviorMusicalCombat_execRefreshCallback_DoWeaponManoeuver_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorMusicalCombat.RequestStateExitCallback_DoWeaponManoeuver
// [0x00020400]  (iNative[44737])
struct UDisBehaviorMusicalCombat_execRequestStateExitCallback_DoWeaponManoeuver_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorMusicalCombat.RefreshCallback_MaintainDistance
// [0x00020400]  (iNative[44672])
struct UDisBehaviorMusicalCombat_execRefreshCallback_MaintainDistance_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorMusicalCombat.RefreshCallback_Init
// [0x00020400]  (iNative[44671])
struct UDisBehaviorMusicalCombat_execRefreshCallback_Init_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorTallBoyCombat.RequestStateExitCallback_FindShootingPosition
// [0x00020400]  (iNative[44738])
struct UDisBehaviorTallBoyCombat_execRequestStateExitCallback_FindShootingPosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatRatSwarm.RequestStateExitCallback_TakeActorPosition
// [0x00020400]  (iNative[44745])
struct UDisBehaviorCombatRatSwarm_execRequestStateExitCallback_TakeActorPosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatRatSwarm.OnExitCallback_TakeActorPosition
// [0x00020400]  (iNative[43916])
struct UDisBehaviorCombatRatSwarm_execOnExitCallback_TakeActorPosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatRatSwarm.RefreshCallback_TakeActorPosition
// [0x00020400]  (iNative[44677])
struct UDisBehaviorCombatRatSwarm_execRefreshCallback_TakeActorPosition_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatRatSwarm.RefreshCallback_Stand
// [0x00020400]  (iNative[44676])
struct UDisBehaviorCombatRatSwarm_execRefreshCallback_Stand_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatRatSwarm.OnEnterCallback_Stand
// [0x00020400]  (iNative[43905])
struct UDisBehaviorCombatRatSwarm_execOnEnterCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatRatSwarmEliteGuard.RequestStateExitCallback_FirePistol
// [0x00020400]  (iNative[44739])
struct UDisBehaviorCombatRatSwarmEliteGuard_execRequestStateExitCallback_FirePistol_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatRatSwarmEliteGuard.RefreshCallback_TakeActorPosition
// [0x00020400]  (iNative[44677])
struct UDisBehaviorCombatRatSwarmEliteGuard_execRefreshCallback_TakeActorPosition_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorEnemyUnreachable_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.RequestStateExitCallback_TakePosition
// [0x00020400]  (iNative[44746])
struct UDisBehaviorEnemyUnreachable_execRequestStateExitCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.RequestStateExitCallback_DoWeaponManoeuver
// [0x00020400]  (iNative[44737])
struct UDisBehaviorEnemyUnreachable_execRequestStateExitCallback_DoWeaponManoeuver_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.OnExitCallback_Menace
// [0x00020400]  (iNative[43914])
struct UDisBehaviorEnemyUnreachable_execOnExitCallback_Menace_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.RefreshCallback_Menace
// [0x00020400]  (iNative[44675])
struct UDisBehaviorEnemyUnreachable_execRefreshCallback_Menace_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorEnemyUnreachable.OnEnterCallback_Menace
// [0x00020400]  (iNative[43904])
struct UDisBehaviorEnemyUnreachable_execOnEnterCallback_Menace_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorShoot.TickCallback_Stand
// [0x00020400]  (iNative[45360])
struct UDisBehaviorShoot_execTickCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorShoot.RequestStateExitCallback_FirePistol
// [0x00020400]  (iNative[44739])
struct UDisBehaviorShoot_execRequestStateExitCallback_FirePistol_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatWolfhound.RefreshCallback_WolfhoundCombatLongDistance
// [0x00020400]  (iNative[44680])
struct UDisBehaviorCombatWolfhound_execRefreshCallback_WolfhoundCombatLongDistance_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatWolfhound.RefreshCallback_WHShortDistance
// [0x00020400]  (iNative[44679])
struct UDisBehaviorCombatWolfhound_execRefreshCallback_WHShortDistance_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorCombatWolfhound.RefreshCallback_MeleeChase
// [0x00020400]  (iNative[44673])
struct UDisBehaviorCombatWolfhound_execRefreshCallback_MeleeChase_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSummonWolfHound.OnExitCallback_GenericAction
// [0x00020400]  (iNative[43911])
struct UDisBehaviorSummonWolfHound_execOnExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSummonWolfHound.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorSummonWolfHound_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSummonWolfHound.OnEnterCallback_GenericAction
// [0x00020400]  (iNative[43901])
struct UDisBehaviorSummonWolfHound_execOnEnterCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisSeqAct_SetRainEmitter.GetObjClassVersion
// [0x00022802] 
struct UDisSeqAct_SetRainEmitter_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisSeqEvent_Distracted.GetObjClassVersion
// [0x00022802] 
struct UDisSeqEvent_Distracted_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisSeqVar_PlayerCamera.GetObjectValue
// [0x00020400]  (iNative[20659])
struct UDisSeqVar_PlayerCamera_execGetObjectValueW_Params
{
	class UObject*                                     ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisSeqVar_PlayerPawn.GetObjectValue
// [0x00020400]  (iNative[20659])
struct UDisSeqVar_PlayerPawn_execGetObjectValueW_Params
{
	class UObject*                                     ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisSeqVar_SpawnerPawn.GetObjectValue
// [0x00020400]  (iNative[20659])
struct UDisSeqVar_SpawnerPawn_execGetObjectValueW_Params
{
	class UObject*                                     ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisToggleableVolume.OnToggle
// [0x00020500]  (iNative[23663])
struct ADisToggleableVolume_execOnToggle_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisForbiddenZone.OnForbiddenZoneOverride
// [0x00020400]  (iNative[43919])
struct ADisForbiddenZone_execOnForbiddenZoneOverride_Params
{
	class UDisSeqAct_ForbiddenZoneOverride*            _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGrenade.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisGrenade_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisWhiskeyBottle.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisWhiskeyBottle_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisProjectile.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisProjectile_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisProjectile.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADisProjectile_eventTakeDamage_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisProjectile_Arrow.BaseChange
// [0x00020C00]  (iNative[311])
struct ADisProjectile_Arrow_eventBaseChange_Params
{
};

// Function DishonoredGame.DisProjectile_GrenadeBase.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisProjectile_GrenadeBase_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisProjectile_StickyGrenade.BaseChange
// [0x00020C00]  (iNative[311])
struct ADisProjectile_StickyGrenade_eventBaseChange_Params
{
};

// Function DishonoredGame.DisProjectile_Whiskey.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisProjectile_Whiskey_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisGadget_SpringRazorPlaced.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADisGadget_SpringRazorPlaced_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisGadget_SpringRazorPlaced.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisGadget_SpringRazorPlaced_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisGadget_SpringRazorPlaced.BaseChange
// [0x00020C00]  (iNative[311])
struct ADisGadget_SpringRazorPlaced_eventBaseChange_Params
{
};

// Function DishonoredGame.DishonoredBreakable.Detach
// [0x00020802] 
struct ADishonoredBreakable_eventDetach_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// int32_t                                         idx;                                              // 0x0004 (0x0004) [0x0000000000000000]               
	// class APawn*                                    P;                                                // 0x0008 (0x0004) [0x0000000000000000]               
	// class APawn*                                    Test;                                             // 0x000C (0x0004) [0x0000000000000000]               
	// uint32_t                                        bResetPhysics : 1;                                // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function DishonoredGame.DishonoredBreakable.Attach
// [0x00020802] 
struct ADishonoredBreakable_eventAttach_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	// class APawn*                                    P;                                                // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DishonoredMovable.OnSleepRBPhysics_Native
// [0x00020400]  (iNative[43988])
struct ADishonoredMovable_execOnSleepRBPhysics_Native_Params
{
};

// Function DishonoredGame.DishonoredMovable.OnSleepRBPhysics
// [0x00020802] 
struct ADishonoredMovable_eventOnSleepRBPhysics_Params
{
};

// Function DishonoredGame.DisNPCAttachment.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisNPCAttachment_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisWhaleOilBattery.Detach
// [0x00020802] 
struct ADisWhaleOilBattery_eventDetach_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisWhaleOilBattery.Attach
// [0x00020802] 
struct ADisWhaleOilBattery_eventAttach_Params
{
	class AActor*                                      Other;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisWhaleOilBattery.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisWhaleOilBattery_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisPickup_Base.OnToggleHidden
// [0x00020102] 
struct ADisPickup_Base_execOnToggleHidden_Params
{
	class USeqAct_ToggleHidden*                        Action;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisPickup_Base.BaseChange
// [0x00020C00]  (iNative[311])
struct ADisPickup_Base_eventBaseChange_Params
{
};

// Function DishonoredGame.DisWhaleBoneCharm.OnSetBoneCharmEffect
// [0x00020400]  (iNative[43979])
struct ADisWhaleBoneCharm_execOnSetBoneCharmEffect_Params
{
	class UDisSeqAct_SetBoneCharmEffect*               _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisWallOfLight.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADisWallOfLight_eventTakeDamage_Params
{
	int32_t                                            DamageAmount;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 EventInstigator;                                  // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisWallOfLight.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisWallOfLight_execTakeDamage_Native_Params
{
	int32_t                                            DamageAmount;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 EventInstigator;                                  // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisSeqVar_Task.GetObjectValue
// [0x00020400]  (iNative[20659])
struct UDisSeqVar_Task_execGetObjectValueW_Params
{
	class UObject*                                     ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisGameCrowdAgentSkeletalRat.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADisGameCrowdAgentSkeletalRat_eventTakeDamage_Params
{
	int32_t                                            DamageAmount;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 EventInstigator;                                  // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisGameCrowdAgentSkeletalRat.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisGameCrowdAgentSkeletalRat_execTakeDamage_Native_Params
{
	int32_t                                            DamageAmount;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 EventInstigator;                                  // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisGameCrowdAgentSkeletalRat.PlayParticleEffect
// [0x00020C00]  (iNative[13684])
struct ADisGameCrowdAgentSkeletalRat_eventPlayParticleEffect_Params
{
	class UAnimNotify_PlayParticleEffect*              AnimNotifyData;                                   // 0x0000 (0x0004) [0x0000000000000082] (CPF_Const | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisRatSpawner.OnActivateRatSpawner
// [0x00020400]  (iNative[43862])
struct ADisRatSpawner_execOnActivateRatSpawner_Params
{
	class UDisSeqAct_ActivateRatSpawner*               _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisRatRepulsor.OnToggle
// [0x00020400]  (iNative[23663])
struct ADisRatRepulsor_execOnToggle_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisEmitterCameraLensEffect_Looping.ActivateLensEffect
// [0x00020102] 
struct ADisEmitterCameraLensEffect_Looping_execActivateLensEffect_Params
{
};

// Function DishonoredGame.DisEmitterCameraLensEffect_Looping.EnabledFromScript
// [0x00020400]  (iNative[34726])
struct ADisEmitterCameraLensEffect_Looping_execEnabledFromScript_Params
{
};

// Function DishonoredGame.DisEmitterCameraLensEffect_Looping.NotifyRetriggered
// [0x00020400]  (iNative[23399])
struct ADisEmitterCameraLensEffect_Looping_execNotifyRetriggered_Params
{
};

// Function DishonoredGame.DisFleePointActor.OnToggle
// [0x00020500]  (iNative[23663])
struct ADisFleePointActor_execOnToggle_Params
{
	class USeqAct_Toggle*                              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGlobalMusicManager.TickCallback_Chase
// [0x00020400]  (iNative[45356])
struct UDisGlobalMusicManager_execTickCallback_Chase_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGlobalMusicManager.TickCallback_Combat
// [0x00020400]  (iNative[45357])
struct UDisGlobalMusicManager_execTickCallback_Combat_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGlobalMusicManager.TickCallback_RatAttack
// [0x00020400]  (iNative[45359])
struct UDisGlobalMusicManager_execTickCallback_RatAttack_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGlobalMusicManager.TickCallback_Suspense
// [0x00020400]  (iNative[45362])
struct UDisGlobalMusicManager_execTickCallback_Suspense_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisGlobalMusicManager.TickCallback_Exploration
// [0x00020400]  (iNative[45358])
struct UDisGlobalMusicManager_execTickCallback_Exploration_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisMusicState_Base.TickCallback
// [0x00120000] 
struct UDisMusicState_Base_execTickCallback_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisSeqEvent_Assassinated.GetObjClassVersion
// [0x00022802] 
struct UDisSeqEvent_Assassinated_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisBehaviorSearch.TickCallback_StareAtUnreachable
// [0x00020400]  (iNative[45361])
struct UDisBehaviorSearch_execTickCallback_StareAtUnreachable_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_StareAtUnreachable
// [0x00020400]  (iNative[43906])
struct UDisBehaviorSearch_execOnEnterCallback_StareAtUnreachable_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.OnExitCallback_Stand
// [0x00020400]  (iNative[43915])
struct UDisBehaviorSearch_execOnExitCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.RequestStateExitCallback_Stand
// [0x00020400]  (iNative[44744])
struct UDisBehaviorSearch_execRequestStateExitCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.TickCallback_Stand
// [0x00020400]  (iNative[45360])
struct UDisBehaviorSearch_execTickCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_Stand
// [0x00020400]  (iNative[43905])
struct UDisBehaviorSearch_execOnEnterCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.OnExitCallback_GenericAction
// [0x00020400]  (iNative[43911])
struct UDisBehaviorSearch_execOnExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorSearch_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_GenericAction
// [0x00020400]  (iNative[43901])
struct UDisBehaviorSearch_execOnEnterCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.OnExitCallback_TrackTarget
// [0x00020400]  (iNative[43918])
struct UDisBehaviorSearch_execOnExitCallback_TrackTarget_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_TrackTarget
// [0x00020400]  (iNative[43908])
struct UDisBehaviorSearch_execOnEnterCallback_TrackTarget_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.OnExitCallback_Investigate
// [0x00020400]  (iNative[43913])
struct UDisBehaviorSearch_execOnExitCallback_Investigate_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.RequestStateExitCallback_Investigate
// [0x00020400]  (iNative[44742])
struct UDisBehaviorSearch_execRequestStateExitCallback_Investigate_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorSearch.OnEnterCallback_Investigate
// [0x00020400]  (iNative[43903])
struct UDisBehaviorSearch_execOnEnterCallback_Investigate_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorPatrolSearch.OnEnterCallback_Stand
// [0x00020400]  (iNative[43905])
struct UDisBehaviorPatrolSearch_execOnEnterCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnExitCallback_GenericAction
// [0x00020400]  (iNative[43911])
struct UDisBehaviorTriggerAlarm_execOnExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisBehaviorTriggerAlarm_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnEnterCallback_GenericAction
// [0x00020400]  (iNative[43901])
struct UDisBehaviorTriggerAlarm_execOnEnterCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnExitCallback_TakePosition
// [0x00020400]  (iNative[43917])
struct UDisBehaviorTriggerAlarm_execOnExitCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.RequestStateExitCallback_TakePosition
// [0x00020400]  (iNative[44746])
struct UDisBehaviorTriggerAlarm_execRequestStateExitCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.RefreshCallback_TakePosition
// [0x00020400]  (iNative[44678])
struct UDisBehaviorTriggerAlarm_execRefreshCallback_TakePosition_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnEnterCallback_TakePosition
// [0x00020400]  (iNative[43907])
struct UDisBehaviorTriggerAlarm_execOnEnterCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnExitCallback_Stand
// [0x00020400]  (iNative[43915])
struct UDisBehaviorTriggerAlarm_execOnExitCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.TickCallback_Stand
// [0x00020400]  (iNative[45360])
struct UDisBehaviorTriggerAlarm_execTickCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fDeltaSeconds;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisBehaviorTriggerAlarm.OnEnterCallback_Stand
// [0x00020400]  (iNative[43905])
struct UDisBehaviorTriggerAlarm_execOnEnterCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisRiverKrust.OnRiverKrustDisable
// [0x00020400]  (iNative[43967])
struct ADisRiverKrust_execOnRiverKrustDisable_Params
{
	class UDisSeqAct_RiverKrustDisable*                _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisRiverKrust.OnRiverKrustSpitAtTarget
// [0x00020400]  (iNative[43968])
struct ADisRiverKrust_execOnRiverKrustSpitAtTarget_Params
{
	class UDisSeqAct_RiverKrustSpitAtTarget*           _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisRiverKrust.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADisRiverKrust_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisRiverKrust.TakeDamage_Native
// [0x00424400]  (iNative[45311])
struct ADisRiverKrust_execTakeDamage_Native_Params
{
	int32_t                                            _rDamage;                                         // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisRiverKrust.OnAnimEnd
// [0x00020C00]  (iNative[13641])
struct ADisRiverKrust_eventOnAnimEnd_Params
{
	class UAnimNodeSequence*                           _seqNode;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _playedTime;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _excessTime;                                      // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisFish.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADisFish_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisFish.TakeDamage_Native
// [0x00424400]  (iNative[45311])
struct ADisFish_execTakeDamage_Native_Params
{
	int32_t                                            _rDamage;                                         // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _rMomentum;                                       // 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisDLC05MoviePlayerBrief.OnBriefScreenClosed
// [0x00020400]  (iNative[47579])
struct UDisDLC05MoviePlayerBrief_execOnBriefScreenClosed_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_Leaderboards_PlayerProfile
// [0x00020400]  (iNative[47664])
struct UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_Leaderboards_PlayerProfile_Params
{
	int32_t                                            _LeaderboardEntryIdx;                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_CancelLeaderboardLoading
// [0x00020400]  (iNative[47657])
struct UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_CancelLeaderboardLoading_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_NextLeaderboardPage
// [0x00020400]  (iNative[47665])
struct UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_NextLeaderboardPage_Params
{
	int32_t                                            _ChallengeIdx;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _FilterIdx;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_PrevLeaderboardPage
// [0x00020400]  (iNative[47667])
struct UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_PrevLeaderboardPage_Params
{
	int32_t                                            _ChallengeIdx;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _FilterIdx;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_Leaderboards
// [0x00020400]  (iNative[47662])
struct UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_Leaderboards_Params
{
	int32_t                                            _ChallengeIdx;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            _FilterIdx;                                       // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC05MoviePlayerLeaderboard.Req_DLC05_Leaderboards_ChallengesList
// [0x00020400]  (iNative[47663])
struct UDisDLC05MoviePlayerLeaderboard_execReq_DLC05_Leaderboards_ChallengesList_Params
{
	int32_t                                            _Mode;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnQuitDLC05Confirm
// [0x00020400]  (iNative[47593])
struct UDisDLC05MoviePlayerChallengeMenu_execOnQuitDLC05Confirm_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.DLC05_Credits
// [0x00020400]  (iNative[46172])
struct UDisDLC05MoviePlayerChallengeMenu_execDLC05_Credits_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnGalleryClosed
// [0x00020400]  (iNative[47585])
struct UDisDLC05MoviePlayerChallengeMenu_execOnGalleryClosed_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnGalleryViewportClosed
// [0x00020400]  (iNative[47586])
struct UDisDLC05MoviePlayerChallengeMenu_execOnGalleryViewportClosed_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_GalleryLargeImage
// [0x00020400]  (iNative[47669])
struct UDisDLC05MoviePlayerChallengeMenu_execReq_GalleryLargeImage_Params
{
	int32_t                                            _ImageIdx;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_GalleryUnlockDetails
// [0x00020400]  (iNative[47661])
struct UDisDLC05MoviePlayerChallengeMenu_execReq_DLC05_GalleryUnlockDetails_Params
{
	int32_t                                            _ImageIdx;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_GalleryList
// [0x00020400]  (iNative[47660])
struct UDisDLC05MoviePlayerChallengeMenu_execReq_DLC05_GalleryList_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.StartDLC05Challenge
// [0x00020400]  (iNative[47687])
struct UDisDLC05MoviePlayerChallengeMenu_execStartDLC05Challenge_Params
{
	int32_t                                            _ChallengeIdx;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_ChallengeDetails
// [0x00020400]  (iNative[47658])
struct UDisDLC05MoviePlayerChallengeMenu_execReq_DLC05_ChallengeDetails_Params
{
	int32_t                                            _ChallengeIdx;                                    // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_ExpertChallengesList
// [0x00020400]  (iNative[47659])
struct UDisDLC05MoviePlayerChallengeMenu_execReq_DLC05_ExpertChallengesList_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.Req_DLC05_NormalChallengesList
// [0x00020400]  (iNative[47666])
struct UDisDLC05MoviePlayerChallengeMenu_execReq_DLC05_NormalChallengesList_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerChallengeMenu.OnWelcomeDisclaimerClosed
// [0x00020400]  (iNative[47598])
struct UDisDLC05MoviePlayerChallengeMenu_execOnWelcomeDisclaimerClosed_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.OnQuitDLC05Confirm
// [0x00020400]  (iNative[47593])
struct UDisDLC05MoviePlayerResultsMenu_execOnQuitDLC05Confirm_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.BackToDLC05MainMenu
// [0x00020400]  (iNative[45875])
struct UDisDLC05MoviePlayerResultsMenu_execBackToDLC05MainMenu_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.ReplayChallenge
// [0x00020400]  (iNative[47654])
struct UDisDLC05MoviePlayerResultsMenu_execReplayChallenge_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.CanUnpauseToReplay
// [0x00020400]  (iNative[45883])
struct UDisDLC05MoviePlayerResultsMenu_execCanUnpauseToReplay_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisDLC05MoviePlayerResultsMenu.SetPauseUntilReplay
// [0x00020802] 
struct UDisDLC05MoviePlayerResultsMenu_eventSetPauseUntilReplay_Params
{
	uint32_t                                           _bDesiredPauseState : 1;                          // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	// class UEngine*                                  Eng;                                              // 0x0004 (0x0004) [0x0000000000000000]               
	// class APlayerController*                        PC;                                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function DishonoredGame.DisDLC05MoviePlayerHUD.EndChallenge
// [0x00020400]  (iNative[46481])
struct UDisDLC05MoviePlayerHUD_execEndChallenge_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerHUD.DLC05_GoToNextPhase
// [0x00020400]  (iNative[46173])
struct UDisDLC05MoviePlayerHUD_execDLC05_GoToNextPhase_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.BackToDLC05MainMenu
// [0x00020400]  (iNative[45875])
struct UDisDLC05MoviePlayerPauseMenu_execBackToDLC05MainMenu_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.EndChallenge
// [0x00020400]  (iNative[46481])
struct UDisDLC05MoviePlayerPauseMenu_execEndChallenge_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.OnLevelLoadingOpened
// [0x00020400]  (iNative[47587])
struct UDisDLC05MoviePlayerPauseMenu_execOnLevelLoadingOpened_Params
{
};

// Function DishonoredGame.DisDLC05MoviePlayerPauseMenu.ReplayChallenge
// [0x00020400]  (iNative[47654])
struct UDisDLC05MoviePlayerPauseMenu_execReplayChallenge_Params
{
};

// Function DishonoredGame.DisDLC05GameInfo.PostLogin
// [0x00020802] 
struct ADisDLC05GameInfo_eventPostLogin_Params
{
	class APlayerController*                           NewPlayer;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC05GameInfo.PostLogin_Native
// [0x00020400]  (iNative[47630])
struct ADisDLC05GameInfo_execPostLogin_Native_Params
{
	class APlayerController*                           NewPlayer;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisSeqAct_DLC05_DialogScriptedChoice.GetObjClassVersion
// [0x00022802] 
struct UDisSeqAct_DLC05_DialogScriptedChoice_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisSeqAct_DLC05_DarkVision.GetObjClassVersion
// [0x00022802] 
struct UDisSeqAct_DLC05_DarkVision_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisSeqAct_DLC05_Interp.GetObjClassVersion
// [0x00022802] 
struct UDisSeqAct_DLC05_Interp_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisSeqAct_DLC05_Timer.GetObjClassVersion
// [0x00022802] 
struct UDisSeqAct_DLC05_Timer_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisSeqEvent_DLC05_Challenge.GetObjClassVersion
// [0x00022802] 
struct UDisSeqEvent_DLC05_Challenge_eventGetObjClassVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisDLC06CheatManager.ReportStoryFlags
// [0x00020600]  (iNative[47656])
struct UDisDLC06CheatManager_execReportStoryFlags_Params
{
};

// Function DishonoredGame.DisDLC06CheatManager.ReportEndGameFiles
// [0x00020600]  (iNative[47655])
struct UDisDLC06CheatManager_execReportEndGameFiles_Params
{
};

// Function DishonoredGame.DisDLC06CheatManager.UnlockMasterAssassin
// [0x00020600]  (iNative[47706])
struct UDisDLC06CheatManager_execUnlockMasterAssassin_Params
{
};

// Function DishonoredGame.DisDLC06CheatManager.MaxItems
// [0x00020600]  (iNative[43661])
struct UDisDLC06CheatManager_execMaxItems_Params
{
};

// Function DishonoredGame.DisDLC06CheatManager.I_AM_DAUD
// [0x00020600]  (iNative[46551])
struct UDisDLC06CheatManager_execI_AM_DAUD_Params
{
};

// Function DishonoredGame.DisDLC06PlayerPawn.DoJump
// [0x00020400]  (iNative[19114])
struct ADisDLC06PlayerPawn_execDoJump_Params
{
	uint32_t                                           _bUpdating : 1;                                   // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisDLC06NPCPawn.OnNPCSetHeadMesh
// [0x00020400]  (iNative[47590])
struct ADisDLC06NPCPawn_execOnNPCSetHeadMesh_Params
{
	class UDisDLC06SeqAct_NPCSetHeadMesh*              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC06Projectile_Arrow_Explosive.TakeDamage_Native
// [0x00024400]  (iNative[45311])
struct ADisDLC06Projectile_Arrow_Explosive_execTakeDamage_Native_Params
{
	int32_t                                            _Damage;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _Momentum;                                        // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisDLC06MoviePlayerMainMenu.GetLastDifficultyModeLockState
// [0x00020400]  (iNative[46528])
struct UDisDLC06MoviePlayerMainMenu_execGetLastDifficultyModeLockState_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function DishonoredGame.DisDLC06MoviePlayerMainMenu.OnQuitDLC06Confirm
// [0x00020400]  (iNative[47594])
struct UDisDLC06MoviePlayerMainMenu_execOnQuitDLC06Confirm_Params
{
};

// Function DishonoredGame.DisDLC06MoviePlayerMainMenu.DLC06_Credits
// [0x00020400]  (iNative[46198])
struct UDisDLC06MoviePlayerMainMenu_execDLC06_Credits_Params
{
};

// Function DishonoredGame.DisDLC07MoviePlayerMainMenu.DLC07_Credits
// [0x00020400]  (iNative[46201])
struct UDisDLC07MoviePlayerMainMenu_execDLC07_Credits_Params
{
};

// Function DishonoredGame.DisDLC07MoviePlayerMainMenu.OnQuitDLC07Confirm
// [0x00020400]  (iNative[47595])
struct UDisDLC07MoviePlayerMainMenu_execOnQuitDLC07Confirm_Params
{
};

// Function DishonoredGame.DisDLC06BehaviorAssassinSalute.OnExitCallback_GenericAction
// [0x00020400]  (iNative[43911])
struct UDisDLC06BehaviorAssassinSalute_execOnExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC06BehaviorAssassinSalute.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisDLC06BehaviorAssassinSalute_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC06BehaviorAssassinSalute.OnEnterCallback_GenericAction
// [0x00020400]  (iNative[43901])
struct UDisDLC06BehaviorAssassinSalute_execOnEnterCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pNextState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC06BehaviorSummonedAssassinIdle.RequestStateExitCallback_GenericAction
// [0x00020400]  (iNative[44741])
struct UDisDLC06BehaviorSummonedAssassinIdle_execRequestStateExitCallback_GenericAction_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC06Gadget_ArcMinePlaced.BaseChange
// [0x00020C00]  (iNative[311])
struct ADisDLC06Gadget_ArcMinePlaced_eventBaseChange_Params
{
};

// Function DishonoredGame.DisDLC06Gadget_ArcMinePlaced.TakeDamage
// [0x00024C00]  (iNative[13766])
struct ADisDLC06Gadget_ArcMinePlaced_eventTakeDamage_Params
{
	int32_t                                            Damage;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class AController*                                 InstigatedBy;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     HitLocation;                                      // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Momentum;                                         // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	class UDamageType*                                 DamageType;                                       // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               HitInfo;                                          // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      DamageCauser;                                     // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisDLC07MoviePlayerJournal.Req_CharmsTabContent
// [0x00020400]  (iNative[44706])
struct UDisDLC07MoviePlayerJournal_execReq_CharmsTabContent_Params
{
};

// Function DishonoredGame.DisDLC07MoviePlayerJournal.RemoveBoneCharm
// [0x00020400]  (iNative[44691])
struct UDisDLC07MoviePlayerJournal_execRemoveBoneCharm_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07MoviePlayerJournal.EquipBoneCharm
// [0x00020400]  (iNative[34849])
struct UDisDLC07MoviePlayerJournal_execEquipBoneCharm_Params
{
	int32_t                                            _ItemIdx;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RequestStateExitCallback_TakePosition
// [0x00020400]  (iNative[44746])
struct UDisDLC07BehaviorAssassinVsRiverKrustCombat_execRequestStateExitCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RefreshCallback_TakePosition
// [0x00020400]  (iNative[44678])
struct UDisDLC07BehaviorAssassinVsRiverKrustCombat_execRefreshCallback_TakePosition_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.OnEnterCallback_TakePosition
// [0x00020400]  (iNative[43907])
struct UDisDLC07BehaviorAssassinVsRiverKrustCombat_execOnEnterCallback_TakePosition_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RequestStateExitCallback_DoPullSpell
// [0x00020400]  (iNative[47670])
struct UDisDLC07BehaviorAssassinVsRiverKrustCombat_execRequestStateExitCallback_DoPullSpell_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.RefreshCallback_Stand
// [0x00020400]  (iNative[44676])
struct UDisDLC07BehaviorAssassinVsRiverKrustCombat_execRefreshCallback_Stand_Params
{
	class UDisAISubState*                              _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _fTimeSinceLastThought;                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07BehaviorAssassinVsRiverKrustCombat.OnEnterCallback_Stand
// [0x00020400]  (iNative[43905])
struct UDisDLC07BehaviorAssassinVsRiverKrustCombat_execOnEnterCallback_Stand_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UDishonoredNativeState*                      _pLastState;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07BehaviorTentacleIdle.RequestStateExitCallback_TentacleAttack
// [0x00020400]  (iNative[47671])
struct UDisDLC07BehaviorTentacleIdle_execRequestStateExitCallback_TentacleAttack_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07BehaviorTentacleIdle.RequestStateExitCallback_TentacleSpawn
// [0x00020400]  (iNative[47672])
struct UDisDLC07BehaviorTentacleIdle_execRequestStateExitCallback_TentacleSpawn_Params
{
	class UDishonoredNativeState*                      _pThisState;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07NPCPawn.OnNPCEnrage
// [0x00020400]  (iNative[47589])
struct ADisDLC07NPCPawn_execOnNPCEnrage_Params
{
	class UDisDLC07SeqAct_NPCEnrage*                   _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07NPCPawn.TakeDamage_Native
// [0x00424400]  (iNative[45311])
struct ADisDLC07NPCPawn_execTakeDamage_Native_Params
{
	int32_t                                            _rDamage;                                         // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _rMomentum;                                       // 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisDLC07GravehoundSpawner.NotifyPathChanged
// [0x00020800] 
struct ADisDLC07GravehoundSpawner_eventNotifyPathChanged_Params
{
};

// Function DishonoredGame.DisDLC07GravehoundSpawner.OnStartSpawn
// [0x00020400]  (iNative[43990])
struct ADisDLC07GravehoundSpawner_execOnStartSpawn_Params
{
	class UDisSeqAct_StartSpawn*                       _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07GravehoundSpawner.OnPermaKill
// [0x00020400]  (iNative[47591])
struct ADisDLC07GravehoundSpawner_execOnPermaKill_Params
{
	class UDisDLC07SeqAct_PermaKill*                   _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07CheatManager.GiveCrackedBoneCharm
// [0x00020600]  (iNative[46531])
struct UDisDLC07CheatManager_execGiveCrackedBoneCharm_Params
{
};

// Function DishonoredGame.DisDLC07CheatManager.RecreateEndgameDaud
// [0x00020600]  (iNative[47653])
struct UDisDLC07CheatManager_execRecreateEndgameDaud_Params
{
};

// Function DishonoredGame.DisDLC07CheatManager.LoadEndgameDaud
// [0x00020600]  (iNative[46570])
struct UDisDLC07CheatManager_execLoadEndgameDaud_Params
{
	uint32_t                                           _bHighChaos : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisDLC07CheatManager.SaveEndgameDaud
// [0x00020600]  (iNative[47679])
struct UDisDLC07CheatManager_execSaveEndgameDaud_Params
{
	uint32_t                                           _bHighChaos : 1;                                  // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function DishonoredGame.DisDLC07CheatManager.PrintHighClassUniques
// [0x00024600]  (iNative[47637])
struct UDisDLC07CheatManager_execPrintHighClassUniques_Params
{
	int32_t                                            _Threshold;                                       // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FName                                        _ClassName;                                       // 0x0004 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisDLC07CheatManager.I_AM_DAUD
// [0x00020600]  (iNative[46551])
struct UDisDLC07CheatManager_execI_AM_DAUD_Params
{
};

// Function DishonoredGame.DisDLC07CheatManager.MaxItems
// [0x00020600]  (iNative[43661])
struct UDisDLC07CheatManager_execMaxItems_Params
{
};

// Function DishonoredGame.DisDLC07PlayerPawn.OnClearTutorials
// [0x00020400]  (iNative[47580])
struct ADisDLC07PlayerPawn_execOnClearTutorials_Params
{
	class UDisDLC07SeqAct_ClearTutorials*              _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07PlayerPawn.OnToggleSaving
// [0x00020400]  (iNative[47597])
struct ADisDLC07PlayerPawn_execOnToggleSaving_Params
{
	class UDisDLC07SeqAct_ToggleSaving*                _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07PlayerPawn.OnEndDLC07
// [0x00020400]  (iNative[47584])
struct ADisDLC07PlayerPawn_execOnEndDLC07_Params
{
	class UDisDLC07SeqAct_EndDLC07*                    _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function DishonoredGame.DisDLC07PlayerPawn.JumpOffPawn
// [0x00020400]  (iNative[21449])
struct ADisDLC07PlayerPawn_execJumpOffPawn_Params
{
};

// Function DishonoredGame.DisDLC07PlayerPawn.TakeDamage_Native
// [0x00424400]  (iNative[45311])
struct ADisDLC07PlayerPawn_execTakeDamage_Native_Params
{
	int32_t                                            _rDamage;                                         // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class AController*                                 _pInstigatedBy;                                   // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _HitLocation;                                     // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     _rMomentum;                                       // 0x0014 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class UDamageType*                                 _pDamageType;                                     // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FTraceHitInfo                               _HitInfo;                                         // 0x0024 (0x001C) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class AActor*                                      _pDamageCauser;                                   // 0x0040 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function DishonoredGame.DisDLC07PlayerPawn.DisplayDebug_Native
// [0x00420400]  (iNative[32321])
struct ADisDLC07PlayerPawn_execDisplayDebug_Native_Params
{
	class AHUD*                                        _pHUD;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              _rfOut_YL;                                        // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              _rfOut_YPos;                                      // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function DishonoredGame.DisDLC07WhaleBoneCharmCracked.OnSetBoneCharmCrackedEffect
// [0x00020400]  (iNative[47596])
struct ADisDLC07WhaleBoneCharmCracked_execOnSetBoneCharmCrackedEffect_Params
{
	class UDisDLC07SeqAct_SetBoneCharmCrackedEffect*   _pAction;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/
