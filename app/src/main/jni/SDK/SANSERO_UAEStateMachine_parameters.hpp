#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Parameters
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function UAEStateMachine.UAEStateMachineComponent.Start
struct UUAEStateMachineComponent_Start_Params
{
};

// Function UAEStateMachine.UAEStateMachineComponent.SetTag
struct UUAEStateMachineComponent_SetTag_Params
{
	struct FString                                     InTag;                                                    // (Parm, ZeroConstructor)
};

// DelegateFunction UAEStateMachine.UAEStateMachineComponent.OnTransientEvent__DelegateSignature
struct UUAEStateMachineComponent_OnTransientEvent__DelegateSignature_Params
{
	struct FString                                     TransientEvent;                                           // (Parm, ZeroConstructor)
	struct FString                                     CurrentState;                                             // (Parm, ZeroConstructor)
	struct FString                                     TransientToState;                                         // (Parm, ZeroConstructor)
};

// Function UAEStateMachine.UAEStateMachineComponent.IsInState
struct UUAEStateMachineComponent_IsInState_Params
{
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAEStateMachine.UAEStateMachineComponent.GetCurrentState
struct UUAEStateMachineComponent_GetCurrentState_Params
{
	class UUAEState*                                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UAEStateMachine.UAEStateMachineComponent.ForceDoEvent
struct UUAEStateMachineComponent_ForceDoEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function UAEStateMachine.UAEStateMachineComponent.Finish
struct UUAEStateMachineComponent_Finish_Params
{
};

// Function UAEStateMachine.UAEStateMachineComponent.DoEvent
struct UUAEStateMachineComponent_DoEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
};

// Function UAEStateMachine.UAEStateMachineComponent.CanDoEvent
struct UUAEStateMachineComponent_CanDoEvent_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAEStateMachine.UAEState.Update
struct UUAEState_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAEStateMachine.UAEState.OnLeave
struct UUAEState_OnLeave_Params
{
	class UUAEState*                                   TranitToState;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UAEStateMachine.UAEState.OnEnter
struct UUAEState_OnEnter_Params
{
	class UUAEState*                                   PrevState;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

