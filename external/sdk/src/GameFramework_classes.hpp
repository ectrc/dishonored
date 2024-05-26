/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: GameFramework_classes.hpp
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

#define CONST_LOADING_MOVIE                                         "LoadingMovie"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
enum class ERecoilStart : uint8_t
{
	ERS_Zero                                           = 0,
	ERS_Random                                         = 1,
	ERS_END                                            = 2
};

// Enum GameFramework.GameThirdPersonCameraMode.ECameraViewportTypes
enum class ECameraViewportTypes : uint8_t
{
	CVT_16to9_Full                                     = 0,
	CVT_16to9_VertSplit                                = 1,
	CVT_16to9_HorizSplit                               = 2,
	CVT_4to3_Full                                      = 3,
	CVT_4to3_HorizSplit                                = 4,
	CVT_4to3_VertSplit                                 = 5,
	CVT_END                                            = 6
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GameFramework.DynamicSpriteComponent
// 0x0040 (0x01E0 - 0x0220)
class UDynamicSpriteComponent : public USpriteComponent
{
public:
	struct FInterpCurveFloat                           AnimatedScale;                                 // 0x01E0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FInterpCurveLinearColor                     AnimatedColor;                                 // 0x01F0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FInterpCurveVector2D                        AnimatedPosition;                              // 0x0200 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector                                     LocationOffset;                                // 0x0210 (0x000C) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            LoopCount;                                     // 0x021C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.DynamicSpriteComponent");
		}

		return uClassPointer;
	};

};

// Class GameFramework.FrameworkGame
// 0x000C (0x03CC - 0x03D8)
class AFrameworkGame : public AGameInfo
{
public:
	class TArray<struct FRequiredMobileInputConfig>    RequiredMobileInputConfigs;                    // 0x03CC (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.FrameworkGame");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameCameraBlockingVolume
// 0x0000 (0x0278 - 0x0278)
class AGameCameraBlockingVolume : public ABlockingVolume
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCameraBlockingVolume");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameCrowd_ListOfAgents
// 0x000C (0x0038 - 0x0044)
class UGameCrowd_ListOfAgents : public UObject
{
public:
	class TArray<struct FAgentArchetypeInfo>           ListOfAgents;                                  // 0x0038 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowd_ListOfAgents");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameCrowdAgent
// 0x017C (0x024C - 0x03C8)
class AGameCrowdAgent : public ACrowdAgentBase
{
public:
	struct FPointer                                    VfTable_IArkHealthInterface;                   // 0x024C (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class AGameCrowdDestination*                       CurrentDestination;                            // 0x0250 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bCurrentDestinationReached : 1;                // 0x0254 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bUniformScale : 1;                             // 0x0254 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           m_bWFLastTestLocIsValid : 1;                   // 0x0254 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bIntermediatePointReachable : 1;               // 0x0254 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bIntermediatePointWasDestination : 1;          // 0x0254 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           bAllowPitching : 1;                            // 0x0254 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bSimulateThisTick : 1;                         // 0x0254 (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	uint32_t                                           bClampMovementSpeed : 1;                       // 0x0254 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bPreferVisibleDestination : 1;                 // 0x0254 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           bPreferVisibleDestinationOnSpawn : 1;          // 0x0254 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bIsInSpawnPool : 1;                            // 0x0254 (0x0004) [0x0000000000002000] [0x00000400] (CPF_Transient)
	uint32_t                                           m_bInhibitRepulsors : 1;                       // 0x0254 (0x0004) [0x0000000000002000] [0x00000800] (CPF_Transient)
	class AGameCrowdDestination*                       PreviousDestination;                           // 0x0258 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_CrowdForce;                                  // 0x025C (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_PathForce;                                   // 0x0268 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_AttractorForce;                              // 0x0274 (0x000C) [0x0000000000002000] (CPF_Transient)
	int32_t                                            Health;                                        // 0x0280 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DeadBodyDuration;                              // 0x0284 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DeadBodyLifeSpan;                              // 0x0288 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              AwareRadius;                                   // 0x028C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AvoidOtherStrength;                            // 0x0290 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AvoidPlayerStrength;                           // 0x0294 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_AvoidOtherRadiusMin;                         // 0x0298 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_AvoidOtherRadiusMax;                         // 0x029C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_AvoidOtherRadius;                            // 0x02A0 (0x0004) [0x0000000000000000]               
	float                                              MatchVelStrength;                              // 0x02A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FollowPathStrength;                            // 0x02A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VelocityDamping;                               // 0x02AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VelocitySlowdown;                              // 0x02B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RotateToTargetSpeed;                           // 0x02B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxRotationSpeed;                           // 0x02B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRotationAcceleration;                       // 0x02BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fCurrentRotationSpeed;                       // 0x02C0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fMinMovementVelocity;                        // 0x02C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_AttractionGroups;                            // 0x02C8 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_ActiveAttractionGroups;                      // 0x02CC (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     OldVelocity;                                   // 0x02D0 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     TotalForce;                                    // 0x02DC (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_WFLastTestLoc;                               // 0x02E8 (0x000C) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_WallForceCoolDown;                           // 0x02F4 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     MeshMinScale3D;                                // 0x02F8 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     MeshMaxScale3D;                                // 0x0304 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              PathingForcesLODDist[2];                       // 0x0310 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FlockingForcesLODDist[2];                      // 0x0318 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              GroundOffset;                                  // 0x0320 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     IntermediatePoint;                             // 0x0324 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     IntermediateDirection;                         // 0x0330 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastIntermediatePointReachable;                // 0x033C (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     SearchExtent;                                  // 0x0348 (0x000C) [0x0000000000002000] (CPF_Transient)
	class UNavigationHandle*                           NavigationHandleClass;                         // 0x0354 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UNavigationHandle*                           NavigationHandle;                              // 0x0358 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              WalkableFloorZ;                                // 0x035C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastPathingAttempt;                            // 0x0360 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastUpdateTime;                                // 0x0364 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              NotVisibleLifeSpan;                            // 0x0368 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NotVisibleTickScalingFactor;                   // 0x036C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AGameCrowdAgent*                             MyArchetype;                                   // 0x0370 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              MaxSpeed;                                      // 0x0374 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ForceUpdateTime;                               // 0x0378 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              ReachThreshold;                                // 0x037C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              MaxLOSLifeDistanceSq;                          // 0x0380 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGameCrowdSpawner*                           MySpawner;                                     // 0x0384 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              InitialLastRenderTime;                         // 0x0388 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FPointer                                    m_pNavPoly;                                    // 0x038C (0x0004) [0x0000000000001000] (CPF_Native)  
	float                                              m_vStuckDetectionRadius;                       // 0x0390 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fStuckDetectionDelay;                        // 0x0394 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     m_vSDLocation;                                 // 0x0398 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              m_fSDTime;                                     // 0x03A4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fMovementInhibitionTimer;                    // 0x03A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FSingleAgentAttractor                       m_FatalAttraction;                             // 0x03AC (0x001C) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdAgent");
		}

		return uClassPointer;
	};

	void OnDestroy(class USeqAct_Destroy* Action);
	void OnDestroyedByKismet();
	void TakeDamage(int32_t DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UDamageType* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	void eventFireDeathEvent();
	bool CalcCamera(float fDeltaTime, struct FVector& outOut_CamLoc, struct FRotator& outOut_CamRot, float& outOut_FOV);
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void VolumeBasedDestroy(class APhysicsVolume* PV);
	void eventOutsideWorldBounds();
	void eventFellOutOfWorld(class UDamageType* dmgType);
	void InitializeAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, float AgentWarmupTime, bool bWarmupPosition, bool bCheckWarmupVisibility);
	void PlayDeath(class AController* Killer, const struct FVector& KillMomentum, class UDamageType* DamageType, class AActor* DamageCauser);
};

// Class GameFramework.GameCrowdAgentSkeletal
// 0x002C (0x03C8 - 0x03F4)
class AGameCrowdAgentSkeletal : public AGameCrowdAgent
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                         // 0x03C8 (0x0004) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UArkAnimNodeRat*                             m_pRatAnimNode;                                // 0x03CC (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<class FName>                          IdleAnimNames;                                 // 0x03D0 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FName>                          DeathAnimNames;                                // 0x03DC (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bIsPlayingIdleAnimation : 1;                   // 0x03E8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bIsPlayingCustomAnimation : 1;                 // 0x03E8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class FName                                        LastPlayedAnimName;                            // 0x03EC (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdAgentSkeletal");
		}

		return uClassPointer;
	};

	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void PlayDeath(class AController* Killer, const struct FVector& KillMomentum, class UDamageType* DamageType, class AActor* DamageCauser);
};

// Class GameFramework.GameCrowdInteractionPoint
// 0x0008 (0x0248 - 0x0250)
class AGameCrowdInteractionPoint : public AActor
{
public:
	uint32_t                                           bIsEnabled : 1;                                // 0x0248 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UCylinderComponent*                          CylinderComponent;                             // 0x024C (0x0004) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdInteractionPoint");
		}

		return uClassPointer;
	};

	void OnToggle(class USeqAct_Toggle* Action);
	void SetEnabled(bool _bIsEnabled);
};

// Class GameFramework.GameCrowdDestination
// 0x0070 (0x0250 - 0x02C0)
class AGameCrowdDestination : public AGameCrowdInteractionPoint
{
public:
	struct FPointer                                    VfTable_IGameCrowdSpawnInterface;              // 0x0250 (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IEditorLinkSelectionInterface;         // 0x0254 (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	uint32_t                                           bKillWhenReached : 1;                          // 0x0258 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAllowAsPreviousDestination : 1;               // 0x0258 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bLastAllowableResult : 1;                      // 0x0258 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bFleeDestination : 1;                          // 0x0258 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bMustReachExactly : 1;                         // 0x0258 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bHasRestrictions : 1;                          // 0x0258 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bAllowsSpawning : 1;                           // 0x0258 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bLineSpawner : 1;                              // 0x0258 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bSpawnAtEdge : 1;                              // 0x0258 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           bSoftPerimeter : 1;                            // 0x0258 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bIsVisible : 1;                                // 0x0258 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bWillBeVisible : 1;                            // 0x0258 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bIsBeyondSpawnDistance : 1;                    // 0x0258 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bAdjacentToVisibleNode : 1;                    // 0x0258 (0x0004) [0x0000000000000000] [0x00002000] 
	class TArray<class AGameCrowdDestination*>         NextDestinations;                              // 0x025C (0x000C) [0x0000000000600001] (CPF_Edit | CPF_NeedCtorLink)
	class AGameCrowdDestinationQueuePoint*             QueueHead;                                     // 0x0268 (0x0004) [0x0000000000200001] (CPF_Edit)    
	int32_t                                            Capacity;                                      // 0x026C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Frequency;                                     // 0x0270 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CustomerCount;                                 // 0x0274 (0x0004) [0x0000000000000000]               
	class TArray<class AGameCrowdAgent*>               SupportedAgentClasses;                         // 0x0278 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UObject*>                       SupportedArchetypes;                           // 0x0284 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class AGameCrowdAgent*>               RestrictedAgentClasses;                        // 0x0290 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UObject*>                       RestrictedArchetypes;                          // 0x029C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              ExactReachTolerance;                           // 0x02A8 (0x0004) [0x0000000000000000]               
	class FName                                        InteractionTag;                                // 0x02AC (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              InteractionDelay;                              // 0x02B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpawnRadius;                                   // 0x02B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AGameCrowdAgent*                             AgentEnRoute;                                  // 0x02BC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdDestination");
		}

		return uClassPointer;
	};

	bool AllowableDestinationFor(class AGameCrowdAgent* Agent);
	void IncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent);
	void DecrementCustomerCount(class AGameCrowdAgent* DepartingAgent);
	void PickNewDestinationFor(class AGameCrowdAgent* Agent, bool bIgnoreRestrictions);
	void ReachedDestination(class AGameCrowdAgent* Agent);
	bool ReachedByAgent(class AGameCrowdAgent* Agent, const struct FVector& TestPosition, bool bTestExactly);
};

// Class GameFramework.DynamicGameCrowdDestination
// 0x0000 (0x02C0 - 0x02C0)
class ADynamicGameCrowdDestination : public AGameCrowdDestination
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.DynamicGameCrowdDestination");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameCrowdDestinationQueuePoint
// 0x0018 (0x0250 - 0x0268)
class AGameCrowdDestinationQueuePoint : public AGameCrowdInteractionPoint
{
public:
	class AGameCrowdDestinationQueuePoint*             NextQueuePosition;                             // 0x0250 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AGameCrowdInteractionPoint*                  PreviousQueuePosition;                         // 0x0254 (0x0004) [0x0000000000000000]               
	class AGameCrowdAgent*                             QueuedAgent;                                   // 0x0258 (0x0004) [0x0000000000000000]               
	class AGameCrowdDestination*                       QueueDestination;                              // 0x025C (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bClearingQueue : 1;                            // 0x0260 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPendingAdvance : 1;                           // 0x0260 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              AverageReactionTime;                           // 0x0264 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdDestinationQueuePoint");
		}

		return uClassPointer;
	};

	void ActuallyAdvance();
};

// Class GameFramework.GameCrowdForcePoint
// 0x0010 (0x0250 - 0x0260)
class AGameCrowdForcePoint : public AGameCrowdInteractionPoint
{
public:
	float                                              m_fAttractionStrenght;                         // 0x0250 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRadius;                                     // 0x0254 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bFalloff : 1;                                // 0x0258 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            m_AttractorID;                                 // 0x025C (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdForcePoint");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameCrowdPopulationManager
// 0x0058 (0x0038 - 0x0090)
class UGameCrowdPopulationManager : public UObject
{
public:
	struct FPointer                                    VfTable_IArkSettingsListenerInterface;         // 0x0038 (0x0004) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<struct FPointer>                      m_AgentSpawners;                               // 0x003C (0x000C) [0x0000000000001000] (CPF_Native)  
	class TArray<struct FGameCrowdAttractor>           m_Attractors;                                  // 0x0048 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class AGameCrowdAgent*>               m_AgentPool;                                   // 0x0054 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           m_bPoolAgentsAllUsed : 1;                      // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bAllowShadow : 1;                            // 0x0060 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              DestinationPointUpdateInterval;                // 0x0064 (0x0004) [0x0000000000000000]               
	int32_t                                            DestinationPointUpdateIndex;                   // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              PlayerPositionPredictionTime;                  // 0x006C (0x0004) [0x0000000000000000]               
	class TArray<class AGameCrowdDestination*>         DestinationPoints;                             // 0x0070 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              MaxSpawnDist;                                  // 0x007C (0x0004) [0x0000000000000000]               
	float                                              MaxSpawnDistSq;                                // 0x0080 (0x0004) [0x0000000000000000]               
	int32_t                                            ForcedLODRequiredSpawnedCount;                 // 0x0084 (0x0004) [0x0000000000000000]               
	int32_t                                            ForcedLODRequiredVisibleCount;                 // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              HeadVisibilityOffset;                          // 0x008C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdPopulationManager");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameCrowdSpawner
// 0x0094 (0x0038 - 0x00CC)
class UGameCrowdSpawner : public UObject
{
public:
	struct FGameCrowdSpawnerSettings                   Settings;                                      // 0x0038 (0x002C) [0x0000000000000001] (CPF_Edit)    
	class UGameCrowdPopulationManager*                 PopulationManager;                             // 0x0064 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FAgentArchetypeInfo>           AgentArchetypes;                               // 0x0068 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<class AActor*>                        SpawnLocs;                                     // 0x0074 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            LastSpawnLocIndex;                             // 0x0080 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<class AGameCrowdAgent*>               SpawnedList;                                   // 0x0084 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FPointer                                    m_pCustomPool;                                 // 0x0090 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint32_t                                           bSpawningActive : 1;                           // 0x0094 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bHasReducedNumberDueToSplitScreen : 1;         // 0x0094 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	int32_t                                            CurrentSpawnNum;                               // 0x0098 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            NextDestinationIndex;                          // 0x009C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Remainder;                                     // 0x00A0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              AgentFrequencySum;                             // 0x00A4 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FBoxSphereBounds                            m_Bounds;                                      // 0x00A8 (0x001C) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            m_SpawnerPriority;                             // 0x00C4 (0x0001) [0x0000000000002000] (CPF_Transient)
	class UDynamicLightEnvironmentComponent*           m_pLightEnvironment;                           // 0x00C8 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdSpawner");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameCrowdSpawnInterface
// 0x0000 (0x0038 - 0x0038)
class UGameCrowdSpawnInterface : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdSpawnInterface");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameDamageType
// 0x0038 (0x0058 - 0x0090)
class UGameDamageType : public UDamageType
{
public:
	class UMaterialInterface*                          MI_DamageOverlay;                              // 0x0058 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bEnvironmentalDamage : 1;                      // 0x005C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bHighKickDeathAnimation : 1;                   // 0x005C (0x0004) [0x0000000000004002] [0x00000002] (CPF_Const | CPF_Config)
	uint32_t                                           bForceRagdollDeath : 1;                        // 0x005C (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bSuppressImpactFX : 1;                         // 0x005C (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bSuppressBloodDecals : 1;                      // 0x005C (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	uint32_t                                           bSuppressPlayExplosiveRadialDamageEffects : 1; // 0x005C (0x0004) [0x0000000000000002] [0x00000020] (CPF_Const)
	uint32_t                                           bAllowHeadShotGib : 1;                         // 0x005C (0x0004) [0x0000000000004002] [0x00000040] (CPF_Const | CPF_Config)
	float                                              DistFromHitLocToGib;                           // 0x0060 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	struct FCanvasIcon                                 KilledByIcon;                                  // 0x0064 (0x0014) [0x0000000000000002] (CPF_Const)   
	struct FCanvasIcon                                 HeadshotIcon;                                  // 0x0078 (0x0014) [0x0000000000000002] (CPF_Const)   
	float                                              IconScale;                                     // 0x008C (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameDamageType");
		}

		return uClassPointer;
	};

	static void HandleDamageFX(class AGamePawn* DamagedPawn, struct FTakeHitInfo& outHitInfo);
	static bool ShouldHeadShotGib(class APawn* TestPawn, class APawn* Instigator);
	static bool IsScriptedDamageType();
	static bool ShouldPlayForceFeedback(class APawn* DamagedPawn);
	static void HandleDeadPlayer(class AGamePlayerController* Player);
	static void HandleKilledPawn(class APawn* KilledPawn, class APawn* Instigator);
	static void HandleDamagedPawn(class APawn* DamagedPawn, class APawn* Instigator, int32_t DamageAmt, const struct FVector& Momentum);
	static void ModifyDamage(class APawn* Victim, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FTraceHitInfo& HitInfo, int32_t& outOut_Damage, struct FVector& outOut_Momentum);
	static bool ShouldGib(class APawn* TestPawn, class APawn* Instigator);
};

// Class GameFramework.GameDestinationConnRenderingComponent
// 0x0000 (0x01C4 - 0x01C4)
class UGameDestinationConnRenderingComponent : public UPrimitiveComponent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameDestinationConnRenderingComponent");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameKActorSpawnableEffect
// 0x0000 (0x0328 - 0x0328)
class AGameKActorSpawnableEffect : public AKActor
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameKActorSpawnableEffect");
		}

		return uClassPointer;
	};

	void eventFellOutOfWorld(class UDamageType* dmgType);
	void eventPostBeginPlay();
};

// Class GameFramework.GamePawn
// 0x0004 (0x04A0 - 0x04A4)
class AGamePawn : public APawn
{
public:
	uint32_t                                           bLastHitWasHeadShot : 1;                       // 0x04A0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bRespondToExplosions : 1;                      // 0x04A0 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GamePawn");
		}

		return uClassPointer;
	};

	void ReattachMeshWithoutBeingSeen();
	void ReattachMesh();
	void eventUpdateShadowSettings(bool bInWantShadow);
};

// Class GameFramework.GamePlayerController
// 0x0008 (0x0528 - 0x0530)
class AGamePlayerController : public APlayerController
{
public:
	float                                              AgentAwareRadius;                              // 0x0528 (0x0004) [0x0000000000000000]               
	uint32_t                                           bIsWarmupPaused : 1;                           // 0x052C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GamePlayerController");
		}

		return uClassPointer;
	};

	void ClientColorFade(const struct FColor& FadeColor, uint8_t FromAlpha, uint8_t ToAlpha, float FadeTime);
	void eventWarmupPause(bool bDesiredPauseState);
	bool CanUnpauseWarmup();
	void GetCurrentMovie(class FString& outMovieName);
	void eventClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie);
	void eventClientPlayMovie(const class FString& MovieName, int32_t optionalInStartOfRenderingMovieFrame, int32_t optionalInEndOfRenderingMovieFrame);
	static void KeepPlayingLoadingMovie();
	static void ShowLoadingMovie(bool bShowMovie, bool optionalBPauseAfterHide, float optionalPauseDuration, float optionalKeepPlayingDuration, bool optionalBOverridePreviousDelays);
	void CrowdDebug(bool bEnabled);
	void CrowdToggle();
	void CrowdFocus();
	int32_t GetUIPlayerIndex();
};

// Class GameFramework.GameTypes
// 0x0000 (0x0038 - 0x0038)
class UGameTypes : public UObject
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameTypes");
		}

		return uClassPointer;
	};

};

// Class GameFramework.NavMeshGoal_OutOfViewFrom
// 0x0014 (0x004C - 0x0060)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	struct FPointer                                    GoalPoly;                                      // 0x004C (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FVector                                     OutOfViewLocation;                             // 0x0050 (0x000C) [0x0000000000000000]               
	uint32_t                                           bShowDebug : 1;                                // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.NavMeshGoal_OutOfViewFrom");
		}

		return uClassPointer;
	};

	void Recycle();
	void RecycleNative();
};

// Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations
// 0x0028 (0x004C - 0x0074)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	struct FVector                                     Location;                                      // 0x004C (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     Rotation;                                      // 0x0058 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              DistanceToCheck;                               // 0x0064 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FVector>                       LocationsToCheck;                              // 0x0068 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations");
		}

		return uClassPointer;
	};

	void Recycle();
};

// Class GameFramework.SeqAct_ControlGameMovie
// 0x0014 (0x0108 - 0x011C)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	class FString                                      MovieName;                                     // 0x0108 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            StartOfRenderingMovieFrame;                    // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EndOfRenderingMovieFrame;                      // 0x0118 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_ControlGameMovie");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqAct_GameCrowdSpawner
// 0x0004 (0x00F8 - 0x00FC)
class USeqAct_GameCrowdSpawner : public USequenceAction
{
public:
	class UGameCrowdSpawner*                           Spawner;                                       // 0x00F8 (0x0004) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_GameCrowdSpawner");
		}

		return uClassPointer;
	};

	static int32_t eventGetObjClassVersion();
};

// Class GameFramework.SeqAct_ModifyProperty
// 0x000C (0x00F8 - 0x0104)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	class TArray<struct FPropertyInfo>                 Properties;                                    // 0x00F8 (0x000C) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqAct_ModifyProperty");
		}

		return uClassPointer;
	};

};

// Class GameFramework.SeqEvent_CrowdAgentReachedDestination
// 0x0000 (0x0110 - 0x0110)
class USeqEvent_CrowdAgentReachedDestination : public USequenceEvent
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.SeqEvent_CrowdAgentReachedDestination");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x00B8 - 0x0134)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	uint32_t                                           bBoneSpaceRecoil : 1;                          // 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPlayRecoil : 1;                               // 0x00B8 (0x0004) [0x0000000000002001] [0x00000002] (CPF_Edit | CPF_Transient)
	uint32_t                                           bOldPlayRecoil : 1;                            // 0x00B8 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bApplyControl : 1;                             // 0x00B8 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	struct FRecoilDef                                  Recoil;                                        // 0x00BC (0x0070) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   Aim;                                           // 0x012C (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameSkelCtrl_Recoil");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameCameraBase
// 0x0008 (0x0038 - 0x0040)
class UGameCameraBase : public UObject
{
public:
	class AGamePlayerCamera*                           PlayerCamera;                                  // 0x0038 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           bResetCameraInterpolation : 1;                 // 0x003C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCameraBase");
		}

		return uClassPointer;
	};

	void Init();
	void eventProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& outOut_ViewRotation, struct FRotator& outOut_DeltaRot);
	void eventUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& outOutVT);
	void eventResetInterpolation();
	void eventOnBecomeInActive(class UGameCameraBase* NewCamera);
	void eventOnBecomeActive(class UGameCameraBase* OldCamera);
};

// Class GameFramework.GameThirdPersonCamera
// 0x0134 (0x0040 - 0x0174)
class UGameThirdPersonCamera : public UGameCameraBase
{
public:
	struct FVector                                     LastActualCameraOrigin;                        // 0x0040 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              WorstLocBlockedPct;                            // 0x004C (0x0004) [0x0000000000000000]               
	float                                              WorstLocPenetrationExtentScale;                // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PenetrationBlendOutTime;                       // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PenetrationBlendInTime;                        // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PenetrationBlockedPct;                         // 0x005C (0x0004) [0x0000000000000000]               
	float                                              PenetrationExtentScale;                        // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LastActualOriginOffset;                        // 0x0064 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    LastActualCameraOriginRot;                     // 0x0070 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              OriginOffsetInterpSpeed;                       // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LastViewOffset;                                // 0x0080 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              LastCamFOV;                                    // 0x008C (0x0004) [0x0000000000002000] (CPF_Transient)
	class UGameThirdPersonCameraMode*                  ThirdPersonCamDefault;                         // 0x0090 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	class UGameThirdPersonCameraMode*                  ThirdPersonCamDefaultClass;                    // 0x0094 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UGameThirdPersonCameraMode*                  CurrentCamMode;                                // 0x0098 (0x0004) [0x0000000004002001] (CPF_Edit | CPF_Transient | CPF_EditInline)
	float                                              LastHeightAdjustment;                          // 0x009C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastPitchAdjustment;                           // 0x00A0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastYawAdjustment;                             // 0x00A4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LeftoverPitchAdjustment;                       // 0x00A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Focus_BackOffStrength;                         // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Focus_StepHeightAdjustment;                    // 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Focus_MaxTries;                                // 0x00B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Focus_FastAdjustKickInTime;                    // 0x00B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastFocusChangeTime;                           // 0x00BC (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ActualFocusPointWorldLoc;                      // 0x00C0 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastFocusPointLoc;                             // 0x00CC (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FCamFocusPointParams                        FocusPoint;                                    // 0x00D8 (0x0034) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bFocusPointSet : 1;                            // 0x010C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFocusPointSuccessful : 1;                     // 0x010C (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bDoingACameraTurn : 1;                         // 0x010C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bTurnAlignTargetWhenFinished : 1;              // 0x010C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bDrawDebug : 1;                                // 0x010C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bDoingDirectLook : 1;                          // 0x010C (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	uint32_t                                           bDebugChangedCameraMode : 1;                   // 0x010C (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	float                                              TurnCurTime;                                   // 0x0110 (0x0004) [0x0000000000000000]               
	int32_t                                            TurnStartAngle;                                // 0x0114 (0x0004) [0x0000000000000000]               
	int32_t                                            TurnEndAngle;                                  // 0x0118 (0x0004) [0x0000000000000000]               
	float                                              TurnTotalTime;                                 // 0x011C (0x0004) [0x0000000000000000]               
	float                                              TurnDelay;                                     // 0x0120 (0x0004) [0x0000000000000000]               
	int32_t                                            LastPostCamTurnYaw;                            // 0x0124 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            DirectLookYaw;                                 // 0x0128 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DirectLookInterpSpeed;                         // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WorstLocInterpSpeed;                           // 0x0130 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     LastWorstLocationLocal;                        // 0x0134 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     LastPreModifierCameraLoc;                      // 0x0140 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    LastPreModifierCameraRot;                      // 0x014C (0x000C) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FPenetrationAvoidanceFeeler>   PenetrationAvoidanceFeelers;                   // 0x0158 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              OffsetAdjustmentInterpSpeed;                   // 0x0164 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     LastOffsetAdjustment;                          // 0x0168 (0x000C) [0x0000008000002000] (CPF_Transient | CPF_ProtectedWrite)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameThirdPersonCamera");
		}

		return uClassPointer;
	};

	void ResetInterpolation();
	void OnBecomeActive(class UGameCameraBase* OldCamera);
	void ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& outOut_ViewRotation, struct FRotator& outOut_DeltaRot);
	void UpdateCameraMode(class APawn* P);
	class UGameThirdPersonCameraMode* FindBestCameraMode(class APawn* P);
	void AdjustFocusPointInterpolation(const struct FRotator& Delta);
	struct FVector GetActualFocusLocation();
	void eventUpdateFocusPoint(class APawn* P);
	void ClearFocusPoint(bool optionalBLeaveCameraRotation);
	class AActor* GetFocusActor();
	void SetFocusOnActor(class AActor* FocusActor, const class FName& FocusBoneName, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float optionalCameraFOV, bool optionalBAlwaysFocus, bool optionalBAdjustCamera, bool optionalBIgnoreTrace, float optionalFocusPitchOffsetDeg);
	void SetFocusOnLoc(const struct FVector& FocusWorldLoc, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float optionalCameraFOV, bool optionalBAlwaysFocus, bool optionalBAdjustCamera, bool optionalBIgnoreTrace, float optionalFocusPitchOffsetDeg);
	void AdjustTurn(int32_t AngleOffset);
	void EndTurn();
	void BeginTurn(int32_t StartAngle, int32_t EndAngle, float TimeSec, float optionalDelaySec, bool optionalBAlignTargetWhenFinished);
	void PlayerUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& outOutVT);
	void UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& outOutVT);
	float eventGetDesiredFOV(class APawn* ViewedPawn);
	void Init();
	void Reset();
	class UGameThirdPersonCameraMode* CreateCameraMode(class UGameThirdPersonCameraMode* ModeClass);
};

// Class GameFramework.GamePlayerCamera
// 0x0070 (0x0410 - 0x0480)
class AGamePlayerCamera : public ACamera
{
public:
	class UGameCameraBase*                             ThirdPersonCam;                                // 0x0410 (0x0004) [0x0000000004002001] (CPF_Edit | CPF_Transient | CPF_EditInline)
	class UGameCameraBase*                             ThirdPersonCameraClass;                        // 0x0414 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UGameCameraBase*                             FixedCam;                                      // 0x0418 (0x0004) [0x0000000004002001] (CPF_Edit | CPF_Transient | CPF_EditInline)
	class UGameCameraBase*                             FixedCameraClass;                              // 0x041C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UGameCameraBase*                             CurrentCamera;                                 // 0x0420 (0x0004) [0x0000000004002001] (CPF_Edit | CPF_Transient | CPF_EditInline)
	uint32_t                                           bUseForcedCamFOV : 1;                          // 0x0424 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bInterpolateCamChanges : 1;                    // 0x0424 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bResetInterp : 1;                              // 0x0424 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	float                                              ForcedCamFOV;                                  // 0x0428 (0x0004) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      LastViewTarget;                                // 0x042C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              SplitScreenShakeScale;                         // 0x0430 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class AActor*                                      LastTargetBase;                                // 0x0434 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            UnknownData00[0x8];                            // 0x0438 (0x0008) MISSED OFFSET
	struct FMatrix                                     LastTargetBaseTM;                              // 0x0440 (0x0040) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GamePlayerCamera");
		}

		return uClassPointer;
	};

	float AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn);
	void ResetInterpolation();
	void SetColorScale(const struct FVector& NewColorScale);
	void DisplayDebug(class AHUD* HUD, float& outOut_YL, float& outOut_YPos);
	void eventUpdateCameraLensEffects(struct FTViewTarget& outOutVT);
	bool ShouldConstrainAspectRatio();
	void Reset();
	void PostBeginPlay();
	void CacheLastTargetBaseInfo(class AActor* TargetBase);
	class UGameCameraBase* CreateCamera(class UGameCameraBase* CameraClass);
};

// Class GameFramework.GameThirdPersonCameraMode
// 0x01EC (0x0038 - 0x0224)
class UGameThirdPersonCameraMode : public UObject
{
public:
	class UGameThirdPersonCamera*                      ThirdPersonCam;                                // 0x0038 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              FOVAngle;                                      // 0x003C (0x0004) [0x0000000000004003] (CPF_Edit | CPF_Const | CPF_Config)
	float                                              BlendTime;                                     // 0x0040 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bLockedToViewTarget : 1;                       // 0x0044 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           bDirectLook : 1;                               // 0x0044 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           bFollowTarget : 1;                             // 0x0044 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           bInterpLocation : 1;                           // 0x0044 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bUsePerAxisOriginLocInterp : 1;                // 0x0044 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bInterpRotation : 1;                           // 0x0044 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bRotInterpSpeedConstant : 1;                   // 0x0044 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bDoPredictiveAvoidance : 1;                    // 0x0044 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           bValidateWorstLoc : 1;                         // 0x0044 (0x0004) [0x0000000000000003] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           bSkipCameraCollision : 1;                      // 0x0044 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bApplyDeltaViewOffset : 1;                     // 0x0044 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           bAdjustDOF : 1;                                // 0x0044 (0x0004) [0x0000000000000003] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           bDOFUpdated : 1;                               // 0x0044 (0x0004) [0x0000000000002000] [0x00001000] (CPF_Transient)
	uint32_t                                           bInterpViewOffsetOnlyForCamTransition : 1;     // 0x0044 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	float                                              FollowingInterpSpeed_Pitch;                    // 0x0048 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FollowingInterpSpeed_Yaw;                      // 0x004C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FollowingInterpSpeed_Roll;                     // 0x0050 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              FollowingCameraVelThreshold;                   // 0x0054 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              OriginLocInterpSpeed;                          // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     PerAxisOriginLocInterpSpeed;                   // 0x005C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              OriginRotInterpSpeed;                          // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     StrafeLeftAdjustment;                          // 0x006C (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     StrafeRightAdjustment;                         // 0x0078 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StrafeOffsetScalingThreshold;                  // 0x0084 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StrafeOffsetInterpSpeedIn;                     // 0x0088 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              StrafeOffsetInterpSpeedOut;                    // 0x008C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     LastStrafeOffset;                              // 0x0090 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     RunFwdAdjustment;                              // 0x009C (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     RunBackAdjustment;                             // 0x00A8 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RunOffsetScalingThreshold;                     // 0x00B4 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RunOffsetInterpSpeedIn;                        // 0x00B8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RunOffsetInterpSpeedOut;                       // 0x00BC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     LastRunOffset;                                 // 0x00C0 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     WorstLocOffset;                                // 0x00CC (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     TargetRelativeCameraOriginOffset;              // 0x00D8 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FViewOffsetData                             ViewOffset;                                    // 0x00E4 (0x0024) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FViewOffsetData                             ViewOffset_ViewportAdjustments[6];             // 0x0108 (0x00D8) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_FalloffExponent;                           // 0x01E0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_BlurKernelSize;                            // 0x01E4 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_FocusInnerRadius;                          // 0x01E8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_MaxNearBlurAmount;                         // 0x01EC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_MaxFarBlurAmount;                          // 0x01F0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              LastDOFRadius;                                 // 0x01F4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastDOFDistance;                               // 0x01F8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              DOFDistanceInterpSpeed;                        // 0x01FC (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector                                     DOFTraceExtent;                                // 0x0200 (0x000C) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              DOF_RadiusFalloff;                             // 0x020C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector2D                                   DOF_RadiusRange;                               // 0x0210 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FVector2D                                   DOF_RadiusDistRange;                           // 0x0218 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ViewOffsetInterp;                              // 0x0220 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode");
		}

		return uClassPointer;
	};

	void SetViewOffset(struct FViewOffsetData& outNewViewOffset);
	void UpdatePostProcess(float DeltaTime, struct FTViewTarget& outVT);
	struct FVector DOFTrace(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace);
	struct FVector GetDOFFocusLoc(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace);
	void ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator& outOut_ViewRotation, struct FRotator& outOut_DeltaRot);
	bool SetFocusPoint(class APawn* ViewedPawn);
	struct FVector eventGetCameraWorstCaseLoc(class APawn* TargetPawn);
	float GetDesiredFOV(class APawn* ViewedPawn);
	struct FVector eventAdjustViewOffset(class APawn* P, const struct FVector& Offset);
	void OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode);
	void OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode);
	void Init();
};

// Class GameFramework.GameThirdPersonCameraMode_Default
// 0x000C (0x0224 - 0x0230)
class UGameThirdPersonCameraMode_Default : public UGameThirdPersonCameraMode
{
public:
	float                                              WorstLocAimingZOffset;                         // 0x0224 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bTemporaryOriginRotInterp : 1;                 // 0x0228 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              TemporaryOriginRotInterpSpeed;                 // 0x022C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameThirdPersonCameraMode_Default");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameDecal
// 0x0008 (0x02EC - 0x02F4)
class UGameDecal : public UDecalComponent
{
public:
	class UMaterialInstanceTimeVarying*                MITV_Decal;                                    // 0x02EC (0x0004) [0x0000000000002000] (CPF_Transient)
	class APawn*                                       Instigator;                                    // 0x02F0 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameDecal");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameDecalManager
// 0x0004 (0x0284 - 0x0288)
class AGameDecalManager : public ADecalManager
{
public:
	float                                              MinDecalDistanceSq;                            // 0x0284 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameDecalManager");
		}

		return uClassPointer;
	};

	class UGameDecal* SpawnDecalMinimal(float InDecalLifeSpan, float InCanSpawnDistance, struct FVector& outDecalLocation);
	bool IsTooCloseToActiveDecal(float InCanSpawnDistance, struct FVector& outDecalLocation);
};

// Class GameFramework.GameCrowdInteractionDestination
// 0x0000 (0x02C0 - 0x02C0)
class AGameCrowdInteractionDestination : public AGameCrowdDestination
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameCrowdInteractionDestination");
		}

		return uClassPointer;
	};

};

// Class GameFramework.GameFixedCamera
// 0x0004 (0x0040 - 0x0044)
class UGameFixedCamera : public UGameCameraBase
{
public:
	float                                              DefaultFOV;                                    // 0x0040 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameFixedCamera");
		}

		return uClassPointer;
	};

	void OnBecomeActive(class UGameCameraBase* OldCamera);
	void UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget& outOutVT);
};

// Class GameFramework.GameWaveForms
// 0x0010 (0x0038 - 0x0048)
class UGameWaveForms : public UObject
{
public:
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                        // 0x0038 (0x0004) [0x0000000000000000]               
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                         // 0x003C (0x0004) [0x0000000000000000]               
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                           // 0x0040 (0x0004) [0x0000000000000000]               
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                            // 0x0044 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.GameWaveForms");
		}

		return uClassPointer;
	};

};

// Class GameFramework.PMESTG_LeaveADecalBase
// 0x0004 (0x0038 - 0x003C)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	class UPhysicalMaterialPropertyBase*               PhysicalMaterialPropertyClass;                 // 0x0038 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class GameFramework.PMESTG_LeaveADecalBase");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


