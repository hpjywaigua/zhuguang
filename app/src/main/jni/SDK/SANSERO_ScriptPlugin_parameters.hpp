#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Parameters
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function ScriptPlugin.ScriptContext.CallScriptFunction
struct UScriptContext_CallScriptFunction_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptContextComponent.PushScriptArrayIndexData
struct UScriptContextComponent_PushScriptArrayIndexData_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScriptPlugin.ScriptContextComponent.PushOneScriptPropertyValues
struct UScriptContextComponent_PushOneScriptPropertyValues_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptContextComponent.PushAllScriptPropertyValues
struct UScriptContextComponent_PushAllScriptPropertyValues_Params
{
};

// Function ScriptPlugin.ScriptContextComponent.FetchScriptArrayIndexData
struct UScriptContextComponent_FetchScriptArrayIndexData_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScriptPlugin.ScriptContextComponent.FetchOneScriptPropertyValues
struct UScriptContextComponent_FetchOneScriptPropertyValues_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptContextComponent.FetchAllScriptPropertyValues
struct UScriptContextComponent_FetchAllScriptPropertyValues_Params
{
};

// Function ScriptPlugin.ScriptContextComponent.CallScriptFunctionWithoutFetch
struct UScriptContextComponent_CallScriptFunctionWithoutFetch_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptContextComponent.CallScriptFunction
struct UScriptContextComponent_CallScriptFunction_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.ScriptHelperNetInterface.SendPacket_LuaState
struct UScriptHelperNetInterface_SendPacket_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScriptPlugin.ScriptHelperNetInterface.Disconnect
struct UScriptHelperNetInterface_Disconnect_Params
{
	TScriptInterface<class UNetInterface>              NetInterface;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScriptPlugin.ScriptHelperNetInterface.Connect
struct UScriptHelperNetInterface_Connect_Params
{
	TScriptInterface<class UNetInterface>              NetInterface;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScriptPlugin.ScriptPluginComponent.CallScriptFunction
struct UScriptPluginComponent_CallScriptFunction_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScriptPlugin.ScriptTestActor.TestFunction
struct AScriptTestActor_TestFunction_Params
{
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InFactor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiply;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScriptPlugin.LuaClassBaseObj.ItsATest
struct ALuaClassBaseObj_ItsATest_Params
{
	struct FPlayerInfo                                 Player1;                                                  // (Parm)
	TArray<int>                                        nums;                                                     // (Parm, ZeroConstructor)
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Q;                                                        // (Parm, ZeroConstructor)
	TArray<struct FPlayerInfo>                         Player2;                                                  // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ScriptPlugin.LuaClassBaseObj.HandleUIMessage
struct ALuaClassBaseObj_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function ScriptPlugin.LuaClassBaseObj.GetGameStatus
struct ALuaClassBaseObj_GetGameStatus_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

