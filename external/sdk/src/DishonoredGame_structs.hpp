/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: DishonoredGame_structs.hpp
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

// ScriptStruct DishonoredGame.DisGlobalEnums.DisVectorSpring
// 0x0034
struct FDisVectorSpring
{
	struct FVector                                     m_Value;                                       // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Target;                                      // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Velocity;                                    // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              m_fTimeRemainder;                              // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              m_fSpringConstant;                             // 0x0028 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              m_fUpdateFrequency;                            // 0x002C (0x0004) [0x0000000000000000]               
	float                                              m_fMass;                                       // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisRollingAverage
// 0x0030
struct FDisRollingAverage
{
	float                                              m_History[10];                                 // 0x0000 (0x0028) [0x0000000000000000]               
	int32_t                                            m_HistoryCount;                                // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              m_fCurrentTotal;                               // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisNonRepeatINTRandomHelper
// 0x0004
struct FDisNonRepeatINTRandomHelper
{
	int32_t                                            m_iLastReturnedValue;                          // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisRelationshipOverrideInfo
// 0x0078
struct FDisRelationshipOverrideInfo
{
	uint8_t                                            UnknownData00[0x78];                          // 0x0000 (0x0078) MISSED OFFSET
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisMantleFinderOwnerInfo
// 0x0040
struct FDisMantleFinderOwnerInfo
{
	struct FVector                                     m_FootPos;                                     // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_CrouchExtent;                                // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     m_StandExtent;                                 // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Velocity;                                    // 0x0024 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Facing;                                      // 0x0030 (0x000C) [0x0000000000000000]               
	float                                              m_fClearDistanceAboveOwner;                    // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisInventoryAmmoEntry
// 0x0008
struct FDisInventoryAmmoEntry
{
	uint8_t                                            m_AmmoType;                                    // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_AmmoAmount;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisAbstractItemInfo
// 0x000C
struct FDisAbstractItemInfo
{
	class UDisAbstractItem*                            m_pItem;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_Quantity;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bHidden : 1;                                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisInventoryLoadout
// 0x0034
struct FDisInventoryLoadout
{
	class TArray<class UDisTweaks_InventoryItem*>      m_Items;                                       // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FDisInventoryAmmoEntry>        m_Ammo;                                        // 0x000C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            m_ElixirCounts[2];                             // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDisAbstractItemInfo>          m_AbstractItems;                               // 0x0020 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UDishonoredInventoryItem*                    m_pDefaultEquipType_Primary;                   // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDishonoredInventoryItem*                    m_pDefaultEquipType_Secondary;                 // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisZoneTracker
// 0x000C
struct FDisZoneTracker
{
	int32_t                                            m_ZoneRefCount;                                // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_ZoneTickTag_Enter;                           // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_ZoneTickTag_Exit;                            // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisBoneAtomsFilter
// 0x0034
struct FDisBoneAtomsFilter
{
	class TArray<uint8_t>                              m_RelevantBones;                               // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              m_DiscardedBones;                              // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              m_ExclusionStarts;                             // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              m_ExclusionEnds;                               // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_iNumIncomingBones;                           // 0x0030 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisConvSaveData_Label
// 0x000C
struct FDisConvSaveData_Label
{
	class FName                                        m_Label;                                       // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            m_NumTimesFired;                               // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisConvSaveData_Conversation
// 0x001C
struct FDisConvSaveData_Conversation
{
	class FString                                      m_Conversation;                                // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_NumTimesFired;                               // 0x000C (0x0004) [0x0000000000000000]               
	class TArray<struct FDisConvSaveData_Label>        m_LabelData;                                   // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisConvSaveData_DialogTree
// 0x001C
struct FDisConvSaveData_DialogTree
{
	class FString                                      m_DialogTree;                                  // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_NumTimesFired;                               // 0x000C (0x0004) [0x0000000000000000]               
	class TArray<struct FDisConvSaveData_Conversation> m_ConvData;                                    // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisConvSaveData
// 0x000C
struct FDisConvSaveData
{
	class TArray<struct FDisConvSaveData_DialogTree>   m_DialogData;                                  // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisGlobalEnums.DisHookParameters
// 0x002C
struct FDisHookParameters
{
	class FName                                        m_KismetDialogHook;                            // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FName                                        m_AudioLogDialogHook;                          // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UDisNPCDistractionComponent*                 m_pDistraction;                                // 0x0010 (0x0004) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class AActor*                                      m_pLastWitnessedInteractable;                  // 0x0014 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UDishonoredActivePowerComponent*             m_pLastWitnessedMagic;                         // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            m_InvestigateHookSource;                       // 0x001C (0x0001) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      m_pHeartTargetedActor;                         // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UDisCorpseInterface*                         m_pCorpse_Object;                              // 0x0024 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UDisCorpseInterface*                         m_pCorpse_Interface;                           // 0x0024 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisNoiseMakerInterface.DisAudioCellCache
// 0x0014
struct FDisAudioCellCache
{
	struct FVector                                     m_CachedPosition;                              // 0x0000 (0x000C) [0x0000000000002000] (CPF_Transient)
	class ADishonoredAudioVolume*                      m_pCachedCell;                                 // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fCacheTolerance;                             // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredKActor.DisPhysicsContactInfo
// 0x001C
struct FDisPhysicsContactInfo
{
	float                                              m_fLastImpactTime;                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fRefireDelay;                                // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fMinImpactSpeed;                             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_fLastSlideTime;                              // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fRefireDelay_Slide;                          // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              m_fMinSlideSpeed;                              // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bSlideActive : 1;                            // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bSlideActive_Cur : 1;                        // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerBase.DisMovieSpaceInfo
// 0x0024
struct FDisMovieSpaceInfo
{
	struct FVector2D                                   m_ScreenSize;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   m_MovieSize;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	float                                              m_fScreenToMovieScaling;                       // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   m_MovieSpaceSize;                              // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   m_EmptySpace;                                  // 0x001C (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisTutorialInfo
// 0x003D
struct FDisTutorialInfo
{
	int32_t                                            m_ID;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_Type;                                        // 0x0004 (0x0001) [0x0000000000000000]               
	float                                              m_fTimeLeft;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bShowInWindow : 1;                           // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bShowOnce : 1;                               // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bForceDisplay : 1;                           // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bGamepad : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000008] 
	class FString                                      m_MessageLocFile;                              // 0x0010 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      m_MessageLocSection;                           // 0x001C (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      m_MessageLocKey;                               // 0x0028 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            m_NoteType;                                    // 0x0034 (0x0001) [0x0000000000000000]               
	struct FPointer                                    m_pNoteParams;                                 // 0x0038 (0x0004) [0x0000000000001000] (CPF_Native)  
	uint8_t                                            m_JournalTab;                                  // 0x003C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x003D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisTweaksBase.DisTweakVersionBaseClass
// 0x0010
struct FDisTweakVersionBaseClass
{
	class FString                                      m_BaseClassName;                               // 0x0000 (0x000C) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	int32_t                                            m_VersionNum;                                  // 0x000C (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
};

// ScriptStruct DishonoredGame.DisTweaksBase.DisTweakFallbackInfo
// 0x0010
struct FDisTweakFallbackInfo
{
	class FString                                      m_PropertyPathName;                            // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           m_bProcessed : 1;                              // 0x000C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisTweaksBase.DisTweakCookedFallback
// 0x0008
struct FDisTweakCookedFallback
{
	class FName                                        m_FallbackName;                                // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisTweaksBase.DisTweakChildInfo_ChildName
// 0x000C
struct FDisTweakChildInfo_ChildName
{
	class FName                                        m_ChildTweakName;                              // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            m_iAdditionalIndex;                            // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisTweaksBase.DisTweakChildInfo
// 0x001C
struct FDisTweakChildInfo
{
	struct FDisTweakChildInfo_ChildName                m_ChildTweakName;                              // 0x0000 (0x000C) [0x0000000000000000]               
	class UDisTweaksBase*                              m_pChildTweak;                                 // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            m_ChildTweakFlags;                             // 0x0010 (0x0004) [0x0000000000000000]               
	class FName                                        m_GroupName;                                   // 0x0014 (0x0008) [0x0000000800000000] (CPF_EditorOnly)
};

// ScriptStruct DishonoredGame.DisTweaksBase.DisTweakError
// 0x001C
struct FDisTweakError
{
	class FName                                        m_ErrorID;                                     // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        m_ExtraInfo;                                   // 0x0008 (0x0008) [0x0000000000000000]               
	class FName                                        m_ExtraInfo2;                                  // 0x0010 (0x0008) [0x0000000000000000]               
	class UDisTweaksBase*                              m_pOwner;                                      // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisTweaksBase.DisTweaksGenericThumbnailItem
// 0x0028
struct FDisTweaksGenericThumbnailItem
{
	class FName                                        m_ItemName;                                    // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FName                                        m_AttachToItem;                                // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FName                                        m_AttachToSocket;                              // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_Flags;                                       // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
	class USkeletalMesh*                               m_pSkeletalMesh;                               // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
	class UStaticMesh*                                 m_pStaticMesh;                                 // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UPrimitiveComponent*                         m_pCachedComponent;                            // 0x0024 (0x0004) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DisTweaks_GFxMoviePlayerBase.DisSoundThemeBinding
// 0x0010
struct FDisSoundThemeBinding
{
	class FName                                        ThemeName;                                     // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDisUISoundTheme*                            Theme;                                         // 0x0008 (0x0004) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class UDisUISoundTheme*                            ExternalTheme;                                 // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisAttentionDefs.DisLeakyAccumulator
// 0x0010
struct FDisLeakyAccumulator
{
	float                                              m_fCurrentValue;                               // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fLeakRate;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fMinValue;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_fMaxValue;                                   // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAttentionDefs.DisVisCalcTuningParamsCurvePoint
// 0x0008
struct FDisVisCalcTuningParamsCurvePoint
{
	float                                              m_fInputValue;                                 // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fOutputValue;                                // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisAttentionDefs.DisVisCalcTuningParams
// 0x0020
struct FDisVisCalcTuningParams
{
	uint8_t                                            m_ApplyOp;                                     // 0x0000 (0x0001) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fScalar;                                     // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fBias;                                       // 0x0008 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fExponent;                                   // 0x000C (0x0004) [0x0000400000000001] (CPF_Edit)    
	uint32_t                                           m_bUsePointsInsteadOfFormula : 1;              // 0x0010 (0x0004) [0x0000400000000001] [0x00000001] (CPF_Edit)
	class TArray<struct FDisVisCalcTuningParamsCurvePoint> m_Points;                                      // 0x0014 (0x000C) [0x0000400000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisAttentionDefs.DisAttentionLevelThreshold
// 0x000C
struct FDisAttentionLevelThreshold
{
	float                                              m_fAttentionLevelToStart;                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAttentionLevelToStop;                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fStoppingVariance;                           // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisAttentionDefs.DisAttentionChangeReasonSettings
// 0x0004
struct FDisAttentionChangeReasonSettings
{
	uint32_t                                           m_bCanIncreaseToBusted : 1;                    // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisAttentionDefs.DisAttnTargetParams
// 0x0040
struct FDisAttnTargetParams
{
	struct FPointer                                    m_pTargetTweaks;                               // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    m_pObservableComponent;                        // 0x0004 (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FVector                                     m_Location;                                    // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Velocity;                                    // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Extent;                                      // 0x0020 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_FocalPoint;                                  // 0x002C (0x000C) [0x0000000000000000]               
	uint32_t                                           m_bIsPlayer : 1;                               // 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bIsDead : 1;                                 // 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bIsCombatable : 1;                           // 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	class AActor*                                      m_pActor;                                      // 0x003C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAttentionDefs.DisAttentionProxy
// 0x0010
struct FDisAttentionProxy
{
	class UDishonoredAIBrain*                          m_pBrain;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class UDisAttentionTargetInterface*                m_pTarget_Object;                              // 0x0004 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pTarget_Interface;                           // 0x0004 (0x0008) [0x0000000000000000]               
	class AActor*                                      m_pCachedTargetActor;                          // 0x000C (0x0004) [0x0002000000000000]               
};

// ScriptStruct DishonoredGame.DisAttentionDefs.DisAttentionChangeReasonInfo
// 0x000C
struct FDisAttentionChangeReasonInfo
{
	class AActor*                                      m_pActor;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iParam1;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iParam2;                                     // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAttentionDefs.DisAttentionChangeReason
// 0x0010
struct FDisAttentionChangeReason
{
	uint8_t                                            m_ReasonType;                                  // 0x0000 (0x0001) [0x0000000000000000]               
	struct FDisAttentionChangeReasonInfo               m_ReasonInfo;                                  // 0x0004 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAttentionDefs.DisAttentionProxyInfo
// 0x0040
struct FDisAttentionProxyInfo
{
	struct FVector                                     m_Loc;                                         // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Vel;                                         // 0x000C (0x000C) [0x0000000000000000]               
	float                                              m_fHeight;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	struct FDisAttentionChangeReason                   m_ProxyUpdateReason;                           // 0x001C (0x0010) [0x0000000000000000]               
	int32_t                                            m_AttentionTag;                                // 0x002C (0x0004) [0x0000000000000000]               
	uint8_t                                            m_Status;                                      // 0x0030 (0x0001) [0x0000000000000000]               
	struct FVector                                     m_MostRecentVerifiedLoc;                       // 0x0034 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAttentionDefs.DisAppliedAttentionChangeInfo
// 0x0048
struct FDisAppliedAttentionChangeInfo
{
	float                                              m_fChangeAmount;                               // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fChangeAmount_Unclamped;                     // 0x0004 (0x0004) [0x0000000000000000]               
	struct FDisAttentionProxyInfo                      m_ProxyInfoFromChange;                         // 0x0008 (0x0040) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisNativeStateTransitionLogic.StateTransitionLogic
// 0x0009
struct FStateTransitionLogic
{
	class UDishonoredNativeState*                      m_pFromClass;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDishonoredNativeState*                      m_pToClass;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_Result;                                      // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisNativeStateTransitionLogic.StateTransitionLogicKey
// 0x0008
struct FStateTransitionLogicKey
{
	class UDishonoredNativeState*                      m_pFromClass;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	class UDishonoredNativeState*                      m_pToClass;                                    // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredNativeStateMachine.DisNativeFSMRejectedInfo
// 0x0014
struct FDisNativeFSMRejectedInfo
{
	class UDishonoredNativeState*                      m_pRejectedStateID;                            // 0x0000 (0x0004) [0x0000000000000000]               
	class UDishonoredNativeState*                      m_pStateThatRejectedID;                        // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_RejectedReason;                              // 0x0008 (0x0001) [0x0000000000000000]               
	float                                              m_fTimeOfRejection;                            // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            m_NumRejections;                               // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPlayerController.DisPossessionEffectSettings
// 0x000C
struct FDisPossessionEffectSettings
{
	uint8_t                                            m_Stage;                                       // 0x0000 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              m_BlurAtExitStart;                             // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_DistortAtExitStart;                          // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredPlayerController.DisPlayerStealthAttentionIndicatorInfo
// 0x0014
struct FDisPlayerStealthAttentionIndicatorInfo
{
	float                                              m_fLastAttention;                              // 0x0000 (0x0004) [0x0000000000000000]               
	struct FDisLeakyAccumulator                        m_Accumulator;                                 // 0x0004 (0x0010) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPlayerController.DisPlayerViewTarget
// 0x0068
struct FDisPlayerViewTarget
{
	class AActor*                                      m_pTarget;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	class USkeletalMeshComponent*                      m_pMesh;                                       // 0x0004 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        m_LookBone;                                    // 0x0008 (0x0008) [0x0000000000000000]               
	struct FVector                                     m_LookBoneOffset;                              // 0x0010 (0x000C) [0x0000000000000000]               
	int32_t                                            m_StartRot;                                    // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            m_TargetFixedRot;                              // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_TrackType;                                   // 0x0024 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bHasCachedBonePos : 1;                       // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_CachedBonePos;                               // 0x002C (0x000C) [0x0000000000000000]               
	int32_t                                            m_TrackID;                                     // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            m_Flags;                                       // 0x003C (0x0004) [0x0000000000000000]               
	float                                              m_fLimitRadius_Max;                            // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              m_fLimitRadius_Min;                            // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            m_MaxPlayerControlledDelta;                    // 0x0048 (0x0004) [0x0000000000000000]               
	int32_t                                            m_PlayerControlledDelta_SoftenThreshold;       // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            m_CurPlayerControlledDelta;                    // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            m_CurPlayerControlledDelta_Blended;            // 0x0054 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_SoftenType;                                  // 0x0058 (0x0001) [0x0000000000000000]               
	float                                              m_fZoomFOVOverride;                            // 0x005C (0x0004) [0x0000000000000000]               
	float                                              m_fCurWeight;                                  // 0x0060 (0x0004) [0x0000000000000000]               
	float                                              m_fBlendSpeed;                                 // 0x0064 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPlayerController.DisPlayerViewTracking
// 0x00D4
struct FDisPlayerViewTracking
{
	struct FDisPlayerViewTarget                        m_ViewYawTarget;                               // 0x0000 (0x0068) [0x0000000000080000] (CPF_Component)
	struct FDisPlayerViewTarget                        m_ViewPitchTarget;                             // 0x0068 (0x0068) [0x0000000000080000] (CPF_Component)
	int32_t                                            m_CurTrackID;                                  // 0x00D0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPlayerController.DisPlayerViewTracking_ExtraParams
// 0x0014
struct FDisPlayerViewTracking_ExtraParams
{
	float                                              m_fMaxRadius;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fMinRadius;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fMaxPlayerControlledDelta_Pitch;             // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_fMaxPlayerControlledDelta_Yaw;               // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fZoomFOVOverride;                            // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisTweaks_GFxMoviePlayerHUD.DisInteractionCrosshairSettings
// 0x000C
struct FDisInteractionCrosshairSettings
{
	class FName                                        m_Name;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bShowDot : 1;                                // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_GFxMoviePlayerHUD.DisHUDMarkerVariation
// 0x0010
struct FDisHUDMarkerVariation
{
	float                                              m_StartDistance;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_EndDistance;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_StartValue;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_EndValue;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_GFxMoviePlayerHUD.DisHUDMarkerSettings
// 0x0048
struct FDisHUDMarkerSettings
{
	class FString                                      m_SymbolName;                                  // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FVector2D                                   m_BBMin;                                       // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   m_BBMax;                                       // 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fWorldOffsetZ;                               // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fScreenOffsetZ;                              // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bCanFocus : 1;                               // 0x0024 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bKeepBBInMarkerArea : 1;                     // 0x0024 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	struct FDisHUDMarkerVariation                      m_ScaleVariation;                              // 0x0028 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FDisHUDMarkerVariation                      m_AlphaVariation;                              // 0x0038 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_GFxMoviePlayerHUD.DisTaskMarkerSettings
// 0x0028
struct FDisTaskMarkerSettings
{
	uint32_t                                           m_bShowDistance : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FDisHUDMarkerVariation                      m_VanishPreset_VeryClose;                      // 0x0004 (0x0010) [0x0000000000000001] (CPF_Edit)    
	struct FDisHUDMarkerVariation                      m_VanishPreset_Never;                          // 0x0014 (0x0010) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fOpacityReductionInCombat;                   // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_GFxMoviePlayerHUD.DisAwarenessMarkerSettings
// 0x002C
struct FDisAwarenessMarkerSettings
{
	float                                              m_fDisplay_PlayerProxyMaxDist;                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDisplay_NPCMaxDist_Vision;                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDisplay_NPCMaxDist_NoVision;                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFadeOutDelay_InitiallyHidden;               // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFadeOutDelay_NowHidden;                     // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFadeOutAnimDuration;                        // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMinScaleOutsideFOV;                         // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxScaleOutsideFOV;                         // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<uint8_t>                              m_AllowedAIAwareness;                          // 0x0020 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_GFxMoviePlayerHUD.DisHeartTargetMarkerSettings
// 0x0008
struct FDisHeartTargetMarkerSettings
{
	uint32_t                                           m_bShowDistance : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_fOpacityReductionInCombat;                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisTaskPopupInfo
// 0x0005
struct FDisTaskPopupInfo
{
	class UDishonoredTask_Base*                        m_pTask;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_Event;                                       // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisObjectivePopupInfo
// 0x0018
struct FDisObjectivePopupInfo
{
	class UDishonoredObjective*                        m_pObjective;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_Event;                                       // 0x0004 (0x0001) [0x0000000000000000]               
	class TArray<struct FDisTaskPopupInfo>             m_Tasks;                                       // 0x0008 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class UDisSeqAct_ShowTargetNotification*           m_pTargetNotifSeq;                             // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisHUDDamageInfo
// 0x0018
struct FDisHUDDamageInfo
{
	int32_t                                            m_Damage;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_Momentum;                                    // 0x0004 (0x000C) [0x0000000000000000]               
	class AActor*                                      m_pDamageCauser;                               // 0x0010 (0x0004) [0x0000000000000000]               
	class ADishonoredPawn*                             m_pInstigator;                                 // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisUIInteractionProbe
// 0x000B
struct FDisUIInteractionProbe
{
	uint8_t                                            m_bCanAssassinate;                             // 0x0000 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bCanDropAssassinate : 1;                     // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            m_bCanAdrenalineKill;                          // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_bCanMantle;                                  // 0x0009 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_bCanChoke;                                   // 0x000A (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x1];                       // 0x000B (0x0001) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisUIInteraction
// 0x0008
struct FDisUIInteraction
{
	uint8_t                                            m_Index;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	struct FPointer                                    m_pText;                                       // 0x0004 (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisUIInteractionGroup
// 0x0024
struct FDisUIInteractionGroup
{
	struct FDisUIInteraction                           m_Interactions[4];                             // 0x0000 (0x0020) [0x0000000000000000]               
	int32_t                                            m_InteractionCount;                            // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisUIInteractionContext
// 0x0090
struct FDisUIInteractionContext
{
	struct FDisUIInteractionGroup                      m_Groups[4];                                   // 0x0000 (0x0090) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisPlayerStatus_Equipment
// 0x0014
struct FDisPlayerStatus_Equipment
{
	struct FPointer                                    m_pItem;                                       // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	uint8_t                                            m_Item;                                        // 0x0004 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bPowerActive : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bPowerHasMana : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            m_AmmoTotal;                                   // 0x000C (0x0004) [0x0000000000000000]               
	int32_t                                            m_LoadedAmmoCount;                             // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisPlayerStatus_Mana
// 0x0010
struct FDisPlayerStatus_Mana
{
	int32_t                                            m_Mana;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_ManaRegen;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_ManaMax;                                     // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bVisible : 1;                                // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bAvailable : 1;                              // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bHasUpgrade : 1;                             // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisPlayerStatus_Health
// 0x0010
struct FDisPlayerStatus_Health
{
	int32_t                                            m_Health;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_HealthRegen;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_HealthMax;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bHasSmallUpgrade : 1;                        // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bHasLargeUpgrade : 1;                        // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisCrosshairSettings
// 0x000C
struct FDisCrosshairSettings
{
	class FName                                        m_Name;                                        // 0x0000 (0x0008) [0x0000000000004000] (CPF_Config)  
	uint32_t                                           m_bShowDot : 1;                                // 0x0008 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           m_bSupportsDispersion : 1;                     // 0x0008 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerHUD.DisHUDSettings
// 0x0014
struct FDisHUDSettings
{
	uint8_t                                            m_HUDVisibility;                               // 0x0000 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bShowObjectivePopups : 1;                    // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bShowTutorialNotifications : 1;              // 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bShowInteractions : 1;                       // 0x0004 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bShowHighlight : 1;                          // 0x0004 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           m_bShowPickupLog : 1;                          // 0x0004 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           m_bShowContextualIcons : 1;                    // 0x0004 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           m_bShowPlayerStance : 1;                       // 0x0004 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           m_bShowObjectiveMarkers : 1;                   // 0x0004 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           m_bShowGrenadeMarkers : 1;                     // 0x0004 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           m_bShowAwarenessMarkers : 1;                   // 0x0004 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           m_bShowHeartTargetMarkers : 1;                 // 0x0004 (0x0004) [0x0000000000000000] [0x00000400] 
	uint8_t                                            m_CrosshairStyle;                              // 0x0008 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bCrosshairMovement : 1;                      // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fCrosshairOpacity;                           // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerJournal.DisObjectiveListItem
// 0x000C
struct FDisObjectiveListItem
{
	class UDishonoredObjective*                        m_pObjective;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	class UDishonoredTask_Base*                        m_pTask;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bActive : 1;                                 // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerJournal.DisJournalItem
// 0x001C
struct FDisJournalItem
{
	struct FPointer                                    m_pName;                                       // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	int32_t                                            m_Quantity;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_Section;                                     // 0x0008 (0x0001) [0x0000000000000000]               
	struct FPointer                                    m_pIconName;                                   // 0x000C (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    m_pStaticDescription;                          // 0x0010 (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    m_pAbstractItem;                               // 0x0014 (0x0004) [0x0000000000001000] (CPF_Native)  
	int32_t                                            m_Flags;                                       // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerJournal.DisJournalPowerSlot
// 0x0024
struct FDisJournalPowerSlot
{
	uint8_t                                            m_SelectionType;                               // 0x0000 (0x0001) [0x0000000000004000] (CPF_Config)  
	class FString                                      m_PowerId;                                     // 0x0004 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_BackgroundImagePath;                         // 0x0010 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint8_t                                            m_Note;                                        // 0x001C (0x0001) [0x0000000000004000] (CPF_Config)  
	uint32_t                                           m_bNoteRead : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredPawn.DisCachedPositionInfo
// 0x001C
struct FDisCachedPositionInfo
{
	float                                              m_CachedPositionTimeStamp;                     // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_CachedPosition;                              // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_CachedVelocity;                              // 0x0010 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredInventory.PawnInventorySlot
// 0x0009
struct FPawnInventorySlot
{
	class UDishonoredInventoryItem*                    m_pItem;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	class UDishonoredInventoryItem*                    m_pRequiredType;                               // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_RequiredUsage;                               // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredInventory.DisAmmoInfo
// 0x0008
struct FDisAmmoInfo
{
	int32_t                                            m_AmmoCount;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_AmmoCapacity;                                // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredInventory.DisEquipUsageInfo
// 0x0028
struct FDisEquipUsageInfo
{
	int32_t                                            m_iEquippedSlot;                               // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_iReequipSlot;                                // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_iReequipSlotNonEmpty;                        // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_iDropSlot_NextFrame;                         // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_VelocitySupplement;                          // 0x0010 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_RotationSupplement;                          // 0x001C (0x000C) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredPawn.PawnDodgeTarget
// 0x0014
struct FPawnDodgeTarget
{
	class ADishonoredPawn*                             m_pAttacker;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	class UDisItemContext*                             m_pAttackContext;                              // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_DodgeDir;                                    // 0x0008 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bDidDodge : 1;                               // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            m_TrackID;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPawn.DisVulnerableInfo
// 0x0014
struct FDisVulnerableInfo
{
	struct FDisZoneTracker                             m_Zone;                                        // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              m_fExtraVulnerableTime;                        // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fTimeOfLastExit;                             // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPawn.DisFootInfo
// 0x0028
struct FDisFootInfo
{
	class FName                                        m_FootBone;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_Foot_PlacementNode;                          // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class FName>                          m_Foot_AdditionalNodes;                        // 0x0010 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              m_fFootDownHeightOffsetFromRef;                // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFootUpDelta;                                // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFootTimeWindow;                             // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredPawn.DisFootCache
// 0x0030
struct FDisFootCache
{
	uint32_t                                           m_bHadFootFallTick : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bLastHit : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fFootTimer;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_RefFootPos;                                  // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_LastFootPosWorld;                            // 0x0014 (0x000C) [0x0000000000000000]               
	class UDisSkelControl_FootPlacement*               m_pFoot_PlacementNode;                         // 0x0020 (0x0004) [0x0000000000000000]               
	class TArray<class UDisSkelControl_FootPlacement*> m_pFoot_AdditionalNodes;                       // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredPawn.DisRegionCached
// 0x0010
struct FDisRegionCached
{
	struct FPointer                                    m_pRegionInfo;                                 // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	class TArray<int32_t>                              m_BBoxPhysicsBodies;                           // 0x0004 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredPawn.DisRegionBone
// 0x000C
struct FDisRegionBone
{
	class FName                                        m_BoneName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bUseInRegionBBox : 1;                        // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DishonoredPawn.DisRegionFocusInfo
// 0x0020
struct FDisRegionFocusInfo
{
	class FName                                        m_FocusBone;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     m_FocusOffset;                                 // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class TArray<class FName>                          m_AlternateFocusBones;                         // 0x0014 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredPawn.DisRegionInfo
// 0x00D0
struct FDisRegionInfo
{
	uint8_t                                            m_Region;                                      // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDisRegionBone>                m_BoneInfo;                                    // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FDisRegionFocusInfo                         m_FocusRegions[6];                             // 0x0010 (0x00C0) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredPawn.DisDeferredItemEquip
// 0x0008
struct FDisDeferredItemEquip
{
	class UDishonoredInventoryItem*                    m_pItemClass;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_Flags;                                       // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisRatTargetInterface.DisRatTargetContext
// 0x0014
struct FDisRatTargetContext
{
	class TArray<class FName>                          m_UnavailableRatSockets;                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            m_EatenState;                                  // 0x000C (0x0001) [0x0000000000000000]               
	int32_t                                            m_EaterCount;                                  // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisConvSpeakerInterface.DisConvSpeakerLocInfoAudioPropagationCache
// 0x0020
struct FDisConvSpeakerLocInfoAudioPropagationCache
{
	struct FVector                                     m_Location;                                    // 0x0000 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_PlayerLocation;                              // 0x000C (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              m_Distance;                                    // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fMaxAudibleDistance;                         // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisGlobalStructs.PawnAction
// 0x002C
struct FPawnAction
{
	class FName                                        m_ActionName;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class FName>                          m_AnimStates;                                  // 0x0008 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           m_bCanMove : 1;                                // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bCanLook : 1;                                // 0x0014 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           m_bNoInterrupt : 1;                            // 0x0014 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           m_bAesthetic : 1;                              // 0x0014 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           m_bAllowSelfInterrupt : 1;                     // 0x0014 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           m_bAllowAttackToInterrupt : 1;                 // 0x0014 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           m_bAllowDodgeToInterrupt : 1;                  // 0x0014 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           m_bAllowParryToInterrupt : 1;                  // 0x0014 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           m_bAllowReloadToInterrupt : 1;                 // 0x0014 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	uint32_t                                           m_bInterruptsStun : 1;                         // 0x0014 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	uint8_t                                            m_DeathType;                                   // 0x0018 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_CustomDeathAnimState;                        // 0x001C (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fPlayRateOverride;                           // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bActionUsesLeftHand : 1;                     // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bAutomaticallyStopSneaking : 1;              // 0x0028 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           m_bDisableFootPlacement : 1;                   // 0x0028 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           m_bForceVisionForward : 1;                     // 0x0028 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           m_bSpineBendTowardsTarget : 1;                 // 0x0028 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisRangedFloat
// 0x0008
struct FDisRangedFloat
{
	float                                              m_fMinValue;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxValue;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisRangedInt
// 0x0008
struct FDisRangedInt
{
	int32_t                                            m_MinValue;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MaxValue;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisLocRot
// 0x0018
struct FDisLocRot
{
	struct FVector                                     m_Loc;                                         // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_Rot;                                         // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisSpotlightManager
// 0x0018
struct FDisSpotlightManager
{
	class UMaterialInstanceConstant*                   m_pLight_MIC;                                  // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fCurrentLightIntensity;                      // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fCurrentLightAngle;                          // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fOriginalInnerToOuterRatio;                  // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fOriginalLightBrightness;                    // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fOriginalMaterialOpacity;                    // 0x0014 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisLineProbeResult
// 0x0054
struct FDisLineProbeResult
{
	struct FImpactInfo                                 m_ImpactInfo;                                  // 0x0000 (0x0050) [0x0000000000080000] (CPF_Component)
	float                                              m_fCheckResult_Time;                           // 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisDispositionChange
// 0x0005
struct FDisDispositionChange
{
	class UDisTweaks_Faction*                          m_pFaction;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_Relationship;                                // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisGlobalStructs.FollowParameters
// 0x0009
struct FFollowParameters
{
	float                                              m_fDistance;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAngle;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_eDesiredSpeed;                               // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisGlobalStructs.ImmolationParams
// 0x0022
struct FImmolationParams
{
	float                                              m_fDamageRadius;                               // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fDamagePeriod;                               // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fDamage;                                     // 0x0008 (0x0004) [0x0000400000000001] (CPF_Edit)    
	class UDishonoredDamageType*                       m_pDamageType;                                 // 0x000C (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fAvoidanceRadius;                            // 0x0010 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fRatLightRadius;                             // 0x0014 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fRatLightStrength;                           // 0x0018 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fNoisePeriod;                                // 0x001C (0x0004) [0x0000400000000001] (CPF_Edit)    
	uint8_t                                            m_NoiseLoudness;                               // 0x0020 (0x0001) [0x0000400000000001] (CPF_Edit)    
	uint8_t                                            m_NoiseContext;                                // 0x0021 (0x0001) [0x0000400000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x2];                       // 0x0022 (0x0002) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisMaterialSetting
// 0x0008
struct FDisMaterialSetting
{
	int32_t                                            m_MaterialIndex;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          m_pMaterial;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisMaterialReplacement
// 0x0008
struct FDisMaterialReplacement
{
	class UMaterialInterface*                          m_pDefaultMaterial;                            // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UMaterialInterface*                          m_pCustomMaterial;                             // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisMaterialsOverride
// 0x000C
struct FDisMaterialsOverride
{
	class TArray<struct FDisMaterialReplacement>       m_MaterialReplacements;                        // 0x0000 (0x000C) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisDirectionConstraint
// 0x000C
struct FDisDirectionConstraint
{
	uint8_t                                            m_Direction;                                   // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FDisRangedFloat                             m_AngleRange;                                  // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisCameraRumbleAxis
// 0x0014
struct FDisCameraRumbleAxis
{
	float                                              m_fAmplitude;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFrequency;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDuration;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fEaseInSeconds;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fEaseOutSeconds;                             // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisGlobalStructs.DisCameraSustainedRumble
// 0x003C
struct FDisCameraSustainedRumble
{
	struct FDisCameraRumbleAxis                        m_Rumble_Pitch;                                // 0x0000 (0x0014) [0x0000000000000001] (CPF_Edit)    
	struct FDisCameraRumbleAxis                        m_Rumble_Yaw;                                  // 0x0014 (0x0014) [0x0000000000000001] (CPF_Edit)    
	struct FDisCameraRumbleAxis                        m_Rumble_Roll;                                 // 0x0028 (0x0014) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_ActivePowerBase.Power_RumbleAndShake
// 0x0048
struct FPower_RumbleAndShake
{
	class UWaveFormBase*                               m_pRumblePredefinedWaveForm;                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UForceFeedbackWaveform*                      m_pRumbleCustomWaveForm;                       // 0x0004 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
	struct FDisCameraSustainedRumble                   m_CameraShakeSettings;                         // 0x0008 (0x003C) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fCameraShakeRange;                           // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDarkVisionPpController.DisDarkVisionPpGlobalParameters
// 0x00CC
struct FDisDarkVisionPpGlobalParameters
{
	class UMaterialInterface*                          m_EyeLidMaterial;                              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          m_PowerMaterial;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FArkUberPpParameters                        m_StaticUberAdjustement;                       // 0x0008 (0x0060) [0x0000000000000001] (CPF_Edit)    
	struct FArkUberPpParameters                        m_DynamicUberAdjustement;                      // 0x0068 (0x0060) [0x0000000000000001] (CPF_Edit)    
	struct FColor                                      m_ClosedLidColor;                              // 0x00C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDarkVisionPpController.DisDarkVisionPpPerLevelParameters
// 0x0010
struct FDisDarkVisionPpPerLevelParameters
{
	float                                              m_EyeLidClosingDuration;                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_EyeLidOpeningDuration;                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_PowerFadeInDuration;                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_PowerFadeOutDuration;                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_DarkVision.PowerAttributes_DarkVision
// 0x0038
struct FPowerAttributes_DarkVision
{
	float                                              m_fDuration;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDistance;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFadeStartAtDistance;                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fSecondaryEffectDistance;                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pActivationSoundEvent;                       // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pDeactivationSoundEvent;                     // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          m_pSoulMaterial;                               // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          m_pItemMaterial;                               // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          m_pMechanicMaterial;                           // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_AINoiseVisualEffect;                         // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDisDarkVisionPpPerLevelParameters          m_PpPerLevelParameters;                        // 0x0028 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisActivePowerComponent_DarkVision.DisplayedSoul
// 0x000C
struct FDisplayedSoul
{
	class AActor*                                      m_pActor;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPointer                                    m_pSoul;                                       // 0x0004 (0x0004) [0x0000000000001000] (CPF_Native)  
	int32_t                                            m_UpdateTag;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisSerializableObject_Base.DisSerializableObject
// 0x0004
struct FDisSerializableObject
{
	struct FPointer                                    m_VTable_Pointer_Dummy;                        // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct
// 0x0010 (0x0004 - 0x0014)
struct FAIStimStruct : FDisSerializableObject
{
	uint8_t                                            m_StimID;                                      // 0x0004 (0x0001) [0x0000000000000000]               
	int32_t                                            m_RefCount;                                    // 0x0008 (0x0004) [0x0002000000000000]               
	class UDisStimManager*                             m_pStimManager;                                // 0x000C (0x0004) [0x0000000000000000]               
	class UObject*                                     m_pSource;                                     // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_WitnessDeath
// 0x0018 (0x0014 - 0x002C)
struct FAIStimStruct_WitnessDeath : FAIStimStruct
{
	class UDisCorpseInterface*                         m_pDeadBody_Object;                            // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisCorpseInterface*                         m_pDeadBody_Interface;                         // 0x0014 (0x0008) [0x0000000000000000]               
	class ADishonoredPawn*                             m_pCulprit;                                    // 0x001C (0x0004) [0x0000000000000000]               
	struct FVector                                     m_KillerLocation;                              // 0x0020 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_CoordinatedAttackRequest
// 0x000C (0x0014 - 0x0020)
struct FAIStimStruct_CoordinatedAttackRequest : FAIStimStruct
{
	class ADishonoredNPCPawn*                          m_pRequestingPawn;                             // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_eStage;                                      // 0x0018 (0x0001) [0x0000000000000000]               
	float                                              m_fTimerToUse;                                 // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_NoMoreWolfHoundInFight
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_NoMoreWolfHoundInFight : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_PlayerHideoutTransition
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_PlayerHideoutTransition : FAIStimStruct
{
	class UDisHideoutComponent*                        m_pHideout;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bActivating : 1;                             // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bWitnessed : 1;                              // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bForAttention : 1;                           // 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bSwitchedHideout : 1;                        // 0x0018 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_WitnessPickpocket
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_WitnessPickpocket : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_WitnessShadowKill
// 0x0010 (0x0014 - 0x0024)
struct FAIStimStruct_WitnessShadowKill : FAIStimStruct
{
	class ADishonoredPawn*                             m_pKiller;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_ShadowKillLoc;                               // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_Teleported
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_Teleported : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DLC07_SightedRiverKrust
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_DLC07_SightedRiverKrust : FAIStimStruct
{
	class ADisRiverKrust*                              m_pRiverKrust;                                 // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.DisQueuedDialogHookInfo
// 0x000C
struct FDisQueuedDialogHookInfo
{
	uint8_t                                            m_Hook;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	class UDisConvSpeakerInterface*                    m_pInitiator_Object;                           // 0x0004 (0x0008) [0x0000000000000000] 
	class UDisConvSpeakerInterface*                    m_pInitiator_Interface;                        // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DLC07_Pulled
// 0x000C (0x0014 - 0x0020)
struct FAIStimStruct_DLC07_Pulled : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pInstigator_Object;                          // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pInstigator_Interface;                       // 0x0014 (0x0008) [0x0000000000000000]               
	float                                              m_fAttnProxyLocRatio;                          // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DLC07_Resurrected
// 0x0048 (0x0014 - 0x005C)
struct FAIStimStruct_DLC07_Resurrected : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pTopEnemyAtDeath_Object;                     // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pTopEnemyAtDeath_Interface;                  // 0x0014 (0x0008) [0x0000000000000000]               
	struct FDisAttentionProxyInfo                      m_TopEnemyProxyInfoAtDeath;                    // 0x001C (0x0040) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DLC06_WitnessSilentExplosion
// 0x0018 (0x0014 - 0x002C)
struct FAIStimStruct_DLC06_WitnessSilentExplosion : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pExplosionInstigator_Object;                 // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pExplosionInstigator_Interface;              // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector                                     m_ExplosionLocation;                           // 0x001C (0x000C) [0x0000000000000000]               
	float                                              m_fExplosionRadius;                            // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DLC06_SmokeBombed
// 0x0014 (0x0014 - 0x0028)
struct FAIStimStruct_DLC06_SmokeBombed : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pAttacker_Object;                            // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pAttacker_Interface;                         // 0x0014 (0x0008) [0x0000000000000000]               
	struct FVector                                     m_BombLocation;                                // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DLC06_OnAssassummon
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_DLC06_OnAssassummon : FAIStimStruct
{
	class ADishonoredNPCPawn*                          m_pSummonTarget;                               // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_WitnessMagic
// 0x000C (0x0014 - 0x0020)
struct FAIStimStruct_WitnessMagic : FAIStimStruct
{
	class UDishonoredActivePowerComponent*             m_pActivePowerClass;                           // 0x0014 (0x0004) [0x0000000000000000]               
	class ADishonoredPawn*                             m_pMagicUser;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bDisappearance : 1;                          // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_Traveled
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_Traveled : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_TouchedNeutral
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_TouchedNeutral : FAIStimStruct
{
	class ADishonoredPawn*                             m_pPawn;                                       // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_TouchedEnemy
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_TouchedEnemy : FAIStimStruct
{
	class ADishonoredPawn*                             m_pPawn;                                       // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bSendKismetEvent : 1;                        // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_TouchedAlly
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_TouchedAlly : FAIStimStruct
{
	class ADishonoredPawn*                             m_pPawn;                                       // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_TopAttnProxyUpdated
// 0x0014 (0x0014 - 0x0028)
struct FAIStimStruct_TopAttnProxyUpdated : FAIStimStruct
{
	uint8_t                                            m_RelationshipToTopAttnProxy;                  // 0x0014 (0x0001) [0x0000000000000000]               
	struct FDisAttentionProxy                          m_TopAttnProxy;                                // 0x0018 (0x0010) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_TopAttnProxyReplaced
// 0x0010 (0x0014 - 0x0024)
struct FAIStimStruct_TopAttnProxyReplaced : FAIStimStruct
{
	struct FDisAttentionProxy                          m_NewTopAttnProxy;                             // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_TetherRequest
// 0x0018 (0x0014 - 0x002C)
struct FAIStimStruct_TetherRequest : FAIStimStruct
{
	class ADisTetherVolume*                            m_pTetherVolume;                               // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bIsRequestingTether : 1;                     // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FDisAttentionProxy                          m_EnemyProxy;                                  // 0x001C (0x0010) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_TargetUnsighted
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_TargetUnsighted : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pTarget_Object;                              // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pTarget_Interface;                           // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_TargetTouched
// 0x000C (0x0014 - 0x0020)
struct FAIStimStruct_TargetTouched : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pTarget_Object;                              // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pTarget_Interface;                           // 0x0014 (0x0008) [0x0000000000000000]               
	uint32_t                                           m_bUnpossessTouch : 1;                         // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_TargetSighted
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_TargetSighted : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pTarget_Object;                              // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pTarget_Interface;                           // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_SuspicionLevelChanged
// 0x0001 (0x0014 - 0x0015)
struct FAIStimStruct_SuspicionLevelChanged : FAIStimStruct
{
	uint8_t                                            m_NewSuspicionLevel;                           // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_Stolen
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_Stolen : FAIStimStruct
{
	float                                              m_fDelay;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_SoireeRejected
// 0x0018 (0x0014 - 0x002C)
struct FAIStimStruct_SoireeRejected : FAIStimStruct
{
	struct FGuid                                       m_SoireeGUID;                                  // 0x0014 (0x0010) [0x0000000000000000]               
	uint8_t                                            m_SoireePriority;                              // 0x0024 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bFromBlockingDialog : 1;                     // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_Soiree
// 0x0018 (0x0014 - 0x002C)
struct FAIStimStruct_Soiree : FAIStimStruct
{
	struct FGuid                                       m_SoireeGUID;                                  // 0x0014 (0x0010) [0x0000000000000000]               
	uint8_t                                            m_SoireeEvent;                                 // 0x0024 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_SoireePriority;                              // 0x0025 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bIsBlocking : 1;                             // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_SightedRatSwarm
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_SightedRatSwarm : FAIStimStruct
{
	class ADisRatSwarm*                                m_pRatSwarm;                                   // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ShownRangedThreat
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_ShownRangedThreat : FAIStimStruct
{
	class ADishonoredPawn*                             m_pPawn;                                       // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ShootRequest
// 0x0014 (0x0014 - 0x0028)
struct FAIStimStruct_ShootRequest : FAIStimStruct
{
	class AActor*                                      m_pTarget;                                     // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bShootForever : 1;                           // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            m_iMaxNumShots;                                // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bOverrideAccuracy : 1;                       // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fOverrideAccuracyPercentage;                 // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_SetMinAttentionForTarget
// 0x000A (0x0014 - 0x001E)
struct FAIStimStruct_SetMinAttentionForTarget : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pForTarget_Object;                           // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pForTarget_Interface;                        // 0x0014 (0x0008) [0x0000000000000000]               
	uint8_t                                            m_MinAttentionLevel;                           // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            m_Type;                                        // 0x001D (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                       // 0x001E (0x0002) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisAttentionInfo_Complex.DisAttentionIncreaseInfo
// 0x0020
struct FDisAttentionIncreaseInfo
{
	struct FVector                                     m_Loc;                                         // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Vel;                                         // 0x000C (0x000C) [0x0000000000000000]               
	float                                              m_fHeight;                                     // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            m_AttentionTag;                                // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_SearchRequest
// 0x002C (0x0014 - 0x0040)
struct FAIStimStruct_SearchRequest : FAIStimStruct
{
	class ADishonoredNPCPawn*                          m_pSearchingAlly;                              // 0x0014 (0x0004) [0x0000000000000000]               
	class ADishonoredPawn*                             m_pTroubleMaker;                               // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_SearchRequestCause;                          // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            m_SearchRequesterTransitSpeed;                 // 0x001D (0x0001) [0x0000000000000000]               
	struct FDisAttentionIncreaseInfo                   m_ProxyInfo;                                   // 0x0020 (0x0020) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAttentionInfo_Complex.DisAttentionPendingChange
// 0x002C
struct FDisAttentionPendingChange
{
	struct FDisAttentionIncreaseInfo                   m_PendingChangeInfo;                           // 0x0000 (0x0020) [0x0000000000000000]               
	struct FDisAttentionChangeReasonInfo               m_PendingReasonInfo;                           // 0x0020 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_SearchReachedProxy
// 0x0010 (0x0014 - 0x0024)
struct FAIStimStruct_SearchReachedProxy : FAIStimStruct
{
	struct FDisAttentionProxy                          m_Proxy;                                       // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAttentionInfo_Complex.DisAttentionChangeDebugInfo
// 0x0009
struct FDisAttentionChangeDebugInfo
{
	uint8_t                                            m_ReasonType;                                  // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              m_fByAmount;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_ToThreshold;                                 // 0x0008 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_SearchEnd
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_SearchEnd : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_AttentionBehaviorBegin
// 0x0020 (0x0014 - 0x0034)
struct FAIStimStruct_AttentionBehaviorBegin : FAIStimStruct
{
	struct FDisAttentionProxy                          m_AttentionTargetProxy;                        // 0x0014 (0x0010) [0x0000000000000000]               
	struct FDisAttentionChangeReason                   m_AttentionChangeReason;                       // 0x0024 (0x0010) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_SearchBegin
// 0x0000 (0x0034 - 0x0034)
struct FAIStimStruct_SearchBegin : FAIStimStruct_AttentionBehaviorBegin
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_AttackedByEnemy
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_AttackedByEnemy : FAIStimStruct
{
	class ADishonoredPawn*                             m_pPawn;                                       // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ScrambleRequest
// 0x000C (0x0014 - 0x0020)
struct FAIStimStruct_ScrambleRequest : FAIStimStruct
{
	class ADishonoredPawn*                             m_pAmbushTarget;                               // 0x0014 (0x0004) [0x0000000000000000]               
	class ADisAmbushPoint*                             m_pAmbushPoint;                                // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            m_ScramblerCount;                              // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_RotationReached
// 0x0010 (0x0014 - 0x0024)
struct FAIStimStruct_RotationReached : FAIStimStruct
{
	struct FVector                                     m_RotationFocus;                               // 0x0014 (0x000C) [0x0000000000000000]               
	class UObject*                                     m_pRequestOriginator;                          // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ReturnTravelRequest
// 0x0010 (0x0014 - 0x0024)
struct FAIStimStruct_ReturnTravelRequest : FAIStimStruct
{
	struct FVector                                     m_ReturnDestination;                           // 0x0014 (0x000C) [0x0000000000000000]               
	int32_t                                            m_DestinationYaw;                              // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_RelationshipChanged
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_RelationshipChanged : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ReactionRequest
// 0x0015 (0x0014 - 0x0029)
struct FAIStimStruct_ReactionRequest : FAIStimStruct
{
	uint8_t                                            m_eAnimationToPlay;                            // 0x0014 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bDoFaceTo : 1;                               // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_ReactPos;                                    // 0x001C (0x000C) [0x0000000000000000]               
	uint8_t                                            m_eBarkToPlay;                                 // 0x0028 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0029 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ReachabilityChange
// 0x0015 (0x0014 - 0x0029)
struct FAIStimStruct_ReachabilityChange : FAIStimStruct
{
	class ADishonoredPawn*                             m_pPawn;                                       // 0x0014 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_vAdvisedMeleePos;                            // 0x0018 (0x000C) [0x0000000000000000]               
	uint32_t                                           m_bJustBecameUnReachable : 1;                  // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            m_eNewReachability;                            // 0x0028 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0029 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_PsychicAttentionDisabled_AllTargets
// 0x0001 (0x0014 - 0x0015)
struct FAIStimStruct_PsychicAttentionDisabled_AllTargets : FAIStimStruct
{
	uint8_t                                            m_Type;                                        // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_PsychicAttentionDisabled
// 0x0009 (0x0014 - 0x001D)
struct FAIStimStruct_PsychicAttentionDisabled : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pForTarget_Object;                           // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pForTarget_Interface;                        // 0x0014 (0x0008) [0x0000000000000000]               
	uint8_t                                            m_Type;                                        // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x001D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_PsychicAttentionEnabled
// 0x0009 (0x0014 - 0x001D)
struct FAIStimStruct_PsychicAttentionEnabled : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pForTarget_Object;                           // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pForTarget_Interface;                        // 0x0014 (0x0008) [0x0000000000000000]               
	uint8_t                                            m_Type;                                        // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x001D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ProjectileLaunched
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_ProjectileLaunched : FAIStimStruct
{
	class ADisProjectile*                              m_pProjectile;                                 // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_PlayerUsed
// 0x0001 (0x0014 - 0x0015)
struct FAIStimStruct_PlayerUsed : FAIStimStruct
{
	uint8_t                                            m_CrosshairStatus;                             // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_PlayerMessingWithActor
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_PlayerMessingWithActor : FAIStimStruct
{
	class AActor*                                      m_pMessedWith;                                 // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_PlagueZone
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_PlagueZone : FAIStimStruct
{
	uint32_t                                           m_bJustEntered : 1;                            // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class ADishonoredPawn*                             m_pPlagueSource;                               // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_PatrolSearchRequest
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_PatrolSearchRequest : FAIStimStruct
{
	class AActor*                                      m_pStartingActor;                              // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_PatrolRequest
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_PatrolRequest : FAIStimStruct
{
	class AActor*                                      m_pStartingActor;                              // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_PathingSuccess
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_PathingSuccess : FAIStimStruct
{
	class UObject*                                     m_pRequestOriginator;                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_PathingFail
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_PathingFail : FAIStimStruct
{
	class UObject*                                     m_pRequestOriginator;                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_Panicked
// 0x0009 (0x0014 - 0x001D)
struct FAIStimStruct_Panicked : FAIStimStruct
{
	class AActor*                                      m_pPanicActor;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bCheckPanicCount : 1;                        // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            m_ePanicReason;                                // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x001D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_NPCReachAttentionLevel
// 0x000C (0x0014 - 0x0020)
struct FAIStimStruct_NPCReachAttentionLevel : FAIStimStruct
{
	uint8_t                                            m_OldAttentionLevel;                           // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_NewAttentionLevel;                           // 0x0015 (0x0001) [0x0000000000000000]               
	class UDisAttentionTargetInterface*                m_pAttentionTarget_Object;                     // 0x0018 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pAttentionTarget_Interface;                  // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_NoticeRequest
// 0x002C (0x0014 - 0x0040)
struct FAIStimStruct_NoticeRequest : FAIStimStruct
{
	class ADishonoredPawn*                             m_pNoticer;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	class UDisAttentionTargetInterface*                m_pNoticedTarget_Object;                       // 0x0018 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pNoticedTarget_Interface;                    // 0x0018 (0x0008) [0x0000000000000000]               
	struct FDisAttentionIncreaseInfo                   m_IncreaseInfo;                                // 0x0020 (0x0020) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_NoticeEnd
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_NoticeEnd : FAIStimStruct
{
	uint32_t                                           m_bShouldBark : 1;                             // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_NoticeBegin
// 0x0000 (0x0034 - 0x0034)
struct FAIStimStruct_NoticeBegin : FAIStimStruct_AttentionBehaviorBegin
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_MeleeConnected_Outgoing
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_MeleeConnected_Outgoing : FAIStimStruct
{
	class ADishonoredPawn*                             m_pEnemy;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_MaxOutAttention
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_MaxOutAttention : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pForTarget_Object;                           // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pForTarget_Interface;                        // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_LocoPushedByPlayer
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_LocoPushedByPlayer : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ItemContext_Start
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_ItemContext_Start : FAIStimStruct
{
	class UDisItemContext*                             m_pItemContext;                                // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ItemContext_End
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_ItemContext_End : FAIStimStruct
{
	class UDisItemContext*                             m_pItemContext;                                // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_Intimidated
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_Intimidated : FAIStimStruct
{
	class ADishonoredPawn*                             m_pTerrorist;                                  // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_InteractEnd
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_InteractEnd : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_InteractBegin
// 0x0010 (0x0014 - 0x0024)
struct FAIStimStruct_InteractBegin : FAIStimStruct
{
	uint32_t                                           m_bInterruptable : 1;                          // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_BodyFacingDir;                               // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_InhibitEnd
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_InhibitEnd : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_InhibitBegin
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_InhibitBegin : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_IncomingDamage
// 0x001C (0x0014 - 0x0030)
struct FAIStimStruct_IncomingDamage : FAIStimStruct
{
	class AActor*                                      m_pAttacker;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	class UObject*                                     m_pDamageType;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iDamageAmount;                               // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bHasDamageCauserLoc : 1;                     // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_DamageCauserLoc;                             // 0x0024 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ImpendingExplosion
// 0x0010 (0x0014 - 0x0024)
struct FAIStimStruct_ImpendingExplosion : FAIStimStruct
{
	class AActor*                                      m_pExplodingActor;                             // 0x0014 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_vExplosionPosition;                          // 0x0018 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_IdleRequest
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_IdleRequest : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_HelpFromRats
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_HelpFromRats : FAIStimStruct
{
	class ADishonoredNPCPawn*                          m_pNPCInTrouble;                               // 0x0014 (0x0004) [0x0000000000000000]               
	class ADisRatSwarm*                                m_pRatSwarm;                                   // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_Help
// 0x0028 (0x0014 - 0x003C)
struct FAIStimStruct_Help : FAIStimStruct
{
	class ADishonoredNPCPawn*                          m_pNPCInTrouble;                               // 0x0014 (0x0004) [0x0000000000000000]               
	class ADishonoredPawn*                             m_pTroubleMaker;                               // 0x0018 (0x0004) [0x0000000000000000]               
	struct FDisAttentionIncreaseInfo                   m_ProxyInfo;                                   // 0x001C (0x0020) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_HeadTrackEnd
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_HeadTrackEnd : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_HeadTrackBegin
// 0x0010 (0x0014 - 0x0024)
struct FAIStimStruct_HeadTrackBegin : FAIStimStruct
{
	struct FDisAttentionProxy                          m_HeadTrackTargetProxy;                        // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_HeardCorpseSplat
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_HeardCorpseSplat : FAIStimStruct
{
	class UDisCorpseInterface*                         m_pCorpse_Object;                              // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisCorpseInterface*                         m_pCorpse_Interface;                           // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisNoiseListenerInterface.DisAINoiseParameters
// 0x0030
struct FDisAINoiseParameters
{
	class ADishonoredPawn*                             m_pNoiseMakerPawn;                             // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        m_NoiseCauserName;                             // 0x0004 (0x0008) [0x0000000000000000]               
	struct FVector                                     m_NoiseOrigin;                                 // 0x000C (0x000C) [0x0000000000000000]               
	uint8_t                                            m_Loudness;                                    // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_NoiseContext;                                // 0x0019 (0x0001) [0x0000000000000000]               
	class AActor*                                      m_pNotedActor;                                 // 0x001C (0x0004) [0x0000000000000000]               
	struct FVector                                     m_NotedPosition;                               // 0x0020 (0x000C) [0x0000000000000000]               
	int32_t                                            m_NoiseFlags;                                  // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_HeardSomething
// 0x0030 (0x0014 - 0x0044)
struct FAIStimStruct_HeardSomething : FAIStimStruct
{
	struct FDisAINoiseParameters                       m_NoiseParams;                                 // 0x0014 (0x0030) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_GuardRequest
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_GuardRequest : FAIStimStruct
{
	class AActor*                                      m_pHomeActor;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              m_fGuardAwarenessRadius;                       // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_GoToRequest
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_GoToRequest : FAIStimStruct
{
	class UDisSeqAct_AIGoToActor*                      m_pAssociatedKismetGoToAction;                 // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ForceRingAlarm
// 0x0014 (0x0014 - 0x0028)
struct FAIStimStruct_ForceRingAlarm : FAIStimStruct
{
	class ADishonoredPawn*                             m_pEnemy;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bUseEnemyLocOverride : 1;                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_EnemyLocOverride;                            // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_FollowRequest
// 0x0014 (0x0014 - 0x0028)
struct FAIStimStruct_FollowRequest : FAIStimStruct
{
	class ADishonoredPawn*                             m_pFollowedPawn;                               // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bInterruptable : 1;                          // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bOverwriteFollowParameters : 1;              // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FFollowParameters                           m_OverwriteFollowParameters;                   // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_Explosion
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_Explosion : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_EvadedMelee_Outgoing
// 0x0009 (0x0014 - 0x001D)
struct FAIStimStruct_EvadedMelee_Outgoing : FAIStimStruct
{
	class UDisItemContext_MeleeAttack*                 m_pOutgoingAttackContext;                      // 0x0014 (0x0004) [0x0000000000000000]               
	class UDisItemContext_MeleeBlock*                  m_pEnemyBlockContext;                          // 0x0018 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_EvasionType;                                 // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x001D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_EvadedMelee_Incoming
// 0x0005 (0x0014 - 0x0019)
struct FAIStimStruct_EvadedMelee_Incoming : FAIStimStruct
{
	class UDisItemContext_MeleeAttack*                 m_pMeleeAttackContext;                         // 0x0014 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_EvasionType;                                 // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0019 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_EscapedBeingPossessed
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_EscapedBeingPossessed : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pPossessor_Object;                           // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pPossessor_Interface;                        // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_EscapedBeingChoked
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_EscapedBeingChoked : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pChoker_Object;                              // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pChoker_Interface;                           // 0x0014 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_EnemyBusted
// 0x0014 (0x0014 - 0x0028)
struct FAIStimStruct_EnemyBusted : FAIStimStruct
{
	class ADishonoredPawn*                             m_pTargetEnemy;                                // 0x0014 (0x0004) [0x0000000000000000]               
	struct FDisAttentionChangeReason                   m_AttentionChangeReason;                       // 0x0018 (0x0010) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_EndPossession
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_EndPossession : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_EndDistracted
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_EndDistracted : FAIStimStruct
{
	class UDisNPCDistractionComponent*                 m_pDistraction;                                // 0x0014 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DoorUsedByPlayerWhileWary
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_DoorUsedByPlayerWhileWary : FAIStimStruct
{
	class ADisDoor*                                    m_pDoor;                                       // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DoorUsedByPlayer
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_DoorUsedByPlayer : FAIStimStruct
{
	class ADisDoor*                                    m_pDoor;                                       // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DocileRatIsNear
// 0x000C (0x0014 - 0x0020)
struct FAIStimStruct_DocileRatIsNear : FAIStimStruct
{
	class ADisGameCrowdAgentSkeletalRat*               m_pDocileRat;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bPossessedByThePlayer : 1;                   // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fInteractionRadius;                          // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_Distracted_HeadLook
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_Distracted_HeadLook : FAIStimStruct
{
	class UDisNPCDistractionComponent*                 m_pDistraction;                                // 0x0014 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_Distracted_Anim
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_Distracted_Anim : FAIStimStruct
{
	class UDisNPCDistractionComponent*                 m_pDistraction;                                // 0x0014 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DiscoveredCorpse
// 0x0018 (0x0014 - 0x002C)
struct FAIStimStruct_DiscoveredCorpse : FAIStimStruct
{
	class UDisCorpseInterface*                         m_pDeadBody_Object;                            // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisCorpseInterface*                         m_pDeadBody_Interface;                         // 0x0014 (0x0008) [0x0000000000000000]               
	class ADishonoredPawn*                             m_pCulprit;                                    // 0x001C (0x0004) [0x0000000000000000]               
	struct FVector                                     m_DiscoveredLoc;                               // 0x0020 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DialogAttentionChange
// 0x0009 (0x0014 - 0x001D)
struct FAIStimStruct_DialogAttentionChange : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pTarget_Object;                              // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pTarget_Interface;                           // 0x0014 (0x0008) [0x0000000000000000]               
	uint8_t                                            m_ToThreshold;                                 // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x001D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DifficultyChanged
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_DifficultyChanged : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DestinationReached
// 0x0014 (0x0014 - 0x0028)
struct FAIStimStruct_DestinationReached : FAIStimStruct
{
	struct FVector                                     m_Location;                                    // 0x0014 (0x000C) [0x0000000000000000]               
	uint32_t                                           m_bExact : 1;                                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	class UObject*                                     m_pRequestOriginator;                          // 0x0024 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_DeathByWoL
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_DeathByWoL : FAIStimStruct
{
	class ADishonoredPawn*                             m_pDeadPawn;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	class ADisWallOfLight*                             m_pWoL;                                        // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_CombatToSearch
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_CombatToSearch : FAIStimStruct
{
	uint32_t                                           m_bWantCombatLostBark : 1;                     // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	class ADishonoredPawn*                             m_pGroupedAlly;                                // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_CombatEngageRejected
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_CombatEngageRejected : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_CombatEnd
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_CombatEnd : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_CombatBegin
// 0x0000 (0x0034 - 0x0034)
struct FAIStimStruct_CombatBegin : FAIStimStruct_AttentionBehaviorBegin
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ClearMinAttentionForTarget
// 0x0009 (0x0014 - 0x001D)
struct FAIStimStruct_ClearMinAttentionForTarget : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pForTarget_Object;                           // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pForTarget_Interface;                        // 0x0014 (0x0008) [0x0000000000000000]               
	uint8_t                                            m_Type;                                        // 0x001C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x001D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ClearAttention
// 0x000C (0x0014 - 0x0020)
struct FAIStimStruct_ClearAttention : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pForTarget_Object;                           // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pForTarget_Interface;                        // 0x0014 (0x0008) [0x0000000000000000]               
	float                                              m_fForHowLong;                                 // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ClearAllMinAttention
// 0x0001 (0x0014 - 0x0015)
struct FAIStimStruct_ClearAllMinAttention : FAIStimStruct
{
	uint8_t                                            m_Type;                                        // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_CarryCorpseOrBodyPart
// 0x000C (0x0014 - 0x0020)
struct FAIStimStruct_CarryCorpseOrBodyPart : FAIStimStruct
{
	class ADishonoredPawn*                             m_pCarrier;                                    // 0x0014 (0x0004) [0x0000000000000000]               
	class UDisCorpseInterface*                         m_pCorpseOrBodyPart_Object;                    // 0x0018 (0x0008) [0x0000000000000000] 
	class UDisCorpseInterface*                         m_pCorpseOrBodyPart_Interface;                 // 0x0018 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_BrainInit
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_BrainInit : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_BlockingDialogEnd
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_BlockingDialogEnd : FAIStimStruct
{
	int32_t                                            m_iRunningInstID;                              // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_BlockingDialogRequest
// 0x0008 (0x0014 - 0x001C)
struct FAIStimStruct_BlockingDialogRequest : FAIStimStruct
{
	int32_t                                            m_iRunningInstID;                              // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bStopBlockingForAINotice : 1;                // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_BehaviorAbort
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_BehaviorAbort : FAIStimStruct
{
	class UDishonoredAIBehavior*                       m_AbortedBehavior;                             // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_BattleVictory
// 0x0010 (0x0014 - 0x0024)
struct FAIStimStruct_BattleVictory : FAIStimStruct
{
	struct FDisAttentionProxy                          m_EnemyProxy;                                  // 0x0014 (0x0010) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_AmbushAbortRequest
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_AmbushAbortRequest : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_AmbushRequest
// 0x0010 (0x0014 - 0x0024)
struct FAIStimStruct_AmbushRequest : FAIStimStruct
{
	class ADisAmbushPoint*                             m_pAmbushPoint;                                // 0x0014 (0x0004) [0x0000000000000000]               
	class ADishonoredPawn*                             m_pAmbushTarget;                               // 0x0018 (0x0004) [0x0000000000000000]               
	class AActor*                                      m_pFleeTarget;                                 // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bLieInWaitIndefinitely : 1;                  // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_AllyBusted
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_AllyBusted : FAIStimStruct
{
	class ADishonoredPawn*                             m_pPawn;                                       // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_Alarm
// 0x0010 (0x0014 - 0x0024)
struct FAIStimStruct_Alarm : FAIStimStruct
{
	class UDisAttentionTargetInterface*                m_pTroubleMaker_Object;                        // 0x0014 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pTroubleMaker_Interface;                     // 0x0014 (0x0008) [0x0000000000000000]               
	class ADisAlarmBell*                               m_pAlarm;                                      // 0x001C (0x0004) [0x0000000000000000]               
	int32_t                                            m_AttentionTag;                                // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ActorTamperedWith
// 0x0004 (0x0014 - 0x0018)
struct FAIStimStruct_ActorTamperedWith : FAIStimStruct
{
	class AActor*                                      m_pTamperedWith;                               // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBehavior.AIStimStruct_ActivateAlarm
// 0x0000 (0x0014 - 0x0014)
struct FAIStimStruct_ActivateAlarm : FAIStimStruct
{
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIBlackboardRecord
// 0x000C (0x0004 - 0x0010)
struct FAIBlackboardRecord : FDisSerializableObject
{
	float                                              m_TimeStamp_Created;                           // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_TimeStamp_Modified;                          // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bHasBeenSetup : 1;                           // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIRecord_RegisteredHideout
// 0x0008 (0x0010 - 0x0018)
struct FAIRecord_RegisteredHideout : FAIBlackboardRecord
{
	class UDisHideoutComponent*                        m_pHideout;                                    // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           m_bIsPlayerIn : 1;                             // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AITaskRecord_Weeping
// 0x0005 (0x0010 - 0x0015)
struct FAITaskRecord_Weeping : FAIBlackboardRecord
{
	class ADishonoredNPCPawn*                          m_pTaskedPawn;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_eRunningIncentive;                           // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIRecord_ShootingPosition
// 0x0010 (0x0010 - 0x0020)
struct FAIRecord_ShootingPosition : FAIBlackboardRecord
{
	class ADishonoredNPCPawn*                          m_pClaimingNPC;                                // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_ShootingPosition;                            // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIKnowledgeRecord
// 0x0000 (0x0010 - 0x0010)
struct FAIKnowledgeRecord : FAIBlackboardRecord
{
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIKnowledgeRecord_Pawn
// 0x0005 (0x0010 - 0x0015)
struct FAIKnowledgeRecord_Pawn : FAIKnowledgeRecord
{
	class APawn*                                       m_pPawnHandle;                                 // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            m_eLastReachability;                           // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0015 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIKnowledgeRecord_WhaleOilDevice
// 0x0006 (0x0010 - 0x0016)
struct FAIKnowledgeRecord_WhaleOilDevice : FAIKnowledgeRecord
{
	class AActor*                                      m_pDevice;                                     // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            m_bTrusted;                                    // 0x0014 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_bNoticedTamperedWith;                        // 0x0015 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                       // 0x0016 (0x0002) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIKnowledgeRecord_Hideout
// 0x0004 (0x0010 - 0x0014)
struct FAIKnowledgeRecord_Hideout : FAIKnowledgeRecord
{
	class UDisHideoutComponent*                        m_pHideout;                                    // 0x0010 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIKnowledgeRecord_LastCorpse
// 0x000C (0x0010 - 0x001C)
struct FAIKnowledgeRecord_LastCorpse : FAIKnowledgeRecord
{
	class UDisCorpseInterface*                         m_pCorpse_Object;                              // 0x0010 (0x0008) [0x0000000000000000] 
	class UDisCorpseInterface*                         m_pCorpse_Interface;                           // 0x0010 (0x0008) [0x0000000000000000]               
	class ADishonoredPawn*                             m_pKiller;                                     // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIRecord_PanickingNPCs
// 0x0004 (0x0010 - 0x0014)
struct FAIRecord_PanickingNPCs : FAIBlackboardRecord
{
	int32_t                                            m_iCount;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AITaskRecord_CoordinatedAttack
// 0x0018 (0x0010 - 0x0028)
struct FAITaskRecord_CoordinatedAttack : FAIBlackboardRecord
{
	class ADishonoredPawn*                             m_pInstigatorPawn;                             // 0x0010 (0x0004) [0x0000000000000000]               
	class ADishonoredPawn*                             m_TargetPawn;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	class TArray<class ADishonoredNPCPawn*>            m_ParticipantPawns;                            // 0x0018 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           m_bTriggerAttack : 1;                          // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIRecord_CountWolfHound
// 0x0004 (0x0010 - 0x0014)
struct FAIRecord_CountWolfHound : FAIBlackboardRecord
{
	int32_t                                            m_iWolfHoundInCombat;                          // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AITaskRecord_SummonWolfHound
// 0x0004 (0x0010 - 0x0014)
struct FAITaskRecord_SummonWolfHound : FAIBlackboardRecord
{
	class ADishonoredNPCPawn*                          m_pTaskedPawn;                                 // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIRecordGrenadeThrow
// 0x0008 (0x0010 - 0x0018)
struct FAIRecordGrenadeThrow : FAIBlackboardRecord
{
	class ADishonoredPawn*                             m_pThrowingPawn;                               // 0x0010 (0x0004) [0x0000000000000000]               
	class UDisItemContext_NPCThrowGrenade*             m_pThrowType;                                  // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AISeekCombatGroupTaskRecord
// 0x0014 (0x0010 - 0x0024)
struct FAISeekCombatGroupTaskRecord : FAIBlackboardRecord
{
	class ADishonoredPawn*                             m_pInstigatorPawn;                             // 0x0010 (0x0004) [0x0000000000000000]               
	class ADisRatSwarm*                                m_pEnemySwarm;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	class TArray<class ADishonoredPawn*>               m_NearbyAllyPawns;                             // 0x0018 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AIOccupyAccessPointTaskRecord
// 0x000C (0x0010 - 0x001C)
struct FAIOccupyAccessPointTaskRecord : FAIBlackboardRecord
{
	class ADisHideoutAccessPoint*                      m_pAccesspoint;                                // 0x0010 (0x0004) [0x0000000000000000]               
	class ADishonoredNPCPawn*                          m_pTaskedPawn;                                 // 0x0014 (0x0004) [0x0000000000000000]               
	struct FPointer                                    m_pHideout;                                    // 0x0018 (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct DishonoredGame.DisAIBlackboard.AISeekAllyTaskRecord
// 0x0008 (0x0010 - 0x0018)
struct FAISeekAllyTaskRecord : FAIBlackboardRecord
{
	class ADishonoredPawn*                             m_pInvolvedPawn;                               // 0x0010 (0x0004) [0x0000000000000000]               
	class ADishonoredNPCPawn*                          m_pTaskedPawn;                                 // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAttentionInfo_Complex.DisAttentionPendingChangeAmount
// 0x0005
struct FDisAttentionPendingChangeAmount
{
	float                                              m_fByAmount;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_ToThreshold;                                 // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisAttentionInfo_Complex.DisTickAttentionParams_AttentionTargetTweaks
// 0x005D
struct FDisTickAttentionParams_AttentionTargetTweaks
{
	uint32_t                                           m_bDirty : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fAttentionProxyMinIncreaseRateForUpdate[21]; // 0x0004 (0x0054) [0x0000000000000000]               
	float                                              m_fAttnProxyDetachmentDelay;                   // 0x0058 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_AttentionProxyMovementMode;                  // 0x005C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x005D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisAttentionInfo_Complex.DisTickAttentionParams_PawnAttentionTweaks
// 0x00D0
struct FDisTickAttentionParams_PawnAttentionTweaks
{
	uint32_t                                           m_bDirty : 1;                                  // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fDistanceToLoseSight;                        // 0x0004 (0x0004) [0x0000000000000000]               
	struct FDisVisCalcTuningParams                     m_DistanceValueTuning;                         // 0x0008 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              m_fVisionIncreaseScalar;                       // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              m_fTouchingPawnAttentionIncreaseRate;          // 0x002C (0x0004) [0x0000000000000000]               
	float                                              m_fAttentionLeakRate;                          // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              m_fAttentionLeakRate_InConvo;                  // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              m_fMaxAttention;                               // 0x0038 (0x0004) [0x0000000000000000]               
	struct FDisAttentionLevelThreshold                 m_AttentionThresholds[4];                      // 0x003C (0x0030) [0x0000000000000000]               
	uint32_t                                           m_bAlarmsKeepRingingUntilNPCsLoseAttention : 1;// 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            m_AlarmsKeepRingingAttentionLevel;             // 0x0070 (0x0001) [0x0000000000000000]               
	struct FDisAttentionChangeReasonSettings           m_ReasonSettings[21];                          // 0x0074 (0x0054) [0x0000000000000000]               
	float                                              m_fMinRangeToUnsightedBustedProxy;             // 0x00C8 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bClampTargetVisibility : 1;                  // 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisAIBrainProcessAttention.DisAttentionSlot
// 0x000C
struct FDisAttentionSlot
{
	class UDisAttentionTargetInterface*                m_pAttentionTarget_Object;                     // 0x0000 (0x0008) [0x0000000000000000] 
	class UDisAttentionTargetInterface*                m_pAttentionTarget_Interface;                  // 0x0000 (0x0008) [0x0000000000000000]               
	class UDisAttentionInfo_Base*                      m_pAttentionInfo;                              // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisDesireStructs.DisLookAtInfluence
// 0x000C
struct FDisLookAtInfluence
{
	float                                              m_fHeadInfluence;                              // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fTorsoInfluence;                             // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bTorsoInfIsMoveSpeedDependant : 1;           // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisDesireStructs.DisDesireRequest
// 0x003C
struct FDisDesireRequest
{
	class UObject*                                     m_pAsker;                                      // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FDisAttentionProxy                          m_ProxyTarget;                                 // 0x0004 (0x0010) [0x0000000000002000] (CPF_Transient)
	class UDisLookAtInterface*                         m_pLookAtTarget_Object;                        // 0x0014 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UDisLookAtInterface*                         m_pLookAtTarget_Interface;                     // 0x0014 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      m_pActorTarget;                                // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_Priority;                                    // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_LocationTarget;                              // 0x0024 (0x000C) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bDesired : 1;                                // 0x0030 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           m_bUsingProxy : 1;                             // 0x0030 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           m_bUsingLocation : 1;                          // 0x0030 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           m_bPaused : 1;                                 // 0x0030 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           m_bIsFaceToRequest : 1;                        // 0x0030 (0x0004) [0x0002000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           m_bIsLocoRequest : 1;                          // 0x0030 (0x0004) [0x0002000000002000] [0x00000020] (CPF_Transient)
	uint32_t                                           m_bIsLookAtRequest : 1;                        // 0x0030 (0x0004) [0x0002000000002000] [0x00000040] (CPF_Transient)
	int32_t                                            m_RequestID;                                   // 0x0034 (0x0004) [0x0002000000002000] (CPF_Transient)
	int32_t                                            m_DebugRedundancyCount;                        // 0x0038 (0x0004) [0x0002000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisDesireStructs.DisFaceToRequest
// 0x0018 (0x003C - 0x0054)
struct FDisFaceToRequest : FDisDesireRequest
{
	struct FPointer                                    m_pFaceToComponent;                            // 0x003C (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    m_pCallback;                                   // 0x0040 (0x0004) [0x0000000000001000] (CPF_Native)  
	uint32_t                                           m_bUsingYaw : 1;                               // 0x0044 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           m_bExactRotation : 1;                          // 0x0044 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	int32_t                                            m_YawTarget;                                   // 0x0048 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fRotationSpeed;                              // 0x004C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_DebugLastFaceToEvent;                        // 0x0050 (0x0004) [0x0002000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisDesireStructs.DisLocoRequest
// 0x0024 (0x003C - 0x0060)
struct FDisLocoRequest : FDisDesireRequest
{
	struct FPointer                                    m_pLocoComponent;                              // 0x003C (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    m_pCallback;                                   // 0x0040 (0x0004) [0x0000000000001000] (CPF_Native)  
	int32_t                                            m_MaxSpeedIndex;                               // 0x0044 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fEndLocationThreshold;                       // 0x0048 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fMaxFunnelRadiusMultiplier;                  // 0x004C (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bAccurateStop : 1;                           // 0x0050 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           m_bSpeedIsLookAtDependent : 1;                 // 0x0050 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           m_bFollow : 1;                                 // 0x0050 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	float                                              m_fFollowAngle;                                // 0x0054 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fFollowDist;                                 // 0x0058 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_DebugLastLocoEvent;                          // 0x005C (0x0004) [0x0002000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisDesireStructs.DisLookAtRequest
// 0x001C (0x003C - 0x0058)
struct FDisLookAtRequest : FDisDesireRequest
{
	struct FPointer                                    m_pLookAtComponent;                            // 0x003C (0x0004) [0x0000000000001000] (CPF_Native)  
	uint32_t                                           m_bLocal : 1;                                  // 0x0040 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           m_bAimAtTarget : 1;                            // 0x0040 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	int32_t                                            m_ProceduralPatternIndex;                      // 0x0044 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FDisLookAtInfluence                         m_LookAtInfluence;                             // 0x0048 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              m_fDuration;                                   // 0x0054 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisDesireStructs.DisBodyIntentionRequest
// 0x0014
struct FDisBodyIntentionRequest
{
	class ADishonoredNPCPawn*                          m_pNPCPawn;                                    // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bDesired : 1;                                // 0x0004 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           m_bPaused : 1;                                 // 0x0004 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint8_t                                            m_Priority;                                    // 0x0008 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            m_BodyStance;                                  // 0x0009 (0x0001) [0x0000000000002000] (CPF_Transient)
	class UObject*                                     m_pPrimaryItemClass;                           // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	class UObject*                                     m_pSecondaryItemClass;                         // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisAnimDefinitions.DisAnimation
// 0x002D
struct FDisAnimation
{
	class TArray<class FName>                          m_Name;                                        // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        m_FaceAnimName;                                // 0x000C (0x0008) [0x0000000000000000]               
	class FName                                        m_LinkedPlayerAnimName;                        // 0x0014 (0x0008) [0x0000000000000000]               
	float                                              m_fBlendInTime;                                // 0x001C (0x0004) [0x0000000000000000]               
	float                                              m_fPlayRateModifierRange;                      // 0x0020 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_FirstItemPrefix;                             // 0x0024 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_SecondItemPrefix;                            // 0x0025 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bLoop : 1;                                   // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bOptional : 1;                               // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bNoAutoTransitions : 1;                      // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	uint8_t                                            m_ItemAnimation;                               // 0x002C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x002D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisAnimDefinitions.DisAnimationGroup
// 0x0014
struct FDisAnimationGroup
{
	class TArray<struct FDisAnimation>                 m_Chain;                                       // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              m_fBlendOutTime;                               // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bEndChainAfterOneAnimation : 1;              // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bFallAllowed : 1;                            // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct DishonoredGame.DisAnimDefinitions.DisAnimationChain
// 0x0014
struct FDisAnimationChain
{
	class TArray<struct FDisAnimationGroup>            m_Groups;                                      // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            m_RootMotionMode;                              // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            m_RootRotationMode;                            // 0x000D (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bGoToRagdollIfPushed : 1;                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisArmor
// 0x0008
struct FDisArmor
{
	uint32_t                                           m_bDroppedYet : 1;                             // 0x0000 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class UStaticMeshComponent*                        m_pComponent;                                  // 0x0004 (0x0004) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisPendingArmorDrop
// 0x0020
struct FDisPendingArmorDrop
{
	int32_t                                            m_iIndexToDrop;                                // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bVerticalKnockoffOnly : 1;                   // 0x0004 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FVector                                     m_DropVelocity;                                // 0x0008 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_DropRotationalVel;                           // 0x0014 (0x000C) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisNPCSeveredLimb
// 0x0008
struct FDisNPCSeveredLimb
{
	class FName                                        m_SeverBoneName;                               // 0x0000 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisSeveredLimbRequest
// 0x0024
struct FDisSeveredLimbRequest
{
	class FName                                        m_JointName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           m_bHideBones : 1;                              // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bShowSeveredFX : 1;                          // 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bShowGoredFX : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bShowEatenFX : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000008] 
	uint8_t                                            m_ImpulseMode;                                 // 0x000C (0x0001) [0x0000000000000000]               
	float                                              m_fImpulseStrength;                            // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_DamageDir;                                   // 0x0014 (0x000C) [0x0000000000000000]               
	class ADisProjectile_Arrow*                        m_pSeveringArrow;                              // 0x0020 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisRagdollImpulseDeferred
// 0x0024
struct FDisRagdollImpulseDeferred
{
	struct FVector                                     m_Impulse;                                     // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Position;                                    // 0x000C (0x000C) [0x0000000000000000]               
	class FName                                        m_BoneName;                                    // 0x0018 (0x0008) [0x0000000000000000]               
	uint32_t                                           m_bVelChange : 1;                              // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.MatineeControllerInfos
// 0x000C
struct FMatineeControllerInfos
{
	class USeqAct_Interp*                              m_pMatinee;                                    // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            m_SoireePriority;                              // 0x0004 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bIsBlocking : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisPawnAccessoryMesh
// 0x0010
struct FDisPawnAccessoryMesh
{
	class UStaticMesh*                                 m_pMesh;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_SocketName;                                  // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRandomChance;                               // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisBodyIntention
// 0x000C
struct FDisBodyIntention
{
	uint8_t                                            m_IntendedBodyStance;                          // 0x0000 (0x0001) [0x0000000000000000]               
	class UDishonoredInventoryItem*                    m_pDesiredPrimaryItemClass;                    // 0x0004 (0x0004) [0x0000000000000000]               
	class UDishonoredInventoryItem*                    m_pDesiredSecondaryItemClass;                  // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisPawnAccessory
// 0x0004
struct FDisPawnAccessory
{
	float                                              m_fRandomChanceOfUse;                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisNPCRotationIntent
// 0x0018
struct FDisNPCRotationIntent
{
	struct FVector                                     m_RotationFocus;                               // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              m_fRotationRateDegrees;                        // 0x000C (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bIsActive : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bDeactivateWhenReached : 1;                  // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            m_RequestID;                                   // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisConvOneShotOwnerInterface.DisSpeakerOneShotInfo
// 0x0008
struct FDisSpeakerOneShotInfo
{
	class UDisDialogVoiceData*                         m_pOneShot;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bIsOwner : 1;                                // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisSpawnerInfo
// 0x0068
struct FDisSpawnerInfo
{
	class UDisDialogVoiceData*                         m_pDialogVoiceData;                            // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FDisSpeakerOneShotInfo>        m_DialogOneShots;                              // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        m_Squad;                                       // 0x0010 (0x0008) [0x0000000000000000]               
	uint32_t                                           m_bCapableOfFleeing : 1;                       // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<class ADisTetherVolume*>              m_TetherVolumes;                               // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           m_bPatrolUponStartup : 1;                      // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	class UDisTweaks_Faction*                          m_pFactionTweakOverride;                       // 0x002C (0x0004) [0x0000000000000000]               
	class UDisTweaks_StoryGroup*                       m_pStoryGroupTweakOverride;                    // 0x0030 (0x0004) [0x0000000000000000]               
	struct FDisLocRot                                  m_Position;                                    // 0x0034 (0x0018) [0x0000000000000000]               
	uint32_t                                           m_bSpawnDead : 1;                              // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bStraightToRagdoll : 1;                      // 0x004C (0x0004) [0x0000000000000000] [0x00000002] 
	class UAnimSet*                                    m_pDeadPoseAnimSet;                            // 0x0050 (0x0004) [0x0000000000000000]               
	class FName                                        m_DeadPoseAnimName;                            // 0x0054 (0x0008) [0x0000000000000000]               
	uint32_t                                           m_bTreatAsKnockedOut : 1;                      // 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	class FName                                        m_DEBUG_SpawnerName;                           // 0x0060 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisRagdollDamageConfig
// 0x0048
struct FDisRagdollDamageConfig
{
	float                                              m_fMinForceToBounce;                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxBounceForce;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxBounceForceZ;                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBouncingPercentage;                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBouncingPercentageZ;                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDamageRefireDelay;                          // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fForceToMinDamage;                           // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fForceToMaxDamage;                           // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMinDamage;                                  // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxDamage;                                  // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMinForceToDealHeightDamage;                 // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFallHeightForMinDamage;                     // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFallHeightForMaxDamage;                     // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFallHeightToDie;                            // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFallMinDamage;                              // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFallMaxDamage;                              // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMinForceToDamageOther;                      // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_iDamageToOther;                              // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisRagdollCollision
// 0x000C
struct FDisRagdollCollision
{
	class AActor*                                      m_pActor;                                      // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UPrimitiveComponent*                         m_pComponent;                                  // 0x0004 (0x0004) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	int32_t                                            m_iBodyIndex;                                  // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisPhysicsSensorShape
// 0x0044
struct FDisPhysicsSensorShape
{
	struct FMatrix                                     m_RelativeTM;                                  // 0x0000 (0x0040) [0x0000000000000000]               
	int32_t                                            m_BoneIndex;                                   // 0x0040 (0x0004) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0xC];                       // 0x0044 (0x000C) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisPhysicsSensor
// 0x0010
struct FDisPhysicsSensor
{
	class URB_BodyInstance*                            m_pBodyInstance;                               // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FDisPhysicsSensorShape>        m_Shapes;                                      // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisWalkUpperBodyDesire
// 0x000C
struct FDisWalkUpperBodyDesire
{
	uint8_t                                            m_WalkUpperBodyAnim;                           // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            m_iAnimGroup;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iAnimStep;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisNPCPostGameLoadParams
// 0x0010
struct FDisNPCPostGameLoadParams
{
	uint32_t                                           m_bIsAsleep : 1;                               // 0x0000 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              m_fVisibilityAsCorpse;                         // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UDisMovableComponent*                        m_fHeldMovable;                                // 0x0008 (0x0004) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	uint32_t                                           m_bShadowKilled : 1;                           // 0x000C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisSleepDamageInfo
// 0x0010
struct FDisSleepDamageInfo
{
	class AController*                                 m_pInstigator;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	class UObject*                                     m_pDamageType;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_DamageAmount;                                // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bAlreadyDeferred : 1;                        // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisNPCDeathInfo
// 0x0029
struct FDisNPCDeathInfo
{
	class ADishonoredPawn*                             m_pInstigator;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	class ADishonoredPawn*                             m_pCulprit;                                    // 0x0004 (0x0004) [0x0000000000000000]               
	class AActor*                                      m_pDamageCausingActor;                         // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_DamageSourceLocation;                        // 0x000C (0x000C) [0x0000000000000000]               
	class FName                                        m_NameOfDeadNPC;                               // 0x0018 (0x0008) [0x0000000000000000]               
	class UDamageType*                                 m_pCauseOfDeath;                               // 0x0020 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bCorpseHandled : 1;                          // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bIgnoreForCorpseCleanup : 1;                 // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bWasSpawnedDead : 1;                         // 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bIgnoreDeath : 1;                            // 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
	uint8_t                                            m_Awareness;                                   // 0x0028 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0029 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisNPCDamageInfo
// 0x0058
struct FDisNPCDamageInfo
{
	class ADishonoredPawn*                             m_pDamageInstigator;                           // 0x0000 (0x0004) [0x0000000000000000]               
	class ADishonoredPawn*                             m_pDamageCulprit;                              // 0x0004 (0x0004) [0x0000000000000000]               
	class AActor*                                      m_pDamageCausingActor;                         // 0x0008 (0x0004) [0x0000000000000000]               
	class UDamageType*                                 m_pDamageType;                                 // 0x000C (0x0004) [0x0000000000000000]               
	struct FVector                                     m_DamageHitLocation;                           // 0x0010 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_DamageSourceLocation;                        // 0x001C (0x000C) [0x0000000000000000]               
	struct FTraceHitInfo                               m_DamageHitInfo;                               // 0x0028 (0x001C) [0x0000000000080000] (CPF_Component)
	struct FVector                                     m_DamageMomentum;                              // 0x0044 (0x000C) [0x0000000000000000]               
	int32_t                                            m_iHealthBeforeDamage;                         // 0x0050 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iDamage;                                     // 0x0054 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisMaterialVariation
// 0x0008
struct FDisMaterialVariation
{
	class UMaterialInterface*                          m_pMaterial;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRandomChance;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisBodyMaterialVariation
// 0x000C
struct FDisBodyMaterialVariation
{
	class TArray<struct FDisMaterialVariation>         m_MaterialVariation;                           // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisMeshMaterialVariationList
// 0x000C
struct FDisMeshMaterialVariationList
{
	class TArray<struct FDisBodyMaterialVariation>     m_VariationMaterialIndex;                      // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredNPCPawn.DisBodyMesh
// 0x0014
struct FDisBodyMesh
{
	class USkeletalMesh*                               m_pMesh;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRandomChance;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDisMeshMaterialVariationList               m_MaterialVariation;                           // 0x0008 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisAkComponent.DisAudioPath
// 0x0028
struct FDisAudioPath
{
	struct FVector                                     m_Direction;                                   // 0x0000 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              m_fDistance;                                   // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fObstruction;                                // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fOcclusion;                                  // 0x0014 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fFinalDist;                                  // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<class ADishonoredAudioPortal*>        m_Portals;                                     // 0x001C (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisAkComponent.DisAudioPropagationCache
// 0x003C
struct FDisAudioPropagationCache
{
	struct FVector                                     m_SoundPoint;                                  // 0x0000 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_ListenerPoint;                               // 0x000C (0x000C) [0x0000000000002000] (CPF_Transient)
	class ADishonoredAudioVolume*                      m_pSoundCell;                                  // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
	class ADishonoredAudioVolume*                      m_pListenerCell;                               // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fMaxAudibleDistance;                         // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fRawDistance;                                // 0x0024 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FDisAudioPath>                 m_Paths;                                       // 0x0028 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              m_fObstruction;                                // 0x0034 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fOcclusion;                                  // 0x0038 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisAkComponent.DisAudioDebugPath
// 0x000C
struct FDisAudioDebugPath
{
	class TArray<struct FVector>                       m_Points;                                      // 0x0000 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisAmbushGlobalManager.DisAmbushReservation
// 0x0008
struct FDisAmbushReservation
{
	class ADishonoredNPCPawn*                          m_pNPCPawn;                                    // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	class ADisAmbushPoint*                             m_pAmbushPoint;                                // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisAmbushGlobalManager.AmbushPointDistanceSqrdPair
// 0x0008
struct FAmbushPointDistanceSqrdPair
{
	struct FPointer                                    m_pAmbushPoint;                                // 0x0000 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	float                                              m_fDistanceSqrd;                               // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredAnimNodeSeq.PendingRangedNotify
// 0x000C
struct FPendingRangedNotify
{
	class UAnimNotify*                                 m_pNotify;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fTimeLeft;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fTotalTime;                                  // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAnimStateComponent.DisAnimState_CustomSeq
// 0x0011
struct FDisAnimState_CustomSeq
{
	class FName                                        m_Alias;                                       // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_Sequence;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_PreviewType;                                 // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0011 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisAnimStateComponent.DisAnimState
// 0x0024
struct FDisAnimState
{
	class FName                                        m_StateName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBlendTime;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_AnimStateTree;                               // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bBlocksChildren : 1;                         // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bNonLooping : 1;                             // 0x0014 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	class TArray<struct FDisAnimState_CustomSeq>       m_CustomSequences;                             // 0x0018 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisAnimStateComponent.DisAnimState_Picker
// 0x0014
struct FDisAnimState_Picker
{
	class UDishonoredAnimNodeStatePicker*              m_pStatePicker;                                // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            m_parentPicker;                                // 0x0004 (0x0001) [0x0000000000001000] (CPF_Native)  
	class UAnimNodeBlendPerBone*                       m_pFilter;                                     // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FPointer                                    m_pCurState;                                   // 0x000C (0x0004) [0x0000000000001000] (CPF_Native)  
	uint32_t                                           m_bCurStatePotentiallyInvalid : 1;             // 0x0010 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           m_bLockedOut : 1;                              // 0x0010 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           m_bLockedOut_Children : 1;                     // 0x0010 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisAnimStateComponent.DisPawnAnimState
// 0x0010 (0x0024 - 0x0034)
struct FDisPawnAnimState : FDisAnimState
{
	uint8_t                                            m_RootMotionMode;                              // 0x0024 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_RootMotionRotationMode;                      // 0x0025 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bAddItemPrefix : 1;                          // 0x0028 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            m_ApplyItemEquipPrefix;                        // 0x002C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bDisableAutoFootsteps : 1;                   // 0x0030 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisAnimStateComponent.DisCustomSeqMapEntry
// 0x000C
struct FDisCustomSeqMapEntry
{
	struct FPointer                                    m_pAnimTree;                                   // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	class FName                                        m_SeqAlias;                                    // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAnimStateComponent.DisAnimStateSeqHistory
// 0x000C
struct FDisAnimStateSeqHistory
{
	class FName                                        m_SeqName;                                     // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_StatePicker;                                 // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisAnimStatePool.DisAnimTreePool
// 0x0014
struct FDisAnimTreePool
{
	class UDishonoredAnimTree*                         m_pPooledTemplate;                             // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<class UDishonoredAnimTree*>           m_PooledAnimTrees;                             // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_MaxPooledTrees;                              // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAttributes.DisAttribute_RangeLimits
// 0x0014
struct FDisAttribute_RangeLimits
{
	class FName                                        m_Name;                                        // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bEnforceRange : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_fMin;                                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMax;                                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisAttributes.DisAttributeModifier
// 0x000C
struct FDisAttributeModifier
{
	uint8_t                                            m_Type;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              m_fValue;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fLifetime;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisAttributes.DisModifiedAttribute
// 0x0050
struct FDisModifiedAttribute
{
	float                                              m_fAttributeBaseValue;                         // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fMinRange;                                   // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fMaxRange;                                   // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bEnforceRange : 1;                           // 0x000C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           m_bCachedValueIsDirty : 1;                     // 0x000C (0x0004) [0x0004000000002000] [0x00000002] (CPF_Transient)
	float                                              m_fCachedModifiedValue;                        // 0x0010 (0x0004) [0x0004000000002000] (CPF_Transient)
	uint8_t                                            UnknownData00[0x3C];                          // 0x0014 (0x003C) MISSED OFFSET
};

// ScriptStruct DishonoredGame.DisAttributes.DisAttribute
// 0x001C
struct FDisAttribute
{
	class FName                                        m_Name;                                        // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              m_fBaseValue;                                  // 0x0008 (0x0004) [0x0000000020000000]  CPF_Deprecated)
	float                                              m_fBaseValue1_Easy;                            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBaseValue2_Normal;                          // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBaseValue3_Hard;                            // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBaseValue4_VeryHard;                        // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisConversationComponent.DisFailedDialogHookInfo
// 0x000C
struct FDisFailedDialogHookInfo
{
	int32_t                                            m_Hook;                                        // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_ReasonFailed;                                // 0x0004 (0x0001) [0x0000000000000000]               
	float                                              m_fTimeToDisplay;                              // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisConversationComponent.DisDialogOneShotPair
// 0x0008
struct FDisDialogOneShotPair
{
	class UDisDialogTree_InGameBind*                   m_pOneShot_DialogTree;                         // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UDisDialogVoiceData*                         m_pOneShot_DialogData;                         // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisConversationComponent.DisDialogHookInfo_InGame
// 0x0004
struct FDisDialogHookInfo_InGame
{
	float                                              m_fLastFireTime;                               // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisBehaviorInteract.DisInteractInfo
// 0x0030
struct FDisInteractInfo
{
	class UDisGoToFollowupInterface*                   m_pFollowUp_Object;                            // 0x0000 (0x0008) [0x0000000000000000] 
	class UDisGoToFollowupInterface*                   m_pFollowUp_Interface;                         // 0x0000 (0x0008) [0x0000000000000000]               
	uint32_t                                           m_bFollowUpResultPending : 1;                  // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_GoalLocation;                                // 0x000C (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_GoalRotation;                                // 0x0018 (0x000C) [0x0000000000000000]               
	uint32_t                                           m_bSuspicious : 1;                             // 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bExactPlacement : 1;                         // 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	uint8_t                                            m_TransitSpeed;                                // 0x0028 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bInterruptable : 1;                          // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisBehaviorPanic.AIPanicThreat
// 0x0020
struct FAIPanicThreat
{
	uint8_t                                            m_ePanicReason;                                // 0x0000 (0x0001) [0x0000000000000000]               
	class AActor*                                      m_pPanicActor;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	class ADishonoredPawn*                             m_PawnThreat;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	struct FDisAttentionProxy                          m_ProxyThreat;                                 // 0x000C (0x0010) [0x0000000000000000]               
	class ADisRatSwarm*                                m_pRatSwarmThreat;                             // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisBinkOverlayManager.DisMapHintBinding
// 0x0018
struct FDisMapHintBinding
{
	class FString                                      m_MapName;                                     // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_HintSet;                                     // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisBinkOverlayManager.DisBinkTextOverlayInfo
// 0x0030
struct FDisBinkTextOverlayInfo
{
	uint32_t                                           m_bCentered : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bRightAligned : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bWrapped : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FVector2D                                   m_Position;                                    // 0x0004 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   m_Size;                                        // 0x000C (0x0008) [0x0000000000000000]               
	float                                              m_fRotation;                                   // 0x0014 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   m_Scale;                                       // 0x0018 (0x0008) [0x0000000000000000]               
	struct FVector2D                                   m_fTranslationFromCenter;                      // 0x0020 (0x0008) [0x0000000000000000]               
	float                                              m_fRotationFromCenter;                         // 0x0028 (0x0004) [0x0000000000000000]               
	struct FColor                                      m_Color;                                       // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisTutorialTracker.DelayedNoteInfo
// 0x0005
struct FDelayedNoteInfo
{
	float                                              m_fDelay;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_Note;                                        // 0x0004 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisProjectile.DisProjectileHomingData
// 0x0030
struct FDisProjectileHomingData
{
	struct FVector                                     m_PositionTarget;                              // 0x0000 (0x000C) [0x0000000000000000]               
	class AActor*                                      m_ActorTarget;                                 // 0x000C (0x0004) [0x0000000000000000]               
	uint8_t                                            m_eType;                                       // 0x0010 (0x0001) [0x0000000000000000]               
	float                                              m_fSpeed;                                      // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              m_fTimeLeft;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              m_fMaxCorrectionAngle_Deg;                     // 0x001C (0x0004) [0x0000000000000000]               
	struct FVector                                     m_Offset;                                      // 0x0020 (0x000C) [0x0000000000000000]               
	uint32_t                                           m_bUseOffset : 1;                              // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisCamera_FollowProjectile.DisKillCamSettings
// 0x0034
struct FDisKillCamSettings
{
	float                                              m_fWitnessKillTime;                            // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     m_Offset;                                      // 0x0004 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    m_Rotation;                                    // 0x0010 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFollowFOV;                                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFollowTimeScale;                            // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fEndFollowTimeScale;                         // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fTimeOut;                                    // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fSlowDownDistance;                           // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fCameraStopDistance;                         // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisCamera_Rumble.DisCameraActiveRumble
// 0x0044
struct FDisCameraActiveRumble
{
	struct FDisCameraSustainedRumble                   m_Rumble;                                      // 0x0000 (0x003C) [0x0000000000000000]               
	float                                              m_fElapsedTime;                                // 0x003C (0x0004) [0x0000000000000000]               
	float                                              m_fRandomOffset;                               // 0x0040 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisContactSub_SoundCue.DisSoundContactScaled
// 0x0010
struct FDisSoundContactScaled
{
	uint32_t                                           m_bScaleWithSpeed : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_fMinSpeed;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxSpeed;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMinVolumeScale;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisSeveredLimbInfo.DisSeveredLimbParticleInfo
// 0x0011
struct FDisSeveredLimbParticleInfo
{
	class FName                                        m_LocationName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bAttach : 1;                                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bUseWhenSevered : 1;                         // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           m_bUseWhenGored : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           m_bUseWhenEaten : 1;                           // 0x0008 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	class UParticleSystem*                             m_pParticleEmitter;                            // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_Orientation;                                 // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0011 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisSeveredLimbInfo.DisSeveredLimb
// 0x003D
struct FDisSeveredLimb
{
	class FName                                        m_BoneBreakName;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDisSeveredLimbParticleInfo>   m_ParticleEffects;                             // 0x0008 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FName>                          m_AlsoSeverWhenGored;                          // 0x0014 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        m_MovableBoneName;                             // 0x0020 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    m_MovableOrientation;                          // 0x0028 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              m_MovableOffsetFront;                          // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_MovableOffsetDown;                           // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_MovableWeight;                               // 0x003C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x003D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisSeveredLimbInfo.DisContactSub_CameraEffectEmitterInfo
// 0x0014
struct FDisContactSub_CameraEffectEmitterInfo
{
	class ADisEmitterCameraLensEffect*                 m_pEffectClass;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDisTweaks_EmitterCameraLensEffect*          m_pEffectTweaks;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bSkipWhenPlayerIsStruck : 1;                 // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_fAffectingDistance;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAffectingProbability;                       // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredDecalActorBase.DishonoredDecalInfo
// 0x0048
struct FDishonoredDecalInfo
{
	class UMaterialInterface*                          m_pMaterial;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<class UMaterialInterface*>            m_Materials;                                   // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class FName>                          m_BoneNames;                                   // 0x0010 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            m_Behaviour;                                   // 0x001C (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MinWidth;                                    // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MinHeight;                                   // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MaxWidth;                                    // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MaxHeight;                                   // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bLoop : 1;                                   // 0x0030 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_fTimeStep;                                   // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fWidthStep;                                  // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fHeightStep;                                 // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fLifetime;                                   // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMinVelocity;                                // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisContactSub_Rumble.DisRumbleSetting
// 0x0008
struct FDisRumbleSetting
{
	class UWaveFormBase*                               m_pPredefinedWaveForm;                         // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UForceFeedbackWaveform*                      m_pCustomWaveForm;                             // 0x0004 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DisContactSub_Rumble.DisRumbleSetting_Radius
// 0x0004 (0x0008 - 0x000C)
struct FDisRumbleSetting_Radius : FDisRumbleSetting
{
	float                                              m_fProbeRadius;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisConv_Node.DisConvNodeLink
// 0x001C
struct FDisConvNodeLink
{
	class FString                                      m_Description;                                 // 0x0000 (0x000C) [0x0000000800400000] (CPF_NeedCtorLink | CPF_EditorOnly)
	class UDisConv_Node*                               m_pLink;                                       // 0x000C (0x0004) [0x0000000000000000]               
	struct FIntPoint                                   m_LinkLoc;                                     // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bHidden : 1;                                 // 0x0018 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisConv_Node.DisEditorOnlyNodeVars
// 0x0018
struct FDisEditorOnlyNodeVars
{
	struct FIntPoint                                   m_EditorPos;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FIntPoint                                   m_EditorSize;                                  // 0x0008 (0x0008) [0x0000000000000000]               
	struct FIntPoint                                   m_InputLinkLoc;                                // 0x0010 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisConv_Node.DisConvEditorOnlyClassVars
// 0x0027
struct FDisConvEditorOnlyClassVars
{
	struct FIntPoint                                   m_EditorMinSize;                               // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FName                                        m_Category;                                    // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bCanBeResized : 1;                           // 0x0010 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           m_bCanCreateWithMenu : 1;                      // 0x0010 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           m_bNotWithDialogTree : 1;                      // 0x0010 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           m_bNotWithOneShot : 1;                         // 0x0010 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           m_bOneShotOnly : 1;                            // 0x0010 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           m_bRequiresSpeaker : 1;                        // 0x0010 (0x0004) [0x0000000000002000] [0x00000020] (CPF_Transient)
	uint32_t                                           m_bDefaultSpeakerPlayer : 1;                   // 0x0010 (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	uint32_t                                           m_bIllegalForInterruptable : 1;                // 0x0010 (0x0004) [0x0000000000002000] [0x00000080] (CPF_Transient)
	class FString                                      m_ClassDisplayName;                            // 0x0014 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           m_bNotImplemented : 1;                         // 0x0020 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint8_t                                            m_OutputLinkColor;                             // 0x0024 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            m_BackgroundColor;                             // 0x0025 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            m_BackgroundColor_Selected;                    // 0x0026 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            MinStructAlignment[0x1];                       // 0x0027 (0x0001) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisConv_Node.DisConvClassVars
// 0x0010
struct FDisConvClassVars
{
	uint32_t                                           m_bIsStartOfDialog : 1;                        // 0x0000 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           m_bPlayWhenExtractingText : 1;                 // 0x0000 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UDisConv_Node_InGameData*                    m_InGameDataClasses[3];                        // 0x0004 (0x000C) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisConv_Node.DisConvNodeDebugLog
// 0x0010
struct FDisConvNodeDebugLog
{
	class FString                                      m_DebugLogText;                                // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           m_bDebugLogToScreen : 1;                       // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisConv_Blurb.DisBlurbLangInfo
// 0x002C
struct FDisBlurbLangInfo
{
	class FName                                        m_Language;                                    // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class FString                                      m_LocalizedText;                               // 0x0008 (0x000C) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	class FString                                      m_LocalizedDirection;                          // 0x0014 (0x000C) [0x0000000800420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      m_LocalizedDescription;                        // 0x0020 (0x000C) [0x0000000800420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
};

// ScriptStruct DishonoredGame.DisConv_Blurb.DisBlurbListener
// 0x000C
struct FDisBlurbListener
{
	int32_t                                            m_Listener;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_LookType;                                    // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bTurnToFace : 1;                             // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisConv_Blurb_InGameData.DisBlurbListener_Instanced
// 0x0004
struct FDisBlurbListener_Instanced
{
	uint8_t                                            m_ListenStage;                                 // 0x0000 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            m_Dummy[3];                                    // 0x0001 (0x0003) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisConv_Blurb_InGameData.DisBlurbPerSpeakerInstance
// 0x001C
struct FDisBlurbPerSpeakerInstance
{
	class UDisConvSpeakerInterface*                    m_pSpeaker_Object;                             // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UDisConvSpeakerInterface*                    m_pSpeaker_Interface;                          // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            m_BlurbStage;                                  // 0x0008 (0x0001) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FDisBlurbListener_Instanced>   m_BlurbListenerInfo;                           // 0x000C (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              m_fSeekTime;                                   // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisConversation.DisConvSpeaker
// 0x0008
struct FDisConvSpeaker
{
	uint8_t                                            m_Type;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	class UDisConv_Speaker*                            m_pLinkedNode;                                 // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisConv_DialogHook.DisEditorOnlyDialogHookInfo
// 0x0048
struct FDisEditorOnlyDialogHookInfo
{
	class FString                                      m_HookCategory;                                // 0x0000 (0x000C) [0x0000000800420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      m_DisplayName;                                 // 0x000C (0x000C) [0x0000000800420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      m_ToolTip;                                     // 0x0018 (0x000C) [0x0000000800420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      m_InitiatorDescription;                        // 0x0024 (0x000C) [0x0000000800420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	uint8_t                                            m_FireGroup;                                   // 0x0030 (0x0001) [0x0000000800020001] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	float                                              m_fRefire_DelayMin;                            // 0x0034 (0x0004) [0x0000000800020001] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	float                                              m_fRefire_DelayMax;                            // 0x0038 (0x0004) [0x0000000800020001] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	float                                              m_fRefire_Delay_Global;                        // 0x003C (0x0004) [0x0000000800020001] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	uint32_t                                           m_bNotImplemented : 1;                         // 0x0040 (0x0004) [0x0000000800020001] [0x00000001] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	uint32_t                                           m_bInterrupts : 1;                             // 0x0040 (0x0004) [0x0000000800020001] [0x00000002] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	uint32_t                                           m_bNotInterruptable : 1;                       // 0x0040 (0x0004) [0x0000000800020001] [0x00000004] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	uint32_t                                           m_bBattleSound : 1;                            // 0x0040 (0x0004) [0x0000000800020001] [0x00000008] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	uint32_t                                           m_bOneShotOnly : 1;                            // 0x0040 (0x0004) [0x0000000800020001] [0x00000010] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	uint32_t                                           m_bSearchSound : 1;                            // 0x0040 (0x0004) [0x0000000800020001] [0x00000020] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	uint32_t                                           m_bBustsInitiator : 1;                         // 0x0040 (0x0004) [0x0000000800020001] [0x00000040] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	uint32_t                                           m_bDeprecated : 1;                             // 0x0040 (0x0004) [0x0000000800020001] [0x00000080] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
	float                                              m_fBustTimeWhenFired;                          // 0x0044 (0x0004) [0x0000000800020001] (CPF_Edit | CPF_EditConst | CPF_EditorOnly)
};

// ScriptStruct DishonoredGame.DisConv_FactionBranch.DisFactionBranch
// 0x0008
struct FDisFactionBranch
{
	class UDisTweaks_Faction*                          m_pFaction;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bExactMatchOnly : 1;                         // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisConv_Hook_Distance_InGameData.DisHookDistHelper
// 0x0010
struct FDisHookDistHelper
{
	class UDisConvSpeakerInterface*                    m_pTrackedObject_Object;                       // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UDisConvSpeakerInterface*                    m_pTrackedObject_Interface;                    // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              m_fTrackTime;                                  // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fLastDistance;                               // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisConv_Hook_Distraction.DistractionLinkInfo
// 0x000C
struct FDistractionLinkInfo
{
	class AActor*                                      m_pActor;                                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_DistractionCategory;                         // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisConv_Hook_PlayerLookAt.DisPlayerLookAtTarget
// 0x000C
struct FDisPlayerLookAtTarget
{
	class AActor*                                      m_pLookAtActor;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fLookAngle;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fLookAtTime;                                 // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisConv_PlayerChoice.DisPlayerChoiceLocalized
// 0x0014
struct FDisPlayerChoiceLocalized
{
	class FName                                        m_Language;                                    // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class FString                                      m_LocalizedChoiceText;                         // 0x0008 (0x000C) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisConv_PlayerChoice.DisPlayerChoice_Static
// 0x0018
struct FDisPlayerChoice_Static
{
	class FString                                      m_ChoiceText;                                  // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FDisPlayerChoiceLocalized>     m_PerLanguageData;                             // 0x000C (0x000C) [0x0000000000021001] (CPF_Edit | CPF_Native | CPF_EditConst)
};

// ScriptStruct DishonoredGame.DisConv_PlayerChoice.DisPlayerChoice_Optional
// 0x0030
struct FDisPlayerChoice_Optional
{
	class FString                                      m_ChoiceText;                                  // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UDisStoryFlagSet*                            m_pStoryFlagSet;                               // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       m_StoryFlag;                                   // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bStoryFlagMustBeFalse : 1;                   // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class TArray<struct FDisPlayerChoiceLocalized>     m_PerLanguageData;                             // 0x0024 (0x000C) [0x0000000000021001] (CPF_Edit | CPF_Native | CPF_EditConst)
};

// ScriptStruct DishonoredGame.DisConv_PlayerLookAtSpeaker.DisConvLookAtConstraints
// 0x001C
struct FDisConvLookAtConstraints
{
	uint32_t                                           m_bUseDuration : 1;                            // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fDuration;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bUseZoom : 1;                                // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fZoomPercentOnScreen;                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxPitchDelta;                              // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxYawDelta;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bIgnoreNPCAnimation : 1;                     // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisCurDominantHook
// 0x000C
struct FDisCurDominantHook
{
	int32_t                                            m_iGroupIndex;                                 // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            m_GroupType;                                   // 0x0004 (0x0001) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_iPlayingHookIndex;                           // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisQueuedFireDialogHook
// 0x004C
struct FDisQueuedFireDialogHook
{
	uint8_t                                            m_Hook;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            m_iHookSubIndex;                               // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_FireHookTag;                                 // 0x0008 (0x0004) [0x0000000000000000]               
	class UDisConversationComponent*                   m_pConvComp;                                   // 0x000C (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDisConvSpeakerInterface*                    m_pTarget_Object;                              // 0x0010 (0x0008) [0x0000000000000000] 
	class UDisConvSpeakerInterface*                    m_pTarget_Interface;                           // 0x0010 (0x0008) [0x0000000000000000]               
	struct FDisHookParameters                          m_HookParams;                                  // 0x0018 (0x002C) [0x0000000000080000] (CPF_Component)
	float                                              m_fCurAudioDuckingWeight;                      // 0x0044 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bOwnerAndTargetDiffer : 1;                   // 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisQueuedFireDialogHookGroup
// 0x0030
struct FDisQueuedFireDialogHookGroup
{
	class TArray<struct FDisQueuedFireDialogHook>      m_PendingHooks;                                // 0x0000 (0x000C) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FDisQueuedFireDialogHook>      m_FiringHooks;                                 // 0x000C (0x000C) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	int32_t                                            m_MaxPlaying_PerGroup;                         // 0x0018 (0x0004) [0x0000000000000000]               
	int32_t                                            m_MaxPlaying_PerInitiator;                     // 0x001C (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bIgnoreGlobalCap : 1;                        // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fMinTimeBetweenFiring;                       // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bIsLocked : 1;                               // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fGroupLockoutTimer;                          // 0x002C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisInitiatorMap
// 0x003C
struct FDisInitiatorMap
{
	uint8_t                                            UnknownData00[0x3C];                          // 0x0000 (0x003C) MISSED OFFSET
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisConvRandomBranchInfo
// 0x004C
struct FDisConvRandomBranchInfo
{
	class FName                                        m_DialogTree;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        m_Conversation;                                // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x3C];                          // 0x0010 (0x003C) MISSED OFFSET
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisConvTimeLimitInfo
// 0x004C
struct FDisConvTimeLimitInfo
{
	class FName                                        m_DialogTree;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        m_Conversation;                                // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x3C];                          // 0x0010 (0x003C) MISSED OFFSET
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisConvSeqBranchInfo
// 0x004C
struct FDisConvSeqBranchInfo
{
	class FName                                        m_DialogTree;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        m_Conversation;                                // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x3C];                          // 0x0010 (0x003C) MISSED OFFSET
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisConvRandomSeqBranchInfo
// 0x004C
struct FDisConvRandomSeqBranchInfo
{
	class FName                                        m_DialogTree;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        m_Conversation;                                // 0x0008 (0x0008) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x3C];                          // 0x0010 (0x003C) MISSED OFFSET
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisDialogHookInfo_InGame_Global
// 0x0004
struct FDisDialogHookInfo_InGame_Global
{
	float                                              m_fLastFireTime;                               // 0x0000 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisAkCompAndPlayingID
// 0x0008
struct FDisAkCompAndPlayingID
{
	class UDisAkComponent*                             m_pAkComp;                                     // 0x0000 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            m_PlayingID;                                   // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisSubtitle
// 0x002C
struct FDisSubtitle
{
	class UDisConversationComponent*                   m_pConvComp;                                   // 0x0000 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class TArray<struct FDisAkCompAndPlayingID>        m_Speakers;                                    // 0x0004 (0x000C) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	struct FPointer                                    m_pText;                                       // 0x0010 (0x0004) [0x0000000000001000] (CPF_Native)  
	float                                              m_fVoiceRadius;                                // 0x0014 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bShown : 1;                                  // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<float>                                m_TextPartsRatio;                              // 0x001C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_ShownTextPart;                               // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisSubtitlesInfo
// 0x002C
struct FDisSubtitlesInfo
{
	class TArray<struct FDisSubtitle>                  m_MainSubtitles;                               // 0x0000 (0x000C) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FDisSubtitle>                  m_SecondarySubtitles;                          // 0x000C (0x000C) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class TArray<struct FDisSubtitle>                  m_PausedSubtitles;                             // 0x0018 (0x000C) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
	class UDisConversationComponent*                   m_pMainSubtitleOwner;                          // 0x0024 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UDisConversationComponent*                   m_pSecondarySubtitleOwner;                     // 0x0028 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisSeqBranchEntry
// 0x0008
struct FDisSeqBranchEntry
{
	int32_t                                            m_iCurIndex;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iCurIndex_Pending;                           // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisRandomBranchIndex
// 0x0008
struct FDisRandomBranchIndex
{
	int32_t                                            m_iIndexVal;                                   // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_RandomSortVal;                               // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisRandomSeqBranchEntry
// 0x0010 (0x0008 - 0x0018)
struct FDisRandomSeqBranchEntry : FDisSeqBranchEntry
{
	class TArray<struct FDisRandomBranchIndex>         m_RandomBranchIndices;                         // 0x0008 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           m_bBuiltRandomBranches : 1;                    // 0x0014 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisQueuedFireDialogHookGroup_Outer
// 0x0060
struct FDisQueuedFireDialogHookGroup_Outer
{
	struct FDisQueuedFireDialogHookGroup               m_Inner[2];                                    // 0x0000 (0x0060) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisRandomBranchEntry
// 0x0008
struct FDisRandomBranchEntry
{
	int32_t                                            m_iLastFiredIndex;                             // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iLastFiredIndex_Pending;                     // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisConvGlobalMan.DisTimeLimitEntry
// 0x0008
struct FDisTimeLimitEntry
{
	float                                              m_fTimeLastFired;                              // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fTimeLastFired_Pending;                      // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisConv_SpeakerHasTweaks.DisSpeakerTweaks
// 0x0008
struct FDisSpeakerTweaks
{
	uint32_t                                           m_bExactMatch : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UDisTweaksBase*                              m_pTweaks;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisConv_SpeakerInStoryGroup.DisSpeakerStoryGroup
// 0x0008
struct FDisSpeakerStoryGroup
{
	uint32_t                                           m_bExactMatch : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UDisTweaks_StoryGroup*                       m_pStoryGroup;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisConversation_InGameData.DisConvSpeaker_InGame
// 0x0018
struct FDisConvSpeaker_InGame
{
	struct FPointer                                    m_pSpeaker;                                    // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	class UDisConvSpeakerInterface*                    m_pBoundSpeaker_Object;                        // 0x0004 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UDisConvSpeakerInterface*                    m_pBoundSpeaker_Interface;                     // 0x0004 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bSpeakerEngaged : 1;                         // 0x000C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint8_t                                            m_SpeakerAvailability;                         // 0x0010 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              m_fMaxVoiceRadius;                             // 0x0014 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisTweaks_ConvSettings.DisDialogHookConfigOverride
// 0x0011
struct FDisDialogHookConfigOverride
{
	uint8_t                                            m_DialogHookToOverride;                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRefire_DelayMin;                            // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRefire_DelayMax;                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRefire_Delay_Global;                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_FireGroup;                                   // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0011 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisTweaks_ConvSettings.DisFireGroupConfig
// 0x001C
struct FDisFireGroupConfig
{
	uint8_t                                            m_FireGroup;                                   // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MaxPlaying_PerGroup;                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MaxPlaying_PerInitiator;                     // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MaxPlaying_PerGroup_Quiet;                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MaxPlaying_PerInitiator_Quiet;               // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bIgnoreGlobalCap : 1;                        // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_fMinTimeBetweenFiring;                       // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisConvSpeakerInterface.DisConvSpeakerLocInfo
// 0x0018
struct FDisConvSpeakerLocInfo
{
	struct FVector                                     m_Location;                                    // 0x0000 (0x000C) [0x0000000000002000] (CPF_Transient)
	class USkeletalMeshComponent*                      m_pSkelMeshCompForFaceFX;                      // 0x000C (0x0004) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class AActor*                                      m_pAKEventOwner;                               // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FPointer                                    m_pAudioPropagationCache;                      // 0x0014 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredDamageType.DisSeverLimbsDamageParams
// 0x0018
struct FDisSeverLimbsDamageParams
{
	float                                              m_fRequiredExtraDamage;                        // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fChanceOfTriggering;                         // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fChanceBonusRangeUpgrade;                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRadiusAroundImpact;                         // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fChanceOfDestroying;                         // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bIncludeNearestBone : 1;                     // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bExcludeChestBone : 1;                       // 0x0014 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           m_bExcludeHeadBone : 1;                        // 0x0014 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           m_bAllowChestBone_BloodThirsty_Lvl1 : 1;       // 0x0014 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           m_bAllowChestBone_BloodThirsty_Lvl2 : 1;       // 0x0014 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisDialogOneShot.DisOneOffSpeaker
// 0x0018
struct FDisOneOffSpeaker
{
	class FName                                        m_SpeakerNickName;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class ADishonoredSpawner*                          m_pSpawner;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	class AActor*                                      m_pAttachedActor;                              // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDisDialogVoiceData_OneShot*                 m_pVoiceData;                                  // 0x0010 (0x0004) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	uint32_t                                           m_bRemovedOneShots : 1;                        // 0x0014 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisDialogTree.DisDialogHookInfo
// 0x0050
struct FDisDialogHookInfo
{
	class FString                                      m_DisplayName;                                 // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_ToolTip;                                     // 0x000C (0x000C) [0x0000000800400000] (CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      m_InitiatorDescription;                        // 0x0018 (0x000C) [0x0000000800400000] (CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      m_HookCategory;                                // 0x0024 (0x000C) [0x0000000800400000] (CPF_NeedCtorLink | CPF_EditorOnly)
	class UObject*                                     m_pHookClass;                                  // 0x0030 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_FireGroup;                                   // 0x0034 (0x0001) [0x0000000000000000]               
	float                                              m_fRefire_DelayMin;                            // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              m_fRefire_DelayMax;                            // 0x003C (0x0004) [0x0000000000000000]               
	float                                              m_fRefire_Delay_Global;                        // 0x0040 (0x0004) [0x0000000000000000]               
	float                                              m_fBustTimeWhenFired;                          // 0x0044 (0x0004) [0x0000000000000000]               
	int32_t                                            m_Flags;                                       // 0x0048 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bInitialized : 1;                            // 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisDialogTree.DisConversationFolder
// 0x001C
struct FDisConversationFolder
{
	class FString                                      m_FolderName;                                  // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_iParentFolder;                               // 0x000C (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              m_Conversations;                               // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisDialogTree.DisDialogDebugHookStep
// 0x0018
struct FDisDialogDebugHookStep
{
	class UDisConv_Node*                               m_pNode;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_iCameFromLinkIndex;                          // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      m_LogMessage;                                  // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           m_bDialogWasStarted : 1;                       // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisDialogTree.DisDialogDebugHook
// 0x002C
struct FDisDialogDebugHook
{
	uint8_t                                            m_HookType;                                    // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              m_fWorldTime;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      m_MeSpeakerName;                               // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_InitiatorSpeakerName;                        // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FDisDialogDebugHookStep>       m_DebugSteps;                                  // 0x0020 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisDialogTree_InGameBind.DisDialogRunningObjs
// 0x0010
struct FDisDialogRunningObjs
{
	class UDisConversation_InGameData_Base*            m_pMainDialogTree;                             // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<class UDisConversation_InGameData_Base*> m_Conversations;                               // 0x0004 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisDialogTree_InGameBind.DisDialogRunningInstance
// 0x0049
struct FDisDialogRunningInstance
{
	class UDisDialogTree_InGameBind*                   m_pTreeGameBinding;                            // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UDisConvSpeakerInterface*                    m_pBoundSpeaker_Initiator_Object;              // 0x0004 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UDisConvSpeakerInterface*                    m_pBoundSpeaker_Initiator_Interface;           // 0x0004 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UDisConversation_InGameData*                 m_pCurPlayingConversation;                     // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	class UDisConv_Node*                               m_pCurPlayingNode;                             // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            m_CurPriority;                                 // 0x0014 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bStopWhenDialogStarts : 1;                   // 0x0018 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint8_t                                            m_CheckOnlyResult;                             // 0x001C (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            m_DialogHookThatFiredInst;                     // 0x001D (0x0001) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_iDialogHookBranchIndex;                      // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<class UDisConv_Node*>                 m_NodesToNotifyDialogStarted;                  // 0x0024 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint32_t                                           m_bTryFallbackTree : 1;                        // 0x0030 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	int32_t                                            m_iCurFallbackDepth;                           // 0x0034 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<struct FDisDialogRunningObjs>         m_FallbackChain;                               // 0x0038 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            m_iCurDebugCapture;                            // 0x0044 (0x0004) [0x0002000000002000] (CPF_Transient)
	uint8_t                                            m_PendingEndReason;                            // 0x0048 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0049 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisDialogVoiceData.DisVoiceTextBlurb
// 0x003C
struct FDisVoiceTextBlurb
{
	struct FGuid                                       m_GUID;                                        // 0x0000 (0x0010) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class FString                                      m_AkEventName;                                 // 0x0010 (0x000C) [0x0000000000420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink)
	uint32_t                                           m_bIsNonWord : 1;                              // 0x001C (0x0004) [0x0000000000020001] [0x00000001] (CPF_Edit | CPF_EditConst)
	uint32_t                                           FaceFxGeneratedFromEnglish : 1;                // 0x001C (0x0004) [0x0000000000020001] [0x00000002] (CPF_Edit | CPF_EditConst)
	int32_t                                            m_TextHash;                                    // 0x0020 (0x0004) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class FString                                      m_MicrophoneRecordedAudio;                     // 0x0024 (0x000C) [0x0000000800420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
	class FString                                      m_Text;                                        // 0x0030 (0x000C) [0x0000000800420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
};

// ScriptStruct DishonoredGame.DisDialogVoiceData.DisVoiceTextBlurbList
// 0x004C
struct FDisVoiceTextBlurbList
{
	class UDisDialogTree*                              m_pTree;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDisVoiceTextBlurb>            m_Blurbs;                                      // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            UnknownData00[0x3C];                          // 0x0010 (0x003C) MISSED OFFSET
};

// ScriptStruct DishonoredGame.DisDoor.UserPawnInfo
// 0x000C
struct FUserPawnInfo
{
	struct FPointer                                    m_pEdge;                                       // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	class ADishonoredPawn*                             m_pDishonoredPawn;                             // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bMoveThruDoor : 1;                           // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisDoor.PawnToCloseDoorInfo
// 0x000C
struct FPawnToCloseDoorInfo
{
	class ADishonoredPawn*                             m_pDishonoredPawn;                             // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_CloseState;                                  // 0x0004 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bInOpenRange : 1;                            // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisDoor.SweepBodyProps
// 0x002C
struct FSweepBodyProps
{
	class URB_BodyInstance*                            m_pBodyInst;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_InitialLoc;                                  // 0x0004 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_TotalMove;                                   // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_InitialRot;                                  // 0x001C (0x000C) [0x0000000000000000]               
	int32_t                                            m_TotalRotate;                                 // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisSkeletalBreakStepsInterface.DisSkelBreakChunk
// 0x000C
struct FDisSkelBreakChunk
{
	class UStaticMesh*                                 m_pStaticMesh;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_BoneOrSocketName;                            // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisSkeletalBreakStepsInterface.DisSkelBreakStep
// 0x0034
struct FDisSkelBreakStep
{
	int32_t                                            m_HealthThreshold;                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pSoundEvent;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_AINoiseLoudness;                             // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_AINoiseContext;                              // 0x0009 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_pParticleSystem;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_ParticleSystemSocketName;                    // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bSwitchToFullRagdoll : 1;                    // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class TArray<class UMaterialInterface*>            m_Materials;                                   // 0x001C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FDisSkelBreakChunk>            m_Chunks;                                      // 0x0028 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisUsableObjectBreakSteps.DisUsableObjBreakStage
// 0x0008
struct FDisUsableObjBreakStage
{
	class UDishonoredDamageType*                       m_pDamageType;                                 // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	int32_t                                            m_pStageIndex;                                 // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisUsableObjectBreakSteps.DisUsableObjBreakStep
// 0x000C (0x0034 - 0x0040)
struct FDisUsableObjBreakStep : FDisSkelBreakStep
{
	uint32_t                                           m_bDisableObject : 1;                          // 0x0034 (0x0004) [0x0000400000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bUnlock : 1;                                 // 0x0034 (0x0004) [0x0000400000000001] [0x00000002] (CPF_Edit)
	struct FDisUsableObjBreakStage                     m_BreakStage;                                  // 0x0038 (0x0008) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDoorBreakSteps.DisDoorBreakStep
// 0x0004 (0x0040 - 0x0044)
struct FDisDoorBreakStep : FDisUsableObjBreakStep
{
	uint32_t                                           m_bOpenDoor : 1;                               // 0x0040 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bUnbreakableDoor : 1;                        // 0x0040 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           m_bContinueToAffectPathFinding : 1;            // 0x0040 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisFish.FishAttractor
// 0x001C
struct FFishAttractor
{
	float                                              m_fAttractionStrength;                         // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fSquaredRadius;                              // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fDuration;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_vLocation;                                   // 0x000C (0x000C) [0x0000000000000000]               
	class ADishonoredPawn*                             m_pOwnerPawn;                                  // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisSquadInterface.DisSquadProperty
// 0x0008
struct FDisSquadProperty
{
	class FName                                        m_SquadName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredInventoryItem.DisMeleeExtentCacheEntry
// 0x0018
struct FDisMeleeExtentCacheEntry
{
	struct FVector                                     m_BL;                                          // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_UR;                                          // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredInventoryItem.DisMeleeExtentCache
// 0x00E4
struct FDisMeleeExtentCache
{
	struct FDisMeleeExtentCacheEntry                   m_MeleeExtentCache[8];                         // 0x0000 (0x00C0) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_NumCachedMeleeExtents;                       // 0x00C0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_DeltaTimeSinceLastRecord;                    // 0x00C4 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_iLastMeleeCollision;                         // 0x00C8 (0x0004) [0x0000000000002000] (CPF_Transient)
	class TArray<class UDisItemContext*>               m_MeleeExtentItemContexts;                     // 0x00CC (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FPointer                                    m_pMeleeExtentTweak;                           // 0x00D8 (0x0004) [0x0000000000001000] (CPF_Native)  
	class UParticleSystemComponent*                    m_TrailPsc;                                    // 0x00DC (0x0004) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	uint32_t                                           m_NeedTrailUpdate : 1;                         // 0x00E0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredInventoryItem.DisItemAnimState_PickerInfo
// 0x0048
struct FDisItemAnimState_PickerInfo
{
	uint8_t                                            UnknownData00[0x3C];                          // 0x0000 (0x003C) MISSED OFFSET
	class TArray<struct FPointer>                      m_StateArrays;                                 // 0x003C (0x000C) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct DishonoredGame.DishonoredInventoryItem.DisItemPendingPawnSync
// 0x0010
struct FDisItemPendingPawnSync
{
	class FName                                        m_StateName;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	struct FPointer                                    m_pFiringObj;                                  // 0x0008 (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    m_pAttachToState;                              // 0x000C (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct DishonoredGame.DisSkeletalMeshComponent.UsedMaterial
// 0x0008
struct FUsedMaterial
{
	int32_t                                            m_Index;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bShown : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisGameCrowdPopulationManager.DisCrowdGroundProbeInfo
// 0x0034
struct FDisCrowdGroundProbeInfo
{
	struct FBox                                        m_Extent;                                      // 0x0000 (0x001C) [0x0000000000000000]               
	struct FVector                                     m_Location;                                    // 0x001C (0x000C) [0x0000000000000000]               
	float                                              m_fTime;                                       // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              m_fGroundOffset;                               // 0x002C (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bValid : 1;                                  // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerGlobal.DisMsgBoxInfo
// 0x003C
struct FDisMsgBoxInfo
{
	int32_t                                            m_ID;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            m_nPriority;                                   // 0x0004 (0x0004) [0x0000000000000000]               
	class FString                                      m_Message;                                     // 0x0008 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      m_Buttons[3];                                  // 0x0014 (0x0024) [0x0000000000500000] (CPF_NeedCtorLink)
	float                                              m_fTimerDuration;                              // 0x0038 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerMenuBase.DisSetting
// 0x0014
struct FDisSetting
{
	int32_t                                            m_SettingID;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      m_SettingNameOverride;                         // 0x0004 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           m_bGamepadBindingMenu : 1;                     // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bVideoMenu : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bGammaMenu : 1;                              // 0x0010 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bDeviceSelectionMenu : 1;                    // 0x0010 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           m_bDropList : 1;                               // 0x0010 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerMenuBase.DisSettingsSubCategory
// 0x001C
struct FDisSettingsSubCategory
{
	class FString                                      m_SubCategoryName;                             // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FDisSetting>                   m_Settings;                                    // 0x000C (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           m_bKeyboardBindingMenu : 1;                    // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerMenuBase.DisSettingsCategory
// 0x0024
struct FDisSettingsCategory
{
	class FString                                      m_CategoryName;                                // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FDisSettingsSubCategory>       m_SubCategories;                               // 0x000C (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FDisSetting>                   m_Settings;                                    // 0x0018 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerMainMenu.DisDLCMissionCommand
// 0x0018
struct FDisDLCMissionCommand
{
	uint8_t                                            m_DLC;                                         // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MissionNumber;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      m_Command;                                     // 0x0008 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UObject*                                     m_CheckedClass;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_GFxMoviePlayerNote.DisUIMapLegendItem
// 0x0010
struct FDisUIMapLegendItem
{
	uint8_t                                            m_Type;                                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      m_Description;                                 // 0x0004 (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_GFxMoviePlayerNote.DisUIMapContent
// 0x0024
struct FDisUIMapContent
{
	class FString                                      m_MapTitle;                                    // 0x0000 (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      m_ImagePath;                                   // 0x000C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FDisUIMapLegendItem>           m_Legend;                                      // 0x0018 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisGFxMoviePlayerNote.DisTutorialNoteContent
// 0x001C
struct FDisTutorialNoteContent
{
	class FString                                      m_NoteName;                                    // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_ImagePackageName;                            // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           m_bHasDLC06Override : 1;                       // 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bHasDLC07Override : 1;                       // 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct DishonoredGame.DisTweaks_GFxMoviePlayerPauseMenu.DisPauseMenuTutorial
// 0x0009
struct FDisPauseMenuTutorial
{
	class FName                                        m_NameID;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_Note;                                        // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisTweaks_GFxMoviePlayerPowerWheel.DisShortcutAutoAssignSettings
// 0x0008
struct FDisShortcutAutoAssignSettings
{
	uint32_t                                           m_bWeapon : 1;                                 // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bPower : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           m_bHeart : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	int32_t                                            m_Priority;                                    // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisGlobalAIDangerManager.DisDangerShape
// 0x002C
struct FDisDangerShape
{
	uint8_t                                            m_DangerShapeType;                             // 0x0000 (0x0001) [0x0000000000000000]               
	class AActor*                                      m_pRequestor;                                  // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fRemainingLifetime;                          // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_StartPoint;                                  // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     m_EndPoint;                                    // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              m_fRadius;                                     // 0x0024 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bIsWhaleOil : 1;                             // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisGlobalAIDangerManager.DisDangerShape_WhaleOileDevice
// 0x0000 (0x002C - 0x002C)
struct FDisDangerShape_WhaleOileDevice : FDisDangerShape
{
};

// ScriptStruct DishonoredGame.DisGlobalCombatManager.DisSkirmish
// 0x0010
struct FDisSkirmish
{
	class ADishonoredPawn*                             m_pTargetPawn;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<class UDishonoredAIBrain*>            m_Combatants;                                  // 0x0004 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisGlobalCombatManager.DisGroupAttackKnowledge
// 0x0008
struct FDisGroupAttackKnowledge
{
	float                                              m_fWindowTimer;                                // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fWindowDuration;                             // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGlobalFactionManager.DisFactionPair
// 0x0008
struct FDisFactionPair
{
	class UDisTweaks_Faction*                          m_pFromFaction;                                // 0x0000 (0x0004) [0x0000000000000000]               
	class UDisTweaks_Faction*                          m_pToFaction;                                  // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisGlobalFactionManager.DisDetermineRelationshipIndividualMap
// 0x003C
struct FDisDetermineRelationshipIndividualMap
{
	uint8_t                                            UnknownData00[0x3C];                          // 0x0000 (0x003C) MISSED OFFSET
};

// ScriptStruct DishonoredGame.DisGlobalFactionManager.DisDetermineRelationshipFactionMap
// 0x003C
struct FDisDetermineRelationshipFactionMap
{
	uint8_t                                            UnknownData00[0x3C];                          // 0x0000 (0x003C) MISSED OFFSET
};

// ScriptStruct DishonoredGame.DisGlobalUIManager.DisUIMovieSet
// 0x00A0
struct FDisUIMovieSet
{
	class FString                                      m_MapFilter;                                   // 0x0000 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_SFTweaksPackageName;                         // 0x000C (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_HUDClassName;                                // 0x0018 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_HUDMoviePath;                                // 0x0024 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_PowerWheelClassName;                         // 0x0030 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_PowerWheelMoviePath;                         // 0x003C (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_JournalClassName;                            // 0x0048 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_JournalMoviePath;                            // 0x0054 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_NoteClassName;                               // 0x0060 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_NoteMoviePath;                               // 0x006C (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_PauseMenuClassName;                          // 0x0078 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_PauseMenuMoviePath;                          // 0x0084 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      m_MissionStatsMoviePath;                       // 0x0090 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           m_bHasDLCItemIconPackages : 1;                 // 0x009C (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
};

// ScriptStruct DishonoredGame.DisGlobalUIManager.DisTexturePackageInfo
// 0x0020
struct FDisTexturePackageInfo
{
	class FString                                      m_PackageName;                                 // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	uint32_t                                           m_bPackageToLoad : 1;                          // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    m_pPackage;                                    // 0x0010 (0x0004) [0x0000000000001000] (CPF_Native)  
	class TArray<struct FPointer>                      m_Textures;                                    // 0x0014 (0x000C) [0x0000000000101000] (CPF_Native)  
};

// ScriptStruct DishonoredGame.DisTweaks_BendTime.PowerAttributes_BendTime
// 0x0028
struct FPowerAttributes_BendTime
{
	float                                              m_WorldDilation;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_PlayerDilation;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_TimeDuration;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pBendTimeSoundStartEvent;                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pBendTimeSoundStopEvent;                     // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fPostEffectWarmupTime;                       // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fPostEffectCooldownTime;                     // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fTimeDilationWarmupTime;                     // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fTimeDilationCooldownTime;                   // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fProjectileEarlyWakeupTime;                  // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_Blink.PowerAttributes_Blink
// 0x004C
struct FPowerAttributes_Blink
{
	float                                              m_Distance;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_HorizDistance;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_VertDistance;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDefaultBlinkStepDistance;                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDefaultTimeBetweenBlinkSteps;               // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBendTimeDownTime;                           // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBendTimeUpTime;                             // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fWarmupTime;                                 // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fCooldownTime;                               // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fWarmupWobbleMaxStrength;                    // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fWarmupWobblePerSecond;                      // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fWarmupDistorionMinStrength;                 // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMoveDistortionMaxStrength;                  // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMoveBlurMaxStrength;                        // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMoveReachMaxAtPercentage;                   // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_CoolDownWobbleCount;                         // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pBlinkWarmupSoundEvent;                      // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pBlinkSoundEvent;                            // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pFizzleSoundEvent;                           // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_DevouringSwarm.PowerAttributes_DevouringSwarm
// 0x0048
struct FPowerAttributes_DevouringSwarm
{
	float                                              m_fMaxDistance;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDuration;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGameCrowdSpawnerSettings                   m_RatSpawnerSettings;                          // 0x0008 (0x002C) [0x0000000000000001] (CPF_Edit)    
	class UDisTweaks_RatSwarm*                         m_pRatSwarmTweaks;                             // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pUseSoundEvent;                              // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pImpactSoundEvent;                           // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pPowerEndSoundEvent;                         // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_pSpawnFX;                                    // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_Possess.DisPossessLevel
// 0x0010
struct FDisPossessLevel
{
	float                                              m_fPossessRange;                               // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pIntroSoundEvent;                            // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pOutroSoundEvent;                            // 0x0008 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fBendTimeExtension;                          // 0x000C (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredActivePowerComponent_Possess.DisPossessTarget
// 0x0018
struct FDisPossessTarget
{
	class UDisPossessableInterface*                    m_pPossessee_Object;                           // 0x0000 (0x0008) [0x0000000000000000] 
	class UDisPossessableInterface*                    m_pPossessee_Interface;                        // 0x0000 (0x0008) [0x0000000000000000]               
	struct FVector                                     m_PossesseeLoc;                                // 0x0008 (0x000C) [0x0000000000000000]               
	uint32_t                                           m_bPossessableObstructed : 1;                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bPossessableBusy : 1;                        // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bPossessableDisallowed : 1;                  // 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct DishonoredGame.DisTweaks_WindBlast.PowerAttributes_WindBlast
// 0x0040
struct FPowerAttributes_WindBlast
{
	float                                              m_Force;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_ExtraUpForce;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_Angle;                                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_Damage;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_Distance;                                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_Speed;                                       // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pWindBlastSoundEvent;                        // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_EffectTemplate;                              // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_HandEffectTemplate;                          // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pUnderwaterWindBlastSoundEvent;              // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_UnderwaterEffectTemplate;                    // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_UnderwaterHandEffectTemplate;                // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_HandEffectSocketName;                        // 0x0030 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_PostProcessTime;                             // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_PostProcessFadeOutTime;                      // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredActivePowerComponent_WindBlast.BlastedActor
// 0x0008
struct FBlastedActor
{
	class AActor*                                      m_pActor;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class UPrimitiveComponent*                         m_pComponent;                                  // 0x0004 (0x0004) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DishonoredAIBrain.DisStimRef
// 0x0008
struct FDisStimRef
{
	struct FPointer                                    m_pStim;                                       // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	float                                              m_fDelayTimer;                                 // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAIBrain.DisMagicalIncidentStruct
// 0x000C
struct FDisMagicalIncidentStruct
{
	class ADishonoredPawn*                             m_pMagicUsingPawn;                             // 0x0000 (0x0004) [0x0000000000000000]               
	class UDishonoredActivePowerComponent*             m_pMagicalIncidentClass;                       // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fMagicalIncidentExpirationTimer;             // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredAnimNodeStatePicker.StateSlotInfo
// 0x0014
struct FStateSlotInfo
{
	class FName                                        m_StateName;                                   // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bActive : 1;                                 // 0x0008 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class UDishonoredAnimTree*                         m_pTree;                                       // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	class UDishonoredAnimNodeTreeRef_Dynamic*          m_pTreeRef;                                    // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredAnimNodeTreeRef_Dynamic.DisAnimTreePoolInfo
// 0x0008
struct FDisAnimTreePoolInfo
{
	int32_t                                            m_TypicalSimultaneousActiveTrees;              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bReturnToPoolNonRelevant : 1;                // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bFetchAtSpawnTime : 1;                       // 0x0004 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           m_bKeepUntilFullDestroy : 1;                   // 0x0004 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DishonoredAnimNodeTreeRef_Dynamic.DynamicTreeTemplate
// 0x001C
struct FDynamicTreeTemplate
{
	uint32_t                                           m_bUseAnimTreePooling : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class FName                                        m_AnimTree_Name;                               // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDishonoredAnimTree*                         m_pAnimTree_Template;                          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDisAnimTreePoolInfo                        m_PoolSettings;                                // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDishonoredAnimTree*                         m_pAnimTree_Instance;                          // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredAnimTree.DisAnimStateTreeInfo
// 0x0010
struct FDisAnimStateTreeInfo
{
	int32_t                                            m_AnimStatePicker;                             // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FPointer                                    m_pAnimState_FiredFromObj;                     // 0x0004 (0x0004) [0x0000000000001000] (CPF_Native)  
	struct FPointer                                    m_pAnimState_AttachToState;                    // 0x0008 (0x0004) [0x0000000000001000] (CPF_Native)  
	uint32_t                                           m_bIsAnimStateActive : 1;                      // 0x000C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredAudioSystem.DisSoundRTPCUpdater
// 0x0014
struct FDisSoundRTPCUpdater
{
	class FName                                        m_Parameter;                                   // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              m_fCurrentValue;                               // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fTargetValue;                                // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fChangeRate;                                 // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredAudioSystem.DisPlayingComponent
// 0x0008
struct FDisPlayingComponent
{
	class UDisAkComponent*                             m_pComponent;                                  // 0x0000 (0x0004) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class AActor*                                      m_pInstigator;                                 // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredAudioSystem.DisAmbientSound
// 0x000C
struct FDisAmbientSound
{
	class AAkAmbientSound*                             m_pAmbientSound;                               // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fStartRadiusSq;                              // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fStopRadiusSq;                               // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisTweaks_ThrownObjects.DisThrownObjectSelection
// 0x0010
struct FDisThrownObjectSelection
{
	float                                              m_fWeight;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               m_pSkeletalMesh;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UPhysicsAsset*                               m_pPhysicsAsset;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDisContactType*                             m_pContactType;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredAudioVolume.DisSoundRTPC
// 0x0010
struct FDisSoundRTPC
{
	class FName                                        m_Parameter;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fValue;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fChangeRate;                                 // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredBarkManager.DisPlayerBarkPair
// 0x0004
struct FDisPlayerBarkPair
{
	uint8_t                                            m_BarkType;                                    // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_BarkPriority;                                // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_Dummy[2];                                    // 0x0002 (0x0002) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredBarkManager.DisPlayerBarkInfo
// 0x0005
struct FDisPlayerBarkInfo
{
	class UAkEvent*                                    m_pSoundEvent;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_BarkLayer;                                   // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DishonoredBreakable.DisPendingBreakage
// 0x0010
struct FDisPendingBreakage
{
	int32_t                                            m_iWantedStep;                                 // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_BreakVelocity;                               // 0x0004 (0x000C) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredBreakable.DisLootSettings
// 0x0010
struct FDisLootSettings
{
	class UDisLootPayload*                             m_pLootPayload;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_NumToDropOverride;                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fImpulseForce;                               // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bLootDropped : 1;                            // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredCamera_BumpSmoother.DisBumpDetectInfo
// 0x0014
struct FDisBumpDetectInfo
{
	float                                              m_fLastSampleHeight;                           // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_LastSample_Full;                             // 0x0004 (0x000C) [0x0000000000000000]               
	uint32_t                                           m_bFirstHeight : 1;                            // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredCamera_PhysicalReact.DisSpringConstant
// 0x0010
struct FDisSpringConstant
{
	float                                              m_Springiness;                                 // 0x0000 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              m_Damping;                                     // 0x0004 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint32_t                                           m_bCapVelocity : 1;                            // 0x0008 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	float                                              m_fMaxVelocity;                                // 0x000C (0x0004) [0x0000000000004000] (CPF_Config)  
};

// ScriptStruct DishonoredGame.DishonoredCamera_PhysicalReact.DisSpringPoint
// 0x003C
struct FDisSpringPoint
{
	struct FVector                                     m_Pos;                                         // 0x0000 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_Velocity;                                    // 0x000C (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_Pos_Previous;                                // 0x0018 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_Velocity_Previous;                           // 0x0024 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_BoundPos;                                    // 0x0030 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredCameraInfluenceGroup.DishonoredVTSettings
// 0x0054
struct FDishonoredVTSettings
{
	float                                              m_ArmFollowWeight;                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_ArmFollowWeight_Rot_Primary;                 // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_ArmFollowWeight_Rot_Secondary;               // 0x0008 (0x0004) [0x0000000000000000]               
	struct FRotator                                    m_ArmFollowOffset_Rot_Primary;                 // 0x000C (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_ArmFollowOffset_Rot_Secondary;               // 0x0018 (0x000C) [0x0000000000000000]               
	float                                              m_ArmFollowOffset_Weight_Primary;              // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              m_ArmFollowOffset_Weight_Secondary;            // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              m_MeshSpecificFOVWeight;                       // 0x002C (0x0004) [0x0000000000000000]               
	struct FRotator                                    m_ControllerOffset_Rot;                        // 0x0030 (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_NonAdditive_Rot;                             // 0x003C (0x000C) [0x0000000000000000]               
	struct FVector                                     m_NonAdditive_Pos;                             // 0x0048 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredCameraInfluenceGroup.DishonoredViewTarget
// 0x007C
struct FDishonoredViewTarget
{
	struct FTViewTarget                                m_VT;                                          // 0x0000 (0x0028) [0x0000000000000000]               
	struct FDishonoredVTSettings                       m_DishonoredSettings;                          // 0x0028 (0x0054) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisItemContext.DisMeleeInfo
// 0x0054
struct FDisMeleeInfo
{
	struct FImpactInfo                                 m_ImpactInfo;                                  // 0x0000 (0x0050) [0x0000000000080000] (CPF_Component)
	float                                              m_fHitQuality;                                 // 0x0050 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisItemContext_MeleeAttack.DisDeferredVersusContact
// 0x0008
struct FDisDeferredVersusContact
{
	class UDisContactType*                             m_pOtherContactType;                           // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	class AActor*                                      m_pStruckActor;                                // 0x0004 (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct DishonoredGame.DishonoredPlayerPawn.PlayerDebugVars
// 0x0010
struct FPlayerDebugVars
{
	struct FVector                                     m_LastJumpLandVel;                             // 0x0000 (0x000C) [0x0000000000000000]               
	uint32_t                                           m_bIgnoreAimOffset : 1;                        // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bIsGhosting : 1;                             // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bGhostChestView : 1;                         // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct DishonoredGame.DishonoredContactSystem.DisContactListHead
// 0x000C
struct FDisContactListHead
{
	class UDisContactType*                             m_pClass;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FPointer                                    m_pFirstStrikerIntersection;                   // 0x0004 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FPointer                                    m_pFirstStruckIntersection;                    // 0x0008 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredContactSystem.DisContactSubHelper
// 0x0008
struct FDisContactSubHelper
{
	class UDisContactSubIntersection*                  m_pClass;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class UDisContactSubIntersection*                  m_pSubIntersectObj;                            // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredContactSystem.DisContactIntersection
// 0x001C
struct FDisContactIntersection
{
	class UDisContactType*                             m_pStriker;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	class UDisContactType*                             m_pStruck;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	class TArray<struct FDisContactSubHelper>          m_SubIntersections;                            // 0x0008 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    m_pNextSameStriker;                            // 0x0014 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	struct FPointer                                    m_pNextSameStruck;                             // 0x0018 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredContactSystem.DisContactDebugItem
// 0x0018
struct FDisContactDebugItem
{
	class UDisContactType*                             m_pStriker;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	class UDisContactType*                             m_pStruck;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_Pos;                                         // 0x0008 (0x000C) [0x0000000000000000]               
	float                                              m_fTimeOfContact;                              // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredDebugMenu.DishonoredDebugMenuItem
// 0x0038
struct FDishonoredDebugMenuItem
{
	class FString                                      PageName;                                      // 0x0000 (0x000C) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class FString                                      EntryName;                                     // 0x000C (0x000C) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class TArray<class FString>                        Commands;                                      // 0x0018 (0x000C) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class TArray<class FString>                        Texts;                                         // 0x0024 (0x000C) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            CurrentCommand;                                // 0x0030 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint32_t                                           bActivated : 1;                                // 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCloseMenuOnValidate : 1;                      // 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct DishonoredGame.DishonoredEngine.DLC06EndGamePlayerInfo.AmmoInfo
// 0x0008
struct FAmmoInfo
{
	int32_t                                            Capacity;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            Count;                                         // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredEngine.DLC06EndGamePlayerInfo.PowerInfo
// 0x0010
struct FPowerInfo
{
	class FString                                      Name;                                          // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            Level;                                         // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredEngine.DLC06EndGamePlayerInfo.BoneCharm
// 0x0008
struct FBoneCharm
{
	int32_t                                            Level;                                         // 0x0000 (0x0004) [0x0000000000000000]               
	int32_t                                            CharmIndex;                                    // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredEngine.DLC06EndGamePlayerInfo.StoryFlag
// 0x0020
struct FStoryFlag
{
	class FString                                      Name;                                          // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FGuid                                       Guid;                                          // 0x000C (0x0010) [0x0000000000000000]               
	int32_t                                            bSet;                                          // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredEngine.DLC06EndGamePlayerInfo
// 0x00C0
struct FDLC06EndGamePlayerInfo
{
	uint32_t                                           m_bIsValid : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            m_ElixirCount[2];                              // 0x0004 (0x0008) [0x0000000000000000]               
	int32_t                                            m_InventoryItems[4];                           // 0x000C (0x0010) [0x0000000000000000]               
	struct FAmmoInfo                                   m_AmmoInfo[12];                                // 0x001C (0x0060) [0x0000000000000000]               
	int32_t                                            m_Gold;                                        // 0x007C (0x0004) [0x0000000000000000]               
	int32_t                                            m_Runes;                                       // 0x0080 (0x0004) [0x0000000000000000]               
	class TArray<struct FPowerInfo>                    m_ActivePowers;                                // 0x0084 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FPowerInfo>                    m_PassivePowers;                               // 0x0090 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FBoneCharm>                    m_BoneCharms;                                  // 0x009C (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<struct FStoryFlag>                    m_StoryFlags;                                  // 0x00A8 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class TArray<class FString>                        m_Upgrades;                                    // 0x00B4 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredEngine.MapConfig
// 0x0038
struct FMapConfig
{
	class FString                                      m_Name;                                        // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_FriendlyName;                                // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_ImageName;                                   // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_LoadingMovieName;                            // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           m_bShowLoadingTexts : 1;                       // 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bShowMapNameOnlyOnXboxNoHDD : 1;             // 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bIsSaveNotificationMovie : 1;                // 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	int32_t                                            m_nRichPresenceChapter;                        // 0x0034 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisPostProcessManager.PpBridge
// 0x012C
struct FPpBridge
{
	class UArkPpNodeBlur*                              m_UnderWater_BendTime_Blink_Pp;                // 0x0000 (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_UnderWaterVectorsPp;                         // 0x0004 (0x0004) [0x0000000000000000]               
	struct FArkUberPpParameters                        m_UnderWaterOriginalUberPpParameters;          // 0x0008 (0x0060) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_BendTimeVectorsPp;                           // 0x0068 (0x0004) [0x0000000000000000]               
	struct FArkUberPpParameters                        m_BendTimeVectorsUberBackup;                   // 0x006C (0x0060) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_BendTimeUnderWaterVectorsPp;                 // 0x00CC (0x0004) [0x0000000000000000]               
	class UArkPpNodeSwitch*                            m_BendTimeUnderWaterSwitch;                    // 0x00D0 (0x0004) [0x0000000000000000]               
	class UArkPpNodeSwitch*                            m_BendTimeSwitch;                              // 0x00D4 (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_BlinkVectorsPp;                              // 0x00D8 (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_BlinkVectors2Pp;                             // 0x00DC (0x0004) [0x0000000000000000]               
	class UArkPpNodeSwitch*                            m_MainBlinkSwitch;                             // 0x00E0 (0x0004) [0x0000000000000000]               
	class UArkPpNodeSwitch*                            m_BlinkOnlySwitch;                             // 0x00E4 (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_AdrenalinePp;                                // 0x00E8 (0x0004) [0x0000000000000000]               
	class UArkPpNodeSwitch*                            m_AdrenalineSwitch;                            // 0x00EC (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_PlagueVectors;                               // 0x00F0 (0x0004) [0x0000000000000000]               
	class UArkPpNodeSwitch*                            m_PlagueSwitch;                                // 0x00F4 (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_PossessionVectors;                           // 0x00F8 (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_PossessionInMaterial;                        // 0x00FC (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_PossessionOutMaterial;                       // 0x0100 (0x0004) [0x0000000000000000]               
	class UArkPpNodeSwitch*                            m_PossessionSwitch;                            // 0x0104 (0x0004) [0x0000000000000000]               
	class UArkPpNodeAA*                                m_PpNodeAA;                                    // 0x0108 (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_KOBackupFrame;                               // 0x010C (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_KOBlendFrame;                                // 0x0110 (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_KOVectors;                                   // 0x0114 (0x0004) [0x0000000000000000]               
	class UArkPpNodeSwitch*                            m_KOSwitch;                                    // 0x0118 (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_ZoomLensVectors;                             // 0x011C (0x0004) [0x0000000000000000]               
	class UArkPpNodeMaterial*                          m_ZoomLensCompose;                             // 0x0120 (0x0004) [0x0000000000000000]               
	class UArkPpNodeSwitch*                            m_ZoomLensSwitch;                              // 0x0124 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bInitDone : 1;                               // 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredGlobalAIManager.CorpseIslandPawnInfo
// 0x0008
struct FCorpseIslandPawnInfo
{
	class ADishonoredNPCPawn*                          m_pPawn;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fAge;                                        // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredGlobalAIManager.CorpseIslandInfo
// 0x000C
struct FCorpseIslandInfo
{
	class TArray<struct FCorpseIslandPawnInfo>         m_PawnList;                                    // 0x0000 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredGlobalAIManager.CustomIgnoreDeathInfo
// 0x000C
struct FCustomIgnoreDeathInfo
{
	class UDishonoredAIBrain*                          m_pIgnorer;                                    // 0x0000 (0x0004) [0x0000000000000000]               
	class UDisCorpseInterface*                         m_pIgnoree_Object;                             // 0x0004 (0x0008) [0x0000000000000000] 
	class UDisCorpseInterface*                         m_pIgnoree_Interface;                          // 0x0004 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredGlobalAIManager.GlobalCorpseInfo
// 0x0020
struct FGlobalCorpseInfo
{
	float                                              m_fTimeOfLastUse;                              // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fAge;                                        // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_IslandID;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            m_PhysAssetBodyIndex;                          // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fUpdateTimer;                                // 0x0010 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_Location;                                    // 0x0014 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisWaterVolumeManager.DisWaterCollidingBody
// 0x000C
struct FDisWaterCollidingBody
{
	class URB_BodyInstance*                            m_pBodyInstance;                               // 0x0000 (0x0004) [0x0000000000000000]               
	class ADishonoredWaterVolume*                      m_pMasterWaterVolume;                          // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fSurfaceZ;                                   // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisRatSwarmGlobalManager.DisCorpseToEat
// 0x0014
struct FDisCorpseToEat
{
	class ADishonoredNPCPawn*                          m_pPawn;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bAllowedToEat : 1;                           // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_LastCheckedLocation;                         // 0x0008 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisNPCTravelManager.DisRelationshipPair
// 0x0004
struct FDisRelationshipPair
{
	uint8_t                                            m_RelationshipTo;                              // 0x0000 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_RelationshipFrom;                            // 0x0001 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_Padding[2];                                  // 0x0002 (0x0002) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisNPCTravelManager.DisMaterialIndexReplacement
// 0x0008
struct FDisMaterialIndexReplacement
{
	int32_t                                            m_MaterialIndex;                               // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_VariationIndex;                              // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisNPCTravelManager.DisMaterialIndexesOverride
// 0x000C
struct FDisMaterialIndexesOverride
{
	class TArray<struct FDisMaterialIndexReplacement>  m_MaterialIndexReplacements;                   // 0x0000 (0x000C) [0x0000000000502000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisNPCTravelManager.DisNPCTravelInfo
// 0x00F4
struct FDisNPCTravelInfo
{
	int32_t                                            m_TripID;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        m_HomeLevelName;                               // 0x0004 (0x0008) [0x0000000000000000]               
	class FName                                        m_NPCPawnTweaksName;                           // 0x000C (0x0008) [0x0000000000000000]               
	struct FDisMaterialIndexesOverride                 m_MeshMaterialVariations;                      // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_HeadMeshIndex;                               // 0x0020 (0x0004) [0x0000000000000000]               
	struct FDisMaterialIndexesOverride                 m_HeadMeshMaterialVariations;                  // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            m_AccessoryIndexes[2];                         // 0x0030 (0x0008) [0x0000000000000000]               
	int32_t                                            m_Health;                                      // 0x0038 (0x0004) [0x0000000000000000]               
	int32_t                                            m_MinScriptedHealth;                           // 0x003C (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              m_LostInventoryItemIndexes;                    // 0x0040 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	int32_t                                            m_PrimaryEquippedItemIndex;                    // 0x004C (0x0004) [0x0000000000000000]               
	int32_t                                            m_SecondaryEquippedItemIndex;                  // 0x0050 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              m_EquippedArmorIndexes;                        // 0x0054 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	struct FDisRelationshipPair                        m_PlayerRelationship;                          // 0x0060 (0x0004) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x78];                          // 0x0064 (0x0078) MISSED OFFSET
	class FName                                        m_VisitingLevelName;                           // 0x00DC (0x0008) [0x0000000000000000]               
	uint32_t                                           m_bReturningHome : 1;                          // 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bAwaitingArrival : 1;                        // 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 
	class ADisTravelSpawner*                           m_pSpawner;                                    // 0x00E8 (0x0004) [0x0000000000000000]               
	float                                              m_fTimeToSpawn;                                // 0x00EC (0x0004) [0x0000000000000000]               
	class ADishonoredNPCPawn*                          m_pNPCPawn;                                    // 0x00F0 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredGameInfo.BendTimeTrack
// 0x0018
struct FBendTimeTrack
{
	float                                              m_fPlayerDilation;                             // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fPlayerDilation_Input;                       // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fWorldDilation;                              // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_fEffectIntensity[3];                         // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredGameInfo.BendTimeActorInfo
// 0x0008
struct FBendTimeActorInfo
{
	float                                              m_fTimeRemaining;                              // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bAdjustVelocities : 1;                       // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredGameInfo.BendTimeChannelInfo
// 0x0040
struct FBendTimeChannelInfo
{
	uint8_t                                            m_EffectType;                                  // 0x0000 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              m_fCurrentEffectIntensity;                     // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fTargetEffectIntensity;                      // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fEffectIntensityVelocity;                    // 0x000C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fCurrentWorldTimeDilation;                   // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fTargetWorldTimeDilation;                    // 0x0014 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fWorldTimeDilationVelocity;                  // 0x0018 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fCurrentPlayerTimeDilation;                  // 0x001C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fTargetPlayerTimeDilation;                   // 0x0020 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fPlayerTimeDilationVelocity;                 // 0x0024 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fCurrentPlayerTimeDilation_Input;            // 0x0028 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fTargetPlayerTimeDilation_Input;             // 0x002C (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fPlayerTimeDilationVelocity_Input;           // 0x0030 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bExclusive : 1;                              // 0x0034 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              m_fMaxDilation;                                // 0x0038 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bAlwaysAffectWorld : 1;                      // 0x003C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           m_bAlwaysAffectPlayer : 1;                     // 0x003C (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           m_bAffectsBendTimePower : 1;                   // 0x003C (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           m_bSerializeForGameSave : 1;                   // 0x003C (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredGameInfo.BarkLogInfo
// 0x001C
struct FBarkLogInfo
{
	class FName                                        m_DialogHookName;                              // 0x0000 (0x0008) [0x0000000000000000]               
	uint8_t                                            m_DialogHookPriority;                          // 0x0008 (0x0001) [0x0000000000000000]               
	class UObject*                                     m_pDialogHookInitiator;                        // 0x000C (0x0004) [0x0000000000000000]               
	class FName                                        m_DialogLineName;                              // 0x0010 (0x0008) [0x0000000000000000]               
	class UObject*                                     m_pSpeaker;                                    // 0x0018 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredGameInfo.MissionInfos
// 0x001C
struct FMissionInfos
{
	int32_t                                            MissionNumber;                                 // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<class FString>                        Maps;                                          // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FString>                        Movies;                                        // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredGameInfo.DisChapterTarget
// 0x000D
struct FDisChapterTarget
{
	class FString                                      m_PortraitPath;                                // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            m_State;                                       // 0x000C (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x000D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisPowerMenu.DisPowerMenuItem
// 0x0010
struct FDisPowerMenuItem
{
	class FName                                        PowerName;                                     // 0x0000 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            PowerLevel;                                    // 0x0008 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	int32_t                                            Cost;                                          // 0x000C (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredHUD.PostRenderItem
// 0x0010
struct FPostRenderItem
{
	class AActor*                                      m_pActor;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bAutoRemove : 1;                             // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            m_RefCount;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_fDistToCamSq;                                // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredHUD.DisHUDColor
// 0x0018
struct FDisHUDColor
{
	class FName                                        m_ColorName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FLinearColor                                m_Color;                                       // 0x0008 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredHUD.DisHUDDebugColor
// 0x0010
struct FDisHUDDebugColor
{
	class FName                                        m_DebugName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_ColorName;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredMantleEdgeFinderComponent.MantleCollisionCheckDebugInfo
// 0x0030
struct FMantleCollisionCheckDebugInfo
{
	struct FVector                                     m_Start;                                       // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Stop;                                        // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Mid;                                         // 0x0018 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Extents;                                     // 0x0024 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredMantleEdgeFinderComponent.DisMantleSpot
// 0x0018
struct FDisMantleSpot
{
	struct FVector                                     m_StartLocation;                               // 0x0000 (0x000C) [0x0000000000000000]               
	int32_t                                            m_StartYaw;                                    // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fEdgeHeight;                                 // 0x0010 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bRequiresImpactAnim : 1;                     // 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bForcesCrouch : 1;                           // 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct DishonoredGame.DisTweaks_ChapterInfoList.DisChapterInfoEntry
// 0x000C
struct FDisChapterInfoEntry
{
	class FName                                        m_ChapterTag;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDisTweaks_ChapterInfo*                      m_pChapterInfo;                                // 0x0008 (0x0004) [0x0000000002000001] (CPF_Edit | CPF_NoClear)
};

// ScriptStruct DishonoredGame.DishonoredMapInfo.DisSquadInfo
// 0x0018
struct FDisSquadInfo
{
	class FName                                        m_SquadName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MaxNPCsAlive;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_MaxNPCsTotal;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_NumNPCsAlive;                                // 0x0010 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_NumNPCsTotal;                                // 0x0014 (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredSearchCrumbsComponent.SearchCrumbStruct
// 0x0010
struct FSearchCrumbStruct
{
	struct FVector                                     m_Position;                                    // 0x0000 (0x000C) [0x0000000000000000]               
	float                                              m_fLifetime;                                   // 0x000C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPowersComponent.DishonoredPowerModifierInfo
// 0x0010
struct FDishonoredPowerModifierInfo
{
	class FName                                        m_AttributeName;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_ModType;                                     // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fModValue;                                   // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DishonoredPowersComponent.DishonoredPowerLevel
// 0x0010
struct FDishonoredPowerLevel
{
	int32_t                                            m_RuneCost;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDishonoredPowerModifierInfo>  m_Modifiers;                                   // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredPowersComponent.DishonoredPower
// 0x001C
struct FDishonoredPower
{
	class FName                                        m_Name;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_eUISelection;                                // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDishonoredPowerLevel>         m_Levels;                                      // 0x000C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            m_CurrentLevel;                                // 0x0018 (0x0004) [0x0000020000020000] (CPF_EditConst | CPF_EditHide)
};

// ScriptStruct DishonoredGame.DishonoredPlayerPawn.DisPlayerHealthEffect
// 0x00C0
struct FDisPlayerHealthEffect
{
	class FName                                        m_Name;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fHealthThreshold;                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBlendInTime;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBlendOutTime;                               // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bApplyPostProcess : 1;                       // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FArkPpConfig                                m_ArkPpSettings;                               // 0x0018 (0x0084) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDisPlayerBarkPair>            m_Bark_OnEnable;                               // 0x009C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FDisPlayerBarkPair>            m_Bark_OnDisable;                              // 0x00A8 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UDisTweaks_EmitterCameraLensEffect*          m_pLensEffect;                                 // 0x00B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fCurWeight;                                  // 0x00B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fCurDuration;                                // 0x00BC (0x0004) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredPlayerPawn.DisAnimStateMapKey_WithPrefix
// 0x0010
struct FDisAnimStateMapKey_WithPrefix
{
	class FName                                        m_PrefixName;                                  // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	class FName                                        m_StateName;                                   // 0x0008 (0x0008) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredPlayerPawn.DisPawnAnimState_PickerInfo
// 0x0084
struct FDisPawnAnimState_PickerInfo
{
	uint8_t                                            UnknownData00[0x78];                          // 0x0000 (0x0078) MISSED OFFSET
	class TArray<struct FPointer>                      m_StateArrays;                                 // 0x0078 (0x000C) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct DishonoredGame.DisStoryFlagSet.DisStoryFlag
// 0x0018
struct FDisStoryFlag
{
	class FName                                        m_Name;                                        // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       m_GUID;                                        // 0x0008 (0x0010) [0x0000000001000000]               
};

// ScriptStruct DishonoredGame.DisStoryFlagSet.DisStoryFlagInstance
// 0x001C
struct FDisStoryFlagInstance
{
	class FName                                        m_StoryFlagSet_Path;                           // 0x0000 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FGuid                                       m_GUID;                                        // 0x0008 (0x0010) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bCurValue : 1;                               // 0x0018 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DishonoredPlayerPawn.DisCollectedWhaleBoneCharm
// 0x0008
struct FDisCollectedWhaleBoneCharm
{
	uint8_t                                            m_Level;                                       // 0x0000 (0x0001) [0x0000000000000000]               
	int32_t                                            m_CharmInfoIndex;                              // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPlayerPawn.DisMissionStatValue
// 0x000C
struct FDisMissionStatValue
{
	uint8_t                                            m_Stat;                                        // 0x0000 (0x0001) [0x0000000000000000]               
	float                                              m_fValue;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_MaxValue;                                    // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPlayerPawn.TimeStampedValue
// 0x0008
struct FTimeStampedValue
{
	float                                              m_fTime;                                       // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fValue;                                      // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPlayerPawn.AchievementTracker
// 0x0014
struct FAchievementTracker
{
	uint32_t                                           m_bUnlocked : 1;                               // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FTimeStampedValue>             m_StreakValues;                                // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           m_bEnabled : 1;                                // 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredPlayerPawn.TatooGlowInfo
// 0x0010
struct FTatooGlowInfo
{
	float                                              m_fDuration;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fRampDownDuration;                           // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fRampDownTimeRemaining;                      // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bEnding : 1;                                 // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredPlayerPawn.DisPlayerStealthSaveVars
// 0x0004
struct FDisPlayerStealthSaveVars
{
	uint32_t                                           m_bSneakModeToggled : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bIsAutoCrouched : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct DishonoredGame.DisKeyRing.DisKeyInfo
// 0x001C
struct FDisKeyInfo
{
	class FString                                      m_Name;                                        // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UDisTweaks_Key*                              m_pTweaks;                                     // 0x000C (0x0004) [0x0000000000000000]               
	class FString                                      m_LocalizedName;                               // 0x0010 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredPlayerCamera.DisRainImpact
// 0x0018
struct FDisRainImpact
{
	struct FVector                                     m_Position;                                    // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Direction;                                   // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPlayerCamera.DisCamFOVTarget
// 0x000C
struct FDisCamFOVTarget
{
	float                                              m_fTarget;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bLockArms : 1;                               // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fBlendSpeed;                                 // 0x0008 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPlayerCamera.DisCamPostProcessEntry
// 0x0090
struct FDisCamPostProcessEntry
{
	struct FArkPpConfig                                m_PpSettings;                                  // 0x0000 (0x0084) [0x0000000000000000]               
	float                                              m_fBlendSpeed;                                 // 0x0084 (0x0004) [0x0000000000000000]               
	float                                              m_fTargetWeight;                               // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              m_fCurWeight;                                  // 0x008C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPlayerCamera.DisCamPostProcessTarget
// 0x0480
struct FDisCamPostProcessTarget
{
	struct FDisCamPostProcessEntry                     m_Entries[8];                                  // 0x0000 (0x0480) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredPlayerInput.DisGameActionBinding
// 0x0038
struct FDisGameActionBinding
{
	class FName                                        m_ActionName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	struct FKeyBind                                    m_KeyBind_PC;                                  // 0x0008 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FKeyBind                                    m_KeyBind_Gamepad;                             // 0x0020 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredPlayerInput.DisMultiPressInfo
// 0x0014
struct FDisMultiPressInfo
{
	int32_t                                            m_NumButtonPresses;                            // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              m_fTimeLastPressed;                            // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	class FString                                      m_ChildCommand;                                // 0x0008 (0x000C) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisNoiseListenerInterface.DisAINoiseInfo
// 0x0048
struct FDisAINoiseInfo
{
	class UDisNoiseMakerInterface*                     m_pNoiseMakerInterface_Object;                 // 0x0000 (0x0008) [0x0000000000000000] 
	class UDisNoiseMakerInterface*                     m_pNoiseMakerInterface_Interface;              // 0x0000 (0x0008) [0x0000000000000000]               
	struct FDisAINoiseParameters                       m_NoiseParameters;                             // 0x0008 (0x0030) [0x0000000000000000]               
	float                                              m_fAttenuation;                                // 0x0038 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_NoiseNormal;                                 // 0x003C (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredSpawner.DisAlarmSpawnInfo
// 0x0018
struct FDisAlarmSpawnInfo
{
	class ADisAlarmBell*                               m_pAlarm;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_AlarmResponseLocation;                       // 0x0004 (0x000C) [0x0000000000000000]               
	int32_t                                            m_AlarmAttentionTag;                           // 0x0010 (0x0004) [0x0000000000000000]               
	class AActor*                                      m_pAlarmTroublemaker;                          // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredSpawner.DisSpawnInfo
// 0x0074
struct FDisSpawnInfo
{
	class UDisSpawnRequesterInterface*                 m_pSpawnRequester_Object;                      // 0x0000 (0x0008) [0x0000000000000000] 
	class UDisSpawnRequesterInterface*                 m_pSpawnRequester_Interface;                   // 0x0000 (0x0008) [0x0000000000000000]               
	int32_t                                            m_NPCID;                                       // 0x0008 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bSpawnEvenIfVisible : 1;                     // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bHearSoundOnSpawn : 1;                       // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	struct FDisAINoiseInfo                             m_HearSoundOnSpawnNoiseInfo;                   // 0x0010 (0x0048) [0x0000000000000000]               
	uint32_t                                           m_bSendAlarmOnSpawn : 1;                       // 0x0058 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FDisAlarmSpawnInfo                          m_SendAlarmOnSpawnInfo;                        // 0x005C (0x0018) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredStatCollectionInfo.DishonoredStatInfo
// 0x002C
struct FDishonoredStatInfo
{
	class FString                                      m_StatName;                                    // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_FilterTag;                                   // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_Platform;                                    // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              m_fBudgetMin;                                  // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              m_fBudgetMax;                                  // 0x0028 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredStatCollectionInfo.DishonoredCollectionInfo
// 0x0020
struct FDishonoredCollectionInfo
{
	class FString                                      m_CollectionName;                              // 0x0000 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      m_Platform;                                    // 0x000C (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              m_fBudgetMin;                                  // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              m_fBudgetMax;                                  // 0x001C (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredTask_Base.DisTaskTarget
// 0x0024
struct FDisTaskTarget
{
	class AActor*                                      m_pActor;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class FString                                      m_TargetNameLocFile;                           // 0x0004 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	class FString                                      m_TargetNameLocSection;                        // 0x0010 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            m_VanishPreset;                                // 0x001C (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bOptional : 1;                               // 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DishonoredTask_Base.DisTaskTargetsSaveData
// 0x0010
struct FDisTaskTargetsSaveData
{
	int32_t                                            m_TaskID;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<struct FDisTaskTarget>                m_Targets;                                     // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DishonoredViewportClient.LowFPSData
// 0x0018
struct FLowFPSData
{
	struct FDouble                                     m_dLastTime;                                   // 0x0000 (0x0008) [0x0000000000000000]               
	float                                              m_fAverageMS;                                  // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_fDisplayTimeLeft;                            // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fBiggestFrameTime;                           // 0x0010 (0x0004) [0x0000000000000000]               
	int32_t                                            m_FrameCount;                                  // 0x0014 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DishonoredWaterVolumeInfo.WaterEffectInfo
// 0x000C
struct FWaterEffectInfo
{
	class UAkEvent*                                    m_pSoundEvent;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             pParticleSystem;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              fVelocityThreshold;                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisInteractableInterface.CanInteractParams
// 0x000C
struct FCanInteractParams
{
	class ADishonoredPawn*                             m_pInteractor;                                 // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UPrimitiveComponent*                         m_pWithComponent;                              // 0x0004 (0x0004) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            m_DisTraceFlags;                               // 0x0008 (0x0004) [0x0000000000000002] (CPF_Const)   
};

// ScriptStruct DishonoredGame.DisInteractableInterface.EndInteractParams
// 0x0008
struct FEndInteractParams
{
	class ADishonoredPawn*                             m_pInteractor;                                 // 0x0000 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           m_bEndingBecauseTryingToAttack : 1;            // 0x0004 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
};

// ScriptStruct DishonoredGame.DisInterpTrackAllowPlayerLook.DisPlayerLookAngleKey
// 0x0008
struct FDisPlayerLookAngleKey
{
	float                                              m_fKeyStartTime;                               // 0x0000 (0x0004) [0x0000000000000000]               
	class UDisPlayerLookAngleKeyProperties*            m_pProperties;                                 // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisItemContext_AimAssistAttack.DisAimAssistDistReduce
// 0x0008
struct FDisAimAssistDistReduce
{
	float                                              m_fDistanceToReduce;                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAimAssistWindowScale;                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisItemContext_AimAssistAttack.DisAimAssistChoiceInfo
// 0x001C
struct FDisAimAssistChoiceInfo
{
	float                                              m_fMaxAimAssistAngle;                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxAimAssistDistance;                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAimAssistAngleWeight;                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAimAssistDistWeight;                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDisAimAssistDistReduce>       m_AimAssistDistReduceSettings;                 // 0x0010 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisItemContext_AimAssistAttack.DisAimAssistInfo
// 0x0018
struct FDisAimAssistInfo
{
	uint32_t                                           m_bUseAimAssist : 1;                           // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_fPriorityWeightScale;                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAimAssist_SafePercent_X;                    // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAimAssist_SafePercent_Y;                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAimAssist_MaxSize_Horiz;                    // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fAimAssist_MaxSize_Vert;                     // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_ItemContext.DisItemAction
// 0x0018 (0x002C - 0x0044)
struct FDisItemAction : FPawnAction
{
	class TArray<class FName>                          m_AnimStates_NonReady;                         // 0x002C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            m_Animation;                                   // 0x0038 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_Direction;                                   // 0x0039 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bCannotBeDodged : 1;                         // 0x003C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bUnblockable : 1;                            // 0x003C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           m_bKillingBlow : 1;                            // 0x003C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	class UDishonoredDamageType*                       m_pDamageType;                                 // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_ItemContext.ItemLinkedAction
// 0x008C
struct FItemLinkedAction
{
	struct FDisItemAction                              m_MainAction;                                  // 0x0000 (0x0044) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FDisItemAction                              m_SlaveAction;                                 // 0x0044 (0x0044) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           m_bDoNotRotateSlave : 1;                       // 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bSlaveMovesMaster : 1;                       // 0x0088 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_Fatality.DisFatalityMoveSet
// 0x0B6C
struct FDisFatalityMoveSet
{
	class TArray<struct FDisDirectionConstraint>       m_DirectionConstraints;                        // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FDisDirectionConstraint>       m_DirectionConstraints_Special;                // 0x000C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              m_fBeheadRandomChance;                         // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fSlomoFinisherRandomChance;                  // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMinTimeBetweenRandomSlomoFinisher;          // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fChanceSlomoFinisherWillBeNormalSpeed;       // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fGenericFatalityChance;                      // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_SyncInteractionRangeTest_UseHitRegions : 1;  // 0x002C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            m_SyncInteractionRangeTest_SourceRegion;       // 0x0030 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_SyncInteractionRangeTest_TargetRegion;       // 0x0031 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fSyncInteractionRangeTest_MaxHeightDifference;// 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FItemLinkedAction                           m_Front;                                       // 0x0038 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Left;                                        // 0x00C4 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Right;                                       // 0x0150 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Back;                                        // 0x01DC (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Knockdown;                                   // 0x0268 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_HeadChop;                                    // 0x02F4 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Front_Fast;                                  // 0x0380 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Left_Fast;                                   // 0x040C (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Right_Fast;                                  // 0x0498 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Back_Fast;                                   // 0x0524 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Knockdown_Fast;                              // 0x05B0 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Back_Special;                                // 0x063C (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Front_Special[8];                            // 0x06C8 (0x0460) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FDisItemAction                              m_Generic;                                     // 0x0B28 (0x0044) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisItemContext_ProjectileAttack.DisCachedAimAssistPosResult
// 0x002C
struct FDisCachedAimAssistPosResult
{
	int32_t                                            m_TickTag;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bFound : 1;                                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_AimPos;                                      // 0x0008 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_AimDir;                                      // 0x0014 (0x000C) [0x0000000000000000]               
	struct FVector2D                                   m_ProjectedAimPos;                             // 0x0020 (0x0008) [0x0000000000000000]               
	uint32_t                                           m_bWillTrack : 1;                              // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisLootPayload.DisLootInfo
// 0x0008
struct FDisLootInfo
{
	class UDisTweaksBase*                              m_pWhatTweakToSpawn;                           // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_HowManyToSpawn;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_ComponentObservable.DisComponentObservableConfig
// 0x0006
struct FDisComponentObservableConfig
{
	float                                              m_fLOSCheckPeriod;                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_eVisiblePointMethod;                         // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_eCategory;                                   // 0x0005 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x2];                       // 0x0006 (0x0002) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisVisSettingsUserInterface.DisVisSettingsUserCache
// 0x0008
struct FDisVisSettingsUserCache
{
	class ADisStealthVolume*                           m_pCurrentStealthVolume;                       // 0x0000 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bNeedFindStealthVolume : 1;                  // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisNavMeshGoal_WithinDistanceEnvelopeFrom.PolyPointer
// 0x0004
struct FPolyPointer
{
	struct FPointer                                    Dummy;                                         // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
};

// ScriptStruct DishonoredGame.DisNavMeshGoal_WolfhoundBarkPosition.BarkPositionNavGoal
// 0x0014
struct FBarkPositionNavGoal
{
	struct FPointer                                    m_pGoalPoly;                                   // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FVector                                     m_GoalLocation;                                // 0x0004 (0x000C) [0x0000000000000000]               
	int32_t                                            m_SortValue;                                   // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisNPCDistractionComponent.DistractionSoireeActors
// 0x000C
struct FDistractionSoireeActors
{
	class FName                                        m_SoireeGroupName;                             // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	class AActor*                                      m_GroupActor;                                  // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct DishonoredGame.DisNPCDistractionComponent.DistractionSoireeLoops
// 0x0010
struct FDistractionSoireeLoops
{
	class FName                                        m_SoireeLoopName;                              // 0x0000 (0x0008) [0x0000000000020001] (CPF_Edit | CPF_EditConst)
	int32_t                                            m_iLoopMin;                                    // 0x0008 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            m_iLoopMax;                                    // 0x000C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
};

// ScriptStruct DishonoredGame.DisNPCDistractionComponent.DistractionChances
// 0x0008
struct FDistractionChances
{
	float                                              m_fChanceToLook;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fChanceToAnimate;                            // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisRatSwarmSpawner.DisRatAttachmentSaveInfo
// 0x0028
struct FDisRatAttachmentSaveInfo
{
	class AActor*                                      m_pActor;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class FName                                        m_BoneName;                                    // 0x0004 (0x0008) [0x0000000000000000]               
	uint32_t                                           m_bHardAttach : 1;                             // 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     m_RelativeLocation;                            // 0x0010 (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_RelativeRotation;                            // 0x001C (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisRatSwarmSpawner.DisRatSaveInfo
// 0x003C
struct FDisRatSaveInfo
{
	struct FVector                                     m_Location;                                    // 0x0000 (0x000C) [0x0000000000000000]               
	struct FRotator                                    m_Rotation;                                    // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     m_DrawScale;                                   // 0x0018 (0x000C) [0x0000000000000000]               
	int32_t                                            m_Health;                                      // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              m_fNotVisibleLifeSpan;                         // 0x0028 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bWhite : 1;                                  // 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	class TArray<struct FDisRatAttachmentSaveInfo>     m_Attachments;                                 // 0x0030 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisRatSwarm.DisRatSwarmCustomBehavior
// 0x0011
struct FDisRatSwarmCustomBehavior
{
	class ADisRatSwarm*                                m_pOwner;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class AActor*                                      m_pTarget;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_ForcedAction;                                // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bForcedActionOnly : 1;                       // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bEndBehaviorOnAnyAction : 1;                 // 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bNeverEndBehavior : 1;                       // 0x000C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bNonAggressiveBehavior : 1;                  // 0x000C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           m_bDisableAttacking : 1;                       // 0x000C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           m_bDisableEating : 1;                          // 0x000C (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint8_t                                            m_BehaviorEnd;                                 // 0x0010 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0011 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisRatSwarm.DisRatTargetSightInfo
// 0x000C
struct FDisRatTargetSightInfo
{
	struct FPointer                                    m_pDetectedTarget;                             // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	float                                              m_fLastCheckTime;                              // 0x0004 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bSighted : 1;                                // 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisRatSwarm.DisUnreachableRatTargetInfo
// 0x0018
struct FDisUnreachableRatTargetInfo
{
	struct FPointer                                    m_pTarget;                                     // 0x0000 (0x0004) [0x0000000000001000] (CPF_Native)  
	uint32_t                                           m_bRatLightInvolved : 1;                       // 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fLastCheckTime;                              // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_LastCheckLocation;                           // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisRatSwarm.DisRatGroup
// 0x0048
struct FDisRatGroup
{
	class ADisRatSwarm*                                m_pOwner;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<class ADisGameCrowdAgentSkeletalRat*> m_Rats;                                        // 0x0004 (0x000C) [0x0000000000500000] (CPF_NeedCtorLink)
	uint8_t                                            m_State;                                       // 0x0010 (0x0001) [0x0000000000000000]               
	class ADynamicGameCrowdDestination*                m_pDestination;                                // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            m_AttractorID;                                 // 0x0018 (0x0004) [0x0000000000000000]               
	class ADynamicGameCrowdDestination*                m_pFallbackDestination;                        // 0x001C (0x0004) [0x0000000000000000]               
	struct FPointer                                    m_pTarget;                                     // 0x0020 (0x0004) [0x0000000000001000] (CPF_Native)  
	int32_t                                            m_RequiredRatCount;                            // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              m_fGroupHealth;                                // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              m_fAttackDuration;                             // 0x002C (0x0004) [0x0000000000000000]               
	float                                              m_fEatStageDuration;                           // 0x0030 (0x0004) [0x0000000000000000]               
	float                                              m_fDamageTimeIntervalCounter;                  // 0x0034 (0x0004) [0x0000000000000000]               
	float                                              m_fCannotReachDuration;                        // 0x0038 (0x0004) [0x0000000000000000]               
	float                                              m_fCannotReachRetryTimer;                      // 0x003C (0x0004) [0x0000000000000000]               
	float                                              m_fCannotReachRatio;                           // 0x0040 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bCannotReachInvolvesRatLight : 1;            // 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct DishonoredGame.DisTweaks_RiverKrust.RiverKrustBodyPartSpec
// 0x0010
struct FRiverKrustBodyPartSpec
{
	class UDisTweaks_RiverKrustBodyPart*               m_pBodyPartTweak;                              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_AttachSocketName;                            // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bDetachOnParentRagdoll : 1;                  // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_RiverKrust.RiverKrustAkEvent
// 0x001C
struct FRiverKrustAkEvent
{
	class UAkEvent*                                    m_pAkEvent;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_BoneName;                                    // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FDisRangedFloat                             m_VolumeMultiplierRange;                       // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FDisRangedFloat                             m_PitchMultiplierRange;                        // 0x0014 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_RiverKrust.RiverKrustDamageFilter
// 0x0008
struct FRiverKrustDamageFilter
{
	class UDishonoredDamageType*                       m_DamageType;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDamageMultiplier;                           // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_RiverKrust.RiverKrustAnimSequenceSpec
// 0x0024
struct FRiverKrustAnimSequenceSpec
{
	class FName                                        m_SequenceName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FDisRangedFloat                             m_PlaybackRateRange;                           // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBlendInTimeSeconds;                         // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBlendOutTimeSeconds;                        // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDisRangedFloat                             m_StartTimeSecondsRange;                       // 0x0018 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bIsLooping : 1;                              // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bShouldRestart : 1;                          // 0x0020 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisRiverKrust.RiverKrustSeenActorInfo
// 0x0019
struct FRiverKrustSeenActorInfo
{
	class AActor*                                      m_pActor;                                      // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fStartedSeeingTime;                          // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fStoppedSeeingTime;                          // 0x0008 (0x0004) [0x0000000000000000]               
	struct FVector                                     m_LastSeenLocation;                            // 0x000C (0x000C) [0x0000000000000000]               
	uint8_t                                            m_RelationshipToActor;                         // 0x0018 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0019 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.StatePlayerMasterChoice_Base.DisPlayerChoiceInfo
// 0x0010
struct FDisPlayerChoiceInfo
{
	class FString                                      m_ChoiceText;                                  // 0x0000 (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint32_t                                           m_bDisablePlayerInputUntilMapChange : 1;       // 0x000C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerStats.TweakNamePair
// 0x0010
struct FTweakNamePair
{
	class FName                                        m_TweaksName;                                  // 0x0000 (0x0008) [0x0000000000000000]               
	class FName                                        m_TweaksNameCooked;                            // 0x0008 (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerStats.PlayerStatInfo
// 0x0050
struct FPlayerStatInfo
{
	uint8_t                                            m_Stat;                                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FString                                      m_Text;                                        // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UDisTweaksBase*                              m_pTweaks;                                     // 0x0010 (0x0004) [0x0000000800000001] (CPF_Edit | CPF_EditorOnly)
	class UDisAbstractItem*                            m_pAbstractItem;                               // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UDisTweaksBase*>                m_ExcludedTweaks;                              // 0x0018 (0x000C) [0x0000000800400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)
	class TArray<class UDamageType*>                   m_DamageTypes;                                 // 0x0024 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FTweakNamePair                              m_TweaksNamePair;                              // 0x0030 (0x0010) [0x0000000000000000]               
	class TArray<struct FTweakNamePair>                m_ExcludedTweaksNamePairs;                     // 0x0040 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class UDamageType*                                 m_pDamageType;                                 // 0x004C (0x0004) [0x0000000020000000]  CPF_Deprecated)
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerStats.AchievementStatEval
// 0x0014
struct FAchievementStatEval
{
	int32_t                                            m_StatIndex;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_eValueInequality;                            // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fThreshold;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fStreakValue;                                // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fStreakTime;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerStats.AchievementInfo
// 0x0010
struct FAchievementInfo
{
	uint32_t                                           m_bEvaluatedAtKismet : 1;                      // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class TArray<struct FAchievementStatEval>          m_StatEvals;                                   // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerStats.NPCTypeInfo
// 0x0030
struct FNPCTypeInfo
{
	class TArray<class UDisTweaksBase*>                m_Tweaks;                                      // 0x0000 (0x000C) [0x0000000800400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)
	class TArray<class UDisTweaksBase*>                m_ExcludedTweaks;                              // 0x000C (0x000C) [0x0000000800400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)
	class TArray<struct FTweakNamePair>                m_TweaksNamePairs;                             // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FTweakNamePair>                m_ExcludedTweaksNamePairs;                     // 0x0024 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisSeqAct_RestoreInventoryFromBackup.DisRestoreOldEquipForPawn
// 0x0010
struct FDisRestoreOldEquipForPawn
{
	class ADishonoredPawn*                             m_pPawn;                                       // 0x0000 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UDishonoredInventoryItem*                    m_OldEquipment[3];                             // 0x0004 (0x000C) [0x0000000000002000] (CPF_Transient)
};

// ScriptStruct DishonoredGame.DisSeqCond_InStoryGroup.DisKismetStoryGroup
// 0x0008
struct FDisKismetStoryGroup
{
	uint32_t                                           m_bExactMatch : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UDisTweaks_StoryGroup*                       m_pStoryGroup;                                 // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisSkelControl_FootPlacement.GroundTestResults
// 0x002C
struct FGroundTestResults
{
	struct FVector                                     m_TestLocation;                                // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_LocationOnGround;                            // 0x000C (0x000C) [0x0000000000000000]               
	struct FVector                                     m_GroundNormal;                                // 0x0018 (0x000C) [0x0000000000000000]               
	uint8_t                                            m_NavMeshState;                                // 0x0024 (0x0001) [0x0000000000000000]               
	uint32_t                                           m_bDisableFootPlacement : 1;                   // 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bValid : 1;                                  // 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bUsed : 1;                                   // 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct DishonoredGame.DisSkelControl_FootPlacement.FootLockProperties
// 0x0008
struct FFootLockProperties
{
	uint32_t                                           m_bIsFootLocked : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fBlendPct;                                   // 0x0004 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisTweaks_Movable.DisMovableParams
// 0x0008
struct FDisMovableParams
{
	uint8_t                                            m_WeightClass;                                 // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_Damage;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_AIAttackPattern.DisItemContextOverride
// 0x0010
struct FDisItemContextOverride
{
	class UDisItemContext*                             m_pContextToOverride;                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bContextEnabled : 1;                         // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FDisRangedFloat                             m_ContextCooldown;                             // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_AISubProcess_ManageAttacks.DisManageAttacksUsageInfo
// 0x001C
struct FDisManageAttacksUsageInfo
{
	float                                              m_fUsageWeight;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_AttackOrigin;                                // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_AttackOriginFocus;                           // 0x0005 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   m_GeoCheckDimensions;                          // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   m_AllyCheckDimensions;                         // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxGeoCheckDistance;                        // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_AIBehavior_Panic.DisPanicRule
// 0x0004
struct FDisPanicRule
{
	uint32_t                                           m_bIsActive : 1;                               // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_AIBehavior_Panic.DisPanicRule_LastSurvivor
// 0x0010 (0x0004 - 0x0014)
struct FDisPanicRule_LastSurvivor : FDisPanicRule
{
	int32_t                                            m_iSurvivorCount;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_iKillCount;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fKillCountResetTimer;                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFearDistanceFromKiller;                     // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_AIBehavior_Panic.DisPanicRule_HearScaryNoise
// 0x000C (0x0004 - 0x0010)
struct FDisPanicRule_HearScaryNoise : FDisPanicRule
{
	class TArray<uint8_t>                              m_ScaryNoises;                                 // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_AIBehavior_Panic.DisPanicInhibitor_FightingRadius
// 0x0004 (0x0004 - 0x0008)
struct FDisPanicInhibitor_FightingRadius : FDisPanicRule
{
	float                                              m_fRadius;                                     // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_AIBehavior_Panic.DisPanicInhibitor_PanicCount
// 0x0004 (0x0004 - 0x0008)
struct FDisPanicInhibitor_PanicCount : FDisPanicRule
{
	int32_t                                            m_iPanicCountLimit;                            // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_AIBehavior_Search.DisSearchFromReasonTweaks
// 0x0004
struct FDisSearchFromReasonTweaks
{
	uint32_t                                           m_bShouldRun : 1;                              // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_AIBrain.BehaviorTweak
// 0x0010
struct FBehaviorTweak
{
	class UDisTweaks_AIBehavior*                       m_Difficulty[4];                               // 0x0000 (0x0010) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_AIBrainProcess_Attention.DisAttnChangeCondition
// 0x0012
struct FDisAttnChangeCondition
{
	uint8_t                                            m_ChangeReason;                                // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<uint8_t>                              m_OptionalNoiseContexts;                       // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            m_DummyByteBecauseUnrealDemandsAtLeastFourBytesInAStruct0;// 0x0010 (0x0001) [0x0000000000000000]               
	uint8_t                                            m_DummyByteBecauseUnrealDemandsAtLeastFourBytesInAStruct1;// 0x0011 (0x0001) [0x0000000000000000]               
	uint8_t                                            MinStructAlignment[0x2];                       // 0x0012 (0x0002) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisTweaks_AIBrainProcess_Attention.DisAttentionReactionContext
// 0x0014
struct FDisAttentionReactionContext
{
	uint8_t                                            m_AttentionLevel;                              // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_SuspicionLevel;                              // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_Relationship;                                // 0x0002 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDisAttnChangeCondition>       m_ChangeConditions;                            // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              m_fChangeRate;                                 // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_AIBrainProcess_Attention.DisAttentionReactionAction
// 0x000C
struct FDisAttentionReactionAction
{
	class TArray<uint8_t>                              m_Reactions;                                   // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_AIBrainProcess_Attention.DisAttentionReaction
// 0x0024
struct FDisAttentionReaction
{
	uint32_t                                           m_bAllowRepeatReactions : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FDisAttentionReactionContext                m_Context;                                     // 0x0004 (0x0014) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FDisAttentionReactionAction                 m_EnterAction;                                 // 0x0018 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_AIBrain_Reaction.TweakAIResponse
// 0x0028
struct FTweakAIResponse
{
	uint32_t                                           m_bEnabled : 1;                                // 0x0000 (0x0004) [0x0000400000000001] [0x00000001] (CPF_Edit)
	int32_t                                            m_iNumWarningsBeforeReaction;                  // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
	uint8_t                                            m_WarningDialogHook;                           // 0x0008 (0x0001) [0x0000400000000001] (CPF_Edit)    
	uint32_t                                           m_bWarningsExpire : 1;                         // 0x000C (0x0004) [0x0000400000000001] [0x00000001] (CPF_Edit)
	float                                              m_fWarnDuration;                               // 0x0010 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fResponseThreshold;                          // 0x0014 (0x0004) [0x0000400000000001] (CPF_Edit)    
	uint8_t                                            m_ReactionDialogHook;                          // 0x0018 (0x0001) [0x0000400000000001] (CPF_Edit)    
	uint8_t                                            m_eCategory;                                   // 0x0019 (0x0001) [0x0000400000000001] (CPF_Edit)    
	class FString                                      m_sCoSDescription;                             // 0x001C (0x000C) [0x0000000800420001] (CPF_Edit | CPF_EditConst | CPF_NeedCtorLink | CPF_EditorOnly)
};

// ScriptStruct DishonoredGame.DisTweaks_AIBrain_Steering.DisCombatSteeringSettings
// 0x0014
struct FDisCombatSteeringSettings
{
	uint32_t                                           m_bTickAllowed : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_fDesiredFlankAngle;                          // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDesiredFrontAngle;                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fInfluenceSmoothSpeed;                       // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fTwistSafetyDistance;                        // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_AIBrain_Steering.DisEnemyPushSteeringSettings
// 0x000C
struct FDisEnemyPushSteeringSettings
{
	uint32_t                                           m_bTickAllowed : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_fFallOffDist;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fRangeSmoothSpeed;                           // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_AIBrain_Steering.DisWallsSteeringSettings
// 0x0010
struct FDisWallsSteeringSettings
{
	uint32_t                                           m_bTickAllowed : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_fRangeDist;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fFallOffDist;                                // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fInfluenceSmoothSpeed;                       // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_AIBrain_Steering.DisDangerSteeringSettings
// 0x0008
struct FDisDangerSteeringSettings
{
	uint32_t                                           m_bTickAllowed : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              m_fInfluenceSmoothSpeed;                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_SkeletalBreakable.DisBreakableMeshInfo
// 0x0008
struct FDisBreakableMeshInfo
{
	class USkeletalMesh*                               m_pMesh;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UPhysicsAsset*                               m_pPhysicsAsset;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_UsableObject.UsableObjectStageHoldToUseData
// 0x004C
struct FUsableObjectStageHoldToUseData
{
	uint32_t                                           m_bAutoRewind : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bNeverCompleteStage : 1;                     // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	class FName                                        m_RemoteActorAnimName;                         // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fTimeToFullyUse;                             // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fTimeToFullyRewind;                          // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pForwardStartLoopEvent;                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pForwardStopLoopEvent;                       // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pForwardResumeLoopEvent;                     // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pForwardCompleteEvent;                       // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pReverseStartLoopEvent;                      // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pReverseStopLoopEvent;                       // 0x0028 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pReverseCompleteEvent;                       // 0x002C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pRemoteForwardStartLoopEvent;                // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pRemoteForwardStopLoopEvent;                 // 0x0034 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pRemoteForwardResumeLoopEvent;               // 0x0038 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pRemoteForwardCompleteEvent;                 // 0x003C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pRemoteReverseStartLoopEvent;                // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pRemoteReverseStopLoopEvent;                 // 0x0044 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pRemoteReverseCompleteEvent;                 // 0x0048 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_UsableObject.UsableObjectStage
// 0x0078
struct FUsableObjectStage
{
	class FName                                        m_Name;                                        // 0x0000 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FName                                        m_TransitionAnimName;                          // 0x0008 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           m_bActivatesCrouching : 1;                     // 0x0010 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	uint32_t                                           m_bDeactivateUsableWhenDone : 1;               // 0x0010 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	uint32_t                                           m_bHoldToUse : 1;                              // 0x0010 (0x0004) [0x0000000000000003] [0x00000004] (CPF_Edit | CPF_Const)
	class FName                                        m_TransitionByNPCAnimName;                     // 0x0014 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class FString                                      m_InteractTextOverride;                        // 0x001C (0x000C) [0x0002400000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint8_t                                            m_eHideoutActivationStage;                     // 0x0028 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FUsableObjectStageHoldToUseData             m_HoldToUseData;                               // 0x002C (0x004C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_UsableObject.DisUnauthorizedEffect
// 0x0018
struct FDisUnauthorizedEffect
{
	class UAkEvent*                                    m_Sound;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_pParticleSystem;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     m_ParticleSystemOffset;                        // 0x0008 (0x000C) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_Damage;                                      // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_Armor.DisPawnArmorDamageType
// 0x0008
struct FDisPawnArmorDamageType
{
	class UDishonoredDamageType*                       m_pDamageType;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bExactMatch : 1;                             // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bDoNotApplyToWeakHitReact : 1;               // 0x0004 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_Armor.DisPawnArmorKnockoffDamage
// 0x000C
struct FDisPawnArmorKnockoffDamage
{
	struct FDisPawnArmorDamageType                     m_DamageInfo;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bVerticalKnockoffOnly : 1;                   // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bDamagesAnyRegion : 1;                       // 0x0008 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_Arrow.DisArrowMeshInfo
// 0x0010
struct FDisArrowMeshInfo
{
	class USkeletalMesh*                               m_pArrowMesh;                                  // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USkeletalMesh*                               m_pArrowMesh_HighRes;                          // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UPhysicsAsset*                               m_pArrowPhysicsAsset;                          // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          m_pArrowMesh_HighRes_StealthMaterial;          // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_SoundSource.DisAISoundSource
// 0x0008
struct FDisAISoundSource
{
	uint8_t                                            m_AINoiseLoudness;                             // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_AINoiseContext;                              // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fPeriodicity;                                // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_Assassinate.DisAssassAware
// 0x0004
struct FDisAssassAware
{
	uint32_t                                           m_bAssassinate : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_Assassinate.DisAssassinateMoveSet
// 0x0BDC
struct FDisAssassinateMoveSet
{
	class TArray<struct FDisDirectionConstraint>       m_DirectionConstraints;                        // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FDisDirectionConstraint>       m_DirectionConstraints_Special;                // 0x000C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FDisItemAction                              m_Generic;                                     // 0x0018 (0x0044) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Front;                                       // 0x005C (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Back;                                        // 0x00E8 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Left;                                        // 0x0174 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Right;                                       // 0x0200 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Front_Fast;                                  // 0x028C (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Back_Fast;                                   // 0x0318 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Left_Fast;                                   // 0x03A4 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Right_Fast;                                  // 0x0430 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Front_BendTimeFrozen_Aware;                  // 0x04BC (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Back_BendTimeFrozen_Aware;                   // 0x0548 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Left_BendTimeFrozen_Aware;                   // 0x05D4 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Right_BendTimeFrozen_Aware;                  // 0x0660 (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Back_Special;                                // 0x06EC (0x008C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Front_Special[8];                            // 0x0778 (0x0460) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           m_bForceGenericActionWhenFalling : 1;          // 0x0BD8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bDisableAutoCorpseCarry : 1;                 // 0x0BD8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_Attachments.DisTweaks_Attachments_Attachment
// 0x0010
struct FDisTweaks_Attachments_Attachment
{
	class FName                                        m_Socket;                                      // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bSoftAttach : 1;                             // 0x0008 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UDisTweaksBase*                              m_pAttachmentTweaks;                           // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_ComponentHitReactionThrow.DisThrowForce
// 0x0014
struct FDisThrowForce
{
	int32_t                                            m_FullragdollChancePct;                        // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fForce;                                      // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fExtraUpForce;                               // 0x0008 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fForceRagdoll;                               // 0x000C (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fExtraUpForceRagdoll;                        // 0x0010 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_ComponentHitReactionThrow.DisComponentHitReactionThrowConfig
// 0x009C
struct FDisComponentHitReactionThrowConfig
{
	uint32_t                                           m_bShouldNotRagdollWhenAlive : 1;              // 0x0000 (0x0004) [0x0000400000000001] [0x00000001] (CPF_Edit)
	float                                              m_fStrongHitReactThreshold;                    // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fAnimRagdollThreshold;                       // 0x0008 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fFullRagdollThreshold;                       // 0x000C (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fRagdollMoveEndThreshold;                    // 0x0010 (0x0004) [0x0000400000000001] (CPF_Edit)    
	uint32_t                                           m_bForceFullRagdollOnLedgeDetection : 1;       // 0x0014 (0x0004) [0x0000400000000001] [0x00000001] (CPF_Edit)
	float                                              m_fEffectiveMassForThrowing;                   // 0x0018 (0x0004) [0x0000400000000001] (CPF_Edit)    
	uint32_t                                           m_bThrowFromLedges : 1;                        // 0x001C (0x0004) [0x0000400000000001] [0x00000001] (CPF_Edit)
	float                                              m_fLedgeDetectionBack;                         // 0x0020 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fLedgeDetectionDown;                         // 0x0024 (0x0004) [0x0000400000000001] (CPF_Edit)    
	uint32_t                                           m_bDontThrowAtMinDistance : 1;                 // 0x0028 (0x0004) [0x0000400000000001] [0x00000001] (CPF_Edit)
	float                                              m_fMinLedgeDistance;                           // 0x002C (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fRailMinHeight;                              // 0x0030 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fRailMaxHeight;                              // 0x0034 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fRailMaxDepth;                               // 0x0038 (0x0004) [0x0000400000000001] (CPF_Edit)    
	struct FDisThrowForce                              m_LedgeForce;                                  // 0x003C (0x0014) [0x0000000000000001] (CPF_Edit)    
	struct FDisThrowForce                              m_RailLedgeForce;                              // 0x0050 (0x0014) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bThrowIntoBreakables : 1;                    // 0x0064 (0x0004) [0x0000400000000001] [0x00000001] (CPF_Edit)
	float                                              m_fAttractDistance;                            // 0x0068 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fAutoBreakDistance;                          // 0x006C (0x0004) [0x0000400000000001] (CPF_Edit)    
	struct FDisThrowForce                              m_BreakableForce;                              // 0x0070 (0x0014) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBreakableZClamp;                            // 0x0084 (0x0004) [0x0000400000000001] (CPF_Edit)    
	struct FDisThrowForce                              m_WindblastedRagdollExtraForce;                // 0x0088 (0x0014) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_DropAssassinate.DisDropAssassinateMoveSet
// 0x023C
struct FDisDropAssassinateMoveSet
{
	class TArray<struct FDisDirectionConstraint>       m_DirectionConstraints;                        // 0x0000 (0x000C) [0x0000400000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Drop_Front;                                  // 0x000C (0x008C) [0x0000400000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Drop_Back;                                   // 0x0098 (0x008C) [0x0000400000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Drop_Left;                                   // 0x0124 (0x008C) [0x0000400000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FItemLinkedAction                           m_Drop_Right;                                  // 0x01B0 (0x008C) [0x0000400000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_ProjectileAttack.DisAimAssistOther
// 0x0024
struct FDisAimAssistOther
{
	class UDisTweaksBase*                              m_pTweaksType;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      m_pActorType;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDisAimAssistInfo                           m_AimAssistInfo;                               // 0x0008 (0x0018) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bUseHomingProjectile : 1;                    // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_ProjectileAttack.DisAimAssistPawn
// 0x00AC
struct FDisAimAssistPawn
{
	struct FDisAimAssistInfo                           m_HitRegions[7];                               // 0x0000 (0x00A8) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bDisableAssistForNeutralPawns : 1;           // 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bDisableAssistForFriendlyPawns : 1;          // 0x00A8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_ProjectileAttack.DisAimAssistGroup
// 0x00C0
struct FDisAimAssistGroup
{
	uint32_t                                           m_bUseGroupMaxDistance : 1;                    // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fMaxAimAssistDistance;                       // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDisAimAssistPawn                           m_Pawns;                                       // 0x0008 (0x00AC) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDisAimAssistOther>            m_ObjectsOfInterest;                           // 0x00B4 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_ProjectileAttack.DisAimAssistPlatform
// 0x0180
struct FDisAimAssistPlatform
{
	struct FDisAimAssistGroup                          m_NormalAssist;                                // 0x0000 (0x00C0) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FDisAimAssistGroup                          m_ZoomedAssist;                                // 0x00C0 (0x00C0) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_InventoryItem_PawnSpecific.DisItemContextInfo
// 0x0014
struct FDisItemContextInfo
{
	class UDisTweaks_ItemContext*                      m_pItemContext;                                // 0x0000 (0x0004) [0x0000000005400008] (CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
	class FName                                        m_ContextName;                                 // 0x0004 (0x0008) [0x0000000000000000]               
	class FName                                        m_RefOfContextWithName;                        // 0x000C (0x0008) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisTweaks_InventoryItem_PlayerSpecific.DisItemArmPitchDif
// 0x0008
struct FDisItemArmPitchDif
{
	float                                              m_fArmPitch;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fArmPitch_Difference;                        // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_InventoryItem.DisMeleeNonSocketData
// 0x0018
struct FDisMeleeNonSocketData
{
	float                                              m_fNonSocketRange;                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fNonSocketWidth;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fNonSocketHeight;                            // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     m_NonSocketOffset;                             // 0x000C (0x000C) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_InventoryItem.DisMeleeExtentTweak
// 0x0040
struct FDisMeleeExtentTweak
{
	class FName                                        m_MeleeExtentName;                             // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_MeleeExtent_Socket_BL;                       // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_MeleeExtent_Socket_UR;                       // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fScaleAgainstPlayer;                         // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fScaleAsPlayer;                              // 0x001C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bExtentOnPawnMesh : 1;                       // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bIgnoreSockets : 1;                          // 0x0020 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	struct FDisMeleeNonSocketData                      m_NonSocketData;                               // 0x0024 (0x0018) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystemComponent*                    m_ParticleSystemComponent;                     // 0x003C (0x0004) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DisTweaks_Heart.Heartbeat
// 0x0008
struct FHeartbeat
{
	class UAkEvent*                                    m_pSoundEvent;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UForceFeedbackWaveform*                      m_pRumbleWaveform;                             // 0x0004 (0x0004) [0x0000000004000001] (CPF_Edit | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DisTweaks_Minigame.MinigameLoopSettings
// 0x0010
struct FMinigameLoopSettings
{
	int32_t                                            m_NumAttackButtonPressToWin;                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_DamagePerTick;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDamageTickTime;                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDishonoredDamageType*                       m_DamageType;                                  // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_MissionStats.DisMissionSummaryItem
// 0x0024
struct FDisMissionSummaryItem
{
	class FString                                      m_Description;                                 // 0x0000 (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UDisStoryFlagSet*                            m_pStoryFlagSet;                               // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       m_StoryFlag;                                   // 0x0010 (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bStoryFlagValue : 1;                         // 0x0020 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_MissionStats.DisMissionStat
// 0x001C
struct FDisMissionStat
{
	class FString                                      m_Description;                                 // 0x0000 (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint8_t                                            m_Stat;                                        // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bAddOtherStat : 1;                           // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            m_AdditionalStat;                              // 0x0014 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bCheckbox : 1;                               // 0x0018 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bCheckIfNonZero : 1;                         // 0x0018 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_StaticBreakable.DishonoredBreakableChunk
// 0x0004
struct FDishonoredBreakableChunk
{
	class UStaticMesh*                                 m_pStaticMesh;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_StaticBreakable.DishonoredBreakableStep
// 0x0050
struct FDishonoredBreakableStep
{
	int32_t                                            m_HealthThreshold;                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fStepTimer;                                  // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 m_pStaticMesh;                                 // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UMaterialInterface*>            m_aMaterials;                                  // 0x000C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UAkEvent*                                    m_pSoundEvent;                                 // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_AINoiseLoudness;                             // 0x001C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_AINoiseContext;                              // 0x001D (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_pParticleSystem;                             // 0x0020 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     m_ParticleSystemOffset;                        // 0x0024 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class UDisTweaks_Explosion*                        m_pExplosion;                                  // 0x0030 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     m_ExplosionOffset;                             // 0x0034 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDishonoredBreakableChunk>     m_Chunks;                                      // 0x0040 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           m_bUnfix : 1;                                  // 0x004C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bAISendImpendingExplosionStim : 1;           // 0x004C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           m_bAttachParticleSystem : 1;                   // 0x004C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           m_ParticleSystemIgnoresParentRotation : 1;     // 0x004C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           m_ExplosionIgnoresParentRotation : 1;          // 0x004C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           m_bBroadcastGameEvent : 1;                     // 0x004C (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           m_bKeepPhysics : 1;                            // 0x004C (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_WeaponRanged.DisRangedAmmoTypeInfo
// 0x0008
struct FDisRangedAmmoTypeInfo
{
	uint8_t                                            m_AmmoType;                                    // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class UDisTweaksBase*                              m_pProjectileType;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_Pawn.DisInventorySlotTweak
// 0x0005
struct FDisInventorySlotTweak
{
	class UDishonoredInventoryItem*                    m_pRequiredClass;                              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_RequiredUsage;                               // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisTweaks_Pawn.DisAmmoTweak
// 0x0008
struct FDisAmmoTweak
{
	uint8_t                                            m_AmmoType;                                    // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_AmmoCount;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_NPCPawn.DisPawnRandomArmor
// 0x0008
struct FDisPawnRandomArmor
{
	float                                              m_fPercentChance;                              // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDisTweaks_Armor*                            m_pArmor;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_NPCPawn.DisShadowKillFX
// 0x000C
struct FDisShadowKillFX
{
	class FName                                        m_BoneName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_pPS;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_NPCPawn.DisElectrocutedFX
// 0x000C
struct FDisElectrocutedFX
{
	class FName                                        m_BoneName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_pPS;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_NPCPawn.DisChokeAware
// 0x0004
struct FDisChokeAware
{
	uint32_t                                           m_bChoke : 1;                                  // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_NPCPlotSettings.DisGameOverSettings
// 0x0014
struct FDisGameOverSettings
{
	uint32_t                                           m_bGameOver : 1;                               // 0x0000 (0x0004) [0x0000400000000001] [0x00000001] (CPF_Edit)
	float                                              m_fDelay;                                      // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
	class FString                                      m_ScreenMessage;                               // 0x0008 (0x000C) [0x0002400000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_NPCPlotSettings.DisNPCPlotSettings
// 0x004C
struct FDisNPCPlotSettings
{
	uint32_t                                           m_bDoNotCleanUpCorpse : 1;                     // 0x0000 (0x0004) [0x0000400000000001] [0x00000001] (CPF_Edit)
	struct FDisGameOverSettings                        m_GameOverWhenHostileToPlayer;                 // 0x0004 (0x0014) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FDisGameOverSettings                        m_GameOverWhenDead;                            // 0x0018 (0x0014) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FDisGameOverSettings                        m_GameOverWhenPossessedByPlayer;               // 0x002C (0x0014) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UDishonoredDamageType*>         m_DamageTypesThatCauseGameOver;                // 0x0040 (0x000C) [0x0000400000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_NPCTeleportSpell.DisTeleportSpellFX
// 0x000C
struct FDisTeleportSpellFX
{
	class FName                                        m_BoneName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_pParticles;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_PawnAttention.DisAttentionIncrease
// 0x0005
struct FDisAttentionIncrease
{
	float                                              m_fByAmount;                                   // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_ToThreshold;                                 // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerLoadout.DisLoadoutPower
// 0x000C
struct FDisLoadoutPower
{
	class FName                                        m_PowerToGive;                                 // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_PowerLevel;                                  // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_StatePlayerCarryCorpseIdle.DisCarryCorpseAnimTreeSyncInfo
// 0x0009
struct FDisCarryCorpseAnimTreeSyncInfo
{
	class FName                                        m_Name;                                        // 0x0000 (0x0008) [0x0000400000000001] (CPF_Edit)    
	uint8_t                                            m_SyncType;                                    // 0x0008 (0x0001) [0x0000400000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0009 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisTweaks_StatePlayerCarryCorpseIdle.DropCheckTweaks
// 0x001C
struct FDropCheckTweaks
{
	float                                              m_fSideCheckDistance;                          // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fLowDropDepth;                               // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fLowDropMinHeight;                           // 0x0008 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fLowDropMaxHeight;                           // 0x000C (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fHighDropDepth;                              // 0x0010 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fHighDropMinHeight;                          // 0x0014 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fHighDropMaxHeight;                          // 0x0018 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_WhaleBoneCharmList.DisWhaleBoneCharmLevel
// 0x001C
struct FDisWhaleBoneCharmLevel
{
	class FString                                      m_Name;                                        // 0x0000 (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      m_Text;                                        // 0x000C (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	float                                              m_fValue;                                      // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_WhaleBoneCharmList.DisWhaleBoneCharmInfo
// 0x0014
struct FDisWhaleBoneCharmInfo
{
	class FName                                        m_AttributeName;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDisWhaleBoneCharmLevel>       m_Levels;                                      // 0x0008 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerPawn_Combat.DramaAssassinationParams
// 0x001C
struct FDramaAssassinationParams
{
	uint8_t                                            m_Channel;                                     // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_EffectType;                                  // 0x0001 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fWorldDilation;                              // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fPlayerDilation;                             // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fPlayerInputDilation;                        // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDuration;                                   // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fWarmupTime;                                 // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fCooldownTime;                               // 0x0018 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerPawn.DisSlideDamageInfo
// 0x000C
struct FDisSlideDamageInfo
{
	class AActor*                                      m_pClassBeingDamaged;                          // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bExactMatch : 1;                             // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            m_SlideImpactDamage;                           // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerPawn.Deed
// 0x0044
struct FDeed
{
	uint8_t                                            m_Stat;                                        // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_Threshold;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FString                                      m_Text;                                        // 0x0008 (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            m_Value;                                       // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDisTweaksBase*                              m_pTweaks;                                     // 0x0018 (0x0004) [0x0000000800000001] (CPF_Edit | CPF_EditorOnly)
	struct FTweakNamePair                              m_TweaksNamePair;                              // 0x001C (0x0010) [0x0000000000000000]               
	class TArray<class UDisTweaksBase*>                m_ExcludedTweaks;                              // 0x002C (0x000C) [0x0000000800400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditorOnly)
	class TArray<struct FTweakNamePair>                m_ExcludedTweaksNamePairs;                     // 0x0038 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerPawn.DisMaskOnEffectBlurPhase
// 0x0018
struct FDisMaskOnEffectBlurPhase
{
	float                                              m_fStart;                                      // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fBlurStrength;                               // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fDistoStrength;                              // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMinRadius;                                  // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaxRadius;                                  // 0x0010 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fMaskOpacity;                                // 0x0014 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerPawn.DLCPackItemInfo
// 0x0018
struct FDLCPackItemInfo
{
	class FName                                        m_ItemName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_SpawnName;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_PickupName;                                  // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerPawn.DLCPackInfo
// 0x0090
struct FDLCPackInfo
{
	struct FDLCPackItemInfo                            m_Upgrade;                                     // 0x0000 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FDLCPackItemInfo                            m_BoneCharm[3];                                // 0x0018 (0x0048) [0x0000000000000001] (CPF_Edit)    
	struct FDLCPackItemInfo                            m_Book;                                        // 0x0060 (0x0018) [0x0000000000000001] (CPF_Edit)    
	struct FDLCPackItemInfo                            m_Pouch;                                       // 0x0078 (0x0018) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerPawn.DisSearchCooldownMeterSettings
// 0x0024
struct FDisSearchCooldownMeterSettings
{
	struct FVector2D                                   m_BarPos;                                      // 0x0000 (0x0008) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fBarHeight;                                  // 0x0008 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fBarMinWidth;                                // 0x000C (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fBarMaxWidth;                                // 0x0010 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fSearchTimeLeftMin_s;                        // 0x0014 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fSearchTimeLeftMax_s;                        // 0x0018 (0x0004) [0x0000400000000001] (CPF_Edit)    
	struct FColor                                      m_BarMinColor;                                 // 0x001C (0x0004) [0x0000400000000001] (CPF_Edit)    
	struct FColor                                      m_BarMaxColor;                                 // 0x0020 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerVisibility.DisStealthEffectIndicatorIncreaseModeSettings
// 0x000C
struct FDisStealthEffectIndicatorIncreaseModeSettings
{
	float                                              m_fAccumulationFactor;                         // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fAccumulatorMaxValue;                        // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fAccumulatorLeakRate;                        // 0x0008 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerVisibility.DisStealthEffectThresholdModeSettings
// 0x0014
struct FDisStealthEffectThresholdModeSettings
{
	float                                              m_fVisValueToStart;                            // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fVisValueToStop;                             // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fMinVal;                                     // 0x0008 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fMaxVal;                                     // 0x000C (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fLerpTime;                                   // 0x0010 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerVisibility.DisStealthEffectDesaturationLerpModeSettings
// 0x0008
struct FDisStealthEffectDesaturationLerpModeSettings
{
	float                                              m_fDesaturationForMinVis;                      // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fDesaturationForMaxVis;                      // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_PlayerVisRegion.DisVisRegionSettings
// 0x0010
struct FDisVisRegionSettings
{
	float                                              m_fWidth;                                      // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fOffsetTowardsNPC;                           // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fTopHeight;                                  // 0x0008 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fBottomHeight;                               // 0x000C (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_Possessable.DisPossessPowerLevelSettings
// 0x0004
struct FDisPossessPowerLevelSettings
{
	float                                              m_fPossessDuration;                            // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_Possessable.DisPossessableAwarenessSettings
// 0x0004
struct FDisPossessableAwarenessSettings
{
	uint32_t                                           m_bCanBePossessed : 1;                         // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_SimpleAttention.DisSimpleAttnNoiseContextInfo
// 0x0004
struct FDisSimpleAttnNoiseContextInfo
{
	uint32_t                                           m_bGainAttentionOnNoiseContext : 1;            // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bCountsAsWitnessDeath : 1;                   // 0x0000 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_Store.DisItemCost
// 0x000D
struct FDisItemCost
{
	int32_t                                            m_Quantity;                                    // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bAmmoCost : 1;                               // 0x0004 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class UDisAbstractItem*                            m_Type;                                        // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_AmmoType;                                    // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x000D (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisTweaks_Store.DisStoryPreReq
// 0x0018
struct FDisStoryPreReq
{
	class UDisStoryFlagSet*                            m_pStoryFlagSet;                               // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FGuid                                       m_StoryFlag;                                   // 0x0004 (0x0010) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bStoryFlagValue : 1;                         // 0x0014 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_Store.DisStoreItem
// 0x0088
struct FDisStoreItem
{
	class FString                                      m_Name;                                        // 0x0000 (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      m_Description;                                 // 0x000C (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      m_StoreIconName;                               // 0x0018 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            m_SubSectionIndex;                             // 0x0024 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FDisItemCost>                  m_Cost;                                        // 0x0028 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<class UObject*>                       m_Prerequisites;                               // 0x0034 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            m_VisibilityPrereqIdx;                         // 0x0040 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDisStoryPreReq                             m_StoryReq;                                    // 0x0044 (0x0018) [0x0000000000000001] (CPF_Edit)    
	class UDisTweaksBase*                              m_Item;                                        // 0x005C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDisTweaksBase*                              m_AdditionalItem;                              // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FDisStoryPreReq                             m_StoryOnPurchase;                             // 0x0064 (0x0018) [0x0000000000000001] (CPF_Edit)    
	class FString                                      m_OutputLinkOnPurchase;                        // 0x007C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisTweaks_Upgrade.DisUpgradeAttributeInfo
// 0x000C
struct FDisUpgradeAttributeInfo
{
	class FName                                        m_AttributeName;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fValue;                                      // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_Vulnerability.DisTweaks_Vulnerability_InstaDeath
// 0x0004
struct FDisTweaks_Vulnerability_InstaDeath
{
	uint32_t                                           m_bVulnerable : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisTweaks_Vulnerability.DisTweaks_Vulnerability_HitReact
// 0x0005
struct FDisTweaks_Vulnerability_HitReact
{
	uint32_t                                           m_bVulnerable : 1;                             // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint8_t                                            m_ConvertToOtherReact;                         // 0x0004 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            MinStructAlignment[0x3];                       // 0x0005 (0x0003) ADDED PADDING
};

// ScriptStruct DishonoredGame.DisTweaks_WatchTower.DisWTLightMaterial
// 0x000C
struct FDisWTLightMaterial
{
	class FName                                        m_MaterialParamName;                           // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInterface*                          m_pMaterial;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisTweaks_WhaleOilBattery.MaterialChange
// 0x0010
struct FMaterialChange
{
	int32_t                                            m_ChargeThreshold;                             // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UMaterialInterface*>            m_Materials;                                   // 0x0004 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisUISoundTheme.AkSoundEventMapping
// 0x0018
struct FAkSoundEventMapping
{
	class FName                                        SoundEventName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    SoundToPlay;                                   // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class FName>                          FilteredEvents;                                // 0x000C (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.InterpTrackDialog.DialogControlTrackKey
// 0x0010
struct FDialogControlTrackKey
{
	float                                              StartTime;                                     // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              KeyLength;                                     // 0x0004 (0x0004) [0x0000000000000000]               
	class UInterpGroup*                                Target;                                        // 0x0008 (0x0004) [0x0000000000000000]               
	class UInterpTrackDialogKeyProperties*             Properties;                                    // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.InterpTrackInstDialog.DialogControlTrackInstKey
// 0x0010
struct FDialogControlTrackInstKey
{
	class UDisConv_Blurb*                              m_pMainBlurb;                                  // 0x0000 (0x0004) [0x0000000000000000]               
	class TArray<class UDisConv_Blurb*>                m_AltBlurbs;                                   // 0x0004 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.StatePlayerMasterSoiree.DisSoireeControlState
// 0x0028
struct FDisSoireeControlState
{
	uint32_t                                           m_bControlledBySoiree : 1;                     // 0x0000 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class USeqAct_Interp*                              m_pMatinee;                                    // 0x0004 (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            m_Flags;                                       // 0x0008 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     m_StartPos;                                    // 0x000C (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    m_StartRot;                                    // 0x0018 (0x000C) [0x0000000000002000] (CPF_Transient)
	uint32_t                                           m_bOldCollide_Actors : 1;                      // 0x0024 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           m_bOldCollide_BlockActors : 1;                 // 0x0024 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           m_bOldCollide_IgnoreEncroach : 1;              // 0x0024 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           m_bOldCollide_World : 1;                       // 0x0024 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
};

// ScriptStruct DishonoredGame.StatePlayerMasterPossess_Base.DisSavedPossessorParams
// 0x0004
struct FDisSavedPossessorParams
{
	uint32_t                                           m_bOldCollideWorld : 1;                        // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bOldCollideActors : 1;                       // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bOldBlockActors : 1;                         // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bOldIgnoreEncroachers : 1;                   // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           m_bOldNoEncroachCheck : 1;                     // 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct DishonoredGame.DisDLC05GameInfo.DisDLC05ChallengeInfo
// 0x005C
struct FDisDLC05ChallengeInfo
{
	class FString                                      m_Name;                                        // 0x0000 (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      m_Description;                                 // 0x000C (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      m_ExpertModeDesc;                              // 0x0018 (0x000C) [0x0002000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      m_ID;                                          // 0x0024 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint8_t                                            m_Type;                                        // 0x0030 (0x0001) [0x0000000000004000] (CPF_Config)  
	uint8_t                                            m_Leaderboard;                                 // 0x0031 (0x0001) [0x0000000000004000] (CPF_Config)  
	int32_t                                            m_NormalModeMedalThresholds[3];                // 0x0034 (0x000C) [0x0000000000004000] (CPF_Config)  
	int32_t                                            m_ExpertModeMedalThresholds[3];                // 0x0040 (0x000C) [0x0000000000004000] (CPF_Config)  
	class FString                                      m_LaunchCommand;                               // 0x004C (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           m_bCanEndChallengeEarly : 1;                   // 0x0058 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
};

// ScriptStruct DishonoredGame.DisDLC05GameInfo.DisDLC05GalleryItem
// 0x0018
struct FDisDLC05GalleryItem
{
	class FString                                      m_ID;                                          // 0x0000 (0x000C) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           m_bUnlockedInNormal : 1;                       // 0x000C (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           m_bUnlockedInExpert : 1;                       // 0x000C (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	uint32_t                                           m_bUnlockedWhenNormalCompleted : 1;            // 0x000C (0x0004) [0x0000000000004000] [0x00000004] (CPF_Config)
	uint32_t                                           m_bUnlockedWhenExpertCompleted : 1;            // 0x000C (0x0004) [0x0000000000004000] [0x00000008] (CPF_Config)
	uint8_t                                            m_UnlockChallenge;                             // 0x0010 (0x0001) [0x0000000000004000] (CPF_Config)  
	int32_t                                            m_UnlockMedal;                                 // 0x0014 (0x0004) [0x0000000000004000] (CPF_Config)  
};

// ScriptStruct DishonoredGame.DisDLC05MoviePlayerHUD.DisDLC05HUDItemCountInfo
// 0x0014
struct FDisDLC05HUDItemCountInfo
{
	uint32_t                                           m_bEnabled : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bAlwaysDisplay : 1;                          // 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           m_bShowing : 1;                                // 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           m_bValueChanged : 1;                           // 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            m_Value;                                       // 0x0004 (0x0004) [0x0000000000000000]               
	int32_t                                            m_MaxValue;                                    // 0x0008 (0x0004) [0x0000000000000000]               
	int32_t                                            m_DisplayedValue;                              // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fDisplayTimer;                               // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisDLC05ScoringRule_WithModifiers.DisDLC05ScoreModifierDefinition
// 0x000C
struct FDisDLC05ScoreModifierDefinition
{
	class FName                                        m_ModifierName;                                // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDisDLC05ScoringModifier_Base*               m_pModifier;                                   // 0x0008 (0x0004) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DisDLC05ScoringRule_MysteryMan.DLC05NPCAttention
// 0x000C
struct FDLC05NPCAttention
{
	int32_t                                            m_ID;                                          // 0x0000 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_WorstAttentionStatus;                        // 0x0004 (0x0001) [0x0000000000000000]               
	struct FPointer                                    m_pStoryGroup;                                 // 0x0008 (0x0004) [0x0000000000001000] (CPF_Native)  
};

// ScriptStruct DishonoredGame.DisDLC05ScoringRule_Thief.DLC05ScoringRuleThiefCoin
// 0x000C
struct FDLC05ScoringRuleThiefCoin
{
	class UDisAbstractItem*                            m_pAbstactItem;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_iQuantity;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_iGain;                                       // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC05ScoringRule_Thief.DLC05ScoringRuleThiefEgg
// 0x0014
struct FDLC05ScoringRuleThiefEgg
{
	class UDisAbstractItem*                            m_pAbstactItem;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_EntryName;                                   // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_StatName;                                    // 0x000C (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC05ScoringRule_WaveKill.DisDLC05WaveKillNpcBaseGain
// 0x0018
struct FDisDLC05WaveKillNpcBaseGain
{
	class UDisTweaks_StoryGroup*                       m_pStoryGroup;                                 // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            m_iBaseGain;                                   // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_EntryName;                                   // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_StatName;                                    // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC05Tweaks_ChallengeScoringRuleset.DisDLC05MultiplierRuleDefinition
// 0x000C
struct FDisDLC05MultiplierRuleDefinition
{
	class FName                                        m_RuleName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDisDLC05ChallengeRule_Multiplier*           m_Rule;                                        // 0x0008 (0x0004) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DisDLC05Tweaks_ChallengeScoringRuleset.DisDLC05ScoreRuleDefinition
// 0x000C
struct FDisDLC05ScoreRuleDefinition
{
	class FName                                        m_RuleName;                                    // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UDisDLC05ScoringRule_Base*                   m_Rule;                                        // 0x0008 (0x0004) [0x0000000004400009] (CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
};

// ScriptStruct DishonoredGame.DisDLC05Tweaks_ChallengeScoringRuleset.DisDLC05StatDefinition
// 0x0014
struct FDisDLC05StatDefinition
{
	uint8_t                                            m_StatLookup;                                  // 0x0000 (0x0001) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_StatName;                                    // 0x0004 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_StatStorageEvent;                            // 0x000C (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_StatValueFormat;                             // 0x000D (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bAllowZero : 1;                              // 0x0010 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           m_bHideCount : 1;                              // 0x0010 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisDLC06ActivePowerComponent_SummonAssassin.DisDLC06SpawnedAssassinInfo
// 0x0020
struct FDisDLC06SpawnedAssassinInfo
{
	class ADishonoredNPCPawn*                          m_pAssassin;                                   // 0x0000 (0x0004) [0x0000000000000000]               
	class ADishonoredNPCPawn*                          m_pKillTarget;                                 // 0x0004 (0x0004) [0x0000000000000000]               
	class ADisDLC06_TeleportDest*                      m_pTeleDest;                                   // 0x0008 (0x0004) [0x0000000000000000]               
	uint8_t                                            m_AssassinState;                               // 0x000C (0x0001) [0x0000000000000000]               
	float                                              m_fNoCombatTimer;                              // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              m_fLifeTimer;                                  // 0x0014 (0x0004) [0x0000000000000000]               
	int32_t                                            m_NameIndex;                                   // 0x0018 (0x0004) [0x0000000000000000]               
	uint32_t                                           m_bDidCombat : 1;                              // 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           m_bLeaveDueToOverpopulation : 1;               // 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct DishonoredGame.DisDLC06Tweaks_Explosion.DisExplosionActorFilterType
// 0x0008
struct FDisExplosionActorFilterType
{
	class AActor*                                      m_pType;                                       // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           m_bExact : 1;                                  // 0x0004 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisDLC06Tweaks_PlayerPawn.DisDLC06CrossbowAssassinationAnimState
// 0x0010
struct FDisDLC06CrossbowAssassinationAnimState
{
	class FName                                        m_StateName;                                   // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        m_Sequence;                                    // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC06Tweaks_SummonAssassin.DisDLC06SummonAssassinLevel
// 0x0014
struct FDisDLC06SummonAssassinLevel
{
	int32_t                                            m_MaxAssassins;                                // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UDisTweaks_NPCPawn*                          m_pAssassinTweaks;                             // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<class FString>                        m_AssassinNames;                               // 0x0008 (0x000C) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisDLC06Tweaks_VulnerabilityEx.DisDLC06Tweaks_VulnerabilitySetup
// 0x0004
struct FDisDLC06Tweaks_VulnerabilitySetup
{
	uint32_t                                           m_bIsSupported : 1;                            // 0x0000 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
};

// ScriptStruct DishonoredGame.DisDLC07StateNPCMasterPulled.PulledParams
// 0x003C
struct FPulledParams
{
	float                                              m_fMinDistance;                                // 0x0000 (0x0004) [0x0000000000000000]               
	float                                              m_fSpeed;                                      // 0x0004 (0x0004) [0x0000000000000000]               
	float                                              m_fCutOffThreshold;                            // 0x0008 (0x0004) [0x0000000000000000]               
	float                                              m_fBlastForce;                                 // 0x000C (0x0004) [0x0000000000000000]               
	float                                              m_fFarPushForce;                               // 0x0010 (0x0004) [0x0000000000000000]               
	float                                              m_fBlastRadius;                                // 0x0014 (0x0004) [0x0000000000000000]               
	float                                              m_fLiftMinHeight;                              // 0x0018 (0x0004) [0x0000000000000000]               
	float                                              m_fLiftMaxHeight;                              // 0x001C (0x0004) [0x0000000000000000]               
	float                                              m_fPickupSpeed;                                // 0x0020 (0x0004) [0x0000000000000000]               
	float                                              m_fLiftDistance;                               // 0x0024 (0x0004) [0x0000000000000000]               
	float                                              m_fTeleportDelay;                              // 0x0028 (0x0004) [0x0000000000000000]               
	float                                              m_fAttnProxyLocRatio;                          // 0x002C (0x0004) [0x0000000000000000]               
	struct FVector                                     m_RiverKrustImpulse;                           // 0x0030 (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisDLC07NavMeshGoal_CombatVsRiverKrustPosition.CombatVsRiverKrustPositionNavGoal
// 0x0014
struct FCombatVsRiverKrustPositionNavGoal
{
	struct FPointer                                    m_pGoalPoly;                                   // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FVector                                     m_GoalLocation;                                // 0x0004 (0x000C) [0x0000000000000000]               
	float                                              m_fSortValue;                                  // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisDLC07NavMeshGoal_GravehoundSpawnPosition.SpawnPositionNavGoal
// 0x0014
struct FSpawnPositionNavGoal
{
	struct FPointer                                    m_pGoalPoly;                                   // 0x0000 (0x0004) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FVector                                     m_GoalLocation;                                // 0x0004 (0x000C) [0x0000000000000000]               
	float                                              m_fSortValue;                                  // 0x0010 (0x0004) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisDLC07PullerInterface.PullAimInfo
// 0x0018
struct FPullAimInfo
{
	struct FVector                                     m_Location;                                    // 0x0000 (0x000C) [0x0000000000000000]               
	struct FVector                                     m_Direction;                                   // 0x000C (0x000C) [0x0000000000000000]               
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_NPCPawn.DeadPullUpforceThreshold
// 0x0008
struct FDeadPullUpforceThreshold
{
	float                                              m_fHeight;                                     // 0x0000 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fValue;                                      // 0x0004 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_NPCPawn.DeadPullUpForceSettings
// 0x0018
struct FDeadPullUpForceSettings
{
	struct FDeadPullUpforceThreshold                   m_Max;                                         // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FDeadPullUpforceThreshold                   m_Medium;                                      // 0x0008 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FDeadPullUpforceThreshold                   m_Min;                                         // 0x0010 (0x0008) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_Gravehound.DisGravehoundFXInfo
// 0x000C
struct FDisGravehoundFXInfo
{
	class FName                                        m_SocketName;                                  // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             m_pPS;                                         // 0x0008 (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_WhaleBoneCharmCrackedList.DisDLC07WhaleBoneCharmCrackedAttribute
// 0x0010
struct FDisDLC07WhaleBoneCharmCrackedAttribute
{
	class FName                                        m_AttributeName;                               // 0x0000 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            m_AttributeType;                               // 0x0008 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              m_fValue;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_WhaleBoneCharmCrackedList.DisDLC07WhaleBoneCharmCrackedLevel
// 0x0024
struct FDisDLC07WhaleBoneCharmCrackedLevel
{
	class FString                                      m_Name;                                        // 0x0000 (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      m_Text;                                        // 0x000C (0x000C) [0x0002000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class TArray<struct FDisDLC07WhaleBoneCharmCrackedAttribute> m_Attributes;                                  // 0x0018 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_WhaleBoneCharmCrackedList.DisDLC07WhaleBoneCharmCrackedInfo
// 0x000C
struct FDisDLC07WhaleBoneCharmCrackedInfo
{
	class TArray<struct FDisDLC07WhaleBoneCharmCrackedLevel> m_Levels;                                      // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_PlayerPawn.DLC07TransferUpgrade
// 0x0010
struct FDLC07TransferUpgrade
{
	class FString                                      Name;                                          // 0x0000 (0x000C) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UDisTweaks_Upgrade*                          pUpgrade;                                      // 0x000C (0x0004) [0x0000000000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_Pull.DisTweaksToManaCost
// 0x0008
struct FDisTweaksToManaCost
{
	class UDisTweaksBase*                              m_pTweaks;                                     // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	int32_t                                            m_ManaCost;                                    // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_Pull.DisTweaksToSFX
// 0x0008
struct FDisTweaksToSFX
{
	class UDisTweaksBase*                              m_pTweaks;                                     // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	class UAkEvent*                                    m_pAkEvent;                                    // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_Pull.DisTweaksToVFX
// 0x0008
struct FDisTweaksToVFX
{
	class UDisTweaksBase*                              m_pTweaks;                                     // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	class UParticleSystem*                             m_pPS;                                         // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_Pull.DisPullTutorial
// 0x0010
struct FDisPullTutorial
{
	class TArray<class UDisTweaksBase*>                m_Tweaks;                                      // 0x0000 (0x000C) [0x0000400000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            m_MessageID;                                   // 0x000C (0x0004) [0x0000400000000001] (CPF_Edit)    
};

// ScriptStruct DishonoredGame.DisDLC07Tweaks_Pull.DisPullLevel
// 0x0008
struct FDisPullLevel
{
	float                                              m_fMinDistance;                                // 0x0000 (0x0004) [0x0000400000000001] (CPF_Edit)    
	float                                              m_fSpeed;                                      // 0x0004 (0x0004) [0x0000400000000001] (CPF_Edit)    
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/