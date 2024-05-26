/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: GameFramework_structs.hpp
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

// ScriptStruct GameFramework.FrameworkGame.RequiredMobileInputConfig
// 0x001C
struct FRequiredMobileInputConfig
{
	class FString                                      GroupName;                                     // 0x0000 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        RequireZoneNames;                              // 0x000C (0x000C) [0x0000000000504000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           bIsAttractModeGroup : 1;                       // 0x0018 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
};

// ScriptStruct GameFramework.GameCrowdSpawner.GameCrowdSpawnerSettings
// 0x002C
struct FGameCrowdSpawnerSettings
{
	uint32_t                                           bCycleSpawnLocs : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              SpawnRate;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SpawnNum;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpawnRadius;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SplitScreenNumReduction;                       // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UGameCrowd_ListOfAgents*                     CrowdAgentList;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOnlySpawnHidden : 1;                          // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bRespawnDeadAgents : 1;                        // 0x0018 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOverrideNotVisibleLifeSpan : 1;               // 0x0018 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              AgentWarmupTime;                               // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bWarmupPosition : 1;                           // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FLightingChannelContainer                   AgentLightingChannel;                          // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableCrowdLightEnvironment : 1;              // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bCastShadows : 1;                              // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct GameFramework.GameCrowdSpawner.AgentArchetypeInfo
// 0x0008
struct FAgentArchetypeInfo
{
	class UObject*                                     AgentArchetype;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FrequencyModifier;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GameFramework.GameCrowdAgent.SingleAgentAttractor
// 0x001C
struct FSingleAgentAttractor
{
	struct FVector                                     m_AttractionPoint;                             // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              m_fNullZoneRadiusSq;                           // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fAttractionStrength;                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              m_fAttractionDuration;                         // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              m_fAttractionTimeRemaining;                    // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct GameFramework.GameCrowdPopulationManager.GameCrowdAttractor
// 0x0020
struct FGameCrowdAttractor
{
	int32_t                                            m_ID;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fAttractionStrength;                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fSquaredRadius;                              // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bFalloff : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bEnabled : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            m_AttractionGroup;                             // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_vLocation;                                   // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct GameFramework.GameTypes.TakeHitInfo
// 0x0038
struct FTakeHitInfo
{
	struct FVector                                     HitLocation;                                   // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Momentum;                                      // 0x000C (0x000C) [0x0000000000000000]               
	class UDamageType*                                 DamageType;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	class APawn*                                       InstigatedBy;                                  // 0x001C (0x0004) [0x0000000000000000]               
	uint8_t                                            HitBoneIndex;                                  // 0x0020 (0x0001) [0x0000000000000000]               
	class UPhysicalMaterial*                           PhysicalMaterial;                              // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              Damage;                                        // 0x0028 (0x0004) [0x0000000000000000]               
	struct FVector                                     RadialDamageOrigin;                            // 0x002C (0x000C) [0x0000000000000000]               
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilParams
// 0x0004
struct FRecoilParams
{
	uint8_t                                            X;                                             // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Y;                                             // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Z;                                             // 0x0002 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            Padding;                                       // 0x0003 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilDef
// 0x0070
struct FRecoilDef
{
	float                                              TimeToGo;                                      // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              TimeDuration;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RotAmplitude;                                  // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RotFrequency;                                  // 0x0014 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RotSinOffset;                                  // 0x0020 (0x000C) [0x0000000000000000]               
	struct FRecoilParams                               RotParams;                                     // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    RotOffset;                                     // 0x0030 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LocAmplitude;                                  // 0x003C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LocFrequency;                                  // 0x0048 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LocSinOffset;                                  // 0x0054 (0x000C) [0x0000000000000000]               
	struct FRecoilParams                               LocParams;                                     // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LocOffset;                                     // 0x0064 (0x000C) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct GameFramework.GameThirdPersonCamera.PenetrationAvoidanceFeeler
// 0x0028
struct FPenetrationAvoidanceFeeler
{
	struct FRotator                                    AdjustmentRot;                                 // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              WorldWeight;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PawnWeight;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Extent;                                        // 0x0014 (0x000C) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TraceInterval;                                 // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FramesUntilNextTrace;                          // 0x0024 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct GameFramework.GameThirdPersonCamera.CamFocusPointParams
// 0x0034
struct FCamFocusPointParams
{
	class AActor*                                      FocusActor;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        FocusBoneName;                                 // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     FocusWorldLoc;                                 // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              CameraFOV;                                     // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   InterpSpeedRange;                              // 0x001C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   InFocusFOV;                                    // 0x0024 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bAlwaysFocus : 1;                              // 0x002C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAdjustCamera : 1;                             // 0x002C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bIgnoreTrace : 1;                              // 0x002C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              FocusPitchOffsetDeg;                           // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GameFramework.GameThirdPersonCameraMode.ViewOffsetData
// 0x0024
struct FViewOffsetData
{
	struct FVector                                     OffsetHigh;                                    // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     OffsetMid;                                     // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     OffsetLow;                                     // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct GameFramework.SeqAct_ModifyProperty.PropertyInfo
// 0x0018
struct FPropertyInfo
{
	class FName                                        PropertyName;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bModifyProperty : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class FString                                      PropertyValue;                                 // 0x000C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


