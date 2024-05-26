/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: Core_parameters.hpp
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

// Function Core.Object.GetBuildChangelistNumber
// [0x00020401]  (iNative[14510])
struct UObject_execGetBuildChangelistNumber_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GetEngineVersion
// [0x00020401]  (iNative[14512])
struct UObject_execGetEngineVersion_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GetSystemTime
// [0x00420401]  (iNative[14522])
struct UObject_execGetSystemTime_Params
{
	int32_t                                            Year;                                             // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            Month;                                            // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            DayOfWeek;                                        // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            Day;                                              // 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            Hour;                                             // 0x0010 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            Min;                                              // 0x0014 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            Sec;                                              // 0x0018 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            MSec;                                             // 0x001C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function Core.Object.TimeStamp
// [0x00020401]  (iNative[14825])
struct UObject_execTimeStamp_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.TransformVectorByRotation
// [0x00024401]  (iNative[14831])
struct UObject_execTransformVectorByRotation_Params
{
	struct FRotator                                    SourceRotation;                                   // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     SourceVector;                                     // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bInverse : 1;                                     // 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     ReturnValue;                                      // 0x001C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GetPackageName
// [0x00020003] 
struct UObject_execGetPackageName_Params
{
	class FName                                        ReturnValue;                                      // 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UObject*                                  O;                                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function Core.Object.IsPendingKill
// [0x00020401]  (iNative[14584])
struct UObject_execIsPendingKill_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GetAngularFromDotDist
// [0x00422401]  (iNative[14508])
struct UObject_execGetAngularFromDotDist_Params
{
	struct FVector2D                                   OutAngDist;                                       // 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector2D                                   DotDist;                                          // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function Core.Object.GetAngularDistance
// [0x00422401]  (iNative[14507])
struct UObject_execGetAngularDistance_Params
{
	struct FVector2D                                   OutAngularDist;                                   // 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     Direction;                                        // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     AxisX;                                            // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     AxisY;                                            // 0x0020 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     AxisZ;                                            // 0x002C (0x000C) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0038 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GetDotDistance
// [0x00422401]  (iNative[14511])
struct UObject_execGetDotDistance_Params
{
	struct FVector2D                                   OutDotDist;                                       // 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     Direction;                                        // 0x0008 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     AxisX;                                            // 0x0014 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     AxisY;                                            // 0x0020 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     AxisZ;                                            // 0x002C (0x000C) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0038 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.PointProjectToPlane
// [0x00022401]  (iNative[14718])
struct UObject_execPointProjectToPlane_Params
{
	struct FVector                                     Point;                                            // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     A;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     C;                                                // 0x0024 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0030 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.PointDistToSegment
// [0x00424401]  (iNative[14717])
struct UObject_execPointDistToSegment_Params
{
	struct FVector                                     Point;                                            // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     StartPoint;                                       // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     EndPoint;                                         // 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     OutClosestPoint;                                  // 0x0024 (0x000C) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      // 0x0030 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.PointDistToLine
// [0x00424401]  (iNative[14716])
struct UObject_execPointDistToLine_Params
{
	struct FVector                                     Point;                                            // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Line;                                             // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Origin;                                           // 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     OutClosestPoint;                                  // 0x0024 (0x000C) [0x0000000000000190] (CPF_OptionalParm | CPF_Parm | CPF_OutParm)
	float                                              ReturnValue;                                      // 0x0030 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GetPerObjectConfigSections
// [0x00426401]  (iNative[14518])
struct UObject_execGetPerObjectConfigSections_Params
{
	class UObject*                                     SearchClass;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<class FString>                        out_SectionNames;                                 // 0x0004 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UObject*                                     ObjectOuter;                                      // 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            MaxResults;                                       // 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.StaticSaveConfig
// [0x00022401]  (iNative[14780])
struct UObject_execStaticSaveConfig_Params
{
};

// Function Core.Object.SaveConfig
// [0x21800020401]  (iNative[6316])
struct UObject_execSaveConfig_Params
{
};

// Function Core.Object.FindObject
// [0x00022401]  (iNative[14493])
struct UObject_execFindObject_Params
{
	class FString                                      ObjectName;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UObject*                                     ObjectClass;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.DynamicLoadObject
// [0x00026401]  (iNative[14450])
struct UObject_execDynamicLoadObject_Params
{
	class FString                                      ObjectName;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UObject*                                     ObjectClass;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           MayFail : 1;                                      // 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class UObject*                                     ReturnValue;                                      // 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GetEnum
// [0x00022401]  (iNative[14513])
struct UObject_execGetEnum_Params
{
	class UObject*                                     E;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            I;                                                // 0x0004 (0x0004) [0x0000000000000880] (CPF_Parm | CPF_CoerceParm)
	class FName                                        ReturnValue;                                      // 0x0008 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Disable
// [0x7600020401]  (iNative[3917])
struct UObject_execDisable_Params
{
	class FName                                        ProbeFunc;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function Core.Object.Enable
// [0x7500020401]  (iNative[3916])
struct UObject_execEnable_Params
{
	class FName                                        ProbeFunc;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function Core.Object.ContinuedState
// [0x00020800] 
struct UObject_eventContinuedState_Params
{
};

// Function Core.Object.PausedState
// [0x00020800] 
struct UObject_eventPausedState_Params
{
};

// Function Core.Object.PoppedState
// [0x00020800] 
struct UObject_eventPoppedState_Params
{
};

// Function Core.Object.PushedState
// [0x00020800] 
struct UObject_eventPushedState_Params
{
};

// Function Core.Object.EndState
// [0x00020800] 
struct UObject_eventEndState_Params
{
	class FName                                        NextStateName;                                    // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function Core.Object.BeginState
// [0x00020800] 
struct UObject_eventBeginState_Params
{
	class FName                                        PreviousStateName;                                // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function Core.Object.DumpStateStack
// [0x00020401]  (iNative[14449])
struct UObject_execDumpStateStack_Params
{
};

// Function Core.Object.PopState
// [0x00024401]  (iNative[14720])
struct UObject_execPopState_Params
{
	uint32_t                                           bPopAll : 1;                                      // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function Core.Object.PushState
// [0x00024401]  (iNative[14725])
struct UObject_execPushState_Params
{
	class FName                                        NewState;                                         // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        NewLabel;                                         // 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function Core.Object.GetStateName
// [0x11C00020401]  (iNative[14521])
struct UObject_execGetStateName_Params
{
	class FName                                        ReturnValue;                                      // 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.IsChildState
// [0x00020401]  (iNative[14580])
struct UObject_execIsChildState_Params
{
	class FName                                        TestState;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        TestParentState;                                  // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.IsInState
// [0x11900024401]  (iNative[14583])
struct UObject_execIsInState_Params
{
	class FName                                        TestState;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bTestStateStack : 1;                              // 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GotoState
// [0x7100024401]  (iNative[14525])
struct UObject_execGotoState_Params
{
	class FName                                        NewState;                                         // 0x0000 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FName                                        Label;                                            // 0x0008 (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bForceEvents : 1;                                 // 0x0010 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bKeepStack : 1;                                   // 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function Core.Object.IsUTracing
// [0x00022401]  (iNative[14586])
struct UObject_execIsUTracing_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SetUTracing
// [0x00022401]  (iNative[14766])
struct UObject_execSetUTracing_Params
{
	uint32_t                                           bShouldUTrace : 1;                                // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function Core.Object.GetFuncName
// [0x00022401]  (iNative[14515])
struct UObject_execGetFuncName_Params
{
	class FName                                        ReturnValue;                                      // 0x0000 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.DebugBreak
// [0x00026401]  (iNative[14421])
struct UObject_execDebugBreak_Params
{
	int32_t                                            UserFlags;                                        // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            DebuggerType;                                     // 0x0004 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function Core.Object.ScriptTrace
// [0x00022401]  (iNative[14760])
struct UObject_execScriptTrace_Params
{
};

// Function Core.Object.Localize
// [0x00022400]  (iNative[14608])
struct UObject_execLocalize_Params
{
	class FString                                      SectionName;                                      // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      KeyName;                                          // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      PackageName;                                      // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0024 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.WarnInternal
// [0xE800042401]  (iNative[14862])
struct UObject_execWarnInternal_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
};

// Function Core.Object.LogInternal
// [0xE700046401]  (iNative[14612])
struct UObject_execLogInternal_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FName                                        Tag;                                              // 0x000C (0x0008) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function Core.Object.Subtract_LinearColorLinearColor
// [0x00023003] 
struct UObject_execSubtract_LinearColorLinearColor_Params
{
	struct FLinearColor                                A;                                                // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FLinearColor                                B;                                                // 0x0010 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FLinearColor                                ReturnValue;                                      // 0x0020 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_LinearColorFloat
// [0x00023003] 
struct UObject_execMultiply_LinearColorFloat_Params
{
	struct FLinearColor                                LC;                                               // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	float                                              Mult;                                             // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FLinearColor                                ReturnValue;                                      // 0x0014 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.ColorToLinearColor
// [0x00022003] 
struct UObject_execColorToLinearColor_Params
{
	struct FColor                                      OldColor;                                         // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FLinearColor                                ReturnValue;                                      // 0x0004 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MakeLinearColor
// [0x00822003] 
struct UObject_execMakeLinearColor_Params
{
	float                                              R;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              G;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              A;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FLinearColor                                ReturnValue;                                      // 0x0010 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FLinearColor                             LC;                                               // 0x0020 (0x0010) [0x0000000000000000]               
};

// Function Core.Object.MakeColor
// [0x00826003] 
struct UObject_execMakeColor_Params
{
	uint8_t                                            R;                                                // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            G;                                                // 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            B;                                                // 0x0002 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            A;                                                // 0x0003 (0x0001) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FColor                                      ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// struct FColor                                   C;                                                // 0x0008 (0x0004) [0x0000000000000000]               
};

// Function Core.Object.Add_ColorColor
// [0x00023003] 
struct UObject_execAdd_ColorColor_Params
{
	struct FColor                                      A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_ColorFloat
// [0x00023003] 
struct UObject_execMultiply_ColorFloat_Params
{
	struct FColor                                      A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_FloatColor
// [0x00023003] 
struct UObject_execMultiply_FloatColor_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Subtract_ColorColor
// [0x00023003] 
struct UObject_execSubtract_ColorColor_Params
{
	struct FColor                                      A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FColor                                      ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EvalInterpCurveVector2D
// [0x00020401]  (iNative[14485])
struct UObject_execEvalInterpCurveVector2D_Params
{
	struct FInterpCurveVector2D                        Vector2DCurve;                                    // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              InVal;                                            // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ReturnValue;                                      // 0x0014 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EvalInterpCurveVector
// [0x00020401]  (iNative[14484])
struct UObject_execEvalInterpCurveVector_Params
{
	struct FInterpCurveVector                          VectorCurve;                                      // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              InVal;                                            // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0014 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EvalInterpCurveFloat
// [0x00020401]  (iNative[14483])
struct UObject_execEvalInterpCurveFloat_Params
{
	struct FInterpCurveFloat                           FloatCurve;                                       // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              InVal;                                            // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GetMappedRangeValue
// [0x00022501]  (iNative[14516])
struct UObject_execGetMappedRangeValue_Params
{
	struct FVector2D                                   InputRange;                                       // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   OutputRange;                                      // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GetRangePctByValue
// [0x00022103] 
struct UObject_execGetRangePctByValue_Params
{
	struct FVector2D                                   Range;                                            // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Value;                                            // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GetRangeValueByPct
// [0x00022103] 
struct UObject_execGetRangeValueByPct_Params
{
	struct FVector2D                                   Range;                                            // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              Pct;                                              // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_Vector2DVector2D
// [0x00423401]  (iNative[14273])
struct UObject_execSubtractEqual_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                // 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector2D                                   B;                                                // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ReturnValue;                                      // 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.AddEqual_Vector2DVector2D
// [0x00423401]  (iNative[14270])
struct UObject_execAddEqual_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                // 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector2D                                   B;                                                // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ReturnValue;                                      // 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_Vector2DFloat
// [0x00423401]  (iNative[14274])
struct UObject_execDivideEqual_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                // 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ReturnValue;                                      // 0x000C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_Vector2DFloat
// [0x00423401]  (iNative[14267])
struct UObject_execMultiplyEqual_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                // 0x0000 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ReturnValue;                                      // 0x000C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Divide_Vector2DFloat
// [0x00023401]  (iNative[3983])
struct UObject_execDivide_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ReturnValue;                                      // 0x000C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_Vector2DFloat
// [0x00023401]  (iNative[14265])
struct UObject_execMultiply_Vector2DFloat_Params
{
	struct FVector2D                                   A;                                                // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ReturnValue;                                      // 0x000C (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Subtract_Vector2DVector2D
// [0x00023401]  (iNative[14271])
struct UObject_execSubtract_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   B;                                                // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ReturnValue;                                      // 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Add_Vector2DVector2D
// [0x00023401]  (iNative[14268])
struct UObject_execAdd_Vector2DVector2D_Params
{
	struct FVector2D                                   A;                                                // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   B;                                                // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FVector2D                                   ReturnValue;                                      // 0x0010 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Subtract_QuatQuat
// [0x10F00023401]  (iNative[14271])
struct UObject_execSubtract_QuatQuat_Params
{
	struct FQuat                                       A;                                                // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       B;                                                // 0x0010 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       ReturnValue;                                      // 0x0020 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Add_QuatQuat
// [0x10E00023401]  (iNative[14268])
struct UObject_execAdd_QuatQuat_Params
{
	struct FQuat                                       A;                                                // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       B;                                                // 0x0010 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       ReturnValue;                                      // 0x0020 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.QuatSlerp
// [0x00026401]  (iNative[14733])
struct UObject_execQuatSlerp_Params
{
	struct FQuat                                       A;                                                // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       B;                                                // 0x0010 (0x0010) [0x0000000000000080] (CPF_Parm)    
	float                                              Alpha;                                            // 0x0020 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShortestPath : 1;                                // 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FQuat                                       ReturnValue;                                      // 0x0030 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.QuatToRotator
// [0x00022401]  (iNative[14734])
struct UObject_execQuatToRotator_Params
{
	struct FQuat                                       A;                                                // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.QuatFromRotator
// [0x00022401]  (iNative[14729])
struct UObject_execQuatFromRotator_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       ReturnValue;                                      // 0x0010 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.QuatFromAxisAndAngle
// [0x00022401]  (iNative[14728])
struct UObject_execQuatFromAxisAndAngle_Params
{
	struct FVector                                     Axis;                                             // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Angle;                                            // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       ReturnValue;                                      // 0x0010 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.QuatFindBetween
// [0x00022401]  (iNative[14727])
struct UObject_execQuatFindBetween_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       ReturnValue;                                      // 0x0020 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.QuatRotateVector
// [0x00022401]  (iNative[14732])
struct UObject_execQuatRotateVector_Params
{
	struct FQuat                                       A;                                                // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x0010 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x001C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.QuatInvert
// [0x00022401]  (iNative[14730])
struct UObject_execQuatInvert_Params
{
	struct FQuat                                       A;                                                // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       ReturnValue;                                      // 0x0010 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.QuatDot
// [0x00022401]  (iNative[14726])
struct UObject_execQuatDot_Params
{
	struct FQuat                                       A;                                                // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       B;                                                // 0x0010 (0x0010) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.QuatProduct
// [0x00022401]  (iNative[14731])
struct UObject_execQuatProduct_Params
{
	struct FQuat                                       A;                                                // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       B;                                                // 0x0010 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FQuat                                       ReturnValue;                                      // 0x0020 (0x0010) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MatrixGetAxis
// [0x00022401]  (iNative[14625])
struct UObject_execMatrixGetAxis_Params
{
	struct FMatrix                                     TM;                                               // 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            Axis;                                             // 0x0040 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0044 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MatrixGetOrigin
// [0x00022401]  (iNative[14626])
struct UObject_execMatrixGetOrigin_Params
{
	struct FMatrix                                     TM;                                               // 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0040 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MatrixGetRotator
// [0x00022401]  (iNative[14627])
struct UObject_execMatrixGetRotator_Params
{
	struct FMatrix                                     TM;                                               // 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0040 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MakeRotationMatrix
// [0x00022401]  (iNative[14621])
struct UObject_execMakeRotationMatrix_Params
{
	struct FRotator                                    Rotation;                                         // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FMatrix                                     ReturnValue;                                      // 0x0010 (0x0040) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MakeRotationTranslationMatrix
// [0x00022401]  (iNative[14622])
struct UObject_execMakeRotationTranslationMatrix_Params
{
	struct FVector                                     Translation;                                      // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    Rotation;                                         // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FMatrix                                     ReturnValue;                                      // 0x0020 (0x0040) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.InverseTransformNormal
// [0x00022401]  (iNative[14577])
struct UObject_execInverseTransformNormal_Params
{
	struct FMatrix                                     TM;                                               // 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     A;                                                // 0x0040 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x004C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.TransformNormal
// [0x00022401]  (iNative[14829])
struct UObject_execTransformNormal_Params
{
	struct FMatrix                                     TM;                                               // 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     A;                                                // 0x0040 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x004C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.InverseTransformVector
// [0x00022401]  (iNative[14578])
struct UObject_execInverseTransformVector_Params
{
	struct FMatrix                                     TM;                                               // 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     A;                                                // 0x0040 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x004C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.TransformVector
// [0x00022401]  (iNative[14830])
struct UObject_execTransformVector_Params
{
	struct FMatrix                                     TM;                                               // 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     A;                                                // 0x0040 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x004C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_MatrixMatrix
// [0x00023401]  (iNative[14265])
struct UObject_execMultiply_MatrixMatrix_Params
{
	struct FMatrix                                     A;                                                // 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
	struct FMatrix                                     B;                                                // 0x0040 (0x0040) [0x0000000000000080] (CPF_Parm)    
	struct FMatrix                                     ReturnValue;                                      // 0x0080 (0x0040) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.NotEqual_NameName
// [0xFF00023401]  (iNative[14259])
struct UObject_execNotEqual_NameName_Params
{
	class FName                                        A;                                                // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        B;                                                // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_NameName
// [0xFE00023401]  (iNative[14278])
struct UObject_execEqualEqual_NameName_Params
{
	class FName                                        A;                                                // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        B;                                                // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.IsA
// [0xC500020401]  (iNative[14579])
struct UObject_execIsA_Params
{
	class FName                                        ClassName;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.ClassIsChildOf
// [0x10200022401]  (iNative[14401])
struct UObject_execClassIsChildOf_Params
{
	class UObject*                                     TestClass;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     ParentClass;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.NotEqual_InterfaceInterface
// [0x00023401]  (iNative[14259])
struct UObject_execNotEqual_InterfaceInterface_Params
{
	class UInterface*                                  A;                                                // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UInterface*                                  B;                                                // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_InterfaceInterface
// [0x00023401]  (iNative[14278])
struct UObject_execEqualEqual_InterfaceInterface_Params
{
	class UInterface*                                  A;                                                // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UInterface*                                  B;                                                // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.NotEqual_ObjectObject
// [0x7700023401]  (iNative[14259])
struct UObject_execNotEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_ObjectObject
// [0x7200023401]  (iNative[14278])
struct UObject_execEqualEqual_ObjectObject_Params
{
	class UObject*                                     A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UObject*                                     B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.PathName
// [0x00022401]  (iNative[3958])
struct UObject_execPathName_Params
{
	class UObject*                                     CheckObject;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.ParseStringIntoArray
// [0x00422401]  (iNative[14710])
struct UObject_execParseStringIntoArray_Params
{
	class FString                                      BaseString;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<class FString>                        Pieces;                                           // 0x000C (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      Delim;                                            // 0x0018 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bCullEmpty : 1;                                   // 0x0024 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function Core.Object.Split
// [0x00026003] 
struct UObject_execSplit_Params
{
	class FString                                      Text;                                             // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      SplitStr;                                         // 0x000C (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	uint32_t                                           bOmitSplitStr : 1;                                // 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      // 0x001C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// int32_t                                         pos;                                              // 0x0028 (0x0004) [0x0000000000000000]               
};

// Function Core.Object.Repl
// [0xC900026401]  (iNative[14745])
struct UObject_execRepl_Params
{
	class FString                                      Src;                                              // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      Match;                                            // 0x000C (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      With;                                             // 0x0018 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	uint32_t                                           bCaseSensitive : 1;                               // 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      // 0x0028 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.Asc
// [0xED00022401]  (iNative[14332])
struct UObject_execAsc_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Chr
// [0xEC00022401]  (iNative[14391])
struct UObject_execChr_Params
{
	int32_t                                            I;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.Locs
// [0xEE00022401]  (iNative[14610])
struct UObject_execLocs_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.Caps
// [0xEB00022401]  (iNative[14389])
struct UObject_execCaps_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.Right
// [0xEA00022401]  (iNative[14747])
struct UObject_execRight_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	int32_t                                            I;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.Left
// [0x8000022401]  (iNative[14595])
struct UObject_execLeft_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	int32_t                                            I;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.Mid
// [0x7F00026401]  (iNative[14634])
struct UObject_execMid_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	int32_t                                            I;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            J;                                                // 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      // 0x0014 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.InStr
// [0x7E00026401]  (iNative[14561])
struct UObject_execInStr_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      T;                                                // 0x000C (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	uint32_t                                           bSearchFromRight : 1;                             // 0x0018 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bIgnoreCase : 1;                                  // 0x001C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartPos;                                         // 0x0020 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            ReturnValue;                                      // 0x0024 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Len
// [0x7D00022401]  (iNative[14596])
struct UObject_execLen_Params
{
	class FString                                      S;                                                // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_StrStr
// [0x14400423401]  (iNative[14273])
struct UObject_execSubtractEqual_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.AtEqual_StrStr
// [0x14300423401]  (iNative[14284])
struct UObject_execAtEqual_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.ConcatEqual_StrStr
// [0x14200423401]  (iNative[14261])
struct UObject_execConcatEqual_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.ComplementEqual_StrStr
// [0x7C00023401]  (iNative[14874])
struct UObject_execComplementEqual_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.NotEqual_StrStr
// [0x7B00023401]  (iNative[14259])
struct UObject_execNotEqual_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_StrStr
// [0x7A00023401]  (iNative[14278])
struct UObject_execEqualEqual_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GreaterEqual_StrStr
// [0x7900023401]  (iNative[14280])
struct UObject_execGreaterEqual_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.LessEqual_StrStr
// [0x7800023401]  (iNative[14277])
struct UObject_execLessEqual_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Greater_StrStr
// [0x7400023401]  (iNative[14279])
struct UObject_execGreater_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Less_StrStr
// [0x7300023401]  (iNative[14275])
struct UObject_execLess_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.At_StrStr
// [0xA814023401]  (iNative[14283])
struct UObject_execAt_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.Concat_StrStr
// [0x7000023401]  (iNative[14260])
struct UObject_execConcat_StrStr_Params
{
	class FString                                      A;                                                // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      B;                                                // 0x000C (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.RSize
// [0x00022401]  (iNative[14752])
struct UObject_execRSize_Params
{
	struct FRotator                                    R;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.RDiff
// [0x00022401]  (iNative[14742])
struct UObject_execRDiff_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.NormalizeRotAxis
// [0x00022401]  (iNative[14667])
struct UObject_execNormalizeRotAxis_Params
{
	int32_t                                            Angle;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.RInterpTo
// [0x00026401]  (iNative[14748])
struct UObject_execRInterpTo_Params
{
	struct FRotator                                    Current;                                          // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    Target;                                           // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        // 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpSpeed;                                      // 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bConstantInterpSpeed : 1;                         // 0x0020 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    ReturnValue;                                      // 0x0024 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.RTransform
// [0x00022401]  (iNative[14754])
struct UObject_execRTransform_Params
{
	struct FRotator                                    R;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    RBasis;                                           // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.RSmerp
// [0x00026401]  (iNative[14753])
struct UObject_execRSmerp_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Alpha;                                            // 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShortestPath : 1;                                // 0x001C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    ReturnValue;                                      // 0x0020 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.RLerp
// [0x00026401]  (iNative[14749])
struct UObject_execRLerp_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Alpha;                                            // 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bShortestPath : 1;                                // 0x001C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    ReturnValue;                                      // 0x0020 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Normalize
// [0x00022401]  (iNative[14666])
struct UObject_execNormalize_Params
{
	struct FRotator                                    Rot;                                              // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x000C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.OrthoRotation
// [0x00022401]  (iNative[14695])
struct UObject_execOrthoRotation_Params
{
	struct FVector                                     X;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Y;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Z;                                                // 0x0018 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0024 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.RotRand
// [0x14014026401]  (iNative[14750])
struct UObject_execRotRand_Params
{
	uint32_t                                           bRoll : 1;                                        // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	struct FRotator                                    ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GetUnAxes
// [0xE600422401]  (iNative[14523])
struct UObject_execGetUnAxes_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     X;                                                // 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     Y;                                                // 0x0018 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     Z;                                                // 0x0024 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function Core.Object.GetAxes
// [0xE514422401]  (iNative[14509])
struct UObject_execGetAxes_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     X;                                                // 0x000C (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     Y;                                                // 0x0018 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     Z;                                                // 0x0024 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function Core.Object.ClockwiseFrom_IntInt
// [0x00023401]  (iNative[14403])
struct UObject_execClockwiseFrom_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_RotatorRotator
// [0x13F00423401]  (iNative[14273])
struct UObject_execSubtractEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.AddEqual_RotatorRotator
// [0x13E00423401]  (iNative[14270])
struct UObject_execAddEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FRotator                                    B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Subtract_RotatorRotator
// [0x13D00023401]  (iNative[14271])
struct UObject_execSubtract_RotatorRotator_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Add_RotatorRotator
// [0x13C00023401]  (iNative[14268])
struct UObject_execAdd_RotatorRotator_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_RotatorFloat
// [0x12300423401]  (iNative[14274])
struct UObject_execDivideEqual_RotatorFloat_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_RotatorFloat
// [0x12200423401]  (iNative[14267])
struct UObject_execMultiplyEqual_RotatorFloat_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Divide_RotatorFloat
// [0x12100023401]  (iNative[3983])
struct UObject_execDivide_RotatorFloat_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_FloatRotator
// [0x12000023401]  (iNative[14265])
struct UObject_execMultiply_FloatRotator_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    B;                                                // 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_RotatorFloat
// [0x11F00023401]  (iNative[14265])
struct UObject_execMultiply_RotatorFloat_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.NotEqual_RotatorRotator
// [0xCB00023401]  (iNative[14259])
struct UObject_execNotEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_RotatorRotator
// [0x8E00023401]  (iNative[14278])
struct UObject_execEqualEqual_RotatorRotator_Params
{
	struct FRotator                                    A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.NoZDot
// [0x00022401]  (iNative[14678])
struct UObject_execNoZDot_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.ClampLength
// [0x00022401]  (iNative[14400])
struct UObject_execClampLength_Params
{
	struct FVector                                     V;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              MaxLength;                                        // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.VInterpTo
// [0x00022401]  (iNative[14851])
struct UObject_execVInterpTo_Params
{
	struct FVector                                     Current;                                          // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Target;                                           // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        // 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpSpeed;                                      // 0x001C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0020 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.IsZero
// [0x5DD00022401]  (iNative[14588])
struct UObject_execIsZero_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.ProjectOnTo
// [0x5DC00022401]  (iNative[14724])
struct UObject_execProjectOnTo_Params
{
	struct FVector                                     X;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     Y;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MirrorVectorByNormal
// [0x12C00022401]  (iNative[14636])
struct UObject_execMirrorVectorByNormal_Params
{
	struct FVector                                     InVect;                                           // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     InNormal;                                         // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.VRandCone2
// [0x00022401]  (iNative[14855])
struct UObject_execVRandCone2_Params
{
	struct FVector                                     Dir;                                              // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              HorizontalConeHalfAngleRadians;                   // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              VerticalConeHalfAngleRadians;                     // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0014 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.VRandCone
// [0x00022401]  (iNative[14854])
struct UObject_execVRandCone_Params
{
	struct FVector                                     Dir;                                              // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ConeHalfAngleRadians;                             // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.VRand
// [0xFC14022401]  (iNative[14853])
struct UObject_execVRand_Params
{
	struct FVector                                     ReturnValue;                                      // 0x0000 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.VSmerp
// [0x00022401]  (iNative[14860])
struct UObject_execVSmerp_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Alpha;                                            // 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x001C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.VLerp
// [0x14022401]  (iNative[14852])
struct UObject_execVLerp_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              Alpha;                                            // 0x0018 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x001C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Normal
// [0xE214022401]  (iNative[5412])
struct UObject_execNormal_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x000C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.VSizeSq2D
// [0x00022401]  (iNative[14859])
struct UObject_execVSizeSq2D_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.VSizeSq
// [0xE400022401]  (iNative[14858])
struct UObject_execVSizeSq_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.VSize2D
// [0x00022401]  (iNative[14857])
struct UObject_execVSize2D_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.VSize
// [0xE114022401]  (iNative[14856])
struct UObject_execVSize_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_VectorVector
// [0xE000423401]  (iNative[14273])
struct UObject_execSubtractEqual_VectorVector_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.AddEqual_VectorVector
// [0xDF00423401]  (iNative[14270])
struct UObject_execAddEqual_VectorVector_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_VectorFloat
// [0xDE00423401]  (iNative[14274])
struct UObject_execDivideEqual_VectorFloat_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_VectorVector
// [0x12900423401]  (iNative[14267])
struct UObject_execMultiplyEqual_VectorVector_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_VectorFloat
// [0xDD00423401]  (iNative[14267])
struct UObject_execMultiplyEqual_VectorFloat_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Cross_VectorVector
// [0xDC00023401]  (iNative[14414])
struct UObject_execCross_VectorVector_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Dot_VectorVector
// [0xDB00023401]  (iNative[14445])
struct UObject_execDot_VectorVector_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0018 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.NotEqual_VectorVector
// [0xDA00023401]  (iNative[14259])
struct UObject_execNotEqual_VectorVector_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_VectorVector
// [0xD900023401]  (iNative[14278])
struct UObject_execEqualEqual_VectorVector_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GreaterGreater_VectorRotator
// [0x11400023401]  (iNative[14281])
struct UObject_execGreaterGreater_VectorRotator_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.LessLess_VectorRotator
// [0x11300023401]  (iNative[14276])
struct UObject_execLessLess_VectorRotator_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FRotator                                    B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Subtract_VectorVector
// [0xD814023401]  (iNative[14271])
struct UObject_execSubtract_VectorVector_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Add_VectorVector
// [0xD714023401]  (iNative[14268])
struct UObject_execAdd_VectorVector_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Divide_VectorFloat
// [0xD614023401]  (iNative[3983])
struct UObject_execDivide_VectorFloat_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_VectorVector
// [0x12814023401]  (iNative[14265])
struct UObject_execMultiply_VectorVector_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x000C (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0018 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_FloatVector
// [0xD514023401]  (iNative[14265])
struct UObject_execMultiply_FloatVector_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     B;                                                // 0x0004 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_VectorFloat
// [0xD414023401]  (iNative[14265])
struct UObject_execMultiply_VectorFloat_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Subtract_PreVector
// [0xD300023411]  (iNative[14271])
struct UObject_execSubtract_PreVector_Params
{
	struct FVector                                     A;                                                // 0x0000 (0x000C) [0x0000000000000080] (CPF_Parm)    
	struct FVector                                     ReturnValue;                                      // 0x000C (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FInterpConstantTo
// [0x00022401]  (iNative[14494])
struct UObject_execFInterpConstantTo_Params
{
	float                                              Current;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Target;                                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpSpeed;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FInterpTo
// [0x00022401]  (iNative[14498])
struct UObject_execFInterpTo_Params
{
	float                                              Current;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Target;                                           // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              DeltaTime;                                        // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              InterpSpeed;                                      // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FInterpEaseInOut
// [0x00022401]  (iNative[14496])
struct UObject_execFInterpEaseInOut_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Alpha;                                            // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Exp;                                              // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FInterpEaseOut
// [0x00022003] 
struct UObject_execFInterpEaseOut_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Alpha;                                            // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Exp;                                              // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FInterpEaseIn
// [0x00022003] 
struct UObject_execFInterpEaseIn_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Alpha;                                            // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Exp;                                              // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FCubicInterp
// [0x00022401]  (iNative[14491])
struct UObject_execFCubicInterp_Params
{
	float                                              P0;                                               // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              T0;                                               // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              P1;                                               // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              T1;                                               // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              A;                                                // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FCeil
// [0x00022401]  (iNative[14488])
struct UObject_execFCeil_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FFloor
// [0x00022401]  (iNative[14492])
struct UObject_execFFloor_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Round
// [0xC714022401]  (iNative[14751])
struct UObject_execRound_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Lerp
// [0xF700022401]  (iNative[14597])
struct UObject_execLerp_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Alpha;                                            // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FClamp
// [0xF614022401]  (iNative[14489])
struct UObject_execFClamp_Params
{
	float                                              V;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              A;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FMax
// [0xF500022401]  (iNative[14501])
struct UObject_execFMax_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FMin
// [0xF400022401]  (iNative[14502])
struct UObject_execFMin_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.FRand
// [0xC314022401]  (iNative[14505])
struct UObject_execFRand_Params
{
	float                                              ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Square
// [0xC200022401]  (iNative[14775])
struct UObject_execSquare_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Sqrt
// [0xC100022401]  (iNative[14774])
struct UObject_execSqrt_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Loge
// [0xC000022401]  (iNative[14611])
struct UObject_execLoge_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Exp
// [0xBF00022401]  (iNative[14486])
struct UObject_execExp_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Atan2
// [0x00022401]  (iNative[14339])
struct UObject_execAtan2_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Atan
// [0xBE00022401]  (iNative[14338])
struct UObject_execAtan_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Tan
// [0xBD00022401]  (iNative[14809])
struct UObject_execTan_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Acos
// [0x00022401]  (iNative[14297])
struct UObject_execAcos_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Cos
// [0xBC00022401]  (iNative[14413])
struct UObject_execCos_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Asin
// [0x00022401]  (iNative[14333])
struct UObject_execAsin_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Sin
// [0xBB00022401]  (iNative[14769])
struct UObject_execSin_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Abs
// [0xBA14022401]  (iNative[14288])
struct UObject_execAbs_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_FloatFloat
// [0xB900423401]  (iNative[14273])
struct UObject_execSubtractEqual_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.AddEqual_FloatFloat
// [0xB800423401]  (iNative[14270])
struct UObject_execAddEqual_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_FloatFloat
// [0xB700423401]  (iNative[14274])
struct UObject_execDivideEqual_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_FloatFloat
// [0xB600423401]  (iNative[14267])
struct UObject_execMultiplyEqual_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.NotEqual_FloatFloat
// [0xB500023401]  (iNative[14259])
struct UObject_execNotEqual_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.ComplementEqual_FloatFloat
// [0xD200023401]  (iNative[14874])
struct UObject_execComplementEqual_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_FloatFloat
// [0xB414023401]  (iNative[14278])
struct UObject_execEqualEqual_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GreaterEqual_FloatFloat
// [0xB300023401]  (iNative[14280])
struct UObject_execGreaterEqual_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.LessEqual_FloatFloat
// [0xB214023401]  (iNative[14277])
struct UObject_execLessEqual_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Greater_FloatFloat
// [0xB100023401]  (iNative[14279])
struct UObject_execGreater_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Less_FloatFloat
// [0xB014023401]  (iNative[14275])
struct UObject_execLess_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Subtract_FloatFloat
// [0xAF14023401]  (iNative[14271])
struct UObject_execSubtract_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Add_FloatFloat
// [0xAE14023401]  (iNative[14268])
struct UObject_execAdd_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Percent_FloatFloat
// [0xAD00023401]  (iNative[14262])
struct UObject_execPercent_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Divide_FloatFloat
// [0xAC14023401]  (iNative[3983])
struct UObject_execDivide_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_FloatFloat
// [0xAB14023401]  (iNative[14265])
struct UObject_execMultiply_FloatFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MultiplyMultiply_FloatFloat
// [0xAA00023401]  (iNative[14266])
struct UObject_execMultiplyMultiply_FloatFloat_Params
{
	float                                              Base;                                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Exp;                                              // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Subtract_PreFloat
// [0xA900023411]  (iNative[14271])
struct UObject_execSubtract_PreFloat_Params
{
	float                                              A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.ToHex
// [0x00022401]  (iNative[14827])
struct UObject_execToHex_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function Core.Object.Clamp
// [0xFB00022401]  (iNative[14399])
struct UObject_execClamp_Params
{
	int32_t                                            V;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            A;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Max
// [0xFA00022401]  (iNative[14628])
struct UObject_execMax_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Min
// [0xF900022401]  (iNative[14635])
struct UObject_execMin_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Rand
// [0xA714022401]  (iNative[14738])
struct UObject_execRand_Params
{
	int32_t                                            Max;                                              // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SubtractSubtract_Int
// [0xA600423401]  (iNative[14272])
struct UObject_execSubtractSubtract_Int_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.AddAdd_Int
// [0xA500423401]  (iNative[14269])
struct UObject_execAddAdd_Int_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SubtractSubtract_PreInt
// [0xA400423411]  (iNative[14272])
struct UObject_execSubtractSubtract_PreInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.AddAdd_PreInt
// [0xA300423411]  (iNative[14269])
struct UObject_execAddAdd_PreInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_IntInt
// [0xA200423401]  (iNative[14273])
struct UObject_execSubtractEqual_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.AddEqual_IntInt
// [0xA100423401]  (iNative[14270])
struct UObject_execAddEqual_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_IntFloat
// [0xA000423401]  (iNative[14274])
struct UObject_execDivideEqual_IntFloat_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_IntFloat
// [0x9F00423401]  (iNative[14267])
struct UObject_execMultiplyEqual_IntFloat_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Or_IntInt
// [0x9E00023401]  (iNative[14871])
struct UObject_execOr_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Xor_IntInt
// [0x9D00023401]  (iNative[14285])
struct UObject_execXor_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.And_IntInt
// [0x9C00023401]  (iNative[14263])
struct UObject_execAnd_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.NotEqual_IntInt
// [0x9B00023401]  (iNative[14259])
struct UObject_execNotEqual_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_IntInt
// [0x9A14023401]  (iNative[14278])
struct UObject_execEqualEqual_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GreaterEqual_IntInt
// [0x9900023401]  (iNative[14280])
struct UObject_execGreaterEqual_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.LessEqual_IntInt
// [0x9814023401]  (iNative[14277])
struct UObject_execLessEqual_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Greater_IntInt
// [0x9700023401]  (iNative[14279])
struct UObject_execGreater_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Less_IntInt
// [0x9614023401]  (iNative[14275])
struct UObject_execLess_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GreaterGreaterGreater_IntInt
// [0xC400023401]  (iNative[14282])
struct UObject_execGreaterGreaterGreater_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.GreaterGreater_IntInt
// [0x9500023401]  (iNative[14281])
struct UObject_execGreaterGreater_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.LessLess_IntInt
// [0x9400023401]  (iNative[14276])
struct UObject_execLessLess_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Subtract_IntInt
// [0x9314023401]  (iNative[14271])
struct UObject_execSubtract_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Add_IntInt
// [0x9214023401]  (iNative[14268])
struct UObject_execAdd_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Percent_IntInt
// [0xFD00023401]  (iNative[14262])
struct UObject_execPercent_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Divide_IntInt
// [0x9114023401]  (iNative[3983])
struct UObject_execDivide_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Multiply_IntInt
// [0x9014023401]  (iNative[14265])
struct UObject_execMultiply_IntInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Subtract_PreInt
// [0x8F00023411]  (iNative[14271])
struct UObject_execSubtract_PreInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Complement_PreInt
// [0x8D00023411]  (iNative[14873])
struct UObject_execComplement_PreInt_Params
{
	int32_t                                            A;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SubtractSubtract_Byte
// [0x8C00423401]  (iNative[14272])
struct UObject_execSubtractSubtract_Byte_Params
{
	uint8_t                                            A;                                                // 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.AddAdd_Byte
// [0x8B00423401]  (iNative[14269])
struct UObject_execAddAdd_Byte_Params
{
	uint8_t                                            A;                                                // 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SubtractSubtract_PreByte
// [0x8A00423411]  (iNative[14272])
struct UObject_execSubtractSubtract_PreByte_Params
{
	uint8_t                                            A;                                                // 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.AddAdd_PreByte
// [0x8900423411]  (iNative[14269])
struct UObject_execAddAdd_PreByte_Params
{
	uint8_t                                            A;                                                // 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.SubtractEqual_ByteByte
// [0x8800423401]  (iNative[14273])
struct UObject_execSubtractEqual_ByteByte_Params
{
	uint8_t                                            A;                                                // 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            B;                                                // 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0002 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.AddEqual_ByteByte
// [0x8700423401]  (iNative[14270])
struct UObject_execAddEqual_ByteByte_Params
{
	uint8_t                                            A;                                                // 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            B;                                                // 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0002 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.DivideEqual_ByteByte
// [0x8600423401]  (iNative[14274])
struct UObject_execDivideEqual_ByteByte_Params
{
	uint8_t                                            A;                                                // 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            B;                                                // 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0002 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_ByteFloat
// [0xC600423401]  (iNative[14267])
struct UObject_execMultiplyEqual_ByteFloat_Params
{
	uint8_t                                            A;                                                // 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              B;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0008 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.MultiplyEqual_ByteByte
// [0x8500423401]  (iNative[14267])
struct UObject_execMultiplyEqual_ByteByte_Params
{
	uint8_t                                            A;                                                // 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint8_t                                            B;                                                // 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0002 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.OrOr_BoolBool
// [0x8400023401]  (iNative[14872])
struct UObject_execOrOr_BoolBool_Params
{
	uint32_t                                           A : 1;                                            // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           B : 1;                                            // 0x0004 (0x0004) [0x0000000000000280] [0x00000001] (CPF_Parm | CPF_SkipParm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.XorXor_BoolBool
// [0x8300023401]  (iNative[14286])
struct UObject_execXorXor_BoolBool_Params
{
	uint32_t                                           A : 1;                                            // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           B : 1;                                            // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.AndAnd_BoolBool
// [0x8200023401]  (iNative[14264])
struct UObject_execAndAnd_BoolBool_Params
{
	uint32_t                                           A : 1;                                            // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           B : 1;                                            // 0x0004 (0x0004) [0x0000000000000280] [0x00000001] (CPF_Parm | CPF_SkipParm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.NotEqual_BoolBool
// [0xF300023401]  (iNative[14259])
struct UObject_execNotEqual_BoolBool_Params
{
	uint32_t                                           A : 1;                                            // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           B : 1;                                            // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.EqualEqual_BoolBool
// [0xF214023401]  (iNative[14278])
struct UObject_execEqualEqual_BoolBool_Params
{
	uint32_t                                           A : 1;                                            // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           B : 1;                                            // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Object.Not_PreBool
// [0x8100023411]  (iNative[14258])
struct UObject_execNot_PreBool_Params
{
	uint32_t                                           A : 1;                                            // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.DistributionVector.GetVectorValue
// [0x00024400]  (iNative[14524])
struct UDistributionVector_execGetVectorValue_Params
{
	float                                              F;                                                // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            LastExtreme;                                      // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	struct FVector                                     ReturnValue;                                      // 0x0008 (0x000C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.DistributionFloat.GetFloatValue
// [0x00024400]  (iNative[14514])
struct UDistributionFloat_execGetFloatValue_Params
{
	float                                              F;                                                // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.HelpCommandlet.Main
// [0x00020C00]  (iNative[832])
struct UHelpCommandlet_eventMain_Params
{
	class FString                                      Params;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function Core.Commandlet.Main
// [0x00020C00]  (iNative[832])
struct UCommandlet_eventMain_Params
{
	class FString                                      Params;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/