/*
#############################################################################################
# Dishonered (DSDK) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.3
# ========================================================================================= #
# File: GFxUI_parameters.hpp
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

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] 
struct UGFxFSCmdHandler_eventFSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGFxEvent_FSCommand*                         Event;                                            // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Cmd;                                              // 0x0008 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Arg;                                              // 0x0014 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020400]  (iNative[28883])
struct UGFxInteraction_execCloseAllMoviePlayers_Params
{
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400]  (iNative[23398])
struct UGFxInteraction_execNotifyPlayerRemoved_Params
{
	int32_t                                            PlayerIndex;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class ULocalPlayer*                                RemovedPlayer;                                    // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400]  (iNative[23397])
struct UGFxInteraction_execNotifyPlayerAdded_Params
{
	int32_t                                            PlayerIndex;                                      // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class ULocalPlayer*                                AddedPlayer;                                      // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400]  (iNative[13620])
struct UGFxInteraction_execNotifyGameSessionEnded_Params
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400]  (iNative[28932])
struct UGFxInteraction_execGetFocusMovie_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGFxMoviePlayer*                             ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x00020800] 
struct UGFxMoviePlayer_eventOnFocusLost_Params
{
	int32_t                                            LocalPlayerIndex;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x00020800] 
struct UGFxMoviePlayer_eventOnFocusGained_Params
{
	int32_t                                            LocalPlayerIndex;                                 // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// [0x00020002] 
struct UGFxMoviePlayer_execConsoleCommand_Params
{
	class FString                                      Command;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class APlayerController*                        PC;                                               // 0x000C (0x0004) [0x0000000000000000]               
};

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020802] 
struct UGFxMoviePlayer_eventGetPC_Params
{
	class APlayerController*                           ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class ULocalPlayer*                             LocalPlayerOwner;                                 // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020802] 
struct UGFxMoviePlayer_eventGetLP_Params
{
	class ULocalPlayer*                                ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// class UEngine*                                  Eng;                                              // 0x0004 (0x0004) [0x0000000000000000]               
};

// Function GFxUI.GFxMoviePlayer.Init
// [0x00024002] 
struct UGFxMoviePlayer_execInit_Params
{
	class ULocalPlayer*                                LocPlay;                                          // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401]  (iNative[29066])
struct UGFxMoviePlayer_execSetWidgetPathBinding_Params
{
	class UGFxObject*                                  WidgetToBind;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FName                                        Path;                                             // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020800] 
struct UGFxMoviePlayer_eventPostWidgetInit_Params
{
};

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020800] 
struct UGFxMoviePlayer_eventWidgetUnloaded_Params
{
	class FName                                        WidgetName;                                       // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        WidgetPath;                                       // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020800] 
struct UGFxMoviePlayer_eventWidgetInitialized_Params
{
	class FName                                        WidgetName;                                       // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        WidgetPath;                                       // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00080401]  (iNative[28818])
struct UGFxMoviePlayer_execActionScriptObject_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00080401]  (iNative[28821])
struct UGFxMoviePlayer_execActionScriptString_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00080401]  (iNative[28816])
struct UGFxMoviePlayer_execActionScriptFloat_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00080401]  (iNative[28817])
struct UGFxMoviePlayer_execActionScriptInt_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00080401]  (iNative[28822])
struct UGFxMoviePlayer_execActionScriptVoid_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020400]  (iNative[28972])
struct UGFxMoviePlayer_execInvoke_Params
{
	class FString                                      method;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FASValue>                      args;                                             // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      // 0x0018 (0x0018) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401]  (iNative[28819])
struct UGFxMoviePlayer_execActionScriptSetFunction_Params
{
	class UGFxObject*                                  Object;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020400]  (iNative[28888])
struct UGFxMoviePlayer_execCreateArray_Params
{
	class UGFxObject*                                  ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024400]  (iNative[28890])
struct UGFxMoviePlayer_execCreateObject_Params
{
	class FString                                      ASClass;                                          // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  Type;                                             // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020400]  (iNative[29061])
struct UGFxMoviePlayer_execSetVariableStringArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<class FString>                        Arg;                                              // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020400]  (iNative[29056])
struct UGFxMoviePlayer_execSetVariableFloatArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<float>                                Arg;                                              // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020400]  (iNative[29057])
struct UGFxMoviePlayer_execSetVariableIntArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<int32_t>                              Arg;                                              // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020400]  (iNative[29054])
struct UGFxMoviePlayer_execSetVariableArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FASValue>                      Arg;                                              // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420400]  (iNative[28944])
struct UGFxMoviePlayer_execGetVariableStringArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<class FString>                        Arg;                                              // 0x0010 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420400]  (iNative[28939])
struct UGFxMoviePlayer_execGetVariableFloatArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<float>                                Arg;                                              // 0x0010 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420400]  (iNative[28940])
struct UGFxMoviePlayer_execGetVariableIntArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<int32_t>                              Arg;                                              // 0x0010 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420400]  (iNative[28937])
struct UGFxMoviePlayer_execGetVariableArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Index;                                            // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FASValue>                      Arg;                                              // 0x0010 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020400]  (iNative[29059])
struct UGFxMoviePlayer_execSetVariableObject_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  Object;                                           // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020400]  (iNative[29060])
struct UGFxMoviePlayer_execSetVariableString_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      S;                                                // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020400]  (iNative[29058])
struct UGFxMoviePlayer_execSetVariableNumber_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              F;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020400]  (iNative[29055])
struct UGFxMoviePlayer_execSetVariableBool_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           B : 1;                                            // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020400]  (iNative[29053])
struct UGFxMoviePlayer_execSetVariable_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                              // 0x000C (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024400]  (iNative[28942])
struct UGFxMoviePlayer_execGetVariableObject_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  Type;                                             // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020400]  (iNative[28943])
struct UGFxMoviePlayer_execGetVariableString_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020400]  (iNative[28941])
struct UGFxMoviePlayer_execGetVariableNumber_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020400]  (iNative[28938])
struct UGFxMoviePlayer_execGetVariableBool_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020400]  (iNative[28936])
struct UGFxMoviePlayer_execGetVariable_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      // 0x000C (0x0018) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401]  (iNative[20192])
struct UGFxMoviePlayer_execFlushPlayerInput_Params
{
	uint32_t                                           capturekeysonly : 1;                              // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401]  (iNative[28882])
struct UGFxMoviePlayer_execClearFocusIgnoreKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401]  (iNative[28825])
struct UGFxMoviePlayer_execAddFocusIgnoreKey_Params
{
	class FName                                        Key;                                              // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401]  (iNative[28881])
struct UGFxMoviePlayer_execClearCaptureKeys_Params
{
};

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401]  (iNative[28823])
struct UGFxMoviePlayer_execAddCaptureKey_Params
{
	class FName                                        Key;                                              // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401]  (iNative[29045])
struct UGFxMoviePlayer_execSetMovieCanReceiveInput_Params
{
	uint32_t                                           bCanReceiveInput : 1;                             // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401]  (iNative[29044])
struct UGFxMoviePlayer_execSetMovieCanReceiveFocus_Params
{
	uint32_t                                           bCanReceiveFocus : 1;                             // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401]  (iNative[29048])
struct UGFxMoviePlayer_execSetPerspective3D_Params
{
	struct FMatrix                                     matPersp;                                         // 0x0000 (0x0040) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401]  (iNative[29062])
struct UGFxMoviePlayer_execSetView3D_Params
{
	struct FMatrix                                     matView;                                          // 0x0000 (0x0040) [0x0000000000000182] (CPF_Const | CPF_Parm | CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401]  (iNative[28945])
struct UGFxMoviePlayer_execGetVisibleFrameRect_Params
{
	float                                              x0;                                               // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              y0;                                               // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              X1;                                               // 0x0008 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              Y1;                                               // 0x000C (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401]  (iNative[29018])
struct UGFxMoviePlayer_execSetAlignment_Params
{
	uint8_t                                            A;                                                // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401]  (iNative[29064])
struct UGFxMoviePlayer_execSetViewScaleMode_Params
{
	uint8_t                                            SM;                                               // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401]  (iNative[29063])
struct UGFxMoviePlayer_execSetViewport_Params
{
	int32_t                                            X;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Y;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Width;                                            // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Height;                                           // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401]  (iNative[28933])
struct UGFxMoviePlayer_execGetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020400]  (iNative[29049])
struct UGFxMoviePlayer_execSetPriority_Params
{
	uint8_t                                            NewPriority;                                      // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.PublishDataStoreValues
// [0x00020400]  (iNative[29003])
struct UGFxMoviePlayer_execPublishDataStoreValues_Params
{
};

// Function GFxUI.GFxMoviePlayer.RefreshDataStoreBindings
// [0x00020400]  (iNative[29008])
struct UGFxMoviePlayer_execRefreshDataStoreBindings_Params
{
};

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00020400]  (iNative[29040])
struct UGFxMoviePlayer_execSetExternalTexture_Params
{
	class FString                                      Resource;                                         // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTexture*                                    Texture;                                          // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020002] 
struct UGFxMoviePlayer_execSetExternalInterface_Params
{
	class UObject*                                     H;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020400]  (iNative[29052])
struct UGFxMoviePlayer_execSetTimingMode_Params
{
	uint8_t                                            Mode;                                             // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020002] 
struct UGFxMoviePlayer_execSetMovieInfo_Params
{
	class USwfMovie*                                   Data;                                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x00020803] 
struct UGFxMoviePlayer_eventConditionalClearPause_Params
{
	// class ULocalPlayer*                             LP;                                               // 0x0000 (0x0004) [0x0000000000000000]               
};

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] 
struct UGFxMoviePlayer_eventOnClose_Params
{
};

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024400]  (iNative[3944])
struct UGFxMoviePlayer_execClose_Params
{
	uint32_t                                           Unload : 1;                                       // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024400]  (iNative[25736])
struct UGFxMoviePlayer_execSetPause_Params
{
	uint32_t                                           bPausePlayback : 1;                               // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120000] 
struct UGFxMoviePlayer_execOnPostAdvance_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020400]  (iNative[29002])
struct UGFxMoviePlayer_execPostAdvance_Params
{
	float                                              DeltaTime;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020400]  (iNative[28826])
struct UGFxMoviePlayer_execAdvance_Params
{
	float                                              Time;                                             // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00]  (iNative[13805])
struct UGFxMoviePlayer_eventStart_Params
{
	uint32_t                                           StartPaused : 1;                                  // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxMoviePlayer.PreLoad
// [0x00020C00]  (iNative[13804])
struct UGFxMoviePlayer_eventPreLoad_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020800] 
struct UGFxObject_eventWidgetUnloaded_Params
{
	class FName                                        WidgetName;                                       // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        WidgetPath;                                       // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020800] 
struct UGFxObject_eventWidgetInitialized_Params
{
	class FName                                        WidgetName;                                       // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FName                                        WidgetPath;                                       // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Widget;                                           // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401]  (iNative[28855])
struct UGFxObject_execAttachMovie_Params
{
	class FString                                      symbolname;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      instancename;                                     // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Depth;                                            // 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  Type;                                             // 0x001C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x0020 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401]  (iNative[28889])
struct UGFxObject_execCreateEmptyMovieClip_Params
{
	class FString                                      instancename;                                     // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            Depth;                                            // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  Type;                                             // 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401]  (iNative[28956])
struct UGFxObject_execGotoAndStopI_Params
{
	int32_t                                            frame;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401]  (iNative[28955])
struct UGFxObject_execGotoAndStop_Params
{
	class FString                                      frame;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401]  (iNative[28954])
struct UGFxObject_execGotoAndPlayI_Params
{
	int32_t                                            frame;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401]  (iNative[28953])
struct UGFxObject_execGotoAndPlay_Params
{
	class FString                                      frame;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00020401]  (iNative[28815])
struct UGFxObject_execActionScriptArray_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<class UGFxObject*>                    ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00020401]  (iNative[28818])
struct UGFxObject_execActionScriptObject_Params
{
	class FString                                      Path;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptString
// [0x00020401]  (iNative[28821])
struct UGFxObject_execActionScriptString_Params
{
	class FString                                      method;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00020401]  (iNative[28816])
struct UGFxObject_execActionScriptFloat_Params
{
	class FString                                      method;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00020401]  (iNative[28817])
struct UGFxObject_execActionScriptInt_Params
{
	class FString                                      method;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00020401]  (iNative[28822])
struct UGFxObject_execActionScriptVoid_Params
{
	class FString                                      method;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.Invoke
// [0x00020401]  (iNative[28972])
struct UGFxObject_execInvoke_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FASValue>                      args;                                             // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      // 0x0018 (0x0018) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401]  (iNative[28820])
struct UGFxObject_execActionScriptSetFunctionOn_Params
{
	class UGFxObject*                                  Target;                                           // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401]  (iNative[28819])
struct UGFxObject_execActionScriptSetFunction_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401]  (iNative[29034])
struct UGFxObject_execSetElementMemberString_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      S;                                                // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401]  (iNative[29032])
struct UGFxObject_execSetElementMemberFloat_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              F;                                                // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401]  (iNative[29031])
struct UGFxObject_execSetElementMemberBool_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           B : 1;                                            // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401]  (iNative[29033])
struct UGFxObject_execSetElementMemberObject_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  val;                                              // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401]  (iNative[29030])
struct UGFxObject_execSetElementMember_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                              // 0x0010 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401]  (iNative[28927])
struct UGFxObject_execGetElementMemberString_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x0010 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401]  (iNative[28925])
struct UGFxObject_execGetElementMemberFloat_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401]  (iNative[28924])
struct UGFxObject_execGetElementMemberBool_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401]  (iNative[28926])
struct UGFxObject_execGetElementMemberObject_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  Type;                                             // 0x0010 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x0014 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401]  (iNative[28923])
struct UGFxObject_execGetElementMember_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      // 0x0010 (0x0018) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401]  (iNative[29026])
struct UGFxObject_execSetElementColorTransform_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASColorTransform                           cxform;                                           // 0x0004 (0x0020) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401]  (iNative[29036])
struct UGFxObject_execSetElementPosition_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              X;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Y;                                                // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401]  (iNative[29038])
struct UGFxObject_execSetElementVisible_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           Visible : 1;                                      // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401]  (iNative[29028])
struct UGFxObject_execSetElementDisplayMatrix_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FMatrix                                     M;                                                // 0x0010 (0x0040) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401]  (iNative[29027])
struct UGFxObject_execSetElementDisplayInfo_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASDisplayInfo                              D;                                                // 0x0004 (0x002C) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401]  (iNative[28921])
struct UGFxObject_execGetElementDisplayMatrix_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FMatrix                                     ReturnValue;                                      // 0x0010 (0x0040) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401]  (iNative[28920])
struct UGFxObject_execGetElementDisplayInfo_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASDisplayInfo                              ReturnValue;                                      // 0x0004 (0x002C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.SetElementString
// [0x00020401]  (iNative[29037])
struct UGFxObject_execSetElementString_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      S;                                                // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401]  (iNative[29029])
struct UGFxObject_execSetElementFloat_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              F;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401]  (iNative[29025])
struct UGFxObject_execSetElementBool_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           B : 1;                                            // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401]  (iNative[29035])
struct UGFxObject_execSetElementObject_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  val;                                              // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetElement
// [0x00020401]  (iNative[29024])
struct UGFxObject_execSetElement_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASValue                                    Arg;                                              // 0x0004 (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementString
// [0x00020401]  (iNative[28929])
struct UGFxObject_execGetElementString_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401]  (iNative[28922])
struct UGFxObject_execGetElementFloat_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              ReturnValue;                                      // 0x0004 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401]  (iNative[28919])
struct UGFxObject_execGetElementBool_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401]  (iNative[28928])
struct UGFxObject_execGetElementObject_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGFxObject*                                  Type;                                             // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x0008 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetElement
// [0x00020401]  (iNative[28918])
struct UGFxObject_execGetElement_Params
{
	int32_t                                            Index;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	struct FASValue                                    ReturnValue;                                      // 0x0004 (0x0018) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetText
// [0x00024401]  (iNative[29051])
struct UGFxObject_execSetText_Params
{
	class FString                                      Text;                                             // 0x0000 (0x000C) [0x0000000000400880] (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
	class UTranslationContext*                         InContext;                                        // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxObject.GetText
// [0x00020401]  (iNative[28935])
struct UGFxObject_execGetText_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.SetVisible
// [0x00020401]  (iNative[29065])
struct UGFxObject_execSetVisible_Params
{
	uint32_t                                           Visible : 1;                                      // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401]  (iNative[29023])
struct UGFxObject_execSetDisplayMatrix3D_Params
{
	struct FMatrix                                     M;                                                // 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401]  (iNative[29022])
struct UGFxObject_execSetDisplayMatrix_Params
{
	struct FMatrix                                     M;                                                // 0x0000 (0x0040) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401]  (iNative[29020])
struct UGFxObject_execSetColorTransform_Params
{
	struct FASColorTransform                           cxform;                                           // 0x0000 (0x0020) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetPosition
// [0x00020401]  (iNative[25743])
struct UGFxObject_execSetPosition_Params
{
	float                                              X;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              Y;                                                // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00020401]  (iNative[29021])
struct UGFxObject_execSetDisplayInfo_Params
{
	struct FASDisplayInfo                              D;                                                // 0x0000 (0x002C) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401]  (iNative[28917])
struct UGFxObject_execGetDisplayMatrix_Params
{
	struct FMatrix                                     ReturnValue;                                      // 0x0000 (0x0040) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401]  (iNative[28915])
struct UGFxObject_execGetColorTransform_Params
{
	struct FASColorTransform                           ReturnValue;                                      // 0x0000 (0x0020) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetPosition
// [0x00420401]  (iNative[20690])
struct UGFxObject_execGetPosition_Params
{
	float                                              X;                                                // 0x0000 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	float                                              Y;                                                // 0x0004 (0x0004) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	bool                                               ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00020401]  (iNative[28916])
struct UGFxObject_execGetDisplayInfo_Params
{
	struct FASDisplayInfo                              ReturnValue;                                      // 0x0000 (0x002C) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.SetFunction
// [0x00020401]  (iNative[29042])
struct UGFxObject_execSetFunction_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UObject*                                     context;                                          // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FName                                        fname;                                            // 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetObject
// [0x00020401]  (iNative[29047])
struct UGFxObject_execSetObject_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  val;                                              // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetString
// [0x00024401]  (iNative[29050])
struct UGFxObject_execSetString_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      S;                                                // 0x000C (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UTranslationContext*                         InContext;                                        // 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxObject.SetFloat
// [0x00020401]  (iNative[29041])
struct UGFxObject_execSetFloat_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              F;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxObject.SetBool
// [0x00020401]  (iNative[29019])
struct UGFxObject_execSetBool_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           B : 1;                                            // 0x000C (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function GFxUI.GFxObject.Set
// [0x00020401]  (iNative[25562])
struct UGFxObject_execSet_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    Arg;                                              // 0x000C (0x0018) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetObject
// [0x00024401]  (iNative[28934])
struct UGFxObject_execGetObjectW_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  Type;                                             // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class UGFxObject*                                  ReturnValue;                                      // 0x0010 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetString
// [0x00020401]  (iNative[20763])
struct UGFxObject_execGetString_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      ReturnValue;                                      // 0x000C (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxObject.GetFloat
// [0x00020401]  (iNative[28931])
struct UGFxObject_execGetFloat_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	float                                              ReturnValue;                                      // 0x000C (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.GetBool
// [0x00020401]  (iNative[28914])
struct UGFxObject_execGetBool_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxObject.Get
// [0x00020401]  (iNative[28913])
struct UGFxObject_execGet_Params
{
	class FString                                      Member;                                           // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FASValue                                    ReturnValue;                                      // 0x000C (0x0018) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] 
struct UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] 
struct UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] 
struct UGFxAction_Invoke_eventIsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] 
struct UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] 
struct UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Params
{
	bool                                               ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00]  (iNative[13796])
struct UGFxFSCmdHandler_Kismet_eventFSCommand_Params
{
	class UGFxMoviePlayer*                             Movie;                                            // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class UGFxEvent_FSCommand*                         Event;                                            // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Cmd;                                              // 0x0008 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Arg;                                              // 0x0014 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	bool                                               ReturnValue : 1;                                  // 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue
// [0x00424400]  (iNative[25336])
struct UGFxDataStoreSubscriber_execSaveSubscriberValue_Params
{
	class TArray<class UUIDataStore*>                  out_BoundDataStores;                              // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            BindingIndex;                                     // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores
// [0x00020401]  (iNative[18109])
struct UGFxDataStoreSubscriber_execClearBoundDataStores_Params
{
};

// Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores
// [0x00420401]  (iNative[20519])
struct UGFxDataStoreSubscriber_execGetBoundDataStores_Params
{
	class TArray<class UUIDataStore*>                  out_BoundDataStores;                              // 0x0000 (0x000C) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated
// [0x00020401]  (iNative[23382])
struct UGFxDataStoreSubscriber_execNotifyDataStoreValueUpdated_Params
{
	class UUIDataStore*                                SourceDataStore;                                  // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bValuesInvalidated : 1;                           // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FName                                        PropertyTag;                                      // 0x0008 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class UUIDataProvider*                             SourceProvider;                                   // 0x0010 (0x0004) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            ArrayIndex;                                       // 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue
// [0x00024401]  (iNative[25013])
struct UGFxDataStoreSubscriber_execRefreshSubscriberValue_Params
{
	int32_t                                            BindingIndex;                                     // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	bool                                               ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding
// [0x00024401]  (iNative[20555])
struct UGFxDataStoreSubscriber_execGetDataStoreBinding_Params
{
	int32_t                                            BindingIndex;                                     // 0x0000 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	class FString                                      ReturnValue;                                      // 0x0004 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding
// [0x00024401]  (iNative[25631])
struct UGFxDataStoreSubscriber_execSetDataStoreBinding_Params
{
	class FString                                      MarkupText;                                       // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            BindingIndex;                                     // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
};

// Function GFxUI.GFxDataStoreSubscriber.PublishValues
// [0x00020401]  (iNative[29004])
struct UGFxDataStoreSubscriber_execPublishValues_Params
{
};

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// [0x00040003] 
struct UGFxClikWidget_execASRemoveAllEventListeners_Params
{
	class FString                                      Event;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x00040003] 
struct UGFxClikWidget_execASAddEventListener_Params
{
	class FString                                      Type;                                             // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class UGFxObject*                                  O;                                                // 0x000C (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      func;                                             // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.SetListener
// [0x00040003] 
struct UGFxClikWidget_execSetListener_Params
{
	class UGFxObject*                                  O;                                                // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Member;                                           // 0x0004 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FScriptDelegate                             listener;                                         // 0x0010 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x00040003] 
struct UGFxClikWidget_execGetEventStringFromTypename_Params
{
	class FName                                        Typename;                                         // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0008 (0x000C) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
	// class FString                                   TypeString;                                       // 0x0014 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// [0x00020002] 
struct UGFxClikWidget_execRemoveAllEventListeners_Params
{
	class FString                                      Event;                                            // 0x0000 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x00020002] 
struct UGFxClikWidget_execAddEventListener_Params
{
	class FName                                        Type;                                             // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             listener;                                         // 0x0008 (0x000C) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// class UGFxObject*                               O;                                                // 0x0014 (0x0004) [0x0000000000000000]               
	// class FString                                   TypeString;                                       // 0x0018 (0x000C) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120000] 
struct UGFxClikWidget_execEventListener_Params
{
	struct FEventData                                  Data;                                             // 0x0000 (0x0024) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/


