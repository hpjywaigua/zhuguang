// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:11 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function Skill.UTSkillBaseWidget.GetUAEBlackboard
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillBaseWidget::GetUAEBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetUAEBlackboard");

	UUTSkillBaseWidget_GetUAEBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBaseWidget.GetOwnerSkillManager
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUTSkillManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillManagerComponent* UUTSkillBaseWidget::GetOwnerSkillManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetOwnerSkillManager");

	UUTSkillBaseWidget_GetOwnerSkillManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBaseWidget.GetOwnerPawn
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillBaseWidget::GetOwnerPawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBaseWidget.GetOwnerPawn");

	UUTSkillBaseWidget_GetOwnerPawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillCondition.PreCloseSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillCondition::PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.PreCloseSkill");

	UUTSkillCondition_PreCloseSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillCondition.PostInitSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillCondition::PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.PostInitSkill");

	UUTSkillCondition_PostInitSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillCondition.PostActiveSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillCondition::PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.PostActiveSkill");

	UUTSkillCondition_PostActiveSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillCondition.IsTargetOK
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCondition::IsTargetOK(class UActorComponent* SkillManagerComponent, class AActor* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.IsTargetOK");

	UUTSkillCondition_IsTargetOK_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillCondition.IsOK_Internal
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCondition::IsOK_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.IsOK_Internal");

	UUTSkillCondition_IsOK_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillCondition.IsOK
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillCondition::IsOK(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.IsOK");

	UUTSkillCondition_IsOK_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillCondition.GetOwnerSkill
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillCondition::GetOwnerSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCondition.GetOwnerSkill");

	UUTSkillCondition_GetOwnerSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillEffect.UpdateAction
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.UpdateAction");

	UUTSkillEffect_UpdateAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.UndoAction
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillEffect::UndoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.UndoAction");

	UUTSkillEffect_UndoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.PreCloseSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.PreCloseSkill");

	UUTSkillEffect_PreCloseSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.PostInitSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.PostInitSkill");

	UUTSkillEffect_PostInitSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.PostActiveSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.PostActiveSkill");

	UUTSkillEffect_PostActiveSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.OnAsyncLoadSoftPathDone
// (Final, Native, Public)

void UUTSkillEffect::OnAsyncLoadSoftPathDone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.OnAsyncLoadSoftPathDone");

	UUTSkillEffect_OnAsyncLoadSoftPathDone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.GetOwnerSkill
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillEffect::GetOwnerSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.GetOwnerSkill");

	UUTSkillEffect_GetOwnerSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillEffect.DoHurtAppearance
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillEffect::DoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.DoHurtAppearance");

	UUTSkillEffect_DoHurtAppearance_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillEffect.DoAction
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillEffect::DoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillEffect.DoAction");

	UUTSkillEffect_DoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction.UpdateAction_Internal
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::UpdateAction_Internal(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UpdateAction_Internal");

	UUTSkillAction_UpdateAction_Internal_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.UpdateAction
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::UpdateAction(class UUTSkillManagerComponent* SkillManagerComponent, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UpdateAction");

	UUTSkillAction_UpdateAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.UndoAction_Internal
// (Native, Public)

void UUTSkillAction::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UndoAction_Internal");

	UUTSkillAction_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.UndoAction
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction::UndoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.UndoAction");

	UUTSkillAction_UndoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.TimerRealDoAction
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction::TimerRealDoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.TimerRealDoAction");

	UUTSkillAction_TimerRealDoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.Reset_Internal
// (Native, Public)

void UUTSkillAction::Reset_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.Reset_Internal");

	UUTSkillAction_Reset_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.Reset
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction::Reset(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.Reset");

	UUTSkillAction_Reset_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.RealDoHurtAppearance_Internal
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::RealDoHurtAppearance_Internal(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.RealDoHurtAppearance_Internal");

	UUTSkillAction_RealDoHurtAppearance_Internal_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.RealDoHurtAppearance
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::RealDoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.RealDoHurtAppearance");

	UUTSkillAction_RealDoHurtAppearance_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.RealDoAction_Internal
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.RealDoAction_Internal");

	UUTSkillAction_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction.RealDoAction
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::RealDoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.RealDoAction");

	UUTSkillAction_RealDoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction.OnAsyncLoadAssetDone
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  SkillAppearanceVictim          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSkillAppearance               (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::OnAsyncLoadAssetDone(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* SkillAppearanceVictim, bool bSkillAppearance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.OnAsyncLoadAssetDone");

	UUTSkillAction_OnAsyncLoadAssetDone_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.SkillAppearanceVictim = SkillAppearanceVictim;
	params.bSkillAppearance = bSkillAppearance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.JudgeNeedPhaseWait
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::JudgeNeedPhaseWait()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.JudgeNeedPhaseWait");

	UUTSkillAction_JudgeNeedPhaseWait_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillAction.DoHurtAppearance
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction::DoHurtAppearance(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.DoHurtAppearance");

	UUTSkillAction_DoHurtAppearance_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction.DoAction
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction::DoAction(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction.DoAction");

	UUTSkillAction_DoAction_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.StopSkillCoolDown
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AUTSkill::StopSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.StopSkillCoolDown");

	AUTSkill_StopSkillCoolDown_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkill.ResetSkillCoolDown
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AUTSkill::ResetSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.ResetSkillCoolDown");

	AUTSkill_ResetSkillCoolDown_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkill.OnEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType, int PhaseIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.OnEvent");

	AUTSkill_OnEvent_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.TheEventType = TheEventType;
	params.PhaseIndex = PhaseIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.JumpToPhase
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PhaseId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::JumpToPhase(class UUTSkillManagerComponent* SkillManagerComponent, int PhaseId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.JumpToPhase");

	AUTSkill_JumpToPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.PhaseId = PhaseId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.IsEnableSkillCoolDown
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::IsEnableSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.IsEnableSkillCoolDown");

	AUTSkill_IsEnableSkillCoolDown_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.IsCDOK
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUTSkill::IsCDOK(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.IsCDOK");

	AUTSkill_IsCDOK_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSpecificSkillManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUTSkillManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillManagerComponent* AUTSkill::GetSpecificSkillManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSpecificSkillManager");

	AUTSkill_GetSpecificSkillManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSpecificBlackboard
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* AUTSkill::GetSpecificBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSpecificBlackboard");

	AUTSkill_GetSpecificBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillPhaseByName
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 PhaseName                      (Parm, ZeroConstructor)
// class UUTSkillPhase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillPhase* AUTSkill::GetSkillPhaseByName(const struct FString& PhaseName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillPhaseByName");

	AUTSkill_GetSkillPhaseByName_Params params;
	params.PhaseName = PhaseName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillPhase
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UUTSkillPhase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillPhase* AUTSkill::GetSkillPhase(int PhaseIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillPhase");

	AUTSkill_GetSkillPhase_Params params;
	params.PhaseIndex = PhaseIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillEffectByPhaseName
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 PhaseName                      (Parm, ZeroConstructor)
// struct FString                 EffectName                     (Parm, ZeroConstructor)
// class UUTSkillBaseWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillBaseWidget* AUTSkill::GetSkillEffectByPhaseName(const struct FString& PhaseName, const struct FString& EffectName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillEffectByPhaseName");

	AUTSkill_GetSkillEffectByPhaseName_Params params;
	params.PhaseName = PhaseName;
	params.EffectName = EffectName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillEffectByPhaseIndex
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EffectName                     (Parm, ZeroConstructor)
// class UUTSkillBaseWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillBaseWidget* AUTSkill::GetSkillEffectByPhaseIndex(int PhaseIndex, const struct FString& EffectName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillEffectByPhaseIndex");

	AUTSkill_GetSkillEffectByPhaseIndex_Params params;
	params.PhaseIndex = PhaseIndex;
	params.EffectName = EffectName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetSkillDurationScale
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUTSkill::GetSkillDurationScale(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetSkillDurationScale");

	AUTSkill_GetSkillDurationScale_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetCurSkillPhase
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUTSkillPhase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillPhase* AUTSkill::GetCurSkillPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetCurSkillPhase");

	AUTSkill_GetCurSkillPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.GetCoolDownTime
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AUTSkill::GetCoolDownTime(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.GetCoolDownTime");

	AUTSkill_GetCoolDownTime_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkill.DoSkillCoolDown
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AUTSkill::DoSkillCoolDown(class UUTSkillManagerComponent* SkillManagerComponent, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.DoSkillCoolDown");

	AUTSkill_DoSkillCoolDown_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkill.CanBePlayed
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESkillCanBePlayedResult        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESkillCanBePlayedResult AUTSkill::CanBePlayed(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkill.CanBePlayed");

	AUTSkill_CanBePlayed_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.UpdateSyncSkillCDData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::UpdateSyncSkillCDData(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.UpdateSyncSkillCDData");

	UUTSkillManagerComponent_UpdateSyncSkillCDData_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.UpdateSyncSkillActiveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::UpdateSyncSkillActiveState(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.UpdateSyncSkillActiveState");

	UUTSkillManagerComponent_UpdateSyncSkillActiveState_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.UnRegisterActorBlackBorad
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::UnRegisterActorBlackBorad(class AActor* InActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.UnRegisterActorBlackBorad");

	UUTSkillManagerComponent_UnRegisterActorBlackBorad_Params params;
	params.InActor = InActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.TryDeleteOneSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsImmediately                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResetCD                       (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::TryDeleteOneSkill(int SkillID, bool IsImmediately, bool bResetCD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TryDeleteOneSkill");

	UUTSkillManagerComponent_TryDeleteOneSkill_Params params;
	params.SkillID = SkillID;
	params.IsImmediately = IsImmediately;
	params.bResetCD = bResetCD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.TryAddOneSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ButtonSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::TryAddOneSkill(int SkillID, bool bActive, int ButtonSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TryAddOneSkill");

	UUTSkillManagerComponent_TryAddOneSkill_Params params;
	params.SkillID = SkillID;
	params.bActive = bActive;
	params.ButtonSlot = ButtonSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.TriggerSkillWithParams
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         InKeyStrings                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TriggerSkillWithParams(int SkillID, TArray<struct FString> InKeyStrings, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerSkillWithParams");

	UUTSkillManagerComponent_TriggerSkillWithParams_Params params;
	params.SkillID = SkillID;
	params.InKeyStrings = InKeyStrings;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.TriggerSkillWithID
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TriggerSkillWithID(int SkillID, bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerSkillWithID");

	UUTSkillManagerComponent_TriggerSkillWithID_Params params;
	params.SkillID = SkillID;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.TriggerLocalEventWithID
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUTSkillEventType> SkillEventType                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TriggerLocalEventWithID(TEnumAsByte<EUTSkillEventType> SkillEventType, int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerLocalEventWithID");

	UUTSkillManagerComponent_TriggerLocalEventWithID_Params params;
	params.SkillEventType = SkillEventType;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.TriggerEventWithID
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EUTSkillEventType> SkillEventType                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TriggerEventWithID(TEnumAsByte<EUTSkillEventType> SkillEventType, int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerEventWithID");

	UUTSkillManagerComponent_TriggerEventWithID_Params params;
	params.SkillEventType = SkillEventType;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.TriggerEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::TriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TriggerEvent");

	UUTSkillManagerComponent_TriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.TraceTarget
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 StartTrace                     (Parm, IsPlainOldData)
// struct FVector                 EndTrace                       (Parm, IsPlainOldData)
// EUTPickerTargetType            TargetType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::TraceTarget(const struct FVector& StartTrace, const struct FVector& EndTrace, EUTPickerTargetType TargetType, float Radius, class AActor** TargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.TraceTarget");

	UUTSkillManagerComponent_TraceTarget_Params params;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;
	params.TargetType = TargetType;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TargetActor != nullptr)
		*TargetActor = params.TargetActor;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.SyncOneSkillState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           RepSkillCD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RepSkillActiveState            (Parm, ZeroConstructor, IsPlainOldData)
// int                            RequestID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SyncOneSkillState(bool RepSkillCD, bool RepSkillActiveState, int RequestID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SyncOneSkillState");

	UUTSkillManagerComponent_SyncOneSkillState_Params params;
	params.RepSkillCD = RepSkillCD;
	params.RepSkillActiveState = RepSkillActiveState;
	params.RequestID = RequestID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.StopSkillSpecific
// (Final, Native, Public)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopSkillSpecific(class AUTSkill* Skill, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkillSpecific");

	UUTSkillManagerComponent_StopSkillSpecific_Params params;
	params.Skill = Skill;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.StopSkillAll
// (Native, Public, BlueprintCallable)
// Parameters:
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopSkillAll(EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkillAll");

	UUTSkillManagerComponent_StopSkillAll_Params params;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.StopSkill_WithID
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopSkill_WithID(int SkillID, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkill_WithID");

	UUTSkillManagerComponent_StopSkill_WithID_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.StopSkill
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::StopSkill(int SkillID, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.StopSkill");

	UUTSkillManagerComponent_StopSkill_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetupOwnerAndSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::SetupOwnerAndSystem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetupOwnerAndSystem");

	UUTSkillManagerComponent_SetupOwnerAndSystem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.SetSkillTagsDisable
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    SkillTags                      (Parm, ZeroConstructor)
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TriggerKey                     (Parm, OutParm, ZeroConstructor)

void UUTSkillManagerComponent::SetSkillTagsDisable(TArray<int> SkillTags, bool bDisable, struct FString* TriggerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillTagsDisable");

	UUTSkillManagerComponent_SetSkillTagsDisable_Params params;
	params.SkillTags = SkillTags;
	params.bDisable = bDisable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TriggerKey != nullptr)
		*TriggerKey = params.TriggerKey;
}


// Function Skill.UTSkillManagerComponent.SetSkillTagDisable
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillTag                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TriggerKey                     (Parm, OutParm, ZeroConstructor)

void UUTSkillManagerComponent::SetSkillTagDisable(int SkillTag, bool bDisable, struct FString* TriggerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillTagDisable");

	UUTSkillManagerComponent_SetSkillTagDisable_Params params;
	params.SkillTag = SkillTag;
	params.bDisable = bDisable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TriggerKey != nullptr)
		*TriggerKey = params.TriggerKey;
}


// Function Skill.UTSkillManagerComponent.SetSkillState
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FUTSkillStateSyncData> InSyncStateDatas               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUTSkillManagerComponent::SetSkillState(TArray<struct FUTSkillStateSyncData> InSyncStateDatas)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillState");

	UUTSkillManagerComponent_SetSkillState_Params params;
	params.InSyncStateDatas = InSyncStateDatas;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetSkillOwner
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  tempActor                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetSkillOwner(class AActor* tempActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillOwner");

	UUTSkillManagerComponent_SetSkillOwner_Params params;
	params.tempActor = tempActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetSkillLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillLevel                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetSkillLevel(int SkillID, int SkillLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillLevel");

	UUTSkillManagerComponent_SetSkillLevel_Params params;
	params.SkillID = SkillID;
	params.SkillLevel = SkillLevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.SetSkillActive
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceSet                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ButtonSlot                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::SetSkillActive(int SkillID, bool bActive, bool bForceSet, int ButtonSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetSkillActive");

	UUTSkillManagerComponent_SetSkillActive_Params params;
	params.SkillID = SkillID;
	params.bActive = bActive;
	params.bForceSet = bForceSet;
	params.ButtonSlot = ButtonSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.SetAutoSkillID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::SetAutoSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.SetAutoSkillID");

	UUTSkillManagerComponent_SetAutoSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParamsAndTssData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<unsigned char>          TssData                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UUTSkillManagerComponent::ServerTriggerEvent_WithParamsAndTssData(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, TArray<unsigned char> Content, TArray<unsigned char> TssData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParamsAndTssData");

	UUTSkillManagerComponent_ServerTriggerEvent_WithParamsAndTssData_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;
	params.InstID = InstID;
	params.Content = Content;
	params.TssData = TssData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParams
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Content                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UUTSkillManagerComponent::ServerTriggerEvent_WithParams(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, TArray<unsigned char> Content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithParams");

	UUTSkillManagerComponent_ServerTriggerEvent_WithParams_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;
	params.InstID = InstID;
	params.Content = Content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithIDAndTssData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          TssData                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UUTSkillManagerComponent::ServerTriggerEvent_WithIDAndTssData(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID, TArray<unsigned char> TssData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithIDAndTssData");

	UUTSkillManagerComponent_ServerTriggerEvent_WithIDAndTssData_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;
	params.InstID = InstID;
	params.TssData = TssData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithID
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerTriggerEvent_WithID(int SkillID, TEnumAsByte<EUTSkillEventType> EventType, uint64_t InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent_WithID");

	UUTSkillManagerComponent_ServerTriggerEvent_WithID_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerTriggerEvent
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerTriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerTriggerEvent");

	UUTSkillManagerComponent_ServerTriggerEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerStopAllSkill
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// EUTSkillStopReason             Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerStopAllSkill(EUTSkillStopReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerStopAllSkill");

	UUTSkillManagerComponent_ServerStopAllSkill_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ServerStartSkill
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoCast                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::ServerStartSkill(int SkillID, bool bAutoCast)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerStartSkill");

	UUTSkillManagerComponent_ServerStartSkill_Params params;
	params.SkillID = SkillID;
	params.bAutoCast = bAutoCast;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ServerNotifyRandomSeed(int Seed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ServerNotifyRandomSeed");

	UUTSkillManagerComponent_ServerNotifyRandomSeed_Params params;
	params.Seed = Seed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ResetTeammateSkillCDData
// (Final, Native, Public, BlueprintCallable)

void UUTSkillManagerComponent::ResetTeammateSkillCDData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ResetTeammateSkillCDData");

	UUTSkillManagerComponent_ResetTeammateSkillCDData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ResetSkillCoolDown
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            CDIndex                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ResetSkillCoolDown(int SkillID, int CDIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ResetSkillCoolDown");

	UUTSkillManagerComponent_ResetSkillCoolDown_Params params;
	params.SkillID = SkillID;
	params.CDIndex = CDIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ResetAllSkillCoolDown
// (Native, Public, BlueprintCallable)

void UUTSkillManagerComponent::ResetAllSkillCoolDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ResetAllSkillCoolDown");

	UUTSkillManagerComponent_ResetAllSkillCoolDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RequestSkillStates
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// bool                           RepSkillCD                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RepSkillActiveState            (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::RequestSkillStates(bool RepSkillCD, bool RepSkillActiveState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RequestSkillStates");

	UUTSkillManagerComponent_RequestSkillStates_Params params;
	params.RepSkillCD = RepSkillCD;
	params.RepSkillActiveState = RepSkillActiveState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RepSkillHitInfo
// (Final, Native, Public, BlueprintCallable)

void UUTSkillManagerComponent::RepSkillHitInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RepSkillHitInfo");

	UUTSkillManagerComponent_RepSkillHitInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RepLastCastTime
// (Final, Native, Public)

void UUTSkillManagerComponent::RepLastCastTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RepLastCastTime");

	UUTSkillManagerComponent_RepLastCastTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ReplaceSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OldSkillID                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewSkillID                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ReplaceSkill(int OldSkillID, int NewSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ReplaceSkill");

	UUTSkillManagerComponent_ReplaceSkill_Params params;
	params.OldSkillID = OldSkillID;
	params.NewSkillID = NewSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RemoveReplacedSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OldSkillID                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::RemoveReplacedSkill(int OldSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RemoveReplacedSkill");

	UUTSkillManagerComponent_RemoveReplacedSkill_Params params;
	params.OldSkillID = OldSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RemoveAllSkillUIWidget
// (Final, Native, Public, BlueprintCallable)

void UUTSkillManagerComponent::RemoveAllSkillUIWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RemoveAllSkillUIWidget");

	UUTSkillManagerComponent_RemoveAllSkillUIWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RegisterActorBlackBorad
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          RegisterBlackboard             (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::RegisterActorBlackBorad(class AActor* InActor, class UUAEBlackboard* RegisterBlackboard)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RegisterActorBlackBorad");

	UUTSkillManagerComponent_RegisterActorBlackBorad_Params params;
	params.InActor = InActor;
	params.RegisterBlackboard = RegisterBlackboard;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.RandRangeSyn
// (Final, Native, Public)
// Parameters:
// int                            StartIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            EndIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::RandRangeSyn(int StartIndex, int EndIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.RandRangeSyn");

	UUTSkillManagerComponent_RandRangeSyn_Params params;
	params.StartIndex = StartIndex;
	params.EndIndex = EndIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.QuerySkill
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyQuery                     (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::QuerySkill(int SkillID, bool bOnlyQuery)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.QuerySkill");

	UUTSkillManagerComponent_QuerySkill_Params params;
	params.SkillID = SkillID;
	params.bOnlyQuery = bOnlyQuery;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.PreTriggerSkillEvent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::PreTriggerSkillEvent(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.PreTriggerSkillEvent");

	UUTSkillManagerComponent_PreTriggerSkillEvent_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.PostTriggerSkillEvent
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::PostTriggerSkillEvent(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.PostTriggerSkillEvent");

	UUTSkillManagerComponent_PostTriggerSkillEvent_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect
// (Native, Public)
// Parameters:
// struct FUTSkillHitInfo         TheSkillHitInfo                (Parm)

void UUTSkillManagerComponent::PlayHurtSkillEffect(const struct FUTSkillHitInfo& TheSkillHitInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.PlayHurtSkillEffect");

	UUTSkillManagerComponent_PlayHurtSkillEffect_Params params;
	params.TheSkillHitInfo = TheSkillHitInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnStopSkill
// (Native, Public)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::OnStopSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnStopSkill");

	UUTSkillManagerComponent_OnStopSkill_Params params;
	params.Skill = Skill;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRespawned
// (Native, Public)

void UUTSkillManagerComponent::OnRespawned()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRespawned");

	UUTSkillManagerComponent_OnRespawned_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo
// (Native, Public)

void UUTSkillManagerComponent::OnRep_SkillHitInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillHitInfo");

	UUTSkillManagerComponent_OnRep_SkillHitInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_SkillCDDatas
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_SkillCDDatas()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillCDDatas");

	UUTSkillManagerComponent_OnRep_SkillCDDatas_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_SkillActiveState
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_SkillActiveState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_SkillActiveState");

	UUTSkillManagerComponent_OnRep_SkillActiveState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_ReplaceSkill
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_ReplaceSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_ReplaceSkill");

	UUTSkillManagerComponent_OnRep_ReplaceSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_NewSkillSynData
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_NewSkillSynData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_NewSkillSynData");

	UUTSkillManagerComponent_OnRep_NewSkillSynData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_NewSkillSinglePhaseData
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_NewSkillSinglePhaseData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_NewSkillSinglePhaseData");

	UUTSkillManagerComponent_OnRep_NewSkillSinglePhaseData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_NetClientSimulateInstID
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_NetClientSimulateInstID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_NetClientSimulateInstID");

	UUTSkillManagerComponent_OnRep_NetClientSimulateInstID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_EnableSkillEncrypt
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_EnableSkillEncrypt()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_EnableSkillEncrypt");

	UUTSkillManagerComponent_OnRep_EnableSkillEncrypt_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRep_DynamicRepData
// (Final, Native, Public)

void UUTSkillManagerComponent::OnRep_DynamicRepData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRep_DynamicRepData");

	UUTSkillManagerComponent_OnRep_DynamicRepData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnRecycled
// (Native, Public)

void UUTSkillManagerComponent::OnRecycled()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnRecycled");

	UUTSkillManagerComponent_OnRecycled_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.OnInterruptSkill
// (Native, Public)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::OnInterruptSkill(class AUTSkill* Skill, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.OnInterruptSkill");

	UUTSkillManagerComponent_OnInterruptSkill_Params params;
	params.Skill = Skill;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.NewUAEBlackboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::NewUAEBlackboard(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.NewUAEBlackboard");

	UUTSkillManagerComponent_NewUAEBlackboard_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.LocalTriggerNewSkillFail
// (Final, Native, Public)
// Parameters:
// class AUTSkill*                InNewSkill                     (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::LocalTriggerNewSkillFail(class AUTSkill* InNewSkill, uint64_t InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.LocalTriggerNewSkillFail");

	UUTSkillManagerComponent_LocalTriggerNewSkillFail_Params params;
	params.InNewSkill = InNewSkill;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.IsSkillTagDisable
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsSkillTagDisable(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsSkillTagDisable");

	UUTSkillManagerComponent_IsSkillTagDisable_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsSkillCanUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsSkillCanUse()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsSkillCanUse");

	UUTSkillManagerComponent_IsSkillCanUse_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsSkillActived
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsSkillActived(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsSkillActived");

	UUTSkillManagerComponent_IsSkillActived_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsReadyToCastSkill
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsReadyToCastSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsReadyToCastSkill");

	UUTSkillManagerComponent_IsReadyToCastSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsEnableSkillCoolDown
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsEnableSkillCoolDown()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsEnableSkillCoolDown");

	UUTSkillManagerComponent_IsEnableSkillCoolDown_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsCurrentUseSkillID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsCurrentUseSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsCurrentUseSkillID");

	UUTSkillManagerComponent_IsCurrentUseSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsCastingSkillID
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsCastingSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsCastingSkillID");

	UUTSkillManagerComponent_IsCastingSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.IsCastingSkill
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::IsCastingSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.IsCastingSkill");

	UUTSkillManagerComponent_IsCastingSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.HandleTriggerParamsEventSuccess
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::HandleTriggerParamsEventSuccess(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleTriggerParamsEventSuccess");

	UUTSkillManagerComponent_HandleTriggerParamsEventSuccess_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.HandleTriggerParamsEventFail
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::HandleTriggerParamsEventFail(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleTriggerParamsEventFail");

	UUTSkillManagerComponent_HandleTriggerParamsEventFail_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.HandleTriggerParamsEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillManagerComponent::HandleTriggerParamsEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleTriggerParamsEvent");

	UUTSkillManagerComponent_HandleTriggerParamsEvent_Params params;
	params.SkillID = SkillID;
	params.EventType = EventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.HandleSkillStop
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             StopReason                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::HandleSkillStop(int SkillID, EUTSkillStopReason StopReason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleSkillStop");

	UUTSkillManagerComponent_HandleSkillStop_Params params;
	params.SkillID = SkillID;
	params.StopReason = StopReason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.HandleSkillStart
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::HandleSkillStart(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.HandleSkillStart");

	UUTSkillManagerComponent_HandleSkillStart_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.GetUAEBlackboardBySkillID
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillManagerComponent::GetUAEBlackboardBySkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetUAEBlackboardBySkillID");

	UUTSkillManagerComponent_GetUAEBlackboardBySkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetUAEBlackboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AUTSkill*                InSkill                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillManagerComponent::GetUAEBlackboard(class AUTSkill* InSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetUAEBlackboard");

	UUTSkillManagerComponent_GetUAEBlackboard_Params params;
	params.InSkill = InSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUTSkillWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillWidget* UUTSkillManagerComponent::GetSkillWidget(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillWidget");

	UUTSkillManagerComponent_GetSkillWidget_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FUTSkillStateSyncData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUTSkillStateSyncData> UUTSkillManagerComponent::GetSkillState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillState");

	UUTSkillManagerComponent_GetSkillState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillSlotBySkillID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillSlotBySkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillSlotBySkillID");

	UUTSkillManagerComponent_GetSkillSlotBySkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillSlotBySkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillSlotBySkill(class AUTSkill* Skill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillSlotBySkill");

	UUTSkillManagerComponent_GetSkillSlotBySkill_Params params;
	params.Skill = Skill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillsByGroup
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   SkillGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AUTSkill*>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUTSkill*> UUTSkillManagerComponent::GetSkillsByGroup(const struct FName& SkillGroup)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillsByGroup");

	UUTSkillManagerComponent_GetSkillsByGroup_Params params;
	params.SkillGroup = SkillGroup;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillLevel(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillLevel");

	UUTSkillManagerComponent_GetSkillLevel_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillIDByClass
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  SkillClass                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillIDByClass(class UClass* SkillClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillIDByClass");

	UUTSkillManagerComponent_GetSkillIDByClass_Params params;
	params.SkillClass = SkillClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillExecString
// (Final, Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UUTSkillManagerComponent::GetSkillExecString()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillExecString");

	UUTSkillManagerComponent_GetSkillExecString_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillCurPhase
// (Final, Native, Public)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillCurPhase(class AUTSkill* Skill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillCurPhase");

	UUTSkillManagerComponent_GetSkillCurPhase_Params params;
	params.Skill = Skill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillByName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 SkillName                      (Parm, ZeroConstructor)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetSkillByName(const struct FString& SkillName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillByName");

	UUTSkillManagerComponent_GetSkillByName_Params params;
	params.SkillName = SkillName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillByClassName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 SkillClassName                 (Parm, ZeroConstructor)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetSkillByClassName(const struct FString& SkillClassName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillByClassName");

	UUTSkillManagerComponent_GetSkillByClassName_Params params;
	params.SkillClassName = SkillClassName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillButtonSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetSkillButtonSlot(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillButtonSlot");

	UUTSkillManagerComponent_GetSkillButtonSlot_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkillBaseData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUTSkillRuntimeData     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUTSkillRuntimeData UUTSkillManagerComponent::GetSkillBaseData(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkillBaseData");

	UUTSkillManagerComponent_GetSkillBaseData_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetSkill
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetSkill(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetSkill");

	UUTSkillManagerComponent_GetSkill_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetReplacedSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            OldSkillID                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetReplacedSkill(int OldSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetReplacedSkill");

	UUTSkillManagerComponent_GetReplacedSkill_Params params;
	params.OldSkillID = OldSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetRealOwnerRoleSafety
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ENetRole> UUTSkillManagerComponent::GetRealOwnerRoleSafety()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetRealOwnerRoleSafety");

	UUTSkillManagerComponent_GetRealOwnerRoleSafety_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetMutexRelation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUTSkill*                CurSkill                       (Parm, ZeroConstructor, IsPlainOldData)
// class AUTSkill*                NewSkill                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESkillMutexType>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESkillMutexType> UUTSkillManagerComponent::GetMutexRelation(class AUTSkill* CurSkill, class AUTSkill* NewSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetMutexRelation");

	UUTSkillManagerComponent_GetMutexRelation_Params params;
	params.CurSkill = CurSkill;
	params.NewSkill = NewSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetLastCastTime
// (Final, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillManagerComponent::GetLastCastTime(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetLastCastTime");

	UUTSkillManagerComponent_GetLastCastTime_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetLastCastFinishTime
// (Final, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillManagerComponent::GetLastCastFinishTime(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetLastCastFinishTime");

	UUTSkillManagerComponent_GetLastCastFinishTime_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurSkills
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AUTSkill*>        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AUTSkill*> UUTSkillManagerComponent::GetCurSkills()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkills");

	UUTSkillManagerComponent_GetCurSkills_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurSkillPhase
// (Final, Native, Public)
// Parameters:
// class UUTSkillPhase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillPhase* UUTSkillManagerComponent::GetCurSkillPhase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkillPhase");

	UUTSkillManagerComponent_GetCurSkillPhase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurSkillID
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AUTSkill*                Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetCurSkillID(class AUTSkill* Skill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkillID");

	UUTSkillManagerComponent_GetCurSkillID_Params params;
	params.Skill = Skill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetCurSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurSkill");

	UUTSkillManagerComponent_GetCurSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurMonopolizeSkills
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UUTSkillManagerComponent::GetCurMonopolizeSkills()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurMonopolizeSkills");

	UUTSkillManagerComponent_GetCurMonopolizeSkills_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkillPhase
// (Final, Native, Public)
// Parameters:
// class UUTSkillPhase*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUTSkillPhase* UUTSkillManagerComponent::GetCurMonopolizedSkillPhase()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkillPhase");

	UUTSkillManagerComponent_GetCurMonopolizedSkillPhase_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillManagerComponent::GetCurMonopolizedSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurMonopolizedSkill");

	UUTSkillManagerComponent_GetCurMonopolizedSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCurAllSkillIDs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int>                    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UUTSkillManagerComponent::GetCurAllSkillIDs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCurAllSkillIDs");

	UUTSkillManagerComponent_GetCurAllSkillIDs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetCoolDownTime
// (Final, Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            CoolDownIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillManagerComponent::GetCoolDownTime(int SkillID, int CoolDownIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetCoolDownTime");

	UUTSkillManagerComponent_GetCoolDownTime_Params params;
	params.SkillID = SkillID;
	params.CoolDownIndex = CoolDownIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.GetButtonSlotSkillID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ButtonSlot                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillManagerComponent::GetButtonSlotSkillID(int ButtonSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.GetButtonSlotSkillID");

	UUTSkillManagerComponent_GetButtonSlotSkillID_Params params;
	params.ButtonSlot = ButtonSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillManagerComponent.DynamicRemoveSkill
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::DynamicRemoveSkill(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.DynamicRemoveSkill");

	UUTSkillManagerComponent_DynamicRemoveSkill_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.DynamicAddSkill
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::DynamicAddSkill(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.DynamicAddSkill");

	UUTSkillManagerComponent_DynamicAddSkill_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClientStopPreActionSkill
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClientStopPreActionSkill(int SkillID, uint64_t InstID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClientStopPreActionSkill");

	UUTSkillManagerComponent_ClientStopPreActionSkill_Params params;
	params.SkillID = SkillID;
	params.InstID = InstID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClientStopOneSkill
// (Final, Native, Public)
// Parameters:
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSinglePhaseRep                (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClientStopOneSkill(uint64_t InstID, bool bSinglePhaseRep)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClientStopOneSkill");

	UUTSkillManagerComponent_ClientStopOneSkill_Params params;
	params.InstID = InstID;
	params.bSinglePhaseRep = bSinglePhaseRep;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClientStartSkill
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoCast                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClientStartSkill(int SkillID, bool bAutoCast)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClientStartSkill");

	UUTSkillManagerComponent_ClientStartSkill_Params params;
	params.SkillID = SkillID;
	params.bAutoCast = bAutoCast;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClientSimulateOneSkill
// (Final, Native, Public)
// Parameters:
// uint64_t                       InstID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            PhaseIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSinglePhaseRep                (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClientSimulateOneSkill(uint64_t InstID, int SkillID, int PhaseIndex, bool bSinglePhaseRep)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClientSimulateOneSkill");

	UUTSkillManagerComponent_ClientSimulateOneSkill_Params params;
	params.InstID = InstID;
	params.SkillID = SkillID;
	params.PhaseIndex = PhaseIndex;
	params.bSinglePhaseRep = bSinglePhaseRep;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClearSkill
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bStopAllSkill                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDeactivateAllSkill            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResetSkillCD                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillManagerComponent::ClearSkill(bool bStopAllSkill, bool bDeactivateAllSkill, bool bResetSkillCD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClearSkill");

	UUTSkillManagerComponent_ClearSkill_Params params;
	params.bStopAllSkill = bStopAllSkill;
	params.bDeactivateAllSkill = bDeactivateAllSkill;
	params.bResetSkillCD = bResetSkillCD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClearRepParams
// (Native, Public)

void UUTSkillManagerComponent::ClearRepParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClearRepParams");

	UUTSkillManagerComponent_ClearRepParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.ClearInitParams
// (Native, Public)

void UUTSkillManagerComponent::ClearInitParams()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.ClearInitParams");

	UUTSkillManagerComponent_ClearInitParams_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillManagerComponent.CacheSkillWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUTSkillWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillManagerComponent::CacheSkillWidget(int SkillID, class UUTSkillWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillManagerComponent.CacheSkillWidget");

	UUTSkillManagerComponent_CacheSkillWidget_Params params;
	params.SkillID = SkillID;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.HasSkillToken
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillInterface::HasSkillToken(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.HasSkillToken");

	UUTSkillInterface_HasSkillToken_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillInterface.HandleSkillStart
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::HandleSkillStart(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.HandleSkillStart");

	UUTSkillInterface_HandleSkillStart_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.HandleSkillEnd
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// EUTSkillStopReason             Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::HandleSkillEnd(int SkillID, EUTSkillStopReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.HandleSkillEnd");

	UUTSkillInterface_HandleSkillEnd_Params params;
	params.SkillID = SkillID;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.GetSkillManager
// (Native, Public, Const)
// Parameters:
// class UUTSkillManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillManagerComponent* UUTSkillInterface::GetSkillManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.GetSkillManager");

	UUTSkillInterface_GetSkillManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillInterface.ClearSkillToken
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::ClearSkillToken(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.ClearSkillToken");

	UUTSkillInterface_ClearSkillToken_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.ClearAllSkillToken
// (Native, Public)

void UUTSkillInterface::ClearAllSkillToken()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.ClearAllSkillToken");

	UUTSkillInterface_ClearAllSkillToken_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillInterface.AddSkillToken
// (Native, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillInterface::AddSkillToken(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillInterface.AddSkillToken");

	UUTSkillInterface_AddSkillToken_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.TryJumpToPhase
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PhaseId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::TryJumpToPhase(class UUTSkillManagerComponent* SkillManagerComponent, int PhaseId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.TryJumpToPhase");

	UUTSkillPhase_TryJumpToPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.PhaseId = PhaseId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.StopPhase
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::StopPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.StopPhase");

	UUTSkillPhase_StopPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.StartPhase
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::StartPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.StartPhase");

	UUTSkillPhase_StartPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.RepeatPhase
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::RepeatPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.RepeatPhase");

	UUTSkillPhase_RepeatPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.PlaySkillHurtEffect
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::PlaySkillHurtEffect(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PlaySkillHurtEffect");

	UUTSkillPhase_PlaySkillHurtEffect_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.PlaySkillHurtAppearances
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::PlaySkillHurtAppearances(class UUTSkillManagerComponent* SkillManagerComponent, class AActor* Victim)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PlaySkillHurtAppearances");

	UUTSkillPhase_PlaySkillHurtAppearances_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.Victim = Victim;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.PickTargets
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::PickTargets(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.PickTargets");

	UUTSkillPhase_PickTargets_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillPhase.OnEvent
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::OnEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.OnEvent");

	UUTSkillPhase_OnEvent_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.TheEventType = TheEventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.OnCustomEvent
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EUTSkillEventType> TheEventType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::OnCustomEvent(class UUTSkillManagerComponent* SkillManagerComponent, TEnumAsByte<EUTSkillEventType> TheEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.OnCustomEvent");

	UUTSkillPhase_OnCustomEvent_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.TheEventType = TheEventType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.GetChargePhaseRate
// (Final, Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillPhase::GetChargePhaseRate(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.GetChargePhaseRate");

	UUTSkillPhase_GetChargePhaseRate_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.ForceStopPhase
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::ForceStopPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.ForceStopPhase");

	UUTSkillPhase_ForceStopPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.ClearAttachments
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPhase::ClearAttachments()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.ClearAttachments");

	UUTSkillPhase_ClearAttachments_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPhase.AfterStartPhase
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillPhase::AfterStartPhase(class UUTSkillManagerComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPhase.AfterStartPhase");

	UUTSkillPhase_AfterStartPhase_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillPicker.PickTargetsInner
// (Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OriginPoint                    (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPicker::PickTargetsInner(const struct FVector& OriginPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPicker.PickTargetsInner");

	UUTSkillPicker_PickTargetsInner_Params params;
	params.OriginPoint = OriginPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPicker.PickTargets
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OriginPoint                    (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillPicker::PickTargets(const struct FVector& OriginPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPicker.PickTargets");

	UUTSkillPicker_PickTargets_Params params;
	params.OriginPoint = OriginPoint;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillPickerFilter.HandleFilterArray
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FUTSkillPickedTarget> inArray                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillPickerFilter::HandleFilterArray(class AActor* Owner, TArray<struct FUTSkillPickedTarget>* inArray)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillPickerFilter.HandleFilterArray");

	UUTSkillPickerFilter_HandleFilterArray_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (inArray != nullptr)
		*inArray = params.inArray;
}


// Function Skill.UTSkillWidget.SetSkillManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* Manager                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillWidget::SetSkillManager(class UUTSkillManagerComponent* Manager)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.SetSkillManager");

	UUTSkillWidget_SetSkillManager_Params params;
	params.Manager = Manager;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillWidget.SetSkillID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InSkillID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillWidget::SetSkillID(int InSkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.SetSkillID");

	UUTSkillWidget_SetSkillID_Params params;
	params.InSkillID = InSkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillWidget.RemoveSelf
// (Final, Native, Public, BlueprintCallable)

void UUTSkillWidget::RemoveSelf()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.RemoveSelf");

	UUTSkillWidget_RemoveSelf_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillWidget.GetSkillManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUTSkillManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUTSkillManagerComponent* UUTSkillWidget::GetSkillManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkillManager");

	UUTSkillWidget_GetSkillManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillWidget.GetSkillID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillWidget::GetSkillID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkillID");

	UUTSkillWidget_GetSkillID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillWidget.GetSkillCDBases
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UUTSkillCDBase*>  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UUTSkillCDBase*> UUTSkillWidget::GetSkillCDBases()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkillCDBases");

	UUTSkillWidget_GetSkillCDBases_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillWidget.GetSkill
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AUTSkill*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AUTSkill* UUTSkillWidget::GetSkill()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetSkill");

	UUTSkillWidget_GetSkill_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillWidget.GetLocalPlayerController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UUTSkillWidget::GetLocalPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.GetLocalPlayerController");

	UUTSkillWidget_GetLocalPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillWidget.BindLua
// (Final, Native, Public)
// Parameters:
// struct FString                 luaPath                        (Parm, ZeroConstructor)

void UUTSkillWidget::BindLua(const struct FString& luaPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillWidget.BindLua");

	UUTSkillWidget_BindLua_Params params;
	params.luaPath = luaPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.AddNewSkillToOwnerInterface.GetSkillTemplates
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TArray<struct FItemSkillsConfig> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemSkillsConfig> UAddNewSkillToOwnerInterface::GetSkillTemplates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.AddNewSkillToOwnerInterface.GetSkillTemplates");

	UAddNewSkillToOwnerInterface_GetSkillTemplates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.PrivateNodeLuaInterface.SetPrivateUniqueKey
// (Native, Public)
// Parameters:
// struct FString                 NewKey                         (Parm, ZeroConstructor)

void UPrivateNodeLuaInterface::SetPrivateUniqueKey(const struct FString& NewKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.PrivateNodeLuaInterface.SetPrivateUniqueKey");

	UPrivateNodeLuaInterface_SetPrivateUniqueKey_Params params;
	params.NewKey = NewKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.PrivateNodeLuaInterface.GetPrivateUniqueKey
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPrivateNodeLuaInterface::GetPrivateUniqueKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.PrivateNodeLuaInterface.GetPrivateUniqueKey");

	UPrivateNodeLuaInterface_GetPrivateUniqueKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.SharedDelegate.EventTrigger
// (Final, Native, Public, BlueprintCallable)

void USharedDelegate::EventTrigger()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.SharedDelegate.EventTrigger");

	USharedDelegate_EventTrigger_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction_LuaContainer.UpdateActionInContainer
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillAction_LuaContainer::UpdateActionInContainer(class UActorComponent* SkillManagerComponent, float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction_LuaContainer.UpdateActionInContainer");

	UUTSkillAction_LuaContainer_UpdateActionInContainer_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction_LuaContainer.UndoActionInContainer
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction_LuaContainer::UndoActionInContainer(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction_LuaContainer.UndoActionInContainer");

	UUTSkillAction_LuaContainer_UndoActionInContainer_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction_LuaContainer.ResetActionInContainer
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUTSkillAction_LuaContainer::ResetActionInContainer(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction_LuaContainer.ResetActionInContainer");

	UUTSkillAction_LuaContainer_ResetActionInContainer_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillAction_LuaContainer.RealDoActionInContainer
// (Final, Native, Public)
// Parameters:
// class UActorComponent*         SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillAction_LuaContainer::RealDoActionInContainer(class UActorComponent* SkillManagerComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillAction_LuaContainer.RealDoActionInContainer");

	UUTSkillAction_LuaContainer_RealDoActionInContainer_Params params;
	params.SkillManagerComponent = SkillManagerComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsWeakObject
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsWeakObject(int SkillID, const struct FName& KeyName, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsWeakObject");

	UUTSkillBlackboardInterface_SetValueAsWeakObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsVector
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 VectorValue                    (Parm, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsVector(int SkillID, const struct FName& KeyName, const struct FVector& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsVector");

	UUTSkillBlackboardInterface_SetValueAsVector_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsUInt
// (Native, Public, HasOutParms)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// uint32_t                       UIntValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsUInt(int SkillID, const struct FName& KeyName, uint32_t UIntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsUInt");

	UUTSkillBlackboardInterface_SetValueAsUInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.UIntValue = UIntValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsString
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 StringValue                    (Parm, ZeroConstructor)

void UUTSkillBlackboardInterface::SetValueAsString(int SkillID, const struct FName& KeyName, const struct FString& StringValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsString");

	UUTSkillBlackboardInterface_SetValueAsString_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.StringValue = StringValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsRotator
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                VectorValue                    (Parm, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsRotator(int SkillID, const struct FName& KeyName, const struct FRotator& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsRotator");

	UUTSkillBlackboardInterface_SetValueAsRotator_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsObject
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsObject(int SkillID, const struct FName& KeyName, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsObject");

	UUTSkillBlackboardInterface_SetValueAsObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsName
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsName(int SkillID, const struct FName& KeyName, const struct FName& NameValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsName");

	UUTSkillBlackboardInterface_SetValueAsName_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.NameValue = NameValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsInt
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsInt(int SkillID, const struct FName& KeyName, int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsInt");

	UUTSkillBlackboardInterface_SetValueAsInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsFloat
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsFloat(int SkillID, const struct FName& KeyName, float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsFloat");

	UUTSkillBlackboardInterface_SetValueAsFloat_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsEnum
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsEnum(int SkillID, const struct FName& KeyName, unsigned char EnumValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsEnum");

	UUTSkillBlackboardInterface_SetValueAsEnum_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.EnumValue = EnumValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsClass
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsClass(int SkillID, const struct FName& KeyName, class UClass* ClassValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsClass");

	UUTSkillBlackboardInterface_SetValueAsClass_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.ClassValue = ClassValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.SetValueAsBool
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillBlackboardInterface::SetValueAsBool(int SkillID, const struct FName& KeyName, bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.SetValueAsBool");

	UUTSkillBlackboardInterface_SetValueAsBool_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillBlackboardInterface.IsExistWeakObject
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistWeakObject(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistWeakObject");

	UUTSkillBlackboardInterface_IsExistWeakObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistVector
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistVector(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistVector");

	UUTSkillBlackboardInterface_IsExistVector_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistUInt
// (Native, Public, HasOutParms, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistUInt(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistUInt");

	UUTSkillBlackboardInterface_IsExistUInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistString
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistString(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistString");

	UUTSkillBlackboardInterface_IsExistString_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistRotator
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistRotator(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistRotator");

	UUTSkillBlackboardInterface_IsExistRotator_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistObject
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistObject(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistObject");

	UUTSkillBlackboardInterface_IsExistObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistName
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistName(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistName");

	UUTSkillBlackboardInterface_IsExistName_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistInt
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistInt(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistInt");

	UUTSkillBlackboardInterface_IsExistInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistFloat
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistFloat(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistFloat");

	UUTSkillBlackboardInterface_IsExistFloat_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistEnum
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistEnum(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistEnum");

	UUTSkillBlackboardInterface_IsExistEnum_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistClass
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistClass(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistClass");

	UUTSkillBlackboardInterface_IsExistClass_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.IsExistBool
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::IsExistBool(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.IsExistBool");

	UUTSkillBlackboardInterface_IsExistBool_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsWeakObject
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUTSkillBlackboardInterface::GetValueAsWeakObject(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsWeakObject");

	UUTSkillBlackboardInterface_GetValueAsWeakObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsWeakActor
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillBlackboardInterface::GetValueAsWeakActor(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsWeakActor");

	UUTSkillBlackboardInterface_GetValueAsWeakActor_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsVector
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UUTSkillBlackboardInterface::GetValueAsVector(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsVector");

	UUTSkillBlackboardInterface_GetValueAsVector_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsUInt
// (Native, Public, HasOutParms, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UUTSkillBlackboardInterface::GetValueAsUInt(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsUInt");

	UUTSkillBlackboardInterface_GetValueAsUInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsString
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUTSkillBlackboardInterface::GetValueAsString(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsString");

	UUTSkillBlackboardInterface_GetValueAsString_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsRotator
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UUTSkillBlackboardInterface::GetValueAsRotator(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsRotator");

	UUTSkillBlackboardInterface_GetValueAsRotator_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsObject
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUTSkillBlackboardInterface::GetValueAsObject(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsObject");

	UUTSkillBlackboardInterface_GetValueAsObject_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsName
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UUTSkillBlackboardInterface::GetValueAsName(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsName");

	UUTSkillBlackboardInterface_GetValueAsName_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsInt
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillBlackboardInterface::GetValueAsInt(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsInt");

	UUTSkillBlackboardInterface_GetValueAsInt_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsFloat
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillBlackboardInterface::GetValueAsFloat(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsFloat");

	UUTSkillBlackboardInterface_GetValueAsFloat_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsEnum
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UUTSkillBlackboardInterface::GetValueAsEnum(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsEnum");

	UUTSkillBlackboardInterface_GetValueAsEnum_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsClass
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUTSkillBlackboardInterface::GetValueAsClass(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsClass");

	UUTSkillBlackboardInterface_GetValueAsClass_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsBool
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillBlackboardInterface::GetValueAsBool(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsBool");

	UUTSkillBlackboardInterface_GetValueAsBool_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetValueAsActor
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillBlackboardInterface::GetValueAsActor(int SkillID, const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetValueAsActor");

	UUTSkillBlackboardInterface_GetValueAsActor_Params params;
	params.SkillID = SkillID;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillBlackboardInterface.GetUAEBlackboardBySkillID
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillBlackboardInterface::GetUAEBlackboardBySkillID(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillBlackboardInterface.GetUAEBlackboardBySkillID");

	UUTSkillBlackboardInterface_GetUAEBlackboardBySkillID_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillCDBase.BindLua
// (Final, Native, Public)
// Parameters:
// struct FString                 luaPath                        (Parm, ZeroConstructor)

void UUTSkillCDBase::BindLua(const struct FString& luaPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillCDBase.BindLua");

	UUTSkillCDBase_BindLua_Params params;
	params.luaPath = luaPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsWeakObject
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsWeakObject(const struct FName& KeyName, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsWeakObject");

	UUTSkillNodeBlackboardInterface_SetValueAsWeakObject_Params params;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsVector
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 VectorValue                    (Parm, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsVector");

	UUTSkillNodeBlackboardInterface_SetValueAsVector_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsUInt
// (Native, Public, HasOutParms)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// uint32_t                       UIntValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsUInt(const struct FName& KeyName, uint32_t UIntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsUInt");

	UUTSkillNodeBlackboardInterface_SetValueAsUInt_Params params;
	params.KeyName = KeyName;
	params.UIntValue = UIntValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsString
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 StringValue                    (Parm, ZeroConstructor)

void UUTSkillNodeBlackboardInterface::SetValueAsString(const struct FName& KeyName, const struct FString& StringValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsString");

	UUTSkillNodeBlackboardInterface_SetValueAsString_Params params;
	params.KeyName = KeyName;
	params.StringValue = StringValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsRotator
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                VectorValue                    (Parm, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsRotator");

	UUTSkillNodeBlackboardInterface_SetValueAsRotator_Params params;
	params.KeyName = KeyName;
	params.VectorValue = VectorValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsObject
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ObjectValue                    (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsObject");

	UUTSkillNodeBlackboardInterface_SetValueAsObject_Params params;
	params.KeyName = KeyName;
	params.ObjectValue = ObjectValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsName
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   NameValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsName(const struct FName& KeyName, const struct FName& NameValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsName");

	UUTSkillNodeBlackboardInterface_SetValueAsName_Params params;
	params.KeyName = KeyName;
	params.NameValue = NameValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsInt
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            IntValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsInt(const struct FName& KeyName, int IntValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsInt");

	UUTSkillNodeBlackboardInterface_SetValueAsInt_Params params;
	params.KeyName = KeyName;
	params.IntValue = IntValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsFloat
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsFloat(const struct FName& KeyName, float FloatValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsFloat");

	UUTSkillNodeBlackboardInterface_SetValueAsFloat_Params params;
	params.KeyName = KeyName;
	params.FloatValue = FloatValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsEnum
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  EnumValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsEnum");

	UUTSkillNodeBlackboardInterface_SetValueAsEnum_Params params;
	params.KeyName = KeyName;
	params.EnumValue = EnumValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsClass
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ClassValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsClass");

	UUTSkillNodeBlackboardInterface_SetValueAsClass_Params params;
	params.KeyName = KeyName;
	params.ClassValue = ClassValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.SetValueAsBool
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillNodeBlackboardInterface::SetValueAsBool(const struct FName& KeyName, bool BoolValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.SetValueAsBool");

	UUTSkillNodeBlackboardInterface_SetValueAsBool_Params params;
	params.KeyName = KeyName;
	params.BoolValue = BoolValue;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsSetValueAsNewDataWhenNotExist
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsSetValueAsNewDataWhenNotExist()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsSetValueAsNewDataWhenNotExist");

	UUTSkillNodeBlackboardInterface_IsSetValueAsNewDataWhenNotExist_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistWeakObject
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistWeakObject(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistWeakObject");

	UUTSkillNodeBlackboardInterface_IsExistWeakObject_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistVector
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistVector(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistVector");

	UUTSkillNodeBlackboardInterface_IsExistVector_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistUInt
// (Native, Public, HasOutParms, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistUInt(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistUInt");

	UUTSkillNodeBlackboardInterface_IsExistUInt_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistString
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistString(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistString");

	UUTSkillNodeBlackboardInterface_IsExistString_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistRotator
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistRotator(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistRotator");

	UUTSkillNodeBlackboardInterface_IsExistRotator_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistObject
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistObject(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistObject");

	UUTSkillNodeBlackboardInterface_IsExistObject_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistName
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistName(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistName");

	UUTSkillNodeBlackboardInterface_IsExistName_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistInt
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistInt(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistInt");

	UUTSkillNodeBlackboardInterface_IsExistInt_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistFloat
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistFloat(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistFloat");

	UUTSkillNodeBlackboardInterface_IsExistFloat_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistEnum
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistEnum(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistEnum");

	UUTSkillNodeBlackboardInterface_IsExistEnum_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistClass
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistClass(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistClass");

	UUTSkillNodeBlackboardInterface_IsExistClass_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.IsExistBool
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::IsExistBool(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.IsExistBool");

	UUTSkillNodeBlackboardInterface_IsExistBool_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakObject
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUTSkillNodeBlackboardInterface::GetValueAsWeakObject(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakObject");

	UUTSkillNodeBlackboardInterface_GetValueAsWeakObject_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakActor
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillNodeBlackboardInterface::GetValueAsWeakActor(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsWeakActor");

	UUTSkillNodeBlackboardInterface_GetValueAsWeakActor_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsVector
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UUTSkillNodeBlackboardInterface::GetValueAsVector(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsVector");

	UUTSkillNodeBlackboardInterface_GetValueAsVector_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsUInt
// (Native, Public, HasOutParms, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UUTSkillNodeBlackboardInterface::GetValueAsUInt(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsUInt");

	UUTSkillNodeBlackboardInterface_GetValueAsUInt_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsString
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUTSkillNodeBlackboardInterface::GetValueAsString(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsString");

	UUTSkillNodeBlackboardInterface_GetValueAsString_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsRotator
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UUTSkillNodeBlackboardInterface::GetValueAsRotator(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsRotator");

	UUTSkillNodeBlackboardInterface_GetValueAsRotator_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsObject
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UUTSkillNodeBlackboardInterface::GetValueAsObject(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsObject");

	UUTSkillNodeBlackboardInterface_GetValueAsObject_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsName
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UUTSkillNodeBlackboardInterface::GetValueAsName(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsName");

	UUTSkillNodeBlackboardInterface_GetValueAsName_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsInt
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUTSkillNodeBlackboardInterface::GetValueAsInt(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsInt");

	UUTSkillNodeBlackboardInterface_GetValueAsInt_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsFloat
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUTSkillNodeBlackboardInterface::GetValueAsFloat(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsFloat");

	UUTSkillNodeBlackboardInterface_GetValueAsFloat_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsEnum
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UUTSkillNodeBlackboardInterface::GetValueAsEnum(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsEnum");

	UUTSkillNodeBlackboardInterface_GetValueAsEnum_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsClass
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUTSkillNodeBlackboardInterface::GetValueAsClass(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsClass");

	UUTSkillNodeBlackboardInterface_GetValueAsClass_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsBool
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillNodeBlackboardInterface::GetValueAsBool(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsBool");

	UUTSkillNodeBlackboardInterface_GetValueAsBool_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetValueAsActor
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UUTSkillNodeBlackboardInterface::GetValueAsActor(const struct FName& KeyName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetValueAsActor");

	UUTSkillNodeBlackboardInterface_GetValueAsActor_Params params;
	params.KeyName = KeyName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillNodeBlackboardInterface.GetUAEBlackboard
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUAEBlackboard*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEBlackboard* UUTSkillNodeBlackboardInterface::GetUAEBlackboard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillNodeBlackboardInterface.GetUAEBlackboard");

	UUTSkillNodeBlackboardInterface_GetUAEBlackboard_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillSpecificAction.UpdateAction_Internal
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::UpdateAction_Internal(float DeltaSeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.UpdateAction_Internal");

	UUTSkillSpecificAction_UpdateAction_Internal_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillSpecificAction.UndoAction_Internal
// (Native, Public, BlueprintCallable)

void UUTSkillSpecificAction::UndoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.UndoAction_Internal");

	UUTSkillSpecificAction_UndoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillSpecificAction.Reset_Internal
// (Native, Public, BlueprintCallable)

void UUTSkillSpecificAction::Reset_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.Reset_Internal");

	UUTSkillSpecificAction_Reset_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillSpecificAction.RealDoAction_Internal
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUTSkillSpecificAction::RealDoAction_Internal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.RealDoAction_Internal");

	UUTSkillSpecificAction_RealDoAction_Internal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Skill.UTSkillSpecificAction.PreCloseSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::PreCloseSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.PreCloseSkill");

	UUTSkillSpecificAction_PreCloseSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillSpecificAction.PostInitSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::PostInitSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.PostInitSkill");

	UUTSkillSpecificAction_PostInitSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Skill.UTSkillSpecificAction.PostActiveSkill
// (Native, Public)
// Parameters:
// class UUTSkillManagerComponent* SkillManagerComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AUTSkill*                CurOwnerSkill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUTSkillSpecificAction::PostActiveSkill(class UUTSkillManagerComponent* SkillManagerComponent, class AUTSkill* CurOwnerSkill)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Skill.UTSkillSpecificAction.PostActiveSkill");

	UUTSkillSpecificAction_PostActiveSkill_Params params;
	params.SkillManagerComponent = SkillManagerComponent;
	params.CurOwnerSkill = CurOwnerSkill;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

