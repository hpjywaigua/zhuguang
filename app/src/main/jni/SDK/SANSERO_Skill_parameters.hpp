#pragma once

// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:11 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Parameters
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function Skill.UTSkillBaseWidget.GetUAEBlackboard
struct UUTSkillBaseWidget_GetUAEBlackboard_Params
{
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetOwnerSkillManager
struct UUTSkillBaseWidget_GetOwnerSkillManager_Params
{
	class UUTSkillManagerComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillBaseWidget.GetOwnerPawn
struct UUTSkillBaseWidget_GetOwnerPawn_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCondition.PreCloseSkill
struct UUTSkillCondition_PreCloseSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillCondition.PostInitSkill
struct UUTSkillCondition_PostInitSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillCondition.PostActiveSkill
struct UUTSkillCondition_PostActiveSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillCondition.IsTargetOK
struct UUTSkillCondition_IsTargetOK_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCondition.IsOK_Internal
struct UUTSkillCondition_IsOK_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCondition.IsOK
struct UUTSkillCondition_IsOK_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCondition.GetOwnerSkill
struct UUTSkillCondition_GetOwnerSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillEffect.UpdateAction
struct UUTSkillEffect_UpdateAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.UndoAction
struct UUTSkillEffect_UndoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillEffect.PreCloseSkill
struct UUTSkillEffect_PreCloseSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.PostInitSkill
struct UUTSkillEffect_PostInitSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.PostActiveSkill
struct UUTSkillEffect_PostActiveSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.OnAsyncLoadSoftPathDone
struct UUTSkillEffect_OnAsyncLoadSoftPathDone_Params
{
};

// Function Skill.UTSkillEffect.GetOwnerSkill
struct UUTSkillEffect_GetOwnerSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillEffect.DoHurtAppearance
struct UUTSkillEffect_DoHurtAppearance_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillEffect.DoAction
struct UUTSkillEffect_DoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillAction.UpdateAction_Internal
struct UUTSkillAction_UpdateAction_Internal_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.UpdateAction
struct UUTSkillAction_UpdateAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.UndoAction_Internal
struct UUTSkillAction_UndoAction_Internal_Params
{
};

// Function Skill.UTSkillAction.UndoAction
struct UUTSkillAction_UndoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillAction.TimerRealDoAction
struct UUTSkillAction_TimerRealDoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillAction.Reset_Internal
struct UUTSkillAction_Reset_Internal_Params
{
};

// Function Skill.UTSkillAction.Reset
struct UUTSkillAction_Reset_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillAction.RealDoHurtAppearance_Internal
struct UUTSkillAction_RealDoHurtAppearance_Internal_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.RealDoHurtAppearance
struct UUTSkillAction_RealDoHurtAppearance_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.RealDoAction_Internal
struct UUTSkillAction_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillAction.RealDoAction
struct UUTSkillAction_RealDoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillAction.OnAsyncLoadAssetDone
struct UUTSkillAction_OnAsyncLoadAssetDone_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      SkillAppearanceVictim;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkillAppearance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.JudgeNeedPhaseWait
struct UUTSkillAction_JudgeNeedPhaseWait_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillAction.DoHurtAppearance
struct UUTSkillAction_DoHurtAppearance_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction.DoAction
struct UUTSkillAction_DoAction_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.StopSkillCoolDown
struct AUTSkill_StopSkillCoolDown_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CoolDownIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkill.ResetSkillCoolDown
struct AUTSkill_ResetSkillCoolDown_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CoolDownIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkill.OnEvent
struct AUTSkill_OnEvent_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     TheEventType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PhaseIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.JumpToPhase
struct AUTSkill_JumpToPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PhaseId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.IsEnableSkillCoolDown
struct AUTSkill_IsEnableSkillCoolDown_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.IsCDOK
struct AUTSkill_IsCDOK_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetSpecificSkillManager
struct AUTSkill_GetSpecificSkillManager_Params
{
	class UUTSkillManagerComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkill.GetSpecificBlackboard
struct AUTSkill_GetSpecificBlackboard_Params
{
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillPhaseByName
struct AUTSkill_GetSkillPhaseByName_Params
{
	struct FString                                     PhaseName;                                                // (Parm, ZeroConstructor)
	class UUTSkillPhase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillPhase
struct AUTSkill_GetSkillPhase_Params
{
	int                                                PhaseIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUTSkillPhase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillEffectByPhaseName
struct AUTSkill_GetSkillEffectByPhaseName_Params
{
	struct FString                                     PhaseName;                                                // (Parm, ZeroConstructor)
	struct FString                                     EffectName;                                               // (Parm, ZeroConstructor)
	class UUTSkillBaseWidget*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillEffectByPhaseIndex
struct AUTSkill_GetSkillEffectByPhaseIndex_Params
{
	int                                                PhaseIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EffectName;                                               // (Parm, ZeroConstructor)
	class UUTSkillBaseWidget*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetSkillDurationScale
struct AUTSkill_GetSkillDurationScale_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetCurSkillPhase
struct AUTSkill_GetCurSkillPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUTSkillPhase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.GetCoolDownTime
struct AUTSkill_GetCoolDownTime_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CoolDownIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkill.DoSkillCoolDown
struct AUTSkill_DoSkillCoolDown_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                CoolDownIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkill.CanBePlayed
struct AUTSkill_CanBePlayed_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESkillCanBePlayedResult                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.UpdateSyncSkillCDData
struct UUTSkillManagerComponent_UpdateSyncSkillCDData_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.UpdateSyncSkillActiveState
struct UUTSkillManagerComponent_UpdateSyncSkillActiveState_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.UnRegisterActorBlackBorad
struct UUTSkillManagerComponent_UnRegisterActorBlackBorad_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TryDeleteOneSkill
struct UUTSkillManagerComponent_TryDeleteOneSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsImmediately;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResetCD;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TryAddOneSkill
struct UUTSkillManagerComponent_TryAddOneSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ButtonSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TriggerSkillWithParams
struct UUTSkillManagerComponent_TriggerSkillWithParams_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             InKeyStrings;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TriggerSkillWithID
struct UUTSkillManagerComponent_TriggerSkillWithID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TriggerLocalEventWithID
struct UUTSkillManagerComponent_TriggerLocalEventWithID_Params
{
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TriggerEventWithID
struct UUTSkillManagerComponent_TriggerEventWithID_Params
{
	TEnumAsByte<EUTSkillEventType>                     SkillEventType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TriggerEvent
struct UUTSkillManagerComponent_TriggerEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.TraceTarget
struct UUTSkillManagerComponent_TraceTarget_Params
{
	struct FVector                                     StartTrace;                                               // (Parm, IsPlainOldData)
	struct FVector                                     EndTrace;                                                 // (Parm, IsPlainOldData)
	EUTPickerTargetType                                TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SyncOneSkillState
struct UUTSkillManagerComponent_SyncOneSkillState_Params
{
	bool                                               RepSkillCD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RepSkillActiveState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.StopSkillSpecific
struct UUTSkillManagerComponent_StopSkillSpecific_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.StopSkillAll
struct UUTSkillManagerComponent_StopSkillAll_Params
{
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.StopSkill_WithID
struct UUTSkillManagerComponent_StopSkill_WithID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.StopSkill
struct UUTSkillManagerComponent_StopSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetupOwnerAndSystem
struct UUTSkillManagerComponent_SetupOwnerAndSystem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetSkillTagsDisable
struct UUTSkillManagerComponent_SetSkillTagsDisable_Params
{
	TArray<int>                                        SkillTags;                                                // (Parm, ZeroConstructor)
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TriggerKey;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Skill.UTSkillManagerComponent.SetSkillTagDisable
struct UUTSkillManagerComponent_SetSkillTagDisable_Params
{
	int                                                SkillTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TriggerKey;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Skill.UTSkillManagerComponent.SetSkillState
struct UUTSkillManagerComponent_SetSkillState_Params
{
	TArray<struct FUTSkillStateSyncData>               InSyncStateDatas;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Skill.UTSkillManagerComponent.SetSkillOwner
struct UUTSkillManagerComponent_SetSkillOwner_Params
{
	class AActor*                                      tempActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetSkillLevel
struct UUTSkillManagerComponent_SetSkillLevel_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetSkillActive
struct UUTSkillManagerComponent_SetSkillActive_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceSet;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ButtonSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.SetAutoSkillID
struct UUTSkillManagerComponent_SetAutoSkillID_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParamsAndTssData
struct UUTSkillManagerComponent_ServerTriggerEvent_WithParamsAndTssData_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              TssData;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParams
struct UUTSkillManagerComponent_ServerTriggerEvent_WithParams_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Content;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithIDAndTssData
struct UUTSkillManagerComponent_ServerTriggerEvent_WithIDAndTssData_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              TssData;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithID
struct UUTSkillManagerComponent_ServerTriggerEvent_WithID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerTriggerEvent
struct UUTSkillManagerComponent_ServerTriggerEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerStopAllSkill
struct UUTSkillManagerComponent_ServerStopAllSkill_Params
{
	EUTSkillStopReason                                 Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerStartSkill
struct UUTSkillManagerComponent_ServerStartSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed
struct UUTSkillManagerComponent_ServerNotifyRandomSeed_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ResetTeammateSkillCDData
struct UUTSkillManagerComponent_ResetTeammateSkillCDData_Params
{
};

// Function Skill.UTSkillManagerComponent.ResetSkillCoolDown
struct UUTSkillManagerComponent_ResetSkillCoolDown_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CDIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ResetAllSkillCoolDown
struct UUTSkillManagerComponent_ResetAllSkillCoolDown_Params
{
};

// Function Skill.UTSkillManagerComponent.RequestSkillStates
struct UUTSkillManagerComponent_RequestSkillStates_Params
{
	bool                                               RepSkillCD;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RepSkillActiveState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.RepSkillHitInfo
struct UUTSkillManagerComponent_RepSkillHitInfo_Params
{
};

// Function Skill.UTSkillManagerComponent.RepLastCastTime
struct UUTSkillManagerComponent_RepLastCastTime_Params
{
};

// Function Skill.UTSkillManagerComponent.ReplaceSkill
struct UUTSkillManagerComponent_ReplaceSkill_Params
{
	int                                                OldSkillID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewSkillID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.RemoveReplacedSkill
struct UUTSkillManagerComponent_RemoveReplacedSkill_Params
{
	int                                                OldSkillID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.RemoveAllSkillUIWidget
struct UUTSkillManagerComponent_RemoveAllSkillUIWidget_Params
{
};

// Function Skill.UTSkillManagerComponent.RegisterActorBlackBorad
struct UUTSkillManagerComponent_RegisterActorBlackBorad_Params
{
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEBlackboard*                              RegisterBlackboard;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.RandRangeSyn
struct UUTSkillManagerComponent_RandRangeSyn_Params
{
	int                                                StartIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.QuerySkill
struct UUTSkillManagerComponent_QuerySkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyQuery;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.PreTriggerSkillEvent
struct UUTSkillManagerComponent_PreTriggerSkillEvent_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.PostTriggerSkillEvent
struct UUTSkillManagerComponent_PostTriggerSkillEvent_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect
struct UUTSkillManagerComponent_PlayHurtSkillEffect_Params
{
	struct FUTSkillHitInfo                             TheSkillHitInfo;                                          // (Parm)
};

// Function Skill.UTSkillManagerComponent.OnStopSkill
struct UUTSkillManagerComponent_OnStopSkill_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.OnRespawned
struct UUTSkillManagerComponent_OnRespawned_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo
struct UUTSkillManagerComponent_OnRep_SkillHitInfo_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_SkillCDDatas
struct UUTSkillManagerComponent_OnRep_SkillCDDatas_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_SkillActiveState
struct UUTSkillManagerComponent_OnRep_SkillActiveState_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_ReplaceSkill
struct UUTSkillManagerComponent_OnRep_ReplaceSkill_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_NewSkillSynData
struct UUTSkillManagerComponent_OnRep_NewSkillSynData_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_NewSkillSinglePhaseData
struct UUTSkillManagerComponent_OnRep_NewSkillSinglePhaseData_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_NetClientSimulateInstID
struct UUTSkillManagerComponent_OnRep_NetClientSimulateInstID_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_EnableSkillEncrypt
struct UUTSkillManagerComponent_OnRep_EnableSkillEncrypt_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRep_DynamicRepData
struct UUTSkillManagerComponent_OnRep_DynamicRepData_Params
{
};

// Function Skill.UTSkillManagerComponent.OnRecycled
struct UUTSkillManagerComponent_OnRecycled_Params
{
};

// Function Skill.UTSkillManagerComponent.OnInterruptSkill
struct UUTSkillManagerComponent_OnInterruptSkill_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.NewUAEBlackboard
struct UUTSkillManagerComponent_NewUAEBlackboard_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.LocalTriggerNewSkillFail
struct UUTSkillManagerComponent_LocalTriggerNewSkillFail_Params
{
	class AUTSkill*                                    InNewSkill;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsSkillTagDisable
struct UUTSkillManagerComponent_IsSkillTagDisable_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsSkillCanUse
struct UUTSkillManagerComponent_IsSkillCanUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsSkillActived
struct UUTSkillManagerComponent_IsSkillActived_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsReadyToCastSkill
struct UUTSkillManagerComponent_IsReadyToCastSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsEnableSkillCoolDown
struct UUTSkillManagerComponent_IsEnableSkillCoolDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsCurrentUseSkillID
struct UUTSkillManagerComponent_IsCurrentUseSkillID_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsCastingSkillID
struct UUTSkillManagerComponent_IsCastingSkillID_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.IsCastingSkill
struct UUTSkillManagerComponent_IsCastingSkill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.HandleTriggerParamsEventSuccess
struct UUTSkillManagerComponent_HandleTriggerParamsEventSuccess_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.HandleTriggerParamsEventFail
struct UUTSkillManagerComponent_HandleTriggerParamsEventFail_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.HandleTriggerParamsEvent
struct UUTSkillManagerComponent_HandleTriggerParamsEvent_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.HandleSkillStop
struct UUTSkillManagerComponent_HandleSkillStop_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 StopReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.HandleSkillStart
struct UUTSkillManagerComponent_HandleSkillStart_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetUAEBlackboardBySkillID
struct UUTSkillManagerComponent_GetUAEBlackboardBySkillID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetUAEBlackboard
struct UUTSkillManagerComponent_GetUAEBlackboard_Params
{
	class AUTSkill*                                    InSkill;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillWidget
struct UUTSkillManagerComponent_GetSkillWidget_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUTSkillWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillState
struct UUTSkillManagerComponent_GetSkillState_Params
{
	TArray<struct FUTSkillStateSyncData>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetSkillSlotBySkillID
struct UUTSkillManagerComponent_GetSkillSlotBySkillID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillSlotBySkill
struct UUTSkillManagerComponent_GetSkillSlotBySkill_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillsByGroup
struct UUTSkillManagerComponent_GetSkillsByGroup_Params
{
	struct FName                                       SkillGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AUTSkill*>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetSkillLevel
struct UUTSkillManagerComponent_GetSkillLevel_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillIDByClass
struct UUTSkillManagerComponent_GetSkillIDByClass_Params
{
	class UClass*                                      SkillClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillExecString
struct UUTSkillManagerComponent_GetSkillExecString_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetSkillCurPhase
struct UUTSkillManagerComponent_GetSkillCurPhase_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillByName
struct UUTSkillManagerComponent_GetSkillByName_Params
{
	struct FString                                     SkillName;                                                // (Parm, ZeroConstructor)
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillByClassName
struct UUTSkillManagerComponent_GetSkillByClassName_Params
{
	struct FString                                     SkillClassName;                                           // (Parm, ZeroConstructor)
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillButtonSlot
struct UUTSkillManagerComponent_GetSkillButtonSlot_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetSkillBaseData
struct UUTSkillManagerComponent_GetSkillBaseData_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUTSkillRuntimeData                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetSkill
struct UUTSkillManagerComponent_GetSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetReplacedSkill
struct UUTSkillManagerComponent_GetReplacedSkill_Params
{
	int                                                OldSkillID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetRealOwnerRoleSafety
struct UUTSkillManagerComponent_GetRealOwnerRoleSafety_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetMutexRelation
struct UUTSkillManagerComponent_GetMutexRelation_Params
{
	class AUTSkill*                                    CurSkill;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AUTSkill*                                    NewSkill;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillMutexType>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetLastCastTime
struct UUTSkillManagerComponent_GetLastCastTime_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetLastCastFinishTime
struct UUTSkillManagerComponent_GetLastCastFinishTime_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurSkills
struct UUTSkillManagerComponent_GetCurSkills_Params
{
	TArray<class AUTSkill*>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetCurSkillPhase
struct UUTSkillManagerComponent_GetCurSkillPhase_Params
{
	class UUTSkillPhase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurSkillID
struct UUTSkillManagerComponent_GetCurSkillID_Params
{
	class AUTSkill*                                    Skill;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurSkill
struct UUTSkillManagerComponent_GetCurSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurMonopolizeSkills
struct UUTSkillManagerComponent_GetCurMonopolizeSkills_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkillPhase
struct UUTSkillManagerComponent_GetCurMonopolizedSkillPhase_Params
{
	class UUTSkillPhase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkill
struct UUTSkillManagerComponent_GetCurMonopolizedSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetCurAllSkillIDs
struct UUTSkillManagerComponent_GetCurAllSkillIDs_Params
{
	TArray<int>                                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillManagerComponent.GetCoolDownTime
struct UUTSkillManagerComponent_GetCoolDownTime_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CoolDownIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.GetButtonSlotSkillID
struct UUTSkillManagerComponent_GetButtonSlotSkillID_Params
{
	int                                                ButtonSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.DynamicRemoveSkill
struct UUTSkillManagerComponent_DynamicRemoveSkill_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.DynamicAddSkill
struct UUTSkillManagerComponent_DynamicAddSkill_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ClientStopPreActionSkill
struct UUTSkillManagerComponent_ClientStopPreActionSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ClientStopOneSkill
struct UUTSkillManagerComponent_ClientStopOneSkill_Params
{
	uint64_t                                           InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSinglePhaseRep;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ClientStartSkill
struct UUTSkillManagerComponent_ClientStartSkill_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoCast;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ClientSimulateOneSkill
struct UUTSkillManagerComponent_ClientSimulateOneSkill_Params
{
	uint64_t                                           InstID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PhaseIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSinglePhaseRep;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ClearSkill
struct UUTSkillManagerComponent_ClearSkill_Params
{
	bool                                               bStopAllSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDeactivateAllSkill;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResetSkillCD;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillManagerComponent.ClearRepParams
struct UUTSkillManagerComponent_ClearRepParams_Params
{
};

// Function Skill.UTSkillManagerComponent.ClearInitParams
struct UUTSkillManagerComponent_ClearInitParams_Params
{
};

// Function Skill.UTSkillManagerComponent.CacheSkillWidget
struct UUTSkillManagerComponent_CacheSkillWidget_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUTSkillWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillInterface.HasSkillToken
struct UUTSkillInterface_HasSkillToken_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillInterface.HandleSkillStart
struct UUTSkillInterface_HandleSkillStart_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillInterface.HandleSkillEnd
struct UUTSkillInterface_HandleSkillEnd_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EUTSkillStopReason                                 Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillInterface.GetSkillManager
struct UUTSkillInterface_GetSkillManager_Params
{
	class UUTSkillManagerComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillInterface.ClearSkillToken
struct UUTSkillInterface_ClearSkillToken_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillInterface.ClearAllSkillToken
struct UUTSkillInterface_ClearAllSkillToken_Params
{
};

// Function Skill.UTSkillInterface.AddSkillToken
struct UUTSkillInterface_AddSkillToken_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillPhase.TryJumpToPhase
struct UUTSkillPhase_TryJumpToPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PhaseId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.StopPhase
struct UUTSkillPhase_StopPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillPhase.StartPhase
struct UUTSkillPhase_StartPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillPhase.RepeatPhase
struct UUTSkillPhase_RepeatPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillPhase.PlaySkillHurtEffect
struct UUTSkillPhase_PlaySkillHurtEffect_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.PlaySkillHurtAppearances
struct UUTSkillPhase_PlaySkillHurtAppearances_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.PickTargets
struct UUTSkillPhase_PickTargets_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillPhase.OnEvent
struct UUTSkillPhase_OnEvent_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     TheEventType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.OnCustomEvent
struct UUTSkillPhase_OnCustomEvent_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EUTSkillEventType>                     TheEventType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.GetChargePhaseRate
struct UUTSkillPhase_GetChargePhaseRate_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.ForceStopPhase
struct UUTSkillPhase_ForceStopPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.ClearAttachments
struct UUTSkillPhase_ClearAttachments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPhase.AfterStartPhase
struct UUTSkillPhase_AfterStartPhase_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillPicker.PickTargetsInner
struct UUTSkillPicker_PickTargetsInner_Params
{
	struct FVector                                     OriginPoint;                                              // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPicker.PickTargets
struct UUTSkillPicker_PickTargets_Params
{
	struct FVector                                     OriginPoint;                                              // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillPickerFilter.HandleFilterArray
struct UUTSkillPickerFilter_HandleFilterArray_Params
{
	TArray<struct FUTSkillPickedTarget>                inArray;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillWidget.SetSkillManager
struct UUTSkillWidget_SetSkillManager_Params
{
	class UUTSkillManagerComponent*                    Manager;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillWidget.SetSkillID
struct UUTSkillWidget_SetSkillID_Params
{
	int                                                InSkillID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillWidget.RemoveSelf
struct UUTSkillWidget_RemoveSelf_Params
{
};

// Function Skill.UTSkillWidget.GetSkillManager
struct UUTSkillWidget_GetSkillManager_Params
{
	class UUTSkillManagerComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillWidget.GetSkillID
struct UUTSkillWidget_GetSkillID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.GetSkillCDBases
struct UUTSkillWidget_GetSkillCDBases_Params
{
	TArray<class UUTSkillCDBase*>                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Skill.UTSkillWidget.GetSkill
struct UUTSkillWidget_GetSkill_Params
{
	class AUTSkill*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.GetLocalPlayerController
struct UUTSkillWidget_GetLocalPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillWidget.BindLua
struct UUTSkillWidget_BindLua_Params
{
	struct FString                                     luaPath;                                                  // (Parm, ZeroConstructor)
};

// Function Skill.AddNewSkillToOwnerInterface.GetSkillTemplates
struct UAddNewSkillToOwnerInterface_GetSkillTemplates_Params
{
	TArray<struct FItemSkillsConfig>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.PrivateNodeLuaInterface.SetPrivateUniqueKey
struct UPrivateNodeLuaInterface_SetPrivateUniqueKey_Params
{
	struct FString                                     NewKey;                                                   // (Parm, ZeroConstructor)
};

// Function Skill.PrivateNodeLuaInterface.GetPrivateUniqueKey
struct UPrivateNodeLuaInterface_GetPrivateUniqueKey_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.SharedDelegate.EventTrigger
struct USharedDelegate_EventTrigger_Params
{
};

// Function Skill.UTSkillAction_LuaContainer.UpdateActionInContainer
struct UUTSkillAction_LuaContainer_UpdateActionInContainer_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillAction_LuaContainer.UndoActionInContainer
struct UUTSkillAction_LuaContainer_UndoActionInContainer_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillAction_LuaContainer.ResetActionInContainer
struct UUTSkillAction_LuaContainer_ResetActionInContainer_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Skill.UTSkillAction_LuaContainer.RealDoActionInContainer
struct UUTSkillAction_LuaContainer_RealDoActionInContainer_Params
{
	class UActorComponent*                             SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsWeakObject
struct UUTSkillBlackboardInterface_SetValueAsWeakObject_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsVector
struct UUTSkillBlackboardInterface_SetValueAsVector_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     VectorValue;                                              // (Parm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsUInt
struct UUTSkillBlackboardInterface_SetValueAsUInt_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	uint32_t                                           UIntValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsString
struct UUTSkillBlackboardInterface_SetValueAsString_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     StringValue;                                              // (Parm, ZeroConstructor)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsRotator
struct UUTSkillBlackboardInterface_SetValueAsRotator_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    VectorValue;                                              // (Parm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsObject
struct UUTSkillBlackboardInterface_SetValueAsObject_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsName
struct UUTSkillBlackboardInterface_SetValueAsName_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       NameValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsInt
struct UUTSkillBlackboardInterface_SetValueAsInt_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                IntValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsFloat
struct UUTSkillBlackboardInterface_SetValueAsFloat_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsEnum
struct UUTSkillBlackboardInterface_SetValueAsEnum_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      EnumValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsClass
struct UUTSkillBlackboardInterface_SetValueAsClass_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      ClassValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.SetValueAsBool
struct UUTSkillBlackboardInterface_SetValueAsBool_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistWeakObject
struct UUTSkillBlackboardInterface_IsExistWeakObject_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistVector
struct UUTSkillBlackboardInterface_IsExistVector_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistUInt
struct UUTSkillBlackboardInterface_IsExistUInt_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistString
struct UUTSkillBlackboardInterface_IsExistString_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistRotator
struct UUTSkillBlackboardInterface_IsExistRotator_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistObject
struct UUTSkillBlackboardInterface_IsExistObject_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistName
struct UUTSkillBlackboardInterface_IsExistName_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistInt
struct UUTSkillBlackboardInterface_IsExistInt_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistFloat
struct UUTSkillBlackboardInterface_IsExistFloat_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistEnum
struct UUTSkillBlackboardInterface_IsExistEnum_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistClass
struct UUTSkillBlackboardInterface_IsExistClass_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.IsExistBool
struct UUTSkillBlackboardInterface_IsExistBool_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsWeakObject
struct UUTSkillBlackboardInterface_GetValueAsWeakObject_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsWeakActor
struct UUTSkillBlackboardInterface_GetValueAsWeakActor_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsVector
struct UUTSkillBlackboardInterface_GetValueAsVector_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsUInt
struct UUTSkillBlackboardInterface_GetValueAsUInt_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsString
struct UUTSkillBlackboardInterface_GetValueAsString_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsRotator
struct UUTSkillBlackboardInterface_GetValueAsRotator_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsObject
struct UUTSkillBlackboardInterface_GetValueAsObject_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsName
struct UUTSkillBlackboardInterface_GetValueAsName_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsInt
struct UUTSkillBlackboardInterface_GetValueAsInt_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsFloat
struct UUTSkillBlackboardInterface_GetValueAsFloat_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsEnum
struct UUTSkillBlackboardInterface_GetValueAsEnum_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsClass
struct UUTSkillBlackboardInterface_GetValueAsClass_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsBool
struct UUTSkillBlackboardInterface_GetValueAsBool_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetValueAsActor
struct UUTSkillBlackboardInterface_GetValueAsActor_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillBlackboardInterface.GetUAEBlackboardBySkillID
struct UUTSkillBlackboardInterface_GetUAEBlackboardBySkillID_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillCDBase.BindLua
struct UUTSkillCDBase_BindLua_Params
{
	struct FString                                     luaPath;                                                  // (Parm, ZeroConstructor)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsWeakObject
struct UUTSkillNodeBlackboardInterface_SetValueAsWeakObject_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsVector
struct UUTSkillNodeBlackboardInterface_SetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     VectorValue;                                              // (Parm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsUInt
struct UUTSkillNodeBlackboardInterface_SetValueAsUInt_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	uint32_t                                           UIntValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsString
struct UUTSkillNodeBlackboardInterface_SetValueAsString_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     StringValue;                                              // (Parm, ZeroConstructor)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsRotator
struct UUTSkillNodeBlackboardInterface_SetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    VectorValue;                                              // (Parm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsObject
struct UUTSkillNodeBlackboardInterface_SetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ObjectValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsName
struct UUTSkillNodeBlackboardInterface_SetValueAsName_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       NameValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsInt
struct UUTSkillNodeBlackboardInterface_SetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                IntValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsFloat
struct UUTSkillNodeBlackboardInterface_SetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsEnum
struct UUTSkillNodeBlackboardInterface_SetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      EnumValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsClass
struct UUTSkillNodeBlackboardInterface_SetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      ClassValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsBool
struct UUTSkillNodeBlackboardInterface_SetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsSetValueAsNewDataWhenNotExist
struct UUTSkillNodeBlackboardInterface_IsSetValueAsNewDataWhenNotExist_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistWeakObject
struct UUTSkillNodeBlackboardInterface_IsExistWeakObject_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistVector
struct UUTSkillNodeBlackboardInterface_IsExistVector_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistUInt
struct UUTSkillNodeBlackboardInterface_IsExistUInt_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistString
struct UUTSkillNodeBlackboardInterface_IsExistString_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistRotator
struct UUTSkillNodeBlackboardInterface_IsExistRotator_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistObject
struct UUTSkillNodeBlackboardInterface_IsExistObject_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistName
struct UUTSkillNodeBlackboardInterface_IsExistName_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistInt
struct UUTSkillNodeBlackboardInterface_IsExistInt_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistFloat
struct UUTSkillNodeBlackboardInterface_IsExistFloat_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistEnum
struct UUTSkillNodeBlackboardInterface_IsExistEnum_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistClass
struct UUTSkillNodeBlackboardInterface_IsExistClass_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.IsExistBool
struct UUTSkillNodeBlackboardInterface_IsExistBool_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakObject
struct UUTSkillNodeBlackboardInterface_GetValueAsWeakObject_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakActor
struct UUTSkillNodeBlackboardInterface_GetValueAsWeakActor_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsVector
struct UUTSkillNodeBlackboardInterface_GetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsUInt
struct UUTSkillNodeBlackboardInterface_GetValueAsUInt_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	uint32_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsString
struct UUTSkillNodeBlackboardInterface_GetValueAsString_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsRotator
struct UUTSkillNodeBlackboardInterface_GetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsObject
struct UUTSkillNodeBlackboardInterface_GetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsName
struct UUTSkillNodeBlackboardInterface_GetValueAsName_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsInt
struct UUTSkillNodeBlackboardInterface_GetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsFloat
struct UUTSkillNodeBlackboardInterface_GetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsEnum
struct UUTSkillNodeBlackboardInterface_GetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsClass
struct UUTSkillNodeBlackboardInterface_GetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsBool
struct UUTSkillNodeBlackboardInterface_GetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsActor
struct UUTSkillNodeBlackboardInterface_GetValueAsActor_Params
{
	struct FName                                       KeyName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillNodeBlackboardInterface.GetUAEBlackboard
struct UUTSkillNodeBlackboardInterface_GetUAEBlackboard_Params
{
	class UUAEBlackboard*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillSpecificAction.UpdateAction_Internal
struct UUTSkillSpecificAction_UpdateAction_Internal_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillSpecificAction.UndoAction_Internal
struct UUTSkillSpecificAction_UndoAction_Internal_Params
{
};

// Function Skill.UTSkillSpecificAction.Reset_Internal
struct UUTSkillSpecificAction_Reset_Internal_Params
{
};

// Function Skill.UTSkillSpecificAction.RealDoAction_Internal
struct UUTSkillSpecificAction_RealDoAction_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Skill.UTSkillSpecificAction.PreCloseSkill
struct UUTSkillSpecificAction_PreCloseSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillSpecificAction.PostInitSkill
struct UUTSkillSpecificAction_PostInitSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Skill.UTSkillSpecificAction.PostActiveSkill
struct UUTSkillSpecificAction_PostActiveSkill_Params
{
	class UUTSkillManagerComponent*                    SkillManagerComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AUTSkill*                                    CurOwnerSkill;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

}

