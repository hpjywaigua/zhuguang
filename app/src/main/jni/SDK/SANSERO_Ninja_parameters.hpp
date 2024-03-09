#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:14 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Parameters
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function Ninja.BattleFieldCircle.StartMove
struct ABattleFieldCircle_StartMove_Params
{
	struct FVector                                     StartCircle;                                              // (Parm, IsPlainOldData)
	struct FVector                                     EndCircle;                                                // (Parm, IsPlainOldData)
	float                                              MoveTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ninja.BattleFieldCircle.SetCircle
struct ABattleFieldCircle_SetCircle_Params
{
	struct FVector                                     circle;                                                   // (Parm, IsPlainOldData)
};

// Function Ninja.BattleFieldCircle.OnRep_CircleMoveInfo
struct ABattleFieldCircle_OnRep_CircleMoveInfo_Params
{
};

// Function Ninja.BattleFieldCircle.IsInBlueCircle
struct ABattleFieldCircle_IsInBlueCircle_Params
{
	class AActor*                                      uActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ninja.BattleFieldCircle.InitCircle
struct ABattleFieldCircle_InitCircle_Params
{
	struct FVector                                     InitCircle;                                               // (Parm, IsPlainOldData)
};

// Function Ninja.BattleFieldCircle.GetAllPlayerInCircle
struct ABattleFieldCircle_GetAllPlayerInCircle_Params
{
	TArray<uint32_t>                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Ninja.BattleFieldCircle.CircleMove
struct ABattleFieldCircle_CircleMove_Params
{
};

// Function Ninja.BattleFieldCircle.CheckInCircle
struct ABattleFieldCircle_CheckInCircle_Params
{
};

}

