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

// Function Development.CloudGMHandle.InitCloudGM
struct UCloudGMHandle_InitCloudGM_Params
{
};

// Function Development.CloudGMHandle.DestroyCloudGM
struct UCloudGMHandle_DestroyCloudGM_Params
{
};

// Function Development.GMCheatAI.TeleportAIToLoc
struct UGMCheatAI_TeleportAIToLoc_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAI.SpawnAITeam
struct UGMCheatAI_SpawnAITeam_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AITeamID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Difficulty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAI.SpawnAIPosi
struct UGMCheatAI_SpawnAIPosi_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AITeamID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosiX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosiY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosiZ;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAI.SpawnAI
struct UGMCheatAI_SpawnAI_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnAll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAI.MoveToAIWithClassName
struct UGMCheatAI_MoveToAIWithClassName_Params
{
	struct FString                                     AIClassName;                                              // (Parm, ZeroConstructor)
	float                                              XOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAI.MoveToAIByDropItem
struct UGMCheatAI_MoveToAIByDropItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAI.MoveToAI
struct UGMCheatAI_MoveToAI_Params
{
};

// Function Development.GMCheatAI.LogAIItemCount
struct UGMCheatAI_LogAIItemCount_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAI.FindAIDropItem
struct UGMCheatAI_FindAIDropItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAI.ChangeAIBehaviorTree
struct UGMCheatAI_ChangeAIBehaviorTree_Params
{
	int                                                TreeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAI.AddAIItem
struct UGMCheatAI_AddAIItem_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAnimation.TestAnimation
struct UGMCheatAnimation_TestAnimation_Params
{
	int                                                Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAnimation.DumpCharacterAnimBPVars
struct UGMCheatAnimation_DumpCharacterAnimBPVars_Params
{
};

// Function Development.GMCheatAvatar.UseLocalWeaponDIYData
struct UGMCheatAvatar_UseLocalWeaponDIYData_Params
{
	bool                                               bFlag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.UseLocalVehicleAvatar
struct UGMCheatAvatar_UseLocalVehicleAvatar_Params
{
};

// Function Development.GMCheatAvatar.SetWeaponPendantShow
struct UGMCheatAvatar_SetWeaponPendantShow_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.SetVehicleAvatar
struct UGMCheatAvatar_SetVehicleAvatar_Params
{
	int                                                VehicleShapeType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VehicleSkin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.SetPlayerTeamBodyInstMask
struct UGMCheatAvatar_SetPlayerTeamBodyInstMask_Params
{
	int                                                Mask;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.SetPlayerBodyInstMask
struct UGMCheatAvatar_SetPlayerBodyInstMask_Params
{
	int                                                Mask;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.SetGrenadeAvatar
struct UGMCheatAvatar_SetGrenadeAvatar_Params
{
	int                                                SubType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EquipmentSkin;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.SetEquipmentAvatar
struct UGMCheatAvatar_SetEquipmentAvatar_Params
{
	int                                                EquipmentAvatarType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EquipmentSkin;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.SetEnableWingAvatar
struct UGMCheatAvatar_SetEnableWingAvatar_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.SetDownloadInBattle
struct UGMCheatAvatar_SetDownloadInBattle_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.SetAvatarDownloadInBattle
struct UGMCheatAvatar_SetAvatarDownloadInBattle_Params
{
	bool                                               bEnableDownload;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.PrintMainCharAllAvatar
struct UGMCheatAvatar_PrintMainCharAllAvatar_Params
{
};

// Function Development.GMCheatAvatar.DeleteVehicleAdvanceAvatar_Style
struct UGMCheatAvatar_DeleteVehicleAdvanceAvatar_Style_Params
{
	int                                                VehicleSkin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VehicleStyle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.DeleteVehicleAdvanceAvatar
struct UGMCheatAvatar_DeleteVehicleAdvanceAvatar_Params
{
	int                                                VehicleSkin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModelID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.DebugWorldPlayerAvatarInfo
struct UGMCheatAvatar_DebugWorldPlayerAvatarInfo_Params
{
};

// Function Development.GMCheatAvatar.DebugChangeWearIndex
struct UGMCheatAvatar_DebugChangeWearIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.ClearItemDownloadlist
struct UGMCheatAvatar_ClearItemDownloadlist_Params
{
};

// Function Development.GMCheatAvatar.ChangeBattleAvatar
struct UGMCheatAvatar_ChangeBattleAvatar_Params
{
	int                                                HeadAvatarID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HairAvatarID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InGender;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PutOffAvatar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.AddWeaponPendantItem
struct UGMCheatAvatar_AddWeaponPendantItem_Params
{
	int                                                WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                pendantID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.AddWeaponDIYPlan
struct UGMCheatAvatar_AddWeaponDIYPlan_Params
{
	int                                                AvatarID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DIYPlanID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.AddWeaponAvatar
struct UGMCheatAvatar_AddWeaponAvatar_Params
{
	int                                                WeaponSkin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.AddWeaponAttachmentAvatarSimple
struct UGMCheatAvatar_AddWeaponAttachmentAvatarSimple_Params
{
	int                                                WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponAttachmentSkin;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.AddWeaponAttachmentAvatar
struct UGMCheatAvatar_AddWeaponAttachmentAvatar_Params
{
	int                                                WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponAttachmentSkin;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.AddVehicleAvatar
struct UGMCheatAvatar_AddVehicleAvatar_Params
{
	int                                                VehicleSkin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.AddVehicleAdvanceAvatar_Style
struct UGMCheatAvatar_AddVehicleAdvanceAvatar_Style_Params
{
	int                                                VehicleSkin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VehicleStyle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.AddVehicleAdvanceAvatar
struct UGMCheatAvatar_AddVehicleAdvanceAvatar_Params
{
	int                                                VehicleSkin;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModelID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PatternID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatAvatar.AddItemToDownloadlist
struct UGMCheatAvatar_AddItemToDownloadlist_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatBackpack.UseItem
struct UGMCheatBackpack_UseItem_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatBackpack.FlushItem
struct UGMCheatBackpack_FlushItem_Params
{
	int                                                onlyStatic;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatBackpack.DropItemsWithType
struct UGMCheatBackpack_DropItemsWithType_Params
{
	int                                                TypeItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatBackpack.DropItem
struct UGMCheatBackpack_DropItem_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatBackpack.DropAllItem
struct UGMCheatBackpack_DropAllItem_Params
{
};

// Function Development.GMCheatBackpack.AddItem
struct UGMCheatBackpack_AddItem_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PickupType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatBackpack.AddAvatarItem
struct UGMCheatBackpack_AddAvatarItem_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Pattern;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.ToggleUserCmdDeltaSendAck
struct UGMCheatCharacter_ToggleUserCmdDeltaSendAck_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.ToggleUserCmdDeltaFlag
struct UGMCheatCharacter_ToggleUserCmdDeltaFlag_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.ToggleUserCmdDeltaCheckSum
struct UGMCheatCharacter_ToggleUserCmdDeltaCheckSum_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.ToggleUserCmdDelta
struct UGMCheatCharacter_ToggleUserCmdDelta_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.ToggleServerAcknowledgePossession
struct UGMCheatCharacter_ToggleServerAcknowledgePossession_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.ToggleCheatLocation
struct UGMCheatCharacter_ToggleCheatLocation_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.TestLowProbCircle
struct UGMCheatCharacter_TestLowProbCircle_Params
{
	bool                                               UseLowProb;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LoopCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.TestLaunchFly
struct UGMCheatCharacter_TestLaunchFly_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.TestAutoMoveToShootingMachine
struct UGMCheatCharacter_TestAutoMoveToShootingMachine_Params
{
};

// Function Development.GMCheatCharacter.TestAutoMoveToLocation
struct UGMCheatCharacter_TestAutoMoveToLocation_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.TestAutoMoveToCharacter
struct UGMCheatCharacter_TestAutoMoveToCharacter_Params
{
	struct FString                                     TargetPlayerUID;                                          // (Parm, ZeroConstructor)
};

// Function Development.GMCheatCharacter.TeamNoAlwaysRelevant
struct UGMCheatCharacter_TeamNoAlwaysRelevant_Params
{
};

// Function Development.GMCheatCharacter.SwitchViewTarget
struct UGMCheatCharacter_SwitchViewTarget_Params
{
};

// Function Development.GMCheatCharacter.StartAirDropSpecified
struct UGMCheatCharacter_StartAirDropSpecified_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.StartAirDropBackupEnter
struct UGMCheatCharacter_StartAirDropBackupEnter_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPlaneNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.StartAirDrop
struct UGMCheatCharacter_StartAirDrop_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.StartAirAttackSpecified
struct UGMCheatCharacter_StartAirAttackSpecified_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.StartAirAttack
struct UGMCheatCharacter_StartAirAttack_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.ShowWeaponRecordInfo
struct UGMCheatCharacter_ShowWeaponRecordInfo_Params
{
};

// Function Development.GMCheatCharacter.ShowVaultEnable
struct UGMCheatCharacter_ShowVaultEnable_Params
{
};

// Function Development.GMCheatCharacter.ShowResultWeaponRecordInfo
struct UGMCheatCharacter_ShowResultWeaponRecordInfo_Params
{
};

// Function Development.GMCheatCharacter.ShowAllRoles
struct UGMCheatCharacter_ShowAllRoles_Params
{
};

// Function Development.GMCheatCharacter.SetTimeSpeedFactor
struct UGMCheatCharacter_SetTimeSpeedFactor_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.SetTimeSpeedCheck
struct UGMCheatCharacter_SetTimeSpeedCheck_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.SetSpeed
struct UGMCheatCharacter_SetSpeed_Params
{
	float                                              Modifier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.SetMaxHealth
struct UGMCheatCharacter_SetMaxHealth_Params
{
	float                                              HP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.SetLowProbCircle
struct UGMCheatCharacter_SetLowProbCircle_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              R;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Prob;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.SetCustomJumpPoint
struct UGMCheatCharacter_SetCustomJumpPoint_Params
{
	float                                              JmpX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              JmpY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              JmpRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.SetCircleCenter
struct UGMCheatCharacter_SetCircleCenter_Params
{
	struct FString                                     PointString;                                              // (Parm, ZeroConstructor)
};

// Function Development.GMCheatCharacter.SetCirCenterFixed
struct UGMCheatCharacter_SetCirCenterFixed_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.SetAirDropEnable
struct UGMCheatCharacter_SetAirDropEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.SetAirAttackEnable
struct UGMCheatCharacter_SetAirAttackEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.Set2x2ForceCircleLastR
struct UGMCheatCharacter_Set2x2ForceCircleLastR_Params
{
	float                                              R;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.Set2x2ForceCircle
struct UGMCheatCharacter_Set2x2ForceCircle_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              R;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.Set2x2CircleCenter
struct UGMCheatCharacter_Set2x2CircleCenter_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.Set2x2Circle3Center
struct UGMCheatCharacter_Set2x2Circle3Center_Params
{
	float                                              X1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              x2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              y2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              x3;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              y3;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.PrintMovementLog
struct UGMCheatCharacter_PrintMovementLog_Params
{
	int                                                PrintLog;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.PrintDownCollision
struct UGMCheatCharacter_PrintDownCollision_Params
{
};

// Function Development.GMCheatCharacter.MoveToXY
struct UGMCheatCharacter_MoveToXY_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.MoveToVehicle
struct UGMCheatCharacter_MoveToVehicle_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.MoveToS
struct UGMCheatCharacter_MoveToS_Params
{
	struct FString                                     VectorString;                                             // (Parm, ZeroConstructor)
};

// Function Development.GMCheatCharacter.MoveToNearestVehicle
struct UGMCheatCharacter_MoveToNearestVehicle_Params
{
	float                                              IgnoreDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.MoveToItem
struct UGMCheatCharacter_MoveToItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.MoveTo
struct UGMCheatCharacter_MoveTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.ModifyStreamingDistance
struct UGMCheatCharacter_ModifyStreamingDistance_Params
{
	int                                                Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.KillSomeOne
struct UGMCheatCharacter_KillSomeOne_Params
{
	struct FString                                     InPlayerName;                                             // (Parm, ZeroConstructor)
};

// Function Development.GMCheatCharacter.KillAll
struct UGMCheatCharacter_KillAll_Params
{
};

// Function Development.GMCheatCharacter.Kill
struct UGMCheatCharacter_Kill_Params
{
	int                                                GivenNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.GMTestZengzuo
struct UGMCheatCharacter_GMTestZengzuo_Params
{
};

// Function Development.GMCheatCharacter.GMSetCampId
struct UGMCheatCharacter_GMSetCampId_Params
{
	int                                                CamID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatCharacter.GetGameScreenSize
struct UGMCheatCharacter_GetGameScreenSize_Params
{
};

// Function Development.GMCheatCharacter.ExecFollowTeammate
struct UGMCheatCharacter_ExecFollowTeammate_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Development.GMCheatCharacter.DebugSprint
struct UGMCheatCharacter_DebugSprint_Params
{
};

// Function Development.GMCheatDump.DumpWeaponsToFile
struct UGMCheatDump_DumpWeaponsToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpVehicleToFile
struct UGMCheatDump_DumpVehicleToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpVehicleAnimInstanceToFile
struct UGMCheatDump_DumpVehicleAnimInstanceToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpVehicleAnimInstance
struct UGMCheatDump_DumpVehicleAnimInstance_Params
{
};

// Function Development.GMCheatDump.DumpVehicle
struct UGMCheatDump_DumpVehicle_Params
{
};

// Function Development.GMCheatDump.DumpSimulatedCharacterAnimInstanceToFile
struct UGMCheatDump_DumpSimulatedCharacterAnimInstanceToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpSimulatedCharacterAnimInstance
struct UGMCheatDump_DumpSimulatedCharacterAnimInstance_Params
{
};

// Function Development.GMCheatDump.DumpReticleTargetActorToFile
struct UGMCheatDump_DumpReticleTargetActorToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               bPrintFunc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatDump.DumpReticleTargetActor
struct UGMCheatDump_DumpReticleTargetActor_Params
{
	bool                                               bPrintFunc;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatDump.DumpPlayerSkillInfo
struct UGMCheatDump_DumpPlayerSkillInfo_Params
{
};

// Function Development.GMCheatDump.DumpPlayerInfoToFile
struct UGMCheatDump_DumpPlayerInfoToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpPlayerControllerToFile
struct UGMCheatDump_DumpPlayerControllerToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpPlayerController
struct UGMCheatDump_DumpPlayerController_Params
{
};

// Function Development.GMCheatDump.DumpPlayerCameraManagerToFile
struct UGMCheatDump_DumpPlayerCameraManagerToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpObservingCharacterToFile
struct UGMCheatDump_DumpObservingCharacterToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpObservingCharacter
struct UGMCheatDump_DumpObservingCharacter_Params
{
};

// Function Development.GMCheatDump.DumpObjectProperties
struct UGMCheatDump_DumpObjectProperties_Params
{
	struct FString                                     ObjectName;                                               // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpCharacterToFile
struct UGMCheatDump_DumpCharacterToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpCharacterAnimInstanceToFile
struct UGMCheatDump_DumpCharacterAnimInstanceToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpCharacterAnimInstance
struct UGMCheatDump_DumpCharacterAnimInstance_Params
{
};

// Function Development.GMCheatDump.DumpCharacter
struct UGMCheatDump_DumpCharacter_Params
{
};

// Function Development.GMCheatDump.DumpAllVehiclesToFile
struct UGMCheatDump_DumpAllVehiclesToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpAllVehicles
struct UGMCheatDump_DumpAllVehicles_Params
{
};

// Function Development.GMCheatDump.DumpAllSkillActorsInfoToFile
struct UGMCheatDump_DumpAllSkillActorsInfoToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpAllSkillActorsInfo
struct UGMCheatDump_DumpAllSkillActorsInfo_Params
{
};

// Function Development.GMCheatDump.DumpAllPlayerControllerToFile
struct UGMCheatDump_DumpAllPlayerControllerToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpAllPlayerController
struct UGMCheatDump_DumpAllPlayerController_Params
{
};

// Function Development.GMCheatDump.DumpAllCharactersToFile
struct UGMCheatDump_DumpAllCharactersToFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatDump.DumpAllCharacters
struct UGMCheatDump_DumpAllCharacters_Params
{
};

// Function Development.GMCheatGameFlow.StartReadyCountDown
struct UGMCheatGameFlow_StartReadyCountDown_Params
{
};

// Function Development.GMCheatGameFlow.SetStateLeftTime
struct UGMCheatGameFlow_SetStateLeftTime_Params
{
	int                                                leftTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatGameFlow.GotoFlying
struct UGMCheatGameFlow_GotoFlying_Params
{
};

// Function Development.GMCheatGameFlow.GameModeGotoNextState
struct UGMCheatGameFlow_GameModeGotoNextState_Params
{
};

// Function Development.GMCheatGameFlow.GameModeGotoFightingState
struct UGMCheatGameFlow_GameModeGotoFightingState_Params
{
};

// Function Development.GMCheatGameFlow.DsLuaGM
struct UGMCheatGameFlow_DsLuaGM_Params
{
	struct FString                                     CmdString;                                                // (ConstParm, Parm, ZeroConstructor)
};

// Function Development.GMCheatGameFlow.DsLuaDoString
struct UGMCheatGameFlow_DsLuaDoString_Params
{
	struct FString                                     LuaString;                                                // (Parm, ZeroConstructor)
};

// Function Development.GMCheatHiggs.TriggerActorChannelErrorDelegate
struct UGMCheatHiggs_TriggerActorChannelErrorDelegate_Params
{
};

// Function Development.GMCheatHiggs.TestSpawnStaticmesh
struct UGMCheatHiggs_TestSpawnStaticmesh_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatHiggs.TestGMCheatHiggs
struct UGMCheatHiggs_TestGMCheatHiggs_Params
{
	int                                                Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatHiggs.TestGlueHia
struct UGMCheatHiggs_TestGlueHia_Params
{
	int                                                GlueType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GlueValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatHiggs.StatCPU
struct UGMCheatHiggs_StatCPU_Params
{
	int                                                Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatHiggs.SetOpenSecurityAlert
struct UGMCheatHiggs_SetOpenSecurityAlert_Params
{
	bool                                               bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatHUD.ResetHUDDebugFunction
struct UGMCheatHUD_ResetHUDDebugFunction_Params
{
};

// Function Development.GMCheatHUD.RemoveHUDDebugFunction
struct UGMCheatHUD_RemoveHUDDebugFunction_Params
{
	struct FString                                     FuncName;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatHUD.EnableHUDDebug
struct UGMCheatHUD_EnableHUDDebug_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FuncName;                                                 // (Parm, ZeroConstructor)
};

// Function Development.GMCheatHUD.AddHUDDebugFunction
struct UGMCheatHUD_AddHUDDebugFunction_Params
{
	struct FString                                     FuncName;                                                 // (Parm, ZeroConstructor)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatLevel.SpawnActorWithPath
struct UGMCheatLevel_SpawnActorWithPath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatLevel.ShutDownVehicleGenerate
struct UGMCheatLevel_ShutDownVehicleGenerate_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatLevel.ShutDownPickUpGenerate
struct UGMCheatLevel_ShutDownPickUpGenerate_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatLevel.ShutDownItemGenerate
struct UGMCheatLevel_ShutDownItemGenerate_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatLevel.ShowNavOperator
struct UGMCheatLevel_ShowNavOperator_Params
{
};

// Function Development.GMCheatLevel.SetServerLevelLoadingMode
struct UGMCheatLevel_SetServerLevelLoadingMode_Params
{
	bool                                               bNewLoadAll;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatLevel.SetPlaneEnabled
struct UGMCheatLevel_SetPlaneEnabled_Params
{
	bool                                               InEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatLevel.SetCustomFlightRoute
struct UGMCheatLevel_SetCustomFlightRoute_Params
{
	float                                              StartX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatLevel.RemoveAllDoors
struct UGMCheatLevel_RemoveAllDoors_Params
{
};

// Function Development.GMCheatLevel.PrintAllPickupWarpper
struct UGMCheatLevel_PrintAllPickupWarpper_Params
{
};

// Function Development.GMCheatLevel.LocalProfileFootprint
struct UGMCheatLevel_LocalProfileFootprint_Params
{
};

// Function Development.GMCheatLevel.LoadAllLand
struct UGMCheatLevel_LoadAllLand_Params
{
	bool                                               bLoadAll;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatLevel.GotoDoubleCircleEdge
struct UGMCheatLevel_GotoDoubleCircleEdge_Params
{
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatLevel.GMSetBoolPoisonCircle
struct UGMCheatLevel_GMSetBoolPoisonCircle_Params
{
};

// Function Development.GMCheatLevel.GMSetBoolAirDrop
struct UGMCheatLevel_GMSetBoolAirDrop_Params
{
};

// Function Development.GMCheatLevel.GMSetBoolAirAttack
struct UGMCheatLevel_GMSetBoolAirAttack_Params
{
};

// Function Development.GMCheatLevel.GMSetBoolAI
struct UGMCheatLevel_GMSetBoolAI_Params
{
};

// Function Development.GMCheatLevel.GMEnableRandom
struct UGMCheatLevel_GMEnableRandom_Params
{
};

// Function Development.GMCheatLevel.GMEnableAllComponent
struct UGMCheatLevel_GMEnableAllComponent_Params
{
};

// Function Development.GMCheatLevel.GMDisableRandom
struct UGMCheatLevel_GMDisableRandom_Params
{
};

// Function Development.GMCheatLevel.GMDisableAllComponent
struct UGMCheatLevel_GMDisableAllComponent_Params
{
};

// Function Development.GMCheatLevel.GMBeginCircle
struct UGMCheatLevel_GMBeginCircle_Params
{
	int                                                CurIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatLevel.GetCurrentLevelOffset
struct UGMCheatLevel_GetCurrentLevelOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Development.GMCheatLevel.EnableMyLandscapeDraw
struct UGMCheatLevel_EnableMyLandscapeDraw_Params
{
};

// Function Development.GMCheatLevel.DisableMyLandscapeDraw
struct UGMCheatLevel_DisableMyLandscapeDraw_Params
{
};

// Function Development.GMCheatLevel.DebugAirDropPickInfo
struct UGMCheatLevel_DebugAirDropPickInfo_Params
{
	float                                              DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BoxDrawSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BoxDrawLineLength;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ListWrapperDrawSize;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ListWrapperDrawLineLength;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.WatchReport
struct UGMCheatManager_WatchReport_Params
{
};

// Function Development.GMCheatManager.VehicleTowardTo
struct UGMCheatManager_VehicleTowardTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.VehicleSpotLog
struct UGMCheatManager_VehicleSpotLog_Params
{
};

// Function Development.GMCheatManager.VehicleMoveTo
struct UGMCheatManager_VehicleMoveTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.VehicleMoveAndTowardTo
struct UGMCheatManager_VehicleMoveAndTowardTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.UpdateTrainingRank
struct UGMCheatManager_UpdateTrainingRank_Params
{
	int                                                TrainingType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Top1wScore;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ToggleSpringMode
struct UGMCheatManager_ToggleSpringMode_Params
{
};

// Function Development.GMCheatManager.ToggleSpringDebug
struct UGMCheatManager_ToggleSpringDebug_Params
{
};

// Function Development.GMCheatManager.TogglePawnInfo
struct UGMCheatManager_TogglePawnInfo_Params
{
};

// Function Development.GMCheatManager.TestPlayerBattleResult
struct UGMCheatManager_TestPlayerBattleResult_Params
{
};

// Function Development.GMCheatManager.TestNetworkLost
struct UGMCheatManager_TestNetworkLost_Params
{
};

// Function Development.GMCheatManager.TestLineTrace
struct UGMCheatManager_TestLineTrace_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.TestKillInfoPanel
struct UGMCheatManager_TestKillInfoPanel_Params
{
	int                                                WeaponId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Relationship;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponAvatarID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClothID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.TestGameplayDataRecord
struct UGMCheatManager_TestGameplayDataRecord_Params
{
	int                                                UID;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RecordType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.TestEnableRegionsLongDistanceSleep
struct UGMCheatManager_TestEnableRegionsLongDistanceSleep_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.TestDeactivate
struct UGMCheatManager_TestDeactivate_Params
{
};

// Function Development.GMCheatManager.TestCrash
struct UGMCheatManager_TestCrash_Params
{
};

// Function Development.GMCheatManager.TeleportToVehicleAI
struct UGMCheatManager_TeleportToVehicleAI_Params
{
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.TeleportToPVEMonster
struct UGMCheatManager_TeleportToPVEMonster_Params
{
	int                                                ChapterID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LevelID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaveID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.TeleportTo
struct UGMCheatManager_TeleportTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SwitchSocialIsland
struct UGMCheatManager_SwitchSocialIsland_Params
{
	int                                                LandId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SwitchShowUI
struct UGMCheatManager_SwitchShowUI_Params
{
};

// Function Development.GMCheatManager.SuperGMKillDS
struct UGMCheatManager_SuperGMKillDS_Params
{
};

// Function Development.GMCheatManager.StopAnimalDeliver
struct UGMCheatManager_StopAnimalDeliver_Params
{
	bool                                               bStop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.StopAnimal
struct UGMCheatManager_StopAnimal_Params
{
	bool                                               bStop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.StopAllMonsterDSAnim
struct UGMCheatManager_StopAllMonsterDSAnim_Params
{
	bool                                               bStop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.StatVehicle
struct UGMCheatManager_StatVehicle_Params
{
};

// Function Development.GMCheatManager.StarTPerforPlatTag
struct UGMCheatManager_StarTPerforPlatTag_Params
{
	struct FString                                     TagName;                                                  // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.SpawnVehicleWithPathAtPoint
struct UGMCheatManager_SpawnVehicleWithPathAtPoint_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	bool                                               AroundMe;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SpawnTrainingAIAroundMe
struct UGMCheatManager_SpawnTrainingAIAroundMe_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SpawnMonsterAround
struct UGMCheatManager_SpawnMonsterAround_Params
{
	int                                                MonsterID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAI;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SpawnItemBySpotDefaultTag
struct UGMCheatManager_SpawnItemBySpotDefaultTag_Params
{
	struct FString                                     DefaultTag;                                               // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.SpawnGameFeatureActor
struct UGMCheatManager_SpawnGameFeatureActor_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.SpawnFakePlayer
struct UGMCheatManager_SpawnFakePlayer_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithPet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopAI;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SpawnDecal
struct UGMCheatManager_SpawnDecal_Params
{
};

// Function Development.GMCheatManager.SpawnBotForTest
struct UGMCheatManager_SpawnBotForTest_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SpawnAIAroundMe
struct UGMCheatManager_SpawnAIAroundMe_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasAvator;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasBackpack;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ShowScrollMsg
struct UGMCheatManager_ShowScrollMsg_Params
{
	uint32_t                                           MsgID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Param1;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Param2;                                                   // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.ShowPet
struct UGMCheatManager_ShowPet_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ShowOBMultiKillTips
struct UGMCheatManager_ShowOBMultiKillTips_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillNum;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamKillNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ShowHideGuide
struct UGMCheatManager_ShowHideGuide_Params
{
	int                                                GuideID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ShowAllPlayersMarkIncludeAI
struct UGMCheatManager_ShowAllPlayersMarkIncludeAI_Params
{
	float                                              VisDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ShowAKComponentPosition
struct UGMCheatManager_ShowAKComponentPosition_Params
{
	bool                                               _IsShow;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetWeatherPlaySpeed
struct UGMCheatManager_SetWeatherPlaySpeed_Params
{
	float                                              FSpeed;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetViewFPP
struct UGMCheatManager_SetViewFPP_Params
{
	bool                                               IsFPP;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetTouchMoveLog
struct UGMCheatManager_SetTouchMoveLog_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetTouchMoveDelay
struct UGMCheatManager_SetTouchMoveDelay_Params
{
	int                                                DelayFrame;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetTemperature
struct UGMCheatManager_SetTemperature_Params
{
	float                                              InTemperature;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetSpringArm
struct UGMCheatManager_SetSpringArm_Params
{
	unsigned char                                      armFlag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetSkillDup
struct UGMCheatManager_SetSkillDup_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetRateScore
struct UGMCheatManager_SetRateScore_Params
{
	float                                              RankScore;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetNetSpeed
struct UGMCheatManager_SetNetSpeed_Params
{
	int                                                NewSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetNeckUp
struct UGMCheatManager_SetNeckUp_Params
{
	float                                              UpAngle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetNeckSpeed
struct UGMCheatManager_SetNeckSpeed_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetNeckRight
struct UGMCheatManager_SetNeckRight_Params
{
	float                                              RightAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetNeckMax
struct UGMCheatManager_SetNeckMax_Params
{
	float                                              MaxAngle;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetNeckLeft
struct UGMCheatManager_SetNeckLeft_Params
{
	float                                              LeftAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetMonsterNumMultiple
struct UGMCheatManager_SetMonsterNumMultiple_Params
{
	int                                                ChapterID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LevelID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DiffcultPerc;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetMonsterNB
struct UGMCheatManager_SetMonsterNB_Params
{
	bool                                               MonsterNB;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetMonsterHatred
struct UGMCheatManager_SetMonsterHatred_Params
{
	float                                              Hatred;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetMaxFpsFromDevice
struct UGMCheatManager_SetMaxFpsFromDevice_Params
{
};

// Function Development.GMCheatManager.SetIsRender
struct UGMCheatManager_SetIsRender_Params
{
	bool                                               IsRender;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetInactiveClearEnable
struct UGMCheatManager_SetInactiveClearEnable_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetHignPerformance
struct UGMCheatManager_SetHignPerformance_Params
{
	bool                                               SetOpen;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetGVMemberID
struct UGMCheatManager_SetGVMemberID_Params
{
	int                                                memberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetFestivalAirDrop
struct UGMCheatManager_SetFestivalAirDrop_Params
{
	bool                                               bFestival;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BoxMesh;                                                  // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.SetFestivaGrenade
struct UGMCheatManager_SetFestivaGrenade_Params
{
	bool                                               bFestival;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetDynamicWeather
struct UGMCheatManager_SetDynamicWeather_Params
{
	int                                                WeatherType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetDsSwitch
struct UGMCheatManager_SetDsSwitch_Params
{
	int                                                InKey;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InValue;                                                  // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.SetDeliver
struct UGMCheatManager_SetDeliver_Params
{
};

// Function Development.GMCheatManager.SetClearIslandEnable
struct UGMCheatManager_SetClearIslandEnable_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetCameraLagEnable
struct UGMCheatManager_SetCameraLagEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetCacheInputNum
struct UGMCheatManager_SetCacheInputNum_Params
{
	int                                                CacheNum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetAnimEnable
struct UGMCheatManager_SetAnimEnable_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetAnimDebugInfo
struct UGMCheatManager_SetAnimDebugInfo_Params
{
	bool                                               debugAnimInfo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetAnimDebugGroup
struct UGMCheatManager_SetAnimDebugGroup_Params
{
	bool                                               debugAnimGroup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.SetAllMonsterHp
struct UGMCheatManager_SetAllMonsterHp_Params
{
	int                                                HP;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ServerCMD
struct UGMCheatManager_ServerCMD_Params
{
	struct FString                                     Cmd;                                                      // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.ResumeAllLevelSequenceActors
struct UGMCheatManager_ResumeAllLevelSequenceActors_Params
{
};

// Function Development.GMCheatManager.RenderTargetCompressTest
struct UGMCheatManager_RenderTargetCompressTest_Params
{
	class UTexture*                                    pTexture;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Posoffset;                                                // (Parm, IsPlainOldData)
};

// Function Development.GMCheatManager.RefreshReconnectUI
struct UGMCheatManager_RefreshReconnectUI_Params
{
};

// Function Development.GMCheatManager.PVESpawnMonsterByPos
struct UGMCheatManager_PVESpawnMonsterByPos_Params
{
	int                                                MonsterID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PVESpawnMonsterByDistance
struct UGMCheatManager_PVESpawnMonsterByDistance_Params
{
	int                                                MonsterID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrontDist;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PVESpawnMonster
struct UGMCheatManager_PVESpawnMonster_Params
{
	int                                                MonsterID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopAI;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PVESetTestMonster
struct UGMCheatManager_PVESetTestMonster_Params
{
	class AActor*                                      InMonster;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PVEResetMonsterTable
struct UGMCheatManager_PVEResetMonsterTable_Params
{
};

// Function Development.GMCheatManager.PVEPrintMonsterCount
struct UGMCheatManager_PVEPrintMonsterCount_Params
{
};

// Function Development.GMCheatManager.PVEPrintAllAnim
struct UGMCheatManager_PVEPrintAllAnim_Params
{
	bool                                               bPrintAll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PVEPlayerTriggerSkill
struct UGMCheatManager_PVEPlayerTriggerSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PVEPlayerStopSkill
struct UGMCheatManager_PVEPlayerStopSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PVEMonsterTriggerSkill
struct UGMCheatManager_PVEMonsterTriggerSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PVEMonsterStopSkill
struct UGMCheatManager_PVEMonsterStopSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PVEMonsterRemoveBuffByID
struct UGMCheatManager_PVEMonsterRemoveBuffByID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauserSkillID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CauseByPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PVEMonsterAddBuffByID
struct UGMCheatManager_PVEMonsterAddBuffByID_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CauserSkillID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CauseByPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PVECloseMonsterLimit
struct UGMCheatManager_PVECloseMonsterLimit_Params
{
	bool                                               bCloseMonsterLimit;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PrintScreenDebug
struct UGMCheatManager_PrintScreenDebug_Params
{
	int                                                Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToDisplay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DebugMessage;                                             // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.PrintRegionObjectList
struct UGMCheatManager_PrintRegionObjectList_Params
{
};

// Function Development.GMCheatManager.PrintPool
struct UGMCheatManager_PrintPool_Params
{
};

// Function Development.GMCheatManager.PrintHP
struct UGMCheatManager_PrintHP_Params
{
};

// Function Development.GMCheatManager.PrintAllAnim
struct UGMCheatManager_PrintAllAnim_Params
{
};

// Function Development.GMCheatManager.PrintAllActorLocationByClassName
struct UGMCheatManager_PrintAllActorLocationByClassName_Params
{
	struct FString                                     InClassName;                                              // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.PlayBornIslandSequence
struct UGMCheatManager_PlayBornIslandSequence_Params
{
	bool                                               bPlay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PauseAnim
struct UGMCheatManager_PauseAnim_Params
{
	bool                                               bPause;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.PauseAllLevelSequenceActors
struct UGMCheatManager_PauseAllLevelSequenceActors_Params
{
};

// Function Development.GMCheatManager.PacketSimulationLag
struct UGMCheatManager_PacketSimulationLag_Params
{
	int                                                InSimulationLag;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.OpenHitTest
struct UGMCheatManager_OpenHitTest_Params
{
};

// Function Development.GMCheatManager.OpenFixationFreeFallVelocity
struct UGMCheatManager_OpenFixationFreeFallVelocity_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.NotifyGameModeParamsChanged
struct UGMCheatManager_NotifyGameModeParamsChanged_Params
{
	int                                                NewDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.NativeSimulateAction
struct UGMCheatManager_NativeSimulateAction_Params
{
	int                                                SimActionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.MoveSnake
struct UGMCheatManager_MoveSnake_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              moveInternal;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForwardRate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RightRate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ModifyVehicleSyncServerData
struct UGMCheatManager_ModifyVehicleSyncServerData_Params
{
	float                                              MinCorrectionInterval;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AllowMaxDiatanceSqAtServer;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ModifyVehicleSyncClientData
struct UGMCheatManager_ModifyVehicleSyncClientData_Params
{
};

// Function Development.GMCheatManager.ModifyVehicleBuoyancy
struct UGMCheatManager_ModifyVehicleBuoyancy_Params
{
	float                                              MeshDensity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.MarkAPMLevelFinish
struct UGMCheatManager_MarkAPMLevelFinish_Params
{
};

// Function Development.GMCheatManager.LogNetWorkParams
struct UGMCheatManager_LogNetWorkParams_Params
{
};

// Function Development.GMCheatManager.LogicAreaTest
struct UGMCheatManager_LogicAreaTest_Params
{
	int                                                AreaType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     str;                                                      // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.LogAllBuffInfo
struct UGMCheatManager_LogAllBuffInfo_Params
{
};

// Function Development.GMCheatManager.LogAllActors
struct UGMCheatManager_LogAllActors_Params
{
};

// Function Development.GMCheatManager.LocalConnectToLobbySrv
struct UGMCheatManager_LocalConnectToLobbySrv_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.KillAllPVEBot
struct UGMCheatManager_KillAllPVEBot_Params
{
};

// Function Development.GMCheatManager.KillAllPlayers
struct UGMCheatManager_KillAllPlayers_Params
{
};

// Function Development.GMCheatManager.ItemSpotLog
struct UGMCheatManager_ItemSpotLog_Params
{
};

// Function Development.GMCheatManager.InGameAndroidBack
struct UGMCheatManager_InGameAndroidBack_Params
{
};

// Function Development.GMCheatManager.GotoSpectatingDirectly
struct UGMCheatManager_GotoSpectatingDirectly_Params
{
};

// Function Development.GMCheatManager.GotoSpectating
struct UGMCheatManager_GotoSpectating_Params
{
};

// Function Development.GMCheatManager.GotoSpecificWeather
struct UGMCheatManager_GotoSpecificWeather_Params
{
	int                                                WeatherIdx;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMWayPointEvent
struct UGMCheatManager_GMWayPointEvent_Params
{
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMUseGunCollision
struct UGMCheatManager_GMUseGunCollision_Params
{
	bool                                               bIsUse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSuicideCurVehicle
struct UGMCheatManager_GMSuicideCurVehicle_Params
{
};

// Function Development.GMCheatManager.GMSuicide
struct UGMCheatManager_GMSuicide_Params
{
};

// Function Development.GMCheatManager.GMStopAI
struct UGMCheatManager_GMStopAI_Params
{
	bool                                               bStop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           InPlayerKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpeedUp
struct UGMCheatManager_GMSpeedUp_Params
{
};

// Function Development.GMCheatManager.GMSpawnSociallandSubVehicle01
struct UGMCheatManager_GMSpawnSociallandSubVehicle01_Params
{
};

// Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundPointWithAvatarList
struct UGMCheatManager_GMSpawnSocialLandPlayerAIAroundPointWithAvatarList_Params
{
	uint32_t                                           DataOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           AINum;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fRadius;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAIInvincible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithPet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithEqui;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AvatarList;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               bWithWeapon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundPoint
struct UGMCheatManager_GMSpawnSocialLandPlayerAIAroundPoint_Params
{
	uint32_t                                           DataOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           AINum;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fRadius;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAIInvincible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithPet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithEqui;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundMeWithAvatar
struct UGMCheatManager_GMSpawnSocialLandPlayerAIAroundMeWithAvatar_Params
{
	uint32_t                                           AINum;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fRadius;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAIInvincible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithPet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithEqui;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AvatarList;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               bWithWeapon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpawnSocialLandPlayerAIAroundMe
struct UGMCheatManager_GMSpawnSocialLandPlayerAIAroundMe_Params
{
	uint32_t                                           AINum;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fRadius;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAIInvincible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithPet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithEqui;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpawnSmartBearerTestPlane
struct UGMCheatManager_GMSpawnSmartBearerTestPlane_Params
{
};

// Function Development.GMCheatManager.GMSpawnSingleSocialLandPlayerAI
struct UGMCheatManager_GMSpawnSingleSocialLandPlayerAI_Params
{
	uint32_t                                           DataOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAIInvincible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithPet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithEqui;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpawnPlayerAIAroundPointDownloadable
struct UGMCheatManager_GMSpawnPlayerAIAroundPointDownloadable_Params
{
	uint32_t                                           iNum;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fRadius;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAIInvincible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithPet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpawnPlayerAIAroundPoint
struct UGMCheatManager_GMSpawnPlayerAIAroundPoint_Params
{
	uint32_t                                           iNum;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fRadius;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAIInvincible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithPet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpawnPlayerAIAroundMeDownloadable
struct UGMCheatManager_GMSpawnPlayerAIAroundMeDownloadable_Params
{
	uint32_t                                           iNum;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fRadius;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAIInvincible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithPet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpawnPlayerAIAroundMe
struct UGMCheatManager_GMSpawnPlayerAIAroundMe_Params
{
	uint32_t                                           iNum;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fRadius;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAIInvincible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithPet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpawnAutoTestAI
struct UGMCheatManager_GMSpawnAutoTestAI_Params
{
	int                                                NameExtraID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpawnAIWithIDAndLoc
struct UGMCheatManager_GMSpawnAIWithIDAndLoc_Params
{
	int                                                AIID;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpawnLocZ;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum1;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum2;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemID3;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum3;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSpawnAIOnAIPoint3
struct UGMCheatManager_GMSpawnAIOnAIPoint3_Params
{
};

// Function Development.GMCheatManager.GMSpawnAIOnAIPoint2
struct UGMCheatManager_GMSpawnAIOnAIPoint2_Params
{
};

// Function Development.GMCheatManager.GMSpawnAIOnAIPoint1
struct UGMCheatManager_GMSpawnAIOnAIPoint1_Params
{
};

// Function Development.GMCheatManager.GMSocialSetRotation
struct UGMCheatManager_GMSocialSetRotation_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSociallandPlayerMoveToTestPoint
struct UGMCheatManager_GMSociallandPlayerMoveToTestPoint_Params
{
};

// Function Development.GMCheatManager.GMSociallandPlayerMoveToAISpawnPoint1
struct UGMCheatManager_GMSociallandPlayerMoveToAISpawnPoint1_Params
{
};

// Function Development.GMCheatManager.GMSociallandChangeItemFromStr
struct UGMCheatManager_GMSociallandChangeItemFromStr_Params
{
	struct FString                                     ItemString;                                               // (Parm, ZeroConstructor)
	struct FString                                     EquimentItemString;                                       // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.GMShowHitFeedback
struct UGMCheatManager_GMShowHitFeedback_Params
{
	bool                                               bCombatHitFeedbackEnable;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSetSpeed
struct UGMCheatManager_GMSetSpeed_Params
{
	float                                              WalkSpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSetServerLevelLoadingMode
struct UGMCheatManager_GMSetServerLevelLoadingMode_Params
{
	bool                                               bNewLoadAll;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSetPawnNull
struct UGMCheatManager_GMSetPawnNull_Params
{
	bool                                               bIsNull;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSetMLAIModifyDamage
struct UGMCheatManager_GMSetMLAIModifyDamage_Params
{
	int                                                InIsModify;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSetMaxAINum
struct UGMCheatManager_GMSetMaxAINum_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSetJoystickEightDirection
struct UGMCheatManager_GMSetJoystickEightDirection_Params
{
	bool                                               IsNeedEightDirection;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSetJoystickActivatedRange
struct UGMCheatManager_GMSetJoystickActivatedRange_Params
{
	bool                                               IsNeedActivatedRange;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ActivatedRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSetHealth
struct UGMCheatManager_GMSetHealth_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSetDeliveryToMLAI
struct UGMCheatManager_GMSetDeliveryToMLAI_Params
{
	int                                                InIsDeliveryToMLAI;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSetCullDistance
struct UGMCheatManager_GMSetCullDistance_Params
{
	bool                                               bCullDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSetCircleTime
struct UGMCheatManager_GMSetCircleTime_Params
{
	float                                              cdTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMSelectorWayPoint
struct UGMCheatManager_GMSelectorWayPoint_Params
{
	struct FName                                       NameOfAIWayPointSelector;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                GMPathIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMRevivePlayer
struct UGMCheatManager_GMRevivePlayer_Params
{
};

// Function Development.GMCheatManager.GMRainCount
struct UGMCheatManager_GMRainCount_Params
{
	float                                              Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMIOSFrameRateLock
struct UGMCheatManager_GMIOSFrameRateLock_Params
{
	int                                                FrameRateLock;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMInvincible
struct UGMCheatManager_GMInvincible_Params
{
	bool                                               bInvincible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMIncreaseHealth
struct UGMCheatManager_GMIncreaseHealth_Params
{
};

// Function Development.GMCheatManager.GMGatherAllPlayerAIAroundMe
struct UGMCheatManager_GMGatherAllPlayerAIAroundMe_Params
{
	float                                              fRadius;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveAI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAIInvincible;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWithPet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMForceSuicide
struct UGMCheatManager_GMForceSuicide_Params
{
};

// Function Development.GMCheatManager.GMForceNullNetwork
struct UGMCheatManager_GMForceNullNetwork_Params
{
	int                                                bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMFollow
struct UGMCheatManager_GMFollow_Params
{
	struct FString                                     TargetName;                                               // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.GMDrawLine
struct UGMCheatManager_GMDrawLine_Params
{
	float                                              X1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              x2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              y2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMDrawDirLine
struct UGMCheatManager_GMDrawDirLine_Params
{
	float                                              StartX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartZ;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMDrawDebugSphere2
struct UGMCheatManager_GMDrawDebugSphere2_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMDrawDebugSphere
struct UGMCheatManager_GMDrawDebugSphere_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMDrawCone
struct UGMCheatManager_GMDrawCone_Params
{
	float                                              Degrees;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LineNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMDecreaseHealth
struct UGMCheatManager_GMDecreaseHealth_Params
{
};

// Function Development.GMCheatManager.GMChangeAIAype
struct UGMCheatManager_GMChangeAIAype_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           InPlayerKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMAutoTestChangeItem
struct UGMCheatManager_GMAutoTestChangeItem_Params
{
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemString;                                               // (Parm, ZeroConstructor)
	struct FString                                     EquimentItemString;                                       // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.GMAIFire
struct UGMCheatManager_GMAIFire_Params
{
};

// Function Development.GMCheatManager.GMAddItemForAI
struct UGMCheatManager_GMAddItemForAI_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           InPlayerKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMActiveRenderDynamicStyle
struct UGMCheatManager_GMActiveRenderDynamicStyle_Params
{
	bool                                               bSet;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GMActiveAI
struct UGMCheatManager_GMActiveAI_Params
{
};

// Function Development.GMCheatManager.GetGVMemberID
struct UGMCheatManager_GetGVMemberID_Params
{
	int                                                memberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.GetGold
struct UGMCheatManager_GetGold_Params
{
};

// Function Development.GMCheatManager.GenerateMonsterWave
struct UGMCheatManager_GenerateMonsterWave_Params
{
	int                                                ChapterID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LevelID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaveID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ForceStopDynamicWeatherChange
struct UGMCheatManager_ForceStopDynamicWeatherChange_Params
{
};

// Function Development.GMCheatManager.ForceStartNextDynamicWeatherChange
struct UGMCheatManager_ForceStartNextDynamicWeatherChange_Params
{
};

// Function Development.GMCheatManager.ForceKickoutAllPlayers
struct UGMCheatManager_ForceKickoutAllPlayers_Params
{
	int                                                LandId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ForceGC
struct UGMCheatManager_ForceGC_Params
{
};

// Function Development.GMCheatManager.ForceEndInputForAppWillDeactivate
struct UGMCheatManager_ForceEndInputForAppWillDeactivate_Params
{
};

// Function Development.GMCheatManager.FireSpawnAirplane
struct UGMCheatManager_FireSpawnAirplane_Params
{
};

// Function Development.GMCheatManager.FireReviveTeammate
struct UGMCheatManager_FireReviveTeammate_Params
{
	int                                                RespawnStartID;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bJump;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.FallKill
struct UGMCheatManager_FallKill_Params
{
	int                                                FallType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.EquipHelmetAndBodyArmor
struct UGMCheatManager_EquipHelmetAndBodyArmor_Params
{
	int                                                Lev;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.EnterPVELevel
struct UGMCheatManager_EnterPVELevel_Params
{
	int                                                ChapterID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LevelID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.EnterPawnState
struct UGMCheatManager_EnterPawnState_Params
{
	EPawnState                                         InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.EndAPMTag
struct UGMCheatManager_EndAPMTag_Params
{
};

// Function Development.GMCheatManager.EnablePool
struct UGMCheatManager_EnablePool_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.EnableHitBox
struct UGMCheatManager_EnableHitBox_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.EnableFuzzyInformation
struct UGMCheatManager_EnableFuzzyInformation_Params
{
};

// Function Development.GMCheatManager.EnableDSAnim
struct UGMCheatManager_EnableDSAnim_Params
{
	struct FString                                     MonsterName;                                              // (Parm, ZeroConstructor)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.DumpSmartBearerManager
struct UGMCheatManager_DumpSmartBearerManager_Params
{
};

// Function Development.GMCheatManager.DumpObjectNetProperties
struct UGMCheatManager_DumpObjectNetProperties_Params
{
	class UObject*                                     InObj;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.DumpMoveLog
struct UGMCheatManager_DumpMoveLog_Params
{
	bool                                               bDump;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.DumpLevels
struct UGMCheatManager_DumpLevels_Params
{
};

// Function Development.GMCheatManager.DumpDSNetConsiderList
struct UGMCheatManager_DumpDSNetConsiderList_Params
{
};

// Function Development.GMCheatManager.DumpAnimLayer
struct UGMCheatManager_DumpAnimLayer_Params
{
};

// Function Development.GMCheatManager.DumpAIOcclusion
struct UGMCheatManager_DumpAIOcclusion_Params
{
};

// Function Development.GMCheatManager.DSReconnectEvent
struct UGMCheatManager_DSReconnectEvent_Params
{
};

// Function Development.GMCheatManager.DSConnectLostEvent
struct UGMCheatManager_DSConnectLostEvent_Params
{
};

// Function Development.GMCheatManager.DismissIsland
struct UGMCheatManager_DismissIsland_Params
{
};

// Function Development.GMCheatManager.DeleverAnimalCountPerWave
struct UGMCheatManager_DeleverAnimalCountPerWave_Params
{
	EAnimalType                                        AnimalType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.DebugStopEMote
struct UGMCheatManager_DebugStopEMote_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.DebugStopCapture
struct UGMCheatManager_DebugStopCapture_Params
{
};

// Function Development.GMCheatManager.DebugStartEMote
struct UGMCheatManager_DebugStartEMote_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.DebugSpringArm
struct UGMCheatManager_DebugSpringArm_Params
{
	bool                                               bDebug;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.DebugSpeed
struct UGMCheatManager_DebugSpeed_Params
{
};

// Function Development.GMCheatManager.DebugSetChangeWearCoolDownTime
struct UGMCheatManager_DebugSetChangeWearCoolDownTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.DebugRoomCustomParams
struct UGMCheatManager_DebugRoomCustomParams_Params
{
	int                                                FirstCircleDelayTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FirstCircleAppearTime;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FirstWhiteCircleRadiusMultiplicator;                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BlueCircleDamageMultiplicator;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.DebugPoseState
struct UGMCheatManager_DebugPoseState_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.DebugOBNearPlayerList
struct UGMCheatManager_DebugOBNearPlayerList_Params
{
};

// Function Development.GMCheatManager.DebugMove
struct UGMCheatManager_DebugMove_Params
{
};

// Function Development.GMCheatManager.DebugLocation
struct UGMCheatManager_DebugLocation_Params
{
};

// Function Development.GMCheatManager.DebugLevelsInfo
struct UGMCheatManager_DebugLevelsInfo_Params
{
};

// Function Development.GMCheatManager.DebugFPPAnim
struct UGMCheatManager_DebugFPPAnim_Params
{
};

// Function Development.GMCheatManager.DebugFixedParams
struct UGMCheatManager_DebugFixedParams_Params
{
};

// Function Development.GMCheatManager.DebugFindFloorResult
struct UGMCheatManager_DebugFindFloorResult_Params
{
};

// Function Development.GMCheatManager.DebugCamera
struct UGMCheatManager_DebugCamera_Params
{
};

// Function Development.GMCheatManager.DebugAttach
struct UGMCheatManager_DebugAttach_Params
{
};

// Function Development.GMCheatManager.ClientSetSpeed
struct UGMCheatManager_ClientSetSpeed_Params
{
	float                                              Times;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGMSetSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ClearTestMesh
struct UGMCheatManager_ClearTestMesh_Params
{
};

// Function Development.GMCheatManager.ClearScreenDebug
struct UGMCheatManager_ClearScreenDebug_Params
{
};

// Function Development.GMCheatManager.ClearNoDriverVehicle
struct UGMCheatManager_ClearNoDriverVehicle_Params
{
};

// Function Development.GMCheatManager.ClearBuffPrivateData
struct UGMCheatManager_ClearBuffPrivateData_Params
{
};

// Function Development.GMCheatManager.ClearAnimLayer
struct UGMCheatManager_ClearAnimLayer_Params
{
	int                                                AnimLayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ClearAllTlog
struct UGMCheatManager_ClearAllTlog_Params
{
};

// Function Development.GMCheatManager.CheatBeginPlay
struct UGMCheatManager_CheatBeginPlay_Params
{
};

// Function Development.GMCheatManager.ChatTest
struct UGMCheatManager_ChatTest_Params
{
	struct FString                                     Content;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Development.GMCheatManager.ChangeViewTarget
struct UGMCheatManager_ChangeViewTarget_Params
{
};

// Function Development.GMCheatManager.ChangeToInfec
struct UGMCheatManager_ChangeToInfec_Params
{
	unsigned char                                      SubPawnType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ChangeMonsterWalkMode
struct UGMCheatManager_ChangeMonsterWalkMode_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ChangeAllTimeDuration
struct UGMCheatManager_ChangeAllTimeDuration_Params
{
	int                                                NewEndStateTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewStartShowLifeTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewMinimumAliveTime;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewMinimumPlayerNum;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSpecialLifeTime;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ChangeAIDamageRate
struct UGMCheatManager_ChangeAIDamageRate_Params
{
	float                                              InRate;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.ChangeAIAttackPlayerDamageRate
struct UGMCheatManager_ChangeAIAttackPlayerDamageRate_Params
{
	float                                              InRate;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.CastUIMsg
struct UGMCheatManager_CastUIMsg_Params
{
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
	struct FString                                     module;                                                   // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.CallOnReconnect
struct UGMCheatManager_CallOnReconnect_Params
{
};

// Function Development.GMCheatManager.CallLuaTableFunction
struct UGMCheatManager_CallLuaTableFunction_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.CallGMLua
struct UGMCheatManager_CallGMLua_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.CallGameModeLuaOverrideFunction
struct UGMCheatManager_CallGameModeLuaOverrideFunction_Params
{
	struct FString                                     FunctionName;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Development.GMCheatManager.CallGameModeLuaFunction
struct UGMCheatManager_CallGameModeLuaFunction_Params
{
	struct FString                                     FunctionName;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Development.GMCheatManager.BuildingCollide
struct UGMCheatManager_BuildingCollide_Params
{
	bool                                               InCollide;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AutoShoveling
struct UGMCheatManager_AutoShoveling_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AutoShvelingSeconds;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AutoSetPlayerLocation
struct UGMCheatManager_AutoSetPlayerLocation_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AnimDebugUseSkipMapForDistanceFactor
struct UGMCheatManager_AnimDebugUseSkipMapForDistanceFactor_Params
{
	bool                                               bFlag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AnimDebugUseLodMap
struct UGMCheatManager_AnimDebugUseLodMap_Params
{
	bool                                               bUseLodMap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AnimDebugUpdateFlag
struct UGMCheatManager_AnimDebugUpdateFlag_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AnimDebugNonRenderedRate
struct UGMCheatManager_AnimDebugNonRenderedRate_Params
{
	int                                                UpdateRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AnimDebugNonRenderedMinDist
struct UGMCheatManager_AnimDebugNonRenderedMinDist_Params
{
	float                                              minDist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AnimDebugNonRenderedMaxDist
struct UGMCheatManager_AnimDebugNonRenderedMaxDist_Params
{
	float                                              MaxDist;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AnimDebugLodSkipMap
struct UGMCheatManager_AnimDebugLodSkipMap_Params
{
	TMap<int, int>                                     SkipMap;                                                  // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.AnimDebugEnable
struct UGMCheatManager_AnimDebugEnable_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AnimDebugBaseDistFactor
struct UGMCheatManager_AnimDebugBaseDistFactor_Params
{
	TArray<float>                                      BaseDistFactor;                                           // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.AirDropByClassPath
struct UGMCheatManager_AirDropByClassPath_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ClassPath;                                                // (Parm, ZeroConstructor)
};

// Function Development.GMCheatManager.AILog
struct UGMCheatManager_AILog_Params
{
};

// Function Development.GMCheatManager.AddWonderfulPeriod
struct UGMCheatManager_AddWonderfulPeriod_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AddTestTouchInput
struct UGMCheatManager_AddTestTouchInput_Params
{
	int                                                FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AddScore
struct UGMCheatManager_AddScore_Params
{
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatManager.AddAllTestRes
struct UGMCheatManager_AddAllTestRes_Params
{
};

// Function Development.GMCheatManager.ActiveCurCamera
struct UGMCheatManager_ActiveCurCamera_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatMod.TriggerHunterRevival
struct UGMCheatMod_TriggerHunterRevival_Params
{
};

// Function Development.GMCheatMod.SetUAETriggerEnable
struct UGMCheatMod_SetUAETriggerEnable_Params
{
	bool                                               IsEnbale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatMod.SetInfectResetPlayerInterTime
struct UGMCheatMod_SetInfectResetPlayerInterTime_Params
{
	float                                              InterTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatMod.SetAllInfectedAreaLevel
struct UGMCheatMod_SetAllInfectedAreaLevel_Params
{
	int                                                LevelID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatMod.OnBuyRevivalTeammate
struct UGMCheatMod_OnBuyRevivalTeammate_Params
{
	int                                                TeammateIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatMod.OnBuyRevivalSign
struct UGMCheatMod_OnBuyRevivalSign_Params
{
};

// Function Development.GMCheatMod.InfectionEndRound
struct UGMCheatMod_InfectionEndRound_Params
{
};

// Function Development.GMCheatMod.GetGameResult
struct UGMCheatMod_GetGameResult_Params
{
};

// Function Development.GMCheatMod.DebugEnableFerrisWheelTick
struct UGMCheatMod_DebugEnableFerrisWheelTick_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatMod.ClearBossBornPoint
struct UGMCheatMod_ClearBossBornPoint_Params
{
};

// Function Development.GMCheatMod.ChangePVELevel
struct UGMCheatMod_ChangePVELevel_Params
{
	int                                                Lv;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatMod.CallZombieFlowAirDrop
struct UGMCheatMod_CallZombieFlowAirDrop_Params
{
	int                                                ZombieID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatMod.CallZombieAirDrop
struct UGMCheatMod_CallZombieAirDrop_Params
{
	int                                                ZombieID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatMod.AddBossBornPoint
struct UGMCheatMod_AddBossBornPoint_Params
{
	float                                              BornX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BornY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.UnLoadAllCollision
struct UGMCheatOther_UnLoadAllCollision_Params
{
	bool                                               Unload;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.ShutDownBroadcastFatalDamage
struct UGMCheatOther_ShutDownBroadcastFatalDamage_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.ShowHideLandscapeComponent
struct UGMCheatOther_ShowHideLandscapeComponent_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.SetSingleThreadUpdateAnim
struct UGMCheatOther_SetSingleThreadUpdateAnim_Params
{
	bool                                               InIsSingleThread;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.SetIsShowBlood
struct UGMCheatOther_SetIsShowBlood_Params
{
	bool                                               InIsShowBlood;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.RetrievePlayerBattleResultData
struct UGMCheatOther_RetrievePlayerBattleResultData_Params
{
};

// Function Development.GMCheatOther.RecoverStatusAfterReconnecting
struct UGMCheatOther_RecoverStatusAfterReconnecting_Params
{
};

// Function Development.GMCheatOther.ObserveWhoKilledMe
struct UGMCheatOther_ObserveWhoKilledMe_Params
{
};

// Function Development.GMCheatOther.GMTestSpectateRPC
struct UGMCheatOther_GMTestSpectateRPC_Params
{
};

// Function Development.GMCheatOther.GMTestSpectateException
struct UGMCheatOther_GMTestSpectateException_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.GMTestExternalData
struct UGMCheatOther_GMTestExternalData_Params
{
	struct FString                                     InStr;                                                    // (Parm, ZeroConstructor)
};

// Function Development.GMCheatOther.GMTeleport
struct UGMCheatOther_GMTeleport_Params
{
	struct FName                                       Teleporter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.GMSetScalarParam
struct UGMCheatOther_GMSetScalarParam_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ShaderName;                                               // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.GMSendDailyTaskReport
struct UGMCheatOther_GMSendDailyTaskReport_Params
{
};

// Function Development.GMCheatOther.GMBroastSyncTaskInfo
struct UGMCheatOther_GMBroastSyncTaskInfo_Params
{
};

// Function Development.GMCheatOther.EmptyLandscapeActor
struct UGMCheatOther_EmptyLandscapeActor_Params
{
};

// Function Development.GMCheatOther.DumpGUIDCache
struct UGMCheatOther_DumpGUIDCache_Params
{
	int                                                DriverIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.DumpActiveObject
struct UGMCheatOther_DumpActiveObject_Params
{
};

// Function Development.GMCheatOther.DebugEnableDrawSearchLine
struct UGMCheatOther_DebugEnableDrawSearchLine_Params
{
	int                                                bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.CanSeeAllUI
struct UGMCheatOther_CanSeeAllUI_Params
{
	bool                                               bUIVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatOther.AutoSelectTeammateToView
struct UGMCheatOther_AutoSelectTeammateToView_Params
{
};

// Function Development.GMCheatSkill.UpgradeSkillLevel
struct UGMCheatSkill_UpgradeSkillLevel_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.TryDeleteOneSkill
struct UGMCheatSkill_TryDeleteOneSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmediately;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.TryAddOneSkill
struct UGMCheatSkill_TryAddOneSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ButtonSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.TriggerSkillWithID
struct UGMCheatSkill_TriggerSkillWithID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.StartSkill
struct UGMCheatSkill_StartSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.StartMainSkill
struct UGMCheatSkill_StartMainSkill_Params
{
};

// Function Development.GMCheatSkill.RemoveVehicleBuffBySkill
struct UGMCheatSkill_RemoveVehicleBuffBySkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.RemoveVehicleBuff
struct UGMCheatSkill_RemoveVehicleBuff_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.RemoveBuffBySkill
struct UGMCheatSkill_RemoveBuffBySkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IsPlayer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.RemoveBuff
struct UGMCheatSkill_RemoveBuff_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IsPlayer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BuffLayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.ReloadPVETable
struct UGMCheatSkill_ReloadPVETable_Params
{
};

// Function Development.GMCheatSkill.EnableSkillCD
struct UGMCheatSkill_EnableSkillCD_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.DynamicRemoveSkill
struct UGMCheatSkill_DynamicRemoveSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.DynamicAddSkill
struct UGMCheatSkill_DynamicAddSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.DumpSkills
struct UGMCheatSkill_DumpSkills_Params
{
};

// Function Development.GMCheatSkill.AddVehicleBuffBySkill
struct UGMCheatSkill_AddVehicleBuffBySkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.AddVehicleBuff
struct UGMCheatSkill_AddVehicleBuff_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.AddSkillToken
struct UGMCheatSkill_AddSkillToken_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAdd;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.AddBuffBySkill
struct UGMCheatSkill_AddBuffBySkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IsPlayer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatSkill.AddBuff
struct UGMCheatSkill_AddBuff_Params
{
	int                                                BuffID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IsPlayer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.VW_Seat
struct UGMCheatVehicle_VW_Seat_Params
{
	int                                                change;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.VehicleResetTo
struct UGMCheatVehicle_VehicleResetTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.VehicleMoveTo
struct UGMCheatVehicle_VehicleMoveTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.ToggleVehicleSync
struct UGMCheatVehicle_ToggleVehicleSync_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.SpawnVehicleWithPathAndLoc
struct UGMCheatVehicle_SpawnVehicleWithPathAndLoc_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.SpawnVehicleWithPath
struct UGMCheatVehicle_SpawnVehicleWithPath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.SpawnVehicle
struct UGMCheatVehicle_SpawnVehicle_Params
{
};

// Function Development.GMCheatVehicle.SpawnAllVehicle
struct UGMCheatVehicle_SpawnAllVehicle_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function Development.GMCheatVehicle.ShowOpenSequence
struct UGMCheatVehicle_ShowOpenSequence_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.SetSnowBoradRotationInAir
struct UGMCheatVehicle_SetSnowBoradRotationInAir_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.SetFuelByPercent
struct UGMCheatVehicle_SetFuelByPercent_Params
{
	float                                              percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.ResetVehicleEngine
struct UGMCheatVehicle_ResetVehicleEngine_Params
{
};

// Function Development.GMCheatVehicle.ReqLeaveVehicle
struct UGMCheatVehicle_ReqLeaveVehicle_Params
{
};

// Function Development.GMCheatVehicle.ReqExchangeVehicleCharacter
struct UGMCheatVehicle_ReqExchangeVehicleCharacter_Params
{
	int                                                Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.ReqEnterVehicle
struct UGMCheatVehicle_ReqEnterVehicle_Params
{
	float                                              dis;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.ReqEnterSnowBoard
struct UGMCheatVehicle_ReqEnterSnowBoard_Params
{
};

// Function Development.GMCheatVehicle.ReplaceVehicleWithPath
struct UGMCheatVehicle_ReplaceVehicleWithPath_Params
{
	struct FString                                     Path;                                                     // (Parm, ZeroConstructor)
};

// Function Development.GMCheatVehicle.ReplaceVehicle
struct UGMCheatVehicle_ReplaceVehicle_Params
{
};

// Function Development.GMCheatVehicle.MakeVehicleFly
struct UGMCheatVehicle_MakeVehicleFly_Params
{
	int                                                IsFly;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUp;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatVehicle.KillAllEnermyVehicle
struct UGMCheatVehicle_KillAllEnermyVehicle_Params
{
};

// Function Development.GMCheatWeapon.ToggleShootVertify
struct UGMCheatWeapon_ToggleShootVertify_Params
{
};

// Function Development.GMCheatWeapon.ShowWeaponDirection
struct UGMCheatWeapon_ShowWeaponDirection_Params
{
	int                                                Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatWeapon.ShowBulletInfo
struct UGMCheatWeapon_ShowBulletInfo_Params
{
};

// Function Development.GMCheatWeapon.SetWeaponAttrValue
struct UGMCheatWeapon_SetWeaponAttrValue_Params
{
	struct FString                                     AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatWeapon.SetWeaponAttrReloadTable
struct UGMCheatWeapon_SetWeaponAttrReloadTable_Params
{
	struct FString                                     tableName;                                                // (Parm, ZeroConstructor)
};

// Function Development.GMCheatWeapon.SetShootPveVertify
struct UGMCheatWeapon_SetShootPveVertify_Params
{
	bool                                               IsVertify;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatWeapon.SetShootPveDebug
struct UGMCheatWeapon_SetShootPveDebug_Params
{
	bool                                               DebugShootPve;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatWeapon.SetAIGenerateArmsRaceWeapon
struct UGMCheatWeapon_SetAIGenerateArmsRaceWeapon_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatWeapon.ScopeOut
struct UGMCheatWeapon_ScopeOut_Params
{
};

// Function Development.GMCheatWeapon.ScopeIn
struct UGMCheatWeapon_ScopeIn_Params
{
};

// Function Development.GMCheatWeapon.PrintWeaponAllState
struct UGMCheatWeapon_PrintWeaponAllState_Params
{
};

// Function Development.GMCheatWeapon.GMSwitchWeaponSpeedScale
struct UGMCheatWeapon_GMSwitchWeaponSpeedScale_Params
{
	float                                              SwitchScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatWeapon.GMSetReportWeaponNum
struct UGMCheatWeapon_GMSetReportWeaponNum_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatWeapon.EnableCurrentWeaponInfiniteBullets
struct UGMCheatWeapon_EnableCurrentWeaponInfiniteBullets_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatWeapon.DebugEnableBulletImpact
struct UGMCheatWeapon_DebugEnableBulletImpact_Params
{
	int                                                bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatWeapon.CollectAllPlayerWeaponPosInfo
struct UGMCheatWeapon_CollectAllPlayerWeaponPosInfo_Params
{
};

// Function Development.GMCheatWeapon.ChangeWeaponFunction
struct UGMCheatWeapon_ChangeWeaponFunction_Params
{
	int                                                NewWeaponFunction;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatWeapon.ChangeShootWeaponStrValue
struct UGMCheatWeapon_ChangeShootWeaponStrValue_Params
{
	struct FString                                     StrName;                                                  // (Parm, ZeroConstructor)
	struct FString                                     KeyName;                                                  // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.GMCheatWeapon.ChangeArmsRaceWeaponGroup
struct UGMCheatWeapon_ChangeArmsRaceWeaponGroup_Params
{
	int                                                WeaponGroupID;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.QPSBPLibrary.SwitchUIWidgetShowFromUserWidget
struct UQPSBPLibrary_SwitchUIWidgetShowFromUserWidget_Params
{
	struct FName                                       ContainName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UserWidgetName;                                           // (Parm, ZeroConstructor)
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
};

// Function Development.QPSBPLibrary.SwitchUIWidgetShow
struct UQPSBPLibrary_SwitchUIWidgetShow_Params
{
	struct FName                                       ContainName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
};

// Function Development.QPSBPLibrary.SwitchUIContainsShow
struct UQPSBPLibrary_SwitchUIContainsShow_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.QPSBPLibrary.IsPublishVersion
struct UQPSBPLibrary_IsPublishVersion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Development.QPSBPLibrary.GetHZBValue
struct UQPSBPLibrary_GetHZBValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Development.QPSBPLibrary.GetDistanceCullingFactor
struct UQPSBPLibrary_GetDistanceCullingFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Development.VisualDebugComponent.StopContinuous
struct UVisualDebugComponent_StopContinuous_Params
{
	int                                                TaskId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugComponent.RPC_DrawDebug_Text
struct UVisualDebugComponent_RPC_DrawDebug_Text_Params
{
	struct FDrawShape_Text                             Text;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Development.VisualDebugComponent.RPC_DrawDebug_StopMultiShapes
struct UVisualDebugComponent_RPC_DrawDebug_StopMultiShapes_Params
{
	int                                                TaskId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugComponent.RPC_DrawDebug_Sphere
struct UVisualDebugComponent_RPC_DrawDebug_Sphere_Params
{
	struct FDrawShape_Sphere                           Sphere;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Development.VisualDebugComponent.RPC_DrawDebug_MultiShapes
struct UVisualDebugComponent_RPC_DrawDebug_MultiShapes_Params
{
	TArray<struct FDrawShape_Sphere>                   Spheres;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<struct FDrawShape_Line>                     Lines;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Development.VisualDebugComponent.RPC_DrawDebug_Line
struct UVisualDebugComponent_RPC_DrawDebug_Line_Params
{
	struct FDrawShape_Line                             Line;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Development.VisualDebugComponent.RPC_DrawDebug_Cylinder
struct UVisualDebugComponent_RPC_DrawDebug_Cylinder_Params
{
	struct FDrawShape_Cylinder                         Cylinder;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Development.VisualDebugComponent.RPC_DrawDebug_Box
struct UVisualDebugComponent_RPC_DrawDebug_Box_Params
{
	struct FDrawShape_Box                              Box;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Sphere
struct UVisualDebugComponent_NetMulticast_DrawDebug_Sphere_Params
{
	struct FDrawShape_Sphere                           Sphere;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Line
struct UVisualDebugComponent_NetMulticast_DrawDebug_Line_Params
{
	struct FDrawShape_Line                             Line;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Cylinder
struct UVisualDebugComponent_NetMulticast_DrawDebug_Cylinder_Params
{
	struct FDrawShape_Cylinder                         Cylinder;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Development.VisualDebugComponent.NetMulticast_DrawDebug_Box
struct UVisualDebugComponent_NetMulticast_DrawDebug_Box_Params
{
	struct FDrawShape_Box                              Box;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function Development.VisualDebugComponent.MarkContinuousEnd
struct UVisualDebugComponent_MarkContinuousEnd_Params
{
};

// Function Development.VisualDebugComponent.MarkContinuousBegin
struct UVisualDebugComponent_MarkContinuousBegin_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Development.VisualDebugComponent.DrawString
struct UVisualDebugComponent_DrawString_Params
{
	struct FVector                                     TextLocation;                                             // (ConstParm, Parm, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	class AActor*                                      TestBaseActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      TextColor;                                                // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugComponent.DrawSphere
struct UVisualDebugComponent_DrawSphere_Params
{
	struct FVector                                     Center;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugComponent.DrawLine
struct UVisualDebugComponent_DrawLine_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugComponent.DrawCylinder
struct UVisualDebugComponent_DrawCylinder_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugComponent.DrawBox
struct UVisualDebugComponent_DrawBox_Params
{
	struct FVector                                     Center;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugLibrary.StopDrawContinuous
struct UVisualDebugLibrary_StopDrawContinuous_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TaskId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugLibrary.MarkContinuousEnd
struct UVisualDebugLibrary_MarkContinuousEnd_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugLibrary.MarkContinuousBegin
struct UVisualDebugLibrary_MarkContinuousBegin_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Development.VisualDebugLibrary.DrawText
struct UVisualDebugLibrary_DrawText_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TextLocation;                                             // (ConstParm, Parm, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	class AActor*                                      TestBaseActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugLibrary.DrawSphere
struct UVisualDebugLibrary_DrawSphere_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugLibrary.DrawLine
struct UVisualDebugLibrary_DrawLine_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineStart;                                                // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (ConstParm, Parm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugLibrary.DrawCylinder
struct UVisualDebugLibrary_DrawCylinder_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Development.VisualDebugLibrary.DrawBox
struct UVisualDebugLibrary_DrawBox_Params
{
	class APawn*                                       Requester;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Extent;                                                   // (Parm, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

