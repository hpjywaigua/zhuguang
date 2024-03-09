#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:13 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Parameters
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
struct UDestructibleComponent_SetDestructibleMesh_Params
{
	class UDestructibleMesh*                           NewMesh;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
struct UDestructibleComponent_GetDestructibleMesh_Params
{
	class UDestructibleMesh*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
struct UDestructibleComponent_ApplyRadiusDamage_Params
{
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HurtOrigin;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFullDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ApexDestruction.DestructibleComponent.ApplyDamage
struct UDestructibleComponent_ApplyDamage_Params
{
	float                                              DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpulseDir;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ImpulseStrength;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

