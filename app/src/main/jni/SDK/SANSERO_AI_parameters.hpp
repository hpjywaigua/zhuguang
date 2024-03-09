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

// Function AI.AESpawner.SwitchTeamAI
struct AAESpawner_SwitchTeamAI_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.OnUnitTakeDamageEvent
struct AAESpawner_OnUnitTakeDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.OnUnitSpawned
struct AAESpawner_OnUnitSpawned_Params
{
	class AActor*                                      NewUnit;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSTSpawnParam                               SpawnParam;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class ASTSpawnerBase*                              Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.OnSpawnTimingRipe
struct AAESpawner_OnSpawnTimingRipe_Params
{
	bool                                               IsRipe;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.OnOwnedMobDead
struct AAESpawner_OnOwnedMobDead_Params
{
	class ASTExtraSimpleCharacter*                     DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.OnOwnedFakePlayerDead
struct AAESpawner_OnOwnedFakePlayerDead_Params
{
	class ASTExtraBaseCharacter*                       DeadCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  KillingHitInfo;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     KillingHitImpulseDir;                                     // (Parm, IsPlainOldData)
	class UClass*                                      KillingHitDamageType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawner.GetSpeciesCategory
struct AAESpawner_GetSpeciesCategory_Params
{
	TEnumAsByte<EBotCategray>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawner.GetSpawnerTeamID
struct AAESpawner_GetSpawnerTeamID_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawner.GetSpawnerGroupID
struct AAESpawner_GetSpawnerGroupID_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawner.GenerateParamID
struct AAESpawner_GenerateParamID_Params
{
	int                                                ConfigId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BaseParamID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSTSpawnParam                               SpawnParam;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawner.DeactivateSpawner
struct AAESpawner_DeactivateSpawner_Params
{
};

// Function AI.AESpawner.BPOnUnitSpawned
struct AAESpawner_BPOnUnitSpawned_Params
{
	class APawn*                                       AIPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ConfigId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSTSpawnParam                               SpawnParam;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AI.AESpawner.ActivateSpawner
struct AAESpawner_ActivateSpawner_Params
{
};

// Function AI.AESpawnSubsystem.SpawnUnit
struct UAESpawnSubsystem_SpawnUnit_Params
{
	struct FSTSpawnParam                               SpawnParam;                                               // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawnSubsystem.RegisterSpawner
struct UAESpawnSubsystem_RegisterSpawner_Params
{
	class ASTSpawnerBase*                              Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawnSubsystem.PreCheck
struct UAESpawnSubsystem_PreCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawnSubsystem.ModifyThreshold
struct UAESpawnSubsystem_ModifyThreshold_Params
{
	TEnumAsByte<EBotCategray>                          Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawnSubsystem.GetUnitsNumByCategory
struct UAESpawnSubsystem_GetUnitsNumByCategory_Params
{
	TEnumAsByte<EBotCategray>                          Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawnSubsystem.GetUnitConfigID
struct UAESpawnSubsystem_GetUnitConfigID_Params
{
	class AActor*                                      Unit;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AESpawnSubsystem.GetGroupedSpawners
struct UAESpawnSubsystem_GetGroupedSpawners_Params
{
	int                                                InGroupID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ASTSpawnerBase*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AESpawnSubsystem.EnQueue
struct UAESpawnSubsystem_EnQueue_Params
{
	struct FSTSpawnParam                               SpawnParam;                                               // (Parm, OutParm)
	class ASTSpawnerBase*                              Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AESpawnSubsystem.CleanQueue
struct UAESpawnSubsystem_CleanQueue_Params
{
};

// Function AI.AESpawnSubsystem.CheckCategoryLimit
struct UAESpawnSubsystem_CheckCategoryLimit_Params
{
	class ASTSpawnerBase*                              Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AvailableBalance;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.UseItem
struct UAIActionExecutionComponent_UseItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.SwapAttachmentItem
struct UAIActionExecutionComponent_SwapAttachmentItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SourceWeaponSlot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetWeaponSlot;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.SetGrenadeLastSelectID
struct UAIActionExecutionComponent_SetGrenadeLastSelectID_Params
{
	int                                                WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.SetFocusRotation
struct UAIActionExecutionComponent_SetFocusRotation_Params
{
	float                                              InPitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InYaw;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRoll;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.SetCurShootingPose
struct UAIActionExecutionComponent_SetCurShootingPose_Params
{
};

// Function AI.AIActionExecutionComponent.RescueTarget
struct UAIActionExecutionComponent_RescueTarget_Params
{
	class ASTExtraBaseCharacter*                       RescueCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.OpenDoor
struct UAIActionExecutionComponent_OpenDoor_Params
{
};

// Function AI.AIActionExecutionComponent.OnFakePlayerRespawn
struct UAIActionExecutionComponent_OnFakePlayerRespawn_Params
{
};

// Function AI.AIActionExecutionComponent.IsValid
struct UAIActionExecutionComponent_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.IsFreeCamera
struct UAIActionExecutionComponent_IsFreeCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.GetPickActorWithID
struct UAIActionExecutionComponent_GetPickActorWithID_Params
{
	int                                                UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APickUpWrapperActor*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.GetOwnerBaseCharacter
struct UAIActionExecutionComponent_GetOwnerBaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.GetBackpackComponent
struct UAIActionExecutionComponent_GetBackpackComponent_Params
{
	class UBackpackComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.DropItem
struct UAIActionExecutionComponent_DropItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.DoActionMove
struct UAIActionExecutionComponent_DoActionMove_Params
{
	bool                                               IsRun;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectionX;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectionY;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectionZ;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.DoActionFreeCamera
struct UAIActionExecutionComponent_DoActionFreeCamera_Params
{
	bool                                               IsEnter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InYaw;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRoll;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.DisuseItem
struct UAIActionExecutionComponent_DisuseItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIActionExecutionComponent.CloseDoor
struct UAIActionExecutionComponent_CloseDoor_Params
{
};

// Function AI.AIBasicStateInfoComponent.OnItemStateChanged
struct UAIBasicStateInfoComponent_OnItemStateChanged_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function AI.AIBasicStateInfoComponent.GetTLogAIShootInfo
struct UAIBasicStateInfoComponent_GetTLogAIShootInfo_Params
{
	struct FTLogAIShootInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIBasicStateInfoComponent.GetPickActorWithID
struct UAIBasicStateInfoComponent_GetPickActorWithID_Params
{
	int                                                UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APickUpWrapperActor*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_VehicleBase.Suicide
struct UAIBehaviorAdapter_VehicleBase_Suicide_Params
{
};

// Function AI.AIBehaviorAdapter_VehicleBase.RPC_Client_SetServiceDebugInfo
struct UAIBehaviorAdapter_VehicleBase_RPC_Client_SetServiceDebugInfo_Params
{
	struct FString                                     Info;                                                     // (Parm, ZeroConstructor)
};

// Function AI.AIBehaviorAdapter_VehicleBase.OnInit
struct UAIBehaviorAdapter_VehicleBase_OnInit_Params
{
};

// Function AI.AIBehaviorAdapter_VehicleBase.OnDeath
struct UAIBehaviorAdapter_VehicleBase_OnDeath_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_VehicleBase.LuaCalculateHitRate
struct UAIBehaviorAdapter_VehicleBase_LuaCalculateHitRate_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseHitRate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_VehicleBase.IsInBehaviorRegion
struct UAIBehaviorAdapter_VehicleBase_IsInBehaviorRegion_Params
{
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_VehicleBase.IsAlive
struct UAIBehaviorAdapter_VehicleBase_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleUnderAttack
struct UAIBehaviorAdapter_VehicleBase_HandleOnVehicleUnderAttack_Params
{
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleHealthStateChanged
struct UAIBehaviorAdapter_VehicleBase_HandleOnVehicleHealthStateChanged_Params
{
	ESTExtraVehicleHealthState                         InVehicleHealthState;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_VehicleBase.HandleOnMeshHit
struct UAIBehaviorAdapter_VehicleBase_HandleOnMeshHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_VehicleBase.BroadcastServiceDebugInfo
struct UAIBehaviorAdapter_VehicleBase_BroadcastServiceDebugInfo_Params
{
};

// Function AI.AIBehaviorAdapter_VehicleBase.BPReceiveDamage
struct UAIBehaviorAdapter_VehicleBase_BPReceiveDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDamageType>                           DamageEventType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_Tank.UpdateTurretAimingTarget
struct UAIBehaviorAdapter_Tank_UpdateTurretAimingTarget_Params
{
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FailedWhenCollided;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_Tank.ShootTurret
struct UAIBehaviorAdapter_Tank_ShootTurret_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_Tank.ShootMachineGun
struct UAIBehaviorAdapter_Tank_ShootMachineGun_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_Tank.OnInit
struct UAIBehaviorAdapter_Tank_OnInit_Params
{
};

// Function AI.AIBehaviorAdapter_Tank.OnDeath
struct UAIBehaviorAdapter_Tank_OnDeath_Params
{
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_Tank.IsTurretLockTarget
struct UAIBehaviorAdapter_Tank_IsTurretLockTarget_Params
{
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LockRadius;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_Tank.IsAlive
struct UAIBehaviorAdapter_Tank_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_Tank.HandleOnVehicleHealthStateChanged
struct UAIBehaviorAdapter_Tank_HandleOnVehicleHealthStateChanged_Params
{
	ESTExtraVehicleHealthState                         InVehicleHealthState;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIBehaviorAdapter_Tank.BroadcastTankShootWeapon
struct UAIBehaviorAdapter_Tank_BroadcastTankShootWeapon_Params
{
	bool                                               IsTurret;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AISoundCollectionComponent.OnCollectionHearSound
struct UAISoundCollectionComponent_OnCollectionHearSound_Params
{
	ESoundType                                         soundType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InPos;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      InSourceActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AISoundCollectionComponent.OnAISoundManagerHear
struct UAISoundCollectionComponent_OnAISoundManagerHear_Params
{
	class AActor*                                      InTargetActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	ESoundType                                         soundType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InPos;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      InSourceActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AISoundCollectionComponent.GetCollectSoundInfo
struct UAISoundCollectionComponent_GetCollectSoundInfo_Params
{
	TArray<struct FSoundState>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.SetIsRequestComprehensiveData
struct UAIStateInfoComponent_SetIsRequestComprehensiveData_Params
{
	bool                                               InIsRequestComprehensiveData;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.QueryItemStates
struct UAIStateInfoComponent_QueryItemStates_Params
{
	int                                                MaxBoxNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxItemNum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AirDropBoxRangeInner;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AirDropBoxRangeOuter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeathBoxRange;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PickUpWrapperRange;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FindBuildingRange;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsUseItemSpotLoc;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxTreasureChestNum;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TreasureChestRange;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxWeedNum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WeedRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemStateData>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.OnVehicleDamageInfo
struct UAIStateInfoComponent_OnVehicleDamageInfo_Params
{
	class AController*                                 InstigatorController;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 VictimController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageTypeId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFatalHealthCost;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      VictimVehicle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.OnFakePlayerRespawn
struct UAIStateInfoComponent_OnFakePlayerRespawn_Params
{
};

// Function AI.AIStateInfoComponent.OnAIStateRequestEnd
struct UAIStateInfoComponent_OnAIStateRequestEnd_Params
{
};

// Function AI.AIStateInfoComponent.IsValid
struct UAIStateInfoComponent_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.IsAvailableBackpacItemType
struct UAIStateInfoComponent_IsAvailableBackpacItemType_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.HasPlayerAround
struct UAIStateInfoComponent_HasPlayerAround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.GetViewForwardVector
struct UAIStateInfoComponent_GetViewForwardVector_Params
{
	class ACharacter*                                  InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.GetVehicleStatus
struct UAIStateInfoComponent_GetVehicleStatus_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraBaseCharacter*                       PawnInCar;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVehicleState                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetTLogAIShootInfo
struct UAIStateInfoComponent_GetTLogAIShootInfo_Params
{
	struct FTLogAIShootInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetTeammatePlayerStateInfo
struct UAIStateInfoComponent_GetTeammatePlayerStateInfo_Params
{
	class ASTExtraBaseCharacter*                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             InWhiteList;                                              // (Parm, ZeroConstructor)
	struct FAIStateInfo                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetSoundInfo
struct UAIStateInfoComponent_GetSoundInfo_Params
{
	TArray<struct FSoundState>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetProgressBarState
struct UAIStateInfoComponent_GetProgressBarState_Params
{
	struct FProgressBarState                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetPlayerInteractInfo
struct UAIStateInfoComponent_GetPlayerInteractInfo_Params
{
	struct FAIPlayerInteractInfo                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetOwnerBaseCharacter
struct UAIStateInfoComponent_GetOwnerBaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.GetObstaclesState
struct UAIStateInfoComponent_GetObstaclesState_Params
{
	class ASTExtraBaseCharacter*                       InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FObstacleState>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetNearbyVehicles
struct UAIStateInfoComponent_GetNearbyVehicles_Params
{
	class ASTExtraBaseCharacter*                       InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVehicleState>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetGlobalGameState
struct UAIStateInfoComponent_GetGlobalGameState_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateLastCache;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGlobalGameState                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetFrameNo
struct UAIStateInfoComponent_GetFrameNo_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponent.GetDoorsState
struct UAIStateInfoComponent_GetDoorsState_Params
{
	float                                              Range;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNum;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDoorState>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetDiffGlobalGameStateGeneral
struct UAIStateInfoComponent_GetDiffGlobalGameStateGeneral_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDiffGlobalGameStateGeneral                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetDiffGlobalGameState
struct UAIStateInfoComponent_GetDiffGlobalGameState_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDiffGlobalGameState                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetDiffAllPlayerStateInfoGeneral
struct UAIStateInfoComponent_GetDiffAllPlayerStateInfoGeneral_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedDebugInfo;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDiffAllPlayerInfoGeneral                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetDiffAllPlayerStateInfoCCS
struct UAIStateInfoComponent_GetDiffAllPlayerStateInfoCCS_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDiff;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSeparate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDiffAllPlayerInfo                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetDiffAIStateInfoGeneral
struct UAIStateInfoComponent_GetDiffAIStateInfoGeneral_Params
{
	struct FDiffAIStateInfoGeneral                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetDiffAIStateInfo
struct UAIStateInfoComponent_GetDiffAIStateInfo_Params
{
	struct FDiffAIStateInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetDamageSources
struct UAIStateInfoComponent_GetDamageSources_Params
{
	struct FAIDamageSources                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetCameraState
struct UAIStateInfoComponent_GetCameraState_Params
{
	class ASTExtraBaseCharacter*                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCameraState                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetAllPlayerStateInfo
struct UAIStateInfoComponent_GetAllPlayerStateInfo_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedUpdateCache;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIStateInfo>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetAIStateInfoInternal
struct UAIStateInfoComponent_GetAIStateInfoInternal_Params
{
	struct FAIStateInfo                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetAIStateInfo
struct UAIStateInfoComponent_GetAIStateInfo_Params
{
	struct FAIStateInfo                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetAIPlayerBackpackItems
struct UAIStateInfoComponent_GetAIPlayerBackpackItems_Params
{
	TArray<struct FAIBackpackItem>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.GetAINearbyThrownState
struct UAIStateInfoComponent_GetAINearbyThrownState_Params
{
	class ASTExtraBaseCharacter*                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCheckAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSmokeRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAINearbyThrown>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponent.ClearVehicleDamageInfo
struct UAIStateInfoComponent_ClearVehicleDamageInfo_Params
{
};

// Function AI.AIStateInfoComponent.ClearPlayerInteractInfo
struct UAIStateInfoComponent_ClearPlayerInteractInfo_Params
{
};

// Function AI.AIStateInfoComponent.ClearDamageSources
struct UAIStateInfoComponent_ClearDamageSources_Params
{
};

// Function AI.AIStateInfoComponentBase.SetIsRequestComprehensiveData
struct UAIStateInfoComponentBase_SetIsRequestComprehensiveData_Params
{
	bool                                               InIsRequestComprehensiveData;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIStateInfoComponentBase.QueryItemStates
struct UAIStateInfoComponentBase_QueryItemStates_Params
{
	int                                                MaxBoxNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxItemNum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AirDropBoxRangeInner;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AirDropBoxRangeOuter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeathBoxRange;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PickUpWrapperRange;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FindBuildingRange;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsUseItemSpotLoc;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxTreasureChestNum;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TreasureChestRange;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxWeedNum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WeedRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemStateData>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponentBase.OnVehicleDamageInfo
struct UAIStateInfoComponentBase_OnVehicleDamageInfo_Params
{
	class AController*                                 InstigatorController;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 VictimController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageTypeId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFatalHealthCost;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      VictimVehicle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.AIStateInfoComponentBase.OnFakePlayerRespawn
struct UAIStateInfoComponentBase_OnFakePlayerRespawn_Params
{
};

// Function AI.AIStateInfoComponentBase.OnAIStateRequestEnd
struct UAIStateInfoComponentBase_OnAIStateRequestEnd_Params
{
};

// Function AI.AIStateInfoComponentBase.IsValid
struct UAIStateInfoComponentBase_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponentBase.IsAvailableBackpackItemType
struct UAIStateInfoComponentBase_IsAvailableBackpackItemType_Params
{
	struct FItemDefineID                               DefineID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponentBase.HasPlayerAround
struct UAIStateInfoComponentBase_HasPlayerAround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponentBase.GetViewForwardVector
struct UAIStateInfoComponentBase_GetViewForwardVector_Params
{
	class ACharacter*                                  InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponentBase.GetTeammatePlayerStateInfo
struct UAIStateInfoComponentBase_GetTeammatePlayerStateInfo_Params
{
	class ASTExtraBaseCharacter*                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             InWhiteList;                                              // (Parm, ZeroConstructor)
	struct FAIStateInfo                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponentBase.GetSoundInfo
struct UAIStateInfoComponentBase_GetSoundInfo_Params
{
	TArray<struct FSoundState>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponentBase.GetProgressBarState
struct UAIStateInfoComponentBase_GetProgressBarState_Params
{
	struct FProgressBarState                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponentBase.GetPlayerInteractInfo
struct UAIStateInfoComponentBase_GetPlayerInteractInfo_Params
{
	struct FAIPlayerInteractInfo                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponentBase.GetOwnerBaseCharacter
struct UAIStateInfoComponentBase_GetOwnerBaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponentBase.GetObstaclesState
struct UAIStateInfoComponentBase_GetObstaclesState_Params
{
	class ASTExtraBaseCharacter*                       InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FObstacleState>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.AIStateInfoComponentBase.GetFrameNo
struct UAIStateInfoComponentBase_GetFrameNo_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.AIStateInfoComponentBase.GetDiffAIStateInfoToCacheGeneral
struct UAIStateInfoComponentBase_GetDiffAIStateInfoToCacheGeneral_Params
{
};

// Function AI.AIStateInfoComponentBase.GetDiffAIStateInfoToCache
struct UAIStateInfoComponentBase_GetDiffAIStateInfoToCache_Params
{
};

// Function AI.AIStateInfoComponentBase.GetDamageSources
struct UAIStateInfoComponentBase_GetDamageSources_Params
{
	struct FAIDamageSources                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponentBase.GetCameraState
struct UAIStateInfoComponentBase_GetCameraState_Params
{
	class ASTExtraBaseCharacter*                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCameraState                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.AIStateInfoComponentBase.GetAIStateInfoToCache
struct UAIStateInfoComponentBase_GetAIStateInfoToCache_Params
{
};

// Function AI.AIStateInfoComponentBase.GetAIStateInfoBaseModInternal
struct UAIStateInfoComponentBase_GetAIStateInfoBaseModInternal_Params
{
};

// Function AI.AIStateInfoComponentBase.GetAIPlayerBackpackItems
struct UAIStateInfoComponentBase_GetAIPlayerBackpackItems_Params
{
	TArray<struct FAIBackpackItem>                     Items;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function AI.AIStateInfoComponentBase.GetAINearbyThrownState
struct UAIStateInfoComponentBase_GetAINearbyThrownState_Params
{
	class ASTExtraBaseCharacter*                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InCheckAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSmokeRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAINearbyThrown>                     Ret;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function AI.AIStateInfoComponentBase.ClearVehicleDamageInfo
struct UAIStateInfoComponentBase_ClearVehicleDamageInfo_Params
{
};

// Function AI.AIStateInfoComponentBase.ClearPlayerInteractInfo
struct UAIStateInfoComponentBase_ClearPlayerInteractInfo_Params
{
};

// Function AI.AIStateInfoComponentBase.ClearDamageSources
struct UAIStateInfoComponentBase_ClearDamageSources_Params
{
};

// Function AI.BTService_DebugInfo.GetInfo
struct UBTService_DebugInfo_GetInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.BTTask_SummonActor.GetSummonLocations
struct UBTTask_SummonActor_GetSummonLocations_Params
{
	class AActor*                                      Invoker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.BTTaskNode_NewParachuteJumpBase.DelayClearParachute
struct UBTTaskNode_NewParachuteJumpBase_DelayClearParachute_Params
{
	class ASTExtraPlayerCharacter*                     ControlledPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.CustomDamageEventComponent.OnRep_ClientEvents
struct UCustomDamageEventComponent_OnRep_ClientEvents_Params
{
};

// Function AI.CharacterCustomDamageEventComponent.OnTakeDamageEvent
struct UCharacterCustomDamageEventComponent_OnTakeDamageEvent_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.UnBindDelegates
struct UMLAIControllerComponent_UnBindDelegates_Params
{
	bool                                               IsEndPlay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.SetLuaAIParamConfigString
struct UMLAIControllerComponent_SetLuaAIParamConfigString_Params
{
	struct FString                                     InAIParamConfigString;                                    // (Parm, ZeroConstructor)
	int                                                InLuaAIParamType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.SetIsMLAI
struct UMLAIControllerComponent_SetIsMLAI_Params
{
	bool                                               InIsMLAI;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.SetCurShootingPose
struct UMLAIControllerComponent_SetCurShootingPose_Params
{
	EAIShootingPose                                    InCurAIShootingPose;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.SetAILevel
struct UMLAIControllerComponent_SetAILevel_Params
{
	uint32_t                                           NewAILevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.IsValid
struct UMLAIControllerComponent_IsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.IsFreeCamera
struct UMLAIControllerComponent_IsFreeCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.InitAIStateInfoComponent
struct UMLAIControllerComponent_InitAIStateInfoComponent_Params
{
	class UAIBasicStateInfoComponent*                  AIStateInfoComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetViewRotation
struct UMLAIControllerComponent_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetViewForwardVector
struct UMLAIControllerComponent_GetViewForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetOwnerBaseCharacter
struct UMLAIControllerComponent_GetOwnerBaseCharacter_Params
{
	class ASTExtraBaseCharacter*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetMLAIParachuteJumpComp
struct UMLAIControllerComponent_GetMLAIParachuteJumpComp_Params
{
	class UMLAIParachuteJumpComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetBackpackComponent
struct UMLAIControllerComponent_GetBackpackComponent_Params
{
	class UBackpackComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetAIStateInfoComp
struct UMLAIControllerComponent_GetAIStateInfoComp_Params
{
	class UAIBasicStateInfoComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetAILevel
struct UMLAIControllerComponent_GetAILevel_Params
{
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.GetAIActionExecutionComp
struct UMLAIControllerComponent_GetAIActionExecutionComp_Params
{
	class UAIActionExecutionComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.DoActionFreeCamera
struct UMLAIControllerComponent_DoActionFreeCamera_Params
{
	bool                                               IsEnter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPitch;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InYaw;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRoll;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.CheckCameraViewPitchLimit
struct UMLAIControllerComponent_CheckCameraViewPitchLimit_Params
{
	struct FRotator                                    InOutTargetRot;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAIControllerComponent.BindDelegates
struct UMLAIControllerComponent_BindDelegates_Params
{
};

// Function AI.MLAIParachuteJumpComponent.ParachuteMove
struct UMLAIParachuteJumpComponent_ParachuteMove_Params
{
	float                                              ForwardRate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RightRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIParachuteJumpComponent.OpenParachute
struct UMLAIParachuteJumpComponent_OpenParachute_Params
{
};

// Function AI.MLAIParachuteJumpComponent.JumpFromPoint
struct UMLAIParachuteJumpComponent_JumpFromPoint_Params
{
};

// Function AI.MLAIParachuteJumpComponent.JumpFromPlane
struct UMLAIParachuteJumpComponent_JumpFromPlane_Params
{
};

// Function AI.MLAIParachuteJumpComponent.EnterParachuteJumpPhase
struct UMLAIParachuteJumpComponent_EnterParachuteJumpPhase_Params
{
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    StartRot;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AI.MLAIParachuteJumpComponent.EndJump
struct UMLAIParachuteJumpComponent_EndJump_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAISubSystem.UpdateSpecialZoneInfo
struct UMLAISubSystem_UpdateSpecialZoneInfo_Params
{
	struct FSpecialZoneState                           NewZoneInfo;                                              // (Parm, OutParm)
};

// Function AI.MLAISubSystem.UpdateRedZoneState
struct UMLAISubSystem_UpdateRedZoneState_Params
{
	class UWorld*                                      InWorld;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAISubSystem.UpdateAirDropBoxStates
struct UMLAISubSystem_UpdateAirDropBoxStates_Params
{
};

// Function AI.MLAISubSystem.StartRequestCache
struct UMLAISubSystem_StartRequestCache_Params
{
};

// Function AI.MLAISubSystem.SetSpecialZoneCustomState
struct UMLAISubSystem_SetSpecialZoneCustomState_Params
{
	class AActor*                                      InParent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCustomState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAISubSystem.SetMLAIUtils
struct UMLAISubSystem_SetMLAIUtils_Params
{
	class UMLAIUtilsBase*                              MlaiUtils;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAISubSystem.RemoveSpecialZoneInfo
struct UMLAISubSystem_RemoveSpecialZoneInfo_Params
{
	uint32_t                                           ZoneID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAISubSystem.OnVehicleDamageInfo
struct UMLAISubSystem_OnVehicleDamageInfo_Params
{
	class AController*                                 InstigatorController;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 VictimController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DamageTypeId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFatalHealthCost;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      VictimVehicle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAISubSystem.OnPlayerDamageInfo
struct UMLAISubSystem_OnPlayerDamageInfo_Params
{
	class ASTExtraPlayerState*                         InstigatorPlayerState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerState*                         VictimPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DamageBeforeCalArmor;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFatalHealthCost;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNearDeathHealthCost;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAISubSystem.OnItemStateChanged
struct UMLAISubSystem_OnItemStateChanged_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function AI.MLAISubSystem.OnAirPlaneRouteSet
struct UMLAISubSystem_OnAirPlaneRouteSet_Params
{
	struct FVector                                     StartLoc;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     TargetLoc;                                                // (Parm, IsPlainOldData)
	struct FVector                                     CanJumpLoc;                                               // (Parm, IsPlainOldData)
	struct FVector                                     ForceJumpLoc;                                             // (Parm, IsPlainOldData)
};

// Function AI.MLAISubSystem.OnAirDropBoxSpawn
struct UMLAISubSystem_OnAirDropBoxSpawn_Params
{
	class AAirDropBoxActor*                            AirDropBoxActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAISubSystem.OnAirAttackInfo
struct UMLAISubSystem_OnAirAttackInfo_Params
{
	EAirAttackInfo                                     airattacktype;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                waveIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAirAttackOrder                             InAirAttackOrder;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     InAirAttackArea;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AI.MLAISubSystem.IsAvailableBackpackItemType
struct UMLAISubSystem_IsAvailableBackpackItemType_Params
{
	struct FItemDefineID                               DefineID;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAISubSystem.IsAIBotGame
struct UMLAISubSystem_IsAIBotGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAISubSystem.GetValidTeammatePlayers
struct UMLAISubSystem_GetValidTeammatePlayers_Params
{
	class UAIStateInfoComponent*                       AIStateInfoComp;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ASTExtraBaseCharacter*>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.MLAISubSystem.GetTeammatePlayerStateInfo
struct UMLAISubSystem_GetTeammatePlayerStateInfo_Params
{
	class UAIStateInfoComponent*                       InAIStateInfoComp;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASTExtraBaseCharacter*                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStateInfo                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.MLAISubSystem.GetLossTime
struct UMLAISubSystem_GetLossTime_Params
{
	class ASTExtraPlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAISubSystem.GetDiffTeammatePlayerStateInfo
struct UMLAISubSystem_GetDiffTeammatePlayerStateInfo_Params
{
	class UAIStateInfoComponent*                       InAIStateInfoComp;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASTExtraBaseCharacter*                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDiffAIStateInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.MLAISubSystem.EndRequestCache
struct UMLAISubSystem_EndRequestCache_Params
{
};

// Function AI.MLAISubSystem.ChangeMLAIInfo
struct UMLAISubSystem_ChangeMLAIInfo_Params
{
	class AFakePlayerAIController*                     AIController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	uint64_t                                           DisplayUID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerOBInfo                               OBInfo;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function AI.MLAISubSystem.AddAIAttributeConfig
struct UMLAISubSystem_AddAIAttributeConfig_Params
{
	uint32_t                                           InID;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InKey;                                                    // (Parm, ZeroConstructor)
};

// Function AI.MLAITrainingComponent.StopRunnable
struct UMLAITrainingComponent_StopRunnable_Params
{
};

// Function AI.MLAITrainingComponent.SetPauseGamePlayerState
struct UMLAITrainingComponent_SetPauseGamePlayerState_Params
{
	class APlayerState*                                InPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAITrainingComponent.SetPause
struct UMLAITrainingComponent_SetPause_Params
{
	bool                                               bInPause;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPauseTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAITrainingComponent.SendAIStateRequest
struct UMLAITrainingComponent_SendAIStateRequest_Params
{
	TArray<unsigned char>                              Packet;                                                   // (Parm, ZeroConstructor)
};

// Function AI.MLAITrainingComponent.IsRequestAIState
struct UMLAITrainingComponent_IsRequestAIState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.MLAITrainingComponent.InitRunnable
struct UMLAITrainingComponent_InitRunnable_Params
{
	float                                              InStartCollectingInterval;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSendInterval;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTimeOutInterval;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAITrainingComponent.EndRequestAIState
struct UMLAITrainingComponent_EndRequestAIState_Params
{
};

// Function AI.MLAIUtilsBase.StartRequestCache
struct UMLAIUtilsBase_StartRequestCache_Params
{
};

// Function AI.MLAIUtilsBase.GetGlobalGameStateInfoToCache
struct UMLAIUtilsBase_GetGlobalGameStateInfoToCache_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIUtilsBase.GetDiffGlobalGameStateInfoToCache
struct UMLAIUtilsBase_GetDiffGlobalGameStateInfoToCache_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIUtilsBase.GetDiffGlobalGameStateBaseModToCacheGeneral
struct UMLAIUtilsBase_GetDiffGlobalGameStateBaseModToCacheGeneral_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIUtilsBase.GetDiffGlobalGameStatBaseModToCache
struct UMLAIUtilsBase_GetDiffGlobalGameStatBaseModToCache_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoToCacheCSS
struct UMLAIUtilsBase_GetDiffAllPlayerStateInfoToCacheCSS_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDiff;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSeparate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoToCache
struct UMLAIUtilsBase_GetDiffAllPlayerStateInfoToCache_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoBaseModToCacheCCS
struct UMLAIUtilsBase_GetDiffAllPlayerStateInfoBaseModToCacheCCS_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDiff;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSeparate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIUtilsBase.GetAllPlayerStateInfoToCache
struct UMLAIUtilsBase_GetAllPlayerStateInfoToCache_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIUtilsBase.EndRequestCache
struct UMLAIUtilsBase_EndRequestCache_Params
{
};

// Function AI.MLAIUtilsBRBase.GetRedZoneState
struct UMLAIUtilsBRBase_GetRedZoneState_Params
{
	class UWorld*                                      InWorld;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRedZoneState                               ZoneState;                                                // (Parm, OutParm)
};

// Function AI.MLAIUtilsBRBase.GetCacheAIPlayerStateInfoBRBase
struct UMLAIUtilsBRBase_GetCacheAIPlayerStateInfoBRBase_Params
{
	class ASTExtraBaseCharacter*                       InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIPlayerStateBRBase                        AIPlayerState;                                            // (Parm, OutParm)
	bool                                               bIsCache;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.MLAIUtilsBRBase.GetAIPlayerStateBRBase
struct UMLAIUtilsBRBase_GetAIPlayerStateBRBase_Params
{
	class ASTExtraBaseCharacter*                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIPlayerStateBRBase                        Ret;                                                      // (Parm, OutParm)
};

// Function AI.SpecialZoneActor.UpdateCustomState
struct ASpecialZoneActor_UpdateCustomState_Params
{
	int                                                InCustomState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.SpecialZoneActor.GetSpecialZoneState
struct ASpecialZoneActor_GetSpecialZoneState_Params
{
	struct FSpecialZoneState                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AI.STStrategyLocation_Range.ModifyBaseLocation
struct USTStrategyLocation_Range_ModifyBaseLocation_Params
{
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
};

// Function AI.STStrategyLocation_Range.GetSpawnLocation
struct USTStrategyLocation_Range_GetSpawnLocation_Params
{
	class AActor*                                      Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReferenceCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      OutArr;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.STStrategyLocation_Range.AddSpawnArea
struct USTStrategyLocation_Range_AddSpawnArea_Params
{
	struct FSpawnArea                                  NewArea;                                                  // (Parm)
	bool                                               ForceAdd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.STStrategyLocation_Range.ActivateStrategy
struct USTStrategyLocation_Range_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.STStrategySpecies_Candidate.Supply
struct USTStrategySpecies_Candidate_Supply_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUnitConfig>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.STStrategySpecies_Candidate.ActivateStrategy
struct USTStrategySpecies_Candidate_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.STStrategySpecies_Lua.Supply
struct USTStrategySpecies_Lua_Supply_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpawnSpotInfo>                      SpotSpecies;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUnitConfig>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AI.STStrategySpecies_Lua.LuaSupply
struct USTStrategySpecies_Lua_LuaSupply_Params
{
	int                                                ReferencedCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.STStrategyTiming_Event.TickStrategy
struct USTStrategyTiming_Event_TickStrategy_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.STStrategyTiming_Event.OnSpawnEventBroadcast
struct USTStrategyTiming_Event_OnSpawnEventBroadcast_Params
{
	uint32_t                                           SpawnerID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.STStrategyTiming_Event.ActivateStrategy
struct USTStrategyTiming_Event_ActivateStrategy_Params
{
	class ASTSpawnerBase*                              Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.TeammateMLAIControllerComponent.OnControllerStateChanged
struct UTeammateMLAIControllerComponent_OnControllerStateChanged_Params
{
	EStateType                                         StateType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleAIController.SetCurEnemy
struct AVehicleAIController_SetCurEnemy_Params
{
	class APawn*                                       NewEnemy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleAIController.GetVehiclePathFollow
struct AVehicleAIController_GetVehiclePathFollow_Params
{
	class UVehiclePathFollowingComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AI.VehicleAIController.GetCurEnemy
struct AVehicleAIController_GetCurEnemy_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.VehicleAIController.GetAIHitRate
struct AVehicleAIController_GetAIHitRate_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AI.VehicleAIController.ExplodeAndDeath
struct AVehicleAIController_ExplodeAndDeath_Params
{
};

// Function AI.VehicleAIController.DelayInitVehicleWeapon
struct AVehicleAIController_DelayInitVehicleWeapon_Params
{
};

// Function AI.VehicleAIUserComponent.ServerVehicleLeanOut
struct UVehicleAIUserComponent_ServerVehicleLeanOut_Params
{
	bool                                               bLeanOut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleAIUserComponent.ServerExitVehicle
struct UVehicleAIUserComponent_ServerExitVehicle_Params
{
};

// Function AI.VehicleAIUserComponent.ServerEnterVehicle
struct UVehicleAIUserComponent_ServerEnterVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleAIUserComponent.ServerChangeVehicleSeat
struct UVehicleAIUserComponent_ServerChangeVehicleSeat_Params
{
	int                                                InSeatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleAIUserComponent.MulticastExitVehicle
struct UVehicleAIUserComponent_MulticastExitVehicle_Params
{
};

// Function AI.VehicleAIUserComponent.MulticastEnterVehicle
struct UVehicleAIUserComponent_MulticastEnterVehicle_Params
{
	class ASTExtraVehicleBase*                         InVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerCharacter*                     Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleAIUserComponent.MulticastChangeVehicleSeat
struct UVehicleAIUserComponent_MulticastChangeVehicleSeat_Params
{
	int                                                InSeatIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AI.VehicleCustomDamageEventComponent.OnVehicleHPFuelChanged
struct UVehicleCustomDamageEventComponent_OnVehicleHPFuelChanged_Params
{
	float                                              HP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Fuel;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

