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

// Function CableComponent.CableComponent.SetAttachEndTo
struct UCableComponent_SetAttachEndTo_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentProperty;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CableComponent.CableComponent.GetCableParticleLocations
struct UCableComponent_GetCableParticleLocations_Params
{
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function CableComponent.CableComponent.GetAttachedComponent
struct UCableComponent_GetAttachedComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CableComponent.CableComponent.GetAttachedActor
struct UCableComponent_GetAttachedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

