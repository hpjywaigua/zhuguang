// Pubg Mobile Battelgrounds (3.0.0 -- 64Bit) SDK Generate By @hhamk2
// Telegram Channel:- @SANSERO_MOD_1
// Generate on Mon Jan  8 10:14:12 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------
//Functions
//---------------------❣︎➪𝐒𝐀𝐍𝐒𝐄𝐑𝐎 𝐃𝐄𝐕𝐄𝐋𝐎𝐏𝐄𝐑༆✈︎🇪🇬---------------------------

// Function AI.AESpawner.SwitchTeamAI
// (Final, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::SwitchTeamAI(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.SwitchTeamAI");

	AAESpawner_SwitchTeamAI_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnUnitTakeDamageEvent
// (Final, Native, Protected, HasOutParms)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnUnitTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnUnitTakeDamageEvent");

	AAESpawner_OnUnitTakeDamageEvent_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.Victim = Victim;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnUnitSpawned
// (Native, Public, HasOutParms)
// Parameters:
// class AActor*                  NewUnit                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FSTSpawnParam           SpawnParam                     (ConstParm, Parm, OutParm, ReferenceParm)
// class ASTSpawnerBase*          Spawner                        (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnUnitSpawned(class AActor* NewUnit, const struct FSTSpawnParam& SpawnParam, class ASTSpawnerBase* Spawner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnUnitSpawned");

	AAESpawner_OnUnitSpawned_Params params;
	params.NewUnit = NewUnit;
	params.SpawnParam = SpawnParam;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnSpawnTimingRipe
// (Native, Protected)
// Parameters:
// bool                           IsRipe                         (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnSpawnTimingRipe(bool IsRipe)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnSpawnTimingRipe");

	AAESpawner_OnSpawnTimingRipe_Params params;
	params.IsRipe = IsRipe;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnOwnedMobDead
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class ASTExtraSimpleCharacter* DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnOwnedMobDead(class ASTExtraSimpleCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnOwnedMobDead");

	AAESpawner_OnOwnedMobDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.OnOwnedFakePlayerDead
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class ASTExtraBaseCharacter*   DeadCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              KillingHitInfo                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 KillingHitImpulseDir           (Parm, IsPlainOldData)
// class UClass*                  KillingHitDamageType           (Parm, ZeroConstructor, IsPlainOldData)

void AAESpawner::OnOwnedFakePlayerDead(class ASTExtraBaseCharacter* DeadCharacter, class AController* Killer, class AActor* DamageCauser, const struct FHitResult& KillingHitInfo, const struct FVector& KillingHitImpulseDir, class UClass* KillingHitDamageType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.OnOwnedFakePlayerDead");

	AAESpawner_OnOwnedFakePlayerDead_Params params;
	params.DeadCharacter = DeadCharacter;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;
	params.KillingHitInfo = KillingHitInfo;
	params.KillingHitImpulseDir = KillingHitImpulseDir;
	params.KillingHitDamageType = KillingHitDamageType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.GetSpeciesCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EBotCategray>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EBotCategray> AAESpawner::GetSpeciesCategory()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GetSpeciesCategory");

	AAESpawner_GetSpeciesCategory_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawner.GetSpawnerTeamID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAESpawner::GetSpawnerTeamID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GetSpawnerTeamID");

	AAESpawner_GetSpawnerTeamID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawner.GetSpawnerGroupID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAESpawner::GetSpawnerGroupID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GetSpawnerGroupID");

	AAESpawner_GetSpawnerGroupID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawner.GenerateParamID
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            BaseParamID                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSTSpawnParam           SpawnParam                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AAESpawner::GenerateParamID(int ConfigId, int BaseParamID, const struct FSTSpawnParam& SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.GenerateParamID");

	AAESpawner_GenerateParamID_Params params;
	params.ConfigId = ConfigId;
	params.BaseParamID = BaseParamID;
	params.SpawnParam = SpawnParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawner.DeactivateSpawner
// (Native, Public, BlueprintCallable)

void AAESpawner::DeactivateSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.DeactivateSpawner");

	AAESpawner_DeactivateSpawner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.BPOnUnitSpawned
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class APawn*                   AIPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ConfigId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSTSpawnParam           SpawnParam                     (ConstParm, Parm, OutParm, ReferenceParm)

void AAESpawner::BPOnUnitSpawned(class APawn* AIPawn, int ConfigId, const struct FSTSpawnParam& SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.BPOnUnitSpawned");

	AAESpawner_BPOnUnitSpawned_Params params;
	params.AIPawn = AIPawn;
	params.ConfigId = ConfigId;
	params.SpawnParam = SpawnParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawner.ActivateSpawner
// (Native, Public, BlueprintCallable)

void AAESpawner::ActivateSpawner()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawner.ActivateSpawner");

	AAESpawner_ActivateSpawner_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawnSubsystem.SpawnUnit
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FSTSpawnParam           SpawnParam                     (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAESpawnSubsystem::SpawnUnit(const struct FSTSpawnParam& SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.SpawnUnit");

	UAESpawnSubsystem_SpawnUnit_Params params;
	params.SpawnParam = SpawnParam;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.RegisterSpawner
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTSpawnerBase*          Spawner                        (Parm, ZeroConstructor, IsPlainOldData)

void UAESpawnSubsystem::RegisterSpawner(class ASTSpawnerBase* Spawner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.RegisterSpawner");

	UAESpawnSubsystem_RegisterSpawner_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawnSubsystem.PreCheck
// (Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAESpawnSubsystem::PreCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.PreCheck");

	UAESpawnSubsystem_PreCheck_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.ModifyThreshold
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TEnumAsByte<EBotCategray>      Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Threshold                      (Parm, ZeroConstructor, IsPlainOldData)

void UAESpawnSubsystem::ModifyThreshold(TEnumAsByte<EBotCategray> Category, int Threshold)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.ModifyThreshold");

	UAESpawnSubsystem_ModifyThreshold_Params params;
	params.Category = Category;
	params.Threshold = Threshold;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawnSubsystem.GetUnitsNumByCategory
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TEnumAsByte<EBotCategray>      Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAESpawnSubsystem::GetUnitsNumByCategory(TEnumAsByte<EBotCategray> Category)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.GetUnitsNumByCategory");

	UAESpawnSubsystem_GetUnitsNumByCategory_Params params;
	params.Category = Category;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.GetUnitConfigID
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Unit                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAESpawnSubsystem::GetUnitConfigID(class AActor* Unit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.GetUnitConfigID");

	UAESpawnSubsystem_GetUnitConfigID_Params params;
	params.Unit = Unit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.GetGroupedSpawners
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            InGroupID                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ASTSpawnerBase*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ASTSpawnerBase*> UAESpawnSubsystem::GetGroupedSpawners(int InGroupID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.GetGroupedSpawners");

	UAESpawnSubsystem_GetGroupedSpawners_Params params;
	params.InGroupID = InGroupID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AESpawnSubsystem.EnQueue
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSTSpawnParam           SpawnParam                     (Parm, OutParm)
// class ASTSpawnerBase*          Spawner                        (Parm, ZeroConstructor, IsPlainOldData)

void UAESpawnSubsystem::EnQueue(class ASTSpawnerBase* Spawner, struct FSTSpawnParam* SpawnParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.EnQueue");

	UAESpawnSubsystem_EnQueue_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SpawnParam != nullptr)
		*SpawnParam = params.SpawnParam;
}


// Function AI.AESpawnSubsystem.CleanQueue
// (Native, Public, BlueprintCallable)

void UAESpawnSubsystem::CleanQueue()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.CleanQueue");

	UAESpawnSubsystem_CleanQueue_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AESpawnSubsystem.CheckCategoryLimit
// (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// class ASTSpawnerBase*          Spawner                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            AvailableBalance               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAESpawnSubsystem::CheckCategoryLimit(class ASTSpawnerBase* Spawner, int* AvailableBalance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AESpawnSubsystem.CheckCategoryLimit");

	UAESpawnSubsystem_CheckCategoryLimit_Params params;
	params.Spawner = Spawner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AvailableBalance != nullptr)
		*AvailableBalance = params.AvailableBalance;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.UseItem
// (Final, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::UseItem(int ItemId, int WeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.UseItem");

	UAIActionExecutionComponent_UseItem_Params params;
	params.ItemId = ItemId;
	params.WeaponSlot = WeaponSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SwapAttachmentItem
// (Final, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SourceWeaponSlot               (Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetWeaponSlot               (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::SwapAttachmentItem(int ItemId, int SourceWeaponSlot, int TargetWeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SwapAttachmentItem");

	UAIActionExecutionComponent_SwapAttachmentItem_Params params;
	params.ItemId = ItemId;
	params.SourceWeaponSlot = SourceWeaponSlot;
	params.TargetWeaponSlot = TargetWeaponSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SetGrenadeLastSelectID
// (Final, Native, Public)
// Parameters:
// int                            WeaponId                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::SetGrenadeLastSelectID(int WeaponId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetGrenadeLastSelectID");

	UAIActionExecutionComponent_SetGrenadeLastSelectID_Params params;
	params.WeaponId = WeaponId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SetFocusRotation
// (Final, Native, Public)
// Parameters:
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::SetFocusRotation(float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetFocusRotation");

	UAIActionExecutionComponent_SetFocusRotation_Params params;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.SetCurShootingPose
// (Final, Native, Public)

void UAIActionExecutionComponent::SetCurShootingPose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.SetCurShootingPose");

	UAIActionExecutionComponent_SetCurShootingPose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.RescueTarget
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   RescueCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::RescueTarget(class ASTExtraBaseCharacter* RescueCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.RescueTarget");

	UAIActionExecutionComponent_RescueTarget_Params params;
	params.RescueCharacter = RescueCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.OpenDoor
// (Final, Native, Public)

void UAIActionExecutionComponent::OpenDoor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.OpenDoor");

	UAIActionExecutionComponent_OpenDoor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.OnFakePlayerRespawn
// (Final, Native, Public)

void UAIActionExecutionComponent::OnFakePlayerRespawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.OnFakePlayerRespawn");

	UAIActionExecutionComponent_OnFakePlayerRespawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.IsValid
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIActionExecutionComponent::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.IsValid");

	UAIActionExecutionComponent_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.IsFreeCamera
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIActionExecutionComponent::IsFreeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.IsFreeCamera");

	UAIActionExecutionComponent_IsFreeCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.GetPickActorWithID
// (Final, Native, Public)
// Parameters:
// int                            UID                            (Parm, ZeroConstructor, IsPlainOldData)
// class APickUpWrapperActor*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APickUpWrapperActor* UAIActionExecutionComponent::GetPickActorWithID(int UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetPickActorWithID");

	UAIActionExecutionComponent_GetPickActorWithID_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.GetOwnerBaseCharacter
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* UAIActionExecutionComponent::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetOwnerBaseCharacter");

	UAIActionExecutionComponent_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.GetBackpackComponent
// (Final, Native, Public)
// Parameters:
// class UBackpackComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBackpackComponent* UAIActionExecutionComponent::GetBackpackComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.GetBackpackComponent");

	UAIActionExecutionComponent_GetBackpackComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIActionExecutionComponent.DropItem
// (Final, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DropItem(int ItemId, int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DropItem");

	UAIActionExecutionComponent_DropItem_Params params;
	params.ItemId = ItemId;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.DoActionMove
// (Final, Native, Public)
// Parameters:
// bool                           IsRun                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionX                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionY                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DirectionZ                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DoActionMove(bool IsRun, float DirectionX, float DirectionY, float DirectionZ)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionMove");

	UAIActionExecutionComponent_DoActionMove_Params params;
	params.IsRun = IsRun;
	params.DirectionX = DirectionX;
	params.DirectionY = DirectionY;
	params.DirectionZ = DirectionZ;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.DoActionFreeCamera
// (Final, Native, Public)
// Parameters:
// bool                           IsEnter                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DoActionFreeCamera");

	UAIActionExecutionComponent_DoActionFreeCamera_Params params;
	params.IsEnter = IsEnter;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.DisuseItem
// (Final, Native, Public)
// Parameters:
// int                            ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponSlot                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionExecutionComponent::DisuseItem(int ItemId, int WeaponSlot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.DisuseItem");

	UAIActionExecutionComponent_DisuseItem_Params params;
	params.ItemId = ItemId;
	params.WeaponSlot = WeaponSlot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIActionExecutionComponent.CloseDoor
// (Final, Native, Public)

void UAIActionExecutionComponent::CloseDoor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIActionExecutionComponent.CloseDoor");

	UAIActionExecutionComponent_CloseDoor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBasicStateInfoComponent.OnItemStateChanged
// (Native, Public, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)

void UAIBasicStateInfoComponent::OnItemStateChanged(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBasicStateInfoComponent.OnItemStateChanged");

	UAIBasicStateInfoComponent_OnItemStateChanged_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBasicStateInfoComponent.GetTLogAIShootInfo
// (Native, Public)
// Parameters:
// struct FTLogAIShootInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTLogAIShootInfo UAIBasicStateInfoComponent::GetTLogAIShootInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBasicStateInfoComponent.GetTLogAIShootInfo");

	UAIBasicStateInfoComponent_GetTLogAIShootInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBasicStateInfoComponent.GetPickActorWithID
// (Native, Public)
// Parameters:
// int                            UID                            (Parm, ZeroConstructor, IsPlainOldData)
// class APickUpWrapperActor*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APickUpWrapperActor* UAIBasicStateInfoComponent::GetPickActorWithID(int UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBasicStateInfoComponent.GetPickActorWithID");

	UAIBasicStateInfoComponent_GetPickActorWithID_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_VehicleBase.Suicide
// (Native, Public)

void UAIBehaviorAdapter_VehicleBase::Suicide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.Suicide");

	UAIBehaviorAdapter_VehicleBase_Suicide_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.RPC_Client_SetServiceDebugInfo
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FString                 Info                           (Parm, ZeroConstructor)

void UAIBehaviorAdapter_VehicleBase::RPC_Client_SetServiceDebugInfo(const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.RPC_Client_SetServiceDebugInfo");

	UAIBehaviorAdapter_VehicleBase_RPC_Client_SetServiceDebugInfo_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.OnInit
// (Native, Public)

void UAIBehaviorAdapter_VehicleBase::OnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.OnInit");

	UAIBehaviorAdapter_VehicleBase_OnInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.OnDeath
// (Native, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_VehicleBase::OnDeath(class AController* InstigatedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.OnDeath");

	UAIBehaviorAdapter_VehicleBase_OnDeath_Params params;
	params.InstigatedBy = InstigatedBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.LuaCalculateHitRate
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseHitRate                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAIBehaviorAdapter_VehicleBase::LuaCalculateHitRate(float Distance, float BaseHitRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.LuaCalculateHitRate");

	UAIBehaviorAdapter_VehicleBase_LuaCalculateHitRate_Params params;
	params.Distance = Distance;
	params.BaseHitRate = BaseHitRate;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_VehicleBase.IsInBehaviorRegion
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InLocation                     (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_VehicleBase::IsInBehaviorRegion(const struct FVector& InLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.IsInBehaviorRegion");

	UAIBehaviorAdapter_VehicleBase_IsInBehaviorRegion_Params params;
	params.InLocation = InLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_VehicleBase.IsAlive
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_VehicleBase::IsAlive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.IsAlive");

	UAIBehaviorAdapter_VehicleBase_IsAlive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleUnderAttack
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_VehicleBase::HandleOnVehicleUnderAttack(class AController* EventInstigator, const struct FDamageEvent& DamageEvent, class AActor* DamageCauser, float Damage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleUnderAttack");

	UAIBehaviorAdapter_VehicleBase_HandleOnVehicleUnderAttack_Params params;
	params.EventInstigator = EventInstigator;
	params.DamageEvent = DamageEvent;
	params.DamageCauser = DamageCauser;
	params.Damage = Damage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleHealthStateChanged
// (Native, Protected)
// Parameters:
// ESTExtraVehicleHealthState     InVehicleHealthState           (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_VehicleBase::HandleOnVehicleHealthStateChanged(ESTExtraVehicleHealthState InVehicleHealthState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.HandleOnVehicleHealthStateChanged");

	UAIBehaviorAdapter_VehicleBase_HandleOnVehicleHealthStateChanged_Params params;
	params.InVehicleHealthState = InVehicleHealthState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.HandleOnMeshHit
// (Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAIBehaviorAdapter_VehicleBase::HandleOnMeshHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.HandleOnMeshHit");

	UAIBehaviorAdapter_VehicleBase_HandleOnMeshHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.BroadcastServiceDebugInfo
// (Native, Public)

void UAIBehaviorAdapter_VehicleBase::BroadcastServiceDebugInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.BroadcastServiceDebugInfo");

	UAIBehaviorAdapter_VehicleBase_BroadcastServiceDebugInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_VehicleBase.BPReceiveDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDamageType>       DamageEventType                (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_VehicleBase::BPReceiveDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, TEnumAsByte<EDamageType> DamageEventType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_VehicleBase.BPReceiveDamage");

	UAIBehaviorAdapter_VehicleBase_BPReceiveDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.DamageEventType = DamageEventType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_Tank.UpdateTurretAimingTarget
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FailedWhenCollided             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_Tank::UpdateTurretAimingTarget(const struct FVector& TargetLocation, float DeltaSeconds, bool FailedWhenCollided)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.UpdateTurretAimingTarget");

	UAIBehaviorAdapter_Tank_UpdateTurretAimingTarget_Params params;
	params.TargetLocation = TargetLocation;
	params.DeltaSeconds = DeltaSeconds;
	params.FailedWhenCollided = FailedWhenCollided;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_Tank.ShootTurret
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_Tank::ShootTurret()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.ShootTurret");

	UAIBehaviorAdapter_Tank_ShootTurret_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_Tank.ShootMachineGun
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_Tank::ShootMachineGun()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.ShootMachineGun");

	UAIBehaviorAdapter_Tank_ShootMachineGun_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_Tank.OnInit
// (Native, Public)

void UAIBehaviorAdapter_Tank::OnInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.OnInit");

	UAIBehaviorAdapter_Tank_OnInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_Tank.OnDeath
// (Native, Public)
// Parameters:
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_Tank::OnDeath(class AController* InstigatedBy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.OnDeath");

	UAIBehaviorAdapter_Tank_OnDeath_Params params;
	params.InstigatedBy = InstigatedBy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_Tank.IsTurretLockTarget
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          LockRadius                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_Tank::IsTurretLockTarget(const struct FVector& TargetLocation, float LockRadius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.IsTurretLockTarget");

	UAIBehaviorAdapter_Tank_IsTurretLockTarget_Params params;
	params.TargetLocation = TargetLocation;
	params.LockRadius = LockRadius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_Tank.IsAlive
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIBehaviorAdapter_Tank::IsAlive()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.IsAlive");

	UAIBehaviorAdapter_Tank_IsAlive_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIBehaviorAdapter_Tank.HandleOnVehicleHealthStateChanged
// (Native, Public)
// Parameters:
// ESTExtraVehicleHealthState     InVehicleHealthState           (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_Tank::HandleOnVehicleHealthStateChanged(ESTExtraVehicleHealthState InVehicleHealthState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.HandleOnVehicleHealthStateChanged");

	UAIBehaviorAdapter_Tank_HandleOnVehicleHealthStateChanged_Params params;
	params.InVehicleHealthState = InVehicleHealthState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIBehaviorAdapter_Tank.BroadcastTankShootWeapon
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           IsTurret                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIBehaviorAdapter_Tank::BroadcastTankShootWeapon(bool IsTurret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIBehaviorAdapter_Tank.BroadcastTankShootWeapon");

	UAIBehaviorAdapter_Tank_BroadcastTankShootWeapon_Params params;
	params.IsTurret = IsTurret;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AISoundCollectionComponent.OnCollectionHearSound
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// ESoundType                     soundType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InPos                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  InSourceActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UAISoundCollectionComponent::OnCollectionHearSound(ESoundType soundType, const struct FVector& InPos, class AActor* InSourceActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AISoundCollectionComponent.OnCollectionHearSound");

	UAISoundCollectionComponent_OnCollectionHearSound_Params params;
	params.soundType = soundType;
	params.InPos = InPos;
	params.InSourceActor = InSourceActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AISoundCollectionComponent.OnAISoundManagerHear
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  InTargetActor                  (Parm, ZeroConstructor, IsPlainOldData)
// ESoundType                     soundType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InPos                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  InSourceActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UAISoundCollectionComponent::OnAISoundManagerHear(class AActor* InTargetActor, ESoundType soundType, const struct FVector& InPos, class AActor* InSourceActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AISoundCollectionComponent.OnAISoundManagerHear");

	UAISoundCollectionComponent_OnAISoundManagerHear_Params params;
	params.InTargetActor = InTargetActor;
	params.soundType = soundType;
	params.InPos = InPos;
	params.InSourceActor = InSourceActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AISoundCollectionComponent.GetCollectSoundInfo
// (Final, Native, Public)
// Parameters:
// TArray<struct FSoundState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSoundState> UAISoundCollectionComponent::GetCollectSoundInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AISoundCollectionComponent.GetCollectSoundInfo");

	UAISoundCollectionComponent_GetCollectSoundInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.SetIsRequestComprehensiveData
// (Final, Native, Static, Private)
// Parameters:
// bool                           InIsRequestComprehensiveData   (Parm, ZeroConstructor, IsPlainOldData)

void UAIStateInfoComponent::SetIsRequestComprehensiveData(bool InIsRequestComprehensiveData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.SetIsRequestComprehensiveData");

	UAIStateInfoComponent_SetIsRequestComprehensiveData_Params params;
	params.InIsRequestComprehensiveData = InIsRequestComprehensiveData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.QueryItemStates
// (Final, Native, Public)
// Parameters:
// int                            MaxBoxNum                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxItemNum                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          AirDropBoxRangeInner           (Parm, ZeroConstructor, IsPlainOldData)
// float                          AirDropBoxRangeOuter           (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeathBoxRange                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          PickUpWrapperRange             (Parm, ZeroConstructor, IsPlainOldData)
// float                          FindBuildingRange              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsUseItemSpotLoc             (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxTreasureChestNum            (Parm, ZeroConstructor, IsPlainOldData)
// float                          TreasureChestRange             (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxWeedNum                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          WeedRange                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemStateData>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemStateData> UAIStateInfoComponent::QueryItemStates(int MaxBoxNum, int MaxItemNum, float AirDropBoxRangeInner, float AirDropBoxRangeOuter, float DeathBoxRange, float PickUpWrapperRange, float FindBuildingRange, bool InIsUseItemSpotLoc, int MaxTreasureChestNum, float TreasureChestRange, int MaxWeedNum, float WeedRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.QueryItemStates");

	UAIStateInfoComponent_QueryItemStates_Params params;
	params.MaxBoxNum = MaxBoxNum;
	params.MaxItemNum = MaxItemNum;
	params.AirDropBoxRangeInner = AirDropBoxRangeInner;
	params.AirDropBoxRangeOuter = AirDropBoxRangeOuter;
	params.DeathBoxRange = DeathBoxRange;
	params.PickUpWrapperRange = PickUpWrapperRange;
	params.FindBuildingRange = FindBuildingRange;
	params.InIsUseItemSpotLoc = InIsUseItemSpotLoc;
	params.MaxTreasureChestNum = MaxTreasureChestNum;
	params.TreasureChestRange = TreasureChestRange;
	params.MaxWeedNum = MaxWeedNum;
	params.WeedRange = WeedRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.OnVehicleDamageInfo
// (Final, Native, Public)
// Parameters:
// class AController*             InstigatorController           (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             VictimController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageTypeId                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFatalHealthCost             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  VictimVehicle                  (Parm, ZeroConstructor, IsPlainOldData)

void UAIStateInfoComponent::OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.OnVehicleDamageInfo");

	UAIStateInfoComponent_OnVehicleDamageInfo_Params params;
	params.InstigatorController = InstigatorController;
	params.VictimController = VictimController;
	params.DamageTypeId = DamageTypeId;
	params.Damage = Damage;
	params.bIsFatalHealthCost = bIsFatalHealthCost;
	params.DamageCauser = DamageCauser;
	params.VictimVehicle = VictimVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.OnFakePlayerRespawn
// (Final, Native, Public)

void UAIStateInfoComponent::OnFakePlayerRespawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.OnFakePlayerRespawn");

	UAIStateInfoComponent_OnFakePlayerRespawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.OnAIStateRequestEnd
// (Final, Native, Public)

void UAIStateInfoComponent::OnAIStateRequestEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.OnAIStateRequestEnd");

	UAIStateInfoComponent_OnAIStateRequestEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.IsValid
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponent::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.IsValid");

	UAIStateInfoComponent_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.IsAvailableBackpacItemType
// (Final, Native, Public, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponent::IsAvailableBackpacItemType(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.IsAvailableBackpacItemType");

	UAIStateInfoComponent_IsAvailableBackpacItemType_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.HasPlayerAround
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponent::HasPlayerAround()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.HasPlayerAround");

	UAIStateInfoComponent_HasPlayerAround_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetViewForwardVector
// (Final, Native, Private, HasDefaults)
// Parameters:
// class ACharacter*              InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAIStateInfoComponent::GetViewForwardVector(class ACharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetViewForwardVector");

	UAIStateInfoComponent_GetViewForwardVector_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetVehicleStatus
// (Final, Native, Static, Public)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraBaseCharacter*   PawnInCar                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVehicleState           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVehicleState UAIStateInfoComponent::GetVehicleStatus(class ASTExtraVehicleBase* InVehicle, class ASTExtraBaseCharacter* PawnInCar)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetVehicleStatus");

	UAIStateInfoComponent_GetVehicleStatus_Params params;
	params.InVehicle = InVehicle;
	params.PawnInCar = PawnInCar;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetTLogAIShootInfo
// (Native, Public)
// Parameters:
// struct FTLogAIShootInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTLogAIShootInfo UAIStateInfoComponent::GetTLogAIShootInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetTLogAIShootInfo");

	UAIStateInfoComponent_GetTLogAIShootInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetTeammatePlayerStateInfo
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         InWhiteList                    (Parm, ZeroConstructor)
// struct FAIStateInfo            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStateInfo UAIStateInfoComponent::GetTeammatePlayerStateInfo(class ASTExtraBaseCharacter* InCharacter, TArray<struct FString> InWhiteList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetTeammatePlayerStateInfo");

	UAIStateInfoComponent_GetTeammatePlayerStateInfo_Params params;
	params.InCharacter = InCharacter;
	params.InWhiteList = InWhiteList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetSoundInfo
// (Final, Native, Public)
// Parameters:
// TArray<struct FSoundState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSoundState> UAIStateInfoComponent::GetSoundInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetSoundInfo");

	UAIStateInfoComponent_GetSoundInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetProgressBarState
// (Final, Native, Public)
// Parameters:
// struct FProgressBarState       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FProgressBarState UAIStateInfoComponent::GetProgressBarState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetProgressBarState");

	UAIStateInfoComponent_GetProgressBarState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetPlayerInteractInfo
// (Final, Native, Public)
// Parameters:
// struct FAIPlayerInteractInfo   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIPlayerInteractInfo UAIStateInfoComponent::GetPlayerInteractInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetPlayerInteractInfo");

	UAIStateInfoComponent_GetPlayerInteractInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetOwnerBaseCharacter
// (Final, Native, Private)
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* UAIStateInfoComponent::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetOwnerBaseCharacter");

	UAIStateInfoComponent_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetObstaclesState
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FObstacleState>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FObstacleState> UAIStateInfoComponent::GetObstaclesState(class ASTExtraBaseCharacter* InPawn, float Range)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetObstaclesState");

	UAIStateInfoComponent_GetObstaclesState_Params params;
	params.InPawn = InPawn;
	params.Range = Range;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetNearbyVehicles
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVehicleState>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVehicleState> UAIStateInfoComponent::GetNearbyVehicles(class ASTExtraBaseCharacter* InPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetNearbyVehicles");

	UAIStateInfoComponent_GetNearbyVehicles_Params params;
	params.InPawn = InPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetGlobalGameState
// (Final, Native, Static, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateLastCache               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGlobalGameState        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGlobalGameState UAIStateInfoComponent::GetGlobalGameState(class UWorld* InWorld, bool bUpdateLastCache)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetGlobalGameState");

	UAIStateInfoComponent_GetGlobalGameState_Params params;
	params.InWorld = InWorld;
	params.bUpdateLastCache = bUpdateLastCache;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetFrameNo
// (Final, Native, Private)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAIStateInfoComponent::GetFrameNo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetFrameNo");

	UAIStateInfoComponent_GetFrameNo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetDoorsState
// (Final, Native, Public)
// Parameters:
// float                          Range                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNum                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDoorState>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FDoorState> UAIStateInfoComponent::GetDoorsState(float Range, int MaxNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetDoorsState");

	UAIStateInfoComponent_GetDoorsState_Params params;
	params.Range = Range;
	params.MaxNum = MaxNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetDiffGlobalGameStateGeneral
// (Final, Native, Static, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FDiffGlobalGameStateGeneral ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDiffGlobalGameStateGeneral UAIStateInfoComponent::GetDiffGlobalGameStateGeneral(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetDiffGlobalGameStateGeneral");

	UAIStateInfoComponent_GetDiffGlobalGameStateGeneral_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetDiffGlobalGameState
// (Final, Native, Static, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FDiffGlobalGameState    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDiffGlobalGameState UAIStateInfoComponent::GetDiffGlobalGameState(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetDiffGlobalGameState");

	UAIStateInfoComponent_GetDiffGlobalGameState_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetDiffAllPlayerStateInfoGeneral
// (Final, Native, Static, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedDebugInfo                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDiffAllPlayerInfoGeneral ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDiffAllPlayerInfoGeneral UAIStateInfoComponent::GetDiffAllPlayerStateInfoGeneral(class UWorld* InWorld, bool bNeedDebugInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetDiffAllPlayerStateInfoGeneral");

	UAIStateInfoComponent_GetDiffAllPlayerStateInfoGeneral_Params params;
	params.InWorld = InWorld;
	params.bNeedDebugInfo = bNeedDebugInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetDiffAllPlayerStateInfoCCS
// (Final, Native, Static, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseDiff                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSeparate                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FDiffAllPlayerInfo      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDiffAllPlayerInfo UAIStateInfoComponent::GetDiffAllPlayerStateInfoCCS(class UWorld* InWorld, bool bUseDiff, bool bSeparate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetDiffAllPlayerStateInfoCCS");

	UAIStateInfoComponent_GetDiffAllPlayerStateInfoCCS_Params params;
	params.InWorld = InWorld;
	params.bUseDiff = bUseDiff;
	params.bSeparate = bSeparate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetDiffAIStateInfoGeneral
// (Final, Native, Public)
// Parameters:
// struct FDiffAIStateInfoGeneral ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDiffAIStateInfoGeneral UAIStateInfoComponent::GetDiffAIStateInfoGeneral()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetDiffAIStateInfoGeneral");

	UAIStateInfoComponent_GetDiffAIStateInfoGeneral_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetDiffAIStateInfo
// (Final, Native, Public)
// Parameters:
// struct FDiffAIStateInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDiffAIStateInfo UAIStateInfoComponent::GetDiffAIStateInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetDiffAIStateInfo");

	UAIStateInfoComponent_GetDiffAIStateInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetDamageSources
// (Final, Native, Public)
// Parameters:
// struct FAIDamageSources        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIDamageSources UAIStateInfoComponent::GetDamageSources()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetDamageSources");

	UAIStateInfoComponent_GetDamageSources_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetCameraState
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FCameraState            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCameraState UAIStateInfoComponent::GetCameraState(class ASTExtraBaseCharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetCameraState");

	UAIStateInfoComponent_GetCameraState_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetAllPlayerStateInfo
// (Final, Native, Static, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNeedUpdateCache               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAIStateInfo>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAIStateInfo> UAIStateInfoComponent::GetAllPlayerStateInfo(class UWorld* InWorld, bool bNeedUpdateCache)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetAllPlayerStateInfo");

	UAIStateInfoComponent_GetAllPlayerStateInfo_Params params;
	params.InWorld = InWorld;
	params.bNeedUpdateCache = bNeedUpdateCache;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetAIStateInfoInternal
// (Final, Native, Public)
// Parameters:
// struct FAIStateInfo            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStateInfo UAIStateInfoComponent::GetAIStateInfoInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetAIStateInfoInternal");

	UAIStateInfoComponent_GetAIStateInfoInternal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetAIStateInfo
// (Final, Native, Public)
// Parameters:
// struct FAIStateInfo            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStateInfo UAIStateInfoComponent::GetAIStateInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetAIStateInfo");

	UAIStateInfoComponent_GetAIStateInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetAIPlayerBackpackItems
// (Final, Native, Public)
// Parameters:
// TArray<struct FAIBackpackItem> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAIBackpackItem> UAIStateInfoComponent::GetAIPlayerBackpackItems()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetAIPlayerBackpackItems");

	UAIStateInfoComponent_GetAIPlayerBackpackItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.GetAINearbyThrownState
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRange                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InCheckAngle                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSmokeRange                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAINearbyThrown> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FAINearbyThrown> UAIStateInfoComponent::GetAINearbyThrownState(class ASTExtraBaseCharacter* InCharacter, float InRange, float InCheckAngle, int MaxNum, float InSmokeRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.GetAINearbyThrownState");

	UAIStateInfoComponent_GetAINearbyThrownState_Params params;
	params.InCharacter = InCharacter;
	params.InRange = InRange;
	params.InCheckAngle = InCheckAngle;
	params.MaxNum = MaxNum;
	params.InSmokeRange = InSmokeRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponent.ClearVehicleDamageInfo
// (Final, Native, Public)

void UAIStateInfoComponent::ClearVehicleDamageInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.ClearVehicleDamageInfo");

	UAIStateInfoComponent_ClearVehicleDamageInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.ClearPlayerInteractInfo
// (Final, Native, Public)

void UAIStateInfoComponent::ClearPlayerInteractInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.ClearPlayerInteractInfo");

	UAIStateInfoComponent_ClearPlayerInteractInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponent.ClearDamageSources
// (Final, Native, Public)

void UAIStateInfoComponent::ClearDamageSources()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponent.ClearDamageSources");

	UAIStateInfoComponent_ClearDamageSources_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.SetIsRequestComprehensiveData
// (Final, Native, Static, Protected)
// Parameters:
// bool                           InIsRequestComprehensiveData   (Parm, ZeroConstructor, IsPlainOldData)

void UAIStateInfoComponentBase::SetIsRequestComprehensiveData(bool InIsRequestComprehensiveData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.SetIsRequestComprehensiveData");

	UAIStateInfoComponentBase_SetIsRequestComprehensiveData_Params params;
	params.InIsRequestComprehensiveData = InIsRequestComprehensiveData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.QueryItemStates
// (Final, Native, Public)
// Parameters:
// int                            MaxBoxNum                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxItemNum                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          AirDropBoxRangeInner           (Parm, ZeroConstructor, IsPlainOldData)
// float                          AirDropBoxRangeOuter           (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeathBoxRange                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          PickUpWrapperRange             (Parm, ZeroConstructor, IsPlainOldData)
// float                          FindBuildingRange              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsUseItemSpotLoc             (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxTreasureChestNum            (Parm, ZeroConstructor, IsPlainOldData)
// float                          TreasureChestRange             (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxWeedNum                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          WeedRange                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemStateData>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemStateData> UAIStateInfoComponentBase::QueryItemStates(int MaxBoxNum, int MaxItemNum, float AirDropBoxRangeInner, float AirDropBoxRangeOuter, float DeathBoxRange, float PickUpWrapperRange, float FindBuildingRange, bool InIsUseItemSpotLoc, int MaxTreasureChestNum, float TreasureChestRange, int MaxWeedNum, float WeedRange)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.QueryItemStates");

	UAIStateInfoComponentBase_QueryItemStates_Params params;
	params.MaxBoxNum = MaxBoxNum;
	params.MaxItemNum = MaxItemNum;
	params.AirDropBoxRangeInner = AirDropBoxRangeInner;
	params.AirDropBoxRangeOuter = AirDropBoxRangeOuter;
	params.DeathBoxRange = DeathBoxRange;
	params.PickUpWrapperRange = PickUpWrapperRange;
	params.FindBuildingRange = FindBuildingRange;
	params.InIsUseItemSpotLoc = InIsUseItemSpotLoc;
	params.MaxTreasureChestNum = MaxTreasureChestNum;
	params.TreasureChestRange = TreasureChestRange;
	params.MaxWeedNum = MaxWeedNum;
	params.WeedRange = WeedRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.OnVehicleDamageInfo
// (Final, Native, Public)
// Parameters:
// class AController*             InstigatorController           (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             VictimController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageTypeId                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFatalHealthCost             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  VictimVehicle                  (Parm, ZeroConstructor, IsPlainOldData)

void UAIStateInfoComponentBase::OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.OnVehicleDamageInfo");

	UAIStateInfoComponentBase_OnVehicleDamageInfo_Params params;
	params.InstigatorController = InstigatorController;
	params.VictimController = VictimController;
	params.DamageTypeId = DamageTypeId;
	params.Damage = Damage;
	params.bIsFatalHealthCost = bIsFatalHealthCost;
	params.DamageCauser = DamageCauser;
	params.VictimVehicle = VictimVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.OnFakePlayerRespawn
// (Final, Native, Public)

void UAIStateInfoComponentBase::OnFakePlayerRespawn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.OnFakePlayerRespawn");

	UAIStateInfoComponentBase_OnFakePlayerRespawn_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.OnAIStateRequestEnd
// (Final, Native, Public)

void UAIStateInfoComponentBase::OnAIStateRequestEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.OnAIStateRequestEnd");

	UAIStateInfoComponentBase_OnAIStateRequestEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.IsValid
// (Final, Native, Protected, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponentBase::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.IsValid");

	UAIStateInfoComponentBase_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.IsAvailableBackpackItemType
// (Final, Native, Public, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponentBase::IsAvailableBackpackItemType(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.IsAvailableBackpackItemType");

	UAIStateInfoComponentBase_IsAvailableBackpackItemType_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.HasPlayerAround
// (Final, Native, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIStateInfoComponentBase::HasPlayerAround()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.HasPlayerAround");

	UAIStateInfoComponentBase_HasPlayerAround_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetViewForwardVector
// (Final, Native, Protected, HasDefaults, Const)
// Parameters:
// class ACharacter*              InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAIStateInfoComponentBase::GetViewForwardVector(class ACharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetViewForwardVector");

	UAIStateInfoComponentBase_GetViewForwardVector_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetTeammatePlayerStateInfo
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         InWhiteList                    (Parm, ZeroConstructor)
// struct FAIStateInfo            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStateInfo UAIStateInfoComponentBase::GetTeammatePlayerStateInfo(class ASTExtraBaseCharacter* InCharacter, TArray<struct FString> InWhiteList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetTeammatePlayerStateInfo");

	UAIStateInfoComponentBase_GetTeammatePlayerStateInfo_Params params;
	params.InCharacter = InCharacter;
	params.InWhiteList = InWhiteList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetSoundInfo
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FSoundState>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FSoundState> UAIStateInfoComponentBase::GetSoundInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetSoundInfo");

	UAIStateInfoComponentBase_GetSoundInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetProgressBarState
// (Final, Native, Public)
// Parameters:
// struct FProgressBarState       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FProgressBarState UAIStateInfoComponentBase::GetProgressBarState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetProgressBarState");

	UAIStateInfoComponentBase_GetProgressBarState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetPlayerInteractInfo
// (Final, Native, Public)
// Parameters:
// struct FAIPlayerInteractInfo   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIPlayerInteractInfo UAIStateInfoComponentBase::GetPlayerInteractInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetPlayerInteractInfo");

	UAIStateInfoComponentBase_GetPlayerInteractInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetOwnerBaseCharacter
// (Final, Native, Protected, Const)
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* UAIStateInfoComponentBase::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetOwnerBaseCharacter");

	UAIStateInfoComponentBase_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetObstaclesState
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FObstacleState>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FObstacleState> UAIStateInfoComponentBase::GetObstaclesState(class ASTExtraBaseCharacter* InPawn, float Range)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetObstaclesState");

	UAIStateInfoComponentBase_GetObstaclesState_Params params;
	params.InPawn = InPawn;
	params.Range = Range;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetFrameNo
// (Final, Native, Protected)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UAIStateInfoComponentBase::GetFrameNo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetFrameNo");

	UAIStateInfoComponentBase_GetFrameNo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetDiffAIStateInfoToCacheGeneral
// (Native, Public)

void UAIStateInfoComponentBase::GetDiffAIStateInfoToCacheGeneral()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetDiffAIStateInfoToCacheGeneral");

	UAIStateInfoComponentBase_GetDiffAIStateInfoToCacheGeneral_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.GetDiffAIStateInfoToCache
// (Native, Public)

void UAIStateInfoComponentBase::GetDiffAIStateInfoToCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetDiffAIStateInfoToCache");

	UAIStateInfoComponentBase_GetDiffAIStateInfoToCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.GetDamageSources
// (Final, Native, Public)
// Parameters:
// struct FAIDamageSources        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIDamageSources UAIStateInfoComponentBase::GetDamageSources()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetDamageSources");

	UAIStateInfoComponentBase_GetDamageSources_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetCameraState
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FCameraState            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCameraState UAIStateInfoComponentBase::GetCameraState(class ASTExtraBaseCharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetCameraState");

	UAIStateInfoComponentBase_GetCameraState_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.AIStateInfoComponentBase.GetAIStateInfoToCache
// (Native, Public)

void UAIStateInfoComponentBase::GetAIStateInfoToCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetAIStateInfoToCache");

	UAIStateInfoComponentBase_GetAIStateInfoToCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.GetAIStateInfoBaseModInternal
// (Final, Native, Public)

void UAIStateInfoComponentBase::GetAIStateInfoBaseModInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetAIStateInfoBaseModInternal");

	UAIStateInfoComponentBase_GetAIStateInfoBaseModInternal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.GetAIPlayerBackpackItems
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<struct FAIBackpackItem> Items                          (Parm, OutParm, ZeroConstructor)

void UAIStateInfoComponentBase::GetAIPlayerBackpackItems(TArray<struct FAIBackpackItem>* Items)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetAIPlayerBackpackItems");

	UAIStateInfoComponentBase_GetAIPlayerBackpackItems_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function AI.AIStateInfoComponentBase.GetAINearbyThrownState
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRange                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InCheckAngle                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSmokeRange                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAINearbyThrown> Ret                            (Parm, OutParm, ZeroConstructor)

void UAIStateInfoComponentBase::GetAINearbyThrownState(class ASTExtraBaseCharacter* InCharacter, float InRange, float InCheckAngle, int MaxNum, float InSmokeRange, TArray<struct FAINearbyThrown>* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.GetAINearbyThrownState");

	UAIStateInfoComponentBase_GetAINearbyThrownState_Params params;
	params.InCharacter = InCharacter;
	params.InRange = InRange;
	params.InCheckAngle = InCheckAngle;
	params.MaxNum = MaxNum;
	params.InSmokeRange = InSmokeRange;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function AI.AIStateInfoComponentBase.ClearVehicleDamageInfo
// (Final, Native, Public)

void UAIStateInfoComponentBase::ClearVehicleDamageInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.ClearVehicleDamageInfo");

	UAIStateInfoComponentBase_ClearVehicleDamageInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.ClearPlayerInteractInfo
// (Final, Native, Public)

void UAIStateInfoComponentBase::ClearPlayerInteractInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.ClearPlayerInteractInfo");

	UAIStateInfoComponentBase_ClearPlayerInteractInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.AIStateInfoComponentBase.ClearDamageSources
// (Final, Native, Public)

void UAIStateInfoComponentBase::ClearDamageSources()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.AIStateInfoComponentBase.ClearDamageSources");

	UAIStateInfoComponentBase_ClearDamageSources_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.BTService_DebugInfo.GetInfo
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBTService_DebugInfo::GetInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BTService_DebugInfo.GetInfo");

	UBTService_DebugInfo_GetInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.BTTask_SummonActor.GetSummonLocations
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Invoker                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UBTTask_SummonActor::GetSummonLocations(class AActor* Invoker)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BTTask_SummonActor.GetSummonLocations");

	UBTTask_SummonActor_GetSummonLocations_Params params;
	params.Invoker = Invoker;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.BTTaskNode_NewParachuteJumpBase.DelayClearParachute
// (Final, Native, Protected)
// Parameters:
// class ASTExtraPlayerCharacter* ControlledPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void UBTTaskNode_NewParachuteJumpBase::DelayClearParachute(class ASTExtraPlayerCharacter* ControlledPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.BTTaskNode_NewParachuteJumpBase.DelayClearParachute");

	UBTTaskNode_NewParachuteJumpBase_DelayClearParachute_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.CustomDamageEventComponent.OnRep_ClientEvents
// (Final, Native, Protected)

void UCustomDamageEventComponent::OnRep_ClientEvents()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.CustomDamageEventComponent.OnRep_ClientEvents");

	UCustomDamageEventComponent_OnRep_ClientEvents_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.CharacterCustomDamageEventComponent.OnTakeDamageEvent
// (Final, Native, Public, HasOutParms)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterCustomDamageEventComponent::OnTakeDamageEvent(float Damage, const struct FDamageEvent& DamageEvent, class AActor* Victim, class AActor* Causer)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.CharacterCustomDamageEventComponent.OnTakeDamageEvent");

	UCharacterCustomDamageEventComponent_OnTakeDamageEvent_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.Victim = Victim;
	params.Causer = Causer;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.UnBindDelegates
// (Final, Native, Public)
// Parameters:
// bool                           IsEndPlay                      (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::UnBindDelegates(bool IsEndPlay)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.UnBindDelegates");

	UMLAIControllerComponent_UnBindDelegates_Params params;
	params.IsEndPlay = IsEndPlay;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetLuaAIParamConfigString
// (Final, Native, Public)
// Parameters:
// struct FString                 InAIParamConfigString          (Parm, ZeroConstructor)
// int                            InLuaAIParamType               (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetLuaAIParamConfigString(const struct FString& InAIParamConfigString, int InLuaAIParamType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetLuaAIParamConfigString");

	UMLAIControllerComponent_SetLuaAIParamConfigString_Params params;
	params.InAIParamConfigString = InAIParamConfigString;
	params.InLuaAIParamType = InLuaAIParamType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetIsMLAI
// (Final, Native, Public)
// Parameters:
// bool                           InIsMLAI                       (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetIsMLAI(bool InIsMLAI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetIsMLAI");

	UMLAIControllerComponent_SetIsMLAI_Params params;
	params.InIsMLAI = InIsMLAI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetCurShootingPose
// (Final, Native, Public)
// Parameters:
// EAIShootingPose                InCurAIShootingPose            (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetCurShootingPose(EAIShootingPose InCurAIShootingPose)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetCurShootingPose");

	UMLAIControllerComponent_SetCurShootingPose_Params params;
	params.InCurAIShootingPose = InCurAIShootingPose;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.SetAILevel
// (Final, Native, Public)
// Parameters:
// uint32_t                       NewAILevel                     (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::SetAILevel(uint32_t NewAILevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.SetAILevel");

	UMLAIControllerComponent_SetAILevel_Params params;
	params.NewAILevel = NewAILevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.IsValid
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAIControllerComponent::IsValid()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.IsValid");

	UMLAIControllerComponent_IsValid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.IsFreeCamera
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAIControllerComponent::IsFreeCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.IsFreeCamera");

	UMLAIControllerComponent_IsFreeCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.InitAIStateInfoComponent
// (Final, Native, Public)
// Parameters:
// class UAIBasicStateInfoComponent* AIStateInfoComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMLAIControllerComponent::InitAIStateInfoComponent(class UAIBasicStateInfoComponent* AIStateInfoComponent)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.InitAIStateInfoComponent");

	UMLAIControllerComponent_InitAIStateInfoComponent_Params params;
	params.AIStateInfoComponent = AIStateInfoComponent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.GetViewRotation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UMLAIControllerComponent::GetViewRotation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetViewRotation");

	UMLAIControllerComponent_GetViewRotation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetViewForwardVector
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UMLAIControllerComponent::GetViewForwardVector()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetViewForwardVector");

	UMLAIControllerComponent_GetViewForwardVector_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetOwnerBaseCharacter
// (Final, Native, Public)
// Parameters:
// class ASTExtraBaseCharacter*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASTExtraBaseCharacter* UMLAIControllerComponent::GetOwnerBaseCharacter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetOwnerBaseCharacter");

	UMLAIControllerComponent_GetOwnerBaseCharacter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetMLAIParachuteJumpComp
// (Final, Native, Public, Const)
// Parameters:
// class UMLAIParachuteJumpComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMLAIParachuteJumpComponent* UMLAIControllerComponent::GetMLAIParachuteJumpComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetMLAIParachuteJumpComp");

	UMLAIControllerComponent_GetMLAIParachuteJumpComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetBackpackComponent
// (Final, Native, Public)
// Parameters:
// class UBackpackComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBackpackComponent* UMLAIControllerComponent::GetBackpackComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetBackpackComponent");

	UMLAIControllerComponent_GetBackpackComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetAIStateInfoComp
// (Final, Native, Public, Const)
// Parameters:
// class UAIBasicStateInfoComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIBasicStateInfoComponent* UMLAIControllerComponent::GetAIStateInfoComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAIStateInfoComp");

	UMLAIControllerComponent_GetAIStateInfoComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetAILevel
// (Final, Native, Public, Const)
// Parameters:
// uint32_t                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

uint32_t UMLAIControllerComponent::GetAILevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAILevel");

	UMLAIControllerComponent_GetAILevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.GetAIActionExecutionComp
// (Final, Native, Public, Const)
// Parameters:
// class UAIActionExecutionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIActionExecutionComponent* UMLAIControllerComponent::GetAIActionExecutionComp()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.GetAIActionExecutionComp");

	UMLAIControllerComponent_GetAIActionExecutionComp_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.DoActionFreeCamera
// (Final, Native, Public)
// Parameters:
// bool                           IsEnter                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPitch                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InYaw                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRoll                         (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIControllerComponent::DoActionFreeCamera(bool IsEnter, float InPitch, float InYaw, float InRoll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.DoActionFreeCamera");

	UMLAIControllerComponent_DoActionFreeCamera_Params params;
	params.IsEnter = IsEnter;
	params.InPitch = InPitch;
	params.InYaw = InYaw;
	params.InRoll = InRoll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIControllerComponent.CheckCameraViewPitchLimit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FRotator                InOutTargetRot                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAIControllerComponent::CheckCameraViewPitchLimit(struct FRotator* InOutTargetRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.CheckCameraViewPitchLimit");

	UMLAIControllerComponent_CheckCameraViewPitchLimit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (InOutTargetRot != nullptr)
		*InOutTargetRot = params.InOutTargetRot;

	return params.ReturnValue;
}


// Function AI.MLAIControllerComponent.BindDelegates
// (Final, Native, Public)

void UMLAIControllerComponent::BindDelegates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIControllerComponent.BindDelegates");

	UMLAIControllerComponent_BindDelegates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.ParachuteMove
// (Final, Native, Public)
// Parameters:
// float                          ForwardRate                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RightRate                      (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIParachuteJumpComponent::ParachuteMove(float ForwardRate, float RightRate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.ParachuteMove");

	UMLAIParachuteJumpComponent_ParachuteMove_Params params;
	params.ForwardRate = ForwardRate;
	params.RightRate = RightRate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.OpenParachute
// (Final, Native, Public)

void UMLAIParachuteJumpComponent::OpenParachute()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.OpenParachute");

	UMLAIParachuteJumpComponent_OpenParachute_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.JumpFromPoint
// (Final, Native, Public)

void UMLAIParachuteJumpComponent::JumpFromPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.JumpFromPoint");

	UMLAIParachuteJumpComponent_JumpFromPoint_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.JumpFromPlane
// (Final, Native, Public)

void UMLAIParachuteJumpComponent::JumpFromPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.JumpFromPlane");

	UMLAIParachuteJumpComponent_JumpFromPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.EnterParachuteJumpPhase
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 StartLoc                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                StartRot                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMLAIParachuteJumpComponent::EnterParachuteJumpPhase(const struct FVector& StartLoc, const struct FRotator& StartRot)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.EnterParachuteJumpPhase");

	UMLAIParachuteJumpComponent_EnterParachuteJumpPhase_Params params;
	params.StartLoc = StartLoc;
	params.StartRot = StartRot;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIParachuteJumpComponent.EndJump
// (Final, Native, Public)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIParachuteJumpComponent::EndJump(bool bSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIParachuteJumpComponent.EndJump");

	UMLAIParachuteJumpComponent_EndJump_Params params;
	params.bSuccess = bSuccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.UpdateSpecialZoneInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSpecialZoneState       NewZoneInfo                    (Parm, OutParm)

void UMLAISubSystem::UpdateSpecialZoneInfo(struct FSpecialZoneState* NewZoneInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UpdateSpecialZoneInfo");

	UMLAISubSystem_UpdateSpecialZoneInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewZoneInfo != nullptr)
		*NewZoneInfo = params.NewZoneInfo;
}


// Function AI.MLAISubSystem.UpdateRedZoneState
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::UpdateRedZoneState(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UpdateRedZoneState");

	UMLAISubSystem_UpdateRedZoneState_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.UpdateAirDropBoxStates
// (Final, Native, Public)

void UMLAISubSystem::UpdateAirDropBoxStates()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.UpdateAirDropBoxStates");

	UMLAISubSystem_UpdateAirDropBoxStates_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.StartRequestCache
// (Final, Native, Public)

void UMLAISubSystem::StartRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.StartRequestCache");

	UMLAISubSystem_StartRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetSpecialZoneCustomState
// (Final, Native, Public)
// Parameters:
// class AActor*                  InParent                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            InCustomState                  (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetSpecialZoneCustomState(class AActor* InParent, int InCustomState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetSpecialZoneCustomState");

	UMLAISubSystem_SetSpecialZoneCustomState_Params params;
	params.InParent = InParent;
	params.InCustomState = InCustomState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.SetMLAIUtils
// (Final, Native, Public)
// Parameters:
// class UMLAIUtilsBase*          MlaiUtils                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::SetMLAIUtils(class UMLAIUtilsBase* MlaiUtils)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.SetMLAIUtils");

	UMLAISubSystem_SetMLAIUtils_Params params;
	params.MlaiUtils = MlaiUtils;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.RemoveSpecialZoneInfo
// (Final, Native, Public)
// Parameters:
// uint32_t                       ZoneID                         (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::RemoveSpecialZoneInfo(uint32_t ZoneID, uint32_t Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.RemoveSpecialZoneInfo");

	UMLAISubSystem_RemoveSpecialZoneInfo_Params params;
	params.ZoneID = ZoneID;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnVehicleDamageInfo
// (Final, Native, Public)
// Parameters:
// class AController*             InstigatorController           (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             VictimController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageTypeId                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFatalHealthCost             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  VictimVehicle                  (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::OnVehicleDamageInfo(class AController* InstigatorController, class AController* VictimController, int DamageTypeId, float Damage, bool bIsFatalHealthCost, class AActor* DamageCauser, class AActor* VictimVehicle)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnVehicleDamageInfo");

	UMLAISubSystem_OnVehicleDamageInfo_Params params;
	params.InstigatorController = InstigatorController;
	params.VictimController = VictimController;
	params.DamageTypeId = DamageTypeId;
	params.Damage = Damage;
	params.bIsFatalHealthCost = bIsFatalHealthCost;
	params.DamageCauser = DamageCauser;
	params.VictimVehicle = VictimVehicle;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnPlayerDamageInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ASTExtraPlayerState*     InstigatorPlayerState          (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerState*     VictimPlayerState              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DamageBeforeCalArmor           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsFatalHealthCost             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsNearDeathHealthCost         (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::OnPlayerDamageInfo(class ASTExtraPlayerState* InstigatorPlayerState, class ASTExtraPlayerState* VictimPlayerState, float Damage, const struct FDamageEvent& DamageEvent, float DamageBeforeCalArmor, bool bIsFatalHealthCost, class AActor* DamageCauser, bool bIsNearDeathHealthCost)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnPlayerDamageInfo");

	UMLAISubSystem_OnPlayerDamageInfo_Params params;
	params.InstigatorPlayerState = InstigatorPlayerState;
	params.VictimPlayerState = VictimPlayerState;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.DamageBeforeCalArmor = DamageBeforeCalArmor;
	params.bIsFatalHealthCost = bIsFatalHealthCost;
	params.DamageCauser = DamageCauser;
	params.bIsNearDeathHealthCost = bIsNearDeathHealthCost;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnItemStateChanged
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)

void UMLAISubSystem::OnItemStateChanged(const struct FVector& Location)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnItemStateChanged");

	UMLAISubSystem_OnItemStateChanged_Params params;
	params.Location = Location;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnAirPlaneRouteSet
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 StartLoc                       (Parm, IsPlainOldData)
// struct FVector                 TargetLoc                      (Parm, IsPlainOldData)
// struct FVector                 CanJumpLoc                     (Parm, IsPlainOldData)
// struct FVector                 ForceJumpLoc                   (Parm, IsPlainOldData)

void UMLAISubSystem::OnAirPlaneRouteSet(const struct FVector& StartLoc, const struct FVector& TargetLoc, const struct FVector& CanJumpLoc, const struct FVector& ForceJumpLoc)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnAirPlaneRouteSet");

	UMLAISubSystem_OnAirPlaneRouteSet_Params params;
	params.StartLoc = StartLoc;
	params.TargetLoc = TargetLoc;
	params.CanJumpLoc = CanJumpLoc;
	params.ForceJumpLoc = ForceJumpLoc;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnAirDropBoxSpawn
// (Final, Native, Public)
// Parameters:
// class AAirDropBoxActor*        AirDropBoxActor                (Parm, ZeroConstructor, IsPlainOldData)

void UMLAISubSystem::OnAirDropBoxSpawn(class AAirDropBoxActor* AirDropBoxActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnAirDropBoxSpawn");

	UMLAISubSystem_OnAirDropBoxSpawn_Params params;
	params.AirDropBoxActor = AirDropBoxActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.OnAirAttackInfo
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// EAirAttackInfo                 airattacktype                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            waveIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FAirAttackOrder         InAirAttackOrder               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 InAirAttackArea                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMLAISubSystem::OnAirAttackInfo(EAirAttackInfo airattacktype, int waveIndex, const struct FAirAttackOrder& InAirAttackOrder, const struct FVector& InAirAttackArea)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.OnAirAttackInfo");

	UMLAISubSystem_OnAirAttackInfo_Params params;
	params.airattacktype = airattacktype;
	params.waveIndex = waveIndex;
	params.InAirAttackOrder = InAirAttackOrder;
	params.InAirAttackArea = InAirAttackArea;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.IsAvailableBackpackItemType
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FItemDefineID           DefineID                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAISubSystem::IsAvailableBackpackItemType(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.IsAvailableBackpackItemType");

	UMLAISubSystem_IsAvailableBackpackItemType_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.IsAIBotGame
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAISubSystem::IsAIBotGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.IsAIBotGame");

	UMLAISubSystem_IsAIBotGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.GetValidTeammatePlayers
// (Final, Native, Public)
// Parameters:
// class UAIStateInfoComponent*   AIStateInfoComp                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class ASTExtraBaseCharacter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ASTExtraBaseCharacter*> UMLAISubSystem::GetValidTeammatePlayers(class UAIStateInfoComponent* AIStateInfoComp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetValidTeammatePlayers");

	UMLAISubSystem_GetValidTeammatePlayers_Params params;
	params.AIStateInfoComp = AIStateInfoComp;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.GetTeammatePlayerStateInfo
// (Final, Native, Public)
// Parameters:
// class UAIStateInfoComponent*   InAIStateInfoComp              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStateInfo            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIStateInfo UMLAISubSystem::GetTeammatePlayerStateInfo(class UAIStateInfoComponent* InAIStateInfoComp, class ASTExtraBaseCharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetTeammatePlayerStateInfo");

	UMLAISubSystem_GetTeammatePlayerStateInfo_Params params;
	params.InAIStateInfoComp = InAIStateInfoComp;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.GetLossTime
// (Final, Native, Public)
// Parameters:
// class ASTExtraPlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMLAISubSystem::GetLossTime(class ASTExtraPlayerController* PlayerController)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetLossTime");

	UMLAISubSystem_GetLossTime_Params params;
	params.PlayerController = PlayerController;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.GetDiffTeammatePlayerStateInfo
// (Final, Native, Public)
// Parameters:
// class UAIStateInfoComponent*   InAIStateInfoComp              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDiffAIStateInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDiffAIStateInfo UMLAISubSystem::GetDiffTeammatePlayerStateInfo(class UAIStateInfoComponent* InAIStateInfoComp, class ASTExtraBaseCharacter* InCharacter)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.GetDiffTeammatePlayerStateInfo");

	UMLAISubSystem_GetDiffTeammatePlayerStateInfo_Params params;
	params.InAIStateInfoComp = InAIStateInfoComp;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAISubSystem.EndRequestCache
// (Final, Native, Public)

void UMLAISubSystem::EndRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.EndRequestCache");

	UMLAISubSystem_EndRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAISubSystem.ChangeMLAIInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AFakePlayerAIController* AIController                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// uint64_t                       DisplayUID                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerOBInfo           OBInfo                         (Parm, OutParm, IsPlainOldData)

void UMLAISubSystem::ChangeMLAIInfo(class AFakePlayerAIController* AIController, const struct FString& Name, uint64_t DisplayUID, struct FPlayerOBInfo* OBInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.ChangeMLAIInfo");

	UMLAISubSystem_ChangeMLAIInfo_Params params;
	params.AIController = AIController;
	params.Name = Name;
	params.DisplayUID = DisplayUID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OBInfo != nullptr)
		*OBInfo = params.OBInfo;
}


// Function AI.MLAISubSystem.AddAIAttributeConfig
// (Final, Native, Public)
// Parameters:
// uint32_t                       InID                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InKey                          (Parm, ZeroConstructor)

void UMLAISubSystem::AddAIAttributeConfig(uint32_t InID, const struct FString& InKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAISubSystem.AddAIAttributeConfig");

	UMLAISubSystem_AddAIAttributeConfig_Params params;
	params.InID = InID;
	params.InKey = InKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.StopRunnable
// (Final, Native, Public)

void UMLAITrainingComponent::StopRunnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.StopRunnable");

	UMLAITrainingComponent_StopRunnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.SetPauseGamePlayerState
// (Final, Native, Public)
// Parameters:
// class APlayerState*            InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)

void UMLAITrainingComponent::SetPauseGamePlayerState(class APlayerState* InPlayerState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SetPauseGamePlayerState");

	UMLAITrainingComponent_SetPauseGamePlayerState_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.SetPause
// (Final, Native, Public)
// Parameters:
// bool                           bInPause                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPauseTime                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAITrainingComponent::SetPause(bool bInPause, float InPauseTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SetPause");

	UMLAITrainingComponent_SetPause_Params params;
	params.bInPause = bInPause;
	params.InPauseTime = InPauseTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAITrainingComponent.SendAIStateRequest
// (Final, Native, Public)
// Parameters:
// TArray<unsigned char>          Packet                         (Parm, ZeroConstructor)

void UMLAITrainingComponent::SendAIStateRequest(TArray<unsigned char> Packet)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.SendAIStateRequest");

	UMLAITrainingComponent_SendAIStateRequest_Params params;
	params.Packet = Packet;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.IsRequestAIState
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMLAITrainingComponent::IsRequestAIState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.IsRequestAIState");

	UMLAITrainingComponent_IsRequestAIState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.MLAITrainingComponent.InitRunnable
// (Final, Native, Public)
// Parameters:
// float                          InStartCollectingInterval      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InSendInterval                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeOutInterval              (Parm, ZeroConstructor, IsPlainOldData)

void UMLAITrainingComponent::InitRunnable(float InStartCollectingInterval, float InSendInterval, float InTimeOutInterval)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.InitRunnable");

	UMLAITrainingComponent_InitRunnable_Params params;
	params.InStartCollectingInterval = InStartCollectingInterval;
	params.InSendInterval = InSendInterval;
	params.InTimeOutInterval = InTimeOutInterval;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAITrainingComponent.EndRequestAIState
// (Final, Native, Public)

void UMLAITrainingComponent::EndRequestAIState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAITrainingComponent.EndRequestAIState");

	UMLAITrainingComponent_EndRequestAIState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.StartRequestCache
// (Native, Public)

void UMLAIUtilsBase::StartRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.StartRequestCache");

	UMLAIUtilsBase_StartRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetGlobalGameStateInfoToCache
// (Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetGlobalGameStateInfoToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetGlobalGameStateInfoToCache");

	UMLAIUtilsBase_GetGlobalGameStateInfoToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffGlobalGameStateInfoToCache
// (Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffGlobalGameStateInfoToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffGlobalGameStateInfoToCache");

	UMLAIUtilsBase_GetDiffGlobalGameStateInfoToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffGlobalGameStateBaseModToCacheGeneral
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffGlobalGameStateBaseModToCacheGeneral(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffGlobalGameStateBaseModToCacheGeneral");

	UMLAIUtilsBase_GetDiffGlobalGameStateBaseModToCacheGeneral_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffGlobalGameStatBaseModToCache
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffGlobalGameStatBaseModToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffGlobalGameStatBaseModToCache");

	UMLAIUtilsBase_GetDiffGlobalGameStatBaseModToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoToCacheCSS
// (Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseDiff                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSeparate                      (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffAllPlayerStateInfoToCacheCSS(class UWorld* InWorld, bool bUseDiff, bool bSeparate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoToCacheCSS");

	UMLAIUtilsBase_GetDiffAllPlayerStateInfoToCacheCSS_Params params;
	params.InWorld = InWorld;
	params.bUseDiff = bUseDiff;
	params.bSeparate = bSeparate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoToCache
// (Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffAllPlayerStateInfoToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoToCache");

	UMLAIUtilsBase_GetDiffAllPlayerStateInfoToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoBaseModToCacheCCS
// (Final, Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseDiff                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSeparate                      (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetDiffAllPlayerStateInfoBaseModToCacheCCS(class UWorld* InWorld, bool bUseDiff, bool bSeparate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetDiffAllPlayerStateInfoBaseModToCacheCCS");

	UMLAIUtilsBase_GetDiffAllPlayerStateInfoBaseModToCacheCCS_Params params;
	params.InWorld = InWorld;
	params.bUseDiff = bUseDiff;
	params.bSeparate = bSeparate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.GetAllPlayerStateInfoToCache
// (Native, Public)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBase::GetAllPlayerStateInfoToCache(class UWorld* InWorld)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.GetAllPlayerStateInfoToCache");

	UMLAIUtilsBase_GetAllPlayerStateInfoToCache_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBase.EndRequestCache
// (Native, Public)

void UMLAIUtilsBase::EndRequestCache()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBase.EndRequestCache");

	UMLAIUtilsBase_EndRequestCache_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.MLAIUtilsBRBase.GetRedZoneState
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UWorld*                  InWorld                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRedZoneState           ZoneState                      (Parm, OutParm)

void UMLAIUtilsBRBase::GetRedZoneState(class UWorld* InWorld, struct FRedZoneState* ZoneState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBRBase.GetRedZoneState");

	UMLAIUtilsBRBase_GetRedZoneState_Params params;
	params.InWorld = InWorld;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ZoneState != nullptr)
		*ZoneState = params.ZoneState;
}


// Function AI.MLAIUtilsBRBase.GetCacheAIPlayerStateInfoBRBase
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ASTExtraBaseCharacter*   InPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIPlayerStateBRBase    AIPlayerState                  (Parm, OutParm)
// bool                           bIsCache                       (Parm, ZeroConstructor, IsPlainOldData)

void UMLAIUtilsBRBase::GetCacheAIPlayerStateInfoBRBase(class ASTExtraBaseCharacter* InPawn, bool bIsCache, struct FAIPlayerStateBRBase* AIPlayerState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBRBase.GetCacheAIPlayerStateInfoBRBase");

	UMLAIUtilsBRBase_GetCacheAIPlayerStateInfoBRBase_Params params;
	params.InPawn = InPawn;
	params.bIsCache = bIsCache;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AIPlayerState != nullptr)
		*AIPlayerState = params.AIPlayerState;
}


// Function AI.MLAIUtilsBRBase.GetAIPlayerStateBRBase
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ASTExtraBaseCharacter*   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIPlayerStateBRBase    Ret                            (Parm, OutParm)

void UMLAIUtilsBRBase::GetAIPlayerStateBRBase(class ASTExtraBaseCharacter* InCharacter, struct FAIPlayerStateBRBase* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.MLAIUtilsBRBase.GetAIPlayerStateBRBase");

	UMLAIUtilsBRBase_GetAIPlayerStateBRBase_Params params;
	params.InCharacter = InCharacter;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function AI.SpecialZoneActor.UpdateCustomState
// (Final, Native, Public)
// Parameters:
// int                            InCustomState                  (Parm, ZeroConstructor, IsPlainOldData)

void ASpecialZoneActor::UpdateCustomState(int InCustomState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.UpdateCustomState");

	ASpecialZoneActor_UpdateCustomState_Params params;
	params.InCustomState = InCustomState;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.SpecialZoneActor.GetSpecialZoneState
// (Final, Native, Public)
// Parameters:
// struct FSpecialZoneState       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSpecialZoneState ASpecialZoneActor::GetSpecialZoneState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.SpecialZoneActor.GetSpecialZoneState");

	ASpecialZoneActor_GetSpecialZoneState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.STStrategyLocation_Range.ModifyBaseLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InLocation                     (Parm, IsPlainOldData)

void USTStrategyLocation_Range::ModifyBaseLocation(const struct FVector& InLocation)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.ModifyBaseLocation");

	USTStrategyLocation_Range_ModifyBaseLocation_Params params;
	params.InLocation = InLocation;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyLocation_Range.GetSpawnLocation
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Requester                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReferenceCount                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  OutArr                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTStrategyLocation_Range::GetSpawnLocation(class AActor* Requester, int ReferenceCount, TArray<struct FSpawnSpotInfo>* OutArr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.GetSpawnLocation");

	USTStrategyLocation_Range_GetSpawnLocation_Params params;
	params.Requester = Requester;
	params.ReferenceCount = ReferenceCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (OutArr != nullptr)
		*OutArr = params.OutArr;

	return params.ReturnValue;
}


// Function AI.STStrategyLocation_Range.AddSpawnArea
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSpawnArea              NewArea                        (Parm)
// bool                           ForceAdd                       (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyLocation_Range::AddSpawnArea(const struct FSpawnArea& NewArea, bool ForceAdd)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.AddSpawnArea");

	USTStrategyLocation_Range_AddSpawnArea_Params params;
	params.NewArea = NewArea;
	params.ForceAdd = ForceAdd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyLocation_Range.ActivateStrategy
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyLocation_Range::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyLocation_Range.ActivateStrategy");

	USTStrategyLocation_Range_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategySpecies_Candidate.Supply
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  SpotSpecies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUnitConfig> USTStrategySpecies_Candidate::Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Candidate.Supply");

	USTStrategySpecies_Candidate_Supply_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SpotSpecies = SpotSpecies;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.STStrategySpecies_Candidate.ActivateStrategy
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategySpecies_Candidate::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Candidate.ActivateStrategy");

	USTStrategySpecies_Candidate_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategySpecies_Lua.Supply
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSpawnSpotInfo>  SpotSpecies                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FUnitConfig>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FUnitConfig> USTStrategySpecies_Lua::Supply(int ReferencedCount, TArray<struct FSpawnSpotInfo> SpotSpecies)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Lua.Supply");

	USTStrategySpecies_Lua_Supply_Params params;
	params.ReferencedCount = ReferencedCount;
	params.SpotSpecies = SpotSpecies;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.STStrategySpecies_Lua.LuaSupply
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ReferencedCount                (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategySpecies_Lua::LuaSupply(int ReferencedCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategySpecies_Lua.LuaSupply");

	USTStrategySpecies_Lua_LuaSupply_Params params;
	params.ReferencedCount = ReferencedCount;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyTiming_Event.TickStrategy
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Event::TickStrategy(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.TickStrategy");

	USTStrategyTiming_Event_TickStrategy_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyTiming_Event.OnSpawnEventBroadcast
// (Final, Native, Public)
// Parameters:
// uint32_t                       SpawnerID                      (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Event::OnSpawnEventBroadcast(uint32_t SpawnerID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.OnSpawnEventBroadcast");

	USTStrategyTiming_Event_OnSpawnEventBroadcast_Params params;
	params.SpawnerID = SpawnerID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.STStrategyTiming_Event.ActivateStrategy
// (Native, Public, BlueprintCallable)
// Parameters:
// class ASTSpawnerBase*          Owner                          (Parm, ZeroConstructor, IsPlainOldData)

void USTStrategyTiming_Event::ActivateStrategy(class ASTSpawnerBase* Owner)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.STStrategyTiming_Event.ActivateStrategy");

	USTStrategyTiming_Event_ActivateStrategy_Params params;
	params.Owner = Owner;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.TeammateMLAIControllerComponent.OnControllerStateChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EStateType                     StateType                      (Parm, ZeroConstructor, IsPlainOldData)

void UTeammateMLAIControllerComponent::OnControllerStateChanged(EStateType StateType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.TeammateMLAIControllerComponent.OnControllerStateChanged");

	UTeammateMLAIControllerComponent_OnControllerStateChanged_Params params;
	params.StateType = StateType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIController.SetCurEnemy
// (Native, Public)
// Parameters:
// class APawn*                   NewEnemy                       (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleAIController::SetCurEnemy(class APawn* NewEnemy)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.SetCurEnemy");

	AVehicleAIController_SetCurEnemy_Params params;
	params.NewEnemy = NewEnemy;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIController.GetVehiclePathFollow
// (Final, Native, Public)
// Parameters:
// class UVehiclePathFollowingComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVehiclePathFollowingComponent* AVehicleAIController::GetVehiclePathFollow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.GetVehiclePathFollow");

	AVehicleAIController_GetVehiclePathFollow_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.VehicleAIController.GetCurEnemy
// (Native, Public)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* AVehicleAIController::GetCurEnemy()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.GetCurEnemy");

	AVehicleAIController_GetCurEnemy_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.VehicleAIController.GetAIHitRate
// (Native, Public)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AVehicleAIController::GetAIHitRate(float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.GetAIHitRate");

	AVehicleAIController_GetAIHitRate_Params params;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AI.VehicleAIController.ExplodeAndDeath
// (Native, Public)

void AVehicleAIController::ExplodeAndDeath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.ExplodeAndDeath");

	AVehicleAIController_ExplodeAndDeath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIController.DelayInitVehicleWeapon
// (Final, Native, Protected)

void AVehicleAIController::DelayInitVehicleWeapon()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIController.DelayInitVehicleWeapon");

	AVehicleAIController_DelayInitVehicleWeapon_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerVehicleLeanOut
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLeanOut                       (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::ServerVehicleLeanOut(bool bLeanOut)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerVehicleLeanOut");

	UVehicleAIUserComponent_ServerVehicleLeanOut_Params params;
	params.bLeanOut = bLeanOut;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerExitVehicle
// (Final, Native, Public, BlueprintCallable)

void UVehicleAIUserComponent::ServerExitVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerExitVehicle");

	UVehicleAIUserComponent_ServerExitVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerEnterVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SeatType                       (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::ServerEnterVehicle(class ASTExtraVehicleBase* InVehicle, unsigned char SeatType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerEnterVehicle");

	UVehicleAIUserComponent_ServerEnterVehicle_Params params;
	params.InVehicle = InVehicle;
	params.SeatType = SeatType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.ServerChangeVehicleSeat
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            InSeatIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::ServerChangeVehicleSeat(int InSeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.ServerChangeVehicleSeat");

	UVehicleAIUserComponent_ServerChangeVehicleSeat_Params params;
	params.InSeatIndex = InSeatIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.MulticastExitVehicle
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void UVehicleAIUserComponent::MulticastExitVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastExitVehicle");

	UVehicleAIUserComponent_MulticastExitVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.MulticastEnterVehicle
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class ASTExtraVehicleBase*     InVehicle                      (Parm, ZeroConstructor, IsPlainOldData)
// class ASTExtraPlayerCharacter* Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  SeatType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::MulticastEnterVehicle(class ASTExtraVehicleBase* InVehicle, class ASTExtraPlayerCharacter* Pawn, bool bSuccess, unsigned char SeatType, int SeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastEnterVehicle");

	UVehicleAIUserComponent_MulticastEnterVehicle_Params params;
	params.InVehicle = InVehicle;
	params.Pawn = Pawn;
	params.bSuccess = bSuccess;
	params.SeatType = SeatType;
	params.SeatIndex = SeatIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleAIUserComponent.MulticastChangeVehicleSeat
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            InSeatIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleAIUserComponent::MulticastChangeVehicleSeat(int InSeatIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleAIUserComponent.MulticastChangeVehicleSeat");

	UVehicleAIUserComponent_MulticastChangeVehicleSeat_Params params;
	params.InSeatIndex = InSeatIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function AI.VehicleCustomDamageEventComponent.OnVehicleHPFuelChanged
// (Final, Native, Public)
// Parameters:
// float                          HP                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Fuel                           (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleCustomDamageEventComponent::OnVehicleHPFuelChanged(float HP, float Fuel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function AI.VehicleCustomDamageEventComponent.OnVehicleHPFuelChanged");

	UVehicleCustomDamageEventComponent_OnVehicleHPFuelChanged_Params params;
	params.HP = HP;
	params.Fuel = Fuel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

