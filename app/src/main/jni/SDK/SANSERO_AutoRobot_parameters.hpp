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

// Function AutoRobot.AutoTestInterface.StarJumpPlane
struct UAutoTestInterface_StarJumpPlane_Params
{
};

// Function AutoRobot.AutoTestSubsystem.Swipe
struct UAutoTestSubsystem_Swipe_Params
{
	struct FString                                     InPath;                                                   // (Parm, ZeroConstructor)
	float                                              Duringtime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TouchIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScreensizeX;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScreensizeY;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.StopRecordInput
struct UAutoTestSubsystem_StopRecordInput_Params
{
};

// Function AutoRobot.AutoTestSubsystem.StopPlayInput
struct UAutoTestSubsystem_StopPlayInput_Params
{
};

// Function AutoRobot.AutoTestSubsystem.StartRemoteControl
struct UAutoTestSubsystem_StartRemoteControl_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Host;                                                     // (Parm, ZeroConstructor)
	int                                                Port;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.StartRecordInput
struct UAutoTestSubsystem_StartRecordInput_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function AutoRobot.AutoTestSubsystem.StartPlayInput
struct UAutoTestSubsystem_StartPlayInput_Params
{
};

// Function AutoRobot.AutoTestSubsystem.SetCustomRouteLine
struct UAutoTestSubsystem_SetCustomRouteLine_Params
{
};

// Function AutoRobot.AutoTestSubsystem.RegisterInputProcessor
struct UAutoTestSubsystem_RegisterInputProcessor_Params
{
};

// Function AutoRobot.AutoTestSubsystem.PVEAutoTestGetEnemyLocation
struct UAutoTestSubsystem_PVEAutoTestGetEnemyLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.PubgmSimulateActionClientEx
struct UAutoTestSubsystem_PubgmSimulateActionClientEx_Params
{
	int                                                SimulateType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.ParsePoint
struct UAutoTestSubsystem_ParsePoint_Params
{
	struct FString                                     SrcStr;                                                   // (Parm, ZeroConstructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.OpenDebugg
struct UAutoTestSubsystem_OpenDebugg_Params
{
};

// Function AutoRobot.AutoTestSubsystem.OnStopAutoTest
struct UAutoTestSubsystem_OnStopAutoTest_Params
{
};

// Function AutoRobot.AutoTestSubsystem.OnStartAutoTest
struct UAutoTestSubsystem_OnStartAutoTest_Params
{
};

// Function AutoRobot.AutoTestSubsystem.OnGameStart
struct UAutoTestSubsystem_OnGameStart_Params
{
};

// Function AutoRobot.AutoTestSubsystem.OnGameEnd
struct UAutoTestSubsystem_OnGameEnd_Params
{
};

// Function AutoRobot.AutoTestSubsystem.IsUIAutoTest
struct UAutoTestSubsystem_IsUIAutoTest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.IsSecAutoRunTest
struct UAutoTestSubsystem_IsSecAutoRunTest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.IsGAutomatorTest
struct UAutoTestSubsystem_IsGAutomatorTest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGamePVEProfile
struct UAutoTestSubsystem_IsAutoRunTestGamePVEProfile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGamePVE
struct UAutoTestSubsystem_IsAutoRunTestGamePVE_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGameBindComponent
struct UAutoTestSubsystem_IsAutoRunTestGameBindComponent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.IsAutoRunTestGame
struct UAutoTestSubsystem_IsAutoRunTestGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.GetWidgetPathByPos
struct UAutoTestSubsystem_GetWidgetPathByPos_Params
{
	int                                                StartX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScreensizeX;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScreensizeY;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.GetRuntimeProfileData
struct UAutoTestSubsystem_GetRuntimeProfileData_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.AutoTestSubsystem.GetAutoTestInterface
struct UAutoTestSubsystem_GetAutoTestInterface_Params
{
	class UAutoTestInterface*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.GetAutoRunTestServerIdx
struct UAutoTestSubsystem_GetAutoRunTestServerIdx_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.GetAutoRunPassWD
struct UAutoTestSubsystem_GetAutoRunPassWD_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.AutoTestSubsystem.GetAutoRunLuaTest
struct UAutoTestSubsystem_GetAutoRunLuaTest_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.AutoTestSubsystem.GetAutoRunAccount
struct UAutoTestSubsystem_GetAutoRunAccount_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.AutoTestSubsystem.CloseDebugg
struct UAutoTestSubsystem_CloseDebugg_Params
{
};

// Function AutoRobot.AutoTestSubsystem.ClickButton
struct UAutoTestSubsystem_ClickButton_Params
{
	struct FString                                     InPath;                                                   // (Parm, ZeroConstructor)
	float                                              Duringtime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StartY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TouchIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScreensizeX;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScreensizeY;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UsePos;                                                   // (Parm, ZeroConstructor)
};

// Function AutoRobot.AutoTestSubsystem.CheckStaticMesh
struct UAutoTestSubsystem_CheckStaticMesh_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeformationDistance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckComplexCollisionQuery;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestWaitForUIWithName
struct UAutoTestSubsystem_AutoTestWaitForUIWithName_Params
{
	struct FString                                     UIName;                                                   // (Parm, ZeroConstructor)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestWaitForSecond
struct UAutoTestSubsystem_AutoTestWaitForSecond_Params
{
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestWaitForJumpPlane
struct UAutoTestSubsystem_AutoTestWaitForJumpPlane_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestVehicleDriverShoot
struct UAutoTestSubsystem_AutoTestVehicleDriverShoot_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestVaultWall
struct UAutoTestSubsystem_AutoTestVaultWall_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestUsePropSkillClientEx
struct UAutoTestSubsystem_AutoTestUsePropSkillClientEx_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestUseItemClientEx
struct UAutoTestSubsystem_AutoTestUseItemClientEx_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestUseItem
struct UAutoTestSubsystem_AutoTestUseItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestUpgradePropSkillClientEx
struct UAutoTestSubsystem_AutoTestUpgradePropSkillClientEx_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestToggleVehicleSync
struct UAutoTestSubsystem_AutoTestToggleVehicleSync_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestThrowBoomOnlyClientEx
struct UAutoTestSubsystem_AutoTestThrowBoomOnlyClientEx_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestThrowBoom
struct UAutoTestSubsystem_AutoTestThrowBoom_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestSwitchWeapon
struct UAutoTestSubsystem_AutoTestSwitchWeapon_Params
{
	int                                                WeaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestSwitchMode
struct UAutoTestSubsystem_AutoTestSwitchMode_Params
{
	struct FString                                     FunName;                                                  // (Parm, ZeroConstructor)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestStopRecordStats
struct UAutoTestSubsystem_AutoTestStopRecordStats_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestStatsCommand
struct UAutoTestSubsystem_AutoTestStatsCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestStartRecordStats
struct UAutoTestSubsystem_AutoTestStartRecordStats_Params
{
	struct FString                                     FileStr;                                                  // (Parm, ZeroConstructor)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestStartFireOnlyClientEx
struct UAutoTestSubsystem_AutoTestStartFireOnlyClientEx_Params
{
	int                                                InX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestStartFire
struct UAutoTestSubsystem_AutoTestStartFire_Params
{
	int                                                InX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestSpecating
struct UAutoTestSubsystem_AutoTestSpecating_Params
{
	int                                                LeftTeamCnt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestSpawnVehicle
struct UAutoTestSubsystem_AutoTestSpawnVehicle_Params
{
	struct FString                                     ResPath;                                                  // (Parm, ZeroConstructor)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestSpawnAI
struct UAutoTestSubsystem_AutoTestSpawnAI_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosiX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosiY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PosiZ;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestSetVehicleRotation
struct UAutoTestSubsystem_AutoTestSetVehicleRotation_Params
{
	int                                                InX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestSetRecordFrequency
struct UAutoTestSubsystem_AutoTestSetRecordFrequency_Params
{
	int                                                Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestSetActorRotation
struct UAutoTestSubsystem_AutoTestSetActorRotation_Params
{
	float                                              InRate;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSpeed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestSetActorPitch
struct UAutoTestSubsystem_AutoTestSetActorPitch_Params
{
	float                                              InRate;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestSetActorFacePoint
struct UAutoTestSubsystem_AutoTestSetActorFacePoint_Params
{
	int                                                InX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestSendBuffertoSvr
struct UAutoTestSubsystem_AutoTestSendBuffertoSvr_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestReloadOnlyClientEx
struct UAutoTestSubsystem_AutoTestReloadOnlyClientEx_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestPickupItemOnlyClientEx
struct UAutoTestSubsystem_AutoTestPickupItemOnlyClientEx_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestPickupItem
struct UAutoTestSubsystem_AutoTestPickupItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestOpenTraceRPC
struct UAutoTestSubsystem_AutoTestOpenTraceRPC_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestOpenScope
struct UAutoTestSubsystem_AutoTestOpenScope_Params
{
	bool                                               bOpenScope;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestOpenDoorOnlyClientEx
struct UAutoTestSubsystem_AutoTestOpenDoorOnlyClientEx_Params
{
	int                                                bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestMustDie
struct UAutoTestSubsystem_AutoTestMustDie_Params
{
	int                                                LeftTeamCnt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestMoveVehicleForward
struct UAutoTestSubsystem_AutoTestMoveVehicleForward_Params
{
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestMoveToPoint
struct UAutoTestSubsystem_AutoTestMoveToPoint_Params
{
	int                                                InX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestJumpPlane
struct UAutoTestSubsystem_AutoTestJumpPlane_Params
{
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestJump
struct UAutoTestSubsystem_AutoTestJump_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestIsOnVehicle
struct UAutoTestSubsystem_AutoTestIsOnVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestIsDriver
struct UAutoTestSubsystem_AutoTestIsDriver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestIsCurrentCommandFinished
struct UAutoTestSubsystem_AutoTestIsCurrentCommandFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestInputMovement
struct UAutoTestSubsystem_AutoTestInputMovement_Params
{
	float                                              InRate;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestInputKey
struct UAutoTestSubsystem_AutoTestInputKey_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AmountDepressed;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGamepad;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGMVehicleMoveAndTowardClientEx
struct UAutoTestSubsystem_AutoTestGMVehicleMoveAndTowardClientEx_Params
{
	float                                              InX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InX1;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InY1;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InZ1;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGMGotoClientEx
struct UAutoTestSubsystem_AutoTestGMGotoClientEx_Params
{
	int                                                InX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGMGoto
struct UAutoTestSubsystem_AutoTestGMGoto_Params
{
	int                                                InX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGMCommand
struct UAutoTestSubsystem_AutoTestGMCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetVehicleLocationClientEx
struct UAutoTestSubsystem_AutoTestGetVehicleLocationClientEx_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetVehicleLocation
struct UAutoTestSubsystem_AutoTestGetVehicleLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetRuntimeStats
struct UAutoTestSubsystem_AutoTestGetRuntimeStats_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetRenderTimeDetail
struct UAutoTestSubsystem_AutoTestGetRenderTimeDetail_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetPrimitivesDetail
struct UAutoTestSubsystem_AutoTestGetPrimitivesDetail_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetOnVehicle
struct UAutoTestSubsystem_AutoTestGetOnVehicle_Params
{
	int                                                SeatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetOffVehicle
struct UAutoTestSubsystem_AutoTestGetOffVehicle_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetNearVehiclePos
struct UAutoTestSubsystem_AutoTestGetNearVehiclePos_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetMemoryDetail
struct UAutoTestSubsystem_AutoTestGetMemoryDetail_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetMapName
struct UAutoTestSubsystem_AutoTestGetMapName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetLuaReturnValue
struct UAutoTestSubsystem_AutoTestGetLuaReturnValue_Params
{
	struct FString                                     retval;                                                   // (Parm, ZeroConstructor)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetGameModeState
struct UAutoTestSubsystem_AutoTestGetGameModeState_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetFrameInfo
struct UAutoTestSubsystem_AutoTestGetFrameInfo_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetDrawCallDetail
struct UAutoTestSubsystem_AutoTestGetDrawCallDetail_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetDis2D
struct UAutoTestSubsystem_AutoTestGetDis2D_Params
{
	int                                                InX1;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InY1;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InZ1;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InX2;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InY2;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InZ2;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetCircleLocationClientEx
struct UAutoTestSubsystem_AutoTestGetCircleLocationClientEx_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetAvailableDeadBoxItem
struct UAutoTestSubsystem_AutoTestGetAvailableDeadBoxItem_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetAllActorNames
struct UAutoTestSubsystem_AutoTestGetAllActorNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetActorName
struct UAutoTestSubsystem_AutoTestGetActorName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetActorLocationListClientEx
struct UAutoTestSubsystem_AutoTestGetActorLocationListClientEx_Params
{
	int                                                ActorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestGetActorLocation
struct UAutoTestSubsystem_AutoTestGetActorLocation_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestForceVehiclePosPullClientEx
struct UAutoTestSubsystem_AutoTestForceVehiclePosPullClientEx_Params
{
	bool                                               bNext;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestForceDeleteCmdAnim
struct UAutoTestSubsystem_AutoTestForceDeleteCmdAnim_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestEnableUITest
struct UAutoTestSubsystem_AutoTestEnableUITest_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestEnableTickOrVisibilityByActorName
struct UAutoTestSubsystem_AutoTestEnableTickOrVisibilityByActorName_Params
{
	struct FString                                     actorName;                                                // (Parm, ZeroConstructor)
	bool                                               bEnableTick;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestDropItemClientEx
struct UAutoTestSubsystem_AutoTestDropItemClientEx_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nCount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestContinuousMoveTo
struct UAutoTestSubsystem_AutoTestContinuousMoveTo_Params
{
	float                                              InX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestConsoleCommand
struct UAutoTestSubsystem_AutoTestConsoleCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function AutoRobot.AutoTestSubsystem.AutoTestCloseTraceRPC
struct UAutoTestSubsystem_AutoTestCloseTraceRPC_Params
{
};

// Function AutoRobot.AutoTestSubsystem.AutoTestAddItem
struct UAutoTestSubsystem_AutoTestAddItem_Params
{
	int                                                ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nCount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoMoveToTargetPosClientEx
struct UAutoTestSubsystem_AutoMoveToTargetPosClientEx_Params
{
	struct FVector                                     targetPos;                                                // (Parm, IsPlainOldData)
};

// Function AutoRobot.AutoTestSubsystem.AutoMovePawnToTargetPosClientEx
struct UAutoTestSubsystem_AutoMovePawnToTargetPosClientEx_Params
{
	struct FVector                                     targetPos;                                                // (Parm, IsPlainOldData)
};

// Function AutoRobot.PubgmAutoRun.VehicleTowardTo
struct UPubgmAutoRun_VehicleTowardTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.PubgmAutoRun.VehicleMoveTo
struct UPubgmAutoRun_VehicleMoveTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.PubgmAutoRun.VehicleMoveAndTowardTo
struct UPubgmAutoRun_VehicleMoveAndTowardTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              X1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z1;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction AutoRobot.PubgmAutoRun.OnPubgmAutoRunSimulateAction__DelegateSignature
struct UPubgmAutoRun_OnPubgmAutoRunSimulateAction__DelegateSignature_Params
{
	int                                                SimActionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.PubgmAutoRun.NeedCmdAutoRun
struct UPubgmAutoRun_NeedCmdAutoRun_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.PubgmAutoRun.NativeSimulateAction
struct UPubgmAutoRun_NativeSimulateAction_Params
{
	int                                                SimActionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.PubgmAutoRun.InitRoutePoint
struct UPubgmAutoRun_InitRoutePoint_Params
{
};

// Function AutoRobot.PubgmAutoRun.GMGotoPosition
struct UPubgmAutoRun_GMGotoPosition_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.PubgmAutoRun.GetRangeActorsPostions
struct UPubgmAutoRun_GetRangeActorsPostions_Params
{
	int                                                ActorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OriginPos;                                                // (Parm, IsPlainOldData)
	float                                              RangeRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.PubgmAutoRun.GetPoisonCircleLocation
struct UPubgmAutoRun_GetPoisonCircleLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.PubgmAutoRun.GetPlayerSpeed
struct UPubgmAutoRun_GetPlayerSpeed_Params
{
	int                                                SpeedIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.PubgmAutoRun.GetNearestXTPointToVehicle
struct UPubgmAutoRun_GetNearestXTPointToVehicle_Params
{
	struct FTransform                                  FirstPoint;                                               // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  SecendPoint;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               bNext;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.PubgmAutoRun.ForceVehiclePosPull
struct UPubgmAutoRun_ForceVehiclePosPull_Params
{
	bool                                               bNext;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.RemoteControlHelper.GetRuntimeStats
struct URemoteControlHelper_GetRuntimeStats_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.RemoteControlHelper.GetDeviceName
struct URemoteControlHelper_GetDeviceName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AutoRobot.RemoteControlHelper.AutoPickup
struct URemoteControlHelper_AutoPickup_Params
{
	class ASTExtraBaseCharacter*                       Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.RemoteControlManager.Tick
struct URemoteControlManager_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.RemoteControlManager.Stop
struct URemoteControlManager_Stop_Params
{
};

// Function AutoRobot.RemoteControlManager.BeginWithFile
struct URemoteControlManager_BeginWithFile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.RemoteControlManager.Begin
struct URemoteControlManager_Begin_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Host;                                                     // (Parm, ZeroConstructor)
	int                                                Port;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AutoRobot.ShootWeaponAutoTestHandle.OnWeaponShootBullet
struct UShootWeaponAutoTestHandle_OnWeaponShootBullet_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraShootWeaponBulletBase*               Bullet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.ShootWeaponAutoTestHandle.OnBulletImpact
struct UShootWeaponAutoTestHandle_OnBulletImpact_Params
{
	class ASTExtraShootWeapon*                         ShootWeapon;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ASTExtraShootWeaponBulletBase*               Bullet;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitRet;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AutoRobot.ShootWeaponAutoTestHandle.OnBulletDamage
struct UShootWeaponAutoTestHandle_OnBulletDamage_Params
{
	int                                                ShootID;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AutoRobot.ShootWeaponAutoTestHandle.GenerateBulletsImpactJsonStringAndClearData
struct UShootWeaponAutoTestHandle_GenerateBulletsImpactJsonStringAndClearData_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

