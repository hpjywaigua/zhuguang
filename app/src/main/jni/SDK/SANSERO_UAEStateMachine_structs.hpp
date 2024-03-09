#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:15 2024
 
namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Script Structs
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// ScriptStruct UAEStateMachine.UAETransitionState
// 0x0010
struct FUAETransitionState
{
	struct FString                                     StateName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct UAEStateMachine.UAEStateMachineTransition
// 0x0028
struct FUAEStateMachineTransition
{
	TArray<struct FUAETransitionState>                 TransiteFromStates;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FUAETransitionState                         TransitToState;                                           // 0x0010(0x0010) (Edit)
	float                                              AutoFiredDelayTime;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoFiredForcedTransit;                                   // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct UAEStateMachine.UAEStatesGather
// 0x0010
struct FUAEStatesGather
{
	TArray<class UUAEState*>                           States;                                                   // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
};

}

