/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: Engine_structs.hpp
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

// ScriptStruct Engine.Actor.TraceHitInfo
// 0x001C
struct FTraceHitInfo
{
	class UMaterial*                                   Material;                                      // 0x0000 (0x0004) [0x0000000000100000]               
	class UPhysicalMaterial*                           PhysMaterial;                                  // 0x0004 (0x0004) [0x0000000000100000]               
	int32_t                                            Item;                                          // 0x0008 (0x0004) [0x0000000000100000]               
	int32_t                                            LevelIndex;                                    // 0x000C (0x0004) [0x0000000000100000]               
	class FName                                        BoneName;                                      // 0x0010 (0x0008) [0x0000000000100000]               
	class UPrimitiveComponent*                         HitComponent;                                  // 0x0018 (0x0004) [0x0000000004180008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct Engine.Actor.ImpactInfo
// 0x0050
struct FImpactInfo
{
	class AActor*                                      HitActor;                                      // 0x0000 (0x0004) [0x0000000000100000]               
	struct FVector                                     HitLocation;                                   // 0x0004 (0x000C) [0x0000000000100000]               
	struct FVector                                     HitNormal;                                     // 0x0010 (0x000C) [0x0000000000100000]               
	struct FVector                                     RayDir;                                        // 0x001C (0x000C) [0x0000000000100000]               
	struct FVector                                     StartTrace;                                    // 0x0028 (0x000C) [0x0000000000100000]               
	struct FTraceHitInfo                               HitInfo;                                       // 0x0034 (0x001C) [0x0000000000180000] (CPF_Component)
};

// ScriptStruct Engine.Actor.RigidBodyState
// 0x0039
struct FRigidBodyState
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x4];                            // 0x000C (0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                    // 0x0010 (0x0010) [0x0000000000000000]               
	struct FVector                                     LinVel;                                        // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     AngVel;                                        // 0x002C (0x000C) [0x0000000000000000]               
	uint8_t                                            bNewData;                                      // 0x0038 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x7];                       // 0x0039 (0x0007) ADDED PADDING
};

// ScriptStruct Engine.Actor.RigidBodyContactInfo
// 0x003C
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                               // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     ContactNormal;                                 // 0x000C (0x000C) [0x0000000000000000]               
	float                                              ContactPenetration;                            // 0x0018 (0x0004) [0x0000000000000000]               
	struct FVector                                     ContactVelocity[2];                            // 0x001C (0x0018) [0x0000000000000000]               
	class UPhysicalMaterial*                           PhysMaterial[2];                               // 0x0034 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.CollisionImpactData
// 0x0024
struct FCollisionImpactData
{
	class TArray<struct FRigidBodyContactInfo>         ContactInfos;                                  // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     TotalNormalForceVector;                        // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     TotalFrictionForceVector;                      // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.PhysEffectInfo
// 0x000C
struct FPhysEffectInfo
{
	float                                              Threshold;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ReFireDelay;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             Effect;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Actor.ActorReference
// 0x0014
struct FActorReference
{
	class AActor*                                      Actor;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       Guid;                                          // 0x0004 (0x0010) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.Actor.NavReference
// 0x0014
struct FNavReference
{
	class ANavigationPoint*                            Nav;                                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       Guid;                                          // 0x0004 (0x0010) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
};

// ScriptStruct Engine.Actor.BasedPosition
// 0x0034
struct FBasedPosition
{
	class AActor*                                      Base;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Position;                                      // 0x0004 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     CachedBaseLocation;                            // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CachedBaseRotation;                            // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     CachedTransPosition;                           // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Actor.AttachmentInfos
// 0x0024
struct FAttachmentInfos
{
	struct FVector                                     RelativeOffset;                                // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    RelativeRotation;                              // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	class FName                                        BoneName;                                      // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bHardAttach : 1;                               // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bUseRelativeOffset : 1;                        // 0x0020 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseRelativeRotation : 1;                      // 0x0020 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.SequenceOp.SeqOpInputLink
// 0x0030
struct FSeqOpInputLink
{
	class FString                                      LinkDesc;                                      // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasImpulse : 1;                               // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            QueuedActivations;                             // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           bDisabled : 1;                                 // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisabledPIE : 1;                              // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	class USequenceOp*                                 LinkedOp;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ActivateDelay;                                 // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           bMoving : 1;                                   // 0x0028 (0x0004) [0x0000000800002000] [0x00000001] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x0028 (0x0004) [0x0000000800000000] [0x00000002] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x0028 (0x0004) [0x0000000800000000] [0x00000004] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x002C (0x0004) [0x0000000800000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.Actor.TimerData
// 0x001C
struct FTimerData
{
	uint32_t                                           bLoop : 1;                                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bPaused : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	class FName                                        FuncName;                                      // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              Rate;                                          // 0x000C (0x0004) [0x0000000000000000]               
	float                                              Count;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              TimerTimeDilation;                             // 0x0014 (0x0004) [0x0000000000000000]               
	class UObject*                                     TimerObj;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PrimitiveComponent.DisPrimTraceMask
// 0x0004
struct FDisPrimTraceMask
{
	uint32_t                                           m_bTraceForMove_NonPawn : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bTraceForMove_NonPlayerPawn : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           m_bTraceForMove_Player : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           m_bTraceForGameplay_Crosshair : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           m_bTraceForGameplay_Projectile : 1;            // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           m_bTraceForGameplay_Melee : 1;                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           m_bTraceForGameplay_VisionLOS : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
};

// ScriptStruct Engine.PrimitiveComponent.RBCollisionChannelContainer
// 0x0004
struct FRBCollisionChannelContainer
{
	uint32_t                                           Default : 1;                                   // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           Nothing : 1;                                   // 0x0000 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           Pawn : 1;                                      // 0x0000 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           Vehicle : 1;                                   // 0x0000 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           Water : 1;                                     // 0x0000 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           GameplayPhysics : 1;                           // 0x0000 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           EffectPhysics : 1;                             // 0x0000 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           Untitled1 : 1;                                 // 0x0000 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           Untitled2 : 1;                                 // 0x0000 (0x0004) [0x0000000000000003] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           SeveredLimbs : 1;                              // 0x0000 (0x0004) [0x0000000000000003] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           Player : 1;                                    // 0x0000 (0x0004) [0x0000000000000003] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           Cloth : 1;                                     // 0x0000 (0x0004) [0x0000000000000003] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           FluidDrain : 1;                                // 0x0000 (0x0004) [0x0000000000000003] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           SoftBody : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           FracturedMeshPart : 1;                         // 0x0000 (0x0004) [0x0000000000000003] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           BlockingVolume : 1;                            // 0x0000 (0x0004) [0x0000000000000003] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           DeadPawn : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           Clothing : 1;                                  // 0x0000 (0x0004) [0x0000000000000003] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           ClothingCollision : 1;                         // 0x0000 (0x0004) [0x0000000000000003] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           Crowd : 1;                                     // 0x0000 (0x0004) [0x0000000000000003] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           DisPawnChannelUsed : 1;                        // 0x0000 (0x0004) [0x0000000000022002] [0x00100000] (CPF_Const | CPF_Transient | CPF_EditConst)
	uint32_t                                           DisPawnChannel1 : 1;                           // 0x0000 (0x0004) [0x0000000000022002] [0x00200000] (CPF_Const | CPF_Transient | CPF_EditConst)
	uint32_t                                           DisPawnChannel2 : 1;                           // 0x0000 (0x0004) [0x0000000000022002] [0x00400000] (CPF_Const | CPF_Transient | CPF_EditConst)
	uint32_t                                           DisPawnChannel3 : 1;                           // 0x0000 (0x0004) [0x0000000000022002] [0x00800000] (CPF_Const | CPF_Transient | CPF_EditConst)
	uint32_t                                           DisPawnChannel4 : 1;                           // 0x0000 (0x0004) [0x0000000000022002] [0x01000000] (CPF_Const | CPF_Transient | CPF_EditConst)
	uint32_t                                           DisPawnChannel5 : 1;                           // 0x0000 (0x0004) [0x0000000000022002] [0x02000000] (CPF_Const | CPF_Transient | CPF_EditConst)
	uint32_t                                           DisPawnChannel6 : 1;                           // 0x0000 (0x0004) [0x0000000000022002] [0x04000000] (CPF_Const | CPF_Transient | CPF_EditConst)
};

// ScriptStruct Engine.PrimitiveComponent.RenderingChannelContainer
// 0x0004
struct FRenderingChannelContainer
{
	uint32_t                                           BSP : 1;                                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           Static : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           Dynamic : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           Skeletal : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           Foliage : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           Particles : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           Sprites : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           Decals : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           Group : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           Group01 : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           Group02 : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           Group03 : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           Group04 : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           Group05 : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	uint32_t                                           Group06 : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	uint32_t                                           Group07 : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	uint32_t                                           Group08 : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00010000] (CPF_Edit)
	uint32_t                                           Group09 : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00020000] (CPF_Edit)
};

// ScriptStruct Engine.LightComponent.LightingChannelContainer
// 0x0004
struct FLightingChannelContainer
{
	uint32_t                                           bInitialized : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           BSP : 1;                                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           Static : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           Dynamic : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           CompositeDynamic : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           Skybox : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           Unnamed : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           Unnamed01 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           Unnamed02 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           Unnamed03 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           Unnamed04 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           Unnamed05 : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           Cinematic : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           Cinematic01 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	uint32_t                                           Cinematic02 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	uint32_t                                           Cinematic03 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	uint32_t                                           Cinematic04 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00010000] (CPF_Edit)
	uint32_t                                           Cinematic05 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00020000] (CPF_Edit)
	uint32_t                                           Cinematic06 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00040000] (CPF_Edit)
	uint32_t                                           Cinematic07 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00080000] (CPF_Edit)
	uint32_t                                           Cinematic08 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00100000] (CPF_Edit)
	uint32_t                                           Cinematic09 : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00200000] (CPF_Edit)
	uint32_t                                           Gameplay : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00400000] (CPF_Edit)
	uint32_t                                           Gameplay01 : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x00800000] (CPF_Edit)
	uint32_t                                           Gameplay02 : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x01000000] (CPF_Edit)
	uint32_t                                           Gameplay03 : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x02000000] (CPF_Edit)
	uint32_t                                           Crowd : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x04000000] (CPF_Edit)
	uint32_t                                           m_LightProbe : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x08000000] (CPF_Edit)
	uint32_t                                           m_bOutsider : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x10000000] (CPF_Edit)
};

// ScriptStruct Engine.PrimitiveComponent.MaterialViewRelevance
// 0x0004
struct FMaterialViewRelevance
{
	uint32_t                                           bOpaque : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bTranslucent : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDistortion : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bBloomPart : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOneLayerDistortionRelevance : 1;              // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bLit : 1;                                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bUsesSceneColor : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
};

// ScriptStruct Engine.AnimSequence.CompressedTrack
// 0x0030
struct FCompressedTrack
{
	class TArray<uint8_t>                              ByteStream;                                    // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Mins[3];                                       // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              Ranges[3];                                     // 0x0024 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimSequence.AnimTag
// 0x0018
struct FAnimTag
{
	class FString                                      Tag;                                           // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Contains;                                      // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.CurveTrack
// 0x0014
struct FCurveTrack
{
	class FName                                        CurveName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class TArray<float>                                CurveWeights;                                  // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.RotationTrack
// 0x0018
struct FRotationTrack
{
	class TArray<struct FQuat>                         RotKeys;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.TranslationTrack
// 0x0018
struct FTranslationTrack
{
	class TArray<struct FVector>                       PosKeys;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<float>                                Times;                                         // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSequence.TimeModifier
// 0x0008
struct FTimeModifier
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetStrength;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.SkelControlModifier
// 0x0014
struct FSkelControlModifier
{
	class FName                                        SkelControlName;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FTimeModifier>                 Modifiers;                                     // 0x0008 (0x000C) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.AnimSequence.AnimNotifyEvent
// 0x0018
struct FAnimNotifyEvent
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAnimNotify*                                 Notify;                                        // 0x0004 (0x0004) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class FName                                        Comment;                                       // 0x0008 (0x0008) [0x0000000800000001] (CPF_Edit | CPF_EditorOnly)
	float                                              Duration;                                      // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              m_fRange;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimSequence.RawAnimSequenceTrack
// 0x0018
struct FRawAnimSequenceTrack
{
	class TArray<struct FVector>                       PosKeys;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FQuat>                         RotKeys;                                       // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimationCompressionAlgorithm_EdgeAnim.EdgeAnimGenerationParameters
// 0x0018
struct FEdgeAnimGenerationParameters
{
	float                                              m_fRotationOptimizationTolerance;              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_RotationCompression;                         // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRotationCompressionTolerance;               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fTranslationOptimizationTolerance;           // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_TranslationCompression;                      // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fTranslationCompressionTolerance;            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeBlendBase.AnimBlendChild
// 0x0048
struct FAnimBlendChild
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAnimNode*                                   Anim;                                          // 0x0008 (0x0004) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	float                                              Weight;                                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              BlendWeight;                                   // 0x0010 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int32_t                                            bHasRootMotion;                                // 0x0014 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint8_t                                            UnknownData00[0x8];                            // 0x0018 (0x0008) MISSED OFFSET
	struct FBoneAtom                                   RootMotion;                                    // 0x0020 (0x0020) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint32_t                                           bMirrorSkeleton : 1;                           // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsAdditive : 1;                               // 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bIsAnimSeq : 1;                              // 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            DrawY;                                         // 0x0044 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	uint8_t                                            MinStructAlignment[0x8];                       // 0x0048 (0x0008) ADDED PADDING
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightNodeRule
// 0x0018
struct FWeightNodeRule
{
	class FName                                        NodeName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAnimNodeBlendBase*                          CachedNode;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class UAnimNodeSlot*                               CachedSlotNode;                                // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            WeightCheck;                                   // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ChildIndex;                                    // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.WeightRule
// 0x0030
struct FWeightRule
{
	struct FWeightNodeRule                             FirstNode;                                     // 0x0000 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FWeightNodeRule                             SecondNode;                                    // 0x0018 (0x0018) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.BranchInfo
// 0x000C
struct FBranchInfo
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PerBoneWeightIncrease;                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNode_MultiBlendPerBone.PerBoneMaskInfo
// 0x0040
struct FPerBoneMaskInfo
{
	class TArray<struct FBranchInfo>                   BranchList;                                    // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              DesiredWeight;                                 // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTimeToGo;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FWeightRule>                   WeightRuleList;                                // 0x0014 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bWeightBasedOnNodeRules : 1;                   // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDisableForNonLocalHumanPlayers : 1;           // 0x0020 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bPendingBlend : 1;                             // 0x0020 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	class TArray<float>                                PerBoneWeights;                                // 0x0024 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class TArray<uint8_t>                              TransformReqBone;                              // 0x0030 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            TransformReqBoneIndex;                         // 0x003C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeAimOffset.AimTransform
// 0x001C
struct FAimTransform
{
	struct FQuat                                       Quaternion;                                    // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Translation;                                   // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x4];                       // 0x001C (0x0004) ADDED PADDING
};

// ScriptStruct Engine.AnimNodeAimOffset.AimComponent
// 0x0130
struct FAimComponent
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            UnknownData00[0x8];                            // 0x0008 (0x0008) MISSED OFFSET
	struct FAimTransform                               LU;                                            // 0x0010 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               LC;                                            // 0x0030 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               LD;                                            // 0x0050 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               CU;                                            // 0x0070 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               CC;                                            // 0x0090 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               CD;                                            // 0x00B0 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               RU;                                            // 0x00D0 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               RC;                                            // 0x00F0 (0x0020) [0x0000000000000001] (CPF_Edit)    
	struct FAimTransform                               RD;                                            // 0x0110 (0x0020) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeAimOffset.AimOffsetProfile
// 0x006C
struct FAimOffsetProfile
{
	class FName                                        ProfileName;                                   // 0x0000 (0x0008) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	struct FVector2D                                   HorizontalRange;                               // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   VerticalRange;                                 // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FAimComponent>                 AimComponents;                                 // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        AnimName_LU;                                   // 0x0024 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_LC;                                   // 0x002C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_LD;                                   // 0x0034 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_CU;                                   // 0x003C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_CC;                                   // 0x0044 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_CD;                                   // 0x004C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_RU;                                   // 0x0054 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_RC;                                   // 0x005C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        AnimName_RD;                                   // 0x0064 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNodeBlendMultiBone.ChildBoneBlendInfo
// 0x0030
struct FChildBoneBlendInfo
{
	class TArray<float>                                TargetPerBoneWeight;                           // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        InitTargetStartBone;                           // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              InitPerBoneIncrease;                           // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        OldStartBone;                                  // 0x0018 (0x0008) [0x0000000000000002] (CPF_Const)   
	float                                              OldBoneIncrease;                               // 0x0020 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<uint8_t>                              TargetRequiredBones;                           // 0x0024 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimNodeRandom.RandomAnimInfo
// 0x0020
struct FRandomAnimInfo
{
	float                                              Chance;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LoopCountMin;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LoopCountMax;                                  // 0x0005 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   PlayRateRange;                                 // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bStillFrame : 1;                               // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bPickAgainOnBecomeRelevant : 1;              // 0x0014 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                            LoopCount;                                     // 0x0018 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              LastPosition;                                  // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimInfo
// 0x0014
struct FAnimInfo
{
	class FName                                        AnimSeqName;                                   // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UAnimSequence*                               AnimSeq;                                       // 0x0008 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int32_t                                            AnimLinkupIndex;                               // 0x000C (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FPointer                                    m_pLocomotionState;                            // 0x0010 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSequenceBlendBase.AnimBlendInfo
// 0x0020
struct FAnimBlendInfo
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FAnimInfo                                   AnimInfo;                                      // 0x0008 (0x0014) [0x0000000000000000]               
	float                                              Weight;                                        // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.AnimNodeSynch.SynchGroup
// 0x0020
struct FSynchGroup
{
	class TArray<class UAnimNodeSequence*>             SeqNodes;                                      // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAnimNodeSequence*                           MasterNode;                                    // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	class FName                                        GroupName;                                     // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bFireSlaveNotifies : 1;                        // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              RateScale;                                     // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.SubtitleCue
// 0x0010
struct FSubtitleCue
{
	class FString                                      Text;                                          // 0x0000 (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	float                                              Time;                                          // 0x000C (0x0004) [0x0000000000008003] (CPF_Edit | CPF_Const | CPF_Localized)
};

// ScriptStruct Engine.EngineTypes.LocalizedSubtitle
// 0x0010
struct FLocalizedSubtitle
{
	class TArray<struct FSubtitleCue>                  Subtitles;                                     // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bMature : 1;                                   // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bManualWordWrap : 1;                           // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.EngineTypes.LightMapRef
// 0x0004
struct FLightMapRef
{
	struct FPointer                                    Reference;                                     // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.EngineTypes.DominantShadowInfo
// 0x00A4
struct FDominantShadowInfo
{
	struct FMatrix                                     WorldToLight;                                  // 0x0000 (0x0040) [0x0000000000000000]               
	struct FMatrix                                     LightToWorld;                                  // 0x0040 (0x0040) [0x0000000000000000]               
	struct FBox                                        LightSpaceImportanceBounds;                    // 0x0080 (0x001C) [0x0000000000000000]               
	int32_t                                            ShadowMapSizeX;                                // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            ShadowMapSizeY;                                // 0x00A0 (0x0004) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0xC];                       // 0x00A4 (0x000C) ADDED PADDING
};

// ScriptStruct Engine.EngineTypes.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingScale;                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IndirectLightingSaturation;                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ShadowExponent;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Pawn.ScalarParameterInterpStruct
// 0x0014
struct FScalarParameterInterpStruct
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ParameterValue;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InterpTime;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WarmupTime;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassPointLightSettings
// 0x0004 (0x000C - 0x0010)
struct FLightmassPointLightSettings : FLightmassLightSettings
{
	float                                              LightSourceRadius;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassDirectionalLightSettings
// 0x0004 (0x000C - 0x0010)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings
{
	float                                              LightSourceAngle;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassPrimitiveSettings
// 0x001C
struct FLightmassPrimitiveSettings
{
	uint32_t                                           bUseTwoSidedLighting : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bShadowIndirectOnly : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseEmissiveForStaticLighting : 1;             // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              EmissiveLightFalloffExponent;                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EmissiveLightExplicitInfluenceRadius;          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EmissiveBoost;                                 // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DiffuseBoost;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpecularBoost;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              FullyOccludedSamplesFraction;                  // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.EngineTypes.LightmassDebugOptions
// 0x0014
struct FLightmassDebugOptions
{
	uint32_t                                           bDebugMode : 1;                                // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bStatsEnabled : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bGatherBSPSurfacesAcrossComponents : 1;        // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	float                                              CoplanarTolerance;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseDeterministicLighting : 1;                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bUseImmediateImport : 1;                       // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bImmediateProcessMappings : 1;                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bSortMappings : 1;                             // 0x0008 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bDumpBinaryFiles : 1;                          // 0x0008 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bDebugMaterials : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bPadMappings : 1;                              // 0x0008 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bDebugPaddings : 1;                            // 0x0008 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bOnlyCalcDebugTexelMappings : 1;               // 0x0008 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           bUseRandomColors : 1;                          // 0x0008 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bColorBordersGreen : 1;                        // 0x0008 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           bColorByExecutionTime : 1;                     // 0x0008 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	float                                              ExecutionTimeDivisor;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bInitialized : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EngineTypes.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	uint32_t                                           bDistributionEnabled : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bForceContentExport : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bInitialized : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.EngineTypes.RootMotionCurve
// 0x001C
struct FRootMotionCurve
{
	class FName                                        AnimName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveVector                          Curve;                                         // 0x0008 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              MaxCurveTime;                                  // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSocketSamplePoint
// 0x0018
struct FTrailSocketSamplePoint
{
	struct FVector                                     Position;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSamplePoint
// 0x004C
struct FTrailSamplePoint
{
	float                                              RelativeTime;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     FirstEdgeSample;                               // 0x0004 (0x0018) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     SecondEdgeSample;                              // 0x001C (0x0018) [0x0000000000000000]               
	struct FTrailSocketSamplePoint                     ControlPointSample;                            // 0x0034 (0x0018) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimNotify_Trails.TrailSample
// 0x0028
struct FTrailSample
{
	float                                              RelativeTime;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     FirstEdgeSample;                               // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     SecondEdgeSample;                              // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     ControlPointSample;                            // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimSet.AnimSetMeshLinkup
// 0x000C
struct FAnimSetMeshLinkup
{
	class TArray<int32_t>                              BoneToTrackTable;                              // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimSet.AnimSet_EditorOnly
// 0x0008
struct FAnimSet_EditorOnly
{
	class FName                                        PreviewSkelMeshName;                           // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimTree.AnimGroup
// 0x0024
struct FAnimGroup
{
	class TArray<class UAnimNodeSequence*>             SeqNodes;                                      // 0x0000 (0x000C) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UAnimNodeSequence*                           SynchMaster;                                   // 0x000C (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UAnimNodeSequence*                           NotifyMaster;                                  // 0x0010 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class FName                                        GroupName;                                     // 0x0014 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              RateScale;                                     // 0x001C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              SynchPctPosition;                              // 0x0020 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.AnimTree.SkelControlListHead
// 0x0010
struct FSkelControlListHead
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	class USkelControlBase*                            ControlHead;                                   // 0x0008 (0x0004) [0x0000000004400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	int32_t                                            DrawY;                                         // 0x000C (0x0004) [0x0000000800000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.AnimTree.AnimNodeForSearch
// 0x000C
struct FAnimNodeForSearch
{
	class FName                                        m_NodeName;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	class UAnimNode*                                   m_pNode;                                       // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.AnimTree.PreviewSkelMeshStruct
// 0x000C
struct FPreviewSkelMeshStruct
{
	class FName                                        DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimTree.PreviewSocketStruct
// 0x0018
struct FPreviewSocketStruct
{
	class FName                                        DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        SocketName;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 PreviewStaticMesh;                             // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.AnimTree.PreviewAnimSetsStruct
// 0x0014
struct FPreviewAnimSetsStruct
{
	class FName                                        DisplayName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UAnimSet*>                      PreviewAnimSets;                               // 0x0008 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.AnimTree.AnimTree_EditorOnly
// 0x0088
struct FAnimTree_EditorOnly
{
	uint32_t                                           bBeingEdited : 1;                              // 0x0000 (0x0004) [0x0000000800002000] [0x00000001] (CPF_Transient | CPF_EditorOnly)
	float                                              PreviewPlayRate;                               // 0x0004 (0x0004) [0x0000000800000001] (CPF_Edit | CPF_EditorOnly)
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0008 (0x0004) [0x0000000820000000]  CPF_Deprecated | CPF_EditorOnly)
	class USkeletalMesh*                               SocketSkelMesh;                                // 0x000C (0x0004) [0x0000000820000000]  CPF_Deprecated | CPF_EditorOnly)
	class UStaticMesh*                                 SocketStaticMesh;                              // 0x0010 (0x0004) [0x0000000820000000]  CPF_Deprecated | CPF_EditorOnly)
	class FName                                        SocketName;                                    // 0x0014 (0x0008) [0x0000000820000000]  CPF_Deprecated | CPF_EditorOnly)
	class TArray<class UAnimSet*>                      PreviewAnimSets;                               // 0x001C (0x000C) [0x0000000820400000] (CPF_NeedCtorLink | CPF_Deprecated | CPF_EditorOnly)
	class TArray<struct FPreviewSkelMeshStruct>        PreviewMeshList;                               // 0x0028 (0x000C) [0x0000000800400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)
	int32_t                                            PreviewMeshIndex;                              // 0x0034 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	class TArray<struct FPreviewSocketStruct>          PreviewSocketList;                             // 0x0038 (0x000C) [0x0000000800400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)
	int32_t                                            PreviewSocketIndex;                            // 0x0044 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	class TArray<struct FPreviewAnimSetsStruct>        PreviewAnimSetList;                            // 0x0048 (0x000C) [0x0000000800400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)
	int32_t                                            PreviewAnimSetListIndex;                       // 0x0054 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	int32_t                                            PreviewAnimSetIndex;                           // 0x0058 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	struct FVector                                     PreviewCamPos;                                 // 0x005C (0x000C) [0x0000000800000000] (CPF_EditorOnly)
	struct FRotator                                    PreviewCamRot;                                 // 0x0068 (0x000C) [0x0000000800000000] (CPF_EditorOnly)
	struct FVector                                     PreviewFloorPos;                               // 0x0074 (0x000C) [0x0000000800000000] (CPF_EditorOnly)
	int32_t                                            PreviewFloorYaw;                               // 0x0080 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	class UAnimNode*                                   m_pEditorPreviewNode;                          // 0x0084 (0x0004) [0x0000000800002000] (CPF_Transient | CPF_EditorOnly)
};

// ScriptStruct Engine.ArkAnimNodeLocomotion.AnimNodeLocoAngleSlot
// 0x0008
struct FAnimNodeLocoAngleSlot
{
	int32_t                                            m_Index;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fWeight;                                     // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ArkAnimNodeLocomotion.AnimNodeLocoSpeedSlot
// 0x001C
struct FAnimNodeLocoSpeedSlot
{
	struct FAnimNodeLocoAngleSlot                      m_AngleSlots[2];                               // 0x0000 (0x0010) [0x0000000000000000]               
	int32_t                                            m_SpeedModeIdx;                                // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              m_fWeight;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bStatic : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.ArkAnimNodeLocomotion.AnimNodeLocoModifierSlot
// 0x0040
struct FAnimNodeLocoModifierSlot
{
	struct FAnimNodeLocoSpeedSlot                      m_SpeedSlots[2];                               // 0x0000 (0x0038) [0x0000000000000000]               
	int32_t                                            m_Modifier;                                    // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              m_fWeight;                                     // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ArkAnimNodeLocomotion.AnimNodeLocoChildSlot
// 0x000C
struct FAnimNodeLocoChildSlot
{
	class UAnimNodeSequence*                           m_pAnimNode;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_SpeedModeIdx;                                // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_DirIndex;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ArkAnimNodeLocomotion.AnimNodeLocoSpecificAnimProps
// 0x0024
struct FAnimNodeLocoSpecificAnimProps
{
	class FName                                        m_AnimName;                                    // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              m_fMoveAnimIn;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_fMoveAnimOut;                                // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fCutBeforeEnd;                               // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              m_fBlendDuration;                              // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bUseAnimIn : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bUseCutBeforeEnd : 1;                        // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            m_Type;                                        // 0x001C (0x0001) [0x0000000000000000]               
	int32_t                                            m_EndModifier;                                 // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ArkAnimNodeLocomotion.AnimNodeLocoFootOnGroundProps
// 0x0020
struct FAnimNodeLocoFootOnGroundProps
{
	struct FVector                                     m_WorldBodyDelta;                              // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_LocalRootFootDelta;                          // 0x000C (0x000C) [0x0000000000000000]               
	float                                              m_fPctBeforeFootOnGround;                      // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              m_fDurationBeforeFootOnGround;                 // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatMode
// 0x00E4
struct FArkCpntLookatMode
{
	class FName                                        ModeName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              Start_Torso;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              End_Head;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_HeadAndTorso_HorizontalPercentage;           // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_HeadAndTorso_VerticalPercentage;             // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bDoClampRange : 1;                           // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_ClampRightRange;                             // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_ClampLeftRange;                              // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_ClampUpRange;                                // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_ClampDownRange;                              // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_TorsoRightRange;                             // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_TorsoLeftRange;                              // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_TorsoUpRange;                                // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_TorsoDownRange;                              // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_HeadRightRange;                              // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_HeadLeftRange;                               // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_HeadUpRange;                                 // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_HeadDownRange;                               // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Base_AnimName;                                 // 0x004C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Torso_AnimName_LU;                             // 0x0054 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Torso_AnimName_LC;                             // 0x005C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Torso_AnimName_LD;                             // 0x0064 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Torso_AnimName_CU;                             // 0x006C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Torso_AnimName_CC;                             // 0x0074 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Torso_AnimName_CD;                             // 0x007C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Torso_AnimName_RU;                             // 0x0084 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Torso_AnimName_RC;                             // 0x008C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Torso_AnimName_RD;                             // 0x0094 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Head_AnimName_LU;                              // 0x009C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Head_AnimName_LC;                              // 0x00A4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Head_AnimName_LD;                              // 0x00AC (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Head_AnimName_CU;                              // 0x00B4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Head_AnimName_CC;                              // 0x00BC (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Head_AnimName_CD;                              // 0x00C4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Head_AnimName_RU;                              // 0x00CC (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Head_AnimName_RC;                              // 0x00D4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        Head_AnimName_RD;                              // 0x00DC (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatCoord
// 0x0008
struct FArkCpntLookatCoord
{
	float                                              m_fHorizontal;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fVertical;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatCenter
// 0x000C
struct FArkCpntLookatCenter
{
	uint32_t                                           m_bAbsolute : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FArkCpntLookatCoord                         m_Center;                                      // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatRange
// 0x0010
struct FArkCpntLookatRange
{
	struct FArkCpntLookatCoord                         m_fLeftDownCorner;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FArkCpntLookatCoord                         m_fRightUpCorner;                              // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatCount
// 0x0008
struct FArkCpntLookatCount
{
	int32_t                                            m_MinRepeatCount;                              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MaxRepeatCount;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatTime
// 0x0008
struct FArkCpntLookatTime
{
	float                                              m_fMinDuration;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxDuration;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatSpeed
// 0x0008
struct FArkCpntLookatSpeed
{
	float                                              m_fMinSpeed;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxSpeed;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatProcRule
// 0x003C
struct FArkCpntLookatProcRule
{
	class FName                                        m_RuleName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FArkCpntLookatCenter                        m_AngleCenter;                                 // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FArkCpntLookatRange                         m_AngleRange;                                  // 0x0014 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FArkCpntLookatCount                         m_RepeatRange;                                 // 0x0024 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FArkCpntLookatTime                          m_DurationRange;                               // 0x002C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FArkCpntLookatSpeed                         m_SpeedRange;                                  // 0x0034 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatProcSeq
// 0x0024
struct FArkCpntLookatProcSeq
{
	class FName                                        m_SequenceName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_ParentSeqIdx;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fProbability;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FArkCpntLookatTime                          m_CooldownRange;                               // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FArkCpntLookatProcRule>        m_Rules;                                       // 0x0018 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatProcPattern
// 0x001C
struct FArkCpntLookatProcPattern
{
	class FName                                        m_PatternName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxTorsoInfluence;                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxHeadInfluence;                           // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FArkCpntLookatProcSeq>         m_Sequences;                                   // 0x0010 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatProcRuleWork
// 0x0020
struct FArkCpntLookatProcRuleWork
{
	struct FArkCpntLookatCoord                         m_Target;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_RepeatCount;                                 // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   m_Center;                                      // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDuration;                                   // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fSpeed;                                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bEnabled : 1;                                // 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ArkComponentLookatConfig.ArkCpntLookatProcSeqWork
// 0x0014
struct FArkCpntLookatProcSeqWork
{
	class TArray<struct FArkCpntLookatProcRuleWork>    m_Rules;                                       // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              m_fCooldown;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bEnabled : 1;                                // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ArkAnimNodeLookAt.DynInterpFVector2D
// 0x0040
struct FDynInterpFVector2D
{
	struct FVector2D                                   m_CurrentValue;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   m_MinValue;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   m_MaxValue;                                    // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   m_CurrentSpeed;                                // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   m_MaxSpeed;                                    // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   m_TargetValue;                                 // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxStrength;                                // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFriction;                                   // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDampingDistance;                            // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fSpeedFactor;                                // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkAnimNodeRat.MoveAnimInfo
// 0x000C
struct FMoveAnimInfo
{
	class FName                                        m_AnimName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fSpeed;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkAnimNodeRat.AnimNodeRatSlot
// 0x000C
struct FAnimNodeRatSlot
{
	float                                              m_fBaseWeight;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fFinalWeight;                                // 0x0004 (0x0004) [0x0000000000000000]               
	class UAnimNodeSequence*                           m_pAnimNode;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ArkComponentLocomotionConfig.ArkCpntLocoModifierProp
// 0x0020
struct FArkCpntLocoModifierProp
{
	class FName                                        m_ModifierName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAcceleration;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDeceleration;                               // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fSpeedMultiplier;                            // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fLookAtMinAngle;                             // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fLookAtMaxAngle;                             // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fLookAtSpeedCoef;                            // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLocomotionConfig.ArkCpntLocoMoveAnimProp
// 0x0018
struct FArkCpntLocoMoveAnimProp
{
	class FName                                        m_AnimName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAnimSpeed;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FVector>                       m_FeetOnGroundLoc;                             // 0x000C (0x000C) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ArkComponentLocomotionConfig.ArkCpntLocoTurnAnimProp
// 0x0018
struct FArkCpntLocoTurnAnimProp
{
	class FName                                        m_AnimName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMoveAnimIn;                                 // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMoveAnimOut;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fCutIfMoving;                                // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fStraightDist;                               // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLocomotionConfig.ArkCpntLocoStartAnimProp
// 0x0010
struct FArkCpntLocoStartAnimProp
{
	class FName                                        m_AnimName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMoveAnimOut;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fStraightDist;                               // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLocomotionConfig.ArkCpntLocoStopAnimProp
// 0x0010
struct FArkCpntLocoStopAnimProp
{
	class FName                                        m_AnimName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMoveAnimIn;                                 // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fStraightDist;                               // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLocomotionConfig.ArkCpntLocoSpeedModeProp
// 0x0040
struct FArkCpntLocoSpeedModeProp
{
	class FName                                        m_SpeedModeName;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRotationMaxSpeed;                           // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFootOnGroundPct;                            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FArkCpntLocoMoveAnimProp>      m_MoveAnimProps;                               // 0x0010 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FArkCpntLocoTurnAnimProp>      m_TurnAnimProps;                               // 0x001C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FArkCpntLocoStartAnimProp>     m_StartAnimProps;                              // 0x0028 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FArkCpntLocoStopAnimProp>      m_StopAnimProps;                               // 0x0034 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ArkComponentLocomotionConfig.ArkCpntLocoTransitionProp
// 0x0010
struct FArkCpntLocoTransitionProp
{
	class FName                                        m_AnimName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_StartModifier;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_EndModifier;                                 // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLocomotionConfig.ArkCpntLocoFootProp
// 0x003C
struct FArkCpntLocoFootProp
{
	class FName                                        m_FootName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_FootBoneName;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_ToeBoneName;                                 // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fOnGroundPct;                                // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fZDeltaWithGround;                           // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fExtent;                                     // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fLength;                                     // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxZDeltaFront;                             // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxZDeltaBack;                              // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     m_CenterOffset;                                // 0x0030 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkComponentLocomotionConfig.ArkCpntLocoDirAndWeight
// 0x0008
struct FArkCpntLocoDirAndWeight
{
	int32_t                                            m_Index;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fWeight;                                     // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationPoint.DebugNavCost
// 0x0010
struct FDebugNavCost
{
	class FString                                      Desc;                                          // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Cost;                                          // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationPoint.NavigationOctreeObject
// 0x0031
struct FNavigationOctreeObject
{
	struct FBox                                        BoundingBox;                                   // 0x0000 (0x001C) [0x0000000000000000]               
	struct FVector                                     BoxCenter;                                     // 0x001C (0x000C) [0x0000000000000000]               
	struct FPointer                                    OctreeNode;                                    // 0x0028 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UObject*                                     Owner;                                         // 0x002C (0x0004) [0x0000000000800002] (CPF_Const | CPF_NoExport)
	uint8_t                                            OwnerType;                                     // 0x0030 (0x0001) [0x0000000000800002] (CPF_Const | CPF_NoExport)
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0031 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.Pylon.PolyReference
// 0x0018
struct FPolyReference
{
	struct FActorReference                             OwningPylon;                                   // 0x0000 (0x0014) [0x0000000000000000]               
	int32_t                                            PolyId;                                        // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ArkPpNodeAA.MlAaConfig
// 0x0010
struct FMlAaConfig
{
	struct FVector                                     m_LuminanceEquation;                           // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              m_EdgeDetectionThresold;                       // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkPpNodeAA.FxAaConfig
// 0x000D
struct FFxAaConfig
{
	struct FVector                                     m_LuminanceEquation;                           // 0x0000 (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_Luma;                                        // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x000D (0x0003) ADDED PADDING
};

// ScriptStruct Engine.ArkPpNodeBlur.BoxBlurConfig
// 0x0004
struct FBoxBlurConfig
{
	float                                              m_KernelSize;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkPpNodeBlur.MotionBlurConfig
// 0x0010
struct FMotionBlurConfig
{
	float                                              m_LengthStrength;                              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_InitialOffsetStrength;                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_PassCount;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_FullOffsetInVectorField : 1;                 // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ArkPpNodeBlur.RadialBlurConfig
// 0x000C
struct FRadialBlurConfig
{
	float                                              m_Strength;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   m_Center;                                      // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkPpSettings.ArkPpDofParameters
// 0x0010
struct FArkPpDofParameters
{
	uint32_t                                           m_bOverrideFocusDistance : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bOverrideInFocusRadius : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bOverrideFarBlurAmount : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              m_FocusDistance;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_InFocusRadius;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_FarBlurAmount;                               // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkPpSettings.ArkPpColorBalanceParameters
// 0x0034
struct FArkPpColorBalanceParameters
{
	uint32_t                                           m_bOverrideCrMgYbShadTones : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bOverrideCrMgYbMidTones : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bOverrideCrMgYbHighTones : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bOverrideOpacity : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           m_bOverridePreDesaturation : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           m_bOverridePostDesaturation : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	struct FVector                                     m_CrMgYbShadTones;                             // 0x0004 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     m_CrMgYbMidTones;                              // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     m_CrMgYbHighTones;                             // 0x001C (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              m_Opacity;                                     // 0x0028 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              m_PreDesaturation;                             // 0x002C (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              m_PostDesaturation;                            // 0x0030 (0x0004) [0x0000000200000001] (CPF_Edit | CPF_Interp)
};

// ScriptStruct Engine.ArkPpSettings.ArkPpHdrParameters
// 0x0018
struct FArkPpHdrParameters
{
	uint32_t                                           m_bOverrideExposure : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bOverrideGammaAdjustment : 1;                // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bOverrideFilmGrainNoise : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bOverrideGimpBrightness : 1;                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           m_bOverrideGimpContrast : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	float                                              m_Exposure;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_GammaAdjustment;                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_FilmGrainNoise;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_GimpBrightness;                              // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_GimpContrast;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkPpSettings.ArkUberPpParameters
// 0x0060
struct FArkUberPpParameters
{
	uint32_t                                           m_bOverrideDOFParameters : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bOverrideCBParameters : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bOverrideHDRParameters : 1;                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FArkPpDofParameters                         m_DOFParameters;                               // 0x0004 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FArkPpColorBalanceParameters                m_CBParameters;                                // 0x0014 (0x0034) [0x0000000000000001] (CPF_Edit)    
	struct FArkPpHdrParameters                         m_HDRParameters;                               // 0x0048 (0x0018) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Texture.TextureGroupContainer
// 0x0004
struct FTextureGroupContainer
{
	uint32_t                                           TEXTUREGROUP_World : 1;                        // 0x0000 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WorldNormalMap : 1;               // 0x0000 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WorldSpecular : 1;                // 0x0000 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Character : 1;                    // 0x0000 (0x0004) [0x0000000000000003] [0x00000008] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_CharacterNormalMap : 1;           // 0x0000 (0x0004) [0x0000000000000003] [0x00000010] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_CharacterSpecular : 1;            // 0x0000 (0x0004) [0x0000000000000003] [0x00000020] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Weapon : 1;                       // 0x0000 (0x0004) [0x0000000000000003] [0x00000040] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WeaponNormalMap : 1;              // 0x0000 (0x0004) [0x0000000000000003] [0x00000080] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_WeaponSpecular : 1;               // 0x0000 (0x0004) [0x0000000000000003] [0x00000100] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Vehicle : 1;                      // 0x0000 (0x0004) [0x0000000000000003] [0x00000200] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_VehicleNormalMap : 1;             // 0x0000 (0x0004) [0x0000000000000003] [0x00000400] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_VehicleSpecular : 1;              // 0x0000 (0x0004) [0x0000000000000003] [0x00000800] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Cinematic : 1;                    // 0x0000 (0x0004) [0x0000000000000003] [0x00001000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Effects : 1;                      // 0x0000 (0x0004) [0x0000000000000003] [0x00002000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_EffectsNotFiltered : 1;           // 0x0000 (0x0004) [0x0000000000000003] [0x00004000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Skybox : 1;                       // 0x0000 (0x0004) [0x0000000000000003] [0x00008000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_UI : 1;                           // 0x0000 (0x0004) [0x0000000000000003] [0x00010000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Lightmap : 1;                     // 0x0000 (0x0004) [0x0000000000000003] [0x00020000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_RenderTarget : 1;                 // 0x0000 (0x0004) [0x0000000000000003] [0x00040000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_MobileFlattened : 1;              // 0x0000 (0x0004) [0x0000000000000003] [0x00080000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ProcBuilding_Face : 1;            // 0x0000 (0x0004) [0x0000000000000003] [0x00100000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ProcBuilding_LightMap : 1;        // 0x0000 (0x0004) [0x0000000000000003] [0x00200000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Shadowmap : 1;                    // 0x0000 (0x0004) [0x0000000000000003] [0x00400000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_ColorLookupTable : 1;             // 0x0000 (0x0004) [0x0000000000000003] [0x00800000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Terrain_Heightmap : 1;            // 0x0000 (0x0004) [0x0000000000000003] [0x01000000] (CPF_Edit | CPF_Const)
	uint32_t                                           TEXTUREGROUP_Terrain_Weightmap : 1;            // 0x0000 (0x0004) [0x0000000000000003] [0x02000000] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.ArkPpNodeMaterial.AnInput
// 0x0013
struct FAnInput
{
	class UArkPpNode*                                  m_Node;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      m_Name;                                        // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            m_FilterType;                                  // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_TileU;                                       // 0x0011 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_TileV;                                       // 0x0012 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x1];                       // 0x0013 (0x0001) ADDED PADDING
};

// ScriptStruct Engine.ArkPpSettings.ArkPpBloomParameters
// 0x001C
struct FArkPpBloomParameters
{
	uint32_t                                           m_bOverrideEnable : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bOverrideColor : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bOverrideThreshold : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bOverrideScale : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           m_bEnable : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	struct FLinearColor                                m_Tint;                                        // 0x0004 (0x0010) [0x0000000200000001] (CPF_Edit | CPF_Interp)
	float                                              m_Threshold;                                   // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_Scale;                                       // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ArkPpSettings.ArkPpConfig
// 0x0084
struct FArkPpConfig
{
	uint32_t                                           m_bOverrideUberPpParameters : 1;               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FArkUberPpParameters                        m_UberPpParameters;                            // 0x0004 (0x0060) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bOverrideBloomPpParameters : 1;              // 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FArkPpBloomParameters                       m_PpBloomParameters;                           // 0x0068 (0x001C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Settings.LocalizedStringSetting
// 0x0009
struct FLocalizedStringSetting
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ValueIndex;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            AdvertisementType;                             // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.Settings.SettingsData
// 0x000C
struct FSettingsData
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Value1;                                        // 0x0004 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    Value2;                                        // 0x0008 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.Settings.SettingsProperty
// 0x0011
struct FSettingsProperty
{
	int32_t                                            PropertyId;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	struct FSettingsData                               Data;                                          // 0x0004 (0x000C) [0x0000000000000000]               
	uint8_t                                            AdvertisementType;                             // 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0011 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.Settings.StringIdToStringMapping
// 0x0010
struct FStringIdToStringMapping
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000008002] (CPF_Const | CPF_Localized)
	uint32_t                                           bIsWildcard : 1;                               // 0x000C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
};

// ScriptStruct Engine.Settings.LocalizedStringSettingMetaData
// 0x0024
struct FLocalizedStringSettingMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      ColumnHeaderText;                              // 0x000C (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<struct FStringIdToStringMapping>      ValueMappings;                                 // 0x0018 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Settings.IdToStringMapping
// 0x000C
struct FIdToStringMapping
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.Settings.SettingsPropertyPropertyMetaData
// 0x0040
struct FSettingsPropertyPropertyMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      ColumnHeaderText;                              // 0x000C (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint8_t                                            MappingType;                                   // 0x0018 (0x0001) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FIdToStringMapping>            ValueMappings;                                 // 0x001C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FSettingsData>                 PredefinedValues;                              // 0x0028 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              MinVal;                                        // 0x0034 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MaxVal;                                        // 0x0038 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              RangeIncrement;                                // 0x003C (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlinePlayerStorage.OnlineProfileSetting
// 0x0018
struct FOnlineProfileSetting
{
	uint8_t                                            Owner;                                         // 0x0000 (0x0001) [0x0000000000000000]               
	struct FSettingsProperty                           ProfileSetting;                                // 0x0004 (0x0014) [0x0000000000000000]               
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputInputLink
// 0x0008
struct FSeqOpOutputInputLink
{
	class USequenceOp*                                 LinkedOp;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            InputLinkIdx;                                  // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SequenceOp.SeqOpOutputLink
// 0x0038
struct FSeqOpOutputLink
{
	class TArray<struct FSeqOpOutputInputLink>         Links;                                         // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasImpulse : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisabled : 1;                                 // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDisabledPIE : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	class USequenceOp*                                 LinkedOp;                                      // 0x001C (0x0004) [0x0000000000000000]               
	float                                              ActivateDelay;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            DrawY;                                         // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMoving : 1;                                   // 0x0028 (0x0004) [0x0000000800002000] [0x00000002] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x0028 (0x0004) [0x0000000800000000] [0x00000004] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x0028 (0x0004) [0x0000000800000000] [0x00000008] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x002C (0x0004) [0x0000000800000000] (CPF_EditorOnly)
	float                                              PIEActivationTime;                             // 0x0030 (0x0004) [0x0000000800002000] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bIsActivated : 1;                              // 0x0034 (0x0004) [0x0000000C01002000] [0x00000001] (CPF_Transient | CPF_NonTransactional | CPF_EditorOnly)
};

// ScriptStruct Engine.SequenceOp.SeqVarLink
// 0x0048
struct FSeqVarLink
{
	class USequenceVariable*                           ExpectedType;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<class USequenceVariable*>             LinkedVariables;                               // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        LinkVar;                                       // 0x001C (0x0008) [0x0000000000000000]               
	class FName                                        PropertyName;                                  // 0x0024 (0x0008) [0x0000000000000000]               
	uint32_t                                           bWriteable : 1;                                // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSequenceNeverReadsOnlyWritesToThisVar : 1;    // 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bModifiesLinkedObject : 1;                     // 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bHidden : 1;                                   // 0x002C (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            MinVars;                                       // 0x0030 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxVars;                                       // 0x0034 (0x0004) [0x0000000000000000]               
	int32_t                                            DrawX;                                         // 0x0038 (0x0004) [0x0000000000000000]               
	class UProperty*                                   CachedProperty;                                // 0x003C (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint32_t                                           bAllowAnyType : 1;                             // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMoving : 1;                                   // 0x0040 (0x0004) [0x0000000800002000] [0x00000002] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x0040 (0x0004) [0x0000000800000000] [0x00000004] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x0040 (0x0004) [0x0000000800000000] [0x00000008] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x0044 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.SequenceOp.SeqEventLink
// 0x0028
struct FSeqEventLink
{
	class USequenceEvent*                              ExpectedType;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<class USequenceEvent*>                LinkedEvents;                                  // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      LinkDesc;                                      // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DrawX;                                         // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bMoving : 1;                                   // 0x0020 (0x0004) [0x0000000800002000] [0x00000002] (CPF_Transient | CPF_EditorOnly)
	uint32_t                                           bClampedMax : 1;                               // 0x0020 (0x0004) [0x0000000800000000] [0x00000004] (CPF_EditorOnly)
	uint32_t                                           bClampedMin : 1;                               // 0x0020 (0x0004) [0x0000000800000000] [0x00000008] (CPF_EditorOnly)
	int32_t                                            OverrideDelta;                                 // 0x0024 (0x0004) [0x0000000800000000] (CPF_EditorOnly)
};

// ScriptStruct Engine.Info.KeyValuePair
// 0x0018
struct FKeyValuePair
{
	class FString                                      Key;                                           // 0x0000 (0x000C) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Value;                                         // 0x000C (0x000C) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.PlayerResponseLine
// 0x002C
struct FPlayerResponseLine
{
	int32_t                                            PlayerNum;                                     // 0x0000 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            PlayerID;                                      // 0x0004 (0x0004) [0x0000000000100001] (CPF_Edit)    
	class FString                                      playerName;                                    // 0x0008 (0x000C) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Ping;                                          // 0x0014 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            Score;                                         // 0x0018 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            StatsID;                                       // 0x001C (0x0004) [0x0000000000100001] (CPF_Edit)    
	class TArray<struct FKeyValuePair>                 PlayerInfo;                                    // 0x0020 (0x000C) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.Info.ServerResponseLine
// 0x0060
struct FServerResponseLine
{
	int32_t                                            ServerID;                                      // 0x0000 (0x0004) [0x0000000000100001] (CPF_Edit)    
	class FString                                      IP;                                            // 0x0004 (0x000C) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0010 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            QueryPort;                                     // 0x0014 (0x0004) [0x0000000000100001] (CPF_Edit)    
	class FString                                      ServerName;                                    // 0x0018 (0x000C) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      MapName;                                       // 0x0024 (0x000C) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      GameType;                                      // 0x0030 (0x000C) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            CurrentPlayers;                                // 0x003C (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            MaxPlayers;                                    // 0x0040 (0x0004) [0x0000000000100001] (CPF_Edit)    
	int32_t                                            Ping;                                          // 0x0044 (0x0004) [0x0000000000100001] (CPF_Edit)    
	class TArray<struct FKeyValuePair>                 ServerInfo;                                    // 0x0048 (0x000C) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FPlayerResponseLine>           PlayerInfo;                                    // 0x0054 (0x000C) [0x0000000000500001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.KMeshProps.KSphereElem
// 0x0048
struct FKSphereElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Radius;                                        // 0x0040 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x0044 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x0044 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                            MinStructAlignment[0x8];                       // 0x0048 (0x0008) ADDED PADDING
};

// ScriptStruct Engine.KMeshProps.KBoxElem
// 0x0050
struct FKBoxElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              X;                                             // 0x0040 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Y;                                             // 0x0044 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Z;                                             // 0x0048 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x004C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x004C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.KMeshProps.KSphylElem
// 0x004C
struct FKSphylElem
{
	struct FMatrix                                     TM;                                            // 0x0000 (0x0040) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Radius;                                        // 0x0040 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              Length;                                        // 0x0044 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bNoRBCollision : 1;                            // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPerPolyShape : 1;                             // 0x0048 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                            MinStructAlignment[0x4];                       // 0x004C (0x0004) ADDED PADDING
};

// ScriptStruct Engine.KMeshProps.KConvexElem
// 0x0064
struct FKConvexElem
{
	class TArray<struct FVector>                       VertexData;                                    // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPlane>                        PermutedVertexData;                            // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              FaceTriData;                                   // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FVector>                       EdgeDirections;                                // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FVector>                       FaceNormalDirections;                          // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FPlane>                        FacePlaneData;                                 // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FBox                                        ElemBox;                                       // 0x0048 (0x001C) [0x0000000000000000]               
};

// ScriptStruct Engine.KMeshProps.KAggregateGeom
// 0x0038
struct FKAggregateGeom
{
	class TArray<struct FKSphereElem>                  SphereElems;                                   // 0x0000 (0x000C) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<struct FKBoxElem>                     BoxElems;                                      // 0x000C (0x000C) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<struct FKSphylElem>                   SphylElems;                                    // 0x0018 (0x000C) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<struct FKConvexElem>                  ConvexElems;                                   // 0x0024 (0x000C) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	struct FPointer                                    RenderInfo;                                    // 0x0030 (0x0004) [0x0000000401001000] (CPF_Native | CPF_NonTransactional)
	uint32_t                                           bSkipCloseAndParallelChecks : 1;               // 0x0034 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.BrushComponent.KCachedConvexData_Mirror
// 0x000C
struct FKCachedConvexData_Mirror
{
	class TArray<int32_t>                              CachedConvexElements;                          // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Brush.GeomSelection
// 0x000C
struct FGeomSelection
{
	int32_t                                            Type;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            SelectionIndex;                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Camera.TViewTarget
// 0x0028
struct FTViewTarget
{
	class AActor*                                      Target;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AController*                                 Controller;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FTPOV                                       POV;                                           // 0x0008 (0x001C) [0x0000000000000001] (CPF_Edit)    
	float                                              AspectRatio;                                   // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Camera.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BlendFunction;                                 // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendExp;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bLockOutgoing : 1;                             // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.Camera.TCameraCache
// 0x0020
struct FTCameraCache
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FTPOV                                       POV;                                           // 0x0004 (0x001C) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInterface.LightmassMaterialInterfaceSettings
// 0x0018
struct FLightmassMaterialInterfaceSettings
{
	float                                              EmissiveBoost;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DiffuseBoost;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpecularBoost;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              ExportResolutionScale;                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistanceFieldPenumbraScale;                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOverrideEmissiveBoost : 1;                    // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOverrideDiffuseBoost : 1;                     // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bOverrideSpecularBoost : 1;                    // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bOverrideExportResolutionScale : 1;            // 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bOverrideDistanceFieldPenumbraScale : 1;       // 0x0014 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct Engine.Material.MaterialInput
// 0x001C
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Mask;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            GCC64_Padding;                                 // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.ColorMaterialInput
// 0x0008 (0x001C - 0x0024)
struct FColorMaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      Constant;                                      // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.ScalarMaterialInput
// 0x0008 (0x001C - 0x0024)
struct FScalarMaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              Constant;                                      // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.VectorMaterialInput
// 0x0010 (0x001C - 0x002C)
struct FVectorMaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Constant;                                      // 0x0020 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.Material.Vector2MaterialInput
// 0x000C (0x001C - 0x0028)
struct FVector2MaterialInput : FMaterialInput
{
	uint32_t                                           UseConstant : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ConstantX;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              ConstantY;                                     // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.FontImportOptions.FontImportOptionsData
// 0x0094
struct FFontImportOptionsData
{
	class FString                                      FontName;                                      // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Height;                                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableAntialiasing : 1;                       // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bEnableBold : 1;                               // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bEnableItalic : 1;                             // 0x0010 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bEnableUnderline : 1;                          // 0x0010 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bAlphaOnly : 1;                                // 0x0010 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint8_t                                            CharacterSet;                                  // 0x0014 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      Chars;                                         // 0x0018 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      UnicodeRange;                                  // 0x0024 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      CharsFilePath;                                 // 0x0030 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      CharsFileWildcard;                             // 0x003C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bCreatePrintableOnly : 1;                      // 0x0048 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bIncludeASCIIRange : 1;                        // 0x0048 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	struct FLinearColor                                ForegroundColor;                               // 0x004C (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableDropShadow : 1;                         // 0x005C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            TexturePageWidth;                              // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TexturePageMaxHeight;                          // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            XPadding;                                      // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            YPadding;                                      // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxTop;                                  // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxBottom;                               // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxRight;                                // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExtendBoxLeft;                                 // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableLegacyMode : 1;                         // 0x0080 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            Kerning;                                       // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseDistanceFieldAlpha : 1;                    // 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            DistanceFieldScaleFactor;                      // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DistanceFieldScanRadiusScale;                  // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Font.FontCharacter
// 0x0018
struct FFontCharacter
{
	int32_t                                            StartU;                                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            StartV;                                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            USize;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            VSize;                                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            TextureIndex;                                  // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            VerticalOffset;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Texture2D.Texture2DMipMap
// 0x003C
struct FTexture2DMipMap
{
	struct FUntypedBulkData_Mirror                     Data;                                          // 0x0000 (0x0034) [0x0000000000001000] (CPF_Native)  
	int32_t                                            SizeX;                                         // 0x0034 (0x0004) [0x0000000000001000] (CPF_Native)  
	int32_t                                            SizeY;                                         // 0x0038 (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.Texture2D.TextureLinkedListMirror
// 0x000C
struct FTextureLinkedListMirror
{
	struct FPointer                                    Element;                                       // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    Next;                                          // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    PrevLink;                                      // 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.Canvas.CanvasIcon
// 0x0014
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              U;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              V;                                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              UL;                                            // 0x000C (0x0004) [0x0000000000000000]               
	float                                              VL;                                            // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	uint32_t                                           bEnableGlow : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                GlowColor;                                     // 0x0004 (0x0010) [0x0000000000000000]               
	struct FVector2D                                   GlowOuterRadius;                               // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   GlowInnerRadius;                               // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	uint32_t                                           bClipText : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bEnableShadow : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FDepthFieldGlowInfo                         GlowInfo;                                      // 0x0004 (0x0024) [0x0000000000000000]               
};

// ScriptStruct Engine.Canvas.CanvasUVTri
// 0x0030
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V0_UV;                                         // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V1_Pos;                                        // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V1_UV;                                         // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V2_Pos;                                        // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   V2_UV;                                         // 0x0028 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Canvas.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	float                                              DrawX;                                         // 0x0000 (0x0004) [0x0000000000100000]               
	float                                              DrawY;                                         // 0x0004 (0x0004) [0x0000000000100000]               
	float                                              DrawXL;                                        // 0x0008 (0x0004) [0x0000000000100000]               
	float                                              DrawYL;                                        // 0x000C (0x0004) [0x0000000000100000]               
	struct FVector2D                                   Scaling;                                       // 0x0010 (0x0008) [0x0000000000100000]               
	class UFont*                                       DrawFont;                                      // 0x0018 (0x0004) [0x0000000000100000]               
	struct FVector2D                                   SpacingAdjust;                                 // 0x001C (0x0008) [0x0000000000100000]               
	float                                              ViewportHeight;                                // 0x0024 (0x0004) [0x0000000000100000]               
};

// ScriptStruct Engine.Canvas.WrappedStringElement
// 0x0014
struct FWrappedStringElement
{
	class FString                                      Value;                                         // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FVector2D                                   LineExtent;                                    // 0x000C (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.OnlineSubsystem.UniqueNetId
// 0x0008
struct FUniqueNetId
{
	struct FQWord                                      Uid;                                           // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterface
// 0x000C
struct FNamedInterface
{
	class FName                                        InterfaceName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class UObject*                                     InterfaceObject;                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePartyMember
// 0x0038
struct FOnlinePartyMember
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      NickName;                                      // 0x0008 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                  // 0x0014 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            NatType;                                       // 0x0015 (0x0001) [0x0000000000000002] (CPF_Const)   
	int32_t                                            TitleId;                                       // 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsLocal : 1;                                  // 0x001C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bIsInPartyVoice : 1;                           // 0x001C (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bIsTalking : 1;                                // 0x001C (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bIsInGameSession : 1;                          // 0x001C (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bIsPlayingThisGame : 1;                        // 0x001C (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	struct FQWord                                      SessionId;                                     // 0x0020 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data1;                                         // 0x0028 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data2;                                         // 0x002C (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data3;                                         // 0x0030 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Data4;                                         // 0x0034 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.AchievementDetails
// 0x0038
struct FAchievementDetails
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FString                                      AchievementName;                               // 0x0004 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x0010 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      HowTo;                                         // 0x001C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class USurface*                                    Image;                                         // 0x0028 (0x0004) [0x0000000000000000]               
	uint8_t                                            MonthEarned;                                   // 0x002C (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            DayEarned;                                     // 0x002D (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            YearEarned;                                    // 0x002E (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            DayOfWeekEarned;                               // 0x002F (0x0001) [0x0000000000000002] (CPF_Const)   
	int32_t                                            GamerPoints;                                   // 0x0030 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsSecret : 1;                                 // 0x0034 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bWasAchievedOnline : 1;                        // 0x0034 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bWasAchievedOffline : 1;                       // 0x0034 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineRegistrant
// 0x0008
struct FOnlineRegistrant
{
	struct FUniqueNetId                                PlayerNetId;                                   // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.NamedSession
// 0x001C
struct FNamedSession
{
	class FName                                        SessionName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            GameState;                                     // 0x0008 (0x0001) [0x0000000000000000]               
	struct FPointer                                    SessionInfo;                                   // 0x000C (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<struct FOnlineRegistrant>             Registrants;                                   // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentMetadata
// 0x0010
struct FCommunityContentMetadata
{
	int32_t                                            ContentType;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FSettingsProperty>             MetadataItems;                                 // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.CommunityContentFile
// 0x0034
struct FCommunityContentFile
{
	int32_t                                            ContentId;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            FileId;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            ContentType;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            FileSize;                                      // 0x000C (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                Owner;                                         // 0x0010 (0x0008) [0x0000000000000000]               
	int32_t                                            DownloadCount;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              AverageRating;                                 // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            RatingCount;                                   // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            LastRatingGiven;                               // 0x0024 (0x0004) [0x0000000000000000]               
	class FString                                      LocalFilePath;                                 // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.TitleFile
// 0x001C
struct FTitleFile
{
	class FString                                      Filename;                                      // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AsyncState;                                    // 0x000C (0x0001) [0x0000000000000000]               
	class TArray<uint8_t>                              Data;                                          // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.NamedInterfaceDef
// 0x0014
struct FNamedInterfaceDef
{
	class FName                                        InterfaceName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      InterfaceClassName;                            // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriendMessage
// 0x0024
struct FOnlineFriendMessage
{
	struct FUniqueNetId                                SendingPlayerId;                               // 0x0000 (0x0008) [0x0000000000000000]               
	class FString                                      SendingPlayerNick;                             // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsFriendInvite : 1;                           // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsGameInvite : 1;                             // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bWasAccepted : 1;                              // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWasDenied : 1;                                // 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	class FString                                      Message;                                       // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.RemoteTalker
// 0x0010
struct FRemoteTalker
{
	struct FUniqueNetId                                TalkerId;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              LastNotificationTime;                          // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bWasTalking : 1;                               // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsTalking : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsRegistered : 1;                             // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.OnlineSubsystem.LocalTalker
// 0x0004
struct FLocalTalker
{
	uint32_t                                           bHasVoice : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasNetworkedVoice : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsRecognizingSpeech : 1;                      // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bWasTalking : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIsTalking : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bIsRegistered : 1;                             // 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
};

// ScriptStruct Engine.OnlineSubsystem.OnlinePlayerScore
// 0x001C
struct FOnlinePlayerScore
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            Score;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            Rank;                                          // 0x000C (0x0004) [0x0000000000000000]               
	class FString                                      playerName;                                    // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.SpeechRecognizedWord
// 0x0014
struct FSpeechRecognizedWord
{
	int32_t                                            WordId;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      WordText;                                      // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              Confidence;                                    // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.OnlineArbitrationRegistrant
// 0x000C (0x0008 - 0x0014)
struct FOnlineArbitrationRegistrant : FOnlineRegistrant
{
	struct FQWord                                      MachineId;                                     // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Trustworthiness;                               // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.OnlineSubsystem.OnlineContent
// 0x0058
struct FOnlineContent
{
	uint8_t                                            ContentType;                                   // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            UserIndex;                                     // 0x0001 (0x0001) [0x0000000000000000]               
	uint32_t                                           bIsCorrupt : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            DeviceID;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            LicenseMask;                                   // 0x000C (0x0004) [0x0000000000000000]               
	class FString                                      FriendlyName;                                  // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Filename;                                      // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ContentPath;                                   // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ContentPackages;                               // 0x0034 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ContentFiles;                                  // 0x0040 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        DLCMainFolder;                                 // 0x004C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineSubsystem.OnlineCrossTitleContent
// 0x0004 (0x0058 - 0x005C)
struct FOnlineCrossTitleContent : FOnlineContent
{
	int32_t                                            TitleId;                                       // 0x0058 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineSubsystem.OnlineFriend
// 0x0030
struct FOnlineFriend
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FQWord                                      SessionId;                                     // 0x0008 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      NickName;                                      // 0x0010 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      PresenceInfo;                                  // 0x001C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint8_t                                            FriendState;                                   // 0x0028 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bIsOnline : 1;                                 // 0x002C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bIsPlaying : 1;                                // 0x002C (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint32_t                                           bIsPlayingThisGame : 1;                        // 0x002C (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bIsJoinable : 1;                               // 0x002C (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bHasVoiceSupport : 1;                          // 0x002C (0x0004) [0x0000000000000002] [0x00000010] (CPF_Const)
	uint32_t                                           bHaveInvited : 1;                              // 0x002C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bHasInvitedYou : 1;                            // 0x002C (0x0004) [0x0000000000000002] [0x00000040] (CPF_Const)
};

// ScriptStruct Engine.OnlineSubsystem.FriendsQuery
// 0x000C
struct FFriendsQuery
{
	struct FUniqueNetId                                UniqueId;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsFriend : 1;                                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.UIRoot.TextureCoordinates
// 0x0010
struct FTextureCoordinates
{
	float                                              U;                                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              V;                                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UL;                                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VL;                                            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.UIRoot.UIRangeData
// 0x0014
struct FUIRangeData
{
	float                                              CurrentValue;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinValue;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxValue;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              NudgeValue;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIntRange : 1;                                 // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.UIRoot.UIProviderScriptFieldValue
// 0x0054
struct FUIProviderScriptFieldValue
{
	class FName                                        PropertyTag;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            PropertyType;                                  // 0x0008 (0x0001) [0x0000000000000000]               
	class FString                                      StringValue;                                   // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class USurface*                                    ImageValue;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              ArrayValue;                                    // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUIRangeData                                RangeValue;                                    // 0x0028 (0x0014) [0x0000000000000000]               
	struct FUniqueNetId                                NetIdValue;                                    // 0x003C (0x0008) [0x0000000000000000]               
	struct FTextureCoordinates                         AtlasCoordinates;                              // 0x0044 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.UIRoot.UIProviderFieldValue
// 0x0004 (0x0054 - 0x0058)
struct FUIProviderFieldValue : FUIProviderScriptFieldValue
{
	struct FPointer                                    CustomStringNode;                              // 0x0054 (0x0004) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.UIRoot.InputKeyAction
// 0x0024
struct FInputKeyAction
{
	class FName                                        InputKeyName;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            InputKeyState;                                 // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FSeqOpOutputInputLink>         TriggeredOps;                                  // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class USequenceOp*>                   ActionsToExecute;                              // 0x0018 (0x000C) [0x0000000020400000] (CPF_NeedCtorLink | CPF_Deprecated)
};

// ScriptStruct Engine.UIRoot.UIDataStoreBinding
// 0x0030
struct FUIDataStoreBinding
{
	class UUIDataStoreSubscriber*                      Subscriber_Object;                             // 0x0000 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UUIDataStoreSubscriber*                      Subscriber_Interface;                          // 0x0000 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint8_t                                            RequiredFieldType;                             // 0x0008 (0x0001) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	class FString                                      MarkupString;                                  // 0x000C (0x000C) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	int32_t                                            BindingIndex;                                  // 0x0018 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class FName                                        DataStoreName;                                 // 0x001C (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class FName                                        DataStoreField;                                // 0x0024 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UUIDataStore*                                ResolvedDataStore;                             // 0x002C (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.UIRoot.InputEventParameters
// 0x0020
struct FInputEventParameters
{
	int32_t                                            PlayerIndex;                                   // 0x0000 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	int32_t                                            ControllerId;                                  // 0x0004 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	class FName                                        InputKeyName;                                  // 0x0008 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
	uint8_t                                            EventType;                                     // 0x0010 (0x0001) [0x0000000000102002] (CPF_Const | CPF_Transient)
	float                                              InputDelta;                                    // 0x0014 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	float                                              DeltaTime;                                     // 0x0018 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	uint32_t                                           bAltPressed : 1;                               // 0x001C (0x0004) [0x0000000000102002] [0x00000001] (CPF_Const | CPF_Transient)
	uint32_t                                           bCtrlPressed : 1;                              // 0x001C (0x0004) [0x0000000000102002] [0x00000002] (CPF_Const | CPF_Transient)
	uint32_t                                           bShiftPressed : 1;                             // 0x001C (0x0004) [0x0000000000102002] [0x00000004] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.UIRoot.SubscribedInputEventParameters
// 0x0008 (0x0020 - 0x0028)
struct FSubscribedInputEventParameters : FInputEventParameters
{
	class FName                                        InputAliasName;                                // 0x0020 (0x0008) [0x0000000000102002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.UIRoot.UIAxisEmulationDefinition
// 0x0024
struct FUIAxisEmulationDefinition
{
	class FName                                        AxisInputKey;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        AdjacentAxisInputKey;                          // 0x0008 (0x0008) [0x0000000000000000]               
	uint32_t                                           bEmulateButtonPress : 1;                       // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class FName                                        InputKeyToEmulate[2];                          // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.UIRoot.RawInputKeyEventData
// 0x0009
struct FRawInputKeyEventData
{
	class FName                                        InputKeyName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            ModifierKeyFlags;                              // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.Console.AutoCompleteCommand
// 0x0018
struct FAutoCompleteCommand
{
	class FString                                      Command;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Desc;                                          // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Console.AutoCompleteNode
// 0x001C
struct FAutoCompleteNode
{
	int32_t                                            IndexChar;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              AutoCompleteListIndices;                       // 0x0004 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FPointer>                      ChildNodes;                                    // 0x0010 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.Controller.VisiblePortalInfo
// 0x0008
struct FVisiblePortalInfo
{
	class AActor*                                      Source;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	class AActor*                                      Destination;                                   // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.CullDistanceVolume.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CullDistance;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.CurveEdPresetCurve.PresetGeneratedPoint
// 0x0015
struct FPresetGeneratedPoint
{
	float                                              KeyIn;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              KeyOut;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           TangentsValid : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              TangentIn;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              TangentOut;                                    // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            IntepMode;                                     // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.DataStoreClient.PlayerDataStoreGroup
// 0x0010
struct FPlayerDataStoreGroup
{
	class ULocalPlayer*                                PlayerOwner;                                   // 0x0000 (0x0004) [0x0000000000102002] (CPF_Const | CPF_Transient)
	class TArray<class UUIDataStore*>                  DataStores;                                    // 0x0004 (0x000C) [0x0000000000502002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.PlayerController.DebugTextInfo
// 0x0038
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     SrcActorOffset;                                // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     SrcActorDesiredOffset;                         // 0x0010 (0x000C) [0x0000000000000000]               
	class FString                                      DebugText;                                     // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeRemaining;                                 // 0x0028 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Duration;                                      // 0x002C (0x0004) [0x0000000000000000]               
	struct FColor                                      TextColor;                                     // 0x0030 (0x0004) [0x0000000000000000]               
	uint32_t                                           bAbsoluteLocation : 1;                         // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.SkeletalMeshComponent.TickData
// 0x0044
struct FTickData
{
	struct FMatrix                                     ParentTransform;                               // 0x0000 (0x0040) [0x0000000000000000]               
	uint32_t                                           bNeedsUpdateTransform : 1;                     // 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLODHasChanged : 1;                            // 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bUpdateKinematics : 1;                         // 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bUpdateSkelPoseCalled : 1;                   // 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           m_bNeedUpdateTransform : 1;                    // 0x0040 (0x0004) [0x0000000000000000] [0x00000010] 
	uint8_t                                            MinStructAlignment[0xC];                       // 0x0044 (0x000C) ADDED PADDING
};

// ScriptStruct Engine.SkeletalMeshComponent.BonePair
// 0x0010
struct FBonePair
{
	class FName                                        Bones[2];                                      // 0x0000 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshComponent.SkelMeshComponentLODInfo
// 0x0018
struct FSkelMeshComponentLODInfo
{
	class TArray<uint32_t>                             HiddenMaterials;                               // 0x0000 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	uint32_t                                           bNeedsInstanceWeightUpdate : 1;                // 0x000C (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	uint32_t                                           bAlwaysUseInstanceWeights : 1;                 // 0x000C (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	uint8_t                                            InstanceWeightUsage;                           // 0x0010 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int32_t                                            InstanceWeightIdx;                             // 0x0014 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
};

// ScriptStruct Engine.SkeletalMeshComponent.Attachment
// 0x0030
struct FAttachment
{
	class UActorComponent*                             Component;                                     // 0x0000 (0x0004) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        BoneName;                                      // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RelativeLocation;                              // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    RelativeRotation;                              // 0x0018 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     RelativeScale;                                 // 0x0024 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.PlayerController.ClientAdjustment
// 0x0031
struct FClientAdjustment
{
	float                                              TimeStamp;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            newPhysics;                                    // 0x0004 (0x0001) [0x0000000000000000]               
	struct FVector                                     NewLoc;                                        // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     NewVel;                                        // 0x0014 (0x000C) [0x0000000000000000]               
	class AActor*                                      NewBase;                                       // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector                                     NewFloor;                                      // 0x0024 (0x000C) [0x0000000000000000]               
	uint8_t                                            bAckGoodMove;                                  // 0x0030 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0031 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.HUD.KismetDrawTextInfo
// 0x0028
struct FKismetDrawTextInfo
{
	class FString                                      MessageText;                                   // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UFont*                                       MessageFont;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   MessageFontScale;                              // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   MessageOffset;                                 // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      MessageColor;                                  // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MessageEndTime;                                // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.HUD.ConsoleMessage
// 0x0014
struct FConsoleMessage
{
	class FString                                      Text;                                          // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FColor                                      TextColor;                                     // 0x000C (0x0004) [0x0000000000000000]               
	float                                              MessageLife;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.HUD.HudLocalizedMessage
// 0x0040
struct FHudLocalizedMessage
{
	class ULocalMessage*                               Message;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      StringMessage;                                 // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            Switch;                                        // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              EndOfLife;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              Lifetime;                                      // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              PosY;                                          // 0x001C (0x0004) [0x0000000000000000]               
	struct FColor                                      DrawColor;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	int32_t                                            FontSize;                                      // 0x0024 (0x0004) [0x0000000000000000]               
	class UFont*                                       StringFont;                                    // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              DX;                                            // 0x002C (0x0004) [0x0000000000000000]               
	float                                              DY;                                            // 0x0030 (0x0004) [0x0000000000000000]               
	uint32_t                                           Drawn : 1;                                     // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            Count;                                         // 0x0038 (0x0004) [0x0000000000000000]               
	class UObject*                                     OptionalObject;                                // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PlayerController.InputEntry
// 0x000D
struct FInputEntry
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              Value;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              TimeDelta;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x000D (0x0003) ADDED PADDING
};

// ScriptStruct Engine.Input.KeyBind
// 0x0018
struct FKeyBind
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	class FString                                      Command;                                       // 0x0008 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           Control : 1;                                   // 0x0014 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           Shift : 1;                                     // 0x0014 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	uint32_t                                           Alt : 1;                                       // 0x0014 (0x0004) [0x0000000000004000] [0x00000004] (CPF_Config)
	uint32_t                                           m_bLMouseHeld : 1;                             // 0x0014 (0x0004) [0x0000000000004000] [0x00000008] (CPF_Config)
	uint32_t                                           m_bRMouseHeld : 1;                             // 0x0014 (0x0004) [0x0000000000004000] [0x00000010] (CPF_Config)
	uint32_t                                           bIgnoreCtrl : 1;                               // 0x0014 (0x0004) [0x0000000000004000] [0x00000020] (CPF_Config)
	uint32_t                                           bIgnoreShift : 1;                              // 0x0014 (0x0004) [0x0000000000004000] [0x00000040] (CPF_Config)
	uint32_t                                           bIgnoreAlt : 1;                                // 0x0014 (0x0004) [0x0000000000004000] [0x00000080] (CPF_Config)
	uint32_t                                           m_bIgnoreLMouse : 1;                           // 0x0014 (0x0004) [0x0000000000004000] [0x00000100] (CPF_Config)
	uint32_t                                           m_bIgnoreRMouse : 1;                           // 0x0014 (0x0004) [0x0000000000004000] [0x00000200] (CPF_Config)
};

// ScriptStruct Engine.DecalComponent.DecalReceiver
// 0x0008
struct FDecalReceiver
{
	class UPrimitiveComponent*                         Component;                                     // 0x0000 (0x0004) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FPointer                                    RenderData;                                    // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.DecalManager.ActiveDecalInfo
// 0x0008
struct FActiveDecalInfo
{
	class UDecalComponent*                             Decal;                                         // 0x0000 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              LifetimeRemaining;                             // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PhysicsVolume.CheckpointRecord
// 0x0004
struct APhysicsVolume_FCheckpointRecord
{
	uint32_t                                           bPainCausing : 1;                              // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bActive : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.DynamicBlockingVolume.CheckpointRecord
// 0x001C
struct ADynamicBlockingVolume_FCheckpointRecord
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint32_t                                           bCollideActors : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bBlockActors : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsReplication : 1;                         // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.StaticMeshComponent.StaticMeshComponentLODInfo
// 0x0020
struct FStaticMeshComponentLODInfo
{
	class TArray<class UShadowMap2D*>                  ShadowMaps;                                    // 0x0000 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class UObject*>                       ShadowVertexBuffers;                           // 0x000C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FPointer                                    LightMap;                                      // 0x0018 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    OverrideVertexColors;                          // 0x001C (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.ParticleSystemComponent.ViewParticleEmitterInstanceMotionBlurInfo
// 0x003C
struct FViewParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 EmitterInstanceMBInfoMap;                      // 0x0000 (0x003C) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleSysParam
// 0x0028
struct FParticleSysParam
{
	class FName                                        Name;                                          // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ParamType;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              Scalar;                                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Vector;                                        // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      Color;                                         // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      Actor;                                         // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          Material;                                      // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventData
// 0x0034
struct FParticleEventData
{
	int32_t                                            Type;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        EventName;                                     // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              EmitterTime;                                   // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     Location;                                      // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     Direction;                                     // 0x001C (0x000C) [0x0000000000000000]               
	struct FVector                                     Velocity;                                      // 0x0028 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventSpawnData
// 0x0000 (0x0034 - 0x0034)
struct FParticleEventSpawnData : FParticleEventData
{
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventDeathData
// 0x0004 (0x0034 - 0x0038)
struct FParticleEventDeathData : FParticleEventData
{
	float                                              ParticleTime;                                  // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventCollideData
// 0x0020 (0x0034 - 0x0054)
struct FParticleEventCollideData : FParticleEventData
{
	float                                              ParticleTime;                                  // 0x0034 (0x0004) [0x0000000000000000]               
	struct FVector                                     Normal;                                        // 0x0038 (0x000C) [0x0000000000000000]               
	float                                              Time;                                          // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            Item;                                          // 0x0048 (0x0004) [0x0000000000000000]               
	class FName                                        BoneName;                                      // 0x004C (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEventKismetData
// 0x0010 (0x0034 - 0x0044)
struct FParticleEventKismetData : FParticleEventData
{
	uint32_t                                           UsePSysCompLocation : 1;                       // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     Normal;                                        // 0x0038 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstanceMotionBlurInfo
// 0x003C
struct FParticleEmitterInstanceMotionBlurInfo
{
	struct FMap_Mirror                                 ParticleMBInfoMap;                             // 0x0000 (0x003C) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
};

// ScriptStruct Engine.ParticleSystemComponent.ParticleEmitterInstance
// 0x0000
struct FParticleEmitterInstance
{
};

// ScriptStruct Engine.Emitter.CheckpointRecord
// 0x0004
struct AEmitter_FCheckpointRecord
{
	uint32_t                                           bIsActive : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.EmitterPool.EmitterBaseInfo
// 0x0024
struct FEmitterBaseInfo
{
	class UParticleSystemComponent*                    PSC;                                           // 0x0000 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AActor*                                      Base;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     RelativeLocation;                              // 0x0008 (0x000C) [0x0000000000000000]               
	struct FRotator                                    RelativeRotation;                              // 0x0014 (0x000C) [0x0000000000000000]               
	uint32_t                                           bInheritBaseScale : 1;                         // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                            // 0x0000 (0x0004) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
	struct FColor                                      Out;                                           // 0x0004 (0x0004) [0x0000000000044000] (CPF_Config | CPF_GlobalConfig)
};

// ScriptStruct Engine.Engine.StatColorMapping
// 0x001C
struct FStatColorMapping
{
	class FString                                      StatName;                                      // 0x0000 (0x000C) [0x0000000000444000] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	class TArray<struct FStatColorMapEntry>            ColorMap;                                      // 0x000C (0x000C) [0x0000000000444000] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	uint32_t                                           DisableBlend : 1;                              // 0x0018 (0x0004) [0x0000000000044000] [0x00000001] (CPF_Config | CPF_GlobalConfig)
};

// ScriptStruct Engine.Engine.DropNoteInfo
// 0x0024
struct FDropNoteInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	class FString                                      Comment;                                       // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.EngineTypes.PrimitiveMaterialRef
// 0x0008
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                     // 0x0000 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MaterialIndex;                                 // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.EngineTypes.MaterialReferenceList
// 0x0010
struct FMaterialReferenceList
{
	class UMaterialInterface*                          TargetMaterial;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FPrimitiveMaterialRef>         AffectedMaterialRefs;                          // 0x0004 (0x000C) [0x0000020000480000] (CPF_Component | CPF_NeedCtorLink | CPF_EditHide)
};

// ScriptStruct Engine.ForceFeedbackWaveform.WaveformSample
// 0x0008
struct FWaveformSample
{
	uint8_t                                            LeftAmplitude;                                 // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            RightAmplitude;                                // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LeftFunction;                                  // 0x0002 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            RightFunction;                                 // 0x0003 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.GameEngine.LevelStreamingStatus
// 0x000C
struct FLevelStreamingStatus
{
	class FName                                        PackageName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           bShouldBeLoaded : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bShouldBeVisible : 1;                          // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.GameEngine.FullyLoadedPackagesInfo
// 0x0028
struct FFullyLoadedPackagesInfo
{
	uint8_t                                            FullyLoadType;                                 // 0x0000 (0x0001) [0x0000000000000000]               
	class FString                                      Tag;                                           // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FName>                          PackagesToLoad;                                // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UObject*>                       LoadedObjects;                                 // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameEngine.NamedNetDriver
// 0x000C
struct FNamedNetDriver
{
	class FName                                        NetDriverName;                                 // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    NetDriver;                                     // 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.GameEngine.URL
// 0x0044
struct FURL
{
	class FString                                      Protocol;                                      // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Host;                                          // 0x000C (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0018 (0x0004) [0x0000000000100000]               
	class FString                                      Map;                                           // 0x001C (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Op;                                            // 0x0028 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      Portal;                                        // 0x0034 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Valid;                                         // 0x0040 (0x0004) [0x0000000000100000]               
};

// ScriptStruct Engine.GameInfo.GameClassShortName
// 0x0018
struct FGameClassShortName
{
	class FString                                      ShortName;                                     // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      GameClassName;                                 // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameInfo.GameTypePrefix
// 0x0034
struct FGameTypePrefix
{
	class FString                                      Prefix;                                        // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bUsesCommonPackage : 1;                        // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	class FString                                      GameType;                                      // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        AdditionalGameTypes;                           // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        ForcedObjects;                                 // 0x0028 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameViewportClient.TitleSafeZoneArea
// 0x0010
struct FTitleSafeZoneArea
{
	float                                              MaxPercentX;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              MaxPercentY;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              RecommendedPercentX;                           // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RecommendedPercentY;                           // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameViewportClient.PerPlayerSplitscreenData
// 0x0010
struct FPerPlayerSplitscreenData
{
	float                                              SizeX;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              SizeY;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              OriginX;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              OriginY;                                       // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.GameViewportClient.SplitscreenData
// 0x000C
struct FSplitscreenData
{
	class TArray<struct FPerPlayerSplitscreenData>     PlayerData;                                    // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.GameViewportClient.DebugDisplayProperty
// 0x0010
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                           // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        PropertyName;                                  // 0x0004 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSpecialProperty : 1;                          // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.IniLocPatcher.IniLocFileEntry
// 0x000D
struct FIniLocFileEntry
{
	class FString                                      Filename;                                      // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ReadState;                                     // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x000D (0x0003) ADDED PADDING
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                     // 0x0000 (0x0040) [0x0000000000000000]               
	struct FVector2D                                   LightmapUVBias;                                // 0x0040 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   ShadowmapUVBias;                               // 0x0048 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.InstancedStaticMeshComponent.InstancedStaticMeshMappingInfo
// 0x0010
struct FInstancedStaticMeshMappingInfo
{
	struct FPointer                                    Mapping;                                       // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    LightMap;                                      // 0x0004 (0x0004) [0x0000000000001000] (CPF_Native)  
	class UTexture2D*                                  LightmapTexture;                               // 0x0008 (0x0004) [0x0000000000000000]               
	class UShadowMap2D*                                ShadowmapTexture;                              // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpActor.CheckpointRecord
// 0x0020
struct AInterpActor_FCheckpointRecord
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
	uint8_t                                            CollisionType;                                 // 0x0018 (0x0001) [0x0000000000000000]               
	uint32_t                                           bHidden : 1;                                   // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsShutdown : 1;                               // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bNeedsPositionReplication : 1;                 // 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdEntry
// 0x002C
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	struct FColor                                      CurveColor;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      CurveName;                                     // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            bHideCurve;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            bColorCurve;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            bFloatingPointColorCurve;                      // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            bClamp;                                        // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              ClampLow;                                      // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              ClampHigh;                                     // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpCurveEdSetup.CurveEdTab
// 0x0028
struct FCurveEdTab
{
	class FString                                      TabName;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FCurveEdEntry>                 Curves;                                        // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ViewStartInput;                                // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              ViewEndInput;                                  // 0x001C (0x0004) [0x0000000000000000]               
	float                                              ViewStartOutput;                               // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              ViewEndOutput;                                 // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpGroup.InterpEdSelKey
// 0x0010
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	class UInterpTrack*                                Track;                                         // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            KeyIndex;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              UnsnappedPosition;                             // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrack.SubTrackGroup
// 0x001C
struct FSubTrackGroup
{
	class FString                                      GroupName;                                     // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              TrackIndices;                                  // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bIsCollapsed : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bIsSelected : 1;                               // 0x0018 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
};

// ScriptStruct Engine.InterpTrack.SupportedSubTrackInfo
// 0x0014
struct FSupportedSubTrackInfo
{
	class UInterpTrack*                                SupportedClass;                                // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      SubTrackName;                                  // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            GroupIndex;                                    // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackAIControl.AIControlTrackKey
// 0x000C
struct FAIControlTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            KeyType;                                       // 0x0004 (0x0001) [0x0000000000000000]               
	class UInterpTrackAIControlKeyProperties*          Properties;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackAnimControl.AnimControlTrackKey
// 0x001C
struct FAnimControlTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        AnimSeqName;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              AnimStartOffset;                               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              AnimEndOffset;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AnimPlayRate;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLooping : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bReverse : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct Engine.InterpTrackAttachment.AttachmentControlTrackKey
// 0x0008
struct FAttachmentControlTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class UInterpTrackAttachmentKeyProperties*         Properties;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackBoolProp.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           Value : 1;                                     // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.InterpTrackDirector.DirectorTrackCut
// 0x0010
struct FDirectorTrackCut
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              TransitionTime;                                // 0x0004 (0x0004) [0x0000000000000000]               
	class FName                                        TargetCamGroup;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackEvent.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        EventName;                                     // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXTrackKey
// 0x001C
struct FFaceFXTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      FaceFXGroupName;                               // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      FaceFXSeqName;                                 // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackFaceFX.FaceFXSoundCueKey
// 0x0004
struct FFaceFXSoundCueKey
{
	class UAkEvent*                                    FaceFXAkEvent;                                 // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.InterpTrackFaceTo.FaceToControlTrackKey
// 0x000C
struct FFaceToControlTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              KeyLength;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	class UInterpTrackFaceToKeyProperties*             Properties;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackInstFloatMaterialParam.FloatMaterialParamMICData
// 0x0018
struct FFloatMaterialParamMICData
{
	class TArray<class UMaterialInstanceConstant*>     MICs;                                          // 0x0000 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<float>                                MICResetFloats;                                // 0x000C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackInstSoireeControl.SoireeControlKeyStatus
// 0x0008
struct FSoireeControlKeyStatus
{
	int32_t                                            m_InputIndex;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bIsBroken : 1;                               // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.InterpTrackToggle.ToggleTrackKey
// 0x0005
struct FToggleTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            ToggleAction;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.InterpTrackInstVectorMaterialParam.VectorMaterialParamMICData
// 0x0018
struct FVectorMaterialParamMICData
{
	class TArray<class UMaterialInstanceConstant*>     MICs;                                          // 0x0000 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FVector>                       MICResetVectors;                               // 0x000C (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackVisibility.VisibilityTrackKey
// 0x0006
struct FVisibilityTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            Action;                                        // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ActiveCondition;                               // 0x0005 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                       // 0x0006 (0x0002) ADDED PADDING
};

// ScriptStruct Engine.InterpTrackLocomotion.LocomotionControlTrackKey
// 0x000C
struct FLocomotionControlTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              KeyLength;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	class UInterpTrackLocomotionKeyProperties*         Properties;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackLookAt.LookAtControlTrackKey
// 0x0010
struct FLookAtControlTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              KeyLength;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	class UInterpGroup*                                Target;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	class UInterpTrackLookAtKeyProperties*             Properties;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	class FName                                        GroupName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.InterpTrackMove.InterpLookupTrack
// 0x000C
struct FInterpLookupTrack
{
	class TArray<struct FInterpLookupPoint>            Points;                                        // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.InterpTrackParticleReplay.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              Duration;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ClipIDNumber;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackSoireeControl.SoireeControlTrackKey
// 0x000C
struct FSoireeControlTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              KeyLength;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	class UInterpTrackSoireeControlKeyProperties*      Properties;                                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.InterpTrackStretchAnimControl.StretchAnimControlTrackKey
// 0x0038
struct FStretchAnimControlTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        AnimSeqName;                                   // 0x0004 (0x0008) [0x0000000000000000]               
	float                                              AnimStartOffset;                               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              AnimEndOffset;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              AnimPlayRate;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           bReverse : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              SoireeOffsets[6];                              // 0x001C (0x0018) [0x0000000000000000]               
	class UInterpTrackStretchAnimKeyProperties*        Properties;                                    // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.LensFlare.LensFlareElement
// 0x0140
struct FLensFlareElement
{
	class FName                                        ElementName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              RayDistance;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIsEnabled : 1;                                // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bUseSourceDistance : 1;                        // 0x000C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bNormalizeRadialDistance : 1;                  // 0x000C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bModulateColorBySource : 1;                    // 0x000C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	struct FVector                                     Size;                                          // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UMaterialInterface*>            LFMaterials;                                   // 0x001C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       LFMaterialIndex;                               // 0x0028 (0x001C) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Scaling;                                       // 0x0044 (0x001C) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      AxisScaling;                                   // 0x0060 (0x001C) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Rotation;                                      // 0x007C (0x001C) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      Color;                                         // 0x0098 (0x001C) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Alpha;                                         // 0x00B4 (0x001C) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      Offset;                                        // 0x00D0 (0x001C) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Scale;                                 // 0x00EC (0x001C) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      DistMap_Color;                                 // 0x0108 (0x001C) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       DistMap_Alpha;                                 // 0x0124 (0x001C) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LensFlare.LensFlareElementCurvePair
// 0x0010
struct FLensFlareElementCurvePair
{
	class FString                                      CurveName;                                     // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                   // 0x000C (0x0004) [0x0000000000100000]               
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementMaterials
// 0x000C
struct FLensFlareElementMaterials
{
	class TArray<class UMaterialInterface*>            ElementMaterials;                              // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.LensFlareComponent.LensFlareElementInstance
// 0x0000
struct FLensFlareElementInstance
{
};

// ScriptStruct Engine.LevelGridVolume.LevelGridCellCoordinate
// 0x000C
struct FLevelGridCellCoordinate
{
	int32_t                                            X;                                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Y;                                             // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            Z;                                             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.LevelStreamingVolume.CheckpointRecord
// 0x0004
struct ALevelStreamingVolume_FCheckpointRecord
{
	uint32_t                                           bDisabled : 1;                                 // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.LocalPlayer.SynchronizedActorVisibilityHistory
// 0x0008
struct FSynchronizedActorVisibilityHistory
{
	struct FPointer                                    State;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPointer                                    CriticalSection;                               // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialExpression.ExpressionInput
// 0x001C
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Mask;                                          // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskR;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskG;                                         // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            MaskB;                                         // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaskA;                                         // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            GCC64_Padding;                                 // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstanceConstant.FontParameterValue
// 0x0020
struct FFontParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UFont*                                       FontValue;                                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FontPage;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0010 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstanceConstant.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ParameterValue;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x000C (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstanceConstant.TextureParameterValue
// 0x001C
struct FTextureParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UTexture*                                    ParameterValue;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x000C (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstanceConstant.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	class FName                                        ParameterName;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                ParameterValue;                                // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       ExpressionGUID;                                // 0x0018 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ParameterValueOverTime
// 0x0030
struct FParameterValueOverTime
{
	struct FGuid                                       ExpressionGUID;                                // 0x0000 (0x0010) [0x0000000000000000]               
	float                                              StartTime;                                     // 0x0010 (0x0004) [0x0000000000000000]               
	class FName                                        ParameterName;                                 // 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bLoop : 1;                                     // 0x001C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bAutoActivate : 1;                             // 0x001C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              CycleTime;                                     // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bNormalizeTime : 1;                            // 0x0024 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              OffsetTime;                                    // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOffsetFromEnd : 1;                            // 0x002C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bUseRealTime : 1;                            // 0x002C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.FontParameterValueOverTime
// 0x0008 (0x0030 - 0x0038)
struct FFontParameterValueOverTime : FParameterValueOverTime
{
	class UFont*                                       FontValue;                                     // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            FontPage;                                      // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.ScalarParameterValueOverTime
// 0x0014 (0x0030 - 0x0044)
struct FScalarParameterValueOverTime : FParameterValueOverTime
{
	float                                              ParameterValue;                                // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveFloat                           ParameterValueCurve;                           // 0x0034 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.TextureParameterValueOverTime
// 0x0004 (0x0030 - 0x0034)
struct FTextureParameterValueOverTime : FParameterValueOverTime
{
	class UTexture*                                    ParameterValue;                                // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.MaterialInstanceTimeVarying.VectorParameterValueOverTime
// 0x0020 (0x0030 - 0x0050)
struct FVectorParameterValueOverTime : FParameterValueOverTime
{
	struct FLinearColor                                ParameterValue;                                // 0x0030 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveVector                          ParameterValueCurve;                           // 0x0040 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.MatineeData.RuntimeMatineeData
// 0x0028
struct FRuntimeMatineeData
{
	class TArray<class UInterpGroup*>                  InterpGroups;                                  // 0x0000 (0x000C) [0x0000000000420009] (CPF_Edit | CPF_ExportObject | CPF_EditConst | CPF_NeedCtorLink)
	float                                              InterpLength;                                  // 0x000C (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	float                                              PathBuildTime;                                 // 0x0010 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bShouldBakeAndPrune : 1;                       // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FGuid                                       m_ConversationNodeGUID;                        // 0x0018 (0x0010) [0x0000000000000000]               
};

// ScriptStruct Engine.MatineeData.EditorMatineeData
// 0x0028
struct FEditorMatineeData
{
	class UInterpCurveEdSetup*                         CurveEdSetup;                                  // 0x0000 (0x0004) [0x0000000004420009] (CPF_Edit | CPF_ExportObject | CPF_EditConst | CPF_NeedCtorLink | CPF_EditInline)
	class TArray<class UInterpFilter*>                 InterpFilters;                                 // 0x0004 (0x000C) [0x0000000800420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	class UInterpFilter*                               SelectedFilter;                                // 0x0010 (0x0004) [0x0000000800020001] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	class TArray<class UInterpFilter*>                 DefaultFilters;                                // 0x0014 (0x000C) [0x0000000800422001] (CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	float                                              EdSectionStart;                                // 0x0020 (0x0004) [0x0000000800020001] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	float                                              EdSectionEnd;                                  // 0x0024 (0x0004) [0x0000000800020001] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
};

// ScriptStruct Engine.NavigationHandle.NavMeshCheckResult
// 0x0020
struct FNavMeshCheckResult
{
	struct FVector                                     m_HitLocation;                                 // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_HitNormal;                                   // 0x000C (0x000C) [0x0000000000000000]               
	float                                              m_fHitTime;                                    // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bValid : 1;                                  // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.NavigationHandle.NavMeshPathParams
// 0x002C
struct FNavMeshPathParams
{
	struct FPointer                                    Interface;                                     // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	uint32_t                                           bCanMantle : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bNeedsMantleValidityTest : 1;                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAbleToSearch : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     SearchExtent;                                  // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     SearchStart;                                   // 0x0014 (0x000C) [0x0000000000000000]               
	float                                              MaxDropHeight;                                 // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              MinWalkableZ;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              MaxHoverDistance;                              // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationHandle.EdgePointer
// 0x0004
struct FEdgePointer
{
	struct FPointer                                    Dummy;                                         // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.NavigationHandle.PathStore
// 0x0018
struct FPathStore
{
	class TArray<struct FEdgePointer>                  EdgeList;                                      // 0x0000 (0x000C) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FVector                                     m_vComputedDestination;                        // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.NavigationHandle.PolySegmentSpan
// 0x001C
struct FPolySegmentSpan
{
	struct FPointer                                    Poly;                                          // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FVector                                     P1;                                            // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     P2;                                            // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.NavMeshPathGoalEvaluator.BiasedGoalActor
// 0x0008
struct FBiasedGoalActor
{
	class AActor*                                      Goal;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            ExtraCost;                                     // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsColumn
// 0x0010
struct FOnlineStatsColumn
{
	int32_t                                            ColumnNo;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FSettingsData                               StatValue;                                     // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.OnlineStatsRead.OnlineStatsRow
// 0x002C
struct FOnlineStatsRow
{
	struct FUniqueNetId                                PlayerID;                                      // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FSettingsData                               Rank;                                          // 0x0008 (0x000C) [0x0000000000000002] (CPF_Const)   
	class FString                                      NickName;                                      // 0x0014 (0x000C) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FOnlineStatsColumn>            Columns;                                       // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.OnlineStatsRead.ColumnMetaData
// 0x0018
struct FColumnMetaData
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FName                                        Name;                                          // 0x0004 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      ColumnName;                                    // 0x000C (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleEmitter.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int32_t                                            Count;                                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CountLow;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Time;                                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModule.ParticleCurvePair
// 0x0010
struct FParticleCurvePair
{
	class FString                                      CurveName;                                     // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class UObject*                                     CurveObject;                                   // 0x000C (0x0004) [0x0000000000100000]               
};

// ScriptStruct Engine.ParticleModuleBeamModifier.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	uint32_t                                           bModify : 1;                                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bScale : 1;                                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bLock : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleEventGenerator.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	uint8_t                                            Type;                                          // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Frequency;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            LowFreq;                                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ParticleFrequency;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           FirstTimeOnly : 1;                             // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           LastTimeOnly : 1;                              // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           UseReflectedImpactVector : 1;                  // 0x0010 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	class FName                                        CustomName;                                    // 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;              // 0x001C (0x000C) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct Engine.ParticleModuleLocationBoneSocket.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	class FName                                        BoneSocketName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Offset;                                        // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleOrbit.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	uint32_t                                           bProcessDuringSpawn : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bProcessDuringUpdate : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bUseEmitterTime : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct Engine.ParticleModuleParameterDynamic.EmitterDynamicParameter
// 0x0030
struct FEmitterDynamicParameter
{
	class FName                                        ParamName;                                     // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           bUseEmitterTime : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bSpawnTimeOnly : 1;                            // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint8_t                                            ValueMethod;                                   // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bScaleVelocityByParamValue : 1;                // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FRawDistributionFloat                       ParamValue;                                    // 0x0014 (0x001C) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleModuleTypeDataBeam2.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	class FName                                        TargetName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              TargetPercentage;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleModuleTypeDataPhysX.PhysXEmitterVerticalLodProperties
// 0x0010
struct FPhysXEmitterVerticalLodProperties
{
	float                                              WeightForFifo;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WeightForSpawnLod;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpawnLodRateVsLifeBias;                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RelativeFadeoutTime;                           // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.ParticleSystem.ParticleSystemLOD
// 0x0004
struct FParticleSystemLOD
{
	uint32_t                                           bLit : 1;                                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.ParticleSystem.LODSoloTrack
// 0x000C
struct FLODSoloTrack
{
	class TArray<uint8_t>                              SoloEnableSetting;                             // 0x0000 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleEmitterReplayFrame
// 0x000C
struct FParticleEmitterReplayFrame
{
	int32_t                                            EmitterType;                                   // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            OriginalEmitterIndex;                          // 0x0004 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    FrameState;                                    // 0x0008 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.ParticleSystemReplay.ParticleSystemReplayFrame
// 0x000C
struct FParticleSystemReplayFrame
{
	class TArray<struct FParticleEmitterReplayFrame>   Emitters;                                      // 0x0000 (0x000C) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct Engine.PhysXEmitterSpawnable.IndexedRBState
// 0x0028
struct FIndexedRBState
{
	struct FVector                                     CenterOfMass;                                  // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     LinearVelocity;                                // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     AngularVelocity;                               // 0x0018 (0x000C) [0x0000000000000000]               
	int32_t                                            Index;                                         // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.PhysXEmitterSpawnable.RBVolumeFill
// 0x0018
struct FRBVolumeFill
{
	class TArray<struct FIndexedRBState>               RBStates;                                      // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FVector>                       Positions;                                     // 0x000C (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.PointLightToggleable.CheckpointRecord
// 0x0004
struct APointLightToggleable_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.PostProcessChain.ASwitch
// 0x0010
struct FASwitch
{
	class FString                                      m_Name;                                        // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           m_Value : 1;                                   // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.Sequence.ActivateOp
// 0x0010
struct FActivateOp
{
	class USequenceOp*                                 ActivatorOp;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	class USequenceOp*                                 Op;                                            // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            InputIdx;                                      // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              RemainingDelay;                                // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Sequence.QueuedActivationInfo
// 0x001C
struct FQueuedActivationInfo
{
	class USequenceEvent*                              ActivatedEvent;                                // 0x0000 (0x0004) [0x0000000000000000]               
	class AActor*                                      InOriginator;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	class AActor*                                      InInstigator;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              ActivateIndices;                               // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bPushTop : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexDataElement
// 0x000C
struct FKCachedConvexDataElement
{
	class TArray<uint8_t>                              ConvexElementData;                             // 0x0000 (0x000C) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.RB_BodySetup.KCachedConvexData
// 0x000C
struct FKCachedConvexData
{
	class TArray<struct FKCachedConvexDataElement>     CachedConvexElements;                          // 0x0000 (0x000C) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct Engine.RB_ConstraintSetup.LinearDOFSetup
// 0x0008
struct FLinearDOFSetup
{
	uint8_t                                            bLimited;                                      // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              LimitSize;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Scout.PathSizeInfo
// 0x0015
struct FPathSizeInfo
{
	class FName                                        Desc;                                          // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              Radius;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              Height;                                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              CrouchHeight;                                  // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            PathColor;                                     // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.SeqAct_Interp.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              TimeStamp;                                     // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_Interp.DistractionLoopOverride
// 0x000C
struct FDistractionLoopOverride
{
	class FName                                        LoopName;                                      // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            LoopCount;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_Interp.SavedTransform
// 0x0018
struct FSavedTransform
{
	struct FVector                                     Location;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SeqAct_MultiLevelStreaming.LevelStreamingNameCombo
// 0x000C
struct FLevelStreamingNameCombo
{
	class ULevelStreaming*                             Level;                                         // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class FName                                        LevelName;                                     // 0x0004 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct Engine.SeqCond_SwitchClass.SwitchClassInfo
// 0x0009
struct FSwitchClassInfo
{
	class FName                                        ClassName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            bFallThru;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.SeqCond_SwitchObject.SwitchObjectCase
// 0x0008
struct FSwitchObjectCase
{
	class UObject*                                     ObjectValue;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bFallThru : 1;                                 // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDefaultValue : 1;                             // 0x0004 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMesh.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	uint8_t                                            TriangleSorting;                               // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            CustomLeftRightAxis;                           // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FName                                        CustomLeftRightBoneName;                       // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMeshLODInfo
// 0x0038
struct FSkeletalMeshLODInfo
{
	float                                              DisplayFactor;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LODHysteresis;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<int32_t>                              LODMaterialMap;                                // 0x0008 (0x000C) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<uint32_t>                             bEnableShadowCasting;                          // 0x0014 (0x000C) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
	class TArray<uint8_t>                              TriangleSorting;                               // 0x0020 (0x000C) [0x0000000020400000] (CPF_NeedCtorLink | CPF_Deprecated)
	class TArray<struct FTriangleSortSettings>         TriangleSortSettings;                          // 0x002C (0x000C) [0x0000000000400041] (CPF_Edit | CPF_EditFixedSize | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SkeletalMesh.SkeletalMesh_EditorOnly
// 0x001C
struct FSkeletalMesh_EditorOnly
{
	class UPhysicsAsset*                               BoundsPreviewAsset;                            // 0x0000 (0x0004) [0x0000000800000001] (CPF_Edit | CPF_EditorOnly)
	class FString                                      SourceFilePath;                                // 0x0004 (0x000C) [0x0000000800420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      SourceFileTimestamp;                           // 0x0010 (0x000C) [0x0000000800420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorExport
// 0x0011
struct FBoneMirrorExport
{
	class FName                                        BoneName;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        SourceBoneName;                                // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneFlipAxis;                                  // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0011 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.SkeletalMesh.BoneMirrorInfo
// 0x0005
struct FBoneMirrorInfo
{
	int32_t                                            SourceIndex;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneFlipAxis;                                  // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct Engine.SkeletalMesh.BodyPart
// 0x0014
struct FBodyPart
{
	class FName                                        m_OwnerBone;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_CutBone;                                     // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bShowIfCut : 1;                              // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMesh.UserBounds
// 0x0018
struct FUserBounds
{
	class FName                                        m_BoneName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     m_Offset;                                      // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRadius;                                     // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshActor.SkelMeshActorControlTarget
// 0x000C
struct FSkelMeshActorControlTarget
{
	class FName                                        ControlName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      TargetActor;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshActor.CheckpointRecord
// 0x001C
struct ASkeletalMeshActor_FCheckpointRecord
{
	uint32_t                                           bReplicated : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHidden : 1;                                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSavedPosition : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector                                     Location;                                      // 0x0004 (0x000C) [0x0000000000000000]               
	struct FRotator                                    Rotation;                                      // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct Engine.SkeletalMeshActorBasedOnExtremeContent.SkelMaterialSetterDatum
// 0x0008
struct FSkelMaterialSetterDatum
{
	int32_t                                            MaterialIndex;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          TheMaterial;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SkeletalMeshSocket.SkeletalMeshSocket_EditorOnly
// 0x000C
struct FSkeletalMeshSocket_EditorOnly
{
	class USkeletalMesh*                               PreviewSkelMesh;                               // 0x0000 (0x0004) [0x0000000800000001] (CPF_Edit | CPF_EditorOnly)
	class USkeletalMeshComponent*                      PreviewSkelComp;                               // 0x0004 (0x0004) [0x00000008040A200B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Transient | CPF_EditConst | CPF_Component | CPF_EditInline | CPF_EditorOnly)
	class UStaticMesh*                                 PreviewStaticMesh;                             // 0x0008 (0x0004) [0x0000000800000001] (CPF_Edit | CPF_EditorOnly)
};

// ScriptStruct Engine.SpeechRecognition.RecognisableWord
// 0x001C
struct FRecognisableWord
{
	int32_t                                            Id;                                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      ReferenceWord;                                 // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      PhoneticWord;                                  // 0x0010 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogVocabulary
// 0x0048
struct FRecogVocabulary
{
	class TArray<struct FRecognisableWord>             WhoDictionary;                                 // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FRecognisableWord>             WhatDictionary;                                // 0x000C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FRecognisableWord>             WhereDictionary;                               // 0x0018 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      VocabName;                                     // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              VocabData;                                     // 0x0030 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              WorkingVocabData;                              // 0x003C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeechRecognition.RecogUserData
// 0x0010
struct FRecogUserData
{
	int32_t                                            ActiveVocabularies;                            // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<uint8_t>                              UserData;                                      // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.SpeedTreeComponent.SpeedTreeStaticLight
// 0x0024
struct FSpeedTreeStaticLight
{
	struct FGuid                                       Guid;                                          // 0x0000 (0x0010) [0x0000000000000002] (CPF_Const)   
	class UShadowMap1D*                                BranchShadowMap;                               // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UShadowMap1D*                                FrondShadowMap;                                // 0x0014 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UShadowMap1D*                                LeafMeshShadowMap;                             // 0x0018 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UShadowMap1D*                                LeafCardShadowMap;                             // 0x001C (0x0004) [0x0000000000000002] (CPF_Const)   
	class UShadowMap1D*                                BillboardShadowMap;                            // 0x0020 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct Engine.SplineActor.SplineConnection
// 0x0008
struct FSplineConnection
{
	class USplineComponent*                            SplineComponent;                               // 0x0000 (0x0004) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ASplineActor*                                ConnectTo;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.SplineMeshComponent.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                      // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     StartTangent;                                  // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector2D                                   StartScale;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	float                                              StartRoll;                                     // 0x0020 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   StartOffset;                                   // 0x0024 (0x0008) [0x0000000000000000]               
	struct FVector                                     EndPos;                                        // 0x002C (0x000C) [0x0000000000000000]               
	struct FVector                                     EndTangent;                                    // 0x0038 (0x000C) [0x0000000000000000]               
	struct FVector2D                                   EndScale;                                      // 0x0044 (0x0008) [0x0000000000000000]               
	float                                              EndRoll;                                       // 0x004C (0x0004) [0x0000000000000000]               
	struct FVector2D                                   EndOffset;                                     // 0x0050 (0x0008) [0x0000000000000000]               
};

// ScriptStruct Engine.SpotLightToggleable.CheckpointRecord
// 0x0004
struct ASpotLightToggleable_FCheckpointRecord
{
	uint32_t                                           bEnabled : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.StaticMeshActorBasedOnExtremeContent.SMMaterialSetterDatum
// 0x0008
struct FSMMaterialSetterDatum
{
	int32_t                                            MaterialIndex;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          TheMaterial;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.Texture2DComposite.SourceTexture2DRegion
// 0x0014
struct FSourceTexture2DRegion
{
	int32_t                                            OffsetX;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            OffsetY;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            SizeX;                                         // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            SizeY;                                         // 0x000C (0x0004) [0x0000000000000000]               
	class UTexture2D*                                  Texture2D;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.Trigger.CheckpointRecord
// 0x0004
struct ATrigger_FCheckpointRecord
{
	uint32_t                                           bCollideActors : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct Engine.TriggerStreamingLevel.LevelStreamingData
// 0x0008
struct FLevelStreamingData
{
	uint32_t                                           bShouldBeLoaded : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bShouldBeVisible : 1;                          // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bShouldBlockOnLoad : 1;                        // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	class ULevelStreaming*                             Level;                                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.UIDataProvider.UIDataProviderField
// 0x0018
struct FUIDataProviderField
{
	class FName                                        FieldTag;                                      // 0x0000 (0x0008) [0x0000000000100000]               
	uint8_t                                            FieldType;                                     // 0x0008 (0x0001) [0x0000000000100000]               
	class TArray<class UUIDataProvider*>               FieldProviders;                                // 0x000C (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataProvider_OnlinePlayerStorage.PlayerStorageArrayProvider
// 0x0010
struct FPlayerStorageArrayProvider
{
	int32_t                                            PlayerStorageId;                               // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        PlayerStorageName;                             // 0x0004 (0x0008) [0x0000000000000000]               
	class UUIDataProvider_OnlinePlayerStorageArray*    Provider;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.UIDataProvider_Settings.SettingsArrayProvider
// 0x0010
struct FSettingsArrayProvider
{
	int32_t                                            SettingsId;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        SettingsName;                                  // 0x0004 (0x0008) [0x0000000000000000]               
	class UUIDataProvider_SettingsArray*               Provider;                                      // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.UIDataStore_DynamicResource.DynamicResourceProviderDefinition
// 0x0018
struct FDynamicResourceProviderDefinition
{
	class FName                                        ProviderTag;                                   // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	class FString                                      ProviderClassName;                             // 0x0008 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UUIResourceCombinationProvider*              ProviderClass;                                 // 0x0014 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.UIDataStore_GameResource.GameResourceDataProvider
// 0x001C
struct FGameResourceDataProvider
{
	class FName                                        ProviderTag;                                   // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	class FString                                      ProviderClassName;                             // 0x0008 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           bExpandProviders : 1;                          // 0x0014 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	class UUIResourceDataProvider*                     ProviderClass;                                 // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIInputKeyData
// 0x0018
struct FUIInputKeyData
{
	struct FRawInputKeyEventData                       InputKeyData;                                  // 0x0000 (0x000C) [0x0000000000004000] (CPF_Config)  
	class FString                                      ButtonFontMarkupString;                        // 0x000C (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_InputAlias.UIDataStoreInputAlias
// 0x0050
struct FUIDataStoreInputAlias
{
	class FName                                        AliasName;                                     // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	struct FUIInputKeyData                             PlatformInputKeys[3];                          // 0x0008 (0x0048) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_OnlineStats.RankMetaData
// 0x0014
struct FRankMetaData
{
	class FName                                        RankName;                                      // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      RankColumnName;                                // 0x0008 (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_OnlineStats.PlayerNickMetaData
// 0x0014
struct FPlayerNickMetaData
{
	class FName                                        PlayerNickName;                                // 0x0000 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      PlayerNickColumnName;                          // 0x0008 (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIDataStore_StringAliasMap.UIMenuInputMap
// 0x001C
struct FUIMenuInputMap
{
	class FName                                        FieldName;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        Set;                                           // 0x0008 (0x0008) [0x0000000000000000]               
	class FString                                      MappedText;                                    // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct Engine.UIInteraction.UIKeyRepeatData
// 0x0010
struct FUIKeyRepeatData
{
	class FName                                        CurrentRepeatKey;                              // 0x0000 (0x0008) [0x0000000000100000]               
	struct FDouble                                     NextRepeatTime;                                // 0x0008 (0x0008) [0x0000000000100000]               
};

// ScriptStruct Engine.UIInteraction.UIAxisEmulationData
// 0x0004 (0x0010 - 0x0014)
struct FUIAxisEmulationData : FUIKeyRepeatData
{
	uint32_t                                           bEnabled : 1;                                  // 0x0010 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct Engine.UISoundTheme.SoundEventMapping
// 0x0008
struct FSoundEventMapping
{
	class FName                                        SoundEventName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.PhysXEmitterVerticalProperties
// 0x0018
struct FPhysXEmitterVerticalProperties
{
	uint32_t                                           bDisableLod : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            ParticlesLodMin;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ParticlesLodMax;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PacketsPerPhysXParticleSystemMax;              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bApplyCylindricalPacketCulling : 1;            // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              SpawnLodVsFifoBias;                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.PhysXVerticalProperties
// 0x0018
struct FPhysXVerticalProperties
{
	struct FPhysXEmitterVerticalProperties             Emitters;                                      // 0x0000 (0x0018) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.WorldFractureSettings
// 0x001C
struct FWorldFractureSettings
{
	float                                              ChanceOfPhysicsChunkOverride;                  // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           bEnableChanceOfPhysicsChunkOverride : 1;       // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bLimitExplosionChunkSize : 1;                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              MaxExplosionChunkSize;                         // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLimitDamageChunkSize : 1;                     // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDamageChunkSize;                            // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxNumFacturedChunksToSpawnInAFrame;           // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              FractureExplosionVelScale;                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.ScreenMessageString
// 0x0020
struct FScreenMessageString
{
	struct FQWord                                      Key;                                           // 0x0000 (0x0008) [0x0000000000102000] (CPF_Transient)
	class FString                                      ScreenMessage;                                 // 0x0008 (0x000C) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
	struct FColor                                      DisplayColor;                                  // 0x0014 (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              TimeToDisplay;                                 // 0x0018 (0x0004) [0x0000000000102000] (CPF_Transient)
	float                                              CurrentTimeDisplayed;                          // 0x001C (0x0004) [0x0000000000102000] (CPF_Transient)
};

// ScriptStruct Engine.WorldInfo.LightmassWorldInfoSettings
// 0x003C
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            NumIndirectLightingBounces;                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      EnvironmentColor;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EnvironmentIntensity;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EmissiveBoost;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DiffuseBoost;                                  // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpecularBoost;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              IndirectNormalInfluenceBoost;                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bUseNormalMapsForSimpleLightMaps : 1;          // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bUseAmbientOcclusion : 1;                      // 0x0020 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              DirectIlluminationOcclusionFraction;           // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              IndirectIlluminationOcclusionFraction;         // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OcclusionExponent;                             // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FullyOccludedSamplesFraction;                  // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxOcclusionDistance;                          // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bVisualizeMaterialDiffuse : 1;                 // 0x0038 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bVisualizeAmbientOcclusion : 1;                // 0x0038 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.NavMeshPathConstraintCacheDatum
// 0x0018
struct FNavMeshPathConstraintCacheDatum
{
	int32_t                                            ListIdx;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class UNavMeshPathConstraint*                      List[5];                                       // 0x0004 (0x0014) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.NavMeshPathGoalEvaluatorCacheDatum
// 0x0018
struct FNavMeshPathGoalEvaluatorCacheDatum
{
	int32_t                                            ListIdx;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class UNavMeshPathGoalEvaluator*                   List[5];                                       // 0x0004 (0x0014) [0x0000000000000000]               
};

// ScriptStruct Engine.WorldInfo.WorldInfoNavMeshGenProcessParams
// 0x0004
struct FWorldInfoNavMeshGenProcessParams
{
	uint32_t                                           bExpansionDoSimplification : 1;                // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bExpansionDoBorderBackFill : 1;                // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bExpansionDoThreeToTwoMerge : 1;               // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bExpansionDoPolyMerge : 1;                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bExpansionDoPolyConcaveMerge : 1;              // 0x0000 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bExpansionDoSquareMerge : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bExpansionDoSaveFixup : 1;                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bExpansionCullPolys : 1;                       // 0x0000 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bExpansionBuildObstacleMesh : 1;               // 0x0000 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           bExpansionCreateEdgeConnections : 1;           // 0x0000 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint32_t                                           bExpansionDoSubdivisionMerging : 1;            // 0x0000 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	uint32_t                                           bExpansionDoEdgeSmoothing : 1;                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	uint32_t                                           bExpansionDoRawGridOnly : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	uint32_t                                           bExpansionDoConcaveSlabsOnly : 1;              // 0x0000 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	uint32_t                                           bExpansionDoEdgeSimplificationEvenInConcaveSlabMode : 1;// 0x0000 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	uint32_t                                           bExpansionDrawDropDownPolys : 1;               // 0x0000 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	uint32_t                                           bExpansionDrawPolyParents : 1;                 // 0x0000 (0x0004) [0x0000000000000001] [0x00010000] (CPF_Edit)
	uint32_t                                           bExpansionDisableSubdivisionHeightSnapping : 1;// 0x0000 (0x0004) [0x0000000000000001] [0x00020000] (CPF_Edit)
	uint32_t                                           bExpansionDisableVertMaxHeightSlopeMax : 1;    // 0x0000 (0x0004) [0x0000000000000001] [0x00040000] (CPF_Edit)
	uint32_t                                           bExpansionDoAdjacentPolyVertAlignment : 1;     // 0x0000 (0x0004) [0x0000000000000001] [0x00080000] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.WorldInfoNavMeshGenBaseParams
// 0x002C
struct FWorldInfoNavMeshGenBaseParams
{
	int32_t                                            ExpansionMaxSubdivisions;                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fExpansionConvexTolerance;                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fExpansionEdgeSmoothingConvexTolerance;        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fExpansionSubdivisionDistPctThresh;            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fExpansionObstacleMeshGapEpsilon;              // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fExpansionPolyBoundsDownOffset;                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fExpansionMaxPolyEdgeDot;                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            ExpansionMaxConcaveSlabVertCount;              // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fExpansionMaxSquareMergeControlPtThresh;       // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fExpansionMinConcaveMergeDot;                  // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fExpansionEdgeVertTolerance;                   // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.WorldInfoNavMeshGenScoutParams
// 0x006C
struct FWorldInfoNavMeshGenScoutParams
{
	float                                              fStepSize;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fEntityHalfHeight;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fMaxDropHeight;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fMaxStepHeight;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fMinPolyArea;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fBorderBackfill_CheckDist;                     // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fMinMergeDotLargeArea;                         // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fMaxPolyHeight;                                // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fHeightMergeThreshold;                         // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fEdgeMaxDelta;                                 // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fWalkableFloorZ;                               // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fMaxGroundCheckSize;                           // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fMinEdgeLength;                                // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bExpansionDoObstacleMeshSimplification : 1;    // 0x0034 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bPathEngineUseVoxels : 1;                      // 0x0034 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bPathEngineUseVoxelSubdivisionAreas : 1;       // 0x0034 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bPathEngineStripTerrainHeightDetail : 1;       // 0x0034 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bPathEngineExcludeDownwardFacingFromGroundResult : 1;// 0x0034 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bPathEngineUseConvexSolids : 1;                // 0x0034 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bPathEngineBuildUnobstructedGroundMesh : 1;    // 0x0034 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bPathEngineBuildConnectedGroundMesh : 1;       // 0x0034 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bPathEngineSaveMesh : 1;                       // 0x0034 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	class FString                                      PathEngineSaveMeshBaseFilename;                // 0x0038 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            PathEngineVoxelSize;                           // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PathEngineSubDivisionSize;                     // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PathEngineOptimizeWithThreshold;               // 0x004C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PathEngineOptimizeWithThresholdVertical;       // 0x0050 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PathEngineVoxelMinimumFragmentSize;            // 0x0054 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PathEngineAgentCollisionExtent2D;              // 0x0058 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PathEngineConnectedGroundMeshRootPositionOffsetZ;// 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<int32_t>                              PathEngineClearanceRegionsHeight;              // 0x0060 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct Engine.WorldInfo.ApexModuleDestructibleSettings
// 0x000C
struct FApexModuleDestructibleSettings
{
	int32_t                                            MaxChunkIslandCount;                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxRrbActorCount;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxChunkSeparationLOD;                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.PhysXSimulationProperties
// 0x000C
struct FPhysXSimulationProperties
{
	uint32_t                                           bUseHardware : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bFixedTimeStep : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              TimeStep;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxSubSteps;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct Engine.WorldInfo.PhysXSceneProperties
// 0x003C
struct FPhysXSceneProperties
{
	struct FPhysXSimulationProperties                  PrimaryScene;                                  // 0x0000 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentRigidBody;                          // 0x000C (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentFluid;                              // 0x0018 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentCloth;                              // 0x0024 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FPhysXSimulationProperties                  CompartmentSoftBody;                           // 0x0030 (0x000C) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct Engine.WorldInfo.CompartmentRunList
// 0x0004
struct FCompartmentRunList
{
	uint32_t                                           RigidBody : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           Fluid : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           Cloth : 1;                                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           SoftBody : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
};

// ScriptStruct Engine.WorldInfo.ArkSunGlareMeshParams
// 0x0024
struct FArkSunGlareMeshParams
{
	class ATargetPoint*                                m_SunTargetPoint;                              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AStaticMeshActor*                            m_SkyStaticMesh;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInstanceConstant*                   m_SunMIC;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMinAngle;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMinDot;                                     // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fBloomScale;                                 // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBloomExponent;                              // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInstanceConstant*                   m_SunDynamicMIC;                               // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_SunMICInitialBloomValue;                     // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODElement
// 0x000C
struct FStaticMeshLODElement
{
	class UMaterialInterface*                          Material;                                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bEnableShadowCasting : 1;                      // 0x0004 (0x0004) [0x0000000000001001] [0x00000001] (CPF_Edit | CPF_Native)
	uint32_t                                           bEnableCollision : 1;                          // 0x0008 (0x0004) [0x0000000000001001] [0x00000001] (CPF_Edit | CPF_Native)
};

// ScriptStruct Engine.StaticMesh.StaticMeshLODInfo
// 0x000C
struct FStaticMeshLODInfo
{
	class TArray<struct FStaticMeshLODElement>         Elements;                                      // 0x0000 (0x000C) [0x0000000000001041] (CPF_Edit | CPF_EditFixedSize | CPF_Native)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


